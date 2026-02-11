
/* Label3D::get_aabb() const */

void Label3D::get_aabb(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_RSI;
  undefined8 *in_RDI;
  
  uVar1 = *(undefined8 *)(in_RSI + 0x63c);
  uVar2 = *(undefined8 *)(in_RSI + 0x644);
  in_RDI[2] = *(undefined8 *)(in_RSI + 0x64c);
  *in_RDI = uVar1;
  in_RDI[1] = uVar2;
  return;
}



/* Label3D::get_horizontal_alignment() const */

undefined4 __thiscall Label3D::get_horizontal_alignment(Label3D *this)

{
  return *(undefined4 *)(this + 0x698);
}



/* Label3D::get_vertical_alignment() const */

undefined4 __thiscall Label3D::get_vertical_alignment(Label3D *this)

{
  return *(undefined4 *)(this + 0x69c);
}



/* Label3D::get_text_direction() const */

undefined4 __thiscall Label3D::get_text_direction(Label3D *this)

{
  return *(undefined4 *)(this + 0x718);
}



/* Label3D::get_structured_text_bidi_override() const */

undefined4 __thiscall Label3D::get_structured_text_bidi_override(Label3D *this)

{
  return *(undefined4 *)(this + 0x71c);
}



/* Label3D::is_uppercase() const */

Label3D __thiscall Label3D::is_uppercase(Label3D *this)

{
  return this[0x6b0];
}



/* Label3D::get_render_priority() const */

undefined4 __thiscall Label3D::get_render_priority(Label3D *this)

{
  return *(undefined4 *)(this + 0x6f4);
}



/* Label3D::get_outline_render_priority() const */

undefined4 __thiscall Label3D::get_outline_render_priority(Label3D *this)

{
  return *(undefined4 *)(this + 0x6f0);
}



/* Label3D::get_font_size() const */

undefined4 __thiscall Label3D::get_font_size(Label3D *this)

{
  return *(undefined4 *)(this + 0x6c4);
}



/* Label3D::get_outline_size() const */

undefined4 __thiscall Label3D::get_outline_size(Label3D *this)

{
  return *(undefined4 *)(this + 0x6f8);
}



/* Label3D::get_modulate() const */

undefined1  [16] __thiscall Label3D::get_modulate(Label3D *this)

{
  return *(undefined1 (*) [16])(this + 0x6d8);
}



/* Label3D::get_outline_modulate() const */

undefined1  [16] __thiscall Label3D::get_outline_modulate(Label3D *this)

{
  return *(undefined1 (*) [16])(this + 0x6fc);
}



/* Label3D::get_autowrap_mode() const */

undefined4 __thiscall Label3D::get_autowrap_mode(Label3D *this)

{
  return *(undefined4 *)(this + 0x6b4);
}



/* Label3D::get_justification_flags() const */

undefined8 __thiscall Label3D::get_justification_flags(Label3D *this)

{
  return *(undefined8 *)(this + 0x6b8);
}



/* Label3D::get_width() const */

undefined4 __thiscall Label3D::get_width(Label3D *this)

{
  return *(undefined4 *)(this + 0x6c0);
}



/* Label3D::get_pixel_size() const */

undefined4 __thiscall Label3D::get_pixel_size(Label3D *this)

{
  return *(undefined4 *)(this + 0x620);
}



/* Label3D::get_offset() const */

undefined8 __thiscall Label3D::get_offset(Label3D *this)

{
  return *(undefined8 *)(this + 0x6e8);
}



/* Label3D::get_line_spacing() const */

undefined4 __thiscall Label3D::get_line_spacing(Label3D *this)

{
  return *(undefined4 *)(this + 0x70c);
}



/* Label3D::get_billboard_mode() const */

undefined4 __thiscall Label3D::get_billboard_mode(Label3D *this)

{
  return *(undefined4 *)(this + 0x748);
}



/* Label3D::get_texture_filter() const */

undefined4 __thiscall Label3D::get_texture_filter(Label3D *this)

{
  return *(undefined4 *)(this + 0x74c);
}



/* Label3D::get_alpha_cut_mode() const */

undefined4 __thiscall Label3D::get_alpha_cut_mode(Label3D *this)

{
  return *(undefined4 *)(this + 0x628);
}



/* Label3D::get_alpha_hash_scale() const */

undefined4 __thiscall Label3D::get_alpha_hash_scale(Label3D *this)

{
  return *(undefined4 *)(this + 0x630);
}



/* Label3D::get_alpha_scissor_threshold() const */

undefined4 __thiscall Label3D::get_alpha_scissor_threshold(Label3D *this)

{
  return *(undefined4 *)(this + 0x62c);
}



/* Label3D::get_alpha_antialiasing() const */

undefined4 __thiscall Label3D::get_alpha_antialiasing(Label3D *this)

{
  return *(undefined4 *)(this + 0x634);
}



/* Label3D::get_alpha_antialiasing_edge() const */

undefined4 __thiscall Label3D::get_alpha_antialiasing_edge(Label3D *this)

{
  return *(undefined4 *)(this + 0x638);
}



/* Label3D::get_structured_text_bidi_override_options() const */

void Label3D::get_structured_text_bidi_override_options(void)

{
  long in_RSI;
  Array *in_RDI;
  
  Array::Array(in_RDI,(Array *)(in_RSI + 0x720));
  return;
}



/* Label3D::get_draw_flag(Label3D::DrawFlags) const */

Label3D __thiscall Label3D::get_draw_flag(Label3D *this,uint param_2)

{
  if (param_2 < 4) {
    return this[(long)(int)param_2 + 0x624];
  }
  _err_print_index_error
            ("get_draw_flag","scene/3d/label_3d.cpp",0x3c0,(ulong)param_2,4,"p_flag","FLAG_MAX","",
             false,false);
  return (Label3D)0x0;
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



/* CowData<float>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<float>::_copy_on_write(CowData<float> *this)

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
  __n = lVar2 * 4;
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



/* CowData<float>::_ref(CowData<float> const&) [clone .part.0] */

void __thiscall CowData<float>::_ref(CowData<float> *this,CowData *param_1)

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



/* CowData<Color>::_ref(CowData<Color> const&) [clone .part.0] */

void __thiscall CowData<Color>::_ref(CowData<Color> *this,CowData *param_1)

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



/* CowData<Vector2>::_ref(CowData<Vector2> const&) [clone .part.0] */

void __thiscall CowData<Vector2>::_ref(CowData<Vector2> *this,CowData *param_1)

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



/* Label3D::get_font() const */

void Label3D::get_font(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0x6c8) != 0) {
    *in_RDI = *(long *)(in_RSI + 0x6c8);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* CowData<Vector3>::_ref(CowData<Vector3> const&) [clone .part.0] */

void __thiscall CowData<Vector3>::_ref(CowData<Vector3> *this,CowData *param_1)

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



/* CowData<int>::_ref(CowData<int> const&) [clone .part.0] */

void __thiscall CowData<int>::_ref(CowData<int> *this,CowData *param_1)

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



/* Ref<TextServer>::TEMPNAMEPLACEHOLDERVALUE(Ref<TextServer> const&) [clone .isra.0] */

void __thiscall Ref<TextServer>::operator=(Ref<TextServer> *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  
  pOVar1 = *(Object **)this;
  if (pOVar1 != (Object *)param_1) {
    *(Ref **)this = param_1;
    if (param_1 != (Ref *)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)this = 0;
      }
    }
    if (pOVar1 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar1);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
          return;
        }
      }
    }
  }
  return;
}



/* CowData<RID>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<RID>::_copy_on_write(CowData<RID> *this)

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



/* Label3D::get_language() const */

void Label3D::get_language(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0x710) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0x710));
  }
  return;
}



/* Label3D::get_text() const */

void Label3D::get_text(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0x6a0) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0x6a0));
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
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  lVar2 = *(long *)(param_1 + 8);
  *puVar3 = 0;
  puVar3[6] = 0;
  puVar3[10] = 6;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar3 + 0xc) = (undefined1  [16])0x0;
  *puVar3 = *(undefined4 *)param_1;
  if (lVar2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 2),(CowData *)(param_1 + 8));
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)(param_1 + 0x10));
  puVar3[6] = *(undefined4 *)(param_1 + 0x18);
  if (*(long *)(puVar3 + 8) != *(long *)(param_1 + 0x20)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)(param_1 + 0x20));
  }
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



/* CowData<Vector3>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector3>::_copy_on_write(CowData<Vector3> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  size_t __n;
  ulong uVar5;
  
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
  __n = lVar2 * 0xc;
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



/* CowData<int>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<int>::_copy_on_write(CowData<int> *this)

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
  __n = lVar2 * 4;
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



/* PropertyInfo::TEMPNAMEPLACEHOLDERVALUE(PropertyInfo&&) [clone .isra.0] */

void __thiscall PropertyInfo::operator=(PropertyInfo *this,PropertyInfo *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  *(undefined4 *)this = *(undefined4 *)param_1;
  lVar2 = *(long *)(this + 8);
  if (lVar2 != lVar3) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar3 = *(long *)(this + 8);
        *(undefined8 *)(this + 8) = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
        lVar3 = *(long *)(param_1 + 8);
      }
      else {
        *(undefined8 *)(this + 8) = 0;
        lVar3 = *(long *)(param_1 + 8);
      }
    }
    *(long *)(this + 8) = lVar3;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  if (*(long *)(this + 0x10) != *(long *)(param_1 + 0x10)) {
    StringName::unref();
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  lVar2 = *(long *)(this + 0x20);
  if (lVar2 != lVar3) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar3 = *(long *)(this + 0x20);
        *(undefined8 *)(this + 0x20) = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
        lVar3 = *(long *)(param_1 + 0x20);
      }
      else {
        *(undefined8 *)(this + 0x20) = 0;
        lVar3 = *(long *)(param_1 + 0x20);
      }
    }
    *(long *)(this + 0x20) = lVar3;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return;
}



/* Label3D::_validate_property(PropertyInfo&) const */

void __thiscall Label3D::_validate_property(Label3D *this,PropertyInfo *param_1)

{
  String *this_00;
  char cVar1;
  
  this_00 = (String *)(param_1 + 8);
  cVar1 = String::operator==(this_00,"material_override");
  if ((((cVar1 != '\0') || (cVar1 = String::operator==(this_00,"material_overlay"), cVar1 != '\0'))
      || (cVar1 = String::operator==(this_00,"lod_bias"), cVar1 != '\0')) ||
     ((cVar1 = String::operator==(this_00,"gi_mode"), cVar1 != '\0' ||
      (cVar1 = String::operator==(this_00,"gi_lightmap_scale"), cVar1 != '\0')))) {
    *(undefined4 *)(param_1 + 0x28) = 2;
  }
  cVar1 = String::operator==(this_00,"cast_shadow");
  if ((cVar1 != '\0') && (*(int *)(this + 0x628) == 0)) {
    *(undefined4 *)(param_1 + 0x28) = 2;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Label3D::Label3D() */

void __thiscall Label3D::Label3D(Label3D *this)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  long *plVar8;
  Object *pOVar9;
  
  GeometryInstance3D::GeometryInstance3D((GeometryInstance3D *)this);
  uVar2 = _LC289;
  uVar7 = __LC31;
  *(undefined ***)this = &PTR__initialize_classv_0012f6d0;
  *(undefined8 *)(this + 0x628) = 0x3f00000000000000;
  *(undefined8 *)(this + 0x6c0) = 0x2043fa0000;
  uVar4 = _LC34;
  *(undefined1 (*) [16])(this + 0x670) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x6f0) = uVar4;
  *(undefined1 (*) [16])(this + 0x680) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x6a0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x6c8) = (undefined1  [16])0x0;
  uVar3 = _LC33;
  *(undefined8 *)(this + 0x620) = 0x3ba3d70a;
  *(undefined8 *)(this + 0x630) = 0x3f800000;
  *(undefined8 *)(this + 0x638) = 0;
  *(undefined8 *)(this + 0x640) = 0;
  *(undefined8 *)(this + 0x648) = 0;
  *(undefined4 *)(this + 0x650) = 0;
  *(undefined8 *)(this + 0x658) = 0;
  *(undefined8 *)(this + 0x660) = 0;
  this[0x6b0] = (Label3D)0x0;
  *(undefined4 *)(this + 0x6b4) = 0;
  *(undefined8 *)(this + 0x6b8) = 0xa3;
  *(undefined8 *)(this + 0x6e8) = 0;
  *(undefined8 *)(this + 0x6f8) = 0xc;
  *(undefined8 *)(this + 0x700) = 0;
  *(undefined8 *)(this + 0x708) = 0x3f800000;
  *(undefined8 *)(this + 0x710) = 0;
  *(undefined8 *)(this + 0x718) = 0;
  *(undefined8 *)(this + 0x690) = uVar7;
  *(undefined8 *)(this + 0x698) = uVar2;
  *(undefined4 *)(this + 0x6d8) = uVar3;
  *(undefined4 *)(this + 0x6dc) = uVar3;
  *(undefined4 *)(this + 0x6e0) = uVar3;
  *(undefined4 *)(this + 0x6e4) = uVar3;
  Array::Array((Array *)(this + 0x720));
  uVar7 = _LC35;
  *(undefined8 *)(this + 0x728) = 0;
  *(undefined8 *)(this + 0x738) = 0;
  *(undefined8 *)(this + 0x748) = uVar7;
  *(undefined8 *)(this + 0x740) = 0;
  *(undefined4 *)(this + 0x750) = 0x1010100;
  StringName::StringName((StringName *)(this + 0x758),"_structured_text_parser",false);
  lVar5 = TextServerManager::singleton;
  *(undefined8 *)(this + 0x768) = 0;
  this[0x760] = (Label3D)0x0;
  pOVar9 = *(Object **)(lVar5 + 0x178);
  *(undefined4 *)(this + 0x624) = 0x100;
  if (pOVar9 != (Object *)0x0) {
    cVar6 = RefCounted::reference();
    if (cVar6 == '\0') {
      pOVar9 = (Object *)0x0;
    }
    uVar7 = (**(code **)(*(long *)pOVar9 + 0x598))(pOVar9,0,0);
    *(undefined8 *)(this + 0x728) = uVar7;
    cVar6 = RefCounted::unreference();
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(pOVar9);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
        Memory::free_static(pOVar9,false);
      }
    }
    plVar8 = (long *)RenderingServer::get_singleton();
    uVar7 = (**(code **)(*plVar8 + 0x2d0))(plVar8);
    *(undefined8 *)(this + 0x660) = uVar7;
    GeometryInstance3D::set_cast_shadows_setting(this,0);
    GeometryInstance3D::set_gi_mode(this,0);
    VisualInstance3D::set_base((RID *)this);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Label3D::_queue_update() [clone .part.0] */

void __thiscall Label3D::_queue_update(Label3D *this)

{
  long in_FS_OFFSET;
  Label3D aLStack_48 [16];
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this[0x750] = (Label3D)0x1;
  create_custom_callable_function_pointer<Label3D>
            (aLStack_48,(char *)this,(_func_void *)"&Label3D::_im_update");
  ::Variant::Variant((Variant *)local_38,0);
  Callable::call_deferredp((Variant **)aLStack_48,0);
  if (::Variant::needs_deinit[local_38[0]] != '\0') {
    ::Variant::_clear_internal();
  }
  Callable::~Callable((Callable *)aLStack_48);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Label3D::_queue_update() */

void __thiscall Label3D::_queue_update(Label3D *this)

{
  if (this[0x750] != (Label3D)0x0) {
    return;
  }
  _queue_update(this);
  return;
}



/* Label3D::set_horizontal_alignment(HorizontalAlignment) */

void __thiscall Label3D::set_horizontal_alignment(Label3D *this,uint param_2)

{
  if (3 < param_2) {
    _err_print_index_error
              ("set_horizontal_alignment","scene/3d/label_3d.cpp",0x28e,(long)(int)param_2,4,
               "(int)p_alignment","4","",false,false);
    return;
  }
  if (*(uint *)(this + 0x698) != param_2) {
    if ((param_2 == 3) || (*(uint *)(this + 0x698) == 3)) {
      this[0x751] = (Label3D)0x1;
    }
    *(uint *)(this + 0x698) = param_2;
    if (this[0x750] == (Label3D)0x0) {
      _queue_update(this);
      return;
    }
  }
  return;
}



/* Label3D::set_vertical_alignment(VerticalAlignment) */

void __thiscall Label3D::set_vertical_alignment(Label3D *this,uint param_2)

{
  if (3 < param_2) {
    _err_print_index_error
              ("set_vertical_alignment","scene/3d/label_3d.cpp",0x29d,(long)(int)param_2,4,
               "(int)p_alignment","4","",false,false);
    return;
  }
  if ((*(uint *)(this + 0x69c) != param_2) &&
     (*(uint *)(this + 0x69c) = param_2, this[0x750] == (Label3D)0x0)) {
    _queue_update(this);
    return;
  }
  return;
}



/* Label3D::set_text_direction(TextServer::Direction) */

void __thiscall Label3D::set_text_direction(Label3D *this,int param_2)

{
  if ((-2 < param_2) && (param_2 < 4)) {
    if (*(int *)(this + 0x718) != param_2) {
      *(int *)(this + 0x718) = param_2;
      this[0x753] = (Label3D)0x1;
      if (this[0x750] == (Label3D)0x0) {
        _queue_update(this);
        return;
      }
    }
    return;
  }
  _err_print_error("set_text_direction","scene/3d/label_3d.cpp",0x2a9,
                   "Condition \"(int)p_text_direction < -1 || (int)p_text_direction > 3\" is true.",
                   0,0);
  return;
}



/* Label3D::set_language(String const&) */

void __thiscall Label3D::set_language(Label3D *this,String *param_1)

{
  char cVar1;
  
  cVar1 = String::operator!=((String *)(this + 0x710),param_1);
  if (cVar1 != '\0') {
    if (*(long *)(this + 0x710) != *(long *)param_1) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x710),(CowData *)param_1);
    }
    this[0x753] = (Label3D)0x1;
    if (this[0x750] == (Label3D)0x0) {
      _queue_update(this);
      return;
    }
  }
  return;
}



/* Label3D::set_structured_text_bidi_override(TextServer::StructuredTextParser) */

void __thiscall Label3D::set_structured_text_bidi_override(Label3D *this,int param_2)

{
  if (*(int *)(this + 0x71c) != param_2) {
    *(int *)(this + 0x71c) = param_2;
    this[0x753] = (Label3D)0x1;
    if (this[0x750] == (Label3D)0x0) {
      _queue_update(this);
      return;
    }
  }
  return;
}



/* Label3D::set_structured_text_bidi_override_options(Array) */

void __thiscall Label3D::set_structured_text_bidi_override_options(Label3D *this,Array *param_2)

{
  char cVar1;
  
  cVar1 = Array::operator!=((Array *)(this + 0x720),param_2);
  if (cVar1 != '\0') {
    Array::operator=((Array *)(this + 0x720),param_2);
    this[0x753] = (Label3D)0x1;
    if (this[0x750] == (Label3D)0x0) {
      _queue_update(this);
      return;
    }
  }
  return;
}



/* Label3D::set_uppercase(bool) */

void __thiscall Label3D::set_uppercase(Label3D *this,bool param_1)

{
  if (this[0x6b0] != (Label3D)param_1) {
    this[0x6b0] = (Label3D)param_1;
    this[0x753] = (Label3D)0x1;
    if (this[0x750] == (Label3D)0x0) {
      _queue_update(this);
      return;
    }
  }
  return;
}



/* Label3D::set_render_priority(int) */

void __thiscall Label3D::set_render_priority(Label3D *this,int param_1)

{
  if (0xff < param_1 + 0x80U) {
    _err_print_error("set_render_priority","scene/3d/label_3d.cpp",0x2e6,
                     "Condition \"p_priority < RenderingServer::MATERIAL_RENDER_PRIORITY_MIN || p_priority > RenderingServer::MATERIAL_RENDER_PRIORITY_MAX\" is true."
                     ,0,0);
    return;
  }
  if ((*(int *)(this + 0x6f4) != param_1) &&
     (*(int *)(this + 0x6f4) = param_1, this[0x750] == (Label3D)0x0)) {
    _queue_update(this);
    return;
  }
  return;
}



/* Label3D::set_outline_render_priority(int) */

void __thiscall Label3D::set_outline_render_priority(Label3D *this,int param_1)

{
  if (0xff < param_1 + 0x80U) {
    _err_print_error("set_outline_render_priority","scene/3d/label_3d.cpp",0x2f2,
                     "Condition \"p_priority < RenderingServer::MATERIAL_RENDER_PRIORITY_MIN || p_priority > RenderingServer::MATERIAL_RENDER_PRIORITY_MAX\" is true."
                     ,0,0);
    return;
  }
  if ((*(int *)(this + 0x6f0) != param_1) &&
     (*(int *)(this + 0x6f0) = param_1, this[0x750] == (Label3D)0x0)) {
    _queue_update(this);
    return;
  }
  return;
}



/* Label3D::_font_changed() */

void __thiscall Label3D::_font_changed(Label3D *this)

{
  this[0x752] = (Label3D)0x1;
  if (this[0x750] != (Label3D)0x0) {
    return;
  }
  _queue_update(this);
  return;
}



/* Label3D::set_font_size(int) */

void __thiscall Label3D::set_font_size(Label3D *this,int param_1)

{
  if (*(int *)(this + 0x6c4) != param_1) {
    *(int *)(this + 0x6c4) = param_1;
    this[0x752] = (Label3D)0x1;
    if (this[0x750] == (Label3D)0x0) {
      _queue_update(this);
      return;
    }
  }
  return;
}



/* Label3D::set_outline_size(int) */

void __thiscall Label3D::set_outline_size(Label3D *this,int param_1)

{
  if ((*(int *)(this + 0x6f8) != param_1) &&
     (*(int *)(this + 0x6f8) = param_1, this[0x750] == (Label3D)0x0)) {
    _queue_update(this);
    return;
  }
  return;
}



/* Label3D::set_autowrap_mode(TextServer::AutowrapMode) */

void __thiscall Label3D::set_autowrap_mode(Label3D *this,int param_2)

{
  if (*(int *)(this + 0x6b4) != param_2) {
    *(int *)(this + 0x6b4) = param_2;
    this[0x751] = (Label3D)0x1;
    if (this[0x750] == (Label3D)0x0) {
      _queue_update(this);
      return;
    }
  }
  return;
}



/* Label3D::set_justification_flags(BitField<TextServer::JustificationFlag>) */

void __thiscall Label3D::set_justification_flags(Label3D *this,long param_2)

{
  if (*(long *)(this + 0x6b8) != param_2) {
    *(long *)(this + 0x6b8) = param_2;
    this[0x751] = (Label3D)0x1;
    if (this[0x750] == (Label3D)0x0) {
      _queue_update(this);
      return;
    }
  }
  return;
}



/* Label3D::set_width(float) */

void __thiscall Label3D::set_width(Label3D *this,float param_1)

{
  if (param_1 != *(float *)(this + 0x6c0)) {
    this[0x751] = (Label3D)0x1;
    *(float *)(this + 0x6c0) = param_1;
    if (this[0x750] == (Label3D)0x0) {
      _queue_update(this);
      return;
    }
  }
  return;
}



/* Label3D::set_pixel_size(float) */

void __thiscall Label3D::set_pixel_size(Label3D *this,float param_1)

{
  if ((param_1 != *(float *)(this + 0x620)) &&
     (*(float *)(this + 0x620) = param_1, this[0x750] == (Label3D)0x0)) {
    _queue_update(this);
    return;
  }
  return;
}



/* Label3D::set_offset(Vector2 const&) */

void __thiscall Label3D::set_offset(Label3D *this,Vector2 *param_1)

{
  if (((*(float *)(this + 0x6e8) != *(float *)param_1) ||
      (*(float *)(this + 0x6ec) != *(float *)(param_1 + 4))) &&
     (*(undefined8 *)(this + 0x6e8) = *(undefined8 *)param_1, this[0x750] == (Label3D)0x0)) {
    _queue_update(this);
    return;
  }
  return;
}



/* Label3D::set_line_spacing(float) */

void __thiscall Label3D::set_line_spacing(Label3D *this,float param_1)

{
  if ((param_1 != *(float *)(this + 0x70c)) &&
     (*(float *)(this + 0x70c) = param_1, this[0x750] == (Label3D)0x0)) {
    _queue_update(this);
    return;
  }
  return;
}



/* Label3D::set_draw_flag(Label3D::DrawFlags, bool) */

void __thiscall Label3D::set_draw_flag(Label3D *this,uint param_2,Label3D param_3)

{
  if (3 < param_2) {
    _err_print_index_error
              ("set_draw_flag","scene/3d/label_3d.cpp",0x3b8,(ulong)param_2,4,"p_flag","FLAG_MAX",""
               ,false,false);
    return;
  }
  if ((this[(long)(int)param_2 + 0x624] != param_3) &&
     (this[(long)(int)param_2 + 0x624] = param_3, this[0x750] == (Label3D)0x0)) {
    _queue_update(this);
    return;
  }
  return;
}



/* Label3D::set_billboard_mode(BaseMaterial3D::BillboardMode) */

void __thiscall Label3D::set_billboard_mode(Label3D *this,uint param_2)

{
  if (2 < param_2) {
    _err_print_index_error
              ("set_billboard_mode","scene/3d/label_3d.cpp",0x3c5,(ulong)param_2,3,"p_mode","3","",
               false,false);
    return;
  }
  if ((*(uint *)(this + 0x748) != param_2) &&
     (*(uint *)(this + 0x748) = param_2, this[0x750] == (Label3D)0x0)) {
    _queue_update(this);
    return;
  }
  return;
}



/* Label3D::set_alpha_cut_mode(Label3D::AlphaCutMode) */

void __thiscall Label3D::set_alpha_cut_mode(Label3D *this,uint param_2)

{
  if (param_2 < 4) {
    if (*(uint *)(this + 0x628) != param_2) {
      *(uint *)(this + 0x628) = param_2;
      if (this[0x750] != (Label3D)0x0) {
        Object::notify_property_list_changed();
        return;
      }
      _queue_update(this);
      Object::notify_property_list_changed();
      return;
    }
  }
  else {
    _err_print_index_error
              ("set_alpha_cut_mode","scene/3d/label_3d.cpp",0x3d1,(ulong)param_2,4,"p_mode",
               "ALPHA_CUT_MAX","",false,false);
  }
  return;
}



/* Label3D::set_texture_filter(BaseMaterial3D::TextureFilter) */

void __thiscall Label3D::set_texture_filter(Label3D *this,int param_2)

{
  if ((*(int *)(this + 0x74c) != param_2) &&
     (*(int *)(this + 0x74c) = param_2, this[0x750] == (Label3D)0x0)) {
    _queue_update(this);
    return;
  }
  return;
}



/* Label3D::set_alpha_hash_scale(float) */

void __thiscall Label3D::set_alpha_hash_scale(Label3D *this,float param_1)

{
  if ((param_1 != *(float *)(this + 0x630)) &&
     (*(float *)(this + 0x630) = param_1, this[0x750] == (Label3D)0x0)) {
    _queue_update(this);
    return;
  }
  return;
}



/* Label3D::set_alpha_scissor_threshold(float) */

void __thiscall Label3D::set_alpha_scissor_threshold(Label3D *this,float param_1)

{
  if ((param_1 != *(float *)(this + 0x62c)) &&
     (*(float *)(this + 0x62c) = param_1, this[0x750] == (Label3D)0x0)) {
    _queue_update(this);
    return;
  }
  return;
}



/* Label3D::set_alpha_antialiasing(BaseMaterial3D::AlphaAntiAliasing) */

void __thiscall Label3D::set_alpha_antialiasing(Label3D *this,int param_2)

{
  if ((*(int *)(this + 0x634) != param_2) &&
     (*(int *)(this + 0x634) = param_2, this[0x750] == (Label3D)0x0)) {
    _queue_update(this);
    return;
  }
  return;
}



/* Label3D::set_alpha_antialiasing_edge(float) */

void __thiscall Label3D::set_alpha_antialiasing_edge(Label3D *this,float param_1)

{
  if ((param_1 != *(float *)(this + 0x638)) &&
     (*(float *)(this + 0x638) = param_1, this[0x750] == (Label3D)0x0)) {
    _queue_update(this);
    return;
  }
  return;
}



/* Label3D::set_outline_modulate(Color const&) */

void __thiscall Label3D::set_outline_modulate(Label3D *this,Color *param_1)

{
  undefined8 uVar1;
  
  if ((((*(float *)(this + 0x6fc) != *(float *)param_1) ||
       (*(float *)(this + 0x700) != *(float *)(param_1 + 4))) ||
      (*(float *)(this + 0x704) != *(float *)(param_1 + 8))) ||
     (*(float *)(this + 0x708) != *(float *)(param_1 + 0xc))) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0x6fc) = *(undefined8 *)param_1;
    *(undefined8 *)(this + 0x704) = uVar1;
    if (this[0x750] == (Label3D)0x0) {
      _queue_update(this);
      return;
    }
  }
  return;
}



/* Label3D::set_modulate(Color const&) */

void __thiscall Label3D::set_modulate(Label3D *this,Color *param_1)

{
  undefined8 uVar1;
  
  if ((((*(float *)(this + 0x6d8) != *(float *)param_1) ||
       (*(float *)(this + 0x6dc) != *(float *)(param_1 + 4))) ||
      (*(float *)(this + 0x6e0) != *(float *)(param_1 + 8))) ||
     (*(float *)(this + 0x6e4) != *(float *)(param_1 + 0xc))) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0x6d8) = *(undefined8 *)param_1;
    *(undefined8 *)(this + 0x6e0) = uVar1;
    if (this[0x750] == (Label3D)0x0) {
      _queue_update(this);
      return;
    }
  }
  return;
}



/* Label3D::set_font(Ref<Font> const&) */

void __thiscall Label3D::set_font(Label3D *this,Ref *param_1)

{
  Callable *pCVar1;
  Callable *pCVar2;
  Object *pOVar3;
  char cVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  Label3D aLStack_48 [24];
  long local_30;
  
  pCVar1 = *(Callable **)(this + 0x6c8);
  pCVar2 = *(Callable **)param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (pCVar2 != pCVar1) {
    if (pCVar1 == (Callable *)0x0) {
      if (pCVar2 != (Callable *)0x0) {
        *(Callable **)(this + 0x6c8) = pCVar2;
        cVar4 = RefCounted::reference();
        pOVar5 = (Object *)0x0;
        if (cVar4 == '\0') goto LAB_00101d09;
        goto LAB_00101c55;
      }
      this[0x752] = (Label3D)0x1;
    }
    else {
      create_custom_callable_function_pointer<Label3D>
                (aLStack_48,(char *)this,(_func_void *)"&Label3D::_font_changed");
      Resource::disconnect_changed(pCVar1);
      Callable::~Callable((Callable *)aLStack_48);
      pOVar3 = *(Object **)param_1;
      pOVar5 = *(Object **)(this + 0x6c8);
      if (pOVar3 != pOVar5) {
        *(Object **)(this + 0x6c8) = pOVar3;
        if ((pOVar3 != (Object *)0x0) && (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
LAB_00101d09:
          *(undefined8 *)(this + 0x6c8) = 0;
        }
        if (((pOVar5 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
           (cVar4 = predelete_handler(pOVar5), cVar4 != '\0')) {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
LAB_00101c55:
        pOVar5 = *(Object **)(this + 0x6c8);
      }
      this[0x752] = (Label3D)0x1;
      if (pOVar5 != (Object *)0x0) {
        create_custom_callable_function_pointer<Label3D>
                  (aLStack_48,(char *)this,(_func_void *)"&Label3D::_font_changed");
        Resource::connect_changed((Callable *)pOVar5,(uint)aLStack_48);
        Callable::~Callable((Callable *)aLStack_48);
      }
    }
    if (this[0x750] == (Label3D)0x0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        _queue_update(this);
        return;
      }
      goto LAB_00101d5c;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101d5c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Label3D::set_text(String const&) */

void __thiscall Label3D::set_text(Label3D *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  long in_FS_OFFSET;
  bool bVar5;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar3 = String::operator==((String *)(this + 0x6a0),param_1);
  if (cVar3 == '\0') {
    if (*(long *)(this + 0x6a0) != *(long *)param_1) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x6a0),(CowData *)param_1);
    }
    StringName::StringName((StringName *)&local_40,"",false);
    cVar3 = Node::can_auto_translate();
    if (cVar3 == '\0') {
      local_48 = 0;
      plVar1 = (long *)(*(long *)param_1 + -0x10);
      if (*(long *)param_1 != 0) {
        do {
          lVar2 = *plVar1;
          if (lVar2 == 0) goto LAB_00101e4e;
          LOCK();
          lVar4 = *plVar1;
          bVar5 = lVar2 == lVar4;
          if (bVar5) {
            *plVar1 = lVar2 + 1;
            lVar4 = lVar2;
          }
          UNLOCK();
        } while (!bVar5);
        if (lVar4 != -1) {
          local_48 = *(long *)param_1;
        }
        goto LAB_00101e4e;
      }
      if (*(long *)(this + 0x6a8) != 0) goto LAB_00101e57;
    }
    else {
      StringName::StringName((StringName *)&local_38,param_1,false);
      Object::tr((StringName *)&local_48,(StringName *)this);
      if ((StringName::configured != '\0') && (local_38 != 0)) {
        StringName::unref();
      }
LAB_00101e4e:
      lVar2 = local_48;
      if (*(long *)(this + 0x6a8) == local_48) {
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
      }
      else {
LAB_00101e57:
        CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x6a8));
        *(long *)(this + 0x6a8) = local_48;
      }
    }
    if ((StringName::configured != '\0') && (local_40 != 0)) {
      StringName::unref();
    }
    this[0x753] = (Label3D)0x1;
    if (this[0x750] == (Label3D)0x0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        _queue_update(this);
        return;
      }
      goto LAB_00101f4b;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101f4b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Error CowData<Vector3>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<Vector3>::resize<false>(CowData<Vector3> *this,long param_1)

{
  long *plVar1;
  int iVar2;
  CowData<Vector3> *pCVar3;
  ulong uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uVar7;
  CowData<Vector3> *pCVar8;
  CowData<Vector3> *pCVar9;
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
    pCVar3 = (CowData<Vector3> *)0x0;
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
    pCVar3 = (CowData<Vector3> *)(lVar11 * 0xc);
    if (pCVar3 != (CowData<Vector3> *)0x0) {
      uVar4 = (ulong)(pCVar3 + -1) | (ulong)(pCVar3 + -1) >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      pCVar3 = (CowData<Vector3> *)((uVar4 | uVar4 >> 0x20) + 1);
    }
  }
  if (param_1 * 0xc != 0) {
    uVar4 = param_1 * 0xc - 1;
    uVar4 = uVar4 | uVar4 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    pCVar9 = (CowData<Vector3> *)(uVar4 | uVar4 >> 0x20);
    pCVar8 = pCVar9 + 1;
    if (pCVar8 != (CowData<Vector3> *)0x0) {
      if (param_1 <= lVar11) {
        if ((pCVar8 != pCVar3) && (iVar2 = _realloc(this,(long)pCVar8), iVar2 != 0)) {
          return;
        }
        if (*(long *)this != 0) {
          *(long *)(*(long *)this + -8) = param_1;
          return;
        }
        FUN_001106fe();
        return;
      }
      if (pCVar8 == pCVar3) {
LAB_0010210c:
        puVar12 = *(undefined8 **)this;
        if (puVar12 == (undefined8 *)0x0) {
          resize<false>((long)pCVar9);
          return;
        }
        lVar10 = puVar12[-1];
        if (param_1 <= lVar10) goto LAB_00102097;
      }
      else {
        if (lVar11 != 0) {
          pCVar9 = this;
          iVar2 = _realloc(this,(long)pCVar8);
          if (iVar2 != 0) {
            return;
          }
          goto LAB_0010210c;
        }
        puVar5 = (undefined8 *)Memory::alloc_static((ulong)(pCVar9 + 0x11),false);
        if (puVar5 == (undefined8 *)0x0) {
          uVar7 = 0x171;
          pcVar6 = "Parameter \"mem_new\" is null.";
          goto LAB_001021b2;
        }
        puVar12 = puVar5 + 2;
        *puVar5 = 1;
        puVar5[1] = 0;
        *(undefined8 **)this = puVar12;
        lVar10 = 0;
      }
      memset((void *)((long)puVar12 + lVar10 * 0xc),0,(param_1 - lVar10) * 0xc);
LAB_00102097:
      puVar12[-1] = param_1;
      return;
    }
  }
  uVar7 = 0x16a;
  pcVar6 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_001021b2:
  _err_print_error("resize","./core/templates/cowdata.h",uVar7,pcVar6,0,0);
  return;
}



/* Label3D::_bind_methods() */

void Label3D::_bind_methods(void)

{
  MethodBind *pMVar1;
  long in_FS_OFFSET;
  undefined8 local_110;
  String local_108 [8];
  undefined8 local_100;
  String local_f8 [8];
  CowData<char32_t> local_f0 [8];
  String local_e8 [8];
  undefined8 local_e0;
  long local_d8;
  undefined8 local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  char *local_a8;
  undefined8 local_a0;
  long local_98;
  undefined *local_78;
  char *pcStack_70;
  undefined8 local_68;
  undefined **local_58;
  undefined1 auStack_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHOD<char_const*>((char *)&local_a8,"set_horizontal_alignment");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,HorizontalAlignment>(set_horizontal_alignment);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHODP((char *)&local_a8,(char ***)"get_horizontal_alignment",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,HorizontalAlignment>(get_horizontal_alignment);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHOD<char_const*>((char *)&local_a8,"set_vertical_alignment");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,VerticalAlignment>(set_vertical_alignment);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHODP((char *)&local_a8,(char ***)"get_vertical_alignment",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,VerticalAlignment>(get_vertical_alignment);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHOD<char_const*>((char *)&local_a8,"set_modulate");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,Color_const&>(set_modulate);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHODP((char *)&local_a8,(char ***)"get_modulate",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,Color>(get_modulate);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHOD<char_const*>((char *)&local_a8,"set_outline_modulate");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,Color_const&>(set_outline_modulate);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHODP((char *)&local_a8,(char ***)"get_outline_modulate",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,Color>(get_outline_modulate);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHOD<char_const*>((char *)&local_a8,"set_text");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,String_const&>(set_text);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHODP((char *)&local_a8,(char ***)"get_text",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,String>(get_text);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHOD<char_const*>((char *)&local_a8,"set_text_direction");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,TextServer::Direction>(set_text_direction);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHODP((char *)&local_a8,(char ***)"get_text_direction",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,TextServer::Direction>(get_text_direction);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHOD<char_const*>((char *)&local_a8,"set_language");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,String_const&>(set_language);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHODP((char *)&local_a8,(char ***)"get_language",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,String>(get_language);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHOD<char_const*>((char *)&local_a8,"set_structured_text_bidi_override");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,TextServer::StructuredTextParser>
                     (set_structured_text_bidi_override);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHODP((char *)&local_a8,(char ***)"get_structured_text_bidi_override",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,TextServer::StructuredTextParser>
                     (get_structured_text_bidi_override);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHOD<char_const*>((char *)&local_a8,"set_structured_text_bidi_override_options");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,Array>(set_structured_text_bidi_override_options);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHODP((char *)&local_a8,(char ***)"get_structured_text_bidi_override_options",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,Array>(get_structured_text_bidi_override_options);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHOD<char_const*>((char *)&local_a8,"set_uppercase");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,bool>(set_uppercase);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHODP((char *)&local_a8,(char ***)"is_uppercase",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,bool>(is_uppercase);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHOD<char_const*>((char *)&local_a8,"set_render_priority");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,int>(set_render_priority);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHODP((char *)&local_a8,(char ***)"get_render_priority",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,int>(get_render_priority);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHOD<char_const*>((char *)&local_a8,"set_outline_render_priority");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,int>(set_outline_render_priority);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHODP((char *)&local_a8,(char ***)"get_outline_render_priority",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,int>(get_outline_render_priority);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHOD<char_const*>((char *)&local_a8,"set_font");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,Ref<Font>const&>(set_font);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHODP((char *)&local_a8,(char ***)"get_font",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,Ref<Font>>(get_font);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHOD<char_const*>((char *)&local_a8,"set_font_size");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,int>(set_font_size);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHODP((char *)&local_a8,(char ***)"get_font_size",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,int>(get_font_size);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHOD<char_const*>((char *)&local_a8,"set_outline_size");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,int>(set_outline_size);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHODP((char *)&local_a8,(char ***)"get_outline_size",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,int>(get_outline_size);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHOD<char_const*>((char *)&local_a8,"set_line_spacing");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,float>(set_line_spacing);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHODP((char *)&local_a8,(char ***)"get_line_spacing",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,float>(get_line_spacing);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHOD<char_const*>((char *)&local_a8,"set_autowrap_mode");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,TextServer::AutowrapMode>(set_autowrap_mode);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHODP((char *)&local_a8,(char ***)"get_autowrap_mode",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,TextServer::AutowrapMode>(get_autowrap_mode);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHOD<char_const*>((char *)&local_a8,"set_justification_flags");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,BitField<TextServer::JustificationFlag>>
                     (set_justification_flags);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHODP((char *)&local_a8,(char ***)"get_justification_flags",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,BitField<TextServer::JustificationFlag>>
                     (get_justification_flags);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHOD<char_const*>((char *)&local_a8,"set_width");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,float>(set_width);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHODP((char *)&local_a8,(char ***)"get_width",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,float>(get_width);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHOD<char_const*>((char *)&local_a8,"set_pixel_size");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,float>(set_pixel_size);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHODP((char *)&local_a8,(char ***)"get_pixel_size",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,float>(get_pixel_size);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHOD<char_const*>((char *)&local_a8,"set_offset");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,Vector2_const&>(set_offset);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHODP((char *)&local_a8,(char ***)"get_offset",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,Vector2>(get_offset);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  local_68 = 0;
  auStack_50._0_8_ = &pcStack_70;
  local_78 = &_LC94;
  pcStack_70 = "enabled";
  local_58 = &local_78;
  D_METHODP((char *)&local_a8,(char ***)"set_draw_flag",(uint)&local_58);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,Label3D::DrawFlags,bool>(set_draw_flag);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHOD<char_const*>((char *)&local_a8,"get_draw_flag");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,bool,Label3D::DrawFlags>(get_draw_flag);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHOD<char_const*>((char *)&local_a8,"set_billboard_mode");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,BaseMaterial3D::BillboardMode>(set_billboard_mode);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHODP((char *)&local_a8,(char ***)"get_billboard_mode",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,BaseMaterial3D::BillboardMode>(get_billboard_mode);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHOD<char_const*>((char *)&local_a8,"set_alpha_cut_mode");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,Label3D::AlphaCutMode>(set_alpha_cut_mode);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHODP((char *)&local_a8,(char ***)"get_alpha_cut_mode",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,Label3D::AlphaCutMode>(get_alpha_cut_mode);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHOD<char_const*>((char *)&local_a8,"set_alpha_scissor_threshold");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,float>(set_alpha_scissor_threshold);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHODP((char *)&local_a8,(char ***)"get_alpha_scissor_threshold",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,float>(get_alpha_scissor_threshold);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHOD<char_const*>((char *)&local_a8,"set_alpha_hash_scale");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,float>(set_alpha_hash_scale);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHODP((char *)&local_a8,(char ***)"get_alpha_hash_scale",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,float>(get_alpha_hash_scale);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHOD<char_const*>((char *)&local_a8,"set_alpha_antialiasing");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,BaseMaterial3D::AlphaAntiAliasing>(set_alpha_antialiasing);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHODP((char *)&local_a8,(char ***)"get_alpha_antialiasing",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,BaseMaterial3D::AlphaAntiAliasing>(get_alpha_antialiasing);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHOD<char_const*>((char *)&local_a8,"set_alpha_antialiasing_edge");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,float>(set_alpha_antialiasing_edge);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHODP((char *)&local_a8,(char ***)"get_alpha_antialiasing_edge",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,float>(get_alpha_antialiasing_edge);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHOD<char_const*>((char *)&local_a8,"set_texture_filter");
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,BaseMaterial3D::TextureFilter>(set_texture_filter);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHODP((char *)&local_a8,(char ***)"get_texture_filter",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,BaseMaterial3D::TextureFilter>(get_texture_filter);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  D_METHODP((char *)&local_a8,(char ***)"generate_triangle_mesh",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<Label3D,Ref<TriangleMesh>>((_func_Ref *)0x1e1);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_a8);
  _scs_create((char *)&local_b8,true);
  _scs_create((char *)&local_c0,true);
  local_c8 = 0;
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"0.0001,128,0.0001,suffix:m");
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"pixel_size");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,3,(String *)&local_d8,1,(String *)&local_d0,6,
             (CowData<char32_t> *)&local_c8);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"Label3D");
  StringName::StringName((StringName *)&local_b0,(String *)&local_e0,false);
  ClassDB::add_property
            ((StringName *)&local_b0,(PropertyInfo *)&local_a8,(StringName *)&local_c0,
             (StringName *)&local_b8,-1);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (StringName::configured != '\0') {
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103d65;
    }
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103d65;
    }
    if (local_b8 != 0) {
      StringName::unref();
    }
  }
LAB_00103d65:
  _scs_create((char *)&local_b8,true);
  _scs_create((char *)&local_c0,true);
  local_c8 = 0;
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"suffix:px");
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"offset");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,5,(String *)&local_d8,0,(String *)&local_d0,6,
             (CowData<char32_t> *)&local_c8);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"Label3D");
  StringName::StringName((StringName *)&local_b0,(String *)&local_e0,false);
  ClassDB::add_property
            ((StringName *)&local_b0,(PropertyInfo *)&local_a8,(StringName *)&local_c0,
             (StringName *)&local_b8,-1);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (StringName::configured != '\0') {
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103ec3;
    }
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103ec3;
    }
    if (local_b8 != 0) {
      StringName::unref();
    }
  }
LAB_00103ec3:
  local_a8 = (char *)0x0;
  String::parse_latin1((String *)&local_a8,"");
  local_b0 = 0;
  String::parse_latin1((String *)&local_b0,"Flags");
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"Label3D");
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  ClassDB::add_property_group((StringName *)&local_b8,(String *)&local_b0,(String *)&local_a8,0);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  _scs_create((char *)&local_b8,true);
  _scs_create((char *)&local_c0,true);
  local_c8 = 0;
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"Disabled,Enabled,Y-Billboard");
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"billboard");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,2,(String *)&local_d8,2,(String *)&local_d0,6,
             (CowData<char32_t> *)&local_c8);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"Label3D");
  StringName::StringName((StringName *)&local_b0,(String *)&local_e0,false);
  ClassDB::add_property
            ((StringName *)&local_b0,(PropertyInfo *)&local_a8,(StringName *)&local_c0,
             (StringName *)&local_b8,-1);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (StringName::configured != '\0') {
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001040c7;
    }
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001040c7;
    }
    if (local_b8 != 0) {
      StringName::unref();
    }
  }
LAB_001040c7:
  _scs_create((char *)&local_b8,true);
  _scs_create((char *)&local_c0,true);
  local_c8 = 0;
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"");
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"shaded");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,1,(String *)&local_d8,0,(String *)&local_d0,6,
             (CowData<char32_t> *)&local_c8);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"Label3D");
  StringName::StringName((StringName *)&local_b0,(String *)&local_e0,false);
  ClassDB::add_property
            ((StringName *)&local_b0,(PropertyInfo *)&local_a8,(StringName *)&local_c0,
             (StringName *)&local_b8,0);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (StringName::configured != '\0') {
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104224;
    }
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104224;
    }
    if (local_b8 != 0) {
      StringName::unref();
    }
  }
LAB_00104224:
  _scs_create((char *)&local_b8,true);
  _scs_create((char *)&local_c0,true);
  local_c8 = 0;
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"");
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"double_sided");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,1,(String *)&local_d8,0,(String *)&local_d0,6,
             (CowData<char32_t> *)&local_c8);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"Label3D");
  StringName::StringName((StringName *)&local_b0,(String *)&local_e0,false);
  ClassDB::add_property
            ((StringName *)&local_b0,(PropertyInfo *)&local_a8,(StringName *)&local_c0,
             (StringName *)&local_b8,1);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (StringName::configured != '\0') {
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104383;
    }
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104383;
    }
    if (local_b8 != 0) {
      StringName::unref();
    }
  }
LAB_00104383:
  _scs_create((char *)&local_b8,true);
  _scs_create((char *)&local_c0,true);
  local_c8 = 0;
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"");
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"no_depth_test");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,1,(String *)&local_d8,0,(String *)&local_d0,6,
             (CowData<char32_t> *)&local_c8);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"Label3D");
  StringName::StringName((StringName *)&local_b0,(String *)&local_e0,false);
  ClassDB::add_property
            ((StringName *)&local_b0,(PropertyInfo *)&local_a8,(StringName *)&local_c0,
             (StringName *)&local_b8,2);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (StringName::configured != '\0') {
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001044e1;
    }
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001044e1;
    }
    if (local_b8 != 0) {
      StringName::unref();
    }
  }
LAB_001044e1:
  _scs_create((char *)&local_b8,true);
  _scs_create((char *)&local_c0,true);
  local_c8 = 0;
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"");
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"fixed_size");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,1,(String *)&local_d8,0,(String *)&local_d0,6,
             (CowData<char32_t> *)&local_c8);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"Label3D");
  StringName::StringName((StringName *)&local_b0,(String *)&local_e0,false);
  ClassDB::add_property
            ((StringName *)&local_b0,(PropertyInfo *)&local_a8,(StringName *)&local_c0,
             (StringName *)&local_b8,3);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (StringName::configured != '\0') {
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010463f;
    }
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010463f;
    }
    if (local_b8 != 0) {
      StringName::unref();
    }
  }
LAB_0010463f:
  _scs_create((char *)&local_b8,true);
  _scs_create((char *)&local_c0,true);
  local_c8 = 0;
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"Disabled,Discard,Opaque Pre-Pass,Alpha Hash");
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"alpha_cut");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,2,(String *)&local_d8,2,(String *)&local_d0,6,
             (CowData<char32_t> *)&local_c8);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"Label3D");
  StringName::StringName((StringName *)&local_b0,(String *)&local_e0,false);
  ClassDB::add_property
            ((StringName *)&local_b0,(PropertyInfo *)&local_a8,(StringName *)&local_c0,
             (StringName *)&local_b8,-1);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (StringName::configured != '\0') {
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001047a1;
    }
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001047a1;
    }
    if (local_b8 != 0) {
      StringName::unref();
    }
  }
LAB_001047a1:
  _scs_create((char *)&local_b8,true);
  _scs_create((char *)&local_c0,true);
  local_c8 = 0;
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"0,1,0.001");
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"alpha_scissor_threshold");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,3,(String *)&local_d8,1,(String *)&local_d0,6,
             (CowData<char32_t> *)&local_c8);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"Label3D");
  StringName::StringName((StringName *)&local_b0,(String *)&local_e0,false);
  ClassDB::add_property
            ((StringName *)&local_b0,(PropertyInfo *)&local_a8,(StringName *)&local_c0,
             (StringName *)&local_b8,-1);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (StringName::configured != '\0') {
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104904;
    }
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104904;
    }
    if (local_b8 != 0) {
      StringName::unref();
    }
  }
LAB_00104904:
  _scs_create((char *)&local_b8,true);
  _scs_create((char *)&local_c0,true);
  local_c8 = 0;
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"0,2,0.01");
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"alpha_hash_scale");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,3,(String *)&local_d8,1,(String *)&local_d0,6,
             (CowData<char32_t> *)&local_c8);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"Label3D");
  StringName::StringName((StringName *)&local_b0,(String *)&local_e0,false);
  ClassDB::add_property
            ((StringName *)&local_b0,(PropertyInfo *)&local_a8,(StringName *)&local_c0,
             (StringName *)&local_b8,-1);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (StringName::configured != '\0') {
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104a66;
    }
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104a66;
    }
    if (local_b8 != 0) {
      StringName::unref();
    }
  }
LAB_00104a66:
  _scs_create((char *)&local_b8,true);
  _scs_create((char *)&local_c0,true);
  local_c8 = 0;
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"Disabled,Alpha Edge Blend,Alpha Edge Clip");
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"alpha_antialiasing_mode");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,2,(String *)&local_d8,2,(String *)&local_d0,6,
             (CowData<char32_t> *)&local_c8);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"Label3D");
  StringName::StringName((StringName *)&local_b0,(String *)&local_e0,false);
  ClassDB::add_property
            ((StringName *)&local_b0,(PropertyInfo *)&local_a8,(StringName *)&local_c0,
             (StringName *)&local_b8,-1);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (StringName::configured != '\0') {
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104bc7;
    }
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104bc7;
    }
    if (local_b8 != 0) {
      StringName::unref();
    }
  }
LAB_00104bc7:
  _scs_create((char *)&local_b8,true);
  _scs_create((char *)&local_c0,true);
  local_c8 = 0;
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"0,1,0.01");
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"alpha_antialiasing_edge");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,3,(String *)&local_d8,1,(String *)&local_d0,6,
             (CowData<char32_t> *)&local_c8);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"Label3D");
  StringName::StringName((StringName *)&local_b0,(String *)&local_e0,false);
  ClassDB::add_property
            ((StringName *)&local_b0,(PropertyInfo *)&local_a8,(StringName *)&local_c0,
             (StringName *)&local_b8,-1);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (StringName::configured != '\0') {
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104d28;
    }
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104d28;
    }
    if (local_b8 != 0) {
      StringName::unref();
    }
  }
LAB_00104d28:
  _scs_create((char *)&local_b8,true);
  _scs_create((char *)&local_c0,true);
  local_c8 = 0;
  local_d0 = 0;
  String::parse_latin1
            ((String *)&local_d0,
             "Nearest,Linear,Nearest Mipmap,Linear Mipmap,Nearest Mipmap Anisotropic,Linear Mipmap Anisotropic"
            );
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"texture_filter");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,2,(String *)&local_d8,2,(String *)&local_d0,6,
             (CowData<char32_t> *)&local_c8);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"Label3D");
  StringName::StringName((StringName *)&local_b0,(String *)&local_e0,false);
  ClassDB::add_property
            ((StringName *)&local_b0,(PropertyInfo *)&local_a8,(StringName *)&local_c0,
             (StringName *)&local_b8,-1);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (StringName::configured != '\0') {
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104e8a;
    }
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104e8a;
    }
    if (local_b8 != 0) {
      StringName::unref();
    }
  }
LAB_00104e8a:
  _scs_create((char *)&local_b8,true);
  _scs_create((char *)&local_c0,true);
  local_c8 = 0;
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,",1");
  itos((long)local_f0);
  local_100 = 0;
  String::parse_latin1((String *)&local_100,",");
  itos((long)local_108);
  String::operator+(local_f8,local_108);
  String::operator+(local_e8,local_f8);
  String::operator+((String *)&local_d8,local_e8);
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"render_priority");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,2,(String *)&local_d0,1,(String *)&local_d8,6,
             (CowData<char32_t> *)&local_c8);
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"Label3D");
  StringName::StringName((StringName *)&local_b0,(String *)&local_110,false);
  ClassDB::add_property
            ((StringName *)&local_b0,(PropertyInfo *)&local_a8,(StringName *)&local_c0,
             (StringName *)&local_b8,-1);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref(local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if (StringName::configured != '\0') {
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001050cf;
    }
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001050cf;
    }
    if (local_b8 != 0) {
      StringName::unref();
    }
  }
LAB_001050cf:
  _scs_create((char *)&local_b8,true);
  _scs_create((char *)&local_c0,true);
  local_c8 = 0;
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,",1");
  itos((long)local_f0);
  local_100 = 0;
  String::parse_latin1((String *)&local_100,",");
  itos((long)local_108);
  String::operator+(local_f8,local_108);
  String::operator+(local_e8,local_f8);
  String::operator+((String *)&local_d8,local_e8);
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"outline_render_priority");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,2,(String *)&local_d0,1,(String *)&local_d8,6,
             (CowData<char32_t> *)&local_c8);
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"Label3D");
  StringName::StringName((StringName *)&local_b0,(String *)&local_110,false);
  ClassDB::add_property
            ((StringName *)&local_b0,(PropertyInfo *)&local_a8,(StringName *)&local_c0,
             (StringName *)&local_b8,-1);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref(local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if (StringName::configured != '\0') {
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001052e0;
    }
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001052e0;
    }
    if (local_b8 != 0) {
      StringName::unref();
    }
  }
LAB_001052e0:
  local_a8 = (char *)0x0;
  String::parse_latin1((String *)&local_a8,"");
  local_b0 = 0;
  String::parse_latin1((String *)&local_b0,"Text");
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"Label3D");
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  ClassDB::add_property_group((StringName *)&local_b8,(String *)&local_b0,(String *)&local_a8,0);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  _scs_create((char *)&local_b8,true);
  _scs_create((char *)&local_c0,true);
  local_c8 = 0;
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"");
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"modulate");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,0x14,(String *)&local_d8,0,(String *)&local_d0,6,
             (CowData<char32_t> *)&local_c8);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"Label3D");
  StringName::StringName((StringName *)&local_b0,(String *)&local_e0,false);
  ClassDB::add_property
            ((StringName *)&local_b0,(PropertyInfo *)&local_a8,(StringName *)&local_c0,
             (StringName *)&local_b8,-1);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (StringName::configured != '\0') {
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001054e0;
    }
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001054e0;
    }
    if (local_b8 != 0) {
      StringName::unref();
    }
  }
LAB_001054e0:
  _scs_create((char *)&local_b8,true);
  _scs_create((char *)&local_c0,true);
  local_c8 = 0;
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"");
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"outline_modulate");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,0x14,(String *)&local_d8,0,(String *)&local_d0,6,
             (CowData<char32_t> *)&local_c8);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"Label3D");
  StringName::StringName((StringName *)&local_b0,(String *)&local_e0,false);
  ClassDB::add_property
            ((StringName *)&local_b0,(PropertyInfo *)&local_a8,(StringName *)&local_c0,
             (StringName *)&local_b8,-1);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (StringName::configured != '\0') {
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010563e;
    }
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010563e;
    }
    if (local_b8 != 0) {
      StringName::unref();
    }
  }
LAB_0010563e:
  _scs_create((char *)&local_b8,true);
  _scs_create((char *)&local_c0,true);
  local_c8 = 0;
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"");
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"text");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,4,(String *)&local_d8,0x12,(String *)&local_d0,6,
             (CowData<char32_t> *)&local_c8);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"Label3D");
  StringName::StringName((StringName *)&local_b0,(String *)&local_e0,false);
  ClassDB::add_property
            ((StringName *)&local_b0,(PropertyInfo *)&local_a8,(StringName *)&local_c0,
             (StringName *)&local_b8,-1);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (StringName::configured != '\0') {
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001057a0;
    }
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001057a0;
    }
    if (local_b8 != 0) {
      StringName::unref();
    }
  }
LAB_001057a0:
  _scs_create((char *)&local_b8,true);
  _scs_create((char *)&local_c0,true);
  local_c8 = 0;
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"Font");
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"font");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,0x18,(String *)&local_d8,0x11,(String *)&local_d0,6,
             (CowData<char32_t> *)&local_c8);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"Label3D");
  StringName::StringName((StringName *)&local_b0,(String *)&local_e0,false);
  ClassDB::add_property
            ((StringName *)&local_b0,(PropertyInfo *)&local_a8,(StringName *)&local_c0,
             (StringName *)&local_b8,-1);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (StringName::configured != '\0') {
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105903;
    }
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105903;
    }
    if (local_b8 != 0) {
      StringName::unref();
    }
  }
LAB_00105903:
  _scs_create((char *)&local_b8,true);
  _scs_create((char *)&local_c0,true);
  local_c8 = 0;
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"1,256,1,or_greater,suffix:px");
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"font_size");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,2,(String *)&local_d8,1,(String *)&local_d0,6,
             (CowData<char32_t> *)&local_c8);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"Label3D");
  StringName::StringName((StringName *)&local_b0,(String *)&local_e0,false);
  ClassDB::add_property
            ((StringName *)&local_b0,(PropertyInfo *)&local_a8,(StringName *)&local_c0,
             (StringName *)&local_b8,-1);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (StringName::configured != '\0') {
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105a65;
    }
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105a65;
    }
    if (local_b8 != 0) {
      StringName::unref();
    }
  }
LAB_00105a65:
  _scs_create((char *)&local_b8,true);
  _scs_create((char *)&local_c0,true);
  local_c8 = 0;
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"0,127,1,suffix:px");
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"outline_size");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,2,(String *)&local_d8,1,(String *)&local_d0,6,
             (CowData<char32_t> *)&local_c8);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"Label3D");
  StringName::StringName((StringName *)&local_b0,(String *)&local_e0,false);
  ClassDB::add_property
            ((StringName *)&local_b0,(PropertyInfo *)&local_a8,(StringName *)&local_c0,
             (StringName *)&local_b8,-1);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (StringName::configured != '\0') {
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105bc6;
    }
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105bc6;
    }
    if (local_b8 != 0) {
      StringName::unref();
    }
  }
LAB_00105bc6:
  _scs_create((char *)&local_b8,true);
  _scs_create((char *)&local_c0,true);
  local_c8 = 0;
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"Left,Center,Right,Fill");
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"horizontal_alignment");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,2,(String *)&local_d8,2,(String *)&local_d0,6,
             (CowData<char32_t> *)&local_c8);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"Label3D");
  StringName::StringName((StringName *)&local_b0,(String *)&local_e0,false);
  ClassDB::add_property
            ((StringName *)&local_b0,(PropertyInfo *)&local_a8,(StringName *)&local_c0,
             (StringName *)&local_b8,-1);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (StringName::configured != '\0') {
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105d27;
    }
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105d27;
    }
    if (local_b8 != 0) {
      StringName::unref();
    }
  }
LAB_00105d27:
  _scs_create((char *)&local_b8,true);
  _scs_create((char *)&local_c0,true);
  local_c8 = 0;
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"Top,Center,Bottom");
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"vertical_alignment");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,2,(String *)&local_d8,2,(String *)&local_d0,6,
             (CowData<char32_t> *)&local_c8);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"Label3D");
  StringName::StringName((StringName *)&local_b0,(String *)&local_e0,false);
  ClassDB::add_property
            ((StringName *)&local_b0,(PropertyInfo *)&local_a8,(StringName *)&local_c0,
             (StringName *)&local_b8,-1);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (StringName::configured != '\0') {
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105e89;
    }
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105e89;
    }
    if (local_b8 != 0) {
      StringName::unref();
    }
  }
LAB_00105e89:
  _scs_create((char *)&local_b8,true);
  _scs_create((char *)&local_c0,true);
  local_c8 = 0;
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"");
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"uppercase");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,1,(String *)&local_d8,0,(String *)&local_d0,6,
             (CowData<char32_t> *)&local_c8);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"Label3D");
  StringName::StringName((StringName *)&local_b0,(String *)&local_e0,false);
  ClassDB::add_property
            ((StringName *)&local_b0,(PropertyInfo *)&local_a8,(StringName *)&local_c0,
             (StringName *)&local_b8,-1);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (StringName::configured != '\0') {
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105fe9;
    }
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105fe9;
    }
    if (local_b8 != 0) {
      StringName::unref();
    }
  }
LAB_00105fe9:
  _scs_create((char *)&local_b8,true);
  _scs_create((char *)&local_c0,true);
  local_c8 = 0;
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"suffix:px");
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"line_spacing");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,3,(String *)&local_d8,0,(String *)&local_d0,6,
             (CowData<char32_t> *)&local_c8);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"Label3D");
  StringName::StringName((StringName *)&local_b0,(String *)&local_e0,false);
  ClassDB::add_property
            ((StringName *)&local_b0,(PropertyInfo *)&local_a8,(StringName *)&local_c0,
             (StringName *)&local_b8,-1);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (StringName::configured != '\0') {
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106148;
    }
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106148;
    }
    if (local_b8 != 0) {
      StringName::unref();
    }
  }
LAB_00106148:
  _scs_create((char *)&local_b8,true);
  _scs_create((char *)&local_c0,true);
  local_c8 = 0;
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"Off,Arbitrary,Word,Word (Smart)");
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"autowrap_mode");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,2,(String *)&local_d8,2,(String *)&local_d0,6,
             (CowData<char32_t> *)&local_c8);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"Label3D");
  StringName::StringName((StringName *)&local_b0,(String *)&local_e0,false);
  ClassDB::add_property
            ((StringName *)&local_b0,(PropertyInfo *)&local_a8,(StringName *)&local_c0,
             (StringName *)&local_b8,-1);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (StringName::configured != '\0') {
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001062a9;
    }
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001062a9;
    }
    if (local_b8 != 0) {
      StringName::unref();
    }
  }
LAB_001062a9:
  _scs_create((char *)&local_b8,true);
  _scs_create((char *)&local_c0,true);
  local_c8 = 0;
  local_d0 = 0;
  String::parse_latin1
            ((String *)&local_d0,
             "Kashida Justification:1,Word Justification:2,Justify Only After Last Tab:8,Skip Last Line:32,Skip Last Line With Visible Characters:64,Do Not Skip Single Line:128"
            );
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"justification_flags");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,2,(String *)&local_d8,6,(String *)&local_d0,6,
             (CowData<char32_t> *)&local_c8);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"Label3D");
  StringName::StringName((StringName *)&local_b0,(String *)&local_e0,false);
  ClassDB::add_property
            ((StringName *)&local_b0,(PropertyInfo *)&local_a8,(StringName *)&local_c0,
             (StringName *)&local_b8,-1);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (StringName::configured != '\0') {
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010640a;
    }
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010640a;
    }
    if (local_b8 != 0) {
      StringName::unref();
    }
  }
LAB_0010640a:
  _scs_create((char *)&local_b8,true);
  _scs_create((char *)&local_c0,true);
  local_c8 = 0;
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"suffix:px");
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"width");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,3,(String *)&local_d8,0,(String *)&local_d0,6,
             (CowData<char32_t> *)&local_c8);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"Label3D");
  StringName::StringName((StringName *)&local_b0,(String *)&local_e0,false);
  ClassDB::add_property
            ((StringName *)&local_b0,(PropertyInfo *)&local_a8,(StringName *)&local_c0,
             (StringName *)&local_b8,-1);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (StringName::configured != '\0') {
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106569;
    }
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106569;
    }
    if (local_b8 != 0) {
      StringName::unref();
    }
  }
LAB_00106569:
  local_a8 = (char *)0x0;
  String::parse_latin1((String *)&local_a8,"");
  local_b0 = 0;
  String::parse_latin1((String *)&local_b0,"BiDi");
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"Label3D");
  StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
  ClassDB::add_property_group((StringName *)&local_b8,(String *)&local_b0,(String *)&local_a8,0);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  _scs_create((char *)&local_b8,true);
  _scs_create((char *)&local_c0,true);
  local_c8 = 0;
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"Auto,Left-to-Right,Right-to-Left");
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"text_direction");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,2,(String *)&local_d8,2,(String *)&local_d0,6,
             (CowData<char32_t> *)&local_c8);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"Label3D");
  StringName::StringName((StringName *)&local_b0,(String *)&local_e0,false);
  ClassDB::add_property
            ((StringName *)&local_b0,(PropertyInfo *)&local_a8,(StringName *)&local_c0,
             (StringName *)&local_b8,-1);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (StringName::configured != '\0') {
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010676e;
    }
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010676e;
    }
    if (local_b8 != 0) {
      StringName::unref();
    }
  }
LAB_0010676e:
  _scs_create((char *)&local_b8,true);
  _scs_create((char *)&local_c0,true);
  local_c8 = 0;
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"");
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"language");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,4,(String *)&local_d8,0x20,(String *)&local_d0,6,
             (CowData<char32_t> *)&local_c8);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"Label3D");
  StringName::StringName((StringName *)&local_b0,(String *)&local_e0,false);
  ClassDB::add_property
            ((StringName *)&local_b0,(PropertyInfo *)&local_a8,(StringName *)&local_c0,
             (StringName *)&local_b8,-1);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (StringName::configured != '\0') {
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001068d0;
    }
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001068d0;
    }
    if (local_b8 != 0) {
      StringName::unref();
    }
  }
LAB_001068d0:
  _scs_create((char *)&local_b8,true);
  _scs_create((char *)&local_c0,true);
  local_c8 = 0;
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"Default,URI,File,Email,List,None,Custom");
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"structured_text_bidi_override");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,2,(String *)&local_d8,2,(String *)&local_d0,6,
             (CowData<char32_t> *)&local_c8);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"Label3D");
  StringName::StringName((StringName *)&local_b0,(String *)&local_e0,false);
  ClassDB::add_property
            ((StringName *)&local_b0,(PropertyInfo *)&local_a8,(StringName *)&local_c0,
             (StringName *)&local_b8,-1);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (StringName::configured != '\0') {
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106a31;
    }
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106a31;
    }
    if (local_b8 != 0) {
      StringName::unref();
    }
  }
LAB_00106a31:
  _scs_create((char *)&local_b8,true);
  _scs_create((char *)&local_c0,true);
  local_c8 = 0;
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"");
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"structured_text_bidi_override_options");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,0x1c,(String *)&local_d8,0,(String *)&local_d0,6,
             (CowData<char32_t> *)&local_c8);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"Label3D");
  StringName::StringName((StringName *)&local_b0,(String *)&local_e0,false);
  ClassDB::add_property
            ((StringName *)&local_b0,(PropertyInfo *)&local_a8,(StringName *)&local_c0,
             (StringName *)&local_b8,-1);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (StringName::configured != '\0') {
    if (local_c8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106b8f;
    }
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106b8f;
    }
    if (local_b8 != 0) {
      StringName::unref();
    }
  }
LAB_00106b8f:
  StringName::StringName((StringName *)&local_d8,"FLAG_SHADED",false);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"FLAG_SHADED");
  local_a8 = "Label3D::DrawFlags";
  local_c0 = 0;
  local_a0 = 0x12;
  String::parse_latin1((StrRange *)&local_c0);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_b8,(String *)&local_c0);
  StringName::StringName((StringName *)&local_b0,(String *)&local_b8,false);
  local_c8 = 0;
  local_d0 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,2,(String *)&local_d0,0,(CowData<char32_t> *)&local_c8,
             0x10006,(StringName *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  local_b0 = local_98;
  local_98 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  local_b8 = 0;
  String::parse_latin1((String *)&local_b8,"Label3D");
  StringName::StringName((StringName *)&local_a8,(String *)&local_b8,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_a8,(StringName *)&local_b0,(StringName *)&local_d8,0,false);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_d8,"FLAG_DOUBLE_SIDED",false);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"FLAG_DOUBLE_SIDED");
  local_a8 = "Label3D::DrawFlags";
  local_c0 = 0;
  local_a0 = 0x12;
  String::parse_latin1((StrRange *)&local_c0);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_b8,(String *)&local_c0);
  StringName::StringName((StringName *)&local_b0,(String *)&local_b8,false);
  local_c8 = 0;
  local_d0 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,2,(String *)&local_d0,0,(CowData<char32_t> *)&local_c8,
             0x10006,(StringName *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  local_b0 = local_98;
  local_98 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  local_b8 = 0;
  String::parse_latin1((String *)&local_b8,"Label3D");
  StringName::StringName((StringName *)&local_a8,(String *)&local_b8,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_a8,(StringName *)&local_b0,(StringName *)&local_d8,1,false);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_d8,"FLAG_DISABLE_DEPTH_TEST",false);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"FLAG_DISABLE_DEPTH_TEST");
  local_a8 = "Label3D::DrawFlags";
  local_c0 = 0;
  local_a0 = 0x12;
  String::parse_latin1((StrRange *)&local_c0);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_b8,(String *)&local_c0);
  StringName::StringName((StringName *)&local_b0,(String *)&local_b8,false);
  local_c8 = 0;
  local_d0 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,2,(String *)&local_d0,0,(CowData<char32_t> *)&local_c8,
             0x10006,(StringName *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  local_b0 = local_98;
  local_98 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  local_b8 = 0;
  String::parse_latin1((String *)&local_b8,"Label3D");
  StringName::StringName((StringName *)&local_a8,(String *)&local_b8,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_a8,(StringName *)&local_b0,(StringName *)&local_d8,2,false);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_d8,"FLAG_FIXED_SIZE",false);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"FLAG_FIXED_SIZE");
  local_a8 = "Label3D::DrawFlags";
  local_c0 = 0;
  local_a0 = 0x12;
  String::parse_latin1((StrRange *)&local_c0);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_b8,(String *)&local_c0);
  StringName::StringName((StringName *)&local_b0,(String *)&local_b8,false);
  local_c8 = 0;
  local_d0 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,2,(String *)&local_d0,0,(CowData<char32_t> *)&local_c8,
             0x10006,(StringName *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  local_b0 = local_98;
  local_98 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  local_b8 = 0;
  String::parse_latin1((String *)&local_b8,"Label3D");
  StringName::StringName((StringName *)&local_a8,(String *)&local_b8,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_a8,(StringName *)&local_b0,(StringName *)&local_d8,3,false);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_d8,"FLAG_MAX",false);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"FLAG_MAX");
  local_a8 = "Label3D::DrawFlags";
  local_c0 = 0;
  local_a0 = 0x12;
  String::parse_latin1((StrRange *)&local_c0);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_b8,(String *)&local_c0);
  StringName::StringName((StringName *)&local_b0,(String *)&local_b8,false);
  local_c8 = 0;
  local_d0 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,2,(String *)&local_d0,0,(CowData<char32_t> *)&local_c8,
             0x10006,(StringName *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  local_b0 = local_98;
  local_98 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  local_b8 = 0;
  String::parse_latin1((String *)&local_b8,"Label3D");
  StringName::StringName((StringName *)&local_a8,(String *)&local_b8,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_a8,(StringName *)&local_b0,(StringName *)&local_d8,4,false);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b0,"ALPHA_CUT_DISABLED",false);
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"ALPHA_CUT_DISABLED");
  GetTypeInfo<Label3D::AlphaCutMode,void>::get_class_info
            ((GetTypeInfo<Label3D::AlphaCutMode,void> *)&local_a8);
  local_b8 = local_98;
  local_98 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  local_c8 = 0;
  String::parse_latin1((String *)&local_c8,"Label3D");
  StringName::StringName((StringName *)&local_a8,(String *)&local_c8,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_a8,(StringName *)&local_b8,(StringName *)&local_b0,0,false);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b0,"ALPHA_CUT_DISCARD",false);
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"ALPHA_CUT_DISCARD");
  GetTypeInfo<Label3D::AlphaCutMode,void>::get_class_info
            ((GetTypeInfo<Label3D::AlphaCutMode,void> *)&local_a8);
  local_b8 = local_98;
  local_98 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  local_c8 = 0;
  String::parse_latin1((String *)&local_c8,"Label3D");
  StringName::StringName((StringName *)&local_a8,(String *)&local_c8,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_a8,(StringName *)&local_b8,(StringName *)&local_b0,1,false);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b0,"ALPHA_CUT_OPAQUE_PREPASS",false);
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"ALPHA_CUT_OPAQUE_PREPASS");
  GetTypeInfo<Label3D::AlphaCutMode,void>::get_class_info
            ((GetTypeInfo<Label3D::AlphaCutMode,void> *)&local_a8);
  local_b8 = local_98;
  local_98 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  local_a8 = "Label3D";
  local_c8 = 0;
  local_a0 = 7;
  String::parse_latin1((StrRange *)&local_c8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_c8,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_a8,(StringName *)&local_b8,(StringName *)&local_b0,2,false);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b0,"ALPHA_CUT_HASH",false);
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"ALPHA_CUT_HASH");
  GetTypeInfo<Label3D::AlphaCutMode,void>::get_class_info
            ((GetTypeInfo<Label3D::AlphaCutMode,void> *)&local_a8);
  local_b8 = local_98;
  local_98 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  local_c8 = 0;
  String::parse_latin1((String *)&local_c8,"Label3D");
  StringName::StringName((StringName *)&local_a8,(String *)&local_c8,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_a8,(StringName *)&local_b8,(StringName *)&local_b0,3,false);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<StringName>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<StringName>::_copy_on_write(CowData<StringName> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  StringName *this_00;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar6 = 0x10;
  if (lVar2 * 8 != 0) {
    uVar6 = lVar2 * 8 - 1;
    uVar6 = uVar6 | uVar6 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = (uVar6 | uVar6 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar6,false);
  if (puVar4 != (undefined8 *)0x0) {
    lVar5 = 0;
    *puVar4 = 1;
    puVar4[1] = lVar2;
    this_00 = (StringName *)(puVar4 + 2);
    if (lVar2 != 0) {
      do {
        lVar1 = lVar5 * 8;
        lVar5 = lVar5 + 1;
        StringName::StringName(this_00,(StringName *)(*(long *)this + lVar1));
        this_00 = this_00 + 8;
      } while (lVar2 != lVar5);
    }
    _unref(this);
    *(StringName **)this = (StringName *)(puVar4 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* Label3D::~Label3D() */

void __thiscall Label3D::~Label3D(Label3D *this)

{
  uint uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  char cVar4;
  long lVar5;
  long *plVar6;
  Object *pOVar7;
  long lVar8;
  void *pvVar9;
  long in_FS_OFFSET;
  long *local_b8;
  undefined8 uStack_b0;
  long local_a0 [2];
  long local_90 [2];
  long local_80 [2];
  long local_70 [2];
  long local_60 [2];
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__initialize_classv_0012f6d0;
  lVar5 = *(long *)(this + 0x738);
  for (lVar8 = 0; (lVar5 != 0 && (lVar8 < *(long *)(lVar5 + -8))); lVar8 = lVar8 + 1) {
    pOVar7 = *(Object **)(TextServerManager::singleton + 0x178);
    if (pOVar7 == (Object *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    cVar4 = RefCounted::reference();
    if (cVar4 == '\0') {
      pOVar7 = (Object *)0x0;
    }
    if (*(long *)(this + 0x738) == 0) {
      lVar5 = 0;
LAB_00108593:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar5,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar5 = *(long *)(*(long *)(this + 0x738) + -8);
    if (lVar5 <= lVar8) goto LAB_00108593;
    (**(code **)(*(long *)pOVar7 + 0x168))(pOVar7);
    cVar4 = RefCounted::unreference();
    if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar7), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
      Memory::free_static(pOVar7,false);
    }
    lVar5 = *(long *)(this + 0x738);
  }
  CowData<RID>::resize<false>((CowData<RID> *)(this + 0x738),0);
  local_b8 = (long *)0x0;
  Ref<TextServer>::operator=
            ((Ref<TextServer> *)&local_b8,*(Ref **)(TextServerManager::singleton + 0x178));
  (**(code **)(*local_b8 + 0x168))(local_b8,this + 0x728);
  Ref<TextServer>::unref((Ref<TextServer> *)&local_b8);
  lVar5 = RenderingServer::get_singleton();
  if (lVar5 == 0) {
    _err_print_error("~Label3D","scene/3d/label_3d.cpp",0x42e,
                     "Parameter \"RenderingServer::get_singleton()\" is null.",0,0);
    if ((StringName::configured != '\0') && (*(long *)(this + 0x758) != 0)) {
      StringName::unref();
    }
    if (*(long *)(this + 0x738) != 0) {
      LOCK();
      plVar6 = (long *)(*(long *)(this + 0x738) + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        lVar5 = *(long *)(this + 0x738);
        *(undefined8 *)(this + 0x738) = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    Array::~Array((Array *)(this + 0x720));
    CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x710));
    Ref<Font>::unref((Ref<Font> *)(this + 0x6d0));
    Ref<Font>::unref((Ref<Font> *)(this + 0x6c8));
    CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x6a8));
    CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x6a0));
    HashMap<Label3D::SurfaceKey,Label3D::SurfaceData,Label3D::SurfaceKeyHasher,HashMapComparatorDefault<Label3D::SurfaceKey>,DefaultTypedAllocator<HashMapElement<Label3D::SurfaceKey,Label3D::SurfaceData>>>
    ::~HashMap((HashMap<Label3D::SurfaceKey,Label3D::SurfaceData,Label3D::SurfaceKeyHasher,HashMapComparatorDefault<Label3D::SurfaceKey>,DefaultTypedAllocator<HashMapElement<Label3D::SurfaceKey,Label3D::SurfaceData>>>
                *)(this + 0x668));
    Ref<TriangleMesh>::unref((Ref<TriangleMesh> *)(this + 0x658));
    if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_001086f5;
    goto LAB_00108377;
  }
  plVar6 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar6 + 0x11b0))(plVar6);
  for (puVar2 = *(undefined8 **)(this + 0x680); puVar2 != (undefined8 *)0x0;
      puVar2 = (undefined8 *)*puVar2) {
    local_b8 = (long *)puVar2[2];
    uStack_b0 = puVar2[3];
    local_a0[0] = 0;
    if (puVar2[5] != 0) {
      CowData<Vector3>::_ref((CowData<Vector3> *)local_a0,(CowData *)(puVar2 + 5));
    }
    local_90[0] = 0;
    if (puVar2[7] != 0) {
      CowData<Vector3>::_ref((CowData<Vector3> *)local_90,(CowData *)(puVar2 + 7));
    }
    local_80[0] = 0;
    if (puVar2[9] != 0) {
      CowData<float>::_ref((CowData<float> *)local_80,(CowData *)(puVar2 + 9));
    }
    local_70[0] = 0;
    if (puVar2[0xb] != 0) {
      CowData<Color>::_ref((CowData<Color> *)local_70,(CowData *)(puVar2 + 0xb));
    }
    local_60[0] = 0;
    if (puVar2[0xd] != 0) {
      CowData<Vector2>::_ref((CowData<Vector2> *)local_60,(CowData *)(puVar2 + 0xd));
    }
    local_50 = 0;
    if (puVar2[0xf] == 0) {
      local_48 = puVar2[0x10];
      local_40 = puVar2[0x11];
      plVar6 = (long *)RenderingServer::get_singleton();
      (**(code **)(*plVar6 + 0x11b0))(plVar6);
    }
    else {
      CowData<int>::_ref((CowData<int> *)&local_50,(CowData *)(puVar2 + 0xf));
      lVar5 = local_50;
      local_48 = puVar2[0x10];
      local_40 = puVar2[0x11];
      plVar6 = (long *)RenderingServer::get_singleton();
      (**(code **)(*plVar6 + 0x11b0))(plVar6);
      if (lVar5 != 0) {
        LOCK();
        plVar6 = (long *)(lVar5 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          Memory::free_static((void *)(local_50 + -0x10),false);
        }
      }
    }
    if (local_60[0] != 0) {
      LOCK();
      plVar6 = (long *)(local_60[0] + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        Memory::free_static((void *)(local_60[0] + -0x10),false);
      }
    }
    if (local_70[0] != 0) {
      LOCK();
      plVar6 = (long *)(local_70[0] + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        Memory::free_static((void *)(local_70[0] + -0x10),false);
      }
    }
    if (local_80[0] != 0) {
      LOCK();
      plVar6 = (long *)(local_80[0] + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        Memory::free_static((void *)(local_80[0] + -0x10),false);
      }
    }
    if (local_90[0] != 0) {
      LOCK();
      plVar6 = (long *)(local_90[0] + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        Memory::free_static((void *)(local_90[0] + -0x10),false);
      }
    }
    if (local_a0[0] != 0) {
      LOCK();
      plVar6 = (long *)(local_a0[0] + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        Memory::free_static((void *)(local_a0[0] + -0x10),false);
      }
    }
  }
  if ((*(long *)(this + 0x670) != 0) && (*(int *)(this + 0x694) != 0)) {
    lVar5 = 0;
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x690) * 4);
    if (uVar1 != 0) {
      do {
        if (*(int *)(*(long *)(this + 0x678) + lVar5) != 0) {
          *(int *)(*(long *)(this + 0x678) + lVar5) = 0;
          pvVar9 = *(void **)(*(long *)(this + 0x670) + lVar5 * 2);
          if (*(long *)((long)pvVar9 + 0x78) != 0) {
            LOCK();
            plVar6 = (long *)(*(long *)((long)pvVar9 + 0x78) + -0x10);
            *plVar6 = *plVar6 + -1;
            UNLOCK();
            if (*plVar6 == 0) {
              lVar8 = *(long *)((long)pvVar9 + 0x78);
              *(undefined8 *)((long)pvVar9 + 0x78) = 0;
              Memory::free_static((void *)(lVar8 + -0x10),false);
            }
          }
          if (*(long *)((long)pvVar9 + 0x68) != 0) {
            LOCK();
            plVar6 = (long *)(*(long *)((long)pvVar9 + 0x68) + -0x10);
            *plVar6 = *plVar6 + -1;
            UNLOCK();
            if (*plVar6 == 0) {
              lVar8 = *(long *)((long)pvVar9 + 0x68);
              *(undefined8 *)((long)pvVar9 + 0x68) = 0;
              Memory::free_static((void *)(lVar8 + -0x10),false);
            }
          }
          if (*(long *)((long)pvVar9 + 0x58) != 0) {
            LOCK();
            plVar6 = (long *)(*(long *)((long)pvVar9 + 0x58) + -0x10);
            *plVar6 = *plVar6 + -1;
            UNLOCK();
            if (*plVar6 == 0) {
              lVar8 = *(long *)((long)pvVar9 + 0x58);
              *(undefined8 *)((long)pvVar9 + 0x58) = 0;
              Memory::free_static((void *)(lVar8 + -0x10),false);
            }
          }
          if (*(long *)((long)pvVar9 + 0x48) != 0) {
            LOCK();
            plVar6 = (long *)(*(long *)((long)pvVar9 + 0x48) + -0x10);
            *plVar6 = *plVar6 + -1;
            UNLOCK();
            if (*plVar6 == 0) {
              lVar8 = *(long *)((long)pvVar9 + 0x48);
              *(undefined8 *)((long)pvVar9 + 0x48) = 0;
              Memory::free_static((void *)(lVar8 + -0x10),false);
            }
          }
          if (*(long *)((long)pvVar9 + 0x38) != 0) {
            LOCK();
            plVar6 = (long *)(*(long *)((long)pvVar9 + 0x38) + -0x10);
            *plVar6 = *plVar6 + -1;
            UNLOCK();
            if (*plVar6 == 0) {
              lVar8 = *(long *)((long)pvVar9 + 0x38);
              *(undefined8 *)((long)pvVar9 + 0x38) = 0;
              Memory::free_static((void *)(lVar8 + -0x10),false);
            }
          }
          if (*(long *)((long)pvVar9 + 0x28) != 0) {
            LOCK();
            plVar6 = (long *)(*(long *)((long)pvVar9 + 0x28) + -0x10);
            *plVar6 = *plVar6 + -1;
            UNLOCK();
            if (*plVar6 == 0) {
              lVar8 = *(long *)((long)pvVar9 + 0x28);
              *(undefined8 *)((long)pvVar9 + 0x28) = 0;
              Memory::free_static((void *)(lVar8 + -0x10),false);
            }
          }
          Memory::free_static(pvVar9,false);
          *(undefined8 *)(*(long *)(this + 0x670) + lVar5 * 2) = 0;
        }
        lVar5 = lVar5 + 4;
      } while ((ulong)uVar1 << 2 != lVar5);
    }
    *(undefined4 *)(this + 0x694) = 0;
    *(undefined1 (*) [16])(this + 0x680) = (undefined1  [16])0x0;
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 0x758) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 0x738) != 0) {
    LOCK();
    plVar6 = (long *)(*(long *)(this + 0x738) + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      lVar5 = *(long *)(this + 0x738);
      *(undefined8 *)(this + 0x738) = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  Array::~Array((Array *)(this + 0x720));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x710));
  if ((*(long *)(this + 0x6d0) != 0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
    pOVar7 = *(Object **)(this + 0x6d0);
    cVar4 = predelete_handler(pOVar7);
    if (cVar4 != '\0') {
      (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
      Memory::free_static(pOVar7,false);
    }
  }
  if ((*(long *)(this + 0x6c8) != 0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
    pOVar7 = *(Object **)(this + 0x6c8);
    cVar4 = predelete_handler(pOVar7);
    if (cVar4 != '\0') {
      (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
      Memory::free_static(pOVar7,false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x6a8));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x6a0));
  pvVar9 = *(void **)(this + 0x670);
  if (pvVar9 != (void *)0x0) {
    if (*(int *)(this + 0x694) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x690) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x694) = 0;
        *(undefined1 (*) [16])(this + 0x680) = (undefined1  [16])0x0;
      }
      else {
        lVar5 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x678) + lVar5) != 0) {
            pvVar9 = *(void **)((long)pvVar9 + lVar5 * 2);
            *(int *)(*(long *)(this + 0x678) + lVar5) = 0;
            if (*(long *)((long)pvVar9 + 0x78) != 0) {
              LOCK();
              plVar6 = (long *)(*(long *)((long)pvVar9 + 0x78) + -0x10);
              *plVar6 = *plVar6 + -1;
              UNLOCK();
              if (*plVar6 == 0) {
                lVar8 = *(long *)((long)pvVar9 + 0x78);
                *(undefined8 *)((long)pvVar9 + 0x78) = 0;
                Memory::free_static((void *)(lVar8 + -0x10),false);
              }
            }
            if (*(long *)((long)pvVar9 + 0x68) != 0) {
              LOCK();
              plVar6 = (long *)(*(long *)((long)pvVar9 + 0x68) + -0x10);
              *plVar6 = *plVar6 + -1;
              UNLOCK();
              if (*plVar6 == 0) {
                lVar8 = *(long *)((long)pvVar9 + 0x68);
                *(undefined8 *)((long)pvVar9 + 0x68) = 0;
                Memory::free_static((void *)(lVar8 + -0x10),false);
              }
            }
            if (*(long *)((long)pvVar9 + 0x58) != 0) {
              LOCK();
              plVar6 = (long *)(*(long *)((long)pvVar9 + 0x58) + -0x10);
              *plVar6 = *plVar6 + -1;
              UNLOCK();
              if (*plVar6 == 0) {
                lVar8 = *(long *)((long)pvVar9 + 0x58);
                *(undefined8 *)((long)pvVar9 + 0x58) = 0;
                Memory::free_static((void *)(lVar8 + -0x10),false);
              }
            }
            if (*(long *)((long)pvVar9 + 0x48) != 0) {
              LOCK();
              plVar6 = (long *)(*(long *)((long)pvVar9 + 0x48) + -0x10);
              *plVar6 = *plVar6 + -1;
              UNLOCK();
              if (*plVar6 == 0) {
                lVar8 = *(long *)((long)pvVar9 + 0x48);
                *(undefined8 *)((long)pvVar9 + 0x48) = 0;
                Memory::free_static((void *)(lVar8 + -0x10),false);
              }
            }
            if (*(long *)((long)pvVar9 + 0x38) != 0) {
              LOCK();
              plVar6 = (long *)(*(long *)((long)pvVar9 + 0x38) + -0x10);
              *plVar6 = *plVar6 + -1;
              UNLOCK();
              if (*plVar6 == 0) {
                lVar8 = *(long *)((long)pvVar9 + 0x38);
                *(undefined8 *)((long)pvVar9 + 0x38) = 0;
                Memory::free_static((void *)(lVar8 + -0x10),false);
              }
            }
            if (*(long *)((long)pvVar9 + 0x28) != 0) {
              LOCK();
              plVar6 = (long *)(*(long *)((long)pvVar9 + 0x28) + -0x10);
              *plVar6 = *plVar6 + -1;
              UNLOCK();
              if (*plVar6 == 0) {
                lVar8 = *(long *)((long)pvVar9 + 0x28);
                *(undefined8 *)((long)pvVar9 + 0x28) = 0;
                Memory::free_static((void *)(lVar8 + -0x10),false);
              }
            }
            Memory::free_static(pvVar9,false);
            pvVar9 = *(void **)(this + 0x670);
            *(undefined8 *)((long)pvVar9 + lVar5 * 2) = 0;
          }
          lVar5 = lVar5 + 4;
        } while (lVar5 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x694) = 0;
        *(undefined1 (*) [16])(this + 0x680) = (undefined1  [16])0x0;
        if (pvVar9 == (void *)0x0) goto LAB_0010831f;
      }
    }
    Memory::free_static(pvVar9,false);
    Memory::free_static(*(void **)(this + 0x678),false);
  }
LAB_0010831f:
  if ((*(long *)(this + 0x658) != 0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
    pOVar7 = *(Object **)(this + 0x658);
    cVar4 = predelete_handler(pOVar7);
    if (cVar4 != '\0') {
      (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
      Memory::free_static(pOVar7,false);
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
LAB_001086f5:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_00108377:
  GeometryInstance3D::~GeometryInstance3D((GeometryInstance3D *)this);
  return;
}



/* Label3D::~Label3D() */

void __thiscall Label3D::~Label3D(Label3D *this)

{
  ~Label3D(this);
  operator_delete(this,0x770);
  return;
}



/* Vector<int>::push_back(int) [clone .isra.0] */

void __thiscall Vector<int>::push_back(Vector<int> *this,int param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<int>::resize<false>((CowData<int> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<int>::_copy_on_write((CowData<int> *)(this + 8));
        *(int *)(*(long *)(this + 8) + lVar3 * 4) = param_1;
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar2,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Label3D::_generate_glyph_surfaces(Glyph const&, Vector2&, Color const&, int, int) */

void __thiscall
Label3D::_generate_glyph_surfaces
          (Label3D *this,Glyph *param_1,Vector2 *param_2,Color *param_3,int param_4,int param_5)

{
  Glyph *pGVar1;
  CowData<Vector3> *this_00;
  CowData<float> *this_01;
  CowData<int> *this_02;
  HashMap<Label3D::SurfaceKey,Label3D::SurfaceData,Label3D::SurfaceKeyHasher,HashMapComparatorDefault<Label3D::SurfaceKey>,DefaultTypedAllocator<HashMapElement<Label3D::SurfaceKey,Label3D::SurfaceData>>>
  *this_03;
  float fVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  Object *pOVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  Color *pCVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  char *pcVar21;
  Color *pCVar22;
  Color *extraout_RDX;
  int iVar23;
  Color *pCVar24;
  Glyph *pGVar25;
  CowData<Color> *this_04;
  long lVar26;
  long lVar27;
  CowData<Vector2> *this_05;
  long in_FS_OFFSET;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar42 [16];
  CowData<Color> *local_190;
  int local_144;
  undefined8 uStack_130;
  long local_110;
  long *local_108;
  Object *local_100;
  long local_f8;
  int local_f0;
  int local_ec;
  long *local_e8;
  undefined8 local_e0 [2];
  undefined8 local_d0 [2];
  undefined8 local_c0 [2];
  undefined8 local_b0 [2];
  undefined8 local_a0 [2];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_1 + 0x24) != 0) {
    local_70 = 0;
    local_110 = 0;
    if (*(long *)(param_1 + 0x18) == 0) {
      if ((*(ushort *)(param_1 + 10) & 0x1004) == 0) {
        local_e8 = (long *)0x0;
        Ref<TextServer>::operator=
                  ((Ref<TextServer> *)&local_e8,*(Ref **)(TextServerManager::singleton + 0x178));
        (**(code **)(*local_e8 + 0x588))
                  (local_e8,(long)*(int *)(param_1 + 0x20),(long)*(int *)(param_1 + 0x24));
        Ref<TextServer>::unref((Ref<TextServer> *)&local_e8);
      }
    }
    else {
      local_e8 = (long *)0x0;
      Ref<TextServer>::operator=
                ((Ref<TextServer> *)&local_e8,*(Ref **)(TextServerManager::singleton + 0x178));
      pGVar1 = param_1 + 0x18;
      local_58[0] = CONCAT44(param_5,*(undefined4 *)(param_1 + 0x20));
      local_110 = (**(code **)(*local_e8 + 0x480))();
      Ref<TextServer>::unref((Ref<TextServer> *)&local_e8);
      if (local_110 != 0) {
        local_e8 = (long *)0x0;
        fVar41 = *(float *)(this + 0x620);
        uVar29 = *(undefined8 *)(param_1 + 0xc);
        Ref<TextServer>::operator=
                  ((Ref<TextServer> *)&local_e8,*(Ref **)(TextServerManager::singleton + 0x178));
        local_58[0] = CONCAT44(param_5,*(undefined4 *)(param_1 + 0x20));
        uVar28 = (**(code **)(*local_e8 + 0x440))
                           (local_e8,pGVar1,(Variant *)local_58,(long)*(int *)(param_1 + 0x24));
        fVar40 = fVar41 * ((float)uVar29 + (float)uVar28);
        fVar41 = fVar41 * ((float)((ulong)uVar29 >> 0x20) + (float)((ulong)uVar28 >> 0x20));
        Ref<TextServer>::unref((Ref<TextServer> *)&local_e8);
        fVar39 = *(float *)(this + 0x620);
        local_e8 = (long *)0x0;
        Ref<TextServer>::operator=
                  ((Ref<TextServer> *)&local_e8,*(Ref **)(TextServerManager::singleton + 0x178));
        local_58[0] = CONCAT44(param_5,*(undefined4 *)(param_1 + 0x20));
        uVar29 = (**(code **)(*local_e8 + 0x450))
                           (local_e8,pGVar1,(Variant *)local_58,(long)*(int *)(param_1 + 0x24));
        fVar38 = fVar39 * (float)uVar29;
        fVar39 = fVar39 * (float)((ulong)uVar29 >> 0x20);
        Ref<TextServer>::unref((Ref<TextServer> *)&local_e8);
        local_e8 = (long *)0x0;
        Ref<TextServer>::operator=
                  ((Ref<TextServer> *)&local_e8,*(Ref **)(TextServerManager::singleton + 0x178));
        local_58[0] = CONCAT44(param_5,*(undefined4 *)(param_1 + 0x20));
        auVar42 = (**(code **)(*local_e8 + 0x460))
                            (local_e8,pGVar1,(Variant *)local_58,(long)*(int *)(param_1 + 0x24));
        auVar30._0_4_ = auVar42._0_4_;
        Ref<TextServer>::unref((Ref<TextServer> *)&local_e8);
        local_e8 = (long *)0x0;
        Ref<TextServer>::operator=
                  ((Ref<TextServer> *)&local_e8,*(Ref **)(TextServerManager::singleton + 0x178));
        local_58[0] = CONCAT44(param_5,*(undefined4 *)(param_1 + 0x20));
        local_70 = (**(code **)(*local_e8 + 0x488))
                             (local_e8,pGVar1,(Variant *)local_58,(long)*(int *)(param_1 + 0x24));
        Ref<TextServer>::unref((Ref<TextServer> *)&local_e8);
        if ((_LC228 < auVar42._8_4_) && (_LC228 < auVar42._12_4_)) {
          local_e8 = (long *)0x0;
          Ref<TextServer>::operator=
                    ((Ref<TextServer> *)&local_e8,*(Ref **)(TextServerManager::singleton + 0x178));
          cVar7 = (**(code **)(*local_e8 + 0x280))(local_e8,pGVar1);
          Ref<TextServer>::unref((Ref<TextServer> *)&local_e8);
          if (param_1[9] != (Glyph)0x0) {
            this_03 = (HashMap<Label3D::SurfaceKey,Label3D::SurfaceData,Label3D::SurfaceKeyHasher,HashMapComparatorDefault<Label3D::SurfaceKey>,DefaultTypedAllocator<HashMapElement<Label3D::SurfaceKey,Label3D::SurfaceData>>>
                       *)(this + 0x668);
            local_144 = 0;
            do {
              local_e8 = (long *)((ulong)local_e8 & 0xffffffff00000000);
              local_f8 = local_110;
              local_f0 = param_4;
              local_ec = param_5;
              cVar8 = HashMap<Label3D::SurfaceKey,Label3D::SurfaceData,Label3D::SurfaceKeyHasher,HashMapComparatorDefault<Label3D::SurfaceKey>,DefaultTypedAllocator<HashMapElement<Label3D::SurfaceKey,Label3D::SurfaceData>>>
                      ::_lookup_pos(this_03,(SurfaceKey *)&local_f8,(uint *)&local_e8);
              if (cVar8 == '\0') {
                local_e0[0] = 0;
                local_d0[0] = 0;
                local_c0[0] = 0;
                local_b0[0] = 0;
                local_a0[0] = 0;
                local_90 = 0;
                local_88 = 0;
                plVar16 = (long *)RenderingServer::get_singleton();
                local_80 = (**(code **)(*plVar16 + 0x290))(plVar16);
                plVar16 = (long *)RenderingServer::get_singleton();
                pcVar4 = *(code **)(*plVar16 + 0x2a8);
                local_68 = CONCAT44(_LC33,_LC33);
                uStack_60 = _LC33;
                uStack_5c = _LC33;
                ::Variant::Variant((Variant *)local_58,(Color *)&local_68);
                StringName::StringName((StringName *)&local_100,"albedo",false);
                (*pcVar4)(plVar16,local_80,(StringName *)&local_100,(Variant *)local_58);
                if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
                  StringName::unref();
                }
                if (::Variant::needs_deinit[(int)local_58[0]] != '\0') {
                  ::Variant::_clear_internal();
                }
                plVar16 = (long *)RenderingServer::get_singleton();
                pcVar4 = *(code **)(*plVar16 + 0x2a8);
                ::Variant::Variant((Variant *)local_58,_LC230);
                StringName::StringName((StringName *)&local_100,"specular",false);
                (*pcVar4)(plVar16,local_80,(StringName *)&local_100,(Variant *)local_58);
                if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
                  StringName::unref();
                }
                if (::Variant::needs_deinit[(int)local_58[0]] != '\0') {
                  ::Variant::_clear_internal();
                }
                plVar16 = (long *)RenderingServer::get_singleton();
                pcVar4 = *(code **)(*plVar16 + 0x2a8);
                ::Variant::Variant((Variant *)local_58,0.0);
                StringName::StringName((StringName *)&local_100,"metallic",false);
                (*pcVar4)(plVar16,local_80,(StringName *)&local_100,(Variant *)local_58);
                if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
                  StringName::unref();
                }
                if (::Variant::needs_deinit[(int)local_58[0]] != '\0') {
                  ::Variant::_clear_internal();
                }
                plVar16 = (long *)RenderingServer::get_singleton();
                pcVar4 = *(code **)(*plVar16 + 0x2a8);
                ::Variant::Variant((Variant *)local_58,_LC234);
                StringName::StringName((StringName *)&local_100,"roughness",false);
                (*pcVar4)(plVar16,local_80,(StringName *)&local_100,(Variant *)local_58);
                if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
                  StringName::unref();
                }
                if (::Variant::needs_deinit[(int)local_58[0]] != '\0') {
                  ::Variant::_clear_internal();
                }
                plVar16 = (long *)RenderingServer::get_singleton();
                pcVar4 = *(code **)(*plVar16 + 0x2a8);
                local_68 = 0;
                uStack_60 = 0;
                ::Variant::Variant((Variant *)local_58,(Vector3 *)&local_68);
                StringName::StringName((StringName *)&local_100,"uv1_offset",false);
                (*pcVar4)(plVar16,local_80,(StringName *)&local_100,(Variant *)local_58);
                if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
                  StringName::unref();
                }
                if (::Variant::needs_deinit[(int)local_58[0]] != '\0') {
                  ::Variant::_clear_internal();
                }
                plVar16 = (long *)RenderingServer::get_singleton();
                uVar29 = _LC237;
                uVar3 = _LC33;
                pcVar4 = *(code **)(*plVar16 + 0x2a8);
                uStack_60 = _LC33;
                local_68 = _LC237;
                ::Variant::Variant((Variant *)local_58,(Vector3 *)&local_68);
                StringName::StringName((StringName *)&local_100,"uv1_scale",false);
                (*pcVar4)(plVar16,local_80,(StringName *)&local_100,(Variant *)local_58);
                if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
                  StringName::unref();
                }
                if (::Variant::needs_deinit[(int)local_58[0]] != '\0') {
                  ::Variant::_clear_internal();
                }
                plVar16 = (long *)RenderingServer::get_singleton();
                pcVar4 = *(code **)(*plVar16 + 0x2a8);
                local_68 = 0;
                uStack_60 = 0;
                ::Variant::Variant((Variant *)local_58,(Vector3 *)&local_68);
                StringName::StringName((StringName *)&local_100,"uv2_offset",false);
                (*pcVar4)(plVar16,local_80,(StringName *)&local_100,(Variant *)local_58);
                if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
                  StringName::unref();
                }
                if (::Variant::needs_deinit[(int)local_58[0]] != '\0') {
                  ::Variant::_clear_internal();
                }
                plVar16 = (long *)RenderingServer::get_singleton();
                pcVar4 = *(code **)(*plVar16 + 0x2a8);
                uStack_60 = uVar3;
                local_68 = uVar29;
                ::Variant::Variant((Variant *)local_58,(Vector3 *)&local_68);
                StringName::StringName((StringName *)&local_100,"uv2_scale",false);
                (*pcVar4)(plVar16,local_80,(StringName *)&local_100,(Variant *)local_58);
                if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
                  StringName::unref();
                }
                if (::Variant::needs_deinit[(int)local_58[0]] != '\0') {
                  ::Variant::_clear_internal();
                }
                plVar16 = (long *)RenderingServer::get_singleton();
                pcVar4 = *(code **)(*plVar16 + 0x2a8);
                ::Variant::Variant((Variant *)local_58,*(float *)(this + 0x62c));
                StringName::StringName((StringName *)&local_100,"alpha_scissor_threshold",false);
                (*pcVar4)(plVar16,local_80,(StringName *)&local_100,(Variant *)local_58);
                if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
                  StringName::unref();
                }
                if (::Variant::needs_deinit[(int)local_58[0]] != '\0') {
                  ::Variant::_clear_internal();
                }
                plVar16 = (long *)RenderingServer::get_singleton();
                pcVar4 = *(code **)(*plVar16 + 0x2a8);
                ::Variant::Variant((Variant *)local_58,*(float *)(this + 0x630));
                StringName::StringName((StringName *)&local_100,"alpha_hash_scale",false);
                (*pcVar4)(plVar16,local_80,(StringName *)&local_100,(Variant *)local_58);
                if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
                  StringName::unref();
                }
                if (::Variant::needs_deinit[(int)local_58[0]] != '\0') {
                  ::Variant::_clear_internal();
                }
                plVar16 = (long *)RenderingServer::get_singleton();
                pcVar4 = *(code **)(*plVar16 + 0x2a8);
                ::Variant::Variant((Variant *)local_58,*(float *)(this + 0x638));
                StringName::StringName((StringName *)&local_100,"alpha_antialiasing_edge",false);
                (*pcVar4)(plVar16,local_80,(StringName *)&local_100,(Variant *)local_58);
                if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
                  StringName::unref();
                }
                if (::Variant::needs_deinit[(int)local_58[0]] != '\0') {
                  ::Variant::_clear_internal();
                }
                if (cVar7 != '\0') {
                  plVar16 = (long *)RenderingServer::get_singleton();
                  pcVar4 = *(code **)(*plVar16 + 0x2a8);
                  local_108 = (long *)0x0;
                  Ref<TextServer>::operator=
                            ((Ref<TextServer> *)&local_108,
                             *(Ref **)(TextServerManager::singleton + 0x178));
                  lVar10 = (**(code **)(*local_108 + 0x290))(local_108,pGVar1);
                  ::Variant::Variant((Variant *)local_58,lVar10);
                  StringName::StringName((StringName *)&local_100,"msdf_pixel_range",false);
                  (*pcVar4)(plVar16,local_80,(StringName *)&local_100,(Variant *)local_58);
                  if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
                    StringName::unref();
                  }
                  if (::Variant::needs_deinit[(int)local_58[0]] != '\0') {
                    ::Variant::_clear_internal();
                  }
                  Ref<TextServer>::unref((Ref<TextServer> *)&local_108);
                  plVar16 = (long *)RenderingServer::get_singleton();
                  pcVar4 = *(code **)(*plVar16 + 0x2a8);
                  ::Variant::Variant((Variant *)local_58,param_5);
                  StringName::StringName((StringName *)&local_100,"msdf_outline_size",false);
                  (*pcVar4)(plVar16,local_80,(StringName *)&local_100,(Variant *)local_58);
                  if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
                    StringName::unref();
                  }
                  if (::Variant::needs_deinit[(int)local_58[0]] != '\0') {
                    ::Variant::_clear_internal();
                  }
                }
                iVar23 = *(int *)(this + 0x628);
                if (iVar23 == 1) {
                  cVar8 = '\x02';
                }
                else if (iVar23 == 2) {
                  cVar8 = '\x04';
                }
                else {
                  cVar8 = (iVar23 == 3) * '\x02' + '\x01';
                }
                local_108 = (long *)0x0;
                BaseMaterial3D::get_material_for_2d
                          ((StringName *)&local_100,this[0x624],cVar8,this[0x625],
                           *(int *)(this + 0x748) == 1,*(int *)(this + 0x748) == 2,cVar7,this[0x626]
                           ,this[0x627],*(undefined4 *)(this + 0x74c),*(undefined4 *)(this + 0x634),
                           (Ref<TextServer> *)&local_108);
                if (((local_100 != (Object *)0x0) &&
                    (cVar8 = RefCounted::unreference(), pOVar6 = local_100, cVar8 != '\0')) &&
                   (cVar8 = predelete_handler(local_100), cVar8 != '\0')) {
                  (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
                  Memory::free_static(pOVar6,false);
                }
                plVar16 = (long *)RenderingServer::get_singleton();
                (**(code **)(*plVar16 + 0x2a0))(plVar16,local_80,local_108);
                plVar16 = (long *)RenderingServer::get_singleton();
                pcVar4 = *(code **)(*plVar16 + 0x2a8);
                ::Variant::Variant((Variant *)local_58,(RID *)&local_110);
                StringName::StringName((StringName *)&local_100,"texture_albedo",false);
                (*pcVar4)(plVar16,local_80,(StringName *)&local_100,(Variant *)local_58);
                if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
                  StringName::unref();
                }
                if (::Variant::needs_deinit[(int)local_58[0]] != '\0') {
                  ::Variant::_clear_internal();
                }
                plVar16 = (long *)RenderingServer::get_singleton();
                pcVar4 = *(code **)(*plVar16 + 0x2a8);
                ::Variant::Variant((Variant *)local_58,(Vector2 *)&local_70);
                StringName::StringName((StringName *)&local_100,"albedo_texture_size",false);
                (*pcVar4)(plVar16,local_80,(StringName *)&local_100,(Variant *)local_58);
                if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
                  StringName::unref();
                }
                if (::Variant::needs_deinit[(int)local_58[0]] != '\0') {
                  ::Variant::_clear_internal();
                }
                if (*(int *)(this + 0x628) == 0) {
                  plVar16 = (long *)RenderingServer::get_singleton();
                  fVar36 = 0.0;
                  (**(code **)(*plVar16 + 0x2b8))(plVar16,local_80,param_4);
                }
                else {
                  fVar36 = (float)param_4 * *(float *)(this + 0x620);
                  local_88 = CONCAT44(fVar36,(undefined4)local_88);
                }
                lVar10 = HashMap<Label3D::SurfaceKey,Label3D::SurfaceData,Label3D::SurfaceKeyHasher,HashMapComparatorDefault<Label3D::SurfaceKey>,DefaultTypedAllocator<HashMapElement<Label3D::SurfaceKey,Label3D::SurfaceData>>>
                         ::operator[](this_03,(SurfaceKey *)&local_f8);
                if (*(long *)(lVar10 + 8) != 0) {
                  CowData<Vector3>::_ref((CowData<Vector3> *)(lVar10 + 8),(CowData *)local_e0);
                }
                if (*(long *)(lVar10 + 0x18) != 0) {
                  CowData<Vector3>::_ref((CowData<Vector3> *)(lVar10 + 0x18),(CowData *)local_d0);
                }
                if (*(long *)(lVar10 + 0x28) != 0) {
                  CowData<float>::_ref((CowData<float> *)(lVar10 + 0x28),(CowData *)local_c0);
                }
                if (*(long *)(lVar10 + 0x38) != 0) {
                  CowData<Color>::_ref((CowData<Color> *)(lVar10 + 0x38),(CowData *)local_b0);
                }
                if (*(long *)(lVar10 + 0x48) != 0) {
                  CowData<Vector2>::_ref((CowData<Vector2> *)(lVar10 + 0x48),(CowData *)local_a0);
                }
                if (*(long *)(lVar10 + 0x58) != 0) {
                  CowData<int>::_ref((CowData<int> *)(lVar10 + 0x58),(CowData *)&local_90);
                }
                *(float *)(lVar10 + 100) = fVar36;
                *(undefined4 *)(lVar10 + 0x60) = 0;
                *(undefined8 *)(lVar10 + 0x68) = local_80;
                SurfaceData::~SurfaceData((SurfaceData *)&local_e8);
              }
              lVar10 = HashMap<Label3D::SurfaceKey,Label3D::SurfaceData,Label3D::SurfaceKeyHasher,HashMapComparatorDefault<Label3D::SurfaceKey>,DefaultTypedAllocator<HashMapElement<Label3D::SurfaceKey,Label3D::SurfaceData>>>
                       ::operator[](this_03,(SurfaceKey *)&local_f8);
              this_00 = (CowData<Vector3> *)(lVar10 + 8);
              CowData<Vector3>::resize<false>(this_00,(long)(*(int *)(lVar10 + 0x60) * 4 + 4));
              CowData<Vector3>::resize<false>
                        ((CowData<Vector3> *)(lVar10 + 0x18),(long)(*(int *)(lVar10 + 0x60) * 4 + 4)
                        );
              iVar23 = *(int *)(lVar10 + 0x60);
              this_01 = (CowData<float> *)(lVar10 + 0x28);
              lVar27 = (long)((iVar23 + 1) * 0x10);
              if (lVar27 < 0) {
                uVar29 = 0x157;
                pcVar21 = "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER";
LAB_0010a552:
                _err_print_error("resize","./core/templates/cowdata.h",uVar29,pcVar21,0);
                iVar23 = *(int *)(lVar10 + 0x60);
                iVar9 = iVar23 + 1;
LAB_00108e46:
                iVar9 = iVar9 << 2;
                lVar27 = (long)iVar9;
                if (lVar27 < 0) {
                  _err_print_error("resize","./core/templates/cowdata.h",0x157,
                                   "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER"
                                   ,0);
LAB_00108fa4:
                  iVar23 = *(int *)(lVar10 + 0x60);
                  iVar9 = iVar23 * 4 + 4;
                  lVar27 = (long)iVar9;
                  if (-1 < lVar27) goto LAB_00108fc2;
                  _err_print_error("resize","./core/templates/cowdata.h",0x157,
                                   "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER"
                                  );
                  iVar23 = *(int *)(lVar10 + 0x60);
                }
                else {
LAB_00108e61:
                  this_04 = (CowData<Color> *)(lVar10 + 0x38);
                  lVar18 = *(long *)this_04;
                  if (lVar18 == 0) {
                    if (lVar27 == 0) goto LAB_0010a121;
                    lVar20 = 0;
                    lVar18 = lVar27;
                    CowData<Color>::_copy_on_write(this_04);
                    iVar23 = (int)lVar18;
LAB_0010a19c:
                    uVar11 = lVar27 * 0x10 - 1;
                    uVar11 = uVar11 | uVar11 >> 1;
                    uVar11 = uVar11 | uVar11 >> 2;
                    uVar11 = uVar11 >> 4 | uVar11;
                    uVar11 = uVar11 >> 8 | uVar11;
                    uVar11 = uVar11 | uVar11 >> 0x10;
                    pCVar24 = (Color *)((uVar11 >> 0x20 | uVar11) + 1);
                    if (lVar20 < lVar27) {
LAB_0010a3d0:
                      if (lVar20 == 0) {
                        puVar19 = (undefined8 *)Memory::alloc_static((ulong)(pCVar24 + 0x10),false);
                        if (puVar19 == (undefined8 *)0x0) {
                          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                                           "Parameter \"mem_new\" is null.",0);
                        }
                        else {
                          puVar17 = puVar19 + 2;
                          *puVar19 = 1;
                          puVar19[1] = 0;
                          *(undefined8 **)(lVar10 + 0x38) = puVar17;
                          lVar18 = 0;
LAB_00108f56:
                          uVar28 = __LC245;
                          uVar29 = CONCAT44(_LC33,_UNK_00130a18);
                          puVar14 = puVar17 + lVar18 * 2;
                          puVar19 = puVar14;
                          if (((lVar27 - lVar18) * 0x10 & 0x10U) != 0) {
                            *puVar14 = __LC245;
                            puVar14[1] = uVar29;
                            puVar19 = puVar14 + 2;
                            if (puVar14 + (lVar27 - lVar18) * 2 == puVar19) goto LAB_00108fa0;
                          }
                          do {
                            *puVar19 = uVar28;
                            puVar19[1] = uVar29;
                            puVar15 = puVar19 + 4;
                            puVar19[2] = uVar28;
                            puVar19[3] = uVar29;
                            puVar19 = puVar15;
                          } while (puVar14 + (lVar27 - lVar18) * 2 != puVar15);
LAB_00108fa0:
                          puVar17[-1] = lVar27;
                        }
                      }
                      else {
                        iVar23 = CowData<Color>::_realloc(this_04,(long)pCVar24);
                        if (iVar23 == 0) {
LAB_00108f40:
                          puVar17 = *(undefined8 **)(lVar10 + 0x38);
                          if (puVar17 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
                            pcVar4 = (code *)invalidInstructionException();
                            (*pcVar4)();
                          }
                          lVar18 = puVar17[-1];
                          if (lVar18 < lVar27) goto LAB_00108f56;
                          goto LAB_00108fa0;
                        }
                      }
                    }
                    else {
LAB_0010a1ef:
                      iVar9 = CowData<Color>::_realloc(this_04,(long)pCVar24);
                      pCVar22 = extraout_RDX;
                      pGVar25 = (Glyph *)this_04;
                      if (iVar9 == 0) goto LAB_0010a20b;
                    }
                    goto LAB_00108fa4;
                  }
                  lVar20 = *(long *)(lVar18 + -8);
                  if (lVar20 != lVar27) {
                    if (lVar27 == 0) goto LAB_0010a108;
                    lVar18 = lVar27;
                    CowData<Color>::_copy_on_write(this_04);
                    iVar23 = (int)lVar18;
                    uVar11 = lVar27 * 0x10 - 1;
                    uVar11 = uVar11 >> 1 | uVar11;
                    uVar11 = uVar11 >> 2 | uVar11;
                    uVar11 = uVar11 >> 4 | uVar11;
                    uVar11 = uVar11 >> 8 | uVar11;
                    uVar11 = uVar11 >> 0x10 | uVar11;
                    pCVar22 = (Color *)(uVar11 >> 0x20 | uVar11);
                    pCVar24 = pCVar22 + 1;
                    if (lVar20 * 0x10 == 0) goto LAB_0010a19c;
                    uVar11 = lVar20 * 0x10 - 1;
                    uVar11 = uVar11 | uVar11 >> 1;
                    uVar11 = uVar11 | uVar11 >> 2;
                    uVar11 = uVar11 | uVar11 >> 4;
                    uVar11 = uVar11 | uVar11 >> 8;
                    uVar11 = uVar11 | uVar11 >> 0x10;
                    pGVar25 = (Glyph *)(uVar11 >> 0x20);
                    pCVar13 = (Color *)(uVar11 | (ulong)pGVar25);
                    if (lVar20 < lVar27) {
                      if (pCVar13 != pCVar22) goto LAB_0010a3d0;
                      goto LAB_00108f40;
                    }
                    if (pCVar13 != pCVar22) goto LAB_0010a1ef;
LAB_0010a20b:
                    if (*(long *)(lVar10 + 0x38) == 0) {
                      _generate_glyph_surfaces
                                (pGVar25,(Vector2 *)pCVar24,pCVar22,(int)lVar27,iVar23);
                      return;
                    }
                    *(long *)(*(long *)(lVar10 + 0x38) + -8) = lVar27;
                    goto LAB_00108fa4;
                  }
LAB_00108fc2:
                  lVar18 = *(long *)(lVar10 + 0x48);
                  lVar20 = lVar27;
                  if (lVar18 == 0) {
                    if (lVar27 != 0) {
                      CowData<Vector2>::_copy_on_write((CowData<Vector2> *)(lVar10 + 0x48));
                      lVar26 = 0;
LAB_0010a250:
                      uVar11 = lVar27 * 8 - 1;
                      uVar11 = uVar11 >> 1 | uVar11;
                      uVar11 = uVar11 | uVar11 >> 2;
                      uVar11 = uVar11 | uVar11 >> 4;
                      uVar11 = uVar11 | uVar11 >> 8;
                      uVar11 = uVar11 | uVar11 >> 0x10;
                      lVar18 = (uVar11 | uVar11 >> 0x20) + 1;
                      if (lVar26 < lVar20) {
LAB_0010a458:
                        if (lVar26 == 0) {
                          puVar19 = (undefined8 *)Memory::alloc_static(lVar18 + 0x10,false);
                          if (puVar19 == (undefined8 *)0x0) {
                            _err_print_error("resize","./core/templates/cowdata.h",0x171,
                                             "Parameter \"mem_new\" is null.");
                            iVar23 = *(int *)(lVar10 + 0x60);
                            goto LAB_001090c4;
                          }
                          puVar17 = puVar19 + 2;
                          *puVar19 = 1;
                          puVar19[1] = 0;
                          *(undefined8 **)(lVar10 + 0x48) = puVar17;
                          lVar18 = 0;
LAB_0010a38f:
                          memset(puVar17 + lVar18,0,(lVar20 - lVar18) * 8);
                        }
                        else {
                          iVar23 = CowData<Vector2>::_realloc
                                             ((CowData<Vector2> *)(lVar10 + 0x48),lVar18);
                          if (iVar23 != 0) goto LAB_001090c0;
LAB_0010a379:
                          puVar17 = *(undefined8 **)(lVar10 + 0x48);
                          if (puVar17 == (undefined8 *)0x0) {
                            FUN_0011072a();
                            return;
                          }
                          lVar18 = puVar17[-1];
                          if (lVar18 < lVar20) goto LAB_0010a38f;
                        }
                        puVar17[-1] = lVar27;
                        iVar23 = *(int *)(lVar10 + 0x60);
                      }
                      else {
LAB_0010a2a0:
                        iVar23 = CowData<Vector2>::_realloc
                                           ((CowData<Vector2> *)(lVar10 + 0x48),lVar18);
                        if (iVar23 == 0) goto LAB_001090af;
LAB_001090c0:
                        iVar23 = *(int *)(lVar10 + 0x60);
                      }
                    }
                  }
                  else {
LAB_00108fcf:
                    lVar26 = *(long *)(lVar18 + -8);
                    if (lVar20 != lVar26) {
                      if (lVar20 != 0) {
                        CowData<Vector2>::_copy_on_write((CowData<Vector2> *)(lVar10 + 0x48));
                        lVar27 = (long)iVar9;
                        uVar11 = lVar27 * 8 - 1;
                        uVar11 = uVar11 >> 1 | uVar11;
                        uVar11 = uVar11 >> 2 | uVar11;
                        uVar11 = uVar11 >> 4 | uVar11;
                        uVar11 = uVar11 >> 8 | uVar11;
                        uVar11 = uVar11 >> 0x10 | uVar11;
                        uVar11 = uVar11 >> 0x20 | uVar11;
                        lVar18 = uVar11 + 1;
                        if (lVar26 * 8 == 0) goto LAB_0010a250;
                        uVar12 = lVar26 * 8 - 1;
                        uVar12 = uVar12 | uVar12 >> 1;
                        uVar12 = uVar12 | uVar12 >> 2;
                        uVar12 = uVar12 | uVar12 >> 4;
                        uVar12 = uVar12 | uVar12 >> 8;
                        uVar12 = uVar12 | uVar12 >> 0x10;
                        uVar12 = uVar12 | uVar12 >> 0x20;
                        if (lVar26 < lVar20) {
                          if (uVar12 != uVar11) goto LAB_0010a458;
                          goto LAB_0010a379;
                        }
                        if (uVar12 != uVar11) goto LAB_0010a2a0;
LAB_001090af:
                        if (*(long *)(lVar10 + 0x48) == 0) {
code_r0x0011071e:
                          _DAT_00000000 = 0;
                    /* WARNING: Does not return */
                          pcVar4 = (code *)invalidInstructionException();
                          (*pcVar4)();
                        }
                        *(long *)(*(long *)(lVar10 + 0x48) + -8) = lVar27;
                        goto LAB_001090c0;
                      }
                      goto LAB_0010a140;
                    }
                  }
                }
              }
              else {
                lVar18 = *(long *)(lVar10 + 0x28);
                if (lVar18 != 0) {
                  lVar20 = *(long *)(lVar18 + -8);
                  if (lVar27 != lVar20) {
                    if (lVar27 != 0) {
                      CowData<float>::_copy_on_write(this_01);
                      uVar11 = lVar27 * 4 - 1;
                      uVar11 = uVar11 >> 1 | uVar11;
                      uVar11 = uVar11 >> 2 | uVar11;
                      uVar11 = uVar11 >> 4 | uVar11;
                      uVar11 = uVar11 >> 8 | uVar11;
                      uVar11 = uVar11 >> 0x10 | uVar11;
                      uVar11 = uVar11 >> 0x20 | uVar11;
                      lVar18 = uVar11 + 1;
                      if (lVar20 * 4 == 0) goto LAB_0010a2d5;
                      uVar12 = lVar20 * 4 - 1;
                      uVar12 = uVar12 | uVar12 >> 1;
                      uVar12 = uVar12 | uVar12 >> 2;
                      uVar12 = uVar12 | uVar12 >> 4;
                      uVar12 = uVar12 | uVar12 >> 8;
                      uVar12 = uVar12 | uVar12 >> 0x10;
                      uVar12 = uVar12 | uVar12 >> 0x20;
                      if (lVar20 < lVar27) {
                        if (uVar12 != uVar11) goto LAB_0010a418;
                        goto LAB_00109f61;
                      }
                      if (uVar12 != uVar11) goto LAB_0010a325;
LAB_00108e2e:
                      if (*(long *)(lVar10 + 0x28) == 0) goto code_r0x0011071e;
                      *(long *)(*(long *)(lVar10 + 0x28) + -8) = lVar27;
                      goto LAB_00108e3f;
                    }
                    LOCK();
                    plVar16 = (long *)(lVar18 + -0x10);
                    *plVar16 = *plVar16 + -1;
                    UNLOCK();
                    if (*plVar16 == 0) {
                      lVar27 = *(long *)(lVar10 + 0x28);
                      *(undefined8 *)(lVar10 + 0x28) = 0;
                      Memory::free_static((void *)(lVar27 + -0x10),false);
                      iVar23 = *(int *)(lVar10 + 0x60);
                      iVar9 = iVar23 + 1;
                    }
                    else {
                      iVar23 = *(int *)(lVar10 + 0x60);
                      *(undefined8 *)(lVar10 + 0x28) = 0;
                      iVar9 = iVar23 + 1;
                    }
                    goto LAB_00108e46;
                  }
                  iVar9 = (iVar23 + 1) * 4;
                  lVar27 = (long)iVar9;
                  goto LAB_00108e61;
                }
                if (lVar27 != 0) {
                  CowData<float>::_copy_on_write(this_01);
                  lVar20 = 0;
LAB_0010a2d5:
                  uVar11 = lVar27 * 4 - 1;
                  uVar11 = uVar11 | uVar11 >> 1;
                  uVar11 = uVar11 | uVar11 >> 2;
                  uVar11 = uVar11 >> 4 | uVar11;
                  uVar11 = uVar11 | uVar11 >> 8;
                  uVar11 = uVar11 | uVar11 >> 0x10;
                  lVar18 = (uVar11 | uVar11 >> 0x20) + 1;
                  if (lVar20 < lVar27) {
LAB_0010a418:
                    if (lVar20 == 0) {
                      puVar17 = (undefined8 *)Memory::alloc_static(lVar18 + 0x10,false);
                      if (puVar17 == (undefined8 *)0x0) {
                        uVar29 = 0x171;
                        pcVar21 = "Parameter \"mem_new\" is null.";
                        goto LAB_0010a552;
                      }
                      puVar19 = puVar17 + 2;
                      *puVar17 = 1;
                      puVar17[1] = 0;
                      *(undefined8 **)(lVar10 + 0x28) = puVar19;
                    }
                    else {
                      iVar23 = CowData<float>::_realloc(this_01,lVar18);
                      if (iVar23 != 0) goto LAB_00108e3f;
LAB_00109f61:
                      puVar19 = *(undefined8 **)(lVar10 + 0x28);
                      if (puVar19 == (undefined8 *)0x0) goto code_r0x0011071e;
                    }
                    puVar19[-1] = lVar27;
                    iVar23 = *(int *)(lVar10 + 0x60);
                    iVar9 = iVar23 + 1;
                  }
                  else {
LAB_0010a325:
                    iVar23 = CowData<float>::_realloc(this_01,lVar18);
                    if (iVar23 == 0) goto LAB_00108e2e;
LAB_00108e3f:
                    iVar23 = *(int *)(lVar10 + 0x60);
                    iVar9 = iVar23 + 1;
                  }
                  goto LAB_00108e46;
                }
                lVar18 = *(long *)(lVar10 + 0x38);
                if (lVar18 != 0) {
                  if (*(long *)(lVar18 + -8) != 0) {
LAB_0010a108:
                    LOCK();
                    plVar16 = (long *)(lVar18 + -0x10);
                    *plVar16 = *plVar16 + -1;
                    UNLOCK();
                    if (*plVar16 == 0) {
                      lVar27 = *(long *)(lVar10 + 0x38);
                      *(undefined8 *)(lVar10 + 0x38) = 0;
                      Memory::free_static((void *)(lVar27 + -0x10),false);
                    }
                    else {
                      *(undefined8 *)(lVar10 + 0x38) = 0;
                    }
                    goto LAB_00108fa4;
                  }
                  lVar18 = *(long *)(lVar10 + 0x48);
                  if (lVar18 == 0) goto LAB_001090c4;
                  iVar9 = 0;
                  lVar20 = 0;
                  goto LAB_00108fcf;
                }
LAB_0010a121:
                lVar18 = *(long *)(lVar10 + 0x48);
                if ((lVar18 == 0) || (*(long *)(lVar18 + -8) == 0)) goto LAB_001090c4;
LAB_0010a140:
                LOCK();
                plVar16 = (long *)(lVar18 + -0x10);
                *plVar16 = *plVar16 + -1;
                UNLOCK();
                if (*plVar16 == 0) {
                  lVar27 = *(long *)(lVar10 + 0x48);
                  *(undefined8 *)(lVar10 + 0x48) = 0;
                  Memory::free_static((void *)(lVar27 + -0x10),false);
                  iVar23 = *(int *)(lVar10 + 0x60);
                }
                else {
                  *(undefined8 *)(lVar10 + 0x48) = 0;
                  iVar23 = *(int *)(lVar10 + 0x60);
                }
              }
LAB_001090c4:
              local_190 = (CowData<Color> *)(lVar10 + 0x38);
              this_05 = (CowData<Vector2> *)(lVar10 + 0x48);
              fVar36 = *(float *)(param_2 + 4);
              iVar23 = iVar23 * 4 + 3;
              fVar2 = *(float *)param_2;
              lVar18 = (long)iVar23;
              uVar3 = *(undefined4 *)(lVar10 + 100);
              lVar27 = *(long *)(lVar10 + 8);
              if (iVar23 < 0) goto joined_r0x0010a6b5;
              if (lVar27 == 0) goto LAB_0010a0eb;
              if (*(long *)(lVar27 + -8) <= lVar18) {
LAB_00109541:
                lVar10 = *(long *)(lVar27 + -8);
                goto LAB_00109560;
              }
              CowData<Vector3>::_copy_on_write(this_00);
              lVar27 = *(long *)(lVar10 + 8);
              uVar29 = *(undefined8 *)param_2;
              puVar19 = (undefined8 *)(lVar27 + lVar18 * 0xc);
              *puVar19 = CONCAT44((fVar36 - fVar41) - fVar39,fVar40 + fVar2);
              *(undefined4 *)(puVar19 + 1) = uVar3;
              uVar3 = *(undefined4 *)(lVar10 + 100);
              iVar23 = *(int *)(lVar10 + 0x60) * 4 + 2;
              lVar18 = (long)iVar23;
              if (iVar23 < 0) goto joined_r0x0010a6b5;
              if (lVar27 == 0) goto LAB_0010a0eb;
              if (*(long *)(lVar27 + -8) <= lVar18) goto LAB_00109541;
              CowData<Vector3>::_copy_on_write(this_00);
              lVar27 = *(long *)(lVar10 + 8);
              fVar36 = *(float *)(param_2 + 4);
              puVar19 = (undefined8 *)(lVar27 + lVar18 * 0xc);
              *puVar19 = CONCAT44(((float)((ulong)uVar29 >> 0x20) - fVar41) - fVar39,
                                  fVar38 + fVar40 + (float)uVar29);
              fVar2 = *(float *)param_2;
              *(undefined4 *)(puVar19 + 1) = uVar3;
              uVar3 = *(undefined4 *)(lVar10 + 100);
              iVar23 = *(int *)(lVar10 + 0x60) * 4 + 1;
              lVar18 = (long)iVar23;
              if (iVar23 < 0) goto joined_r0x0010a6b5;
              if (lVar27 == 0) goto LAB_0010a0eb;
              if (*(long *)(lVar27 + -8) <= lVar18) goto LAB_00109541;
              CowData<Vector3>::_copy_on_write(this_00);
              lVar27 = *(long *)(lVar10 + 8);
              iVar23 = *(int *)(lVar10 + 0x60);
              puVar19 = (undefined8 *)(lVar27 + lVar18 * 0xc);
              *puVar19 = CONCAT44(fVar36 - fVar41,fVar40 + fVar2 + fVar38);
              uVar29 = *(undefined8 *)param_2;
              lVar18 = (long)(iVar23 << 2);
              *(undefined4 *)(puVar19 + 1) = uVar3;
              uVar3 = *(undefined4 *)(lVar10 + 100);
              if (lVar18 < 0) goto joined_r0x0010a6b5;
              if (lVar27 == 0) goto LAB_0010a0eb;
              if (*(long *)(lVar27 + -8) <= lVar18) goto LAB_00109541;
              CowData<Vector3>::_copy_on_write(this_00);
              puVar19 = (undefined8 *)(*(long *)(lVar10 + 8) + lVar18 * 0xc);
              *puVar19 = CONCAT44((float)((ulong)uVar29 >> 0x20) - fVar41,fVar40 + (float)uVar29);
              *(undefined4 *)(puVar19 + 1) = uVar3;
              lVar18 = (long)(*(int *)(lVar10 + 0x60) * 4);
              if (lVar18 < 0) {
                lVar27 = *(long *)(lVar10 + 0x18);
joined_r0x0010a6b5:
                if (lVar27 != 0) goto LAB_00109541;
                goto LAB_0010a0eb;
              }
              iVar23 = 0;
              while( true ) {
                lVar27 = *(long *)(lVar10 + 0x18);
                if (lVar27 == 0) goto LAB_0010a0eb;
                if (*(long *)(lVar27 + -8) <= lVar18) goto LAB_00109541;
                CowData<Vector3>::_copy_on_write((CowData<Vector3> *)(lVar10 + 0x18));
                uVar3 = _LC33;
                puVar19 = (undefined8 *)(*(long *)(lVar10 + 0x18) + lVar18 * 0xc);
                *puVar19 = 0;
                *(undefined4 *)(puVar19 + 1) = uVar3;
                lVar18 = (long)((iVar23 + *(int *)(lVar10 + 0x60) * 4) * 4);
                if (lVar18 < 0) {
                  lVar27 = *(long *)(lVar10 + 0x28);
                  goto joined_r0x0010a6b5;
                }
                lVar27 = *(long *)(lVar10 + 0x28);
                if (lVar27 == 0) goto LAB_0010a0eb;
                if (*(long *)(lVar27 + -8) <= lVar18) goto LAB_00109541;
                CowData<float>::_copy_on_write(this_01);
                lVar27 = *(long *)(lVar10 + 0x28);
                iVar9 = (iVar23 + *(int *)(lVar10 + 0x60) * 4) * 4 + 1;
                *(undefined4 *)(lVar27 + lVar18 * 4) = uVar3;
                lVar18 = (long)iVar9;
                if (iVar9 < 0) goto joined_r0x0010a6b5;
                if (lVar27 == 0) goto LAB_0010a0eb;
                if (*(long *)(lVar27 + -8) <= lVar18) goto LAB_00109541;
                CowData<float>::_copy_on_write(this_01);
                iVar9 = *(int *)(lVar10 + 0x60);
                lVar27 = *(long *)(lVar10 + 0x28);
                *(undefined4 *)(lVar27 + lVar18 * 4) = 0;
                iVar9 = (iVar23 + iVar9 * 4) * 4 + 2;
                lVar18 = (long)iVar9;
                if (iVar9 < 0) goto joined_r0x0010a6b5;
                if (lVar27 == 0) goto LAB_0010a0eb;
                if (*(long *)(lVar27 + -8) <= lVar18) goto LAB_00109541;
                CowData<float>::_copy_on_write(this_01);
                iVar9 = *(int *)(lVar10 + 0x60);
                lVar27 = *(long *)(lVar10 + 0x28);
                *(undefined4 *)(lVar27 + lVar18 * 4) = 0;
                iVar9 = (iVar23 + iVar9 * 4) * 4 + 3;
                lVar18 = (long)iVar9;
                if (iVar9 < 0) goto joined_r0x0010a6b5;
                if (lVar27 == 0) goto LAB_0010a0eb;
                if (*(long *)(lVar27 + -8) <= lVar18) goto LAB_00109541;
                CowData<float>::_copy_on_write(this_01);
                *(undefined4 *)(*(long *)(lVar10 + 0x28) + lVar18 * 4) = uVar3;
                lVar18 = (long)(iVar23 + *(int *)(lVar10 + 0x60) * 4);
                if (lVar18 < 0) {
                  lVar27 = *(long *)(lVar10 + 0x38);
                  goto joined_r0x0010a6b5;
                }
                lVar27 = *(long *)(lVar10 + 0x38);
                if (lVar27 == 0) goto LAB_0010a0eb;
                if (*(long *)(lVar27 + -8) <= lVar18) goto LAB_00109541;
                CowData<Color>::_copy_on_write(local_190);
                uVar29 = *(undefined8 *)(param_3 + 8);
                iVar9 = *(int *)(lVar10 + 0x60);
                puVar19 = (undefined8 *)(*(long *)(lVar10 + 0x38) + lVar18 * 0x10);
                *puVar19 = *(undefined8 *)param_3;
                puVar19[1] = uVar29;
                lVar18 = (long)(iVar23 + iVar9 * 4);
                if (lVar18 < 0) {
                  lVar27 = *(long *)(lVar10 + 0x48);
                  goto joined_r0x0010a6b5;
                }
                lVar27 = *(long *)(lVar10 + 0x48);
                if (lVar27 == 0) goto LAB_0010a0eb;
                if (*(long *)(lVar27 + -8) <= lVar18) goto LAB_00109541;
                iVar23 = iVar23 + 1;
                CowData<Vector2>::_copy_on_write(this_05);
                lVar27 = *(long *)(lVar10 + 0x48);
                *(undefined8 *)(lVar27 + lVar18 * 8) = 0;
                uVar29 = _LC237;
                if (iVar23 == 4) break;
                iVar9 = iVar23 + *(int *)(lVar10 + 0x60) * 4;
                lVar18 = (long)iVar9;
                if (iVar9 < 0) {
                  lVar27 = *(long *)(lVar10 + 0x18);
                  goto joined_r0x0010a6b5;
                }
              }
              iVar23 = *(int *)(lVar10 + 0x60);
              if (local_110 != 0) {
                iVar23 = iVar23 * 4 + 3;
                fVar36 = auVar42._12_4_ + auVar42._4_4_;
                lVar18 = (long)iVar23;
                auVar30._4_4_ = fVar36;
                auVar30._8_8_ = 0;
                auVar31._8_8_ = _LC237;
                auVar31._0_8_ = local_70;
                auVar31 = divps(auVar30,auVar31);
                if (iVar23 < 0) {
LAB_0010abb7:
                  if (lVar27 == 0) {
LAB_0010abbc:
                    lVar10 = 0;
                    goto LAB_00109560;
                  }
                }
                else {
                  if (lVar27 == 0) goto LAB_0010abbc;
                  if (lVar18 < *(long *)(lVar27 + -8)) {
                    CowData<Vector2>::_copy_on_write(this_05);
                    lVar27 = *(long *)(lVar10 + 0x48);
                    iVar23 = *(int *)(lVar10 + 0x60);
                    *(long *)(lVar27 + lVar18 * 8) = auVar31._0_8_;
                    auVar32._0_4_ = auVar42._8_4_ + auVar30._0_4_;
                    iVar23 = iVar23 * 4 + 2;
                    lVar18 = (long)iVar23;
                    auVar32._4_4_ = fVar36;
                    auVar32._8_8_ = 0;
                    auVar35._4_4_ = auVar42._4_4_;
                    auVar35._0_4_ = auVar32._0_4_;
                    auVar37._8_8_ = uVar29;
                    auVar37._0_8_ = local_70;
                    auVar31 = divps(auVar32,auVar37);
                    if (iVar23 < 0) goto LAB_0010abb7;
                    if (lVar27 == 0) goto LAB_0010abbc;
                    if (lVar18 < *(long *)(lVar27 + -8)) {
                      CowData<Vector2>::_copy_on_write(this_05);
                      lVar27 = *(long *)(lVar10 + 0x48);
                      iVar23 = *(int *)(lVar10 + 0x60);
                      auVar35._8_8_ = 0;
                      *(long *)(lVar27 + lVar18 * 8) = auVar31._0_8_;
                      iVar23 = iVar23 * 4 + 1;
                      auVar33._8_8_ = uVar29;
                      auVar33._0_8_ = local_70;
                      lVar18 = (long)iVar23;
                      auVar31 = divps(auVar35,auVar33);
                      if (iVar23 < 0) goto LAB_0010abb7;
                      if (lVar27 == 0) goto LAB_0010abbc;
                      if (lVar18 < *(long *)(lVar27 + -8)) {
                        CowData<Vector2>::_copy_on_write(this_05);
                        lVar27 = *(long *)(lVar10 + 0x48);
                        iVar23 = *(int *)(lVar10 + 0x60);
                        *(long *)(lVar27 + lVar18 * 8) = auVar31._0_8_;
                        auVar5._8_8_ = uStack_130;
                        auVar5._0_8_ = auVar42._0_8_;
                        auVar34._8_8_ = uVar29;
                        auVar34._0_8_ = local_70;
                        lVar18 = (long)(iVar23 * 4);
                        auVar31 = divps(auVar5,auVar34);
                        if (lVar18 < 0) goto LAB_0010abb7;
                        if (lVar27 == 0) goto LAB_0010abbc;
                        if (lVar18 < *(long *)(lVar27 + -8)) {
                          CowData<Vector2>::_copy_on_write(this_05);
                          iVar23 = *(int *)(lVar10 + 0x60);
                          *(long *)(*(long *)(lVar10 + 0x48) + lVar18 * 8) = auVar31._0_8_;
                          goto LAB_0010a97f;
                        }
                      }
                    }
                  }
                }
                lVar10 = *(long *)(lVar27 + -8);
                goto LAB_00109560;
              }
LAB_0010a97f:
              this_02 = (CowData<int> *)(lVar10 + 0x58);
              CowData<int>::resize<false>(this_02,(long)((iVar23 * 3 + 3) * 2));
              iVar23 = *(int *)(lVar10 + 0x60);
              lVar18 = (long)(iVar23 * 6);
              if (lVar18 < 0) {
                lVar27 = *(long *)(lVar10 + 0x58);
                goto joined_r0x0010a6b5;
              }
              lVar27 = *(long *)(lVar10 + 0x58);
              if (lVar27 == 0) goto LAB_0010a0eb;
              if (*(long *)(lVar27 + -8) <= lVar18) goto LAB_00109541;
              CowData<int>::_copy_on_write(this_02);
              lVar27 = *(long *)(lVar10 + 0x58);
              *(int *)(lVar27 + lVar18 * 4) = iVar23 * 4;
              iVar23 = *(int *)(lVar10 + 0x60);
              iVar9 = iVar23 * 6 + 1;
              lVar18 = (long)iVar9;
              if (iVar9 < 0) {
LAB_0010ac0a:
                if (lVar27 != 0) {
LAB_0010ac16:
                  lVar10 = *(long *)(lVar27 + -8);
                  goto LAB_00109560;
                }
LAB_0010a0eb:
                lVar10 = 0;
LAB_00109560:
                _err_print_index_error
                          ("operator[]","./core/templates/vector.h",0x38,lVar18,lVar10,"p_index",
                           "((Vector<T> *)(this))->_cowdata.size()","",false,true);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar4 = (code *)invalidInstructionException();
                (*pcVar4)();
              }
              if (lVar27 == 0) goto LAB_0010a0eb;
              if (*(long *)(lVar27 + -8) <= lVar18) goto LAB_0010ac16;
              CowData<int>::_copy_on_write(this_02);
              lVar27 = *(long *)(lVar10 + 0x58);
              *(int *)(lVar27 + lVar18 * 4) = iVar23 * 4 + 1;
              iVar23 = *(int *)(lVar10 + 0x60);
              iVar9 = iVar23 * 6 + 2;
              lVar18 = (long)iVar9;
              if (iVar9 < 0) goto LAB_0010ac0a;
              if (lVar27 == 0) goto LAB_0010a0eb;
              if (*(long *)(lVar27 + -8) <= lVar18) goto LAB_0010ac16;
              CowData<int>::_copy_on_write(this_02);
              lVar27 = *(long *)(lVar10 + 0x58);
              *(int *)(lVar27 + lVar18 * 4) = iVar23 * 4 + 2;
              iVar23 = *(int *)(lVar10 + 0x60);
              iVar9 = iVar23 * 6 + 3;
              lVar18 = (long)iVar9;
              if (iVar9 < 0) goto joined_r0x0010a6b5;
              if (lVar27 == 0) goto LAB_0010a0eb;
              if (*(long *)(lVar27 + -8) <= lVar18) goto LAB_00109541;
              CowData<int>::_copy_on_write(this_02);
              lVar27 = *(long *)(lVar10 + 0x58);
              *(int *)(lVar27 + lVar18 * 4) = iVar23 * 4;
              iVar23 = *(int *)(lVar10 + 0x60);
              iVar9 = iVar23 * 6 + 4;
              lVar18 = (long)iVar9;
              if (iVar9 < 0) goto LAB_0010ac0a;
              if (lVar27 == 0) goto LAB_0010a0eb;
              if (*(long *)(lVar27 + -8) <= lVar18) goto LAB_0010ac16;
              CowData<int>::_copy_on_write(this_02);
              lVar27 = *(long *)(lVar10 + 0x58);
              *(int *)(lVar27 + lVar18 * 4) = iVar23 * 4 + 2;
              iVar23 = *(int *)(lVar10 + 0x60);
              iVar9 = iVar23 * 6 + 5;
              lVar18 = (long)iVar9;
              if (iVar9 < 0) goto joined_r0x0010a6b5;
              if (lVar27 == 0) goto LAB_0010a0eb;
              if (*(long *)(lVar27 + -8) <= lVar18) goto LAB_00109541;
              CowData<int>::_copy_on_write(this_02);
              local_144 = local_144 + 1;
              *(int *)(*(long *)(lVar10 + 0x58) + lVar18 * 4) = iVar23 * 4 + 3;
              *(int *)(lVar10 + 0x60) = *(int *)(lVar10 + 0x60) + 1;
              *(float *)param_2 =
                   *(float *)(param_1 + 0x14) * *(float *)(this + 0x620) + *(float *)param_2;
            } while (local_144 < (int)(uint)(byte)param_1[9]);
          }
          goto LAB_001088dc;
        }
      }
    }
  }
  *(float *)param_2 =
       *(float *)(param_1 + 0x14) * *(float *)(this + 0x620) * (float)(byte)param_1[9] +
       *(float *)param_2;
LAB_001088dc:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Ref<Theme> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Ref<Theme>>::_copy_on_write(CowData<Ref<Theme>> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar1 * 8 != 0) {
    uVar7 = lVar1 * 8 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar8 = 0;
  *puVar5 = 1;
  puVar5[1] = lVar1;
  plVar6 = puVar5 + 2;
  if (lVar1 != 0) {
    do {
      lVar2 = *(long *)this;
      *plVar6 = 0;
      lVar2 = *(long *)(lVar2 + lVar8 * 8);
      if (lVar2 != 0) {
        *plVar6 = lVar2;
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          *plVar6 = 0;
        }
      }
      lVar8 = lVar8 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar1 != lVar8);
  }
  _unref(this);
  *(undefined8 **)this = puVar5 + 2;
  return;
}



/* Label3D::_get_font_or_default() const */

void Label3D::_get_font_or_default(void)

{
  Callable *pCVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  StringName *pSVar5;
  long lVar6;
  long *in_RSI;
  Vector *pVVar7;
  long *in_RDI;
  long *plVar8;
  long *plVar9;
  Object *pOVar10;
  long lVar11;
  long in_FS_OFFSET;
  long local_90;
  Object *local_88;
  Object *local_80 [2];
  long local_70 [2];
  long *local_60;
  Object *local_58 [3];
  long local_40;
  
  pCVar1 = (Callable *)in_RSI[0xda];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (pCVar1 != (Callable *)0x0) {
    create_custom_callable_function_pointer<Label3D>
              ((Label3D *)local_58,(char *)in_RSI,(_func_void *)"&Label3D::_font_changed");
    Resource::disconnect_changed(pCVar1);
    Callable::~Callable((Callable *)local_58);
    if ((in_RSI[0xda] != 0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) {
      pOVar10 = (Object *)in_RSI[0xda];
      cVar3 = predelete_handler(pOVar10);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
        Memory::free_static(pOVar10,false);
      }
    }
    in_RSI[0xda] = 0;
  }
  if (in_RSI[0xd9] != 0) {
    *in_RDI = 0;
    if (in_RSI[0xd9] != 0) {
      *in_RDI = in_RSI[0xd9];
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *in_RDI = 0;
      }
    }
    goto LAB_0010aecb;
  }
  StringName::StringName((StringName *)&local_90,(StringName *)(SceneStringNames::singleton + 0xa0))
  ;
  local_70[0] = 0;
  pSVar5 = (StringName *)ThemeDB::get_singleton();
  if (in_RSI[1] == 0) {
    pVVar7 = (Vector *)in_RSI[0x23];
    if (pVVar7 == (Vector *)0x0) {
      if (*(code **)(*in_RSI + 0x40) == _get_class_namev) {
        if ((_get_class_namev()::_class_name_static == '\0') &&
           (iVar4 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar4 != 0)) {
          _get_class_namev()::_class_name_static = 0;
          __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle
                      );
          __cxa_guard_release(&_get_class_namev()::_class_name_static);
        }
        if ((_get_class_namev()::_class_name_static == 0) ||
           ((*(long *)(_get_class_namev()::_class_name_static + 8) == 0 &&
            ((*(long *)(_get_class_namev()::_class_name_static + 0x10) == 0 ||
             (*(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8) < 2)))))) {
          StringName::assign_static_unique_class_name
                    ((StringName *)&_get_class_namev()::_class_name_static,"Label3D");
        }
        pVVar7 = (Vector *)&_get_class_namev()::_class_name_static;
      }
      else {
        pVVar7 = (Vector *)(**(code **)(*in_RSI + 0x40))();
      }
    }
  }
  else {
    pVVar7 = (Vector *)(in_RSI[1] + 0x20);
  }
  ThemeDB::get_native_type_dependencies(pSVar5,pVVar7);
  ThemeDB::get_singleton();
  ThemeDB::get_default_theme_context();
  ThemeContext::get_themes();
  lVar6 = Engine::get_singleton();
  if (*(char *)(lVar6 + 0xc0) != '\0') {
    ThemeDB::get_singleton();
    ThemeDB::get_project_theme();
    if (local_60 == (long *)0x0) {
      iVar4 = CowData<Ref<Theme>>::resize<false>((CowData<Ref<Theme>> *)&local_60,1);
      if (iVar4 == 0) {
        CowData<Ref<Theme>>::_copy_on_write((CowData<Ref<Theme>> *)&local_60);
        plVar8 = local_60;
        goto LAB_0010b410;
      }
LAB_0010b579:
      _err_print_error("insert","./core/templates/cowdata.h",0xf2,
                       "Condition \"err\" is true. Returning: err",0,0);
      pOVar10 = local_58[0];
    }
    else {
      lVar11 = local_60[-1];
      lVar6 = lVar11 + 1;
      if (lVar6 < 1) {
        _err_print_index_error
                  ("insert","./core/templates/cowdata.h",0xf0,0,lVar6,"p_pos","new_size","",false,
                   false);
        pOVar10 = local_58[0];
      }
      else {
        iVar4 = CowData<Ref<Theme>>::resize<false>((CowData<Ref<Theme>> *)&local_60,lVar6);
        if (iVar4 != 0) goto LAB_0010b579;
        CowData<Ref<Theme>>::_copy_on_write((CowData<Ref<Theme>> *)&local_60);
        plVar8 = local_60;
        for (; lVar11 != 0; lVar11 = lVar11 + -1) {
          pOVar10 = (Object *)plVar8[lVar11 + -1];
          pOVar2 = (Object *)plVar8[lVar11];
          if (pOVar10 != pOVar2) {
            plVar8[lVar11] = (long)pOVar10;
            if ((pOVar10 != (Object *)0x0) && (cVar3 = RefCounted::reference(), cVar3 == '\0')) {
              plVar8[lVar11] = 0;
            }
            if (((pOVar2 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
               (cVar3 = predelete_handler(pOVar2), cVar3 != '\0')) {
              (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
              Memory::free_static(pOVar2,false);
            }
          }
        }
LAB_0010b410:
        pOVar2 = (Object *)*plVar8;
        pOVar10 = pOVar2;
        if (local_58[0] != pOVar2) {
          *plVar8 = (long)local_58[0];
          if ((local_58[0] != (Object *)0x0) && (cVar3 = RefCounted::reference(), cVar3 == '\0')) {
            *plVar8 = 0;
          }
          pOVar10 = local_58[0];
          if (((pOVar2 != (Object *)0x0) &&
              (cVar3 = RefCounted::unreference(), pOVar10 = local_58[0], cVar3 != '\0')) &&
             (cVar3 = predelete_handler(pOVar2), pOVar10 = local_58[0], cVar3 != '\0')) {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
            pOVar10 = local_58[0];
          }
        }
      }
    }
    if (((pOVar10 != (Object *)0x0) &&
        (cVar3 = RefCounted::unreference(), pOVar10 = local_58[0], cVar3 != '\0')) &&
       (cVar3 = predelete_handler(local_58[0]), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
      Memory::free_static(pOVar10,false);
    }
  }
  CowData<Ref<Theme>>::_copy_on_write((CowData<Ref<Theme>> *)&local_60);
  plVar9 = local_60;
  CowData<Ref<Theme>>::_copy_on_write((CowData<Ref<Theme>> *)&local_60);
  plVar8 = local_60;
  if (local_60 != (long *)0x0) {
    plVar8 = local_60 + local_60[-1];
  }
  for (; plVar9 != plVar8; plVar9 = plVar9 + 1) {
    if (*plVar9 != 0) {
      CowData<StringName>::_copy_on_write((CowData<StringName> *)local_70);
      lVar11 = local_70[0];
      CowData<StringName>::_copy_on_write((CowData<StringName> *)local_70);
      lVar6 = local_70[0];
      if (local_70[0] != 0) {
        lVar6 = local_70[0] + *(long *)(local_70[0] + -8) * 8;
      }
      for (; lVar11 != lVar6; lVar11 = lVar11 + 8) {
        cVar3 = Theme::has_font((StringName *)*plVar9,(StringName *)&local_90);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)*plVar9 + 0x1d8))
                    (local_80,(long *)*plVar9,(StringName *)&local_90,lVar11);
          if (local_80[0] != (Object *)0x0) {
            pOVar10 = (Object *)in_RSI[0xda];
            if (local_80[0] != pOVar10) {
              in_RSI[0xda] = (long)local_80[0];
              cVar3 = RefCounted::reference();
              if (cVar3 == '\0') {
                in_RSI[0xda] = 0;
              }
              if (((pOVar10 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0'))
                 && (cVar3 = predelete_handler(pOVar10), cVar3 != '\0')) {
                (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
                Memory::free_static(pOVar10,false);
              }
              pOVar10 = (Object *)in_RSI[0xda];
            }
            create_custom_callable_function_pointer<Label3D>
                      ((Label3D *)local_58,(char *)in_RSI,(_func_void *)"&Label3D::_font_changed");
            Resource::connect_changed((Callable *)pOVar10,(uint)(Label3D *)local_58);
            Callable::~Callable((Callable *)local_58);
            if (local_80[0] != (Object *)0x0) {
              *in_RDI = (long)local_80[0];
              cVar3 = RefCounted::reference();
              if (cVar3 == '\0') {
                *in_RDI = 0;
              }
              if (((local_80[0] != (Object *)0x0) &&
                  (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
                 (cVar3 = predelete_handler(local_80[0]), cVar3 != '\0')) {
                (**(code **)(*(long *)local_80[0] + 0x140))(local_80[0]);
                Memory::free_static(local_80[0],false);
              }
              goto LAB_0010b2ca;
            }
          }
          *in_RDI = 0;
          goto LAB_0010b2ca;
        }
      }
    }
  }
  ThemeContext::get_fallback_theme();
  local_58[0] = (Object *)0x0;
  (**(code **)(*(long *)local_80[0] + 0x1d8))
            ((Ref<Font> *)&local_88,local_80[0],(StringName *)&local_90,(Label3D *)local_58);
  if ((StringName::configured != '\0') && (local_58[0] != (Object *)0x0)) {
    StringName::unref();
  }
  if (((local_80[0] != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
     (cVar3 = predelete_handler(local_80[0]), cVar3 != '\0')) {
    (**(code **)(*(long *)local_80[0] + 0x140))();
    Memory::free_static(local_80[0],false);
  }
  if (local_88 == (Object *)0x0) {
LAB_0010b0d6:
    *in_RDI = 0;
  }
  else {
    pOVar10 = (Object *)in_RSI[0xda];
    if (local_88 != pOVar10) {
      in_RSI[0xda] = (long)local_88;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        in_RSI[0xda] = 0;
      }
      if (((pOVar10 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
         (cVar3 = predelete_handler(pOVar10), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
        Memory::free_static(pOVar10,false);
      }
      pOVar10 = (Object *)in_RSI[0xda];
    }
    create_custom_callable_function_pointer<Label3D>
              ((Label3D *)local_58,(char *)in_RSI,(_func_void *)"&Label3D::_font_changed");
    Resource::connect_changed((Callable *)pOVar10,(uint)(Label3D *)local_58);
    Callable::~Callable((Callable *)local_58);
    if (local_88 == (Object *)0x0) goto LAB_0010b0d6;
    *in_RDI = (long)local_88;
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') goto LAB_0010b0d6;
  }
  Ref<Font>::unref((Ref<Font> *)&local_88);
LAB_0010b2ca:
  CowData<Ref<Theme>>::_unref((CowData<Ref<Theme>> *)&local_60);
  CowData<StringName>::_unref((CowData<StringName> *)local_70);
  if ((StringName::configured != '\0') && (local_90 != 0)) {
    StringName::unref();
  }
LAB_0010aecb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Label3D::generate_triangle_mesh() const */

void Label3D::generate_triangle_mesh(void)

{
  long *plVar1;
  int *piVar2;
  float fVar3;
  TriangleMesh *pTVar4;
  code *pcVar5;
  undefined8 *puVar6;
  char cVar7;
  bool bVar8;
  long lVar9;
  TriangleMesh *pTVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long in_RSI;
  long *in_RDI;
  long lVar14;
  Object *pOVar15;
  long in_FS_OFFSET;
  float fVar16;
  float extraout_XMM0_Db;
  double dVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_c0;
  float local_bc;
  Object *local_a8;
  TriangleMesh *local_a0;
  Vector local_98 [8];
  undefined8 *local_90;
  TriangleMesh *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  float local_68 [4];
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 0x658) == 0) {
    _get_font_or_default();
    if (local_a8 != (Object *)0x0) {
      local_90 = (undefined8 *)0x0;
      CowData<Vector3>::resize<false>((CowData<Vector3> *)&local_90,6);
      CowData<Vector3>::_copy_on_write((CowData<Vector3> *)&local_90);
      puVar6 = local_90;
      lVar9 = *(long *)(in_RSI + 0x738);
      if (lVar9 == 0) {
        local_bc = 0.0;
        bVar8 = true;
        local_c0 = 0.0;
      }
      else {
        local_bc = 0.0;
        lVar14 = 0;
        local_c0 = 0.0;
        do {
          if (*(long *)(lVar9 + -8) <= lVar14) {
            bVar8 = local_c0 == 0.0 || local_bc == 0.0;
            goto LAB_0010b8e0;
          }
          pOVar15 = *(Object **)(TextServerManager::singleton + 0x178);
          if (pOVar15 == (Object *)0x0) {
Label3D_generate_triangle_mesh:
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          cVar7 = RefCounted::reference();
          if (cVar7 == '\0') {
            pOVar15 = (Object *)0x0;
          }
          if (*(long *)(in_RSI + 0x738) == 0) {
LAB_0010b9e8:
            lVar9 = 0;
LAB_0010b9eb:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,lVar14,lVar9,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          lVar9 = *(long *)(*(long *)(in_RSI + 0x738) + -8);
          if (lVar9 <= lVar14) goto LAB_0010b9eb;
          (**(code **)(*(long *)pOVar15 + 0x720))(pOVar15);
          local_c0 = extraout_XMM0_Db + *(float *)(in_RSI + 0x70c) + local_c0;
          cVar7 = RefCounted::unreference();
          if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar15), cVar7 != '\0')) {
            (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
            Memory::free_static(pOVar15,false);
          }
          pOVar15 = *(Object **)(TextServerManager::singleton + 0x178);
          if (pOVar15 == (Object *)0x0) goto Label3D_generate_triangle_mesh;
          cVar7 = RefCounted::reference();
          if (cVar7 == '\0') {
            pOVar15 = (Object *)0x0;
          }
          if (*(long *)(in_RSI + 0x738) == 0) goto LAB_0010b9e8;
          lVar9 = *(long *)(*(long *)(in_RSI + 0x738) + -8);
          if (lVar9 <= lVar14) goto LAB_0010b9eb;
          dVar17 = (double)(**(code **)(*(long *)pOVar15 + 0x738))(pOVar15);
          if ((double)local_bc <= dVar17) {
            local_bc = (float)dVar17;
          }
          cVar7 = RefCounted::unreference();
          if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar15), cVar7 != '\0')) {
            (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
            Memory::free_static(pOVar15,false);
          }
          lVar9 = *(long *)(in_RSI + 0x738);
          lVar14 = lVar14 + 1;
        } while (lVar9 != 0);
        bVar8 = local_bc == 0.0 || local_c0 == 0.0;
      }
LAB_0010b8e0:
      if (*(int *)(in_RSI + 0x69c) == 1) {
        fVar16 = (local_c0 - *(float *)(in_RSI + 0x70c)) * __LC254;
      }
      else {
        fVar16 = 0.0;
        if (*(int *)(in_RSI + 0x69c) == 2) {
          fVar16 = local_c0 - *(float *)(in_RSI + 0x70c);
        }
      }
      fVar20 = (float)((uint)local_bc ^ __LC255);
      if ((*(uint *)(in_RSI + 0x698) != 2) &&
         (fVar20 = 0.0, (*(uint *)(in_RSI + 0x698) & 0xfffffffd) == 1)) {
        fVar20 = local_bc * __LC256;
      }
      if (bVar8) {
LAB_0010b958:
        *in_RDI = 0;
      }
      else {
        fVar19 = *(float *)(in_RSI + 0x6e8) + fVar20;
        fVar20 = fVar20 + (float)*(undefined8 *)(in_RSI + 0x6e8);
        fVar18 = fVar16 + (float)((ulong)*(undefined8 *)(in_RSI + 0x6e8) >> 0x20);
        fVar3 = *(float *)(in_RSI + 0x620);
        fVar16 = (fVar16 + *(float *)(in_RSI + 0x6ec)) - local_c0;
        *(undefined4 *)(puVar6 + 1) = 0;
        puVar11 = generate_triangle_mesh()::indices;
        local_68[0] = (fVar19 + 0.0) * fVar3;
        local_68[1] = fVar16 * fVar3;
        local_68[2] = (fVar19 + local_bc) * fVar3;
        local_68[3] = fVar16 * fVar3;
        local_58 = CONCAT44((fVar18 + 0.0) * fVar3,(local_bc + fVar20) * fVar3);
        local_50 = CONCAT44(fVar18 * fVar3,fVar20 * fVar3);
        *puVar6 = CONCAT44((fVar18 - local_c0) * fVar3,(fVar20 + 0.0) * fVar3);
        puVar12 = (undefined8 *)((long)puVar6 + 0xc);
        do {
          piVar2 = (int *)(puVar11 + 4);
          puVar13 = (undefined8 *)((long)puVar12 + 0xc);
          local_70 = 0;
          puVar11 = puVar11 + 4;
          local_78 = *(undefined8 *)(local_68 + (long)*piVar2 * 2);
          *(undefined4 *)(puVar12 + 1) = 0;
          *puVar12 = local_78;
          puVar12 = puVar13;
        } while (puVar13 != puVar6 + 9);
        pTVar10 = (TriangleMesh *)operator_new(0x1b8,"");
        TriangleMesh::TriangleMesh(pTVar10);
        postinitialize_handler((Object *)pTVar10);
        local_88 = (TriangleMesh *)0x0;
        local_a0 = pTVar10;
        cVar7 = RefCounted::init_ref();
        if (cVar7 == '\0') {
          local_a0 = (TriangleMesh *)0x0;
          Ref<TriangleMesh>::unref((Ref<TriangleMesh> *)&local_88);
          pTVar10 = *(TriangleMesh **)(in_RSI + 0x658);
          if (pTVar10 != (TriangleMesh *)0x0) {
            *(undefined8 *)(in_RSI + 0x658) = 0;
            local_88 = pTVar10;
LAB_0010bc31:
            Ref<TriangleMesh>::unref((Ref<TriangleMesh> *)&local_88);
          }
        }
        else {
          Ref<TriangleMesh>::unref((Ref<TriangleMesh> *)&local_88);
          pTVar4 = *(TriangleMesh **)(in_RSI + 0x658);
          if (pTVar10 != pTVar4) {
            *(TriangleMesh **)(in_RSI + 0x658) = pTVar10;
            local_88 = pTVar4;
            cVar7 = RefCounted::reference();
            if (cVar7 == '\0') {
              *(undefined8 *)(in_RSI + 0x658) = 0;
            }
            goto LAB_0010bc31;
          }
        }
        Ref<TriangleMesh>::unref((Ref<TriangleMesh> *)&local_a0);
        local_80 = 0;
        TriangleMesh::create(*(Vector **)(in_RSI + 0x658),local_98);
        CowData<int>::_unref((CowData<int> *)&local_80);
        *in_RDI = 0;
        if (*(long *)(in_RSI + 0x658) != 0) {
          *in_RDI = *(long *)(in_RSI + 0x658);
          cVar7 = RefCounted::reference();
          if (cVar7 == '\0') goto LAB_0010b958;
        }
      }
      puVar6 = local_90;
      if (local_90 != (undefined8 *)0x0) {
        LOCK();
        plVar1 = local_90 + -2;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_90 = (undefined8 *)0x0;
          Memory::free_static(puVar6 + -2,false);
        }
        if (local_a8 == (Object *)0x0) goto LAB_0010b6e8;
      }
      cVar7 = RefCounted::unreference();
      if ((cVar7 != '\0') && (cVar7 = predelete_handler(local_a8), cVar7 != '\0')) {
        (**(code **)(*(long *)local_a8 + 0x140))(local_a8);
        Memory::free_static(local_a8,false);
      }
      goto LAB_0010b6e8;
    }
  }
  else {
    *in_RDI = 0;
    if (*(long *)(in_RSI + 0x658) == 0) goto LAB_0010b6e8;
    *in_RDI = *(long *)(in_RSI + 0x658);
    cVar7 = RefCounted::reference();
    if (cVar7 != '\0') goto LAB_0010b6e8;
  }
  *in_RDI = 0;
LAB_0010b6e8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Label3D::_shape() */

void __thiscall Label3D::_shape(Label3D *this)

{
  Label3D *pLVar1;
  CowData<RID> *this_00;
  float fVar2;
  float fVar3;
  undefined8 *puVar4;
  void *pvVar5;
  Ref *pRVar6;
  float fVar7;
  undefined1 auVar8 [16];
  int *piVar9;
  float fVar10;
  char cVar11;
  char cVar12;
  int iVar13;
  undefined4 uVar14;
  long *plVar15;
  Glyph *pGVar16;
  Variant *pVVar17;
  long *plVar18;
  undefined8 uVar19;
  code *pcVar20;
  Glyph *pGVar21;
  int *piVar22;
  Object *pOVar23;
  long lVar24;
  Glyph *pGVar25;
  CowData<unsigned_char> *this_01;
  int iVar26;
  uint uVar27;
  uint uVar28;
  ulong uVar29;
  long lVar30;
  ulong uVar31;
  long lVar32;
  long in_FS_OFFSET;
  bool bVar33;
  uint uVar34;
  float fVar35;
  float fVar36;
  float extraout_XMM0_Db;
  double dVar37;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float local_2c8;
  CowData *local_2b8;
  CowData<char32_t> *local_2a0;
  long *local_268;
  long local_260;
  Array local_258 [8];
  Array local_250 [8];
  long local_248;
  undefined8 local_240;
  long local_238;
  long *local_230;
  RID *local_228;
  long local_220;
  int local_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined1 local_1e8 [16];
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8 [2];
  int *local_1a8;
  ulong local_1a0;
  Vector<int> local_198 [8];
  undefined8 local_190;
  Variant *local_188;
  Variant *pVStack_180;
  int local_178 [8];
  undefined8 local_158;
  undefined1 auStack_150 [16];
  Array *local_138;
  undefined1 auStack_130 [16];
  undefined8 local_120 [2];
  undefined8 local_110 [2];
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  long local_b8;
  long local_a8;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_68;
  undefined1 local_60 [16];
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_1f8 = 0;
  uStack_1f4 = 0;
  Ref<TextServer>::operator=
            ((Ref<TextServer> *)&local_1f8,*(Ref **)(TextServerManager::singleton + 0x178));
  pLVar1 = this + 0x728;
  cVar11 = (**(code **)(*(long *)CONCAT44(uStack_1f4,local_1f8) + 0x698))
                     ((long *)CONCAT44(uStack_1f4,local_1f8),pLVar1);
  Ref<TextServer>::unref((Ref<TextServer> *)&local_1f8);
  if (cVar11 == '\0') {
    this[0x753] = (Label3D)0x1;
  }
  this_00 = (CowData<RID> *)(this + 0x738);
  CowData<RID>::_copy_on_write(this_00);
  lVar24 = *(long *)(this + 0x738);
  CowData<RID>::_copy_on_write(this_00);
  lVar32 = *(long *)(this + 0x738);
  if (lVar32 != 0) {
    lVar32 = lVar32 + *(long *)(lVar32 + -8) * 8;
  }
  for (; lVar24 != lVar32; lVar24 = lVar24 + 8) {
    pOVar23 = *(Object **)(TextServerManager::singleton + 0x178);
    if (pOVar23 == (Object *)0x0) goto Label3D__shape;
    cVar11 = RefCounted::reference();
    if (cVar11 == '\0') {
      pOVar23 = (Object *)0x0;
    }
    cVar11 = (**(code **)(*(long *)pOVar23 + 0x698))(pOVar23);
    cVar12 = RefCounted::unreference();
    if ((cVar12 != '\0') && (cVar12 = predelete_handler(pOVar23), cVar12 != '\0')) {
      (**(code **)(*(long *)pOVar23 + 0x140))(pOVar23);
      Memory::free_static(pOVar23,false);
    }
    if (cVar11 == '\0') {
      this[0x751] = (Label3D)0x1;
      break;
    }
  }
  plVar15 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar15 + 0x3a8))(plVar15);
  puVar4 = *(undefined8 **)(this + 0x680);
  auStack_130._0_12_ = ZEXT812(0) << 0x20;
  local_138 = (Array *)0x0;
  auVar8._12_4_ = 0;
  auVar8._0_12_ = auStack_130._4_12_;
  auStack_130 = auVar8 << 0x20;
  uVar19 = auStack_130._0_8_;
  auStack_130._12_4_ = 0;
  *(undefined8 *)(this + 0x63c) = 0;
  *(undefined8 *)(this + 0x644) = uVar19;
  *(undefined8 *)(this + 0x64c) = 0;
  for (; puVar4 != (undefined8 *)0x0; puVar4 = (undefined8 *)*puVar4) {
    plVar15 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar15 + 0x11b0))(plVar15);
  }
  if ((*(long *)(this + 0x670) != 0) && (*(int *)(this + 0x694) != 0)) {
    lVar32 = 0;
    uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x690) * 4);
    if (uVar28 != 0) {
      do {
        if (*(int *)(*(long *)(this + 0x678) + lVar32) != 0) {
          *(int *)(*(long *)(this + 0x678) + lVar32) = 0;
          pvVar5 = *(void **)(*(long *)(this + 0x670) + lVar32 * 2);
          if (*(long *)((long)pvVar5 + 0x78) != 0) {
            LOCK();
            plVar15 = (long *)(*(long *)((long)pvVar5 + 0x78) + -0x10);
            *plVar15 = *plVar15 + -1;
            UNLOCK();
            if (*plVar15 == 0) {
              lVar24 = *(long *)((long)pvVar5 + 0x78);
              *(undefined8 *)((long)pvVar5 + 0x78) = 0;
              Memory::free_static((void *)(lVar24 + -0x10),false);
            }
          }
          if (*(long *)((long)pvVar5 + 0x68) != 0) {
            LOCK();
            plVar15 = (long *)(*(long *)((long)pvVar5 + 0x68) + -0x10);
            *plVar15 = *plVar15 + -1;
            UNLOCK();
            if (*plVar15 == 0) {
              lVar24 = *(long *)((long)pvVar5 + 0x68);
              *(undefined8 *)((long)pvVar5 + 0x68) = 0;
              Memory::free_static((void *)(lVar24 + -0x10),false);
            }
          }
          if (*(long *)((long)pvVar5 + 0x58) != 0) {
            LOCK();
            plVar15 = (long *)(*(long *)((long)pvVar5 + 0x58) + -0x10);
            *plVar15 = *plVar15 + -1;
            UNLOCK();
            if (*plVar15 == 0) {
              lVar24 = *(long *)((long)pvVar5 + 0x58);
              *(undefined8 *)((long)pvVar5 + 0x58) = 0;
              Memory::free_static((void *)(lVar24 + -0x10),false);
            }
          }
          if (*(long *)((long)pvVar5 + 0x48) != 0) {
            LOCK();
            plVar15 = (long *)(*(long *)((long)pvVar5 + 0x48) + -0x10);
            *plVar15 = *plVar15 + -1;
            UNLOCK();
            if (*plVar15 == 0) {
              lVar24 = *(long *)((long)pvVar5 + 0x48);
              *(undefined8 *)((long)pvVar5 + 0x48) = 0;
              Memory::free_static((void *)(lVar24 + -0x10),false);
            }
          }
          if (*(long *)((long)pvVar5 + 0x38) != 0) {
            LOCK();
            plVar15 = (long *)(*(long *)((long)pvVar5 + 0x38) + -0x10);
            *plVar15 = *plVar15 + -1;
            UNLOCK();
            if (*plVar15 == 0) {
              lVar24 = *(long *)((long)pvVar5 + 0x38);
              *(undefined8 *)((long)pvVar5 + 0x38) = 0;
              Memory::free_static((void *)(lVar24 + -0x10),false);
            }
          }
          if (*(long *)((long)pvVar5 + 0x28) != 0) {
            LOCK();
            plVar15 = (long *)(*(long *)((long)pvVar5 + 0x28) + -0x10);
            *plVar15 = *plVar15 + -1;
            UNLOCK();
            if (*plVar15 == 0) {
              lVar24 = *(long *)((long)pvVar5 + 0x28);
              *(undefined8 *)((long)pvVar5 + 0x28) = 0;
              Memory::free_static((void *)(lVar24 + -0x10),false);
            }
          }
          Memory::free_static(pvVar5,false);
          *(undefined8 *)(*(long *)(this + 0x670) + lVar32 * 2) = 0;
        }
        lVar32 = lVar32 + 4;
      } while ((ulong)uVar28 << 2 != lVar32);
    }
    *(undefined4 *)(this + 0x694) = 0;
    *(undefined1 (*) [16])(this + 0x680) = (undefined1  [16])0x0;
  }
  _get_font_or_default();
  if (local_268 == (long *)0x0) {
    _err_print_error("_shape","scene/3d/label_3d.cpp",0x1d7,"Condition \"font.is_null()\" is true.",
                     0,0);
    Ref<Font>::unref((Ref<Font> *)&local_268);
    goto LAB_0010d7df;
  }
  if (this[0x753] == (Label3D)0x0) {
    if (this[0x752] == (Label3D)0x0) {
      if (this[0x751] == (Label3D)0x0) goto LAB_0010c103;
    }
    else {
      local_1f8 = 0;
      uStack_1f4 = 0;
      Ref<TextServer>::operator=
                ((Ref<TextServer> *)&local_1f8,*(Ref **)(TextServerManager::singleton + 0x178));
      iVar13 = (**(code **)(*(long *)CONCAT44(uStack_1f4,local_1f8) + 0x640))
                         ((long *)CONCAT44(uStack_1f4,local_1f8),pLVar1);
      Ref<TextServer>::unref((Ref<TextServer> *)&local_1f8);
      if (0 < iVar13) {
        uVar31 = 0;
        do {
          local_230 = (long *)0x0;
          Ref<TextServer>::operator=
                    ((Ref<TextServer> *)&local_230,*(Ref **)(TextServerManager::singleton + 0x178));
          plVar15 = local_230;
          pcVar20 = *(code **)(*local_230 + 0x658);
          (**(code **)(*local_268 + 0x278))((Ref<TextServer> *)&local_1f8,local_268);
          (**(code **)(*local_268 + 0x210))((Array *)&local_228,local_268);
          (*pcVar20)(plVar15,pLVar1,uVar31,(Array *)&local_228);
          Array::~Array((Array *)&local_228);
          Dictionary::~Dictionary((Dictionary *)&local_1f8);
          Ref<TextServer>::unref((Ref<TextServer> *)&local_230);
          bVar33 = iVar13 - 1 != uVar31;
          uVar31 = uVar31 + 1;
        } while (bVar33);
      }
      *(undefined2 *)(this + 0x751) = 1;
    }
LAB_0010c33b:
    uVar31 = 0;
    lVar32 = *(long *)(this + 0x738);
    while (lVar32 != 0) {
      while( true ) {
        if (*(long *)(lVar32 + -8) <= (long)uVar31) goto LAB_0010c418;
        pOVar23 = *(Object **)(TextServerManager::singleton + 0x178);
        if (pOVar23 == (Object *)0x0) goto Label3D__shape;
        cVar11 = RefCounted::reference();
        if (cVar11 == '\0') {
          pOVar23 = (Object *)0x0;
        }
        if (*(long *)(this + 0x738) == 0) goto LAB_0010c748;
        lVar32 = *(long *)(*(long *)(this + 0x738) + -8);
        if (lVar32 <= (long)uVar31) goto LAB_0010c769;
        (**(code **)(*(long *)pOVar23 + 0x168))(pOVar23);
        cVar11 = RefCounted::unreference();
        if ((cVar11 != '\0') && (cVar11 = predelete_handler(pOVar23), cVar11 != '\0')) break;
        lVar32 = *(long *)(this + 0x738);
        uVar31 = uVar31 + 1;
        if (lVar32 == 0) goto LAB_0010c418;
      }
      uVar31 = uVar31 + 1;
      (**(code **)(*(long *)pOVar23 + 0x140))(pOVar23);
      Memory::free_static(pOVar23,false);
      lVar32 = *(long *)(this + 0x738);
    }
LAB_0010c418:
    CowData<RID>::resize<false>(this_00,0);
    local_228 = (RID *)0x0;
    Ref<TextServer>::operator=
              ((Ref<TextServer> *)&local_228,*(Ref **)(TextServerManager::singleton + 0x178));
    (**(code **)(*(long *)local_228 + 0x6c8))
              ((double)*(float *)(this + 0x6c0),(Ref<TextServer> *)&local_1f8,local_228,pLVar1,0);
    Ref<TextServer>::unref((Ref<TextServer> *)&local_228);
    lVar32 = CONCAT44(uStack_1ec,local_1f0);
    if (lVar32 == 0) {
      fVar36 = 0.0;
    }
    else {
      fVar36 = 0.0;
      uVar29 = 0;
      do {
        if (*(long *)(lVar32 + -8) <= (long)uVar29) break;
        local_228 = (RID *)0x0;
        Ref<TextServer>::operator=
                  ((Ref<TextServer> *)&local_228,*(Ref **)(TextServerManager::singleton + 0x178));
        uVar31 = uVar29 + 1;
        lVar24 = CONCAT44(uStack_1ec,local_1f0);
        if (lVar24 == 0) {
          lVar32 = 0;
          goto LAB_0010c769;
        }
        lVar32 = *(long *)(lVar24 + -8);
        if ((lVar32 <= (long)uVar31) || (uVar31 = uVar29, lVar32 <= (long)uVar29))
        goto LAB_0010c769;
        iVar13 = *(int *)(lVar24 + uVar29 * 4);
        local_230 = (long *)(**(code **)(*(long *)local_228 + 0x660))
                                      (local_228,pLVar1,(long)iVar13,
                                       (long)(*(int *)(lVar24 + 4 + uVar29 * 4) - iVar13));
        Ref<TextServer>::unref((Ref<TextServer> *)&local_228);
        local_228 = (RID *)0x0;
        Ref<TextServer>::operator=
                  ((Ref<TextServer> *)&local_228,*(Ref **)(TextServerManager::singleton + 0x178));
        dVar37 = (double)(**(code **)(*(long *)local_228 + 0x738))(local_228,&local_230);
        if ((double)fVar36 <= dVar37) {
          fVar36 = (float)dVar37;
        }
        Ref<TextServer>::unref((Ref<TextServer> *)&local_228);
        plVar15 = local_230;
        if (*(long *)(this + 0x738) == 0) {
          lVar32 = 1;
        }
        else {
          lVar32 = *(long *)(*(long *)(this + 0x738) + -8) + 1;
        }
        iVar13 = CowData<RID>::resize<false>(this_00,lVar32);
        if (iVar13 == 0) {
          if (*(long *)(this + 0x738) == 0) {
            lVar24 = -1;
            lVar32 = 0;
          }
          else {
            lVar32 = *(long *)(*(long *)(this + 0x738) + -8);
            lVar24 = lVar32 + -1;
            if (-1 < lVar24) {
              CowData<RID>::_copy_on_write(this_00);
              *(long **)(*(long *)(this + 0x738) + lVar24 * 8) = plVar15;
              goto LAB_0010c610;
            }
          }
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar24,lVar32,"p_index","size()","",
                     false,false);
        }
        else {
          _err_print_error("push_back","./core/templates/vector.h",0x142,
                           "Condition \"err\" is true. Returning: true");
        }
LAB_0010c610:
        lVar32 = CONCAT44(uStack_1ec,local_1f0);
        uVar29 = uVar29 + 2;
      } while (lVar32 != 0);
    }
    if (*(int *)(this + 0x698) == 3) {
      uVar31 = *(ulong *)(this + 0x6b8);
      if (*(long *)(this + 0x738) == 0) {
        if (((uVar31 & 0x20) == 0) || ((uVar31 & 0x40) == 0)) goto LAB_0010ddc9;
        uVar28 = 0xffffffff;
LAB_0010c674:
        if ((int)uVar28 < 1) goto LAB_0010ddc9;
      }
      else {
        lVar32 = *(long *)(*(long *)(this + 0x738) + -8);
        if (lVar32 != 1) {
          uVar34 = (uint)lVar32;
LAB_0010c65d:
          uVar27 = uVar34 - 1;
          if ((uVar31 & 0x20) != 0) {
            uVar34 = uVar27;
          }
          uVar28 = uVar34;
          if (((uVar31 & 0x40) != 0) && (-1 < (int)uVar27)) {
            uVar31 = (ulong)uVar27;
            do {
              local_228 = (RID *)0x0;
              Ref<TextServer>::operator=
                        ((Ref<TextServer> *)&local_228,
                         *(Ref **)(TextServerManager::singleton + 0x178));
              if (*(long *)(this + 0x738) == 0) {
                lVar32 = 0;
                goto LAB_0010c769;
              }
              lVar32 = *(long *)(*(long *)(this + 0x738) + -8);
              if (lVar32 <= (long)uVar31) goto LAB_0010c769;
              cVar11 = TextServer::shaped_text_has_visible_chars(local_228);
              Ref<TextServer>::unref((Ref<TextServer> *)&local_228);
              uVar28 = uVar27;
              if (cVar11 != '\0') break;
              uVar27 = uVar27 - 1;
              uVar31 = uVar31 - 1;
              uVar28 = uVar34;
            } while (uVar27 != 0xffffffff);
          }
          goto LAB_0010c674;
        }
        if ((uVar31 & 0x80) == 0) {
          uVar34 = 1;
          goto LAB_0010c65d;
        }
        uVar28 = 1;
      }
      uVar31 = 0;
      do {
        local_228 = (RID *)0x0;
        Ref<TextServer>::operator=
                  ((Ref<TextServer> *)&local_228,*(Ref **)(TextServerManager::singleton + 0x178));
        uVar34 = -(uint)(0.0 < *(float *)(this + 0x6c0));
        lVar24 = *(long *)(this + 0x738);
        if (lVar24 == 0) {
          lVar32 = 0;
          goto LAB_0010c769;
        }
        lVar32 = *(long *)(lVar24 + -8);
        if (lVar32 <= (long)uVar31) goto LAB_0010c769;
        lVar32 = uVar31 * 8;
        uVar31 = uVar31 + 1;
        (**(code **)(*(long *)local_228 + 0x670))
                  ((double)(float)((uint)*(float *)(this + 0x6c0) & uVar34 | ~uVar34 & (uint)fVar36)
                   ,local_228,lVar24 + lVar32,*(undefined8 *)(this + 0x6b8));
        Ref<TextServer>::unref((Ref<TextServer> *)&local_228);
      } while ((long)(int)uVar28 != uVar31);
    }
LAB_0010ddc9:
    this[0x751] = (Label3D)0x0;
    CowData<int>::_unref((CowData<int> *)&local_1f0);
  }
  else {
    local_1f8 = 0;
    uStack_1f4 = 0;
    Ref<TextServer>::operator=
              ((Ref<TextServer> *)&local_1f8,*(Ref **)(TextServerManager::singleton + 0x178));
    (**(code **)(*(long *)CONCAT44(uStack_1f4,local_1f8) + 0x5a0))
              ((long *)CONCAT44(uStack_1f4,local_1f8),pLVar1);
    Ref<TextServer>::unref((Ref<TextServer> *)&local_1f8);
    local_1f8 = 0;
    uStack_1f4 = 0;
    Ref<TextServer>::operator=
              ((Ref<TextServer> *)&local_1f8,*(Ref **)(TextServerManager::singleton + 0x178));
    (**(code **)(*(long *)CONCAT44(uStack_1f4,local_1f8) + 0x5a8))
              ((long *)CONCAT44(uStack_1f4,local_1f8),pLVar1,*(undefined4 *)(this + 0x718));
    Ref<TextServer>::unref((Ref<TextServer> *)&local_1f8);
    if (this[0x6b0] == (Label3D)0x0) {
      local_260 = 0;
      if (*(long *)(this + 0x6a8) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_260,(CowData *)(this + 0x6a8));
      }
    }
    else {
      local_1f8 = 0;
      uStack_1f4 = 0;
      Ref<TextServer>::operator=
                ((Ref<TextServer> *)&local_1f8,*(Ref **)(TextServerManager::singleton + 0x178));
      (**(code **)(*(long *)CONCAT44(uStack_1f4,local_1f8) + 0x810))
                (&local_260,(long *)CONCAT44(uStack_1f4,local_1f8),this + 0x6a8,this + 0x710);
      Ref<TextServer>::unref((Ref<TextServer> *)&local_1f8);
    }
    local_2b8 = (CowData *)&local_260;
    local_230 = (long *)0x0;
    Ref<TextServer>::operator=
              ((Ref<TextServer> *)&local_230,*(Ref **)(TextServerManager::singleton + 0x178));
    plVar15 = local_230;
    pcVar20 = *(code **)(*local_230 + 0x628);
    auStack_130 = (undefined1  [16])0x0;
    local_138 = (Array *)0x0;
    (**(code **)(*local_268 + 0x278))((Ref<TextServer> *)&local_1f8,local_268);
    iVar13 = *(int *)(this + 0x6c4);
    (**(code **)(*local_268 + 0x210))((Array *)&local_228,local_268);
    (*pcVar20)(plVar15,pLVar1,local_2b8,(Array *)&local_228,(long)iVar13,
               (Ref<TextServer> *)&local_1f8,this + 0x710,(Variant *)&local_138);
    Array::~Array((Array *)&local_228);
    Dictionary::~Dictionary((Dictionary *)&local_1f8);
    if (::Variant::needs_deinit[(int)local_138] != '\0') {
      ::Variant::_clear_internal();
    }
    Ref<TextServer>::unref((Ref<TextServer> *)&local_230);
    Array::Array(local_258);
    local_138 = (Array *)0x0;
    auStack_130 = (undefined1  [16])0x0;
    local_1f8 = 0;
    uStack_1f4 = 0;
    Array::set_typed((uint)local_258,(StringName *)0xa,(Variant *)&local_1f8);
    if ((StringName::configured != '\0') && (CONCAT44(uStack_1f4,local_1f8) != 0)) {
      StringName::unref();
    }
    if (::Variant::needs_deinit[(int)local_138] != '\0') {
      ::Variant::_clear_internal();
    }
    if (*(int *)(this + 0x71c) == 6) {
      local_248 = 0;
      if (local_260 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_248,local_2b8);
      }
      Array::Array(local_250,this + 0x720);
      plVar15 = *(long **)(this + 0x98);
      if (plVar15 == (long *)0x0) {
LAB_0010cb18:
        if ((*(long *)(this + 8) != 0) && (this[0x760] == (Label3D)0x0)) {
          local_1f8 = 0;
          uStack_1f4 = 0;
          local_1e8 = (undefined1  [16])0x0;
          local_1f0 = 0;
          uStack_1ec = 0;
          local_1d8 = 0;
          local_1d0 = 0;
          local_1c8 = 6;
          local_1c0 = 1;
          local_1b8[0] = 0;
          local_1a8 = (int *)0x0;
          local_1a0 = 0;
          local_190 = 0;
          String::parse_latin1((String *)&local_1f8,"_structured_text_parser");
          local_1c0 = CONCAT44(local_1c0._4_4_,0xc);
          local_230 = (long *)0x0;
          ::Variant::get_type_name((CowData<char32_t> *)&local_238,10);
          local_240 = 0;
          PropertyInfo::PropertyInfo
                    ((PropertyInfo *)&local_228,0x1c,(CowData<char32_t> *)&local_240,0x1f,
                     (CowData<char32_t> *)&local_238,6,(Ref<TextServer> *)&local_230);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_240);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
          if ((StringName::configured != '\0') && (local_230 != (long *)0x0)) {
            StringName::unref();
          }
          PropertyInfo::operator=((PropertyInfo *)&local_1f0,(PropertyInfo *)&local_228);
          PropertyInfo::~PropertyInfo((PropertyInfo *)&local_228);
          local_1a0 = local_1a0 & 0xffffffff00000000;
          GetTypeInfo<Array,void>::get_class_info((GetTypeInfo<Array,void> *)&local_228);
          List<PropertyInfo,DefaultAllocator>::push_back
                    ((List<PropertyInfo,DefaultAllocator> *)local_1b8,(PropertyInfo *)&local_228);
          PropertyInfo::~PropertyInfo((PropertyInfo *)&local_228);
          Vector<int>::push_back(local_198,0);
          GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_228);
          List<PropertyInfo,DefaultAllocator>::push_back
                    ((List<PropertyInfo,DefaultAllocator> *)local_1b8,(PropertyInfo *)&local_228);
          PropertyInfo::~PropertyInfo((PropertyInfo *)&local_228);
          Vector<int>::push_back(local_198,0);
          uVar14 = MethodInfo::get_compatibility_hash();
          *(undefined8 *)(this + 0x768) = 0;
          lVar32 = *(long *)(this + 8);
          pcVar20 = *(code **)(lVar32 + 0xd8);
          if (((pcVar20 == (code *)0x0) || (*(long *)(lVar32 + 0xe0) == 0)) &&
             (pcVar20 = *(code **)(lVar32 + 0xd0), pcVar20 == (code *)0x0)) {
            local_238 = 0;
            String::parse_latin1((String *)&local_238,"Label3D");
            StringName::StringName((StringName *)&local_230,(String *)&local_238,false);
            ClassDB::get_virtual_method_compatibility_hashes
                      ((StringName *)&local_228,(StringName *)&local_230);
            lVar32 = local_220;
            if (local_220 == 0) {
              lVar24 = 0;
              if (StringName::configured != '\0') goto LAB_0010e436;
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
LAB_0010e458:
              lVar32 = *(long *)(this + 8);
              pcVar20 = *(code **)(lVar32 + 200);
              if (((pcVar20 == (code *)0x0) || (*(long *)(lVar32 + 0xe0) == 0)) &&
                 (pcVar20 = *(code **)(lVar32 + 0xc0), pcVar20 == (code *)0x0)) goto LAB_0010e138;
              uVar19 = (*pcVar20)(*(undefined8 *)(lVar32 + 0xa0));
              *(undefined8 *)(this + 0x768) = uVar19;
            }
            else {
              lVar24 = *(long *)(local_220 + -8);
              LOCK();
              plVar15 = (long *)(local_220 + -0x10);
              *plVar15 = *plVar15 + -1;
              UNLOCK();
              if (*plVar15 == 0) {
                local_220 = 0;
                Memory::free_static((void *)(lVar32 + -0x10),false);
              }
              if (StringName::configured != '\0') {
LAB_0010e436:
                if (local_230 != (long *)0x0) {
                  StringName::unref();
                }
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
              if (lVar24 == 0) goto LAB_0010e458;
            }
            lVar32 = *(long *)(this + 8);
          }
          else {
            uVar19 = (*pcVar20)(*(undefined8 *)(lVar32 + 0xa0),this + 0x758,uVar14);
            *(undefined8 *)(this + 0x768) = uVar19;
            lVar32 = *(long *)(this + 8);
          }
LAB_0010e138:
          if (*(char *)(lVar32 + 0x29) != '\0') {
            plVar15 = (long *)operator_new(0x18,"");
            *plVar15 = (long)(this + 0x768);
            plVar15[1] = (long)(this + 0x760);
            plVar15[2] = *(long *)(this + 0x168);
            *(long **)(this + 0x168) = plVar15;
          }
          this[0x760] = (Label3D)0x1;
          CowData<int>::_unref((CowData<int> *)&local_190);
          piVar9 = local_1a8;
          if (local_1a8 != (int *)0x0) {
            LOCK();
            plVar15 = (long *)(local_1a8 + -4);
            *plVar15 = *plVar15 + -1;
            UNLOCK();
            if (*plVar15 == 0) {
              if (local_1a8 == (int *)0x0) {
Label3D__shape:
                    /* WARNING: Does not return */
                pcVar20 = (code *)invalidInstructionException();
                (*pcVar20)();
              }
              lVar32 = *(long *)(local_1a8 + -2);
              lVar24 = 0;
              local_1a8 = (int *)0x0;
              piVar22 = piVar9;
              if (lVar32 != 0) {
                do {
                  if (::Variant::needs_deinit[*piVar22] != '\0') {
                    ::Variant::_clear_internal();
                  }
                  lVar24 = lVar24 + 1;
                  piVar22 = piVar22 + 6;
                } while (lVar32 != lVar24);
              }
              Memory::free_static(piVar9 + -4,false);
            }
          }
          List<PropertyInfo,DefaultAllocator>::~List
                    ((List<PropertyInfo,DefaultAllocator> *)local_1b8);
          PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1f0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f8);
        }
        if (*(long *)(this + 0x768) != 0) {
          Array::Array((Array *)&local_240,local_250);
          local_238 = 0;
          if (local_248 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_238,(CowData *)&local_248);
          }
          auStack_150._0_8_ = (CowData<char32_t> *)&local_238;
          local_158 = (Array *)&local_240;
          Array::Array((Array *)&local_230);
          if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
            (**(code **)(this + 0x768))
                      (*(undefined8 *)(this + 0x10),&local_158,(Ref<TextServer> *)&local_230);
          }
          else {
            (**(code **)(*(long *)(this + 8) + 0xe0))
                      (*(undefined8 *)(this + 0x10),this + 0x758,*(undefined8 *)(this + 0x768));
          }
          Array::Array((Array *)&local_1f8);
          local_138 = (Array *)0x0;
          local_228 = (RID *)0x0;
          auStack_130 = (undefined1  [16])0x0;
          Array::set_typed((uint)(Ref<TextServer> *)&local_1f8,(StringName *)0xa,
                           (Variant *)&local_228);
          if ((StringName::configured != '\0') && (local_228 != (RID *)0x0)) {
            StringName::unref();
          }
          if (::Variant::needs_deinit[(int)local_138] != '\0') {
            ::Variant::_clear_internal();
          }
          cVar11 = Array::is_same_typed((Array *)&local_1f8);
          if (cVar11 == '\0') {
            Array::assign((Array *)&local_1f8);
          }
          else {
            Array::_ref((Array *)&local_1f8);
          }
          Array::operator=(local_258,(Array *)&local_1f8);
          Array::~Array((Array *)&local_1f8);
          Array::~Array((Array *)&local_230);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
          Array::~Array((Array *)&local_240);
        }
      }
      else {
        local_1f8 = 0;
        uStack_1f4 = 0;
        local_1f0 = 0;
        ::Variant::Variant((Variant *)&local_138,local_250);
        ::Variant::Variant((Variant *)local_120,(String *)&local_248);
        local_188 = (Variant *)&local_138;
        pVStack_180 = (Variant *)local_120;
        (**(code **)(*plVar15 + 0x60))(local_178,plVar15,this + 0x758,&local_188);
        if (local_1f8 != 0) {
          if (::Variant::needs_deinit[local_178[0]] != '\0') {
            ::Variant::_clear_internal();
          }
          if (::Variant::needs_deinit[(int)local_120[0]] != '\0') {
            ::Variant::_clear_internal();
          }
          if (::Variant::needs_deinit[(int)local_138] != '\0') {
            ::Variant::_clear_internal();
          }
          goto LAB_0010cb18;
        }
        ::Variant::operator_cast_to_Array((Variant *)&local_230);
        Array::Array((Array *)&local_228);
        local_158 = (Array *)0x0;
        local_238 = 0;
        auStack_150 = (undefined1  [16])0x0;
        Array::set_typed((uint)(Array *)&local_228,(StringName *)0xa,(Variant *)&local_238);
        if ((StringName::configured != '\0') && (local_238 != 0)) {
          StringName::unref();
        }
        if (::Variant::needs_deinit[(int)(float)local_158] != '\0') {
          ::Variant::_clear_internal();
        }
        cVar11 = Array::is_same_typed((Array *)&local_228);
        if (cVar11 == '\0') {
          Array::assign((Array *)&local_228);
        }
        else {
          Array::_ref((Array *)&local_228);
        }
        Array::~Array((Array *)&local_230);
        Array::operator=(local_258,(Array *)&local_228);
        Array::~Array((Array *)&local_228);
        if (::Variant::needs_deinit[local_178[0]] != '\0') {
          ::Variant::_clear_internal();
        }
        if (::Variant::needs_deinit[(int)local_120[0]] != '\0') {
          ::Variant::_clear_internal();
        }
        if (::Variant::needs_deinit[(int)local_138] != '\0') {
          ::Variant::_clear_internal();
        }
      }
      local_2a0 = (CowData<char32_t> *)&local_248;
      Array::~Array(local_250);
      CowData<char32_t>::_unref(local_2a0);
    }
    else {
      local_228 = (RID *)0x0;
      Ref<TextServer>::operator=
                ((Ref<TextServer> *)&local_228,*(Ref **)(TextServerManager::singleton + 0x178));
      TextServer::parse_structured_text
                ((Ref<TextServer> *)&local_1f8,local_228,*(undefined4 *)(this + 0x71c),this + 0x720)
      ;
      Array::operator=(local_258,(Array *)&local_1f8);
      Array::~Array((Array *)&local_1f8);
      Ref<TextServer>::unref((Ref<TextServer> *)&local_228);
    }
    local_1f8 = 0;
    uStack_1f4 = 0;
    Ref<TextServer>::operator=
              ((Ref<TextServer> *)&local_1f8,*(Ref **)(TextServerManager::singleton + 0x178));
    (**(code **)(*(long *)CONCAT44(uStack_1f4,local_1f8) + 0x5c0))
              ((long *)CONCAT44(uStack_1f4,local_1f8),pLVar1,local_258);
    Ref<TextServer>::unref((Ref<TextServer> *)&local_1f8);
    this[0x753] = (Label3D)0x0;
    *(undefined2 *)(this + 0x751) = 1;
    Array::~Array(local_258);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_2b8);
    if (this[0x751] != (Label3D)0x0) goto LAB_0010c33b;
  }
LAB_0010c103:
  lVar32 = *(long *)(this + 0x738);
  if (lVar32 == 0) {
    local_2c8 = 0.0;
  }
  else {
    local_2c8 = 0.0;
    uVar31 = 0;
    do {
      if (*(long *)(lVar32 + -8) <= (long)uVar31) break;
      pOVar23 = *(Object **)(TextServerManager::singleton + 0x178);
      if (pOVar23 == (Object *)0x0) goto Label3D__shape;
      cVar11 = RefCounted::reference();
      if (cVar11 == '\0') {
        pOVar23 = (Object *)0x0;
      }
      if (*(long *)(this + 0x738) == 0) goto LAB_0010c748;
      lVar32 = *(long *)(*(long *)(this + 0x738) + -8);
      if (lVar32 <= (long)uVar31) goto LAB_0010c769;
      (**(code **)(*(long *)pOVar23 + 0x720))(pOVar23);
      local_2c8 = (extraout_XMM0_Db + *(float *)(this + 0x70c)) * *(float *)(this + 0x620) +
                  local_2c8;
      cVar11 = RefCounted::unreference();
      if ((cVar11 != '\0') && (cVar11 = predelete_handler(pOVar23), cVar11 != '\0')) {
        (**(code **)(*(long *)pOVar23 + 0x140))(pOVar23);
        Memory::free_static(pOVar23,false);
      }
      lVar32 = *(long *)(this + 0x738);
      uVar31 = uVar31 + 1;
    } while (lVar32 != 0);
  }
  fVar36 = *(float *)(this + 0x620);
  if (*(int *)(this + 0x69c) == 1) {
    fVar35 = (local_2c8 - *(float *)(this + 0x70c) * fVar36) * __LC254;
  }
  else {
    fVar35 = 0.0;
    if (*(int *)(this + 0x69c) == 2) {
      fVar35 = local_2c8 - *(float *)(this + 0x70c) * fVar36;
    }
  }
  local_158 = (Array *)((ulong)(uint)(fVar36 * *(float *)(this + 0x6ec) + fVar35) << 0x20);
  for (uVar31 = 0; (lVar32 != 0 && ((long)uVar31 < *(long *)(lVar32 + -8))); uVar31 = uVar31 + 1) {
    local_1f8 = 0;
    uStack_1f4 = 0;
    Ref<TextServer>::operator=
              ((Ref<TextServer> *)&local_1f8,*(Ref **)(TextServerManager::singleton + 0x178));
    lVar24 = *(long *)(this + 0x738);
    if (lVar24 == 0) {
LAB_0010d718:
      lVar32 = 0;
      goto LAB_0010c769;
    }
    lVar32 = *(long *)(lVar24 + -8);
    if (lVar32 <= (long)uVar31) goto LAB_0010c769;
    lVar30 = uVar31 * 8;
    pGVar16 = (Glyph *)(**(code **)(*(long *)CONCAT44(uStack_1f4,local_1f8) + 0x6a0))
                                 ((long *)CONCAT44(uStack_1f4,local_1f8),lVar24 + lVar30);
    Ref<TextServer>::unref((Ref<TextServer> *)&local_1f8);
    local_1f8 = 0;
    uStack_1f4 = 0;
    Ref<TextServer>::operator=
              ((Ref<TextServer> *)&local_1f8,*(Ref **)(TextServerManager::singleton + 0x178));
    lVar24 = *(long *)(this + 0x738);
    if (lVar24 == 0) goto LAB_0010d718;
    lVar32 = *(long *)(lVar24 + -8);
    if (lVar32 <= (long)uVar31) goto LAB_0010c769;
    iVar13 = (**(code **)(*(long *)CONCAT44(uStack_1f4,local_1f8) + 0x6b0))
                       ((long *)CONCAT44(uStack_1f4,local_1f8),lVar24 + lVar30);
    Ref<TextServer>::unref((Ref<TextServer> *)&local_1f8);
    local_1f8 = 0;
    uStack_1f4 = 0;
    Ref<TextServer>::operator=
              ((Ref<TextServer> *)&local_1f8,*(Ref **)(TextServerManager::singleton + 0x178));
    lVar24 = *(long *)(this + 0x738);
    if (lVar24 == 0) goto LAB_0010d718;
    lVar32 = *(long *)(lVar24 + -8);
    if (lVar32 <= (long)uVar31) goto LAB_0010c769;
    dVar37 = (double)(**(code **)(*(long *)CONCAT44(uStack_1f4,local_1f8) + 0x738))
                               ((long *)CONCAT44(uStack_1f4,local_1f8),lVar24 + lVar30);
    fVar35 = (float)((double)*(float *)(this + 0x620) * dVar37);
    Ref<TextServer>::unref((Ref<TextServer> *)&local_1f8);
    uVar28 = *(uint *)(this + 0x698);
    fVar36 = (float)((uint)fVar35 ^ __LC255);
    if (uVar28 != 2) {
      if (uVar28 < 3) {
        fVar36 = 0.0;
        if (uVar28 != 0) {
LAB_0010ce51:
          fVar36 = fVar35 * __LC256;
        }
      }
      else {
        if (uVar28 == 3) goto LAB_0010ce51;
        fVar36 = (float)local_158;
      }
    }
    local_138 = (Array *)0x0;
    auStack_130._0_12_ = ZEXT412(0);
    auStack_130._12_4_ = 0;
    fVar36 = *(float *)(this + 0x6e8) * *(float *)(this + 0x620) + fVar36;
    local_158 = (Array *)CONCAT44(local_158._4_4_,fVar36);
    cVar11 = AABB::operator==((AABB *)(this + 0x63c),(AABB *)&local_138);
    lVar32 = TextServerManager::singleton;
    fVar10 = local_158._4_4_;
    if (cVar11 != '\0') {
      *(undefined4 *)(this + 0x644) = 0;
      local_1f8 = 0;
      uStack_1f4 = 0;
      pRVar6 = *(Ref **)(lVar32 + 0x178);
      *(ulong *)(this + 0x63c) = CONCAT44(local_158._4_4_,fVar36);
      Ref<TextServer>::operator=((Ref<TextServer> *)&local_1f8,pRVar6);
      lVar24 = *(long *)(this + 0x738);
      if (lVar24 == 0) goto LAB_0010d718;
      lVar32 = *(long *)(lVar24 + -8);
      if ((long)uVar31 < lVar32) {
        (**(code **)(*(long *)CONCAT44(uStack_1f4,local_1f8) + 0x720))
                  ((long *)CONCAT44(uStack_1f4,local_1f8),lVar24 + lVar30);
        fVar38 = *(float *)(this + 0x648);
        fVar36 = fVar36 + fVar35;
        fVar35 = fVar10 - (extraout_XMM0_Db_01 + *(float *)(this + 0x70c)) *
                          *(float *)(this + 0x620);
        if (((fVar38 < 0.0) || (fVar39 = *(float *)(this + 0x64c), fVar39 < 0.0)) ||
           (fVar40 = *(float *)(this + 0x650), fVar40 < 0.0)) {
          _err_print_error("expand_to","./core/math/aabb.h",0x158,
                           "AABB size is negative, this is not supported. Use AABB.abs() to get an AABB with a positive size."
                          );
          fVar40 = *(float *)(this + 0x650);
          fVar39 = *(float *)(this + 0x64c);
          fVar38 = *(float *)(this + 0x648);
        }
        fVar2 = *(float *)(this + 0x63c);
        fVar3 = *(float *)(this + 0x640);
        fVar41 = *(float *)(this + 0x644);
        fVar42 = fVar36;
        if (fVar2 <= fVar36) {
          fVar42 = fVar2;
        }
        fVar43 = fVar35;
        if (fVar3 <= fVar35) {
          fVar43 = fVar3;
        }
        fVar40 = fVar40 + fVar41;
        if (0.0 < fVar41) {
          fVar41 = 0.0;
        }
        if (fVar36 <= fVar38 + fVar2) {
          fVar36 = fVar38 + fVar2;
        }
        if (fVar35 <= fVar39 + fVar3) {
          fVar35 = fVar39 + fVar3;
        }
        if (fVar40 < 0.0) {
          fVar40 = 0.0;
        }
        *(ulong *)(this + 0x63c) = CONCAT44(fVar43,fVar42);
        *(ulong *)(this + 0x644) = CONCAT44(fVar36 - fVar42,fVar41);
        *(ulong *)(this + 0x64c) = CONCAT44(fVar40 - fVar41,fVar35 - fVar43);
        Ref<TextServer>::unref((Ref<TextServer> *)&local_1f8);
        goto LAB_0010d0f5;
      }
      goto LAB_0010c769;
    }
    fVar38 = *(float *)(this + 0x648);
    if (((fVar38 < 0.0) || (fVar39 = *(float *)(this + 0x64c), fVar39 < 0.0)) ||
       (fVar40 = *(float *)(this + 0x650), fVar40 < 0.0)) {
      _err_print_error("expand_to","./core/math/aabb.h",0x158,
                       "AABB size is negative, this is not supported. Use AABB.abs() to get an AABB with a positive size."
                      );
      fVar40 = *(float *)(this + 0x650);
      fVar39 = *(float *)(this + 0x64c);
      fVar38 = *(float *)(this + 0x648);
    }
    lVar32 = TextServerManager::singleton;
    fVar2 = *(float *)(this + 0x63c);
    fVar3 = *(float *)(this + 0x640);
    fVar41 = *(float *)(this + 0x644);
    fVar42 = fVar36;
    if (fVar2 <= fVar36) {
      fVar42 = fVar2;
    }
    fVar40 = fVar40 + fVar41;
    fVar43 = fVar10;
    if (fVar3 <= fVar10) {
      fVar43 = fVar3;
    }
    if (0.0 < fVar41) {
      fVar41 = 0.0;
    }
    fVar7 = fVar36;
    if (fVar36 <= fVar38 + fVar2) {
      fVar7 = fVar38 + fVar2;
    }
    fVar38 = fVar10;
    if (fVar10 <= fVar39 + fVar3) {
      fVar38 = fVar39 + fVar3;
    }
    if (fVar40 < 0.0) {
      fVar40 = 0.0;
    }
    local_1f8 = 0;
    uStack_1f4 = 0;
    *(ulong *)(this + 0x63c) = CONCAT44(fVar43,fVar42);
    *(ulong *)(this + 0x644) = CONCAT44(fVar7 - fVar42,fVar41);
    pRVar6 = *(Ref **)(lVar32 + 0x178);
    *(ulong *)(this + 0x64c) = CONCAT44(fVar40 - fVar41,fVar38 - fVar43);
    Ref<TextServer>::operator=((Ref<TextServer> *)&local_1f8,pRVar6);
    lVar24 = *(long *)(this + 0x738);
    if (lVar24 == 0) goto LAB_0010d718;
    lVar32 = *(long *)(lVar24 + -8);
    if (lVar32 <= (long)uVar31) goto LAB_0010c769;
    (**(code **)(*(long *)CONCAT44(uStack_1f4,local_1f8) + 0x720))
              ((long *)CONCAT44(uStack_1f4,local_1f8),lVar24 + lVar30);
    fVar38 = *(float *)(this + 0x648);
    fVar39 = fVar10 - (extraout_XMM0_Db_00 + *(float *)(this + 0x70c)) * *(float *)(this + 0x620);
    fVar36 = fVar36 + fVar35;
    if (((fVar38 < 0.0) || (fVar35 = *(float *)(this + 0x64c), fVar35 < 0.0)) ||
       (fVar40 = *(float *)(this + 0x650), fVar40 < 0.0)) {
      _err_print_error("expand_to","./core/math/aabb.h",0x158,
                       "AABB size is negative, this is not supported. Use AABB.abs() to get an AABB with a positive size."
                      );
      fVar40 = *(float *)(this + 0x650);
      fVar35 = *(float *)(this + 0x64c);
      fVar38 = *(float *)(this + 0x648);
    }
    fVar2 = *(float *)(this + 0x63c);
    fVar3 = *(float *)(this + 0x640);
    fVar41 = *(float *)(this + 0x644);
    fVar42 = fVar36;
    if (fVar2 <= fVar36) {
      fVar42 = fVar2;
    }
    fVar43 = fVar39;
    if (fVar3 <= fVar39) {
      fVar43 = fVar3;
    }
    fVar40 = fVar40 + fVar41;
    if (0.0 < fVar41) {
      fVar41 = 0.0;
    }
    if (fVar36 <= fVar38 + fVar2) {
      fVar36 = fVar38 + fVar2;
    }
    if (fVar39 <= fVar35 + fVar3) {
      fVar39 = fVar35 + fVar3;
    }
    if (fVar40 < 0.0) {
      fVar40 = 0.0;
    }
    *(ulong *)(this + 0x63c) = CONCAT44(fVar43,fVar42);
    *(ulong *)(this + 0x644) = CONCAT44(fVar36 - fVar42,fVar41);
    *(ulong *)(this + 0x64c) = CONCAT44(fVar40 - fVar41,fVar39 - fVar43);
    Ref<TextServer>::unref((Ref<TextServer> *)&local_1f8);
LAB_0010d0f5:
    local_1f8 = 0;
    uStack_1f4 = 0;
    Ref<TextServer>::operator=
              ((Ref<TextServer> *)&local_1f8,*(Ref **)(TextServerManager::singleton + 0x178));
    lVar24 = *(long *)(this + 0x738);
    if (lVar24 == 0) goto LAB_0010d718;
    lVar32 = *(long *)(lVar24 + -8);
    if (lVar32 <= (long)uVar31) goto LAB_0010c769;
    dVar37 = (double)(**(code **)(*(long *)CONCAT44(uStack_1f4,local_1f8) + 0x728))
                               ((long *)CONCAT44(uStack_1f4,local_1f8),lVar24 + lVar30);
    local_158 = (Array *)CONCAT44((float)((double)fVar10 - (double)*(float *)(this + 0x620) * dVar37
                                         ),(float)local_158);
    Ref<TextServer>::unref((Ref<TextServer> *)&local_1f8);
    if ((*(float *)(this + 0x708) == 0.0) || (iVar26 = *(int *)(this + 0x6f8), iVar26 < 1)) {
      if (0 < iVar13) goto LAB_0010d1af;
    }
    else {
      local_138 = local_158;
      if (0 < iVar13) {
        for (pGVar21 = pGVar16;
            _generate_glyph_surfaces
                      (this,pGVar21,(Vector2 *)&local_138,(Color *)(this + 0x6fc),
                       *(int *)(this + 0x6f0),iVar26),
            pGVar21 != pGVar16 + (ulong)(iVar13 - 1) * 0x30; pGVar21 = pGVar21 + 0x30) {
          iVar26 = *(int *)(this + 0x6f8);
        }
LAB_0010d1af:
        pGVar21 = pGVar16;
        do {
          pGVar25 = pGVar21 + 0x30;
          _generate_glyph_surfaces
                    (this,pGVar21,(Vector2 *)&local_158,(Color *)(this + 0x6d8),
                     *(int *)(this + 0x6f4),0);
          pGVar21 = pGVar25;
        } while (pGVar25 != pGVar16 + (ulong)(iVar13 - 1) * 0x30 + 0x30);
      }
    }
    local_1f8 = 0;
    uStack_1f4 = 0;
    Ref<TextServer>::operator=
              ((Ref<TextServer> *)&local_1f8,*(Ref **)(TextServerManager::singleton + 0x178));
    lVar24 = *(long *)(this + 0x738);
    if (lVar24 == 0) goto LAB_0010d718;
    lVar32 = *(long *)(lVar24 + -8);
    if (lVar32 <= (long)uVar31) goto LAB_0010c769;
    dVar37 = (double)(**(code **)(*(long *)CONCAT44(uStack_1f4,local_1f8) + 0x730))
                               ((long *)CONCAT44(uStack_1f4,local_1f8),lVar24 + lVar30);
    local_158 = (Array *)CONCAT44((float)((double)local_158._4_4_ -
                                         ((double)*(float *)(this + 0x70c) + dVar37) *
                                         (double)*(float *)(this + 0x620)),(float)local_158);
    Ref<TextServer>::unref((Ref<TextServer> *)&local_1f8);
    lVar32 = *(long *)(this + 0x738);
  }
  plVar15 = *(long **)(this + 0x680);
  if (plVar15 != (long *)0x0) {
    do {
      Array::Array((Array *)&local_230);
      iVar13 = (int)(Array *)&local_230;
      Array::resize(iVar13);
      ::Variant::Variant((Variant *)&local_138,(Vector *)(plVar15 + 4));
      pVVar17 = (Variant *)Array::operator[](iVar13);
      ::Variant::operator=(pVVar17,(Variant *)&local_138);
      if (::Variant::needs_deinit[(int)local_138] != '\0') {
        ::Variant::_clear_internal();
      }
      ::Variant::Variant((Variant *)&local_138,(Vector *)(plVar15 + 6));
      pVVar17 = (Variant *)Array::operator[](iVar13);
      ::Variant::operator=(pVVar17,(Variant *)&local_138);
      if (::Variant::needs_deinit[(int)local_138] != '\0') {
        ::Variant::_clear_internal();
      }
      ::Variant::Variant((Variant *)&local_138,(Vector *)(plVar15 + 8));
      pVVar17 = (Variant *)Array::operator[](iVar13);
      ::Variant::operator=(pVVar17,(Variant *)&local_138);
      if (::Variant::needs_deinit[(int)local_138] != '\0') {
        ::Variant::_clear_internal();
      }
      ::Variant::Variant((Variant *)&local_138,(Vector *)(plVar15 + 10));
      pVVar17 = (Variant *)Array::operator[](iVar13);
      ::Variant::operator=(pVVar17,(Variant *)&local_138);
      if (::Variant::needs_deinit[(int)local_138] != '\0') {
        ::Variant::_clear_internal();
      }
      ::Variant::Variant((Variant *)&local_138,(Vector *)(plVar15 + 0xc));
      pVVar17 = (Variant *)Array::operator[](iVar13);
      ::Variant::operator=(pVVar17,(Variant *)&local_138);
      if (::Variant::needs_deinit[(int)local_138] != '\0') {
        ::Variant::_clear_internal();
      }
      ::Variant::Variant((Variant *)&local_138,(Vector *)(plVar15 + 0xe));
      pVVar17 = (Variant *)Array::operator[](iVar13);
      ::Variant::operator=(pVVar17,(Variant *)&local_138);
      if (::Variant::needs_deinit[(int)local_138] != '\0') {
        ::Variant::_clear_internal();
      }
      local_a0 = ZEXT416(_LC264);
      local_138 = (Array *)CONCAT44(local_138._4_4_,5);
      local_60 = (undefined1  [16])0x0;
      auStack_130._0_8_ = 0x800000000;
      local_120[0] = 0;
      local_110[0] = 0;
      local_100 = 0;
      local_f8 = 0;
      local_e8 = 0;
      local_e0 = 0;
      local_dc = 0;
      local_d4 = 0;
      local_d0 = 0;
      local_c8 = 0;
      local_b8 = 0;
      local_a8 = 0;
      local_80 = 0x3f800000;
      local_7c = 0;
      local_74 = 0;
      local_68 = 0;
      local_50 = 0;
      local_90 = local_a0;
      plVar18 = (long *)RenderingServer::get_singleton();
      pcVar20 = *(code **)(*plVar18 + 0x310);
      Dictionary::Dictionary((Dictionary *)&local_1f8);
      Array::Array((Array *)&local_228);
      (*pcVar20)(plVar18,(Variant *)&local_138,3,(Array *)&local_230,(Array *)&local_228,
                 (Ref<TextServer> *)&local_1f8,0);
      Array::~Array((Array *)&local_228);
      Dictionary::~Dictionary((Dictionary *)&local_1f8);
      local_50 = plVar15[0x11];
      plVar18 = (long *)RenderingServer::get_singleton();
      (**(code **)(*plVar18 + 800))(plVar18,*(undefined8 *)(this + 0x660),(Variant *)&local_138);
      CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_68);
      lVar32 = local_a8;
      if (local_a8 != 0) {
        LOCK();
        plVar18 = (long *)(local_a8 + -0x10);
        *plVar18 = *plVar18 + -1;
        UNLOCK();
        if (*plVar18 == 0) {
          local_a8 = 0;
          Memory::free_static((void *)(lVar32 + -0x10),false);
        }
      }
      lVar32 = local_b8;
      if (local_b8 != 0) {
        LOCK();
        plVar18 = (long *)(local_b8 + -0x10);
        *plVar18 = *plVar18 + -1;
        UNLOCK();
        if (*plVar18 == 0) {
          if (local_b8 == 0) goto Label3D__shape;
          lVar24 = *(long *)(local_b8 + -8);
          this_01 = (CowData<unsigned_char> *)(local_b8 + 0x10);
          lVar30 = 0;
          local_b8 = 0;
          if (lVar24 != 0) {
            do {
              lVar30 = lVar30 + 1;
              CowData<unsigned_char>::_unref(this_01);
              this_01 = this_01 + 0x18;
            } while (lVar24 != lVar30);
          }
          Memory::free_static((void *)(lVar32 + -0x10),false);
        }
      }
      CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_e8);
      CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_100);
      CowData<unsigned_char>::_unref((CowData<unsigned_char> *)local_110);
      CowData<unsigned_char>::_unref((CowData<unsigned_char> *)local_120);
      Array::~Array((Array *)&local_230);
      plVar15 = (long *)*plVar15;
    } while (plVar15 != (long *)0x0);
  }
  Ref<Font>::unref((Ref<Font> *)&local_268);
LAB_0010d7df:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0010c748:
  lVar32 = 0;
LAB_0010c769:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,uVar31,lVar32,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar20 = (code *)invalidInstructionException();
  (*pcVar20)();
}



/* Label3D::_im_update() */

void __thiscall Label3D::_im_update(Label3D *this)

{
  Object *pOVar1;
  char cVar2;
  
  _shape(this);
  if (*(long *)(this + 0x658) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x658);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  *(undefined8 *)(this + 0x658) = 0;
  Node3D::update_gizmos();
  this[0x750] = (Label3D)0x0;
  return;
}



/* Label3D::_notification(int) */

void __thiscall Label3D::_notification(Label3D *this,int param_1)

{
  code *pcVar1;
  char cVar2;
  long *plVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  long local_48 [3];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0xb) {
    plVar3 = (long *)Node::get_window();
    if (plVar3 == (long *)0x0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar4 = 0xce;
LAB_0010e892:
        _err_print_error("_notification","scene/3d/label_3d.cpp",uVar4,
                         "Parameter \"window\" is null.",0,0);
        return;
      }
      goto LAB_0010e8dc;
    }
    pcVar1 = *(code **)(*plVar3 + 0x110);
    create_custom_callable_function_pointer<Label3D>
              ((Label3D *)local_48,(char *)this,(_func_void *)"&Label3D::_font_changed");
    StringName::StringName((StringName *)&local_50,"size_changed",false);
    (*pcVar1)(plVar3,(StringName *)&local_50,(Label3D *)local_48);
joined_r0x0010e7e5:
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)local_48);
  }
  else if (param_1 == 0x7da) {
    StringName::StringName((StringName *)&local_50,"",false);
    cVar2 = Node::can_auto_translate();
    if (cVar2 == '\0') {
      local_58 = 0;
      if (*(long *)(this + 0x6a0) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(this + 0x6a0));
      }
LAB_0010e710:
      if (StringName::configured != '\0') {
LAB_0010e714:
        if (local_50 != 0) {
          StringName::unref();
        }
      }
    }
    else {
      StringName::StringName((StringName *)local_48,(String *)(this + 0x6a0),false);
      Object::tr((StringName *)&local_58,(StringName *)this);
      if (StringName::configured != '\0') {
        if (local_48[0] != 0) {
          StringName::unref();
          goto LAB_0010e710;
        }
        goto LAB_0010e714;
      }
    }
    cVar2 = String::operator==((String *)&local_58,(String *)(this + 0x6a8));
    if (cVar2 == '\0') {
      if (*(long *)(this + 0x6a8) != local_58) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x6a8),(CowData *)&local_58);
      }
      this[0x753] = (Label3D)0x1;
      if (this[0x750] == (Label3D)0x0) {
        _queue_update(this);
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  }
  else if (param_1 == 10) {
    if (this[0x750] == (Label3D)0x0) {
      _im_update(this);
    }
    plVar3 = (long *)Node::get_window();
    if (plVar3 == (long *)0x0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar4 = 0xc9;
        goto LAB_0010e892;
      }
      goto LAB_0010e8dc;
    }
    pcVar1 = *(code **)(*plVar3 + 0x108);
    create_custom_callable_function_pointer<Label3D>
              ((Label3D *)local_48,(char *)this,(_func_void *)"&Label3D::_font_changed");
    StringName::StringName((StringName *)&local_50,"size_changed",false);
    (*pcVar1)(plVar3,(StringName *)&local_50,(Label3D *)local_48,0);
    goto joined_r0x0010e7e5;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010e8dc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* Node3D::set_transform_gizmo_visible(bool) */

void __thiscall Node3D::set_transform_gizmo_visible(Node3D *this,bool param_1)

{
  this[0x518] = (Node3D)((byte)this[0x518] & 0xfb | param_1 * '\x04');
  return;
}



/* Node3D::is_transform_gizmo_visible() const */

byte __thiscall Node3D::is_transform_gizmo_visible(Node3D *this)

{
  return (byte)this[0x518] >> 2 & 1;
}



/* Label3D::is_class_ptr(void*) const */

uint Label3D::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x1308,in_RSI == &GeometryInstance3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1307,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1308,in_RSI == &VisualInstance3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1308,in_RSI == &Node3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1308,in_RSI == &Node::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* CallableCustomMethodPointer<Label3D, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Label3D,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Label3D,void> *this)

{
  return;
}



/* MethodBindTRC<Ref<TriangleMesh>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Ref<TriangleMesh>>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTRC<Ref<TriangleMesh>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Ref<TriangleMesh>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<BaseMaterial3D::TextureFilter>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<BaseMaterial3D::TextureFilter>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<BaseMaterial3D::TextureFilter>::get_argument_meta(int) const */

undefined8 MethodBindTRC<BaseMaterial3D::TextureFilter>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<BaseMaterial3D::TextureFilter>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<BaseMaterial3D::TextureFilter>::_gen_argument_type
          (MethodBindT<BaseMaterial3D::TextureFilter> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<BaseMaterial3D::TextureFilter>::get_argument_meta(int) const */

undefined8 MethodBindT<BaseMaterial3D::TextureFilter>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<BaseMaterial3D::AlphaAntiAliasing>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<BaseMaterial3D::AlphaAntiAliasing>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<BaseMaterial3D::AlphaAntiAliasing>::get_argument_meta(int) const */

undefined8 MethodBindTRC<BaseMaterial3D::AlphaAntiAliasing>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<BaseMaterial3D::AlphaAntiAliasing>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<BaseMaterial3D::AlphaAntiAliasing>::_gen_argument_type
          (MethodBindT<BaseMaterial3D::AlphaAntiAliasing> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<BaseMaterial3D::AlphaAntiAliasing>::get_argument_meta(int) const */

undefined8 MethodBindT<BaseMaterial3D::AlphaAntiAliasing>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Label3D::AlphaCutMode>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Label3D::AlphaCutMode>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<Label3D::AlphaCutMode>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Label3D::AlphaCutMode>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Label3D::AlphaCutMode>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<Label3D::AlphaCutMode>::_gen_argument_type
          (MethodBindT<Label3D::AlphaCutMode> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<Label3D::AlphaCutMode>::get_argument_meta(int) const */

undefined8 MethodBindT<Label3D::AlphaCutMode>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<BaseMaterial3D::BillboardMode>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<BaseMaterial3D::BillboardMode>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<BaseMaterial3D::BillboardMode>::get_argument_meta(int) const */

undefined8 MethodBindTRC<BaseMaterial3D::BillboardMode>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<BaseMaterial3D::BillboardMode>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<BaseMaterial3D::BillboardMode>::_gen_argument_type
          (MethodBindT<BaseMaterial3D::BillboardMode> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<BaseMaterial3D::BillboardMode>::get_argument_meta(int) const */

undefined8 MethodBindT<BaseMaterial3D::BillboardMode>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<bool, Label3D::DrawFlags>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRC<bool,Label3D::DrawFlags>::_gen_argument_type
          (MethodBindTRC<bool,Label3D::DrawFlags> *this,int param_1)

{
  return (param_1 == 0) + '\x01';
}



/* MethodBindTRC<bool, Label3D::DrawFlags>::get_argument_meta(int) const */

undefined8 MethodBindTRC<bool,Label3D::DrawFlags>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Label3D::DrawFlags, bool>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<Label3D::DrawFlags,bool>::_gen_argument_type
          (MethodBindT<Label3D::DrawFlags,bool> *this,int param_1)

{
  char cVar1;
  
  cVar1 = (param_1 == 0) + '\x01';
  if (1 < (uint)param_1) {
    cVar1 = '\0';
  }
  return cVar1;
}



/* MethodBindT<Label3D::DrawFlags, bool>::get_argument_meta(int) const */

undefined8 MethodBindT<Label3D::DrawFlags,bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Vector2>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Vector2>::_gen_argument_type(int param_1)

{
  return 5;
}



/* MethodBindTRC<Vector2>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Vector2>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Vector2 const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Vector2_const&>::_gen_argument_type(MethodBindT<Vector2_const&> *this,int param_1)

{
  return -(param_1 == 0) & 5;
}



/* MethodBindT<Vector2 const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Vector2_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<BitField<TextServer::JustificationFlag>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<BitField<TextServer::JustificationFlag>>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<BitField<TextServer::JustificationFlag>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<BitField<TextServer::JustificationFlag>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<BitField<TextServer::JustificationFlag> >::_gen_argument_type(int) const */

char __thiscall
MethodBindT<BitField<TextServer::JustificationFlag>>::_gen_argument_type
          (MethodBindT<BitField<TextServer::JustificationFlag>> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<BitField<TextServer::JustificationFlag> >::get_argument_meta(int) const */

undefined8 MethodBindT<BitField<TextServer::JustificationFlag>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<TextServer::AutowrapMode>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<TextServer::AutowrapMode>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<TextServer::AutowrapMode>::get_argument_meta(int) const */

undefined8 MethodBindTRC<TextServer::AutowrapMode>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<TextServer::AutowrapMode>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<TextServer::AutowrapMode>::_gen_argument_type
          (MethodBindT<TextServer::AutowrapMode> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<TextServer::AutowrapMode>::get_argument_meta(int) const */

undefined8 MethodBindT<TextServer::AutowrapMode>::get_argument_meta(int param_1)

{
  return 0;
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



/* MethodBindTRC<Ref<Font>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Ref<Font>>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTRC<Ref<Font>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Ref<Font>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Ref<Font> const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Ref<Font>const&>::_gen_argument_type(MethodBindT<Ref<Font>const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x18;
}



/* MethodBindT<Ref<Font> const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Ref<Font>const&>::get_argument_meta(int param_1)

{
  return 0;
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



/* MethodBindTRC<bool>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<bool>::_gen_argument_type(int param_1)

{
  return 1;
}



/* MethodBindTRC<bool>::get_argument_meta(int) const */

undefined8 MethodBindTRC<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<bool>::_gen_argument_type(int) const */

bool __thiscall MethodBindT<bool>::_gen_argument_type(MethodBindT<bool> *this,int param_1)

{
  return param_1 == 0;
}



/* MethodBindT<bool>::get_argument_meta(int) const */

undefined8 MethodBindT<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Array>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Array>::_gen_argument_type(int param_1)

{
  return 0x1c;
}



/* MethodBindTRC<Array>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Array>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Array>::_gen_argument_type(int) const */

byte __thiscall MethodBindT<Array>::_gen_argument_type(MethodBindT<Array> *this,int param_1)

{
  return -(param_1 == 0) & 0x1c;
}



/* MethodBindT<Array>::get_argument_meta(int) const */

undefined8 MethodBindT<Array>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<TextServer::StructuredTextParser>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<TextServer::StructuredTextParser>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<TextServer::StructuredTextParser>::get_argument_meta(int) const */

undefined8 MethodBindTRC<TextServer::StructuredTextParser>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<TextServer::StructuredTextParser>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<TextServer::StructuredTextParser>::_gen_argument_type
          (MethodBindT<TextServer::StructuredTextParser> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<TextServer::StructuredTextParser>::get_argument_meta(int) const */

undefined8 MethodBindT<TextServer::StructuredTextParser>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<TextServer::Direction>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<TextServer::Direction>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<TextServer::Direction>::get_argument_meta(int) const */

undefined8 MethodBindTRC<TextServer::Direction>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<TextServer::Direction>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<TextServer::Direction>::_gen_argument_type
          (MethodBindT<TextServer::Direction> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<TextServer::Direction>::get_argument_meta(int) const */

undefined8 MethodBindT<TextServer::Direction>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<String>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<String>::_gen_argument_type(int param_1)

{
  return 4;
}



/* MethodBindTRC<String>::get_argument_meta(int) const */

undefined8 MethodBindTRC<String>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<String const&>::_gen_argument_type(int) const */

long __thiscall
MethodBindT<String_const&>::_gen_argument_type(MethodBindT<String_const&> *this,int param_1)

{
  return (ulong)(param_1 == 0) << 2;
}



/* MethodBindT<String const&>::get_argument_meta(int) const */

undefined8 MethodBindT<String_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Color>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Color>::_gen_argument_type(int param_1)

{
  return 0x14;
}



/* MethodBindTRC<Color>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Color>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Color const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Color_const&>::_gen_argument_type(MethodBindT<Color_const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x14;
}



/* MethodBindT<Color const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Color_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<VerticalAlignment>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<VerticalAlignment>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<VerticalAlignment>::get_argument_meta(int) const */

undefined8 MethodBindTRC<VerticalAlignment>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<VerticalAlignment>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<VerticalAlignment>::_gen_argument_type(MethodBindT<VerticalAlignment> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<VerticalAlignment>::get_argument_meta(int) const */

undefined8 MethodBindT<VerticalAlignment>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<HorizontalAlignment>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<HorizontalAlignment>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<HorizontalAlignment>::get_argument_meta(int) const */

undefined8 MethodBindTRC<HorizontalAlignment>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<HorizontalAlignment>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<HorizontalAlignment>::_gen_argument_type
          (MethodBindT<HorizontalAlignment> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<HorizontalAlignment>::get_argument_meta(int) const */

undefined8 MethodBindT<HorizontalAlignment>::get_argument_meta(int param_1)

{
  return 0;
}



/* CallableCustomMethodPointer<Label3D, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Label3D,void>::get_argument_count
          (CallableCustomMethodPointer<Label3D,void> *this,bool *param_1)

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



/* CallableCustomMethodPointer<Label3D, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Label3D,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Label3D,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* MethodBindT<HorizontalAlignment>::~MethodBindT() */

void __thiscall
MethodBindT<HorizontalAlignment>::~MethodBindT(MethodBindT<HorizontalAlignment> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012f958;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<HorizontalAlignment>::~MethodBindT() */

void __thiscall
MethodBindT<HorizontalAlignment>::~MethodBindT(MethodBindT<HorizontalAlignment> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012f958;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<HorizontalAlignment>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<HorizontalAlignment>::~MethodBindTRC(MethodBindTRC<HorizontalAlignment> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012f9b8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<HorizontalAlignment>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<HorizontalAlignment>::~MethodBindTRC(MethodBindTRC<HorizontalAlignment> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012f9b8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<VerticalAlignment>::~MethodBindT() */

void __thiscall MethodBindT<VerticalAlignment>::~MethodBindT(MethodBindT<VerticalAlignment> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012fa18;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<VerticalAlignment>::~MethodBindT() */

void __thiscall MethodBindT<VerticalAlignment>::~MethodBindT(MethodBindT<VerticalAlignment> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012fa18;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<VerticalAlignment>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<VerticalAlignment>::~MethodBindTRC(MethodBindTRC<VerticalAlignment> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012fa78;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<VerticalAlignment>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<VerticalAlignment>::~MethodBindTRC(MethodBindTRC<VerticalAlignment> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012fa78;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Color const&>::~MethodBindT() */

void __thiscall MethodBindT<Color_const&>::~MethodBindT(MethodBindT<Color_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012fad8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Color const&>::~MethodBindT() */

void __thiscall MethodBindT<Color_const&>::~MethodBindT(MethodBindT<Color_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012fad8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Color>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Color>::~MethodBindTRC(MethodBindTRC<Color> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012fb38;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Color>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Color>::~MethodBindTRC(MethodBindTRC<Color> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012fb38;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<TextServer::Direction>::~MethodBindT() */

void __thiscall
MethodBindT<TextServer::Direction>::~MethodBindT(MethodBindT<TextServer::Direction> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012fc58;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<TextServer::Direction>::~MethodBindT() */

void __thiscall
MethodBindT<TextServer::Direction>::~MethodBindT(MethodBindT<TextServer::Direction> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012fc58;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<TextServer::Direction>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TextServer::Direction>::~MethodBindTRC(MethodBindTRC<TextServer::Direction> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012fcb8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<TextServer::Direction>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TextServer::Direction>::~MethodBindTRC(MethodBindTRC<TextServer::Direction> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012fcb8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012fb98;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012fb98;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012fbf8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012fbf8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<TextServer::StructuredTextParser>::~MethodBindT() */

void __thiscall
MethodBindT<TextServer::StructuredTextParser>::~MethodBindT
          (MethodBindT<TextServer::StructuredTextParser> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012fd18;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<TextServer::StructuredTextParser>::~MethodBindT() */

void __thiscall
MethodBindT<TextServer::StructuredTextParser>::~MethodBindT
          (MethodBindT<TextServer::StructuredTextParser> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012fd18;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<TextServer::StructuredTextParser>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TextServer::StructuredTextParser>::~MethodBindTRC
          (MethodBindTRC<TextServer::StructuredTextParser> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012fd78;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<TextServer::StructuredTextParser>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TextServer::StructuredTextParser>::~MethodBindTRC
          (MethodBindTRC<TextServer::StructuredTextParser> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012fd78;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Array>::~MethodBindT() */

void __thiscall MethodBindT<Array>::~MethodBindT(MethodBindT<Array> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012fdd8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Array>::~MethodBindT() */

void __thiscall MethodBindT<Array>::~MethodBindT(MethodBindT<Array> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012fdd8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Array>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Array>::~MethodBindTRC(MethodBindTRC<Array> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012fe38;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Array>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Array>::~MethodBindTRC(MethodBindTRC<Array> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012fe38;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012fe98;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012fe98;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012fef8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012fef8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Ref<Font> const&>::~MethodBindT() */

void __thiscall MethodBindT<Ref<Font>const&>::~MethodBindT(MethodBindT<Ref<Font>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00130018;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<Font> const&>::~MethodBindT() */

void __thiscall MethodBindT<Ref<Font>const&>::~MethodBindT(MethodBindT<Ref<Font>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00130018;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Ref<Font>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Font>>::~MethodBindTRC(MethodBindTRC<Ref<Font>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00130078;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Ref<Font>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Font>>::~MethodBindTRC(MethodBindTRC<Ref<Font>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00130078;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012ff58;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012ff58;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012ffb8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012ffb8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<TextServer::AutowrapMode>::~MethodBindT() */

void __thiscall
MethodBindT<TextServer::AutowrapMode>::~MethodBindT(MethodBindT<TextServer::AutowrapMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00130198;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<TextServer::AutowrapMode>::~MethodBindT() */

void __thiscall
MethodBindT<TextServer::AutowrapMode>::~MethodBindT(MethodBindT<TextServer::AutowrapMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00130198;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<TextServer::AutowrapMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TextServer::AutowrapMode>::~MethodBindTRC
          (MethodBindTRC<TextServer::AutowrapMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001301f8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<TextServer::AutowrapMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TextServer::AutowrapMode>::~MethodBindTRC
          (MethodBindTRC<TextServer::AutowrapMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001301f8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<BitField<TextServer::JustificationFlag> >::~MethodBindT() */

void __thiscall
MethodBindT<BitField<TextServer::JustificationFlag>>::~MethodBindT
          (MethodBindT<BitField<TextServer::JustificationFlag>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00130258;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<BitField<TextServer::JustificationFlag> >::~MethodBindT() */

void __thiscall
MethodBindT<BitField<TextServer::JustificationFlag>>::~MethodBindT
          (MethodBindT<BitField<TextServer::JustificationFlag>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00130258;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<BitField<TextServer::JustificationFlag>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<BitField<TextServer::JustificationFlag>>::~MethodBindTRC
          (MethodBindTRC<BitField<TextServer::JustificationFlag>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001302b8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<BitField<TextServer::JustificationFlag>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<BitField<TextServer::JustificationFlag>>::~MethodBindTRC
          (MethodBindTRC<BitField<TextServer::JustificationFlag>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001302b8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Vector2 const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector2_const&>::~MethodBindT(MethodBindT<Vector2_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00130318;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Vector2 const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector2_const&>::~MethodBindT(MethodBindT<Vector2_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00130318;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Vector2>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector2>::~MethodBindTRC(MethodBindTRC<Vector2> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00130378;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Vector2>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector2>::~MethodBindTRC(MethodBindTRC<Vector2> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00130378;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Label3D::DrawFlags, bool>::~MethodBindT() */

void __thiscall
MethodBindT<Label3D::DrawFlags,bool>::~MethodBindT(MethodBindT<Label3D::DrawFlags,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001303d8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Label3D::DrawFlags, bool>::~MethodBindT() */

void __thiscall
MethodBindT<Label3D::DrawFlags,bool>::~MethodBindT(MethodBindT<Label3D::DrawFlags,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001303d8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool, Label3D::DrawFlags>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<bool,Label3D::DrawFlags>::~MethodBindTRC(MethodBindTRC<bool,Label3D::DrawFlags> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00130438;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool, Label3D::DrawFlags>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<bool,Label3D::DrawFlags>::~MethodBindTRC(MethodBindTRC<bool,Label3D::DrawFlags> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00130438;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<BaseMaterial3D::BillboardMode>::~MethodBindT() */

void __thiscall
MethodBindT<BaseMaterial3D::BillboardMode>::~MethodBindT
          (MethodBindT<BaseMaterial3D::BillboardMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00130498;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<BaseMaterial3D::BillboardMode>::~MethodBindT() */

void __thiscall
MethodBindT<BaseMaterial3D::BillboardMode>::~MethodBindT
          (MethodBindT<BaseMaterial3D::BillboardMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00130498;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<BaseMaterial3D::BillboardMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<BaseMaterial3D::BillboardMode>::~MethodBindTRC
          (MethodBindTRC<BaseMaterial3D::BillboardMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001304f8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<BaseMaterial3D::BillboardMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<BaseMaterial3D::BillboardMode>::~MethodBindTRC
          (MethodBindTRC<BaseMaterial3D::BillboardMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001304f8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Label3D::AlphaCutMode>::~MethodBindT() */

void __thiscall
MethodBindT<Label3D::AlphaCutMode>::~MethodBindT(MethodBindT<Label3D::AlphaCutMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00130558;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Label3D::AlphaCutMode>::~MethodBindT() */

void __thiscall
MethodBindT<Label3D::AlphaCutMode>::~MethodBindT(MethodBindT<Label3D::AlphaCutMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00130558;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Label3D::AlphaCutMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Label3D::AlphaCutMode>::~MethodBindTRC(MethodBindTRC<Label3D::AlphaCutMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001305b8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Label3D::AlphaCutMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Label3D::AlphaCutMode>::~MethodBindTRC(MethodBindTRC<Label3D::AlphaCutMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001305b8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<BaseMaterial3D::AlphaAntiAliasing>::~MethodBindT() */

void __thiscall
MethodBindT<BaseMaterial3D::AlphaAntiAliasing>::~MethodBindT
          (MethodBindT<BaseMaterial3D::AlphaAntiAliasing> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00130618;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<BaseMaterial3D::AlphaAntiAliasing>::~MethodBindT() */

void __thiscall
MethodBindT<BaseMaterial3D::AlphaAntiAliasing>::~MethodBindT
          (MethodBindT<BaseMaterial3D::AlphaAntiAliasing> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00130618;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<BaseMaterial3D::AlphaAntiAliasing>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<BaseMaterial3D::AlphaAntiAliasing>::~MethodBindTRC
          (MethodBindTRC<BaseMaterial3D::AlphaAntiAliasing> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00130678;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<BaseMaterial3D::AlphaAntiAliasing>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<BaseMaterial3D::AlphaAntiAliasing>::~MethodBindTRC
          (MethodBindTRC<BaseMaterial3D::AlphaAntiAliasing> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00130678;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001300d8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001300d8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00130138;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00130138;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<BaseMaterial3D::TextureFilter>::~MethodBindT() */

void __thiscall
MethodBindT<BaseMaterial3D::TextureFilter>::~MethodBindT
          (MethodBindT<BaseMaterial3D::TextureFilter> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001306d8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<BaseMaterial3D::TextureFilter>::~MethodBindT() */

void __thiscall
MethodBindT<BaseMaterial3D::TextureFilter>::~MethodBindT
          (MethodBindT<BaseMaterial3D::TextureFilter> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001306d8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<BaseMaterial3D::TextureFilter>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<BaseMaterial3D::TextureFilter>::~MethodBindTRC
          (MethodBindTRC<BaseMaterial3D::TextureFilter> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00130738;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<BaseMaterial3D::TextureFilter>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<BaseMaterial3D::TextureFilter>::~MethodBindTRC
          (MethodBindTRC<BaseMaterial3D::TextureFilter> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00130738;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Ref<TriangleMesh>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<TriangleMesh>>::~MethodBindTRC(MethodBindTRC<Ref<TriangleMesh>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00130798;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Ref<TriangleMesh>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<TriangleMesh>>::~MethodBindTRC(MethodBindTRC<Ref<TriangleMesh>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00130798;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* Label3D::_property_get_revertv(StringName const&, Variant&) const */

undefined8 Label3D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Node3D::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* Label3D::_property_can_revertv(StringName const&) const */

undefined8 Label3D::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00139008 != Object::_property_can_revert) {
    uVar1 = Node3D::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* Label3D::_getv(StringName const&, Variant&) const */

undefined8 Label3D::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_00139010 != Object::_get) {
    uVar1 = GeometryInstance3D::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* Label3D::_setv(StringName const&, Variant const&) */

undefined8 Label3D::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_00139018 != Object::_set) {
    uVar1 = GeometryInstance3D::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* CowData<Color>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Color>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<float>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<float>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector2>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector2>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<RID>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<RID>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector3>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector3>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Label3D::Label3D() [clone .cold] */

void __thiscall Label3D::Label3D(Label3D *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Error CowData<Vector3>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<Vector3>::resize<false>(long param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001106fe(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<StringName>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<StringName>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Label3D::~Label3D() [clone .cold] */

void __thiscall Label3D::~Label3D(Label3D *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Label3D::_generate_glyph_surfaces(Glyph const&, Vector2&, Color const&, int, int) [clone .cold]
    */

void Label3D::_generate_glyph_surfaces
               (Glyph *param_1,Vector2 *param_2,Color *param_3,int param_4,int param_5)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



void FUN_0011072a(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Ref<Theme> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Ref<Theme>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Label3D::generate_triangle_mesh() const [clone .cold] */

void Label3D::generate_triangle_mesh(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Label3D::_shape() [clone .cold] */

void Label3D::_shape(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CallableCustomMethodPointer<Label3D, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Label3D,void>::get_object
          (CallableCustomMethodPointer<Label3D,void> *this)

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
      goto LAB_0011084d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011084d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011084d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
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



/* Label3D::_get_class_namev() const */

undefined8 * Label3D::_get_class_namev(void)

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
LAB_00110963:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00110963;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Label3D");
      goto LAB_001109ce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Label3D");
LAB_001109ce:
  return &_get_class_namev()::_class_name_static;
}



/* Label3D::get_class() const */

void Label3D::get_class(void)

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



/* MethodBindTRC<Vector2>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Vector2>::_gen_argument_type_info(int param_1)

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
  *puVar3 = 5;
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
      goto joined_r0x00110c1c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00110c1c:
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



/* MethodBindTRC<String>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<String>::_gen_argument_type_info(int param_1)

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
  *puVar3 = 4;
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
      goto joined_r0x00110d9c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00110d9c:
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



/* MethodBindTRC<Ref<Font>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Ref<Font>>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC18;
  local_40 = 4;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x18;
  puVar3[6] = 0x11;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] != 0x11) {
      StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
      goto LAB_00110ea0;
    }
  }
  StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
  if (*(undefined **)(puVar3 + 4) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(undefined **)(puVar3 + 4) = local_48;
  }
LAB_00110ea0:
  lVar2 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
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
      goto joined_r0x001110bc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001110bc:
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



/* MethodBindTRC<Ref<TriangleMesh>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Ref<TriangleMesh>>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = "TriangleMesh";
  local_40 = 0xc;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x18;
  puVar3[6] = 0x11;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] != 0x11) {
      StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
      goto LAB_001111c0;
    }
  }
  StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
  if (*(char **)(puVar3 + 4) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(char **)(puVar3 + 4) = local_48;
  }
LAB_001111c0:
  lVar2 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
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



/* MethodBindTRC<Color>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Color>::_gen_argument_type_info(int param_1)

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
  *puVar3 = 0x14;
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
      goto joined_r0x001113dc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001113dc:
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



/* MethodBindTRC<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool>::_gen_argument_type_info(int param_1)

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
  *puVar3 = 1;
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
      goto joined_r0x0011155c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0011155c:
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
      goto joined_r0x001116dc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001116dc:
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



/* MethodBindTRC<Array>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Array>::_gen_argument_type_info(int param_1)

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
  *puVar3 = 0x1c;
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
      goto joined_r0x0011185c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0011185c:
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



/* Variant::TEMPNAMEPLACEHOLDERVALUE(Variant&&) */

void __thiscall Variant::operator=(Variant *this,Variant *param_1)

{
  undefined8 uVar1;
  
  if (this != param_1) {
    if (needs_deinit[*(int *)this] != '\0') {
      ::Variant::_clear_internal();
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



/* GetTypeInfo<String, void>::get_class_info() */

GetTypeInfo<String,void> * __thiscall
GetTypeInfo<String,void>::get_class_info(GetTypeInfo<String,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC3;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 4;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
      if (*(undefined **)(this + 0x10) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(this + 0x10) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x00111c5c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00111c5c:
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
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<Array, void>::get_class_info() */

GetTypeInfo<Array,void> * __thiscall
GetTypeInfo<Array,void>::get_class_info(GetTypeInfo<Array,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC3;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 0x1c;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
      if (*(undefined **)(this + 0x10) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(this + 0x10) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x00111ddc;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00111ddc:
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
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node3D::is_class(String const&) const */

undefined8 __thiscall Node3D::is_class(Node3D *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
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
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_00111e9f;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar3 == lVar8;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar8 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_00111e9f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_00111f53;
  }
  cVar6 = String::operator==(param_1,"Node3D");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
          if (*(long *)(lVar5 + 0x10) != 0) {
            do {
              lVar3 = *plVar1;
              if (lVar3 == 0) goto LAB_0011202b;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar3 == lVar8;
              if (bVar9) {
                *plVar1 = lVar3 + 1;
                lVar8 = lVar3;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
              local_60 = *(long *)(lVar5 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_0011202b:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      lVar5 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      if (cVar6 != '\0') goto LAB_00111f53;
    }
    cVar6 = String::operator==(param_1,"Node");
    if (cVar6 == '\0') {
      for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
        lVar5 = *(long *)(lVar2 + 0x20);
        if (lVar5 == 0) {
          local_60 = 0;
        }
        else {
          pcVar4 = *(char **)(lVar5 + 8);
          local_60 = 0;
          if (pcVar4 == (char *)0x0) {
            if (*(long *)(lVar5 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
            }
          }
          else {
            local_50 = strlen(pcVar4);
            local_58 = pcVar4;
            String::parse_latin1((StrRange *)&local_60);
          }
        }
        cVar6 = String::operator==(param_1,(String *)&local_60);
        lVar5 = local_60;
        if (local_60 != 0) {
          LOCK();
          plVar1 = (long *)(local_60 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void *)(lVar5 + -0x10),false);
          }
        }
        if (cVar6 != '\0') goto LAB_00111f53;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
      goto LAB_00112190;
    }
  }
LAB_00111f53:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00112190:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GeometryInstance3D::is_class(String const&) const */

undefined8 __thiscall GeometryInstance3D::is_class(GeometryInstance3D *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0011222f;
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
LAB_0011222f:
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
    if (cVar6 != '\0') goto LAB_001122e3;
  }
  cVar6 = String::operator==(param_1,"GeometryInstance3D");
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
              if (lVar5 == 0) goto LAB_001123a3;
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
LAB_001123a3:
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
      if (cVar6 != '\0') goto LAB_001122e3;
    }
    cVar6 = String::operator==(param_1,"VisualInstance3D");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = Node3D::is_class((Node3D *)this,param_1);
        return uVar7;
      }
      goto LAB_0011244c;
    }
  }
LAB_001122e3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011244c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Label3D::is_class(String const&) const */

undefined8 __thiscall Label3D::is_class(Label3D *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_001124cf;
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
LAB_001124cf:
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
    if (cVar5 != '\0') goto LAB_00112583;
  }
  cVar5 = String::operator==(param_1,"Label3D");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = GeometryInstance3D::is_class((GeometryInstance3D *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00112583:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Label3D::_validate_propertyv(PropertyInfo&) const */

void __thiscall Label3D::_validate_propertyv(Label3D *this,PropertyInfo *param_1)

{
  Node::_validate_property((PropertyInfo *)this);
  Node3D::_validate_property((PropertyInfo *)this);
  VisualInstance3D::_validate_property((PropertyInfo *)this);
  if ((code *)PTR__validate_property_00139020 != VisualInstance3D::_validate_property) {
    GeometryInstance3D::_validate_property((PropertyInfo *)this);
  }
  _validate_property(this,param_1);
  return;
}



/* Label3D::SurfaceData::~SurfaceData() */

void __thiscall Label3D::SurfaceData::~SurfaceData(SurfaceData *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(this + 0x58) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x58) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x58);
      *(undefined8 *)(this + 0x58) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x48) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x48) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x48);
      *(undefined8 *)(this + 0x48) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x38) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x38) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x38);
      *(undefined8 *)(this + 0x38) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x28) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x28) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x28);
      *(undefined8 *)(this + 0x28) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
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



/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)this;
  if (plVar5 == (long *)0x0) {
    return;
  }
  do {
    pvVar2 = (void *)*plVar5;
    if (pvVar2 == (void *)0x0) {
      if ((int)plVar5[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)((long)pvVar2 + 0x40) == plVar5) {
      lVar4 = *(long *)((long)pvVar2 + 0x30);
      lVar3 = *(long *)((long)pvVar2 + 0x38);
      *plVar5 = lVar4;
      if (pvVar2 == (void *)plVar5[1]) {
        plVar5[1] = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x30) = lVar4;
        lVar4 = *(long *)((long)pvVar2 + 0x30);
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x38) = lVar3;
      }
      if (*(long *)((long)pvVar2 + 0x20) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)((long)pvVar2 + 0x20) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *(long *)((long)pvVar2 + 0x20);
          *(undefined8 *)((long)pvVar2 + 0x20) = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + 0x10) != 0)) {
        StringName::unref();
      }
      if (*(long *)((long)pvVar2 + 8) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)((long)pvVar2 + 8) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *(long *)((long)pvVar2 + 8);
          *(undefined8 *)((long)pvVar2 + 8) = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      Memory::free_static(pvVar2,false);
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



/* MethodDefinition D_METHOD<char const*>(char const*, char const* const) */

char * D_METHOD<char_const*>(char *param_1,char *param_2)

{
  long in_FS_OFFSET;
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined1 *local_28 [3];
  long local_10;
  
  local_28[0] = local_38;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  D_METHODP(param_1,(char ***)param_2,(uint)local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Callable create_custom_callable_function_pointer<Label3D>(Label3D*, char const*, void
   (Label3D::*)()) */

Label3D * create_custom_callable_function_pointer<Label3D>
                    (Label3D *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC3;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0012f8c8;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Ref<TriangleMesh>::unref() */

void __thiscall Ref<TriangleMesh>::unref(Ref<TriangleMesh> *this)

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
        *(undefined8 *)this = 0;
        return;
      }
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<Label3D::SurfaceKey, Label3D::SurfaceData, Label3D::SurfaceKeyHasher,
   HashMapComparatorDefault<Label3D::SurfaceKey>,
   DefaultTypedAllocator<HashMapElement<Label3D::SurfaceKey, Label3D::SurfaceData> >
   >::operator[](Label3D::SurfaceKey const&) */

undefined1 (*) [16] __thiscall
HashMap<Label3D::SurfaceKey,Label3D::SurfaceData,Label3D::SurfaceKeyHasher,HashMapComparatorDefault<Label3D::SurfaceKey>,DefaultTypedAllocator<HashMapElement<Label3D::SurfaceKey,Label3D::SurfaceData>>>
::operator[](HashMap<Label3D::SurfaceKey,Label3D::SurfaceData,Label3D::SurfaceKeyHasher,HashMapComparatorDefault<Label3D::SurfaceKey>,DefaultTypedAllocator<HashMapElement<Label3D::SurfaceKey,Label3D::SurfaceData>>>
             *this,SurfaceKey *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  int iVar3;
  void *pvVar4;
  void *__s;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 (*pauVar38) [16];
  uint uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined1 (*pauVar42) [16];
  ulong uVar43;
  SurfaceKey *pSVar44;
  uint uVar45;
  int iVar46;
  uint uVar47;
  long lVar48;
  ulong uVar49;
  long lVar50;
  long lVar51;
  undefined8 uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  undefined1 (*pauVar56) [16];
  long in_FS_OFFSET;
  void *local_178;
  SurfaceData local_148 [8];
  undefined8 local_140 [2];
  undefined8 local_130 [2];
  undefined8 local_120 [2];
  undefined8 local_110 [2];
  undefined8 local_100 [2];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined8 uStack_c0;
  SurfaceData local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_178 = *(void **)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar47 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar40 = CONCAT44(0,uVar47);
  if ((local_178 != (void *)0x0) && (*(int *)(this + 0x2c) != 0)) {
    uVar43 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar45 = 0x7f07c65;
    pSVar44 = param_1;
    do {
      iVar46 = *(int *)pSVar44;
      pSVar44 = pSVar44 + 4;
      uVar45 = (iVar46 * 0x16a88000 | (uint)(iVar46 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar45;
      uVar45 = (uVar45 << 0xd | uVar45 >> 0x13) * 5 + 0xe6546b64;
    } while (pSVar44 != param_1 + 0x10);
    uVar45 = (uVar45 >> 0x10 ^ uVar45 ^ 0x10) * -0x7a143595;
    uVar45 = (uVar45 ^ uVar45 >> 0xd) * -0x3d4d51cb;
    uVar55 = uVar45 ^ uVar45 >> 0x10;
    if (uVar45 == uVar45 >> 0x10) {
      uVar55 = 1;
      uVar49 = uVar43;
    }
    else {
      uVar49 = uVar55 * uVar43;
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar40;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar49;
    lVar48 = SUB168(auVar6 * auVar22,8);
    uVar45 = *(uint *)(*(long *)(this + 0x10) + lVar48 * 4);
    uVar53 = SUB164(auVar6 * auVar22,8);
    if (uVar45 != 0) {
      uVar54 = 0;
      do {
        if (((uVar55 == uVar45) &&
            (lVar48 = *(long *)((long)local_178 + lVar48 * 8),
            *(long *)(lVar48 + 0x10) == *(long *)param_1)) &&
           (*(long *)(lVar48 + 0x18) == *(long *)(param_1 + 8))) {
          pauVar42 = *(undefined1 (**) [16])((long)local_178 + (ulong)uVar53 * 8);
          goto LAB_001132ef;
        }
        uVar54 = uVar54 + 1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = (uVar53 + 1) * uVar43;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar40;
        lVar48 = SUB168(auVar7 * auVar23,8);
        uVar45 = *(uint *)(*(long *)(this + 0x10) + lVar48 * 4);
        uVar53 = SUB164(auVar7 * auVar23,8);
      } while ((uVar45 != 0) &&
              (auVar8._8_8_ = 0, auVar8._0_8_ = uVar45 * uVar43, auVar24._8_8_ = 0,
              auVar24._0_8_ = uVar40, auVar9._8_8_ = 0,
              auVar9._0_8_ = ((uVar53 + uVar47) - SUB164(auVar8 * auVar24,8)) * uVar43,
              auVar25._8_8_ = 0, auVar25._0_8_ = uVar40, uVar54 <= SUB164(auVar9 * auVar25,8)));
    }
  }
  local_140[0] = 0;
  local_e8 = 0;
  local_130[0] = 0;
  local_120[0] = 0;
  local_110[0] = 0;
  local_100[0] = 0;
  local_f0 = 0;
  local_e0 = 0;
  if (local_178 == (void *)0x0) {
    uVar43 = uVar40 * 4;
    uVar49 = uVar40 * 8;
    uVar41 = Memory::alloc_static(uVar43,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    local_178 = (void *)Memory::alloc_static(uVar49,false);
    *(void **)(this + 8) = local_178;
    if (uVar47 != 0) {
      pvVar4 = *(void **)(this + 0x10);
      if ((pvVar4 < (void *)((long)local_178 + uVar49)) &&
         (local_178 < (void *)((long)pvVar4 + uVar43))) {
        uVar43 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar43 * 4) = 0;
          *(undefined8 *)((long)local_178 + uVar43 * 8) = 0;
          uVar43 = uVar43 + 1;
        } while (uVar40 != uVar43);
        goto LAB_00113383;
      }
      memset(pvVar4,0,uVar43);
      memset(local_178,0,uVar49);
      iVar46 = *(int *)(this + 0x2c);
      goto LAB_00113387;
    }
    iVar46 = *(int *)(this + 0x2c);
    if (local_178 != (void *)0x0) goto LAB_00113387;
  }
  else {
LAB_00113383:
    iVar46 = *(int *)(this + 0x2c);
LAB_00113387:
    if (iVar46 != 0) {
      uVar43 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4));
      uVar40 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar45 = 0x7f07c65;
      pSVar44 = param_1;
      do {
        iVar3 = *(int *)pSVar44;
        pSVar44 = pSVar44 + 4;
        uVar45 = (iVar3 * 0x16a88000 | (uint)(iVar3 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar45;
        uVar45 = (uVar45 << 0xd | uVar45 >> 0x13) * 5 + 0xe6546b64;
      } while (pSVar44 != param_1 + 0x10);
      uVar45 = (uVar45 >> 0x10 ^ uVar45 ^ 0x10) * -0x7a143595;
      uVar45 = (uVar45 ^ uVar45 >> 0xd) * -0x3d4d51cb;
      uVar55 = uVar45 ^ uVar45 >> 0x10;
      if (uVar45 == uVar45 >> 0x10) {
        uVar55 = 1;
        uVar49 = uVar40;
      }
      else {
        uVar49 = uVar55 * uVar40;
      }
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar43;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar49;
      lVar48 = SUB168(auVar10 * auVar26,8);
      uVar45 = *(uint *)(*(long *)(this + 0x10) + lVar48 * 4);
      uVar53 = SUB164(auVar10 * auVar26,8);
      if (uVar45 != 0) {
        uVar54 = 0;
        do {
          if (((uVar45 == uVar55) &&
              (lVar48 = *(long *)((long)local_178 + lVar48 * 8),
              *(long *)(lVar48 + 0x10) == *(long *)param_1)) &&
             (*(long *)(lVar48 + 0x18) == *(long *)(param_1 + 8))) {
            lVar48 = *(long *)((long)local_178 + (ulong)uVar53 * 8);
            if (*(long *)(lVar48 + 0x28) != 0) {
              CowData<Vector3>::_ref((CowData<Vector3> *)(lVar48 + 0x28),(CowData *)local_140);
            }
            if (*(long *)(lVar48 + 0x38) != 0) {
              CowData<Vector3>::_ref((CowData<Vector3> *)(lVar48 + 0x38),(CowData *)local_130);
            }
            if (*(long *)(lVar48 + 0x48) != 0) {
              CowData<float>::_ref((CowData<float> *)(lVar48 + 0x48),(CowData *)local_120);
            }
            if (*(long *)(lVar48 + 0x58) != 0) {
              CowData<Color>::_ref((CowData<Color> *)(lVar48 + 0x58),(CowData *)local_110);
            }
            if (*(long *)(lVar48 + 0x68) != 0) {
              CowData<Vector2>::_ref((CowData<Vector2> *)(lVar48 + 0x68),(CowData *)local_100);
            }
            if (*(long *)(lVar48 + 0x78) != 0) {
              CowData<int>::_ref((CowData<int> *)(lVar48 + 0x78),(CowData *)&local_f0);
            }
            *(undefined8 *)(lVar48 + 0x80) = 0;
            *(undefined8 *)(lVar48 + 0x88) = local_e0;
            pauVar42 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar53 * 8);
            goto LAB_001139e7;
          }
          uVar54 = uVar54 + 1;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (uVar53 + 1) * uVar40;
          auVar27._8_8_ = 0;
          auVar27._0_8_ = uVar43;
          lVar48 = SUB168(auVar11 * auVar27,8);
          uVar45 = *(uint *)(*(long *)(this + 0x10) + lVar48 * 4);
          uVar53 = SUB164(auVar11 * auVar27,8);
        } while ((uVar45 != 0) &&
                (auVar12._8_8_ = 0, auVar12._0_8_ = uVar45 * uVar40, auVar28._8_8_ = 0,
                auVar28._0_8_ = uVar43, auVar13._8_8_ = 0,
                auVar13._0_8_ =
                     ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4) +
                      uVar53) - SUB164(auVar12 * auVar28,8)) * uVar40, auVar29._8_8_ = 0,
                auVar29._0_8_ = uVar43, uVar54 <= SUB164(auVar13 * auVar29,8)));
      }
    }
  }
  if ((float)uVar47 * __LC63 < (float)(iVar46 + 1)) {
    uVar47 = *(uint *)(this + 0x28);
    if (uVar47 == 0x1c) {
      pauVar42 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_001139e7;
    }
    uVar40 = (ulong)(uVar47 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar45 = *(uint *)(hash_table_size_primes + (ulong)uVar47 * 4);
    if (uVar47 + 1 < 2) {
      uVar40 = 2;
    }
    uVar47 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar49 = (ulong)uVar47;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar4 = *(void **)(this + 0x10);
    uVar40 = uVar49 * 4;
    uVar43 = uVar49 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar43,false);
    *(void **)(this + 8) = __s_00;
    if (uVar47 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar43)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar49 != uVar40);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar43);
      }
    }
    if (uVar45 != 0) {
      uVar40 = 0;
      do {
        uVar47 = *(uint *)((long)pvVar4 + uVar40 * 4);
        if (uVar47 != 0) {
          lVar48 = *(long *)(this + 0x10);
          uVar54 = 0;
          uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar43 = CONCAT44(0,uVar55);
          lVar5 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar14._8_8_ = 0;
          auVar14._0_8_ = (ulong)uVar47 * lVar5;
          auVar30._8_8_ = 0;
          auVar30._0_8_ = uVar43;
          lVar50 = SUB168(auVar14 * auVar30,8);
          puVar1 = (uint *)(lVar48 + lVar50 * 4);
          iVar46 = SUB164(auVar14 * auVar30,8);
          uVar53 = *puVar1;
          uVar41 = *(undefined8 *)((long)local_178 + uVar40 * 8);
          while (uVar53 != 0) {
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)uVar53 * lVar5;
            auVar31._8_8_ = 0;
            auVar31._0_8_ = uVar43;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = (ulong)((uVar55 + iVar46) - SUB164(auVar15 * auVar31,8)) * lVar5;
            auVar32._8_8_ = 0;
            auVar32._0_8_ = uVar43;
            uVar39 = SUB164(auVar16 * auVar32,8);
            uVar52 = uVar41;
            if (uVar39 < uVar54) {
              *puVar1 = uVar47;
              puVar2 = (undefined8 *)((long)__s_00 + lVar50 * 8);
              uVar52 = *puVar2;
              *puVar2 = uVar41;
              uVar47 = uVar53;
              uVar54 = uVar39;
            }
            uVar54 = uVar54 + 1;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = (ulong)(iVar46 + 1) * lVar5;
            auVar33._8_8_ = 0;
            auVar33._0_8_ = uVar43;
            lVar50 = SUB168(auVar17 * auVar33,8);
            puVar1 = (uint *)(lVar48 + lVar50 * 4);
            iVar46 = SUB164(auVar17 * auVar33,8);
            uVar41 = uVar52;
            uVar53 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar50 * 8) = uVar41;
          *puVar1 = uVar47;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar40 != uVar45);
      Memory::free_static(local_178,false);
      Memory::free_static(pvVar4,false);
    }
  }
  local_d8 = (undefined1  [16])0x0;
  local_b0 = 0;
  local_c8 = *(undefined8 *)param_1;
  uStack_c0 = *(undefined8 *)(param_1 + 8);
  local_a0 = 0;
  local_90 = 0;
  local_80 = 0;
  local_70 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = local_e0;
  pauVar42 = (undefined1 (*) [16])operator_new(0x90,"");
  *(undefined8 *)(pauVar42[2] + 8) = 0;
  *(undefined8 *)(pauVar42[3] + 8) = 0;
  *(undefined8 *)(pauVar42[4] + 8) = 0;
  *(undefined8 *)(pauVar42[5] + 8) = 0;
  *(undefined8 *)(pauVar42[6] + 8) = 0;
  *(undefined8 *)(pauVar42[7] + 8) = 0;
  *(undefined8 *)pauVar42[8] = 0;
  *pauVar42 = (undefined1  [16])0x0;
  *(undefined8 *)pauVar42[1] = local_c8;
  *(undefined8 *)(pauVar42[1] + 8) = uStack_c0;
  *(undefined8 *)(pauVar42[8] + 8) = local_50;
  Label3D::SurfaceData::~SurfaceData(local_b8);
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar42;
  }
  else {
    *puVar2 = pauVar42;
    *(undefined8 **)(*pauVar42 + 8) = puVar2;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar42;
  uVar47 = 0x7f07c65;
  pSVar44 = param_1 + 0x10;
  do {
    iVar46 = *(int *)param_1;
    param_1 = param_1 + 4;
    uVar47 = (iVar46 * 0x16a88000 | (uint)(iVar46 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar47;
    uVar47 = (uVar47 << 0xd | uVar47 >> 0x13) * 5 + 0xe6546b64;
  } while (param_1 != pSVar44);
  uVar47 = (uVar47 >> 0x10 ^ uVar47 ^ 0x10) * -0x7a143595;
  uVar45 = (uVar47 ^ uVar47 >> 0xd) * -0x3d4d51cb;
  uVar47 = uVar45 ^ uVar45 >> 0x10;
  if (uVar45 == uVar45 >> 0x10) {
    uVar40 = 1;
    uVar47 = 1;
  }
  else {
    uVar40 = (ulong)uVar47;
  }
  uVar53 = 0;
  lVar48 = *(long *)(this + 0x10);
  lVar5 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar45 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar43 = CONCAT44(0,uVar45);
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar40 * lVar5;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = uVar43;
  lVar51 = SUB168(auVar18 * auVar34,8);
  lVar50 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar48 + lVar51 * 4);
  iVar46 = SUB164(auVar18 * auVar34,8);
  uVar55 = *puVar1;
  pauVar38 = pauVar42;
  while (uVar55 != 0) {
    auVar19._8_8_ = 0;
    auVar19._0_8_ = (ulong)uVar55 * lVar5;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar43;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = (ulong)((iVar46 + uVar45) - SUB164(auVar19 * auVar35,8)) * lVar5;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = uVar43;
    uVar54 = SUB164(auVar20 * auVar36,8);
    pauVar56 = pauVar38;
    if (uVar54 < uVar53) {
      *puVar1 = uVar47;
      puVar2 = (undefined8 *)(lVar50 + lVar51 * 8);
      pauVar56 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar38;
      uVar47 = uVar55;
      uVar53 = uVar54;
    }
    uVar53 = uVar53 + 1;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = (ulong)(iVar46 + 1) * lVar5;
    auVar37._8_8_ = 0;
    auVar37._0_8_ = uVar43;
    lVar51 = SUB168(auVar21 * auVar37,8);
    puVar1 = (uint *)(lVar48 + lVar51 * 4);
    iVar46 = SUB164(auVar21 * auVar37,8);
    pauVar38 = pauVar56;
    uVar55 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar50 + lVar51 * 8) = pauVar38;
  *puVar1 = uVar47;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_001139e7:
  Label3D::SurfaceData::~SurfaceData(local_148);
LAB_001132ef:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar42 + 2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Ref<Font>::unref() */

void __thiscall Ref<Font>::unref(Ref<Font> *this)

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
        *(undefined8 *)this = 0;
        return;
      }
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* HashMap<Label3D::SurfaceKey, Label3D::SurfaceData, Label3D::SurfaceKeyHasher,
   HashMapComparatorDefault<Label3D::SurfaceKey>,
   DefaultTypedAllocator<HashMapElement<Label3D::SurfaceKey, Label3D::SurfaceData> > >::~HashMap()
    */

void __thiscall
HashMap<Label3D::SurfaceKey,Label3D::SurfaceData,Label3D::SurfaceKeyHasher,HashMapComparatorDefault<Label3D::SurfaceKey>,DefaultTypedAllocator<HashMapElement<Label3D::SurfaceKey,Label3D::SurfaceData>>>
::~HashMap(HashMap<Label3D::SurfaceKey,Label3D::SurfaceData,Label3D::SurfaceKeyHasher,HashMapComparatorDefault<Label3D::SurfaceKey>,DefaultTypedAllocator<HashMapElement<Label3D::SurfaceKey,Label3D::SurfaceData>>>
           *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(this + 8);
  if (pvVar5 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar2 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar4 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar4) != 0) {
          pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
          *(int *)(*(long *)(this + 0x10) + lVar4) = 0;
          if (*(long *)((long)pvVar5 + 0x78) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)((long)pvVar5 + 0x78) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar3 = *(long *)((long)pvVar5 + 0x78);
              *(undefined8 *)((long)pvVar5 + 0x78) = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          if (*(long *)((long)pvVar5 + 0x68) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)((long)pvVar5 + 0x68) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar3 = *(long *)((long)pvVar5 + 0x68);
              *(undefined8 *)((long)pvVar5 + 0x68) = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          if (*(long *)((long)pvVar5 + 0x58) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)((long)pvVar5 + 0x58) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar3 = *(long *)((long)pvVar5 + 0x58);
              *(undefined8 *)((long)pvVar5 + 0x58) = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          if (*(long *)((long)pvVar5 + 0x48) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)((long)pvVar5 + 0x48) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar3 = *(long *)((long)pvVar5 + 0x48);
              *(undefined8 *)((long)pvVar5 + 0x48) = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          if (*(long *)((long)pvVar5 + 0x38) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)((long)pvVar5 + 0x38) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar3 = *(long *)((long)pvVar5 + 0x38);
              *(undefined8 *)((long)pvVar5 + 0x38) = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          if (*(long *)((long)pvVar5 + 0x28) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)((long)pvVar5 + 0x28) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar3 = *(long *)((long)pvVar5 + 0x28);
              *(undefined8 *)((long)pvVar5 + 0x28) = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          Memory::free_static(pvVar5,false);
          pvVar5 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
        }
        lVar4 = lVar4 + 4;
      } while (lVar4 != (ulong)uVar2 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar5 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar5,false);
  Memory::free_static(*(void **)(this + 0x10),false);
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



/* godot::details::enum_qualified_name_to_class_info_name(String const&) */

details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  long local_60;
  char local_58 [8];
  long *local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::split(local_58,SUB81(param_1,0),0x113dfd);
  if ((local_50 != (long *)0x0) && (2 < local_50[-1])) {
    local_60 = 0;
    local_48 = &_LC69;
    local_40 = 1;
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == (long *)0x0) {
      lVar7 = 0;
      lVar6 = -2;
    }
    else {
      lVar7 = local_50[-1];
      lVar6 = lVar7 + -2;
      if (-1 < lVar6) {
        String::operator+((String *)&local_48,(String *)(local_50 + lVar6));
        String::operator+((String *)this,(String *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        goto LAB_00113edd;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar7,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  local_60 = 0;
  local_48 = &_LC69;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)this);
  lVar7 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
  }
LAB_00113edd:
  plVar1 = local_50;
  if (local_50 != (long *)0x0) {
    LOCK();
    plVar5 = local_50 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_50 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar7 = local_50[-1];
      local_50 = (long *)0x0;
      if (lVar7 != 0) {
        lVar6 = 0;
        plVar5 = plVar1;
        do {
          if (*plVar5 != 0) {
            LOCK();
            plVar2 = (long *)(*plVar5 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar3 = *plVar5;
              *plVar5 = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar7 != lVar6);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<Label3D::AlphaCutMode, void>::get_class_info() */

GetTypeInfo<Label3D::AlphaCutMode,void> * __thiscall
GetTypeInfo<Label3D::AlphaCutMode,void>::get_class_info
          (GetTypeInfo<Label3D::AlphaCutMode,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "Label3D::AlphaCutMode";
  local_40 = 0x15;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
  lVar2 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<BaseMaterial3D::TextureFilter>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<BaseMaterial3D::TextureFilter>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "BaseMaterial3D::TextureFilter";
  local_40 = 0x1d;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 0x10006;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
  lVar2 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TextServer::StructuredTextParser>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<TextServer::StructuredTextParser>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "TextServer::StructuredTextParser";
  local_40 = 0x20;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 0x10006;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
  lVar2 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TextServer::AutowrapMode>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<TextServer::AutowrapMode>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "TextServer::AutowrapMode";
  local_40 = 0x18;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 0x10006;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
  lVar2 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<HorizontalAlignment>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<HorizontalAlignment>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "HorizontalAlignment";
  local_40 = 0x13;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 0x10006;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
  lVar2 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<BaseMaterial3D::BillboardMode>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<BaseMaterial3D::BillboardMode>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "BaseMaterial3D::BillboardMode";
  local_40 = 0x1d;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 0x10006;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
  lVar2 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TextServer::Direction>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<TextServer::Direction>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "TextServer::Direction";
  local_40 = 0x15;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 0x10006;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
  lVar2 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<VerticalAlignment>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<VerticalAlignment>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "VerticalAlignment";
  local_40 = 0x11;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 0x10006;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
  lVar2 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<BitField<TextServer::JustificationFlag>>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTRC<BitField<TextServer::JustificationFlag>>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "TextServer::JustificationFlag";
  local_40 = 0x1d;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 0x206;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
  lVar2 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<BaseMaterial3D::AlphaAntiAliasing>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<BaseMaterial3D::AlphaAntiAliasing>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "BaseMaterial3D::AlphaAntiAliasing";
  local_40 = 0x21;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 0x10006;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
  lVar2 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Label3D::AlphaCutMode>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Label3D::AlphaCutMode>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_30 = 0x15;
  local_38 = "Label3D::AlphaCutMode";
  String::parse_latin1((StrRange *)&local_40);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_38,(String *)&local_40);
  StringName::StringName((StringName *)&local_48,(String *)&local_38,false);
  *puVar4 = 2;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 0x10006;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != 0)) {
    StringName::unref();
  }
  pcVar3 = local_38;
  if (local_38 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_38 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_38 = (char *)0x0;
      Memory::free_static(pcVar3 + -0x10,false);
    }
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
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<Label3D, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Label3D,void>::call
          (CallableCustomMethodPointer<Label3D,void> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar5 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar5 << 8);
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      local_48 = (char *)(uVar5 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    uVar5 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar5 != (*puVar4 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0011515f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0011515f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00115138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00115221;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011515f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC87,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00115221:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Node3D::_get_property_listv(Node3D *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  CowData<char32_t> *local_b8;
  StringName *local_b0;
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
    local_88 = 0;
    local_90 = 0;
    local_78 = "Node";
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_90);
    local_78 = "Node";
    local_98 = 0;
    local_70 = 4;
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
LAB_0011568d:
      local_50 = 0x80;
      StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0011568d;
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
    local_b8 = (CowData<char32_t> *)&local_70;
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref(local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    if ((StringName::configured != '\0') && (local_88 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_78,"Node",false);
    ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  local_b0 = (StringName *)&local_68;
  local_b8 = (CowData<char32_t> *)&local_70;
  local_88 = 0;
  local_78 = "Node3D";
  local_90 = 0;
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Node3D";
  local_98 = 0;
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref(local_b8,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_001153c0:
    local_50 = 0x80;
    StringName::operator=(local_b0,(StringName *)&local_88);
LAB_001153cf:
    lVar2 = *(long *)param_1;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001153c0;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
      goto LAB_001153cf;
    }
    StringName::unref();
    lVar2 = *(long *)param_1;
    local_68 = local_80;
  }
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)local_b8);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_b0);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Node3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (!param_2) goto LAB_0011553f;
  local_88 = 0;
  local_90 = 0;
  local_78 = "Node";
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Node";
  local_98 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref(local_b8,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00115850:
    local_50 = 0x80;
    StringName::operator=(local_b0,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00115850;
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
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Node",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
LAB_0011553f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualInstance3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
VisualInstance3D::_get_property_listv(VisualInstance3D *this,List *param_1,bool param_2)

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
    Node3D::_get_property_listv((Node3D *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "VisualInstance3D";
  local_70 = 0x10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "VisualInstance3D";
  local_98 = 0;
  local_70 = 0x10;
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
LAB_00115b18:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00115b18;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00115b35;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00115b35:
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
  StringName::StringName((StringName *)&local_78,"VisualInstance3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node3D::_get_property_listv((Node3D *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GeometryInstance3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
GeometryInstance3D::_get_property_listv(GeometryInstance3D *this,List *param_1,bool param_2)

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
    VisualInstance3D::_get_property_listv((VisualInstance3D *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "GeometryInstance3D";
  local_70 = 0x12;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GeometryInstance3D";
  local_98 = 0;
  local_70 = 0x12;
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
LAB_00115f68:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00115f68;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00115f85;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00115f85:
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
  *(long **)(puVar5 + 0x10) = plVar1;
  *(undefined8 *)(puVar5 + 0xc) = 0;
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
  StringName::StringName((StringName *)&local_78,"GeometryInstance3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_00139028 != Object::_get_property_list) {
    GeometryInstance3D::_get_property_list((List *)this);
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      VisualInstance3D::_get_property_listv((VisualInstance3D *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Label3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Label3D::_get_property_listv(Label3D *this,List *param_1,bool param_2)

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
    GeometryInstance3D::_get_property_listv((GeometryInstance3D *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Label3D";
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Label3D";
  local_98 = 0;
  local_70 = 7;
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
LAB_001163e8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001163e8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00116405;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00116405:
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
  StringName::StringName((StringName *)&local_78,"Label3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      GeometryInstance3D::_get_property_listv((GeometryInstance3D *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, Label3D::DrawFlags>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool,Label3D::DrawFlags>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  char *local_78;
  undefined8 local_70;
  long local_40;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = 0;
  if (in_EDX == 0) {
    local_90 = 0;
    local_a0 = (undefined1  [16])0x0;
    local_88 = 0;
    local_78 = "Label3D::DrawFlags";
    local_80 = 6;
    local_c0 = 0;
    local_70 = 0x12;
    String::parse_latin1((StrRange *)&local_c0);
    godot::details::enum_qualified_name_to_class_info_name((details *)&local_b8,(String *)&local_c0)
    ;
    StringName::StringName((StringName *)&local_b0,(String *)&local_b8,false);
    local_c8 = 0;
    local_d0 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,2,(CowData<char32_t> *)&local_d0,0,
               (CowData<char32_t> *)&local_c8,0x10006,(StringName *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    if ((StringName::configured != '\0') && (local_b0 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    PropertyInfo::operator=((PropertyInfo *)&local_a8,(PropertyInfo *)&local_78);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
    uVar2 = local_a0._0_8_;
    uVar3 = local_a0._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_a0._8_8_;
    local_a0 = auVar1 << 0x40;
    *puVar4 = (undefined4)local_a8;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_90;
    *(undefined8 *)(puVar4 + 8) = local_88;
    puVar4[10] = local_80;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
    goto LAB_00116852;
  }
  local_b0 = 0;
  local_70 = 0;
  local_78 = "";
  String::parse_latin1((StrRange *)&local_b0);
  local_b8 = 0;
  *puVar4 = 1;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_b0 == 0) {
    puVar4[10] = 6;
LAB_00116937:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_a8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_b0);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_00116937;
    StringName::StringName((StringName *)&local_78,(String *)(puVar4 + 8),false);
    if (*(char **)(puVar4 + 4) == local_78) {
      if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(char **)(puVar4 + 4) = local_78;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_a8 != 0)) {
    StringName::unref();
  }
LAB_00116852:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<bool>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
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
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_001169e9;
  local_78 = 0;
  local_68 = &_LC3;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00116ae5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00116ae5;
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
  *puVar5 = local_68._0_4_;
  if (*(long *)(puVar5 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_50;
  if (*(long *)(puVar5 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_001169e9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<Ref<Font> const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Ref<Font>const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
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
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar4 = 0;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 6;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00116c59;
  local_78 = 0;
  local_68 = &_LC18;
  local_80 = 0;
  local_60._0_8_ = 4;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x18);
  local_50 = 0x11;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00116e15:
    local_40 = 6;
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
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 == 0x11) goto LAB_00116e15;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar4 = local_68._0_4_;
  if (*(long *)(puVar4 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 2));
    uVar2 = local_60._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *(undefined8 *)(puVar4 + 2) = uVar2;
  }
  if (*(long *)(puVar4 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar2 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar4 + 4) = uVar2;
  }
  puVar4[6] = local_50;
  if (*(long *)(puVar4 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 8));
    lVar3 = local_48;
    local_48 = 0;
    *(long *)(puVar4 + 8) = lVar3;
  }
  puVar4[10] = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00116c59:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar4;
}



/* MethodBindT<Vector2 const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Vector2_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
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
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00116ec9;
  local_78 = 0;
  local_68 = &_LC3;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,5);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00116fc5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00116fc5;
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
  *puVar5 = local_68._0_4_;
  if (*(long *)(puVar5 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_50;
  if (*(long *)(puVar5 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00116ec9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
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
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00117139;
  local_78 = 0;
  local_68 = &_LC3;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,2);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00117235:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00117235;
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
  *puVar5 = local_68._0_4_;
  if (*(long *)(puVar5 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_50;
  if (*(long *)(puVar5 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00117139:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<Color const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Color_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
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
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_001173a9;
  local_78 = 0;
  local_68 = &_LC3;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x14);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_001174a5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_001174a5;
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
  *puVar5 = local_68._0_4_;
  if (*(long *)(puVar5 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_50;
  if (*(long *)(puVar5 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_001173a9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<Array>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Array>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  long local_88;
  long local_80;
  undefined8 local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00117619;
  local_88 = 0;
  local_68 = &_LC3;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_78 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x1c);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00117715:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00117715;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  *puVar5 = local_68._0_4_;
  if (*(long *)(puVar5 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_50;
  if (*(long *)(puVar5 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00117619:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<String const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<String_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
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
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00117879;
  local_78 = 0;
  local_68 = &_LC3;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,4);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00117975:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00117975;
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
  *puVar5 = local_68._0_4_;
  if (*(long *)(puVar5 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_50;
  if (*(long *)(puVar5 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00117879:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<float>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<float>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
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
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00117ae9;
  local_78 = 0;
  local_68 = &_LC3;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,3);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00117be5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00117be5;
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
  *puVar5 = local_68._0_4_;
  if (*(long *)(puVar5 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_50;
  if (*(long *)(puVar5 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00117ae9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<TextServer::StructuredTextParser>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<TextServer::StructuredTextParser>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long lVar5;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar6;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  details local_78 [8];
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar6 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar6 = 0;
  puVar6[6] = 0;
  *(undefined8 *)(puVar6 + 8) = 0;
  puVar6[10] = 6;
  *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_68 = "TextServer::StructuredTextParser";
    local_60._0_8_ = 0x20;
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(local_78,(String *)&local_80);
    StringName::StringName((StringName *)&local_70,(String *)local_78,false);
    local_60 = (undefined1  [16])0x0;
    local_88 = 0;
    local_90 = 0;
    local_68 = (char *)0x2;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0x10006;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    *puVar6 = local_68._0_4_;
    if (*(long *)(puVar6 + 2) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 2));
      uVar4 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8 *)(puVar6 + 2) = uVar4;
    }
    if (*(long *)(puVar6 + 4) != local_60._8_8_) {
      StringName::unref();
      uVar4 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8 *)(puVar6 + 4) = uVar4;
    }
    lVar5 = local_48;
    puVar6[6] = (undefined4)local_50;
    if (*(long *)(puVar6 + 8) == local_48) {
      puVar6[10] = local_40;
      if (local_48 != 0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
    }
    else {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 8));
      *(long *)(puVar6 + 8) = local_48;
      puVar6[10] = local_40;
    }
    if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
      StringName::unref();
    }
    uVar4 = local_60._0_8_;
    if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long *)(local_60._0_8_ + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = local_60._8_8_;
        local_60 = auVar3 << 0x40;
        Memory::free_static((void *)(uVar4 + -0x10),false);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<VerticalAlignment>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<VerticalAlignment>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long lVar5;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar6;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  details local_78 [8];
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar6 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar6 = 0;
  puVar6[6] = 0;
  *(undefined8 *)(puVar6 + 8) = 0;
  puVar6[10] = 6;
  *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_68 = "VerticalAlignment";
    local_60._0_8_ = 0x11;
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(local_78,(String *)&local_80);
    StringName::StringName((StringName *)&local_70,(String *)local_78,false);
    local_60 = (undefined1  [16])0x0;
    local_88 = 0;
    local_90 = 0;
    local_68 = (char *)0x2;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0x10006;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    *puVar6 = local_68._0_4_;
    if (*(long *)(puVar6 + 2) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 2));
      uVar4 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8 *)(puVar6 + 2) = uVar4;
    }
    if (*(long *)(puVar6 + 4) != local_60._8_8_) {
      StringName::unref();
      uVar4 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8 *)(puVar6 + 4) = uVar4;
    }
    lVar5 = local_48;
    puVar6[6] = (undefined4)local_50;
    if (*(long *)(puVar6 + 8) == local_48) {
      puVar6[10] = local_40;
      if (local_48 != 0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
    }
    else {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 8));
      *(long *)(puVar6 + 8) = local_48;
      puVar6[10] = local_40;
    }
    if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
      StringName::unref();
    }
    uVar4 = local_60._0_8_;
    if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long *)(local_60._0_8_ + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = local_60._8_8_;
        local_60 = auVar3 << 0x40;
        Memory::free_static((void *)(uVar4 + -0x10),false);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Label3D::AlphaCutMode>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Label3D::AlphaCutMode>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long lVar5;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar6;
  long in_FS_OFFSET;
  long local_90;
  details local_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar6 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar6 = 0;
  puVar6[6] = 0;
  *(undefined8 *)(puVar6 + 8) = 0;
  puVar6[10] = 6;
  *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_68 = "Label3D::AlphaCutMode";
    local_60._0_8_ = 0x15;
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(local_88,(String *)&local_80);
    StringName::StringName((StringName *)&local_90,(String *)local_88,false);
    local_60 = (undefined1  [16])0x0;
    local_78 = 0;
    local_70 = 0;
    local_68 = (char *)0x2;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0x10006;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_90 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    *puVar6 = local_68._0_4_;
    if (*(long *)(puVar6 + 2) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 2));
      uVar4 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8 *)(puVar6 + 2) = uVar4;
    }
    if (*(long *)(puVar6 + 4) != local_60._8_8_) {
      StringName::unref();
      uVar4 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8 *)(puVar6 + 4) = uVar4;
    }
    lVar5 = local_48;
    puVar6[6] = (undefined4)local_50;
    if (*(long *)(puVar6 + 8) == local_48) {
      puVar6[10] = local_40;
      if (local_48 != 0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
    }
    else {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 8));
      *(long *)(puVar6 + 8) = local_48;
      puVar6[10] = local_40;
    }
    if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
      StringName::unref();
    }
    uVar4 = local_60._0_8_;
    if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long *)(local_60._0_8_ + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = local_60._8_8_;
        local_60 = auVar3 << 0x40;
        Memory::free_static((void *)(uVar4 + -0x10),false);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TextServer::Direction>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<TextServer::Direction>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  details local_78 [8];
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar4 = 0;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 6;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_60._0_8_ = 0x15;
    local_68 = "TextServer::Direction";
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(local_78,(String *)&local_80);
    StringName::StringName((StringName *)&local_70,(String *)local_78,false);
    local_60 = (undefined1  [16])0x0;
    local_88 = 0;
    local_90 = 0;
    local_68 = (char *)0x2;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0x10006;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    *puVar4 = local_68._0_4_;
    if (*(long *)(puVar4 + 2) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 2));
      uVar2 = local_60._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *(undefined8 *)(puVar4 + 2) = uVar2;
    }
    if (*(long *)(puVar4 + 4) != local_60._8_8_) {
      StringName::unref();
      uVar2 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8 *)(puVar4 + 4) = uVar2;
    }
    puVar4[6] = (undefined4)local_50;
    if (*(long *)(puVar4 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 8));
      lVar3 = local_48;
      local_48 = 0;
      *(long *)(puVar4 + 8) = lVar3;
    }
    puVar4[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<BaseMaterial3D::BillboardMode>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<BaseMaterial3D::BillboardMode>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  details local_78 [8];
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar4 = 0;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 6;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_60._0_8_ = 0x1d;
    local_68 = "BaseMaterial3D::BillboardMode";
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(local_78,(String *)&local_80);
    StringName::StringName((StringName *)&local_70,(String *)local_78,false);
    local_60 = (undefined1  [16])0x0;
    local_88 = 0;
    local_90 = 0;
    local_68 = (char *)0x2;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0x10006;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    *puVar4 = local_68._0_4_;
    if (*(long *)(puVar4 + 2) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 2));
      uVar2 = local_60._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *(undefined8 *)(puVar4 + 2) = uVar2;
    }
    if (*(long *)(puVar4 + 4) != local_60._8_8_) {
      StringName::unref();
      uVar2 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8 *)(puVar4 + 4) = uVar2;
    }
    puVar4[6] = (undefined4)local_50;
    if (*(long *)(puVar4 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 8));
      lVar3 = local_48;
      local_48 = 0;
      *(long *)(puVar4 + 8) = lVar3;
    }
    puVar4[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<BaseMaterial3D::AlphaAntiAliasing>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<BaseMaterial3D::AlphaAntiAliasing>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  details local_78 [8];
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar4 = 0;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 6;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_60._0_8_ = 0x21;
    local_68 = "BaseMaterial3D::AlphaAntiAliasing";
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(local_78,(String *)&local_80);
    StringName::StringName((StringName *)&local_70,(String *)local_78,false);
    local_60 = (undefined1  [16])0x0;
    local_88 = 0;
    local_90 = 0;
    local_68 = (char *)0x2;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0x10006;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    *puVar4 = local_68._0_4_;
    if (*(long *)(puVar4 + 2) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 2));
      uVar2 = local_60._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *(undefined8 *)(puVar4 + 2) = uVar2;
    }
    if (*(long *)(puVar4 + 4) != local_60._8_8_) {
      StringName::unref();
      uVar2 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8 *)(puVar4 + 4) = uVar2;
    }
    puVar4[6] = (undefined4)local_50;
    if (*(long *)(puVar4 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 8));
      lVar3 = local_48;
      local_48 = 0;
      *(long *)(puVar4 + 8) = lVar3;
    }
    puVar4[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<BaseMaterial3D::TextureFilter>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<BaseMaterial3D::TextureFilter>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  details local_78 [8];
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar4 = 0;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 6;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_60._0_8_ = 0x1d;
    local_68 = "BaseMaterial3D::TextureFilter";
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(local_78,(String *)&local_80);
    StringName::StringName((StringName *)&local_70,(String *)local_78,false);
    local_60 = (undefined1  [16])0x0;
    local_88 = 0;
    local_90 = 0;
    local_68 = (char *)0x2;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0x10006;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    *puVar4 = local_68._0_4_;
    if (*(long *)(puVar4 + 2) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 2));
      uVar2 = local_60._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *(undefined8 *)(puVar4 + 2) = uVar2;
    }
    if (*(long *)(puVar4 + 4) != local_60._8_8_) {
      StringName::unref();
      uVar2 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8 *)(puVar4 + 4) = uVar2;
    }
    puVar4[6] = (undefined4)local_50;
    if (*(long *)(puVar4 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 8));
      lVar3 = local_48;
      local_48 = 0;
      *(long *)(puVar4 + 8) = lVar3;
    }
    puVar4[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<BitField<TextServer::JustificationFlag> >::_gen_argument_type_info(int) const */

undefined4 *
MethodBindT<BitField<TextServer::JustificationFlag>>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  details local_78 [8];
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar4 = 0;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 6;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_60._0_8_ = 0x1d;
    local_68 = "TextServer::JustificationFlag";
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(local_78,(String *)&local_80);
    StringName::StringName((StringName *)&local_70,(String *)local_78,false);
    local_60 = (undefined1  [16])0x0;
    local_88 = 0;
    local_90 = 0;
    local_68 = (char *)0x2;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0x206;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    *puVar4 = local_68._0_4_;
    if (*(long *)(puVar4 + 2) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 2));
      uVar2 = local_60._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *(undefined8 *)(puVar4 + 2) = uVar2;
    }
    if (*(long *)(puVar4 + 4) != local_60._8_8_) {
      StringName::unref();
      uVar2 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8 *)(puVar4 + 4) = uVar2;
    }
    puVar4[6] = (undefined4)local_50;
    if (*(long *)(puVar4 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 8));
      lVar3 = local_48;
      local_48 = 0;
      *(long *)(puVar4 + 8) = lVar3;
    }
    puVar4[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<HorizontalAlignment>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<HorizontalAlignment>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  details local_78 [8];
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar4 = 0;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 6;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_60._0_8_ = 0x13;
    local_68 = "HorizontalAlignment";
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(local_78,(String *)&local_80);
    StringName::StringName((StringName *)&local_70,(String *)local_78,false);
    local_60 = (undefined1  [16])0x0;
    local_88 = 0;
    local_90 = 0;
    local_68 = (char *)0x2;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0x10006;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    *puVar4 = local_68._0_4_;
    if (*(long *)(puVar4 + 2) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 2));
      uVar2 = local_60._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *(undefined8 *)(puVar4 + 2) = uVar2;
    }
    if (*(long *)(puVar4 + 4) != local_60._8_8_) {
      StringName::unref();
      uVar2 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8 *)(puVar4 + 4) = uVar2;
    }
    puVar4[6] = (undefined4)local_50;
    if (*(long *)(puVar4 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 8));
      lVar3 = local_48;
      local_48 = 0;
      *(long *)(puVar4 + 8) = lVar3;
    }
    puVar4[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TextServer::AutowrapMode>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<TextServer::AutowrapMode>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  details local_78 [8];
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar4 = 0;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 6;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_60._0_8_ = 0x18;
    local_68 = "TextServer::AutowrapMode";
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(local_78,(String *)&local_80);
    StringName::StringName((StringName *)&local_70,(String *)local_78,false);
    local_60 = (undefined1  [16])0x0;
    local_88 = 0;
    local_90 = 0;
    local_68 = (char *)0x2;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0x10006;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    *puVar4 = local_68._0_4_;
    if (*(long *)(puVar4 + 2) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 2));
      uVar2 = local_60._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *(undefined8 *)(puVar4 + 2) = uVar2;
    }
    if (*(long *)(puVar4 + 4) != local_60._8_8_) {
      StringName::unref();
      uVar2 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8 *)(puVar4 + 4) = uVar2;
    }
    puVar4[6] = (undefined4)local_50;
    if (*(long *)(puVar4 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 8));
      lVar3 = local_48;
      local_48 = 0;
      *(long *)(puVar4 + 8) = lVar3;
    }
    puVar4[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Label3D::DrawFlags, bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Label3D::DrawFlags,bool>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined1 local_70 [16];
  ulong local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_90 = 0;
    local_70._0_8_ = 0x12;
    local_78 = "Label3D::DrawFlags";
    String::parse_latin1((StrRange *)&local_90);
    godot::details::enum_qualified_name_to_class_info_name((details *)&local_88,(String *)&local_90)
    ;
    StringName::StringName((StringName *)&local_80,(String *)&local_88,false);
    local_70 = (undefined1  [16])0x0;
    local_98 = 0;
    local_a0 = 0;
    local_78 = (char *)0x2;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0x10006;
    StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  }
  else {
    if (in_EDX != 1) goto LAB_0011921a;
    local_88 = 0;
    local_90 = 0;
    local_78 = "";
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_70._8_8_;
    local_70 = auVar2 << 0x40;
    String::parse_latin1((StrRange *)&local_90);
    local_98 = 0;
    local_78 = (char *)CONCAT44(local_78._4_4_,1);
    local_60 = local_60 & 0xffffffff00000000;
    local_58 = 0;
    local_70 = (undefined1  [16])0x0;
    if (local_90 == 0) {
LAB_00119480:
      local_50 = 6;
      StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
      local_50 = 6;
      if ((int)local_60 != 0x11) goto LAB_00119480;
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_70._8_8_ == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_70._8_8_ = local_80;
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    if ((StringName::configured != '\0') && (local_88 != 0)) {
      StringName::unref();
    }
  }
  *puVar5 = local_78._0_4_;
  if (*(long *)(puVar5 + 2) != local_70._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_70._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_70._8_8_;
    local_70 = auVar1 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_70._8_8_) {
    StringName::unref();
    uVar3 = local_70._8_8_;
    local_70._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = (int)local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_58;
    local_58 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_50;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
LAB_0011921a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* Ref<TextServer>::unref() */

void __thiscall Ref<TextServer>::unref(Ref<TextServer> *this)

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
        *(undefined8 *)this = 0;
        return;
      }
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* MethodBind* create_method_bind<Label3D, HorizontalAlignment>(void
   (Label3D::*)(HorizontalAlignment)) */

MethodBind *
create_method_bind<Label3D,HorizontalAlignment>(_func_void_HorizontalAlignment *param_1)

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
  *(_func_void_HorizontalAlignment **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012f958;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Label3D";
  local_30 = 7;
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



/* MethodBind* create_method_bind<Label3D, HorizontalAlignment>(HorizontalAlignment (Label3D::*)()
   const) */

MethodBind * create_method_bind<Label3D,HorizontalAlignment>(_func_HorizontalAlignment *param_1)

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
  *(_func_HorizontalAlignment **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012f9b8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Label3D";
  local_30 = 7;
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



/* MethodBind* create_method_bind<Label3D, VerticalAlignment>(void (Label3D::*)(VerticalAlignment))
    */

MethodBind * create_method_bind<Label3D,VerticalAlignment>(_func_void_VerticalAlignment *param_1)

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
  *(_func_void_VerticalAlignment **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012fa18;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Label3D";
  local_30 = 7;
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



/* MethodBind* create_method_bind<Label3D, VerticalAlignment>(VerticalAlignment (Label3D::*)()
   const) */

MethodBind * create_method_bind<Label3D,VerticalAlignment>(_func_VerticalAlignment *param_1)

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
  *(_func_VerticalAlignment **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012fa78;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Label3D";
  local_30 = 7;
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



/* MethodBind* create_method_bind<Label3D, Color const&>(void (Label3D::*)(Color const&)) */

MethodBind * create_method_bind<Label3D,Color_const&>(_func_void_Color_ptr *param_1)

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
  *(_func_void_Color_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012fad8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Label3D";
  local_30 = 7;
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



/* MethodBind* create_method_bind<Label3D, Color>(Color (Label3D::*)() const) */

MethodBind * create_method_bind<Label3D,Color>(_func_Color *param_1)

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
  *(_func_Color **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012fb38;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Label3D";
  local_30 = 7;
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



/* MethodBind* create_method_bind<Label3D, String const&>(void (Label3D::*)(String const&)) */

MethodBind * create_method_bind<Label3D,String_const&>(_func_void_String_ptr *param_1)

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
  *(_func_void_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012fb98;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Label3D";
  local_30 = 7;
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



/* MethodBind* create_method_bind<Label3D, String>(String (Label3D::*)() const) */

MethodBind * create_method_bind<Label3D,String>(_func_String *param_1)

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
  *(_func_String **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012fbf8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Label3D";
  local_30 = 7;
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



/* MethodBind* create_method_bind<Label3D, TextServer::Direction>(void
   (Label3D::*)(TextServer::Direction)) */

MethodBind * create_method_bind<Label3D,TextServer::Direction>(_func_void_Direction *param_1)

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
  *(_func_void_Direction **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012fc58;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Label3D";
  local_30 = 7;
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



/* MethodBind* create_method_bind<Label3D, TextServer::Direction>(TextServer::Direction
   (Label3D::*)() const) */

MethodBind * create_method_bind<Label3D,TextServer::Direction>(_func_Direction *param_1)

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
  *(_func_Direction **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012fcb8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Label3D";
  local_30 = 7;
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



/* MethodBind* create_method_bind<Label3D, TextServer::StructuredTextParser>(void
   (Label3D::*)(TextServer::StructuredTextParser)) */

MethodBind *
create_method_bind<Label3D,TextServer::StructuredTextParser>
          (_func_void_StructuredTextParser *param_1)

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
  *(_func_void_StructuredTextParser **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012fd18;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Label3D";
  local_30 = 7;
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



/* MethodBind* create_method_bind<Label3D,
   TextServer::StructuredTextParser>(TextServer::StructuredTextParser (Label3D::*)() const) */

MethodBind *
create_method_bind<Label3D,TextServer::StructuredTextParser>(_func_StructuredTextParser *param_1)

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
  *(_func_StructuredTextParser **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012fd78;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Label3D";
  local_30 = 7;
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



/* MethodBind* create_method_bind<Label3D, Array>(void (Label3D::*)(Array)) */

MethodBind * create_method_bind<Label3D,Array>(_func_void_Array *param_1)

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
  *(_func_void_Array **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012fdd8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Label3D";
  local_30 = 7;
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



/* MethodBind* create_method_bind<Label3D, Array>(Array (Label3D::*)() const) */

MethodBind * create_method_bind<Label3D,Array>(_func_Array *param_1)

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
  *(_func_Array **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012fe38;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Label3D";
  local_30 = 7;
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



/* MethodBind* create_method_bind<Label3D, bool>(void (Label3D::*)(bool)) */

MethodBind * create_method_bind<Label3D,bool>(_func_void_bool *param_1)

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
  *(_func_void_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012fe98;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Label3D";
  local_30 = 7;
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



/* MethodBind* create_method_bind<Label3D, bool>(bool (Label3D::*)() const) */

MethodBind * create_method_bind<Label3D,bool>(_func_bool *param_1)

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
  *(_func_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012fef8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Label3D";
  local_30 = 7;
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



/* MethodBind* create_method_bind<Label3D, int>(void (Label3D::*)(int)) */

MethodBind * create_method_bind<Label3D,int>(_func_void_int *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0012ff58;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Label3D";
  local_30 = 7;
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



/* MethodBind* create_method_bind<Label3D, int>(int (Label3D::*)() const) */

MethodBind * create_method_bind<Label3D,int>(_func_int *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0012ffb8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Label3D";
  local_30 = 7;
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



/* MethodBind* create_method_bind<Label3D, Ref<Font> const&>(void (Label3D::*)(Ref<Font> const&)) */

MethodBind * create_method_bind<Label3D,Ref<Font>const&>(_func_void_Ref_ptr *param_1)

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
  *(_func_void_Ref_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00130018;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Label3D";
  local_30 = 7;
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



/* MethodBind* create_method_bind<Label3D, Ref<Font>>(Ref<Font> (Label3D::*)() const) */

MethodBind * create_method_bind<Label3D,Ref<Font>>(_func_Ref *param_1)

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
  *(_func_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00130078;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Label3D";
  local_30 = 7;
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



/* MethodBind* create_method_bind<Label3D, float>(void (Label3D::*)(float)) */

MethodBind * create_method_bind<Label3D,float>(_func_void_float *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_001300d8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Label3D";
  local_30 = 7;
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



/* MethodBind* create_method_bind<Label3D, float>(float (Label3D::*)() const) */

MethodBind * create_method_bind<Label3D,float>(_func_float *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00130138;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Label3D";
  local_30 = 7;
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



/* MethodBind* create_method_bind<Label3D, TextServer::AutowrapMode>(void
   (Label3D::*)(TextServer::AutowrapMode)) */

MethodBind * create_method_bind<Label3D,TextServer::AutowrapMode>(_func_void_AutowrapMode *param_1)

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
  *(_func_void_AutowrapMode **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00130198;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Label3D";
  local_30 = 7;
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



/* MethodBind* create_method_bind<Label3D, TextServer::AutowrapMode>(TextServer::AutowrapMode
   (Label3D::*)() const) */

MethodBind * create_method_bind<Label3D,TextServer::AutowrapMode>(_func_AutowrapMode *param_1)

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
  *(_func_AutowrapMode **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001301f8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Label3D";
  local_30 = 7;
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



/* MethodBind* create_method_bind<Label3D, BitField<TextServer::JustificationFlag> >(void
   (Label3D::*)(BitField<TextServer::JustificationFlag>)) */

MethodBind *
create_method_bind<Label3D,BitField<TextServer::JustificationFlag>>(_func_void_BitField *param_1)

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
  *(_func_void_BitField **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00130258;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Label3D";
  local_30 = 7;
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



/* MethodBind* create_method_bind<Label3D,
   BitField<TextServer::JustificationFlag>>(BitField<TextServer::JustificationFlag> (Label3D::*)()
   const) */

MethodBind *
create_method_bind<Label3D,BitField<TextServer::JustificationFlag>>(_func_BitField *param_1)

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
  *(_func_BitField **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001302b8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Label3D";
  local_30 = 7;
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



/* MethodBind* create_method_bind<Label3D, Vector2 const&>(void (Label3D::*)(Vector2 const&)) */

MethodBind * create_method_bind<Label3D,Vector2_const&>(_func_void_Vector2_ptr *param_1)

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
  *(_func_void_Vector2_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00130318;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Label3D";
  local_30 = 7;
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



/* MethodBind* create_method_bind<Label3D, Vector2>(Vector2 (Label3D::*)() const) */

MethodBind * create_method_bind<Label3D,Vector2>(_func_Vector2 *param_1)

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
  *(_func_Vector2 **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00130378;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Label3D";
  local_30 = 7;
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



/* MethodBind* create_method_bind<Label3D, Label3D::DrawFlags, bool>(void
   (Label3D::*)(Label3D::DrawFlags, bool)) */

MethodBind * create_method_bind<Label3D,Label3D::DrawFlags,bool>(_func_void_DrawFlags_bool *param_1)

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
  *(_func_void_DrawFlags_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001303d8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "Label3D";
  local_30 = 7;
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



/* MethodBind* create_method_bind<Label3D, bool, Label3D::DrawFlags>(bool
   (Label3D::*)(Label3D::DrawFlags) const) */

MethodBind * create_method_bind<Label3D,bool,Label3D::DrawFlags>(_func_bool_DrawFlags *param_1)

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
  *(_func_bool_DrawFlags **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00130438;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Label3D";
  local_30 = 7;
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



/* MethodBind* create_method_bind<Label3D, BaseMaterial3D::BillboardMode>(void
   (Label3D::*)(BaseMaterial3D::BillboardMode)) */

MethodBind *
create_method_bind<Label3D,BaseMaterial3D::BillboardMode>(_func_void_BillboardMode *param_1)

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
  *(_func_void_BillboardMode **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00130498;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Label3D";
  local_30 = 7;
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



/* MethodBind* create_method_bind<Label3D,
   BaseMaterial3D::BillboardMode>(BaseMaterial3D::BillboardMode (Label3D::*)() const) */

MethodBind * create_method_bind<Label3D,BaseMaterial3D::BillboardMode>(_func_BillboardMode *param_1)

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
  *(_func_BillboardMode **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001304f8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Label3D";
  local_30 = 7;
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



/* MethodBind* create_method_bind<Label3D, Label3D::AlphaCutMode>(void
   (Label3D::*)(Label3D::AlphaCutMode)) */

MethodBind * create_method_bind<Label3D,Label3D::AlphaCutMode>(_func_void_AlphaCutMode *param_1)

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
  *(_func_void_AlphaCutMode **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00130558;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Label3D";
  local_30 = 7;
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



/* MethodBind* create_method_bind<Label3D, Label3D::AlphaCutMode>(Label3D::AlphaCutMode
   (Label3D::*)() const) */

MethodBind * create_method_bind<Label3D,Label3D::AlphaCutMode>(_func_AlphaCutMode *param_1)

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
  *(_func_AlphaCutMode **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001305b8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Label3D";
  local_30 = 7;
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



/* MethodBind* create_method_bind<Label3D, BaseMaterial3D::AlphaAntiAliasing>(void
   (Label3D::*)(BaseMaterial3D::AlphaAntiAliasing)) */

MethodBind *
create_method_bind<Label3D,BaseMaterial3D::AlphaAntiAliasing>(_func_void_AlphaAntiAliasing *param_1)

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
  *(_func_void_AlphaAntiAliasing **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00130618;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Label3D";
  local_30 = 7;
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



/* MethodBind* create_method_bind<Label3D,
   BaseMaterial3D::AlphaAntiAliasing>(BaseMaterial3D::AlphaAntiAliasing (Label3D::*)() const) */

MethodBind *
create_method_bind<Label3D,BaseMaterial3D::AlphaAntiAliasing>(_func_AlphaAntiAliasing *param_1)

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
  *(_func_AlphaAntiAliasing **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00130678;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Label3D";
  local_30 = 7;
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



/* MethodBind* create_method_bind<Label3D, BaseMaterial3D::TextureFilter>(void
   (Label3D::*)(BaseMaterial3D::TextureFilter)) */

MethodBind *
create_method_bind<Label3D,BaseMaterial3D::TextureFilter>(_func_void_TextureFilter *param_1)

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
  *(_func_void_TextureFilter **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001306d8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Label3D";
  local_30 = 7;
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



/* MethodBind* create_method_bind<Label3D,
   BaseMaterial3D::TextureFilter>(BaseMaterial3D::TextureFilter (Label3D::*)() const) */

MethodBind * create_method_bind<Label3D,BaseMaterial3D::TextureFilter>(_func_TextureFilter *param_1)

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
  *(_func_TextureFilter **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00130738;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Label3D";
  local_30 = 7;
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



/* MethodBind* create_method_bind<Label3D, Ref<TriangleMesh>>(Ref<TriangleMesh> (Label3D::*)()
   const) */

MethodBind * create_method_bind<Label3D,Ref<TriangleMesh>>(_func_Ref *param_1)

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
  *(_func_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00130798;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Label3D";
  local_30 = 7;
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



/* HashMap<Label3D::SurfaceKey, Label3D::SurfaceData, Label3D::SurfaceKeyHasher,
   HashMapComparatorDefault<Label3D::SurfaceKey>,
   DefaultTypedAllocator<HashMapElement<Label3D::SurfaceKey, Label3D::SurfaceData> >
   >::_lookup_pos(Label3D::SurfaceKey const&, unsigned int&) const */

undefined8 __thiscall
HashMap<Label3D::SurfaceKey,Label3D::SurfaceData,Label3D::SurfaceKeyHasher,HashMapComparatorDefault<Label3D::SurfaceKey>,DefaultTypedAllocator<HashMapElement<Label3D::SurfaceKey,Label3D::SurfaceData>>>
::_lookup_pos(HashMap<Label3D::SurfaceKey,Label3D::SurfaceData,Label3D::SurfaceKeyHasher,HashMapComparatorDefault<Label3D::SurfaceKey>,DefaultTypedAllocator<HashMapElement<Label3D::SurfaceKey,Label3D::SurfaceData>>>
              *this,SurfaceKey *param_1,uint *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  uint uVar12;
  SurfaceKey *pSVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  
  if (*(long *)(this + 8) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar11 = 0x7f07c65;
    uVar2 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    pSVar13 = param_1;
    do {
      iVar1 = *(int *)pSVar13;
      pSVar13 = pSVar13 + 4;
      uVar11 = (iVar1 * 0x16a88000 | (uint)(iVar1 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar11;
      uVar11 = (uVar11 << 0xd | uVar11 >> 0x13) * 5 + 0xe6546b64;
    } while (param_1 + 0x10 != pSVar13);
    uVar11 = (uVar11 >> 0x10 ^ uVar11 ^ 0x10) * -0x7a143595;
    uVar11 = (uVar11 ^ uVar11 >> 0xd) * -0x3d4d51cb;
    uVar18 = uVar11 ^ uVar11 >> 0x10;
    if (uVar11 == uVar11 >> 0x10) {
      uVar18 = 1;
      uVar14 = uVar2;
    }
    else {
      uVar14 = uVar18 * uVar2;
    }
    uVar16 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4));
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar16;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar14;
    lVar15 = SUB168(auVar3 * auVar7,8);
    uVar11 = *(uint *)(*(long *)(this + 0x10) + lVar15 * 4);
    uVar12 = SUB164(auVar3 * auVar7,8);
    if (uVar11 != 0) {
      uVar17 = 0;
      do {
        if (((uVar18 == uVar11) &&
            (lVar15 = *(long *)(*(long *)(this + 8) + lVar15 * 8),
            *(long *)(lVar15 + 0x10) == *(long *)param_1)) &&
           (*(long *)(lVar15 + 0x18) == *(long *)(param_1 + 8))) {
          *param_2 = uVar12;
          return 1;
        }
        uVar17 = uVar17 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (uVar12 + 1) * uVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar16;
        lVar15 = SUB168(auVar4 * auVar8,8);
        uVar11 = *(uint *)(*(long *)(this + 0x10) + lVar15 * 4);
        uVar12 = SUB164(auVar4 * auVar8,8);
      } while ((uVar11 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = uVar11 * uVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar16, auVar6._8_8_ = 0,
              auVar6._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4)
                              + uVar12) - SUB164(auVar5 * auVar9,8)) * uVar2, auVar10._8_8_ = 0,
              auVar10._0_8_ = uVar16, uVar17 <= SUB164(auVar6 * auVar10,8)));
    }
    return 0;
  }
  return 0;
}



/* CowData<Vector3>::_realloc(long) */

undefined8 __thiscall CowData<Vector3>::_realloc(CowData<Vector3> *this,long param_1)

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



/* CowData<int>::_unref() */

void __thiscall CowData<int>::_unref(CowData<int> *this)

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



/* CowData<unsigned char>::_unref() */

void __thiscall CowData<unsigned_char>::_unref(CowData<unsigned_char> *this)

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



/* CowData<StringName>::_unref() */

void __thiscall CowData<StringName>::_unref(CowData<StringName> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  
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
      lVar2 = plVar1[-1];
      *(undefined8 *)this = 0;
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
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

{
  CowData<StringName>::_unref((CowData<StringName> *)(this + 0x10));
  if ((StringName::configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* Label3D::_initialize_classv() */

void Label3D::_initialize_classv(void)

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
    if (GeometryInstance3D::initialize_class()::initialized == '\0') {
      if (VisualInstance3D::initialize_class()::initialized == '\0') {
        if (Node3D::initialize_class()::initialized == '\0') {
          if (Node::initialize_class()::initialized == '\0') {
            Object::initialize_class();
            local_68 = 0;
            local_50 = 6;
            local_58 = "Object";
            String::parse_latin1((StrRange *)&local_68);
            StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
            local_58 = "Node";
            local_70 = 0;
            local_50 = 4;
            String::parse_latin1((StrRange *)&local_70);
            StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
            ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
            if ((StringName::configured != '\0') && (local_58 != (undefined *)0x0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
            if ((StringName::configured != '\0') && (local_60 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
            if ((code *)PTR__bind_methods_00139038 != Node::_bind_methods) {
              Node::_bind_methods();
            }
            Node::initialize_class()::initialized = '\x01';
          }
          local_58 = "Node";
          local_68 = 0;
          local_50 = 4;
          String::parse_latin1((StrRange *)&local_68);
          StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
          local_58 = "Node3D";
          local_70 = 0;
          local_50 = 6;
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
          Node3D::_bind_methods();
          Node3D::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Node3D";
        local_50 = 6;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "VisualInstance3D";
        local_70 = 0;
        local_50 = 0x10;
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
        VisualInstance3D::_bind_methods();
        VisualInstance3D::initialize_class()::initialized = '\x01';
      }
      local_58 = "VisualInstance3D";
      local_68 = 0;
      local_50 = 0x10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "GeometryInstance3D";
      local_70 = 0;
      local_50 = 0x12;
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
      if ((code *)PTR__bind_methods_00139030 != VisualInstance3D::_bind_methods) {
        GeometryInstance3D::_bind_methods();
      }
      GeometryInstance3D::initialize_class()::initialized = '\x01';
    }
    local_58 = "GeometryInstance3D";
    local_68 = 0;
    local_50 = 0x12;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "Label3D";
    local_70 = 0;
    local_50 = 7;
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
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<RID>::_realloc(long) */

undefined8 __thiscall CowData<RID>::_realloc(CowData<RID> *this,long param_1)

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
/* Error CowData<RID>::resize<false>(long) */

undefined8 __thiscall CowData<RID>::resize<false>(CowData<RID> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  
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
    lVar8 = 0;
    lVar3 = 0;
  }
  else {
    lVar8 = *(long *)(lVar3 + -8);
    if (param_1 == lVar8) {
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
    lVar3 = lVar8 * 8;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_0011ce60:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 8 - 1;
  uVar4 = uVar4 >> 1 | uVar4;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar7 = uVar4 + 1;
  if (lVar7 == 0) goto LAB_0011ce60;
  if (param_1 <= lVar8) {
    if ((lVar7 != lVar3) && (uVar6 = _realloc(this,lVar7), (int)uVar6 != 0)) {
      return uVar6;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (lVar7 == lVar3) {
LAB_0011cdcc:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_0011cd61;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_0011cdcc;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar3 = 0;
  }
  memset(puVar9 + lVar3,0,(param_1 - lVar3) * 8);
LAB_0011cd61:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<int>::_realloc(long) */

undefined8 __thiscall CowData<int>::_realloc(CowData<int> *this,long param_1)

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
/* Error CowData<int>::resize<false>(long) */

undefined8 __thiscall CowData<int>::resize<false>(CowData<int> *this,long param_1)

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
    lVar3 = lVar9 * 4;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 4 == 0) {
LAB_0011d150:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 4 - 1;
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar8 = uVar4 + 1;
  if (lVar8 == 0) goto LAB_0011d150;
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
        goto LAB_0011d061;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_0011d061:
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



/* CowData<Ref<Theme> >::_unref() */

void __thiscall CowData<Ref<Theme>>::_unref(CowData<Ref<Theme>> *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  code *pcVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  
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
  plVar1 = *(long **)this;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = plVar1[-1];
  *(undefined8 *)this = 0;
  if (lVar2 != 0) {
    lVar7 = 0;
    plVar6 = plVar1;
LAB_0011d2ed:
    do {
      if (*plVar6 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pOVar3 = (Object *)*plVar6;
          cVar5 = predelete_handler(pOVar3);
          if (cVar5 != '\0') {
            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 1;
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
            if (lVar2 == lVar7) break;
            goto LAB_0011d2ed;
          }
        }
      }
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar2 != lVar7);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
}



/* CowData<Ref<Theme> >::_realloc(long) */

undefined8 __thiscall CowData<Ref<Theme>>::_realloc(CowData<Ref<Theme>> *this,long param_1)

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
/* Error CowData<Ref<Theme> >::resize<false>(long) */

undefined8 __thiscall CowData<Ref<Theme>>::resize<false>(CowData<Ref<Theme>> *this,long param_1)

{
  long *plVar1;
  Object *pOVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  
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
    lVar7 = 0;
    lVar8 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar7) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar8 = lVar7 * 8;
    if (lVar8 != 0) {
      uVar9 = lVar8 - 1U | lVar8 - 1U >> 1;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = uVar9 | uVar9 >> 0x10;
      lVar8 = (uVar9 | uVar9 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_0011d6a0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar9 = param_1 * 8 - 1;
  uVar9 = uVar9 >> 1 | uVar9;
  uVar9 = uVar9 | uVar9 >> 2;
  uVar9 = uVar9 | uVar9 >> 4;
  uVar9 = uVar9 | uVar9 >> 8;
  uVar9 = uVar9 | uVar9 >> 0x10;
  uVar9 = uVar9 | uVar9 >> 0x20;
  lVar11 = uVar9 + 1;
  if (lVar11 == 0) goto LAB_0011d6a0;
  if (param_1 <= lVar7) {
    lVar7 = *(long *)this;
    uVar9 = param_1;
    while (lVar7 != 0) {
      if (*(ulong *)(lVar7 + -8) <= uVar9) {
LAB_0011d54a:
        if (lVar11 != lVar8) {
          uVar5 = _realloc(this,lVar11);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          lVar7 = *(long *)this;
          if (lVar7 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar7 + -8) = param_1;
        return 0;
      }
      while (plVar1 = (long *)(lVar7 + uVar9 * 8), *plVar1 == 0) {
        uVar9 = uVar9 + 1;
        if (*(ulong *)(lVar7 + -8) <= uVar9) goto LAB_0011d54a;
      }
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        pOVar2 = (Object *)*plVar1;
        cVar4 = predelete_handler(pOVar2);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
      uVar9 = uVar9 + 1;
      lVar7 = *(long *)this;
    }
    goto LAB_0011d510;
  }
  if (lVar11 == lVar8) {
LAB_0011d61b:
    puVar10 = *(undefined8 **)this;
    if (puVar10 == (undefined8 *)0x0) {
LAB_0011d510:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar7 = puVar10[-1];
    if (param_1 <= lVar7) goto LAB_0011d5fb;
  }
  else {
    if (lVar7 != 0) {
      uVar5 = _realloc(this,lVar11);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_0011d61b;
    }
    puVar6 = (undefined8 *)Memory::alloc_static(uVar9 + 0x11,false);
    if (puVar6 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar10 = puVar6 + 2;
    *puVar6 = 1;
    puVar6[1] = 0;
    *(undefined8 **)this = puVar10;
    lVar7 = 0;
  }
  memset(puVar10 + lVar7,0,(param_1 - lVar7) * 8);
LAB_0011d5fb:
  puVar10[-1] = param_1;
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x0011d770) */
/* Label3D::_notificationv(int, bool) */

void __thiscall Label3D::_notificationv(Label3D *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_00139040 != Node3D::_notification) {
      VisualInstance3D::_notification(iVar1);
    }
    Node3D::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  Node3D::_notification(iVar1);
  if ((code *)PTR__notification_00139040 != Node3D::_notification) {
    VisualInstance3D::_notification(iVar1);
  }
  _notification(this,param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0011d968) */
/* WARNING: Removing unreachable block (ram,0x0011dafd) */
/* WARNING: Removing unreachable block (ram,0x0011db09) */
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



/* MethodBindTRC<BaseMaterial3D::TextureFilter>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<BaseMaterial3D::TextureFilter>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  int iVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011dd00;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      iVar2 = (*(code *)pVVar3)();
      ::Variant::Variant((Variant *)local_48,iVar2);
      if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
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
LAB_0011dd00:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<BaseMaterial3D::TextureFilter>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTRC<BaseMaterial3D::TextureFilter>::validated_call
          (MethodBindTRC<BaseMaterial3D::TextureFilter> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011dfa4;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_0011dfa4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<BaseMaterial3D::TextureFilter>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<BaseMaterial3D::TextureFilter>::ptrcall
          (MethodBindTRC<BaseMaterial3D::TextureFilter> *this,Object *param_1,void **param_2,
          void *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011e163;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar1;
LAB_0011e163:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<BaseMaterial3D::TextureFilter>::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<BaseMaterial3D::TextureFilter>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
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
      goto LAB_0011e4a1;
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
                    /* WARNING: Could not recover jumptable at 0x0011e32c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0011e4a1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<BaseMaterial3D::TextureFilter>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<BaseMaterial3D::TextureFilter>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
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
      goto LAB_0011e681;
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
                    /* WARNING: Could not recover jumptable at 0x0011e50b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0011e681:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<BaseMaterial3D::AlphaAntiAliasing>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<BaseMaterial3D::AlphaAntiAliasing>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  int iVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011e750;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      iVar2 = (*(code *)pVVar3)();
      ::Variant::Variant((Variant *)local_48,iVar2);
      if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
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
LAB_0011e750:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<BaseMaterial3D::AlphaAntiAliasing>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTRC<BaseMaterial3D::AlphaAntiAliasing>::validated_call
          (MethodBindTRC<BaseMaterial3D::AlphaAntiAliasing> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011e964;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_0011e964:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<BaseMaterial3D::AlphaAntiAliasing>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<BaseMaterial3D::AlphaAntiAliasing>::ptrcall
          (MethodBindTRC<BaseMaterial3D::AlphaAntiAliasing> *this,Object *param_1,void **param_2,
          void *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011eb13;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar1;
LAB_0011eb13:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<BaseMaterial3D::AlphaAntiAliasing>::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<BaseMaterial3D::AlphaAntiAliasing>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
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
      goto LAB_0011ee51;
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
                    /* WARNING: Could not recover jumptable at 0x0011ecdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0011ee51:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<BaseMaterial3D::AlphaAntiAliasing>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<BaseMaterial3D::AlphaAntiAliasing>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
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
      goto LAB_0011f031;
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
                    /* WARNING: Could not recover jumptable at 0x0011eebb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0011f031:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Label3D::AlphaCutMode>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<Label3D::AlphaCutMode>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  int iVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011f100;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      iVar2 = (*(code *)pVVar3)();
      ::Variant::Variant((Variant *)local_48,iVar2);
      if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
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
LAB_0011f100:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Label3D::AlphaCutMode>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Label3D::AlphaCutMode>::validated_call
          (MethodBindTRC<Label3D::AlphaCutMode> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011f314;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_0011f314:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Label3D::AlphaCutMode>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Label3D::AlphaCutMode>::ptrcall
          (MethodBindTRC<Label3D::AlphaCutMode> *this,Object *param_1,void **param_2,void *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011f4c3;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar1;
LAB_0011f4c3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Label3D::AlphaCutMode>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Label3D::AlphaCutMode>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
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
      goto LAB_0011f801;
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
                    /* WARNING: Could not recover jumptable at 0x0011f68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0011f801:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Label3D::AlphaCutMode>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Label3D::AlphaCutMode>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
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
      goto LAB_0011f9e1;
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
                    /* WARNING: Could not recover jumptable at 0x0011f86b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0011f9e1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<BaseMaterial3D::BillboardMode>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<BaseMaterial3D::BillboardMode>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  int iVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011fab0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      iVar2 = (*(code *)pVVar3)();
      ::Variant::Variant((Variant *)local_48,iVar2);
      if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
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
LAB_0011fab0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<BaseMaterial3D::BillboardMode>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTRC<BaseMaterial3D::BillboardMode>::validated_call
          (MethodBindTRC<BaseMaterial3D::BillboardMode> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011fcc4;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_0011fcc4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<BaseMaterial3D::BillboardMode>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<BaseMaterial3D::BillboardMode>::ptrcall
          (MethodBindTRC<BaseMaterial3D::BillboardMode> *this,Object *param_1,void **param_2,
          void *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011fe73;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar1;
LAB_0011fe73:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<BaseMaterial3D::BillboardMode>::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<BaseMaterial3D::BillboardMode>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
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
      goto LAB_001201b1;
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
                    /* WARNING: Could not recover jumptable at 0x0012003c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_001201b1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<BaseMaterial3D::BillboardMode>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<BaseMaterial3D::BillboardMode>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
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
      goto LAB_00120391;
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
                    /* WARNING: Could not recover jumptable at 0x0012021b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00120391:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, Label3D::DrawFlags>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTRC<bool,Label3D::DrawFlags>::validated_call
          (MethodBindTRC<bool,Label3D::DrawFlags> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  Variant VVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
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
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001203e8;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar1 = (Variant)(*pcVar2)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  param_3[8] = VVar1;
LAB_001203e8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, Label3D::DrawFlags>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<bool,Label3D::DrawFlags>::ptrcall
          (MethodBindTRC<bool,Label3D::DrawFlags> *this,Object *param_1,void **param_2,void *param_3
          )

{
  undefined1 uVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001205c7;
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
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),**param_2);
  *(undefined1 *)param_3 = uVar1;
LAB_001205c7:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Label3D::DrawFlags, bool>::validated_call(Object*, Variant const**, Variant*) const
    */

void MethodBindT<Label3D::DrawFlags,bool>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
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
      goto LAB_00120941;
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
                    /* WARNING: Could not recover jumptable at 0x001207c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8),*(undefined1 *)(*(long *)(param_3 + 8) + 8));
    return;
  }
LAB_00120941:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Label3D::DrawFlags, bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Label3D::DrawFlags,bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
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
      goto LAB_00120b31;
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
                    /* WARNING: Could not recover jumptable at 0x001209ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               **(char **)((long)param_3 + 8) != '\0');
    return;
  }
LAB_00120b31:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Vector2>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_68 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00120c10;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar2 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar2 & 1) != 0) {
        pVVar2 = *(Variant **)(pVVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      local_50 = (*(code *)pVVar2)();
      ::Variant::Variant((Variant *)local_48,(Vector2 *)&local_50);
      if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
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
LAB_00120c10:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Vector2>::validated_call
          (MethodBindTRC<Vector2> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 uVar3;
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
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00120e24;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar1)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)(param_3 + 8) = uVar3;
LAB_00120e24:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Vector2>::ptrcall
          (MethodBindTRC<Vector2> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 uVar3;
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
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00120fd3;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar1)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)param_3 = uVar3;
LAB_00120fd3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector2 const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Vector2_const&>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
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
      goto LAB_00121311;
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
                    /* WARNING: Could not recover jumptable at 0x0012119d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_00121311:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector2 const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Vector2_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
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
      goto LAB_001214f1;
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
                    /* WARNING: Could not recover jumptable at 0x00121379. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_001214f1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<BitField<TextServer::JustificationFlag>>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTRC<BitField<TextServer::JustificationFlag>>::validated_call
          (MethodBindTRC<BitField<TextServer::JustificationFlag>> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  undefined8 uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00121542;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)(param_3 + 8) = uVar1;
LAB_00121542:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<BitField<TextServer::JustificationFlag>>::ptrcall(Object*, void const**, void*)
   const */

void __thiscall
MethodBindTRC<BitField<TextServer::JustificationFlag>>::ptrcall
          (MethodBindTRC<BitField<TextServer::JustificationFlag>> *this,Object *param_1,
          void **param_2,void *param_3)

{
  undefined8 uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001216f1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)param_3 = uVar1;
LAB_001216f1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<BitField<TextServer::JustificationFlag> >::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<BitField<TextServer::JustificationFlag>>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
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
      goto LAB_00121a31;
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
                    /* WARNING: Could not recover jumptable at 0x001218bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined8 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00121a31:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<BitField<TextServer::JustificationFlag> >::ptrcall(Object*, void const**, void*)
   const */

void MethodBindT<BitField<TextServer::JustificationFlag>>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
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
      goto LAB_00121c11;
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
                    /* WARNING: Could not recover jumptable at 0x00121a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00121c11:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TextServer::AutowrapMode>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<TextServer::AutowrapMode>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  int iVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00121ce0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      iVar2 = (*(code *)pVVar3)();
      ::Variant::Variant((Variant *)local_48,iVar2);
      if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
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
LAB_00121ce0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TextServer::AutowrapMode>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTRC<TextServer::AutowrapMode>::validated_call
          (MethodBindTRC<TextServer::AutowrapMode> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00121ef4;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_00121ef4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TextServer::AutowrapMode>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<TextServer::AutowrapMode>::ptrcall
          (MethodBindTRC<TextServer::AutowrapMode> *this,Object *param_1,void **param_2,
          void *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001220a3;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar1;
LAB_001220a3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TextServer::AutowrapMode>::validated_call(Object*, Variant const**, Variant*) const
    */

void MethodBindT<TextServer::AutowrapMode>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
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
      goto LAB_001223e1;
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
                    /* WARNING: Could not recover jumptable at 0x0012226c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_001223e1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TextServer::AutowrapMode>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<TextServer::AutowrapMode>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
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
      goto LAB_001225c1;
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
                    /* WARNING: Could not recover jumptable at 0x0012244b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_001225c1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<float>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  float fVar5;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00122690;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar2 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar2 & 1) != 0) {
        pVVar2 = *(Variant **)(pVVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      fVar5 = (float)(*(code *)pVVar2)();
      ::Variant::Variant((Variant *)local_48,fVar5);
      if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
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
LAB_00122690:
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
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  float fVar3;
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
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001228a8;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  fVar3 = (float)(*pcVar1)(param_1 + *(long *)(this + 0x60));
  *(double *)(param_3 + 8) = (double)fVar3;
LAB_001228a8:
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
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  float fVar3;
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
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00122a67;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  fVar3 = (float)(*pcVar1)(param_1 + *(long *)(this + 0x60));
  *(double *)param_3 = (double)fVar3;
LAB_00122a67:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<float>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<float>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_00122db9;
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
    auVar2._0_4_ = (float)*(double *)(*(long *)param_3 + 8);
                    /* WARNING: Could not recover jumptable at 0x00122c42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00122db9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<float>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<float>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00122f99;
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
    auVar2._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar2._0_4_ = (float)**param_3;
                    /* WARNING: Could not recover jumptable at 0x00122e21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00122f99:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  int iVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00123060;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      iVar2 = (*(code *)pVVar3)();
      ::Variant::Variant((Variant *)local_48,iVar2);
      if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
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
LAB_00123060:
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
  int iVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00123274;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(long *)(param_3 + 8) = (long)iVar1;
LAB_00123274:
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
  int iVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00123423;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(long *)param_3 = (long)iVar1;
LAB_00123423:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
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
      goto LAB_00123761;
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
                    /* WARNING: Could not recover jumptable at 0x001235ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00123761:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
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
      goto LAB_00123941;
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
                    /* WARNING: Could not recover jumptable at 0x001237cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00123941:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  bool bVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00123a10;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      bVar2 = (bool)(*(code *)pVVar3)();
      ::Variant::Variant((Variant *)local_48,bVar2);
      if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
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
LAB_00123a10:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<bool>::validated_call
          (MethodBindTRC<bool> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant VVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00123c22;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar1 = (Variant)(*pcVar2)(param_1 + *(long *)(this + 0x60));
  param_3[8] = VVar1;
LAB_00123c22:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<bool>::ptrcall(MethodBindTRC<bool> *this,Object *param_1,void **param_2,void *param_3)

{
  undefined1 uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00123dd1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(undefined1 *)param_3 = uVar1;
LAB_00123dd1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<bool>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
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
      goto LAB_00124111;
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
                    /* WARNING: Could not recover jumptable at 0x00123f9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00124111:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
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
      goto LAB_001242f9;
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
                    /* WARNING: Could not recover jumptable at 0x00124182. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3 != '\0');
    return;
  }
LAB_001242f9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Array>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Array>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001243d0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar2 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar2 & 1) != 0) {
        pVVar2 = *(Variant **)(pVVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar2)((Array *)&local_58);
      ::Variant::Variant((Variant *)local_48,(Array *)&local_58);
      if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      Array::~Array((Array *)&local_58);
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
LAB_001243d0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Array>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Array>::validated_call
          (MethodBindTRC<Array> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Variant **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x11db58;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001245f9;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((Array *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Array::operator=((Array *)(param_3 + 8),(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_001245f9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Array>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Array>::ptrcall
          (MethodBindTRC<Array> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  void **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (void **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x11db58;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001247ca;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((Array *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Array::operator=((Array *)param_3,(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_001247ca:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Array>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Array>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  Variant *pVVar2;
  code *pcVar3;
  long in_FS_OFFSET;
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
      pVVar2 = param_2[0x23];
      if (pVVar2 == (Variant *)0x0) {
        pVVar2 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar2 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0012499c;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Array::Array((Array *)&local_48,(Array *)(*(long *)param_3 + 8));
  (*pcVar3)((long *)((long)param_2 + lVar1),(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_0012499c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Array>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Array>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
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
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00124b89;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Array::Array((Array *)&local_48,*param_3);
  (*pcVar3)((long *)((long)param_2 + lVar1),(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_00124b89:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TextServer::StructuredTextParser>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<TextServer::StructuredTextParser>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  int iVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00124de0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      iVar2 = (*(code *)pVVar3)();
      ::Variant::Variant((Variant *)local_48,iVar2);
      if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
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
LAB_00124de0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TextServer::StructuredTextParser>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTRC<TextServer::StructuredTextParser>::validated_call
          (MethodBindTRC<TextServer::StructuredTextParser> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00124ff4;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_00124ff4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TextServer::StructuredTextParser>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<TextServer::StructuredTextParser>::ptrcall
          (MethodBindTRC<TextServer::StructuredTextParser> *this,Object *param_1,void **param_2,
          void *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001251a3;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar1;
LAB_001251a3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TextServer::StructuredTextParser>::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<TextServer::StructuredTextParser>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
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
      goto LAB_001254e1;
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
                    /* WARNING: Could not recover jumptable at 0x0012536c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_001254e1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TextServer::StructuredTextParser>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<TextServer::StructuredTextParser>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
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
      goto LAB_001256c1;
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
                    /* WARNING: Could not recover jumptable at 0x0012554b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_001256c1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TextServer::Direction>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<TextServer::Direction>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  int iVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00125790;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      iVar2 = (*(code *)pVVar3)();
      ::Variant::Variant((Variant *)local_48,iVar2);
      if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
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
LAB_00125790:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TextServer::Direction>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<TextServer::Direction>::validated_call
          (MethodBindTRC<TextServer::Direction> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001259a4;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_001259a4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TextServer::Direction>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<TextServer::Direction>::ptrcall
          (MethodBindTRC<TextServer::Direction> *this,Object *param_1,void **param_2,void *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00125b53;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar1;
LAB_00125b53:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TextServer::Direction>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<TextServer::Direction>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
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
      goto LAB_00125e91;
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
                    /* WARNING: Could not recover jumptable at 0x00125d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00125e91:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TextServer::Direction>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<TextServer::Direction>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
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
      goto LAB_00126071;
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
                    /* WARNING: Could not recover jumptable at 0x00125efb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00126071:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<String>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00126150;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar2 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar2 & 1) != 0) {
        pVVar2 = *(Variant **)(pVVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar2)((CowData<char32_t> *)&local_58);
      ::Variant::Variant((Variant *)local_48,(String *)&local_58);
      if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
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
LAB_00126150:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<String>::validated_call
          (MethodBindTRC<String> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant **ppVVar1;
  Variant **ppVVar2;
  code *pcVar3;
  long *plVar4;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Variant **local_48;
  undefined8 local_40;
  long local_30;
  
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
    if (local_48 == (Variant **)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x11db58;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001263b1;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar3 = *(code **)(pcVar3 + (long)param_2 + -1);
  }
  (*pcVar3)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(Variant ***)(param_3 + 8) != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_3 + 8),(CowData *)&local_48);
  }
  ppVVar2 = local_48;
  if (local_48 != (Variant **)0x0) {
    LOCK();
    ppVVar1 = local_48 + -2;
    *ppVVar1 = *ppVVar1 + -1;
    UNLOCK();
    if (*ppVVar1 == (Variant *)0x0) {
      local_48 = (Variant **)0x0;
      Memory::free_static(ppVVar2 + -2,false);
    }
  }
LAB_001263b1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<String>::ptrcall
          (MethodBindTRC<String> *this,Object *param_1,void **param_2,void *param_3)

{
  void **ppvVar1;
  void **ppvVar2;
  code *pcVar3;
  long *plVar4;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  void **local_48;
  undefined8 local_40;
  long local_30;
  
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
    if (local_48 == (void **)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x11db58;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0012659e;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar3 = *(code **)(pcVar3 + (long)param_2 + -1);
  }
  (*pcVar3)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
                    /* WARNING: Load size is inaccurate */
  if (*param_3 != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_3,(CowData *)&local_48);
  }
  ppvVar2 = local_48;
  if (local_48 != (void **)0x0) {
    LOCK();
    ppvVar1 = local_48 + -2;
    *ppvVar1 = (void *)((long)*ppvVar1 + -1);
    UNLOCK();
    if (*ppvVar1 == (void *)0x0) {
      local_48 = (void **)0x0;
      Memory::free_static(ppvVar2 + -2,false);
    }
  }
LAB_0012659e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<String_const&>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
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
      goto LAB_001268d1;
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
                    /* WARNING: Could not recover jumptable at 0x0012675d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_001268d1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<String_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
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
      goto LAB_00126ab1;
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
                    /* WARNING: Could not recover jumptable at 0x00126939. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_00126ab1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Color>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Color>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58 [2];
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_68 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00126b90;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar2 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar2 & 1) != 0) {
        pVVar2 = *(Variant **)(pVVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      local_58[0] = (*(code *)pVVar2)();
      ::Variant::Variant((Variant *)local_48,(Color *)local_58);
      if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
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
LAB_00126b90:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Color>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindTRC<Color>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  Variant *pVVar2;
  long in_RCX;
  long in_FS_OFFSET;
  undefined8 uVar3;
  undefined8 in_XMM1_Qa;
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
      pVVar2 = param_2[0x23];
      if (pVVar2 == (Variant *)0x0) {
        pVVar2 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar2 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar2) {
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00126dab;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(param_1 + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  uVar3 = (*pcVar1)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
  *(undefined8 *)(in_RCX + 8) = uVar3;
  *(undefined8 *)(in_RCX + 0x10) = in_XMM1_Qa;
LAB_00126dab:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Color>::ptrcall(Object*, void const**, void*) const */

void MethodBindTRC<Color>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined8 *in_RCX;
  long in_FS_OFFSET;
  undefined8 uVar3;
  undefined8 in_XMM1_Qa;
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
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00126f6a;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(param_1 + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  uVar3 = (*pcVar1)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
  *in_RCX = uVar3;
  in_RCX[1] = in_XMM1_Qa;
LAB_00126f6a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Color const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Color_const&>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
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
      goto LAB_001272b1;
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
                    /* WARNING: Could not recover jumptable at 0x0012713d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_001272b1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Color const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Color_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
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
      goto LAB_00127491;
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
                    /* WARNING: Could not recover jumptable at 0x00127319. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_00127491:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<VerticalAlignment>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindTRC<VerticalAlignment>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  int iVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00127560;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      iVar2 = (*(code *)pVVar3)();
      ::Variant::Variant((Variant *)local_48,iVar2);
      if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
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
LAB_00127560:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<VerticalAlignment>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<VerticalAlignment>::validated_call
          (MethodBindTRC<VerticalAlignment> *this,Object *param_1,Variant **param_2,Variant *param_3
          )

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00127774;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_00127774:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<VerticalAlignment>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<VerticalAlignment>::ptrcall
          (MethodBindTRC<VerticalAlignment> *this,Object *param_1,void **param_2,void *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00127923;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar1;
LAB_00127923:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<VerticalAlignment>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<VerticalAlignment>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
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
      goto LAB_00127c61;
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
                    /* WARNING: Could not recover jumptable at 0x00127aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00127c61:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<VerticalAlignment>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<VerticalAlignment>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
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
      goto LAB_00127e41;
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
                    /* WARNING: Could not recover jumptable at 0x00127ccb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00127e41:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<HorizontalAlignment>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<HorizontalAlignment>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  int iVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00127f10;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      iVar2 = (*(code *)pVVar3)();
      ::Variant::Variant((Variant *)local_48,iVar2);
      if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
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
LAB_00127f10:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<HorizontalAlignment>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<HorizontalAlignment>::validated_call
          (MethodBindTRC<HorizontalAlignment> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00128124;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_00128124:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<HorizontalAlignment>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<HorizontalAlignment>::ptrcall
          (MethodBindTRC<HorizontalAlignment> *this,Object *param_1,void **param_2,void *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001282d3;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar1;
LAB_001282d3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<HorizontalAlignment>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<HorizontalAlignment>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
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
      goto LAB_00128611;
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
                    /* WARNING: Could not recover jumptable at 0x0012849c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00128611:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<HorizontalAlignment>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<HorizontalAlignment>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
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
      goto LAB_001287f1;
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
                    /* WARNING: Could not recover jumptable at 0x0012867b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_001287f1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<TriangleMesh>>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindTRC<Ref<TriangleMesh>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Object *pOVar2;
  char cVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
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
    if (local_58 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x11db58;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00128910;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
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
      (*(code *)pVVar4)(&local_58);
      ::Variant::Variant((Variant *)local_48,local_58);
      if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      if (local_58 != (Object *)0x0) {
        cVar3 = RefCounted::unreference();
        pOVar2 = local_58;
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(local_58);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
      }
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
LAB_00128910:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<TriangleMesh>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Ref<TriangleMesh>>::ptrcall
          (MethodBindTRC<Ref<TriangleMesh>> *this,Object *param_1,void **param_2,void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  Object *extraout_RDX;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
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
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x11db58;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00128b96;
    }
    param_2 = (void **)local_48;
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
      param_2 = (void **)extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)((Object *)((long)param_2 + -1) + (long)pcVar2);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_00128b96;
    *(undefined8 *)param_3 = 0;
    goto LAB_00128bd9;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_00128bd9;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_00128bd9:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_00128b96;
    }
  }
  cVar1 = RefCounted::unreference();
  pOVar5 = local_48;
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_48);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
LAB_00128b96:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<BitField<TextServer::JustificationFlag>>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<BitField<TextServer::JustificationFlag>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00128e60;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      lVar2 = (*(code *)pVVar3)();
      ::Variant::Variant((Variant *)local_48,lVar2);
      if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
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
LAB_00128e60:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Font>>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Ref<Font>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Object *pOVar2;
  char cVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
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
    if (local_58 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x11db58;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00129140;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
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
      (*(code *)pVVar4)(&local_58);
      ::Variant::Variant((Variant *)local_48,local_58);
      if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      if (local_58 != (Object *)0x0) {
        cVar3 = RefCounted::unreference();
        pOVar2 = local_58;
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(local_58);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
      }
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
LAB_00129140:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Font>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Ref<Font>>::ptrcall
          (MethodBindTRC<Ref<Font>> *this,Object *param_1,void **param_2,void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  Object *extraout_RDX;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
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
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x11db58;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001293c6;
    }
    param_2 = (void **)local_48;
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
      param_2 = (void **)extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)((Object *)((long)param_2 + -1) + (long)pcVar2);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_001293c6;
    *(undefined8 *)param_3 = 0;
    goto LAB_00129409;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_00129409;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_00129409:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_001293c6;
    }
  }
  cVar1 = RefCounted::unreference();
  pOVar5 = local_48;
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_48);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
LAB_001293c6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Font> const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Ref<Font>const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  Object *pOVar4;
  Variant *pVVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar5 = param_2[0x23];
      if (pVVar5 == (Variant *)0x0) {
        pVVar5 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar5 = param_2[1] + 0x20;
    }
    if (local_58 == (Object *)*(long *)pVVar5) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x11db58;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001296c8;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar1) + -1);
  }
  ::Variant::Variant((Variant *)local_48,*(Object **)(*(long *)param_3 + 0x10));
  local_58 = (Object *)0x0;
  pOVar4 = (Object *)::Variant::get_validated_object();
  pOVar2 = local_58;
  if (pOVar4 != local_58) {
    if (pOVar4 == (Object *)0x0) {
      if (local_58 != (Object *)0x0) {
        local_58 = (Object *)0x0;
LAB_00129686:
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(pOVar2);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
      }
    }
    else {
      pOVar4 = (Object *)__dynamic_cast(pOVar4,&Object::typeinfo,&Font::typeinfo,0);
      if (pOVar2 != pOVar4) {
        local_58 = pOVar4;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_58 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_00129686;
      }
    }
  }
  if (::Variant::needs_deinit[local_48[0]] != '\0') {
    ::Variant::_clear_internal();
  }
  (*pcVar6)((long *)((long)param_2 + lVar1));
  if (local_58 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_58;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_58);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_001296c8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Font> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<Font>const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar4 = (long *)param_2[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar4 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x11db58;
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
      goto LAB_0012998c;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar5 = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar5 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)((long)param_2 + lVar1) + -1);
  }
  if ((*param_3 == (long *)0x0) || (local_48 = (Object *)**param_3, local_48 == (Object *)0x0)) {
LAB_00129968:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_00129968;
  }
  (*pcVar5)((long *)((long)param_2 + lVar1));
  if (local_48 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_48;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_48);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_0012998c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, Label3D::DrawFlags>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<bool,Label3D::DrawFlags>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_58 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00129c70;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar12 = param_2[5];
    if (pVVar12 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00129cb0;
LAB_00129ca0:
      pVVar12 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00129cb0:
        uVar7 = 4;
        goto LAB_00129c65;
      }
      if (in_R8D == 1) goto LAB_00129ca0;
      lVar10 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar10) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar12 = pVVar12 + lVar10 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar13 & 1) != 0) {
      pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
    }
    cVar5 = ::Variant::can_convert_strict(*(undefined4 *)pVVar12,2);
    uVar4 = _LC282;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    uVar8 = ::Variant::operator_cast_to_long(pVVar12);
    bVar6 = (bool)(*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),uVar8 & 0xffffffff);
    ::Variant::Variant((Variant *)local_48,bVar6);
    if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
      ::Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar7 = 3;
LAB_00129c65:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00129c70:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector2 const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Vector2_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined4 in_register_00000014;
  long *plVar9;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar10;
  Variant *pVVar11;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_48 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0012a050;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0012a0a0;
LAB_0012a090:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0012a0a0:
        uVar6 = 4;
        goto LAB_0012a045;
      }
      if (in_R8D == 1) goto LAB_0012a090;
      lVar8 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar10 = pVVar10 + lVar8 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar11 & 1) != 0) {
      pVVar11 = *(Variant **)(pVVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar5 = ::Variant::can_convert_strict(*(undefined4 *)pVVar10,5);
    uVar4 = _LC284;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    local_38 = ::Variant::operator_cast_to_Vector2(pVVar10);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),&local_38);
  }
  else {
    uVar6 = 3;
LAB_0012a045:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_0012a050:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Font> const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Ref<Font>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  undefined4 uVar7;
  Object *pOVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_48 == (Object *)*plVar9) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x11db58;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0012a400;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar7 = 3;
LAB_0012a3f5:
    *in_R9 = uVar7;
    in_R9[2] = 1;
    goto LAB_0012a400;
  }
  pVVar12 = param_2[5];
  if (pVVar12 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_0012a450;
LAB_0012a440:
    pVVar12 = *(Variant **)param_4;
  }
  else {
    lVar2 = *(long *)(pVVar12 + -8);
    if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0012a450:
      uVar7 = 4;
      goto LAB_0012a3f5;
    }
    if (in_R8D == 1) goto LAB_0012a440;
    lVar10 = (long)((int)lVar2 + -1);
    if (lVar2 <= lVar10) {
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pVVar12 = pVVar12 + lVar10 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar13 & 1) != 0) {
    pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
  }
  cVar6 = ::Variant::can_convert_strict(*(undefined4 *)pVVar12);
  uVar4 = _LC285;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  local_48 = (Object *)0x0;
  pOVar8 = (Object *)::Variant::get_validated_object();
  pOVar5 = local_48;
  if (pOVar8 != local_48) {
    if (pOVar8 == (Object *)0x0) {
      if (local_48 != (Object *)0x0) {
        local_48 = (Object *)0x0;
LAB_0012a56d:
        cVar6 = RefCounted::unreference();
        if (cVar6 != '\0') {
          cVar6 = predelete_handler(pOVar5);
          if (cVar6 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
    }
    else {
      pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&Font::typeinfo,0);
      if (pOVar5 != pOVar8) {
        local_48 = pOVar8;
        if (pOVar8 != (Object *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_48 = (Object *)0x0;
          }
        }
        if (pOVar5 != (Object *)0x0) goto LAB_0012a56d;
      }
    }
  }
  (*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1));
  if (local_48 != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    pOVar5 = local_48;
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(local_48);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
LAB_0012a400:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Array>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Array>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined4 in_register_00000014;
  long *plVar9;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar10;
  Variant *pVVar11;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_48 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0012a7b0;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0012a800;
LAB_0012a7f0:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0012a800:
        uVar6 = 4;
        goto LAB_0012a7a5;
      }
      if (in_R8D == 1) goto LAB_0012a7f0;
      lVar8 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar10 = pVVar10 + lVar8 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar11 & 1) != 0) {
      pVVar11 = *(Variant **)(pVVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar5 = ::Variant::can_convert_strict(*(undefined4 *)pVVar10,0x1c);
    uVar4 = _LC286;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    ::Variant::operator_cast_to_Array((Variant *)&local_48);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),(Variant *)&local_48);
    Array::~Array((Array *)&local_48);
  }
  else {
    uVar6 = 3;
LAB_0012a7a5:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_0012a7b0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<String_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined4 in_register_00000014;
  long *plVar9;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar10;
  Variant *pVVar11;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_48 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0012aae0;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0012ab30;
LAB_0012ab20:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0012ab30:
        uVar6 = 4;
        goto LAB_0012aad5;
      }
      if (in_R8D == 1) goto LAB_0012ab20;
      lVar8 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar10 = pVVar10 + lVar8 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar11 & 1) != 0) {
      pVVar11 = *(Variant **)(pVVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar5 = ::Variant::can_convert_strict(*(undefined4 *)pVVar10,4);
    uVar4 = _LC287;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    ::Variant::operator_cast_to_String((Variant *)&local_48);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),(Variant *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  }
  else {
    uVar6 = 3;
LAB_0012aad5:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_0012aae0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Color const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Color_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined4 in_register_00000014;
  long *plVar9;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar10;
  Variant *pVVar11;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined8 local_48 [3];
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_58 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0012ae08;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0012ae60;
LAB_0012ae50:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0012ae60:
        uVar6 = 4;
        goto LAB_0012adfd;
      }
      if (in_R8D == 1) goto LAB_0012ae50;
      lVar8 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar10 = pVVar10 + lVar8 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar11 & 1) != 0) {
      pVVar11 = *(Variant **)(pVVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar5 = ::Variant::can_convert_strict(*(undefined4 *)pVVar10,0x14);
    uVar4 = _LC288;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    local_48[0] = ::Variant::operator_cast_to_Color(pVVar10);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),local_48);
  }
  else {
    uVar6 = 3;
LAB_0012adfd:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_0012ae08:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<Ref<TriangleMesh>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Ref<TriangleMesh>>::validated_call
          (MethodBindTRC<Ref<TriangleMesh>> *this,Object *param_1,Variant **param_2,Variant *param_3
          )

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  Variant **local_48;
  Object *local_40;
  long local_30;
  
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
    if (local_48 == (Variant **)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x11db58;
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0012b0a6;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar3 = *(code **)(pcVar3 + (long)param_2 + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),param_2);
  if (local_50 == (Object *)0x0) {
    ::Variant::ObjData::unref();
  }
  else {
    local_48 = *(Variant ***)(local_50 + 0x60);
    local_40 = local_50;
    ::Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_50;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_50);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
LAB_0012b0a6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Font>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Ref<Font>>::validated_call
          (MethodBindTRC<Ref<Font>> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  Variant **local_48;
  Object *local_40;
  long local_30;
  
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
    if (local_48 == (Variant **)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x11db58;
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0012b2d6;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar3 = *(code **)(pcVar3 + (long)param_2 + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),param_2);
  if (local_50 == (Object *)0x0) {
    ::Variant::ObjData::unref();
  }
  else {
    local_48 = *(Variant ***)(local_50 + 0x60);
    local_40 = local_50;
    ::Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_50;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_50);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
LAB_0012b2d6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass,
   BaseMaterial3D::TextureFilter>(__UnexistingClass*, void
   (__UnexistingClass::*)(BaseMaterial3D::TextureFilter), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,BaseMaterial3D::TextureFilter>
               (__UnexistingClass *param_1,_func_void_TextureFilter *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

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
    goto LAB_0012b57d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0012b5e0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0012b5e0:
      uVar6 = 4;
LAB_0012b57d:
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
      goto LAB_0012b4fb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012b4fb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_TextureFilter **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC282;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x0012b556. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<BaseMaterial3D::TextureFilter>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<BaseMaterial3D::TextureFilter>::call
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
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x154,
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
      goto LAB_0012b646;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,BaseMaterial3D::TextureFilter>
            (p_Var4,(_func_void_TextureFilter *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0012b646:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass,
   BaseMaterial3D::AlphaAntiAliasing>(__UnexistingClass*, void
   (__UnexistingClass::*)(BaseMaterial3D::AlphaAntiAliasing), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,BaseMaterial3D::AlphaAntiAliasing>
               (__UnexistingClass *param_1,_func_void_AlphaAntiAliasing *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

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
    goto LAB_0012b94d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0012b9b0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0012b9b0:
      uVar6 = 4;
LAB_0012b94d:
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
      goto LAB_0012b8cb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012b8cb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_AlphaAntiAliasing **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC282;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x0012b926. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<BaseMaterial3D::AlphaAntiAliasing>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<BaseMaterial3D::AlphaAntiAliasing>::call
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
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x154,
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
      goto LAB_0012ba16;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,BaseMaterial3D::AlphaAntiAliasing>
            (p_Var4,(_func_void_AlphaAntiAliasing *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0012ba16:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, Label3D::AlphaCutMode>(__UnexistingClass*, void
   (__UnexistingClass::*)(Label3D::AlphaCutMode), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,Label3D::AlphaCutMode>
               (__UnexistingClass *param_1,_func_void_AlphaCutMode *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

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
    goto LAB_0012bd1d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0012bd80;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0012bd80:
      uVar6 = 4;
LAB_0012bd1d:
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
      goto LAB_0012bc9b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012bc9b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_AlphaCutMode **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC282;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x0012bcf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<Label3D::AlphaCutMode>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<Label3D::AlphaCutMode>::call
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
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x154,
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
      goto LAB_0012bde6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,Label3D::AlphaCutMode>
            (p_Var4,(_func_void_AlphaCutMode *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0012bde6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass,
   BaseMaterial3D::BillboardMode>(__UnexistingClass*, void
   (__UnexistingClass::*)(BaseMaterial3D::BillboardMode), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,BaseMaterial3D::BillboardMode>
               (__UnexistingClass *param_1,_func_void_BillboardMode *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

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
    goto LAB_0012c0ed;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0012c150;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0012c150:
      uVar6 = 4;
LAB_0012c0ed:
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
      goto LAB_0012c06b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012c06b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_BillboardMode **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC282;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x0012c0c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<BaseMaterial3D::BillboardMode>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<BaseMaterial3D::BillboardMode>::call
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
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x154,
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
      goto LAB_0012c1b6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,BaseMaterial3D::BillboardMode>
            (p_Var4,(_func_void_BillboardMode *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0012c1b6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, Label3D::DrawFlags, bool>(__UnexistingClass*,
   void (__UnexistingClass::*)(Label3D::DrawFlags, bool), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,Label3D::DrawFlags,bool>
               (__UnexistingClass *param_1,_func_void_DrawFlags_bool *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  undefined4 in_register_0000000c;
  long *plVar8;
  long lVar9;
  Variant *this;
  uint uVar10;
  int iVar11;
  Variant *this_00;
  long in_stack_00000008;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  uVar10 = (uint)param_5;
  if (2 < uVar10) {
    uVar6 = 3;
    goto LAB_0012c4ed;
  }
  lVar7 = *(long *)(in_stack_00000008 + 8);
  iVar5 = 2 - uVar10;
  if (lVar7 == 0) {
    if (iVar5 == 0) {
      this = (Variant *)*plVar8;
LAB_0012c51d:
      this_00 = (Variant *)plVar8[1];
      goto LAB_0012c455;
    }
  }
  else {
    lVar1 = *(long *)(lVar7 + -8);
    iVar11 = (int)lVar1;
    if (iVar5 <= iVar11) {
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar1 <= lVar9) goto LAB_0012c538;
        this = (Variant *)(lVar7 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_0012c51d;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar5));
      if (lVar1 <= lVar9) {
LAB_0012c538:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar1,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      this_00 = (Variant *)(lVar7 + lVar9 * 0x18);
LAB_0012c455:
      *(undefined4 *)param_6 = 0;
      if (((ulong)param_2 & 1) != 0) {
        param_2 = *(_func_void_DrawFlags_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1)
        ;
      }
      cVar4 = Variant::can_convert_strict(*(undefined4 *)this_00,1);
      uVar3 = _LC289;
      if (cVar4 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar3;
      }
      Variant::operator_cast_to_bool(this_00);
      cVar4 = Variant::can_convert_strict(*(undefined4 *)this,2);
      uVar3 = _LC282;
      if (cVar4 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar3;
      }
      lVar7 = Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x0012c4dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*param_2)((char)(param_1 + (long)param_3),SUB81(lVar7,0));
      return;
    }
  }
  uVar6 = 4;
LAB_0012c4ed:
  *(undefined4 *)param_6 = uVar6;
  *(undefined4 *)(param_6 + 8) = 2;
  return;
}



/* MethodBindT<Label3D::DrawFlags, bool>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<Label3D::DrawFlags,bool>::call
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
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x154,
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
      goto LAB_0012c5d6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,Label3D::DrawFlags,bool>
            (p_Var4,(_func_void_DrawFlags_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0012c5d6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, BitField<TextServer::JustificationFlag>
   >(__UnexistingClass*, void (__UnexistingClass::*)(BitField<TextServer::JustificationFlag>),
   Variant const**, int, Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,BitField<TextServer::JustificationFlag>>
               (__UnexistingClass *param_1,_func_void_BitField *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

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
    goto LAB_0012c8dd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0012c940;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0012c940:
      uVar6 = 4;
LAB_0012c8dd:
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
      goto LAB_0012c85b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012c85b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_BitField **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC282;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x0012c8b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<BitField<TextServer::JustificationFlag> >::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<BitField<TextServer::JustificationFlag>>::call
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
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x154,
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
      goto LAB_0012c9a6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,BitField<TextServer::JustificationFlag>>
            (p_Var4,(_func_void_BitField *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0012c9a6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, TextServer::AutowrapMode>(__UnexistingClass*,
   void (__UnexistingClass::*)(TextServer::AutowrapMode), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,TextServer::AutowrapMode>
               (__UnexistingClass *param_1,_func_void_AutowrapMode *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

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
    goto LAB_0012ccad;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0012cd10;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0012cd10:
      uVar6 = 4;
LAB_0012ccad:
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
      goto LAB_0012cc2b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012cc2b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_AutowrapMode **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC282;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x0012cc86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<TextServer::AutowrapMode>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<TextServer::AutowrapMode>::call
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
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x154,
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
      goto LAB_0012cd76;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,TextServer::AutowrapMode>
            (p_Var4,(_func_void_AutowrapMode *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0012cd76:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
    goto LAB_0012d07d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0012d0e0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0012d0e0:
      uVar6 = 4;
LAB_0012d07d:
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
      goto LAB_0012cffb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012cffb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_float **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,3);
  uVar4 = _LC35;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  fVar9 = Variant::operator_cast_to_float(this);
                    /* WARNING: Could not recover jumptable at 0x0012d054. Too many branches */
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
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x154,
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
      goto LAB_0012d146;
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
LAB_0012d146:
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
    goto LAB_0012d44d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0012d4b0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0012d4b0:
      uVar6 = 4;
LAB_0012d44d:
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
      goto LAB_0012d3cb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012d3cb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC282;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x0012d426. Too many branches */
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
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x154,
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
      goto LAB_0012d516;
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
LAB_0012d516:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(bool), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */

void call_with_variant_args_dv<__UnexistingClass,bool>
               (__UnexistingClass *param_1,_func_void_bool *param_2,Variant **param_3,int param_4,
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
    goto LAB_0012d81d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0012d880;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0012d880:
      uVar6 = 4;
LAB_0012d81d:
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
      goto LAB_0012d79b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012d79b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
  uVar4 = _LC290;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_bool(this);
                    /* WARNING: Could not recover jumptable at 0x0012d7f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(SUB81(param_1 + (long)param_3,0));
  return;
}



/* MethodBindT<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x154,
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
      goto LAB_0012d8e6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,bool>
            (p_Var4,(_func_void_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0012d8e6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass,
   TextServer::StructuredTextParser>(__UnexistingClass*, void
   (__UnexistingClass::*)(TextServer::StructuredTextParser), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,TextServer::StructuredTextParser>
               (__UnexistingClass *param_1,_func_void_StructuredTextParser *param_2,
               Variant **param_3,int param_4,CallError *param_5,Vector *param_6)

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
    goto LAB_0012dbed;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0012dc50;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0012dc50:
      uVar6 = 4;
LAB_0012dbed:
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
      goto LAB_0012db6b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012db6b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_StructuredTextParser **)
               (param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC282;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x0012dbc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<TextServer::StructuredTextParser>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<TextServer::StructuredTextParser>::call
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
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x154,
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
      goto LAB_0012dcb6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,TextServer::StructuredTextParser>
            (p_Var4,(_func_void_StructuredTextParser *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0012dcb6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, TextServer::Direction>(__UnexistingClass*, void
   (__UnexistingClass::*)(TextServer::Direction), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,TextServer::Direction>
               (__UnexistingClass *param_1,_func_void_Direction *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

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
    goto LAB_0012dfbd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0012e020;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0012e020:
      uVar6 = 4;
LAB_0012dfbd:
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
      goto LAB_0012df3b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012df3b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_Direction **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC282;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x0012df96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<TextServer::Direction>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<TextServer::Direction>::call
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
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x154,
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
      goto LAB_0012e086;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,TextServer::Direction>
            (p_Var4,(_func_void_Direction *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8
             ,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0012e086:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, VerticalAlignment>(__UnexistingClass*, void
   (__UnexistingClass::*)(VerticalAlignment), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,VerticalAlignment>
               (__UnexistingClass *param_1,_func_void_VerticalAlignment *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

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
    goto LAB_0012e38d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0012e3f0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0012e3f0:
      uVar6 = 4;
LAB_0012e38d:
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
      goto LAB_0012e30b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012e30b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_VerticalAlignment **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC282;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x0012e366. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<VerticalAlignment>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<VerticalAlignment>::call
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
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x154,
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
      goto LAB_0012e456;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,VerticalAlignment>
            (p_Var4,(_func_void_VerticalAlignment *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0012e456:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, HorizontalAlignment>(__UnexistingClass*, void
   (__UnexistingClass::*)(HorizontalAlignment), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,HorizontalAlignment>
               (__UnexistingClass *param_1,_func_void_HorizontalAlignment *param_2,Variant **param_3
               ,int param_4,CallError *param_5,Vector *param_6)

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
    goto LAB_0012e75d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0012e7c0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0012e7c0:
      uVar6 = 4;
LAB_0012e75d:
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
      goto LAB_0012e6db;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012e6db:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_HorizontalAlignment **)
               (param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC282;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x0012e736. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<HorizontalAlignment>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<HorizontalAlignment>::call
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
      _err_print_error(&_LC87,"./core/object/method_bind.h",0x154,
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
      goto LAB_0012e826;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,HorizontalAlignment>
            (p_Var4,(_func_void_HorizontalAlignment *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0012e826:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<Label3D::SurfaceKey, Label3D::SurfaceData, Label3D::SurfaceKeyHasher,
   HashMapComparatorDefault<Label3D::SurfaceKey>,
   DefaultTypedAllocator<HashMapElement<Label3D::SurfaceKey, Label3D::SurfaceData> > >::~HashMap()
    */

void __thiscall
HashMap<Label3D::SurfaceKey,Label3D::SurfaceData,Label3D::SurfaceKeyHasher,HashMapComparatorDefault<Label3D::SurfaceKey>,DefaultTypedAllocator<HashMapElement<Label3D::SurfaceKey,Label3D::SurfaceData>>>
::~HashMap(HashMap<Label3D::SurfaceKey,Label3D::SurfaceData,Label3D::SurfaceKeyHasher,HashMapComparatorDefault<Label3D::SurfaceKey>,DefaultTypedAllocator<HashMapElement<Label3D::SurfaceKey,Label3D::SurfaceData>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Label3D::SurfaceData::~SurfaceData() */

void __thiscall Label3D::SurfaceData::~SurfaceData(SurfaceData *this)

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



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Ref<TriangleMesh>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<TriangleMesh>>::~MethodBindTRC(MethodBindTRC<Ref<TriangleMesh>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<BaseMaterial3D::TextureFilter>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<BaseMaterial3D::TextureFilter>::~MethodBindTRC
          (MethodBindTRC<BaseMaterial3D::TextureFilter> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<BaseMaterial3D::TextureFilter>::~MethodBindT() */

void __thiscall
MethodBindT<BaseMaterial3D::TextureFilter>::~MethodBindT
          (MethodBindT<BaseMaterial3D::TextureFilter> *this)

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
/* MethodBindTRC<BaseMaterial3D::AlphaAntiAliasing>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<BaseMaterial3D::AlphaAntiAliasing>::~MethodBindTRC
          (MethodBindTRC<BaseMaterial3D::AlphaAntiAliasing> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<BaseMaterial3D::AlphaAntiAliasing>::~MethodBindT() */

void __thiscall
MethodBindT<BaseMaterial3D::AlphaAntiAliasing>::~MethodBindT
          (MethodBindT<BaseMaterial3D::AlphaAntiAliasing> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Label3D::AlphaCutMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Label3D::AlphaCutMode>::~MethodBindTRC(MethodBindTRC<Label3D::AlphaCutMode> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Label3D::AlphaCutMode>::~MethodBindT() */

void __thiscall
MethodBindT<Label3D::AlphaCutMode>::~MethodBindT(MethodBindT<Label3D::AlphaCutMode> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<BaseMaterial3D::BillboardMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<BaseMaterial3D::BillboardMode>::~MethodBindTRC
          (MethodBindTRC<BaseMaterial3D::BillboardMode> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<BaseMaterial3D::BillboardMode>::~MethodBindT() */

void __thiscall
MethodBindT<BaseMaterial3D::BillboardMode>::~MethodBindT
          (MethodBindT<BaseMaterial3D::BillboardMode> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<bool, Label3D::DrawFlags>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<bool,Label3D::DrawFlags>::~MethodBindTRC(MethodBindTRC<bool,Label3D::DrawFlags> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Label3D::DrawFlags, bool>::~MethodBindT() */

void __thiscall
MethodBindT<Label3D::DrawFlags,bool>::~MethodBindT(MethodBindT<Label3D::DrawFlags,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Vector2>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector2>::~MethodBindTRC(MethodBindTRC<Vector2> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Vector2 const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector2_const&>::~MethodBindT(MethodBindT<Vector2_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<BitField<TextServer::JustificationFlag>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<BitField<TextServer::JustificationFlag>>::~MethodBindTRC
          (MethodBindTRC<BitField<TextServer::JustificationFlag>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<BitField<TextServer::JustificationFlag> >::~MethodBindT() */

void __thiscall
MethodBindT<BitField<TextServer::JustificationFlag>>::~MethodBindT
          (MethodBindT<BitField<TextServer::JustificationFlag>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<TextServer::AutowrapMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TextServer::AutowrapMode>::~MethodBindTRC
          (MethodBindTRC<TextServer::AutowrapMode> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<TextServer::AutowrapMode>::~MethodBindT() */

void __thiscall
MethodBindT<TextServer::AutowrapMode>::~MethodBindT(MethodBindT<TextServer::AutowrapMode> *this)

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
/* MethodBindTRC<Ref<Font>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Font>>::~MethodBindTRC(MethodBindTRC<Ref<Font>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<Font> const&>::~MethodBindT() */

void __thiscall MethodBindT<Ref<Font>const&>::~MethodBindT(MethodBindT<Ref<Font>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Array>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Array>::~MethodBindTRC(MethodBindTRC<Array> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Array>::~MethodBindT() */

void __thiscall MethodBindT<Array>::~MethodBindT(MethodBindT<Array> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<TextServer::StructuredTextParser>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TextServer::StructuredTextParser>::~MethodBindTRC
          (MethodBindTRC<TextServer::StructuredTextParser> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<TextServer::StructuredTextParser>::~MethodBindT() */

void __thiscall
MethodBindT<TextServer::StructuredTextParser>::~MethodBindT
          (MethodBindT<TextServer::StructuredTextParser> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<TextServer::Direction>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TextServer::Direction>::~MethodBindTRC(MethodBindTRC<TextServer::Direction> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<TextServer::Direction>::~MethodBindT() */

void __thiscall
MethodBindT<TextServer::Direction>::~MethodBindT(MethodBindT<TextServer::Direction> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Color>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Color>::~MethodBindTRC(MethodBindTRC<Color> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Color const&>::~MethodBindT() */

void __thiscall MethodBindT<Color_const&>::~MethodBindT(MethodBindT<Color_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<VerticalAlignment>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<VerticalAlignment>::~MethodBindTRC(MethodBindTRC<VerticalAlignment> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<VerticalAlignment>::~MethodBindT() */

void __thiscall MethodBindT<VerticalAlignment>::~MethodBindT(MethodBindT<VerticalAlignment> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<HorizontalAlignment>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<HorizontalAlignment>::~MethodBindTRC(MethodBindTRC<HorizontalAlignment> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<HorizontalAlignment>::~MethodBindT() */

void __thiscall
MethodBindT<HorizontalAlignment>::~MethodBindT(MethodBindT<HorizontalAlignment> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Label3D, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Label3D,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Label3D,void> *this)

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


