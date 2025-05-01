
/* hb_paint_push_transform_nil(hb_paint_funcs_t*, void*, float, float, float, float, float, float,
   void*) */

void hb_paint_push_transform_nil
               (hb_paint_funcs_t *param_1,void *param_2,float param_3,float param_4,float param_5,
               float param_6,float param_7,float param_8,void *param_9)

{
  return;
}



/* hb_paint_pop_transform_nil(hb_paint_funcs_t*, void*, void*) */

void hb_paint_pop_transform_nil(hb_paint_funcs_t *param_1,void *param_2,void *param_3)

{
  return;
}



/* hb_paint_color_glyph_nil(hb_paint_funcs_t*, void*, unsigned int, hb_font_t*, void*) */

undefined8
hb_paint_color_glyph_nil
          (hb_paint_funcs_t *param_1,void *param_2,uint param_3,hb_font_t *param_4,void *param_5)

{
  return 0;
}



/* hb_paint_push_clip_glyph_nil(hb_paint_funcs_t*, void*, unsigned int, hb_font_t*, void*) */

void hb_paint_push_clip_glyph_nil
               (hb_paint_funcs_t *param_1,void *param_2,uint param_3,hb_font_t *param_4,
               void *param_5)

{
  return;
}



/* hb_paint_push_clip_rectangle_nil(hb_paint_funcs_t*, void*, float, float, float, float, void*) */

void hb_paint_push_clip_rectangle_nil
               (hb_paint_funcs_t *param_1,void *param_2,float param_3,float param_4,float param_5,
               float param_6,void *param_7)

{
  return;
}



/* hb_paint_color_nil(hb_paint_funcs_t*, void*, int, unsigned int, void*) */

void hb_paint_color_nil(hb_paint_funcs_t *param_1,void *param_2,int param_3,uint param_4,
                       void *param_5)

{
  return;
}



/* hb_paint_image_nil(hb_paint_funcs_t*, void*, hb_blob_t*, unsigned int, unsigned int, unsigned
   int, float, hb_glyph_extents_t*, void*) */

undefined8
hb_paint_image_nil(hb_paint_funcs_t *param_1,void *param_2,hb_blob_t *param_3,uint param_4,
                  uint param_5,uint param_6,float param_7,hb_glyph_extents_t *param_8,void *param_9)

{
  return 0;
}



/* hb_paint_linear_gradient_nil(hb_paint_funcs_t*, void*, hb_color_line_t*, float, float, float,
   float, float, float, void*) */

void hb_paint_linear_gradient_nil
               (hb_paint_funcs_t *param_1,void *param_2,hb_color_line_t *param_3,float param_4,
               float param_5,float param_6,float param_7,float param_8,float param_9,void *param_10)

{
  return;
}



/* hb_paint_sweep_gradient_nil(hb_paint_funcs_t*, void*, hb_color_line_t*, float, float, float,
   float, void*) */

void hb_paint_sweep_gradient_nil
               (hb_paint_funcs_t *param_1,void *param_2,hb_color_line_t *param_3,float param_4,
               float param_5,float param_6,float param_7,void *param_8)

{
  return;
}



/* hb_paint_pop_group_nil(hb_paint_funcs_t*, void*, hb_paint_composite_mode_t, void*) */

void hb_paint_pop_group_nil(void)

{
  return;
}



/* hb_paint_radial_gradient_nil(hb_paint_funcs_t*, void*, hb_color_line_t*, float, float, float,
   float, float, float, void*) */

void hb_paint_radial_gradient_nil
               (hb_paint_funcs_t *param_1,void *param_2,hb_color_line_t *param_3,float param_4,
               float param_5,float param_6,float param_7,float param_8,float param_9,void *param_10)

{
  return;
}



/* hb_paint_custom_palette_color_nil(hb_paint_funcs_t*, void*, unsigned int, unsigned int*, void*)
    */

undefined8
hb_paint_custom_palette_color_nil
          (hb_paint_funcs_t *param_1,void *param_2,uint param_3,uint *param_4,void *param_5)

{
  return 0;
}



/* hb_paint_pop_clip_nil(hb_paint_funcs_t*, void*, void*) */

void hb_paint_pop_clip_nil(hb_paint_funcs_t *param_1,void *param_2,void *param_3)

{
  return;
}



/* hb_paint_push_group_nil(hb_paint_funcs_t*, void*, void*) */

void hb_paint_push_group_nil(hb_paint_funcs_t *param_1,void *param_2,void *param_3)

{
  return;
}



void hb_paint_funcs_set_push_transform_func
               (hb_paint_funcs_t *param_1,long param_2,void *param_3,_func_void_void_ptr *param_4)

{
  code *pcVar1;
  _func_void_void_ptr *p_Var2;
  void *pvVar3;
  char cVar4;
  long *plVar5;
  _func_void_void_ptr *local_38;
  void *local_30 [2];
  
  local_38 = param_4;
  local_30[0] = param_3;
  cVar4 = _hb_paint_funcs_set_preamble
                    (param_1,param_2 == 0,local_30,(_func_void_void_ptr *)&local_38);
  if (cVar4 != '\0') {
    if ((*(undefined8 **)(param_1 + 0x88) != (undefined8 *)0x0) &&
       (pcVar1 = (code *)**(undefined8 **)(param_1 + 0x88), pcVar1 != (code *)0x0)) {
      plVar5 = *(long **)(param_1 + 0x80);
      if (plVar5 != (long *)0x0) {
        plVar5 = (long *)*plVar5;
      }
      (*pcVar1)(plVar5);
    }
    pvVar3 = local_30[0];
    p_Var2 = local_38;
    cVar4 = _hb_paint_funcs_set_middle(param_1,local_30[0],local_38);
    if (cVar4 != '\0') {
      if (param_2 == 0) {
        param_2 = 0x100000;
      }
      *(long *)(param_1 + 0x10) = param_2;
      if (*(undefined8 **)(param_1 + 0x80) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x80) = pvVar3;
      }
      if (*(undefined8 **)(param_1 + 0x88) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x88) = p_Var2;
      }
    }
  }
  return;
}



