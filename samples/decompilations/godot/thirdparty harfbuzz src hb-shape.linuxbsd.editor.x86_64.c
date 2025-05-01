
long * hb_shape_list_shapers(void)

{
  long *plVar1;
  long *__ptr;
  long lVar2;
  bool bVar3;
  
  while( true ) {
    while( true ) {
      if (static_shaper_list != (long *)0x0) {
        return static_shaper_list;
      }
      __ptr = (long *)calloc(4,8);
      if (__ptr != (long *)0x0) break;
      LOCK();
      bVar3 = static_shaper_list == (long *)0x0;
      if (bVar3) {
        static_shaper_list = &nil_shaper_list;
      }
      UNLOCK();
      if (bVar3) {
        return &nil_shaper_list;
      }
    }
    lVar2 = _hb_shapers_get();
    __ptr[3] = 0;
    *__ptr = lVar2;
    __ptr[2] = lVar2 + 0x30;
    __ptr[1] = lVar2 + 0x18;
    LOCK();
    bVar3 = static_shaper_list == (long *)0x0;
    plVar1 = __ptr;
    if (!bVar3) {
      plVar1 = static_shaper_list;
    }
    static_shaper_list = plVar1;
    UNLOCK();
    if (bVar3) break;
    free(__ptr);
  }
  return __ptr;
}



int hb_shape_full(hb_feature_t *param_1,hb_buffer_t *param_2,undefined8 param_3,uint param_4,
                 undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  hb_font_t *phVar4;
  char **ppcVar5;
  
  if (*(int *)(param_2 + 0x60) == 0) {
    iVar2 = 1;
  }
  else {
    ppcVar5 = (char **)(ulong)param_4;
    hb_buffer_t::enter();
    if (((byte)param_2[0x18] & 0x20) == 0) {
      uVar3 = hb_shape_plan_create_cached2
                        (*(undefined8 *)(param_1 + 0x20),param_2 + 0x38,param_3,ppcVar5,
                         *(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x78),param_5);
      iVar2 = hb_shape_plan_execute(uVar3,param_1,param_2,param_3,ppcVar5);
      if (*(int *)(param_2 + 200) < 1) {
        param_2[0x59] = (hb_buffer_t)0x1;
      }
      hb_shape_plan_destroy(uVar3);
    }
    else {
      phVar4 = (hb_font_t *)hb_buffer_create();
      hb_buffer_append(phVar4,param_2,0,0xffffffff);
      uVar3 = hb_shape_plan_create_cached2
                        (*(undefined8 *)(param_1 + 0x20),param_2 + 0x38,param_3,ppcVar5,
                         *(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x78));
      iVar2 = hb_shape_plan_execute(uVar3,param_1,param_2,param_3,ppcVar5);
      if (*(int *)(param_2 + 200) < 1) {
        param_2[0x59] = (hb_buffer_t)0x1;
      }
      hb_shape_plan_destroy(uVar3,param_5);
      if (phVar4 != (hb_font_t *)0x0) {
        if ((iVar2 == 0) ||
           ((((param_2[0x58] != (hb_buffer_t)0x0 && (param_2[0x59] == (hb_buffer_t)0x0)) &&
             (phVar4[0x58] != (hb_font_t)0x0)) &&
            (cVar1 = hb_buffer_t::verify(param_2,phVar4,param_1,(uint)param_3,ppcVar5),
            cVar1 == '\0')))) {
          iVar2 = 0;
        }
        hb_buffer_destroy(phVar4);
      }
    }
    hb_buffer_t::leave();
  }
  return iVar2;
}



void hb_shape(void)

{
  hb_shape_full();
  return;
}