void hb_paint_funcs_set_pop_transform_func
               (hb_paint_funcs_t *param_1,code *param_2,void *param_3,_func_void_void_ptr *param_4)

{
  code *pcVar1;
  _func_void_void_ptr *p_Var2;
  void *pvVar3;
  char cVar4;
  long lVar5;
  _func_void_void_ptr *local_38;
  void *local_30 [2];
  
  local_38 = param_4;
  local_30[0] = param_3;
  cVar4 = _hb_paint_funcs_set_preamble
                    (param_1,param_2 == (code *)0x0,local_30,(_func_void_void_ptr *)&local_38);
  if (cVar4 != '\0') {
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (pcVar1 = *(code **)(*(long *)(param_1 + 0x88) + 8), pcVar1 != (code *)0x0)) {
      lVar5 = *(long *)(param_1 + 0x80);
      if (lVar5 != 0) {
        lVar5 = *(long *)(lVar5 + 8);
      }
      (*pcVar1)(lVar5);
    }
    pvVar3 = local_30[0];
    p_Var2 = local_38;
    cVar4 = _hb_paint_funcs_set_middle(param_1,local_30[0],local_38);
    if (cVar4 != '\0') {
      if (param_2 == (code *)0x0) {
        param_2 = hb_paint_pop_transform_nil;
      }
      *(code **)(param_1 + 0x18) = param_2;
      if (*(long *)(param_1 + 0x80) != 0) {
        *(void **)(*(long *)(param_1 + 0x80) + 8) = pvVar3;
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        *(_func_void_void_ptr **)(*(long *)(param_1 + 0x88) + 8) = p_Var2;
      }
    }
  }
  return;
}



void hb_paint_funcs_set_color_glyph_func
               (hb_paint_funcs_t *param_1,code *param_2,void *param_3,_func_void_void_ptr *param_4)

{
  code *pcVar1;
  _func_void_void_ptr *p_Var2;
  void *pvVar3;
  char cVar4;
  long lVar5;
  _func_void_void_ptr *local_38;
  void *local_30 [2];
  
  local_38 = param_4;
  local_30[0] = param_3;
  cVar4 = _hb_paint_funcs_set_preamble
                    (param_1,param_2 == (code *)0x0,local_30,(_func_void_void_ptr *)&local_38);
  if (cVar4 != '\0') {
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (pcVar1 = *(code **)(*(long *)(param_1 + 0x88) + 0x10), pcVar1 != (code *)0x0)) {
      lVar5 = *(long *)(param_1 + 0x80);
      if (lVar5 != 0) {
        lVar5 = *(long *)(lVar5 + 0x10);
      }
      (*pcVar1)(lVar5);
    }
    pvVar3 = local_30[0];
    p_Var2 = local_38;
    cVar4 = _hb_paint_funcs_set_middle(param_1,local_30[0],local_38);
    if (cVar4 != '\0') {
      if (param_2 == (code *)0x0) {
        param_2 = hb_paint_color_glyph_nil;
      }
      *(code **)(param_1 + 0x20) = param_2;
      if (*(long *)(param_1 + 0x80) != 0) {
        *(void **)(*(long *)(param_1 + 0x80) + 0x10) = pvVar3;
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        *(_func_void_void_ptr **)(*(long *)(param_1 + 0x88) + 0x10) = p_Var2;
      }
    }
  }
  return;
}



void hb_paint_funcs_set_push_clip_glyph_func
               (hb_paint_funcs_t *param_1,code *param_2,void *param_3,_func_void_void_ptr *param_4)

{
  code *pcVar1;
  _func_void_void_ptr *p_Var2;
  void *pvVar3;
  char cVar4;
  long lVar5;
  _func_void_void_ptr *local_38;
  void *local_30 [2];
  
  local_38 = param_4;
  local_30[0] = param_3;
  cVar4 = _hb_paint_funcs_set_preamble
                    (param_1,param_2 == (code *)0x0,local_30,(_func_void_void_ptr *)&local_38);
  if (cVar4 != '\0') {
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (pcVar1 = *(code **)(*(long *)(param_1 + 0x88) + 0x18), pcVar1 != (code *)0x0)) {
      lVar5 = *(long *)(param_1 + 0x80);
      if (lVar5 != 0) {
        lVar5 = *(long *)(lVar5 + 0x18);
      }
      (*pcVar1)(lVar5);
    }
    pvVar3 = local_30[0];
    p_Var2 = local_38;
    cVar4 = _hb_paint_funcs_set_middle(param_1,local_30[0],local_38);
    if (cVar4 != '\0') {
      if (param_2 == (code *)0x0) {
        param_2 = hb_paint_push_clip_glyph_nil;
      }
      *(code **)(param_1 + 0x28) = param_2;
      if (*(long *)(param_1 + 0x80) != 0) {
        *(void **)(*(long *)(param_1 + 0x80) + 0x18) = pvVar3;
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        *(_func_void_void_ptr **)(*(long *)(param_1 + 0x88) + 0x18) = p_Var2;
      }
    }
  }
  return;
}



void hb_paint_funcs_set_push_clip_rectangle_func
               (hb_paint_funcs_t *param_1,code *param_2,void *param_3,_func_void_void_ptr *param_4)

{
  code *pcVar1;
  _func_void_void_ptr *p_Var2;
  void *pvVar3;
  char cVar4;
  long lVar5;
  _func_void_void_ptr *local_38;
  void *local_30 [2];
  
  local_38 = param_4;
  local_30[0] = param_3;
  cVar4 = _hb_paint_funcs_set_preamble
                    (param_1,param_2 == (code *)0x0,local_30,(_func_void_void_ptr *)&local_38);
  if (cVar4 != '\0') {
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (pcVar1 = *(code **)(*(long *)(param_1 + 0x88) + 0x20), pcVar1 != (code *)0x0)) {
      lVar5 = *(long *)(param_1 + 0x80);
      if (lVar5 != 0) {
        lVar5 = *(long *)(lVar5 + 0x20);
      }
      (*pcVar1)(lVar5);
    }
    pvVar3 = local_30[0];
    p_Var2 = local_38;
    cVar4 = _hb_paint_funcs_set_middle(param_1,local_30[0],local_38);
    if (cVar4 != '\0') {
      if (param_2 == (code *)0x0) {
        param_2 = hb_paint_push_clip_rectangle_nil;
      }
      *(code **)(param_1 + 0x30) = param_2;
      if (*(long *)(param_1 + 0x80) != 0) {
        *(void **)(*(long *)(param_1 + 0x80) + 0x20) = pvVar3;
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        *(_func_void_void_ptr **)(*(long *)(param_1 + 0x88) + 0x20) = p_Var2;
      }
    }
  }
  return;
}



void hb_paint_funcs_set_pop_clip_func
               (hb_paint_funcs_t *param_1,code *param_2,void *param_3,_func_void_void_ptr *param_4)

{
  code *pcVar1;
  _func_void_void_ptr *p_Var2;
  void *pvVar3;
  char cVar4;
  long lVar5;
  _func_void_void_ptr *local_38;
  void *local_30 [2];
  
  local_38 = param_4;
  local_30[0] = param_3;
  cVar4 = _hb_paint_funcs_set_preamble
                    (param_1,param_2 == (code *)0x0,local_30,(_func_void_void_ptr *)&local_38);
  if (cVar4 != '\0') {
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (pcVar1 = *(code **)(*(long *)(param_1 + 0x88) + 0x28), pcVar1 != (code *)0x0)) {
      lVar5 = *(long *)(param_1 + 0x80);
      if (lVar5 != 0) {
        lVar5 = *(long *)(lVar5 + 0x28);
      }
      (*pcVar1)(lVar5);
    }
    pvVar3 = local_30[0];
    p_Var2 = local_38;
    cVar4 = _hb_paint_funcs_set_middle(param_1,local_30[0],local_38);
    if (cVar4 != '\0') {
      if (param_2 == (code *)0x0) {
        param_2 = hb_paint_pop_clip_nil;
      }
      *(code **)(param_1 + 0x38) = param_2;
      if (*(long *)(param_1 + 0x80) != 0) {
        *(void **)(*(long *)(param_1 + 0x80) + 0x28) = pvVar3;
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        *(_func_void_void_ptr **)(*(long *)(param_1 + 0x88) + 0x28) = p_Var2;
      }
    }
  }
  return;
}



void hb_paint_funcs_set_color_func
               (hb_paint_funcs_t *param_1,code *param_2,void *param_3,_func_void_void_ptr *param_4)

{
  code *pcVar1;
  _func_void_void_ptr *p_Var2;
  void *pvVar3;
  char cVar4;
  long lVar5;
  _func_void_void_ptr *local_38;
  void *local_30 [2];
  
  local_38 = param_4;
  local_30[0] = param_3;
  cVar4 = _hb_paint_funcs_set_preamble
                    (param_1,param_2 == (code *)0x0,local_30,(_func_void_void_ptr *)&local_38);
  if (cVar4 != '\0') {
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (pcVar1 = *(code **)(*(long *)(param_1 + 0x88) + 0x30), pcVar1 != (code *)0x0)) {
      lVar5 = *(long *)(param_1 + 0x80);
      if (lVar5 != 0) {
        lVar5 = *(long *)(lVar5 + 0x30);
      }
      (*pcVar1)(lVar5);
    }
    pvVar3 = local_30[0];
    p_Var2 = local_38;
    cVar4 = _hb_paint_funcs_set_middle(param_1,local_30[0],local_38);
    if (cVar4 != '\0') {
      if (param_2 == (code *)0x0) {
        param_2 = hb_paint_color_nil;
      }
      *(code **)(param_1 + 0x40) = param_2;
      if (*(long *)(param_1 + 0x80) != 0) {
        *(void **)(*(long *)(param_1 + 0x80) + 0x30) = pvVar3;
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        *(_func_void_void_ptr **)(*(long *)(param_1 + 0x88) + 0x30) = p_Var2;
      }
    }
  }
  return;
}



void hb_paint_funcs_set_image_func
               (hb_paint_funcs_t *param_1,code *param_2,void *param_3,_func_void_void_ptr *param_4)

{
  code *pcVar1;
  _func_void_void_ptr *p_Var2;
  void *pvVar3;
  char cVar4;
  long lVar5;
  _func_void_void_ptr *local_38;
  void *local_30 [2];
  
  local_38 = param_4;
  local_30[0] = param_3;
  cVar4 = _hb_paint_funcs_set_preamble
                    (param_1,param_2 == (code *)0x0,local_30,(_func_void_void_ptr *)&local_38);
  if (cVar4 != '\0') {
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (pcVar1 = *(code **)(*(long *)(param_1 + 0x88) + 0x38), pcVar1 != (code *)0x0)) {
      lVar5 = *(long *)(param_1 + 0x80);
      if (lVar5 != 0) {
        lVar5 = *(long *)(lVar5 + 0x38);
      }
      (*pcVar1)(lVar5);
    }
    pvVar3 = local_30[0];
    p_Var2 = local_38;
    cVar4 = _hb_paint_funcs_set_middle(param_1,local_30[0],local_38);
    if (cVar4 != '\0') {
      if (param_2 == (code *)0x0) {
        param_2 = hb_paint_image_nil;
      }
      *(code **)(param_1 + 0x48) = param_2;
      if (*(long *)(param_1 + 0x80) != 0) {
        *(void **)(*(long *)(param_1 + 0x80) + 0x38) = pvVar3;
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        *(_func_void_void_ptr **)(*(long *)(param_1 + 0x88) + 0x38) = p_Var2;
      }
    }
  }
  return;
}



void hb_paint_funcs_set_linear_gradient_func
               (hb_paint_funcs_t *param_1,code *param_2,void *param_3,_func_void_void_ptr *param_4)

{
  code *pcVar1;
  _func_void_void_ptr *p_Var2;
  void *pvVar3;
  char cVar4;
  long lVar5;
  _func_void_void_ptr *local_38;
  void *local_30 [2];
  
  local_38 = param_4;
  local_30[0] = param_3;
  cVar4 = _hb_paint_funcs_set_preamble
                    (param_1,param_2 == (code *)0x0,local_30,(_func_void_void_ptr *)&local_38);
  if (cVar4 != '\0') {
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (pcVar1 = *(code **)(*(long *)(param_1 + 0x88) + 0x40), pcVar1 != (code *)0x0)) {
      lVar5 = *(long *)(param_1 + 0x80);
      if (lVar5 != 0) {
        lVar5 = *(long *)(lVar5 + 0x40);
      }
      (*pcVar1)(lVar5);
    }
    pvVar3 = local_30[0];
    p_Var2 = local_38;
    cVar4 = _hb_paint_funcs_set_middle(param_1,local_30[0],local_38);
    if (cVar4 != '\0') {
      if (param_2 == (code *)0x0) {
        param_2 = hb_paint_linear_gradient_nil;
      }
      *(code **)(param_1 + 0x50) = param_2;
      if (*(long *)(param_1 + 0x80) != 0) {
        *(void **)(*(long *)(param_1 + 0x80) + 0x40) = pvVar3;
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        *(_func_void_void_ptr **)(*(long *)(param_1 + 0x88) + 0x40) = p_Var2;
      }
    }
  }
  return;
}



void hb_paint_funcs_set_radial_gradient_func
               (hb_paint_funcs_t *param_1,code *param_2,void *param_3,_func_void_void_ptr *param_4)

{
  code *pcVar1;
  _func_void_void_ptr *p_Var2;
  void *pvVar3;
  char cVar4;
  long lVar5;
  _func_void_void_ptr *local_38;
  void *local_30 [2];
  
  local_38 = param_4;
  local_30[0] = param_3;
  cVar4 = _hb_paint_funcs_set_preamble
                    (param_1,param_2 == (code *)0x0,local_30,(_func_void_void_ptr *)&local_38);
  if (cVar4 != '\0') {
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (pcVar1 = *(code **)(*(long *)(param_1 + 0x88) + 0x48), pcVar1 != (code *)0x0)) {
      lVar5 = *(long *)(param_1 + 0x80);
      if (lVar5 != 0) {
        lVar5 = *(long *)(lVar5 + 0x48);
      }
      (*pcVar1)(lVar5);
    }
    pvVar3 = local_30[0];
    p_Var2 = local_38;
    cVar4 = _hb_paint_funcs_set_middle(param_1,local_30[0],local_38);
    if (cVar4 != '\0') {
      if (param_2 == (code *)0x0) {
        param_2 = hb_paint_radial_gradient_nil;
      }
      *(code **)(param_1 + 0x58) = param_2;
      if (*(long *)(param_1 + 0x80) != 0) {
        *(void **)(*(long *)(param_1 + 0x80) + 0x48) = pvVar3;
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        *(_func_void_void_ptr **)(*(long *)(param_1 + 0x88) + 0x48) = p_Var2;
      }
    }
  }
  return;
}



void hb_paint_funcs_set_sweep_gradient_func
               (hb_paint_funcs_t *param_1,code *param_2,void *param_3,_func_void_void_ptr *param_4)

{
  code *pcVar1;
  _func_void_void_ptr *p_Var2;
  void *pvVar3;
  char cVar4;
  long lVar5;
  _func_void_void_ptr *local_38;
  void *local_30 [2];
  
  local_38 = param_4;
  local_30[0] = param_3;
  cVar4 = _hb_paint_funcs_set_preamble
                    (param_1,param_2 == (code *)0x0,local_30,(_func_void_void_ptr *)&local_38);
  if (cVar4 != '\0') {
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (pcVar1 = *(code **)(*(long *)(param_1 + 0x88) + 0x50), pcVar1 != (code *)0x0)) {
      lVar5 = *(long *)(param_1 + 0x80);
      if (lVar5 != 0) {
        lVar5 = *(long *)(lVar5 + 0x50);
      }
      (*pcVar1)(lVar5);
    }
    pvVar3 = local_30[0];
    p_Var2 = local_38;
    cVar4 = _hb_paint_funcs_set_middle(param_1,local_30[0],local_38);
    if (cVar4 != '\0') {
      if (param_2 == (code *)0x0) {
        param_2 = hb_paint_sweep_gradient_nil;
      }
      *(code **)(param_1 + 0x60) = param_2;
      if (*(long *)(param_1 + 0x80) != 0) {
        *(void **)(*(long *)(param_1 + 0x80) + 0x50) = pvVar3;
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        *(_func_void_void_ptr **)(*(long *)(param_1 + 0x88) + 0x50) = p_Var2;
      }
    }
  }
  return;
}



void hb_paint_funcs_set_push_group_func
               (hb_paint_funcs_t *param_1,code *param_2,void *param_3,_func_void_void_ptr *param_4)

{
  code *pcVar1;
  _func_void_void_ptr *p_Var2;
  void *pvVar3;
  char cVar4;
  long lVar5;
  _func_void_void_ptr *local_38;
  void *local_30 [2];
  
  local_38 = param_4;
  local_30[0] = param_3;
  cVar4 = _hb_paint_funcs_set_preamble
                    (param_1,param_2 == (code *)0x0,local_30,(_func_void_void_ptr *)&local_38);
  if (cVar4 != '\0') {
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (pcVar1 = *(code **)(*(long *)(param_1 + 0x88) + 0x58), pcVar1 != (code *)0x0)) {
      lVar5 = *(long *)(param_1 + 0x80);
      if (lVar5 != 0) {
        lVar5 = *(long *)(lVar5 + 0x58);
      }
      (*pcVar1)(lVar5);
    }
    pvVar3 = local_30[0];
    p_Var2 = local_38;
    cVar4 = _hb_paint_funcs_set_middle(param_1,local_30[0],local_38);
    if (cVar4 != '\0') {
      if (param_2 == (code *)0x0) {
        param_2 = hb_paint_push_group_nil;
      }
      *(code **)(param_1 + 0x68) = param_2;
      if (*(long *)(param_1 + 0x80) != 0) {
        *(void **)(*(long *)(param_1 + 0x80) + 0x58) = pvVar3;
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        *(_func_void_void_ptr **)(*(long *)(param_1 + 0x88) + 0x58) = p_Var2;
      }
    }
  }
  return;
}



void hb_paint_funcs_set_pop_group_func
               (hb_paint_funcs_t *param_1,code *param_2,void *param_3,_func_void_void_ptr *param_4)

{
  code *pcVar1;
  _func_void_void_ptr *p_Var2;
  void *pvVar3;
  char cVar4;
  long lVar5;
  _func_void_void_ptr *local_38;
  void *local_30 [2];
  
  local_38 = param_4;
  local_30[0] = param_3;
  cVar4 = _hb_paint_funcs_set_preamble
                    (param_1,param_2 == (code *)0x0,local_30,(_func_void_void_ptr *)&local_38);
  if (cVar4 != '\0') {
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (pcVar1 = *(code **)(*(long *)(param_1 + 0x88) + 0x60), pcVar1 != (code *)0x0)) {
      lVar5 = *(long *)(param_1 + 0x80);
      if (lVar5 != 0) {
        lVar5 = *(long *)(lVar5 + 0x60);
      }
      (*pcVar1)(lVar5);
    }
    pvVar3 = local_30[0];
    p_Var2 = local_38;
    cVar4 = _hb_paint_funcs_set_middle(param_1,local_30[0],local_38);
    if (cVar4 != '\0') {
      if (param_2 == (code *)0x0) {
        param_2 = hb_paint_pop_group_nil;
      }
      *(code **)(param_1 + 0x70) = param_2;
      if (*(long *)(param_1 + 0x80) != 0) {
        *(void **)(*(long *)(param_1 + 0x80) + 0x60) = pvVar3;
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        *(_func_void_void_ptr **)(*(long *)(param_1 + 0x88) + 0x60) = p_Var2;
      }
    }
  }
  return;
}



void hb_paint_funcs_set_custom_palette_color_func
               (hb_paint_funcs_t *param_1,code *param_2,void *param_3,_func_void_void_ptr *param_4)

{
  code *pcVar1;
  _func_void_void_ptr *p_Var2;
  void *pvVar3;
  char cVar4;
  long lVar5;
  _func_void_void_ptr *local_38;
  void *local_30 [2];
  
  local_38 = param_4;
  local_30[0] = param_3;
  cVar4 = _hb_paint_funcs_set_preamble
                    (param_1,param_2 == (code *)0x0,local_30,(_func_void_void_ptr *)&local_38);
  if (cVar4 != '\0') {
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (pcVar1 = *(code **)(*(long *)(param_1 + 0x88) + 0x68), pcVar1 != (code *)0x0)) {
      lVar5 = *(long *)(param_1 + 0x80);
      if (lVar5 != 0) {
        lVar5 = *(long *)(lVar5 + 0x68);
      }
      (*pcVar1)(lVar5);
    }
    pvVar3 = local_30[0];
    p_Var2 = local_38;
    cVar4 = _hb_paint_funcs_set_middle(param_1,local_30[0],local_38);
    if (cVar4 != '\0') {
      if (param_2 == (code *)0x0) {
        param_2 = hb_paint_custom_palette_color_nil;
      }
      *(code **)(param_1 + 0x78) = param_2;
      if (*(long *)(param_1 + 0x80) != 0) {
        *(void **)(*(long *)(param_1 + 0x80) + 0x68) = pvVar3;
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        *(_func_void_void_ptr **)(*(long *)(param_1 + 0x88) + 0x68) = p_Var2;
      }
    }
  }
  return;
}



undefined1  [16] hb_paint_funcs_create(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 extraout_RDX;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  auVar13._0_8_ = (undefined4 *)calloc(1,0x90);
  if (auVar13._0_8_ != (undefined4 *)0x0) {
    *auVar13._0_8_ = 1;
    auVar13._0_8_[1] = 1;
    *(undefined8 *)(auVar13._0_8_ + 2) = 0;
    uVar9 = _hb_Null_hb_paint_funcs_t._88_8_;
    uVar8 = _hb_Null_hb_paint_funcs_t._80_8_;
    uVar7 = _hb_Null_hb_paint_funcs_t._72_8_;
    uVar6 = _hb_Null_hb_paint_funcs_t._64_8_;
    uVar5 = _hb_Null_hb_paint_funcs_t._56_8_;
    uVar4 = _hb_Null_hb_paint_funcs_t._48_8_;
    uVar3 = _hb_Null_hb_paint_funcs_t._40_8_;
    uVar2 = _hb_Null_hb_paint_funcs_t._32_8_;
    uVar1 = _hb_Null_hb_paint_funcs_t._24_8_;
    *(undefined8 *)(auVar13._0_8_ + 4) = _hb_Null_hb_paint_funcs_t._16_8_;
    *(undefined8 *)(auVar13._0_8_ + 6) = uVar1;
    uVar12 = _hb_Null_hb_paint_funcs_t._120_8_;
    uVar11 = _hb_Null_hb_paint_funcs_t._112_8_;
    uVar10 = _hb_Null_hb_paint_funcs_t._104_8_;
    uVar1 = _hb_Null_hb_paint_funcs_t._96_8_;
    *(undefined8 *)(auVar13._0_8_ + 8) = uVar2;
    *(undefined8 *)(auVar13._0_8_ + 10) = uVar3;
    *(undefined8 *)(auVar13._0_8_ + 0xc) = uVar4;
    *(undefined8 *)(auVar13._0_8_ + 0xe) = uVar5;
    *(undefined8 *)(auVar13._0_8_ + 0x10) = uVar6;
    *(undefined8 *)(auVar13._0_8_ + 0x12) = uVar7;
    *(undefined8 *)(auVar13._0_8_ + 0x14) = uVar8;
    *(undefined8 *)(auVar13._0_8_ + 0x16) = uVar9;
    *(undefined8 *)(auVar13._0_8_ + 0x18) = uVar1;
    *(undefined8 *)(auVar13._0_8_ + 0x1a) = uVar10;
    *(undefined8 *)(auVar13._0_8_ + 0x1c) = uVar11;
    *(undefined8 *)(auVar13._0_8_ + 0x1e) = uVar12;
    auVar13._8_4_ = *auVar13._0_8_;
    auVar13._12_4_ = 0;
    return auVar13;
  }
  auVar14._8_8_ = extraout_RDX;
  auVar14._0_8_ = _hb_Null_hb_paint_funcs_t;
  return auVar14;
}



undefined1 * hb_paint_funcs_get_empty(void)

{
  return _hb_Null_hb_paint_funcs_t;
}



int * hb_paint_funcs_reference(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    LOCK();
    *param_1 = *param_1 + 1;
    UNLOCK();
  }
  return param_1;
}



void hb_paint_funcs_destroy(int *param_1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  code *pcVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *__ptr;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  if (*param_1 != 0) {
    LOCK();
    *param_1 = *param_1 + -1;
    UNLOCK();
    if (*param_1 == 0) {
      *param_1 = -0xdead;
      __mutex = *(pthread_mutex_t **)(param_1 + 2);
      if (__mutex != (pthread_mutex_t *)0x0) {
        if (*(int *)((long)__mutex + 0x2c) != 0) {
          do {
            pthread_mutex_lock(__mutex);
            iVar1 = *(int *)((long)__mutex + 0x2c);
            while( true ) {
              if (iVar1 == 0) {
                if (__mutex[1].__data.__lock != 0) {
                  free(*(void **)((long)__mutex + 0x30));
                }
                __mutex[1].__align = 0;
                *(undefined8 *)((long)__mutex + 0x30) = 0;
                pthread_mutex_unlock(__mutex);
                goto LAB_00100ff8;
              }
              lVar5 = *(long *)((long)__mutex + 0x30) + (ulong)(iVar1 - 1U) * 0x18;
              pcVar2 = *(code **)(lVar5 + 0x10);
              uVar3 = *(undefined8 *)(lVar5 + 8);
              *(uint *)((long)__mutex + 0x2c) = iVar1 - 1U;
              pthread_mutex_unlock(__mutex);
              if (pcVar2 == (code *)0x0) break;
              (*pcVar2)(uVar3);
              pthread_mutex_lock(__mutex);
              iVar1 = *(int *)((long)__mutex + 0x2c);
            }
          } while( true );
        }
        if (__mutex[1].__data.__lock != 0) {
          free(*(void **)((long)__mutex + 0x30));
        }
        __mutex[1].__align = 0;
        *(undefined8 *)((long)__mutex + 0x30) = 0;
LAB_00100ff8:
        pthread_mutex_destroy(__mutex);
        free(__mutex);
        param_1[2] = 0;
        param_1[3] = 0;
      }
      __ptr = *(undefined8 **)(param_1 + 0x22);
      if (__ptr != (undefined8 *)0x0) {
        if ((code *)*__ptr != (code *)0x0) {
          plVar4 = *(long **)(param_1 + 0x20);
          if (plVar4 != (long *)0x0) {
            plVar4 = (long *)*plVar4;
          }
          (*(code *)*__ptr)(plVar4);
          __ptr = *(undefined8 **)(param_1 + 0x22);
        }
        if ((code *)__ptr[1] != (code *)0x0) {
          lVar5 = *(long *)(param_1 + 0x20);
          if (lVar5 != 0) {
            lVar5 = *(long *)(lVar5 + 8);
          }
          (*(code *)__ptr[1])(lVar5);
          __ptr = *(undefined8 **)(param_1 + 0x22);
        }
        if ((code *)__ptr[2] != (code *)0x0) {
          lVar5 = *(long *)(param_1 + 0x20);
          if (lVar5 != 0) {
            lVar5 = *(long *)(lVar5 + 0x10);
          }
          (*(code *)__ptr[2])(lVar5);
          __ptr = *(undefined8 **)(param_1 + 0x22);
        }
        if ((code *)__ptr[3] != (code *)0x0) {
          lVar5 = *(long *)(param_1 + 0x20);
          if (lVar5 != 0) {
            lVar5 = *(long *)(lVar5 + 0x18);
          }
          (*(code *)__ptr[3])(lVar5);
          __ptr = *(undefined8 **)(param_1 + 0x22);
        }
        if ((code *)__ptr[4] != (code *)0x0) {
          lVar5 = *(long *)(param_1 + 0x20);
          if (lVar5 != 0) {
            lVar5 = *(long *)(lVar5 + 0x20);
          }
          (*(code *)__ptr[4])(lVar5);
          __ptr = *(undefined8 **)(param_1 + 0x22);
        }
        if ((code *)__ptr[5] != (code *)0x0) {
          lVar5 = *(long *)(param_1 + 0x20);
          if (lVar5 != 0) {
            lVar5 = *(long *)(lVar5 + 0x28);
          }
          (*(code *)__ptr[5])(lVar5);
          __ptr = *(undefined8 **)(param_1 + 0x22);
        }
        if ((code *)__ptr[6] != (code *)0x0) {
          lVar5 = *(long *)(param_1 + 0x20);
          if (lVar5 != 0) {
            lVar5 = *(long *)(lVar5 + 0x30);
          }
          (*(code *)__ptr[6])(lVar5);
          __ptr = *(undefined8 **)(param_1 + 0x22);
        }
        if ((code *)__ptr[7] != (code *)0x0) {
          lVar5 = *(long *)(param_1 + 0x20);
          if (lVar5 != 0) {
            lVar5 = *(long *)(lVar5 + 0x38);
          }
          (*(code *)__ptr[7])(lVar5);
          __ptr = *(undefined8 **)(param_1 + 0x22);
        }
        if ((code *)__ptr[8] != (code *)0x0) {
          lVar5 = *(long *)(param_1 + 0x20);
          if (lVar5 != 0) {
            lVar5 = *(long *)(lVar5 + 0x40);
          }
          (*(code *)__ptr[8])(lVar5);
          __ptr = *(undefined8 **)(param_1 + 0x22);
        }
        if ((code *)__ptr[9] != (code *)0x0) {
          lVar5 = *(long *)(param_1 + 0x20);
          if (lVar5 != 0) {
            lVar5 = *(long *)(lVar5 + 0x48);
          }
          (*(code *)__ptr[9])(lVar5);
          __ptr = *(undefined8 **)(param_1 + 0x22);
        }
        if ((code *)__ptr[10] != (code *)0x0) {
          lVar5 = *(long *)(param_1 + 0x20);
          if (lVar5 != 0) {
            lVar5 = *(long *)(lVar5 + 0x50);
          }
          (*(code *)__ptr[10])(lVar5);
          __ptr = *(undefined8 **)(param_1 + 0x22);
        }
        if ((code *)__ptr[0xb] != (code *)0x0) {
          lVar5 = *(long *)(param_1 + 0x20);
          if (lVar5 != 0) {
            lVar5 = *(long *)(lVar5 + 0x58);
          }
          (*(code *)__ptr[0xb])(lVar5);
          __ptr = *(undefined8 **)(param_1 + 0x22);
        }
        if ((code *)__ptr[0xc] != (code *)0x0) {
          lVar5 = *(long *)(param_1 + 0x20);
          if (lVar5 != 0) {
            lVar5 = *(long *)(lVar5 + 0x60);
          }
          (*(code *)__ptr[0xc])(lVar5);
          __ptr = *(undefined8 **)(param_1 + 0x22);
        }
        if ((code *)__ptr[0xd] != (code *)0x0) {
          lVar5 = *(long *)(param_1 + 0x20);
          if (lVar5 != 0) {
            lVar5 = *(long *)(lVar5 + 0x68);
          }
          (*(code *)__ptr[0xd])(lVar5);
          __ptr = *(undefined8 **)(param_1 + 0x22);
        }
      }
      free(__ptr);
      free(*(void **)(param_1 + 0x20));
      free(param_1);
      return;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool hb_paint_funcs_set_user_data(int *param_1,long param_2,long param_3,long param_4,int param_5)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  uint uVar5;
  pthread_mutex_t *__mutex;
  long *plVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return false;
  }
  plVar6 = (long *)(param_1 + 2);
  while (__mutex = (pthread_mutex_t *)*plVar6, __mutex == (pthread_mutex_t *)0x0) {
    __mutex = (pthread_mutex_t *)calloc(1,0x38);
    if (__mutex == (pthread_mutex_t *)0x0) {
      return false;
    }
    pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
    __mutex[1].__align = 0;
    *(undefined8 *)((long)__mutex + 0x30) = 0;
    LOCK();
    lVar2 = *plVar6;
    if (lVar2 == 0) {
      *plVar6 = (long)__mutex;
    }
    UNLOCK();
    if (lVar2 == 0) break;
    if (*(int *)((long)__mutex + 0x2c) == 0) {
      if (__mutex[1].__data.__lock != 0) {
        free(*(void **)((long)__mutex + 0x30));
      }
      __mutex[1].__align = 0;
      *(undefined8 *)((long)__mutex + 0x30) = 0;
    }
    else {
      while( true ) {
        pthread_mutex_lock(__mutex);
        if (*(int *)((long)__mutex + 0x2c) == 0) break;
        uVar8 = *(int *)((long)__mutex + 0x2c) - 1;
        lVar2 = *(long *)((long)__mutex + 0x30) + (ulong)uVar8 * 0x18;
        uVar11 = *(undefined8 *)(lVar2 + 8);
        pcVar3 = *(code **)(lVar2 + 0x10);
        *(uint *)((long)__mutex + 0x2c) = uVar8;
        pthread_mutex_unlock(__mutex);
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(uVar11);
        }
      }
      if (__mutex[1].__data.__lock != 0) {
        free(*(void **)((long)__mutex + 0x30));
      }
      __mutex[1].__align = 0;
      *(undefined8 *)((long)__mutex + 0x30) = 0;
      pthread_mutex_unlock(__mutex);
    }
    pthread_mutex_destroy(__mutex);
    free(__mutex);
  }
  if (param_2 == 0) {
    return false;
  }
  if ((param_5 != 0) && (param_3 == 0 && param_4 == 0)) {
    pthread_mutex_lock(__mutex);
    uVar8 = *(uint *)((long)__mutex + 0x2c);
    plVar6 = *(long **)((long)__mutex + 0x30);
    if (uVar8 != 0) {
      uVar5 = 0;
      plVar10 = plVar6;
      do {
        if (param_2 == *plVar10) {
          plVar10 = plVar6 + (ulong)uVar5 * 3;
          if (plVar10 != (long *)0x0) {
            lVar2 = plVar10[1];
            pcVar3 = (code *)plVar10[2];
            plVar6 = plVar6 + (ulong)(uVar8 - 1) * 3;
            lVar4 = plVar6[1];
            *plVar10 = *plVar6;
            plVar10[1] = lVar4;
            plVar10[2] = plVar6[2];
            *(uint *)((long)__mutex + 0x2c) = uVar8 - 1;
            pthread_mutex_unlock(__mutex);
            if (pcVar3 == (code *)0x0) {
              return true;
            }
            (*pcVar3)(lVar2);
            return true;
          }
          break;
        }
        uVar5 = uVar5 + 1;
        plVar10 = plVar10 + 3;
      } while (uVar8 != uVar5);
    }
    pthread_mutex_unlock(__mutex);
    return true;
  }
  pthread_mutex_lock(__mutex);
  uVar8 = *(uint *)((long)__mutex + 0x2c);
  uVar7 = (ulong)uVar8;
  plVar6 = *(long **)((long)__mutex + 0x30);
  if (uVar8 == 0) {
    uVar5 = 1;
    if (__mutex[1].__data.__lock < 1) {
      if (__mutex[1].__data.__lock != 0) goto LAB_00101388;
      uVar9 = 8;
LAB_0010131c:
      plVar6 = (long *)realloc(plVar6,uVar9 * 0x18);
      if (plVar6 == (long *)0x0) {
        if ((uint)__mutex[1].__data.__lock < (uint)uVar9) {
          __mutex[1].__data.__lock = ~__mutex[1].__data.__lock;
          goto LAB_00101388;
        }
        uVar7 = (ulong)*(uint *)((long)__mutex + 0x2c);
        plVar6 = *(long **)((long)__mutex + 0x30);
        uVar5 = *(uint *)((long)__mutex + 0x2c) + 1;
      }
      else {
        uVar5 = *(uint *)((long)__mutex + 0x2c);
        uVar7 = (ulong)uVar5;
        *(long **)((long)__mutex + 0x30) = plVar6;
        __mutex[1].__data.__lock = (uint)uVar9;
        uVar5 = uVar5 + 1;
      }
    }
  }
  else {
    uVar5 = 0;
    plVar10 = plVar6;
    do {
      if (param_2 == *plVar10) {
        plVar10 = plVar6 + (ulong)uVar5 * 3;
        if (plVar10 != (long *)0x0) {
          if (param_5 == 0) {
            plVar10 = (long *)0x0;
            pthread_mutex_unlock(__mutex);
          }
          else {
            lVar2 = plVar10[1];
            pcVar3 = (code *)plVar10[2];
            *plVar10 = param_2;
            plVar10[1] = param_3;
            plVar10[2] = param_4;
            pthread_mutex_unlock(__mutex);
            if (pcVar3 != (code *)0x0) {
              (*pcVar3)(lVar2);
            }
          }
          goto LAB_00101135;
        }
        break;
      }
      uVar5 = uVar5 + 1;
      plVar10 = plVar10 + 3;
    } while (uVar8 != uVar5);
    uVar1 = __mutex[1].__data.__lock;
    uVar5 = uVar8 + 1;
    if ((int)uVar1 <= (int)uVar8) {
      if (-1 < (int)uVar1) {
        uVar9 = (ulong)uVar1;
        if (uVar5 <= uVar1) goto LAB_001012e3;
        do {
          uVar8 = (int)(uVar9 >> 1) + 8 + (int)uVar9;
          uVar9 = (ulong)uVar8;
        } while (uVar8 < uVar5);
        if (uVar8 < 0xaaaaaab) goto LAB_0010131c;
        __mutex[1].__data.__lock = ~uVar1;
      }
LAB_00101388:
      uVar11 = __hb_CrapPool;
      _DAT_00102050 = _DAT_00102048;
      plVar10 = (long *)&_hb_CrapPool;
      __hb_CrapPool = __hb_NullPool;
      _DAT_00102048 = uVar11;
      goto LAB_001012fa;
    }
  }
LAB_001012e3:
  *(uint *)((long)__mutex + 0x2c) = uVar5;
  plVar10 = plVar6 + uVar7 * 3;
  *plVar10 = param_2;
  plVar10[1] = param_3;
  plVar10[2] = param_4;
LAB_001012fa:
  pthread_mutex_unlock(__mutex);
LAB_00101135:
  return -1 < __mutex[1].__data.__lock && plVar10 != (long *)0x0;
}



long hb_paint_funcs_get_user_data(int *param_1,long param_2)

{
  pthread_mutex_t *__mutex;
  long lVar1;
  uint uVar2;
  long *plVar3;
  
  if (((param_1 != (int *)0x0) && (*param_1 != 0)) &&
     (__mutex = *(pthread_mutex_t **)(param_1 + 2), __mutex != (pthread_mutex_t *)0x0)) {
    pthread_mutex_lock(__mutex);
    if (*(uint *)((long)__mutex + 0x2c) != 0) {
      uVar2 = 0;
      plVar3 = *(long **)((long)__mutex + 0x30);
      do {
        if (param_2 == *plVar3) {
          plVar3 = *(long **)((long)__mutex + 0x30) + (ulong)uVar2 * 3;
          if (plVar3 != (long *)0x0) {
            lVar1 = plVar3[1];
            pthread_mutex_unlock(__mutex);
            return lVar1;
          }
          break;
        }
        uVar2 = uVar2 + 1;
        plVar3 = plVar3 + 3;
      } while (*(uint *)((long)__mutex + 0x2c) != uVar2);
    }
    pthread_mutex_unlock(__mutex);
  }
  return 0;
}



void hb_paint_funcs_make_immutable(long param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



bool hb_paint_funcs_is_immutable(long param_1)

{
  return *(int *)(param_1 + 4) == 0;
}



void hb_color_line_get_color_stops
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00101537. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_1[1])(param_1,*param_1,param_2,param_3,param_4,param_1[2]);
  return;
}



void hb_color_line_get_extend(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0010154b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_1[3])(param_1,*param_1,param_1[4]);
  return;
}



void hb_paint_push_transform(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x80);
  if (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00101567. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(param_1,param_2,plVar1);
  return;
}



void hb_paint_pop_transform(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x80);
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00101588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x18))(param_1,param_2,lVar1);
  return;
}



bool hb_paint_color_glyph(long param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0x20))();
  return iVar1 != 0;
}



void hb_paint_push_clip_glyph(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001015d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))();
  return;
}



void hb_paint_push_clip_rectangle(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x80);
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x001015f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x30))(param_1,param_2,lVar1);
  return;
}



void hb_paint_pop_clip(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x80);
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00101618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x38))(param_1,param_2,lVar1);
  return;
}



void hb_paint_color(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00101638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x40))();
  return;
}



void hb_paint_image(long param_1)

{
  (**(code **)(param_1 + 0x48))();
  return;
}



void hb_paint_linear_gradient(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00101688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x50))();
  return;
}



void hb_paint_radial_gradient(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001016b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x58))();
  return;
}



void hb_paint_sweep_gradient(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001016d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x60))();
  return;
}



void hb_paint_push_group(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x80);
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x58);
  }
                    /* WARNING: Could not recover jumptable at 0x001016f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x68))(param_1,param_2,lVar1);
  return;
}



void hb_paint_pop_group(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00101718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x70))();
  return;
}



bool hb_paint_custom_palette_color(long param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0x78))();
  return iVar1 != 0;
}


