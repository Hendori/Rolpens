
/* rect_original_order(void const*, void const*) */

ulong rect_original_order(void *param_1,void *param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)(*(int *)((long)param_2 + 0x14) < *(int *)((long)param_1 + 0x14));
  if (*(int *)((long)param_1 + 0x14) < *(int *)((long)param_2 + 0x14)) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* rect_height_compare(void const*, void const*) */

ulong rect_height_compare(void *param_1,void *param_2)

{
  ulong uVar1;
  
  uVar1 = 0xffffffff;
  if (((*(int *)((long)param_1 + 8) <= *(int *)((long)param_2 + 8)) &&
      (uVar1 = 1, *(int *)((long)param_2 + 8) <= *(int *)((long)param_1 + 8))) &&
     (uVar1 = (ulong)(*(int *)((long)param_1 + 4) < *(int *)((long)param_2 + 4)),
     *(int *)((long)param_2 + 4) < *(int *)((long)param_1 + 4))) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* CowData<Vector3i>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector3i>::_copy_on_write(CowData<Vector3i> *this)

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



/* CowData<Vector2i>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector2i>::_copy_on_write(CowData<Vector2i> *this)

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



/* stbrp__skyline_find_min_y(stbrp_context*, stbrp_node*, int, int, int*) [clone .isra.0] */

int stbrp__skyline_find_min_y
              (stbrp_context *param_1,stbrp_node *param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_register_0000000c;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar2 = (int)param_2;
  iVar4 = iVar2 + param_3;
  if (iVar4 <= *(int *)param_1) {
    *(int *)CONCAT44(in_register_0000000c,param_4) = 0;
    return 0;
  }
  iVar8 = 0;
  iVar5 = 0;
  iVar9 = *(int *)param_1;
  iVar6 = 0;
  do {
    while( true ) {
      iVar7 = *(int *)(param_1 + 4);
      param_1 = *(stbrp_context **)(param_1 + 8);
      iVar1 = *(int *)param_1;
      if (iVar6 < iVar7) break;
      iVar9 = iVar1 - iVar9;
      iVar3 = iVar5 + iVar9;
      if (param_3 < iVar5 + iVar9) {
        iVar9 = param_3 - iVar5;
        iVar3 = param_3;
      }
      iVar5 = iVar3;
      iVar8 = iVar8 + (iVar6 - iVar7) * iVar9;
      iVar9 = iVar1;
      iVar7 = iVar6;
      if (iVar4 <= iVar1) goto LAB_00100432;
    }
    iVar8 = iVar8 + (iVar7 - iVar6) * iVar5;
    if (iVar9 < iVar2) {
      iVar9 = iVar2;
    }
    iVar5 = iVar5 + (iVar1 - iVar9);
    iVar9 = iVar1;
    iVar6 = iVar7;
  } while (iVar1 < iVar4);
LAB_00100432:
  *(int *)CONCAT44(in_register_0000000c,param_4) = iVar8;
  return iVar7;
}



/* CowData<_AtlasWorkRect>::_ref(CowData<_AtlasWorkRect> const&) [clone .part.0] */

void __thiscall CowData<_AtlasWorkRect>::_ref(CowData<_AtlasWorkRect> *this,CowData *param_1)

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



/* CowData<Vector2>::_ref(CowData<Vector2> const&) [clone .part.0] [clone .constprop.0] */

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



/* CowData<stbrp_rect>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<stbrp_rect>::_copy_on_write(CowData<stbrp_rect> *this)

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
  __n = lVar2 * 0x18;
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



/* CowData<stbrp_node>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<stbrp_node>::_copy_on_write(CowData<stbrp_node> *this)

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



/* CowData<_AtlasWorkRect>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<_AtlasWorkRect>::_copy_on_write(CowData<_AtlasWorkRect> *this)

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
  __n = lVar2 * 0x14;
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



void stbrp_setup_heuristic(long param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0xc) != 1) {
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



void stbrp_setup_allow_out_of_mem(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 1;
  if (param_2 == 0) {
    iVar1 = (*param_1 + param_1[5] + -1) / param_1[5];
  }
  param_1[2] = iVar1;
  return;
}



void stbrp_init_target(int *param_1,int param_2,int param_3,long param_4,int param_5)

{
  long lVar1;
  
  lVar1 = param_4;
  if (1 < param_5) {
    lVar1 = param_4 + 0x10;
    do {
      *(long *)(lVar1 + -8) = lVar1;
      lVar1 = lVar1 + 0x10;
    } while (lVar1 != param_4 + 0x20 + (ulong)(param_5 - 2) * 0x10);
    lVar1 = (ulong)(param_5 - 1) * 0x10 + param_4;
  }
  *(undefined8 *)(lVar1 + 8) = 0;
  *(int **)(param_1 + 6) = param_1 + 10;
  param_1[3] = 1;
  param_1[4] = 0;
  *(long *)(param_1 + 8) = param_4;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[5] = param_5;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = param_2;
  param_1[0xf] = 0x40000000;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[2] = (param_2 + -1 + param_5) / param_5;
  *(int **)(param_1 + 0xc) = param_1 + 0xe;
  return;
}



undefined8 stbrp_pack_rects(int *param_1,void *param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  undefined8 uVar10;
  uint *puVar11;
  stbrp_context *psVar12;
  uint uVar13;
  stbrp_context *psVar14;
  uint uVar15;
  int iVar16;
  stbrp_context *psVar17;
  int iVar18;
  stbrp_context *psVar19;
  int *piVar20;
  stbrp_context *psVar21;
  size_t __nmemb;
  long in_FS_OFFSET;
  int *local_a8;
  stbrp_context *local_a0;
  uint local_94;
  stbrp_context *local_78;
  int local_70;
  int local_44;
  long local_40;
  
  __nmemb = (size_t)param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = 0;
  if (0 < param_3) {
    piVar9 = (int *)((long)param_2 + 0x14);
    do {
      *piVar9 = iVar5;
      iVar5 = iVar5 + 1;
      piVar9 = piVar9 + 6;
    } while (param_3 != iVar5);
    qsort(param_2,__nmemb,0x18,rect_height_compare);
    puVar11 = (uint *)((long)param_2 + 4);
    puVar1 = puVar11 + __nmemb * 6;
LAB_00100b76:
    uVar7 = *puVar11;
    uVar13 = 0;
    local_94 = uVar7;
    if (uVar7 != 0) {
      uVar2 = puVar11[1];
      if (uVar2 == 0) {
        local_94 = 0;
        uVar13 = 0;
        goto LAB_00100b62;
      }
      iVar16 = *param_1;
      iVar5 = (uVar7 - 1) + param_1[2];
      iVar5 = iVar5 - iVar5 % param_1[2];
      if ((iVar5 <= iVar16) && (iVar3 = param_1[1], (int)uVar2 <= iVar3)) {
        psVar14 = *(stbrp_context **)(param_1 + 6);
        local_78 = (stbrp_context *)(param_1 + 6);
        uVar15 = *(uint *)psVar14;
        psVar21 = psVar14;
        if (iVar16 < (int)(iVar5 + uVar15)) {
          local_70 = 0x40000000;
          iVar18 = param_1[4];
          uVar13 = 0x40000000;
LAB_00100c9f:
          if (iVar18 == 1) {
            local_94 = 0;
            local_a0 = (stbrp_context *)0x0;
joined_r0x00100e85:
            while (psVar12 = psVar14, (int)uVar15 < iVar5) {
              uVar15 = *(uint *)*(stbrp_context **)(psVar21 + 8);
              psVar21 = *(stbrp_context **)(psVar21 + 8);
            }
            do {
              local_a8 = &local_44;
              uVar15 = uVar15 - iVar5;
              psVar19 = *(stbrp_context **)(psVar14 + 8);
              if ((int)*(uint *)*(stbrp_context **)(psVar14 + 8) <= (int)uVar15) {
                do {
                  local_78 = psVar14;
                  psVar14 = psVar19;
                  psVar19 = *(stbrp_context **)(psVar14 + 8);
                } while ((int)*(uint *)*(stbrp_context **)(psVar14 + 8) <= (int)uVar15);
                local_78 = local_78 + 8;
              }
              uVar6 = stbrp__skyline_find_min_y
                                (psVar14,(stbrp_node *)(ulong)uVar15,iVar5,(int)local_a8,
                                 (int *)psVar12);
              if ((iVar3 < (int)(uVar2 + uVar6)) || ((int)uVar13 < (int)uVar6)) {
LAB_00100f1b:
                psVar21 = *(stbrp_context **)(psVar21 + 8);
              }
              else {
                if (((int)uVar13 <= (int)uVar6) && (local_70 <= local_44)) {
                  if ((local_70 == local_44) && ((int)uVar15 < (int)local_94)) {
                    local_a0 = local_78;
                    local_94 = uVar15;
                    uVar13 = uVar6;
                  }
                  goto LAB_00100f1b;
                }
                psVar21 = *(stbrp_context **)(psVar21 + 8);
                local_a0 = local_78;
                local_94 = uVar15;
                local_70 = local_44;
                uVar13 = uVar6;
              }
              if (psVar21 == (stbrp_context *)0x0) goto LAB_00100f90;
              uVar15 = *(uint *)psVar21;
            } while( true );
          }
          goto LAB_00100cb0;
        }
        uVar13 = 0x40000000;
        local_a0 = (stbrp_context *)0x0;
        local_70 = 0x40000000;
        psVar12 = local_78;
        psVar17 = psVar14;
        psVar19 = psVar14;
        uVar6 = uVar15;
        do {
          uVar6 = stbrp__skyline_find_min_y
                            (psVar19,(stbrp_node *)(ulong)uVar6,iVar5,(int)&local_44,(int *)psVar17)
          ;
          iVar18 = param_1[4];
          if (iVar18 == 0) {
            if ((int)uVar6 < (int)uVar13) goto LAB_00100c34;
          }
          else if ((int)(uVar2 + uVar6) <= iVar3) {
            if ((int)uVar6 < (int)uVar13) {
              local_70 = local_44;
            }
            else {
              if ((uVar6 != uVar13) || (local_70 <= local_44)) goto LAB_00100c3b;
              local_70 = local_44;
            }
LAB_00100c34:
            uVar13 = uVar6;
            local_a0 = psVar12;
          }
LAB_00100c3b:
          psVar12 = psVar19 + 8;
          psVar19 = *(stbrp_context **)(psVar19 + 8);
          uVar6 = *(uint *)psVar19;
        } while ((int)(iVar5 + uVar6) <= iVar16);
        if (local_a0 == (stbrp_context *)0x0) goto LAB_00100c9f;
        local_94 = **(uint **)local_a0;
        if (iVar18 == 1) goto joined_r0x00100e85;
        goto LAB_00100dc4;
      }
      goto LAB_00100cb0;
    }
    goto LAB_00100b62;
  }
  qsort(param_2,__nmemb,0x18,rect_height_compare);
  qsort(param_2,__nmemb,0x18,rect_original_order);
  uVar10 = 1;
LAB_00100d34:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
LAB_00100f90:
  if (local_a0 != (stbrp_context *)0x0) {
LAB_00100dc4:
    if (((int)(uVar2 + uVar13) <= iVar3) &&
       (puVar4 = *(uint **)(param_1 + 8), puVar4 != (uint *)0x0)) {
      *puVar4 = local_94;
      puVar4[1] = uVar2 + uVar13;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(puVar4 + 2);
      piVar9 = *(int **)local_a0;
      if (*piVar9 < (int)local_94) {
        piVar20 = *(int **)(piVar9 + 2);
        *(uint **)(piVar9 + 2) = puVar4;
      }
      else {
        *(uint **)local_a0 = puVar4;
        piVar20 = piVar9;
      }
      iVar5 = uVar7 + local_94;
      piVar9 = *(int **)(piVar20 + 2);
      if (*(int **)(piVar20 + 2) == (int *)0x0) {
LAB_00100e3b:
        piVar8 = piVar20;
        iVar16 = *piVar8;
      }
      else {
        do {
          piVar8 = piVar9;
          iVar16 = *piVar8;
          if (iVar5 < iVar16) goto LAB_00100e3b;
          *(undefined8 *)(piVar20 + 2) = *(undefined8 *)(param_1 + 8);
          piVar9 = *(int **)(piVar8 + 2);
          *(int **)(param_1 + 8) = piVar20;
          piVar20 = piVar8;
        } while (piVar9 != (int *)0x0);
      }
      *(int **)(puVar4 + 2) = piVar8;
      if (iVar16 < iVar5) {
        *piVar8 = iVar5;
      }
LAB_00100b62:
      puVar11[3] = uVar13;
      puVar11[2] = local_94;
      goto joined_r0x00100cc9;
    }
  }
LAB_00100cb0:
  puVar11[3] = 0x7fffffff;
  puVar11[2] = 0x7fffffff;
joined_r0x00100cc9:
  puVar11 = puVar11 + 6;
  if (puVar11 == puVar1) goto LAB_00100ccf;
  goto LAB_00100b76;
LAB_00100ccf:
  piVar20 = (int *)((long)param_2 + 0xc);
  qsort(param_2,__nmemb,0x18,rect_original_order);
  piVar9 = piVar20 + __nmemb * 6;
  uVar10 = 1;
  do {
    uVar7 = 1;
    if (*piVar20 == 0x7fffffff) {
      if (piVar20[1] == 0x7fffffff) {
        uVar10 = 0;
      }
      uVar7 = (uint)(piVar20[1] != 0x7fffffff);
    }
    piVar20[2] = uVar7;
    piVar20 = piVar20 + 6;
  } while (piVar20 != piVar9);
  goto LAB_00100d34;
}



/* Geometry2D::partial_pack_rects(Vector<Vector2i> const&, Vector2i const&) */

Geometry2D * __thiscall
Geometry2D::partial_pack_rects(Geometry2D *this,Vector *param_1,Vector2i *param_2)

{
  long *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  char *pcVar4;
  int *piVar5;
  undefined8 uVar6;
  int iVar7;
  int *piVar8;
  ulong uVar9;
  long lVar10;
  size_t sVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  long in_FS_OFFSET;
  undefined8 *local_a0 [2];
  int *local_90;
  undefined1 local_88 [72];
  long local_40;
  
  lVar14 = (long)*(int *)param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0[0] = (undefined8 *)0x0;
  if (lVar14 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
LAB_00101642:
    sVar11 = 0;
  }
  else {
    if (lVar14 == 0) goto LAB_00101642;
    CowData<stbrp_node>::_copy_on_write((CowData<stbrp_node> *)local_a0);
    sVar11 = lVar14 * 0x10;
    uVar9 = sVar11 - 1 | sVar11 - 1 >> 1;
    uVar9 = uVar9 | uVar9 >> 2;
    uVar9 = uVar9 | uVar9 >> 4;
    uVar9 = uVar9 | uVar9 >> 8;
    uVar9 = uVar9 | uVar9 >> 0x10;
    puVar3 = (undefined8 *)Memory::alloc_static((uVar9 | uVar9 >> 0x20) + 0x11,false);
    if (puVar3 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      if (local_a0[0] == (undefined8 *)0x0) goto LAB_00101642;
      sVar11 = local_a0[0][-1] << 4;
    }
    else {
      local_a0[0] = puVar3 + 2;
      *puVar3 = 1;
      puVar3[1] = lVar14;
    }
  }
  CowData<stbrp_node>::_copy_on_write((CowData<stbrp_node> *)local_a0);
  memset(local_a0[0],0,sVar11);
  CowData<stbrp_node>::_copy_on_write((CowData<stbrp_node> *)local_a0);
  stbrp_init_target(local_88,*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4),local_a0[0]);
  local_90 = (int *)0x0;
  if (*(long *)(param_1 + 8) == 0) {
LAB_00101425:
    iVar7 = 0;
  }
  else {
    lVar14 = *(long *)(*(long *)(param_1 + 8) + -8);
    if (lVar14 < 0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x157,
                       "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
      lVar14 = *(long *)(param_1 + 8);
      if (lVar14 == 0) goto LAB_00101425;
      piVar5 = (int *)0x0;
LAB_0010120e:
      lVar12 = 0;
      do {
        if (*(long *)(lVar14 + -8) <= lVar12) break;
        if (piVar5 == (int *)0x0) goto LAB_00101390;
        lVar14 = *(long *)(piVar5 + -2);
        if (lVar14 <= lVar12) goto LAB_001013b1;
        CowData<stbrp_rect>::_copy_on_write((CowData<stbrp_rect> *)&local_90);
        local_90[lVar12 * 6] = (int)lVar12;
        lVar14 = *(long *)(param_1 + 8);
        lVar15 = lVar12;
        if (lVar14 == 0) {
LAB_001013d8:
          lVar10 = 0;
          goto LAB_001013f9;
        }
        lVar10 = *(long *)(lVar14 + -8);
        if (lVar10 <= lVar12) goto LAB_001013f9;
        iVar7 = *(int *)(lVar14 + lVar12 * 8);
        if (local_90 == (int *)0x0) goto LAB_00101390;
        lVar14 = *(long *)(local_90 + -2);
        if (lVar14 <= lVar12) goto LAB_001013b1;
        CowData<stbrp_rect>::_copy_on_write((CowData<stbrp_rect> *)&local_90);
        local_90[lVar12 * 6 + 1] = iVar7;
        lVar14 = *(long *)(param_1 + 8);
        if (lVar14 == 0) goto LAB_001013d8;
        lVar10 = *(long *)(lVar14 + -8);
        if (lVar10 <= lVar12) goto LAB_001013f9;
        iVar7 = *(int *)(lVar14 + 4 + lVar12 * 8);
        if (local_90 == (int *)0x0) {
LAB_00101390:
          lVar14 = 0;
          goto LAB_001013b1;
        }
        lVar14 = *(long *)(local_90 + -2);
        if (lVar14 <= lVar12) goto LAB_001013b1;
        CowData<stbrp_rect>::_copy_on_write((CowData<stbrp_rect> *)&local_90);
        local_90[lVar12 * 6 + 2] = iVar7;
        if (local_90 == (int *)0x0) goto LAB_00101390;
        lVar14 = *(long *)(local_90 + -2);
        if (lVar14 <= lVar12) goto LAB_001013b1;
        CowData<stbrp_rect>::_copy_on_write((CowData<stbrp_rect> *)&local_90);
        local_90[lVar12 * 6 + 3] = 0;
        if (local_90 == (int *)0x0) goto LAB_00101390;
        lVar14 = *(long *)(local_90 + -2);
        if (lVar14 <= lVar12) goto LAB_001013b1;
        CowData<stbrp_rect>::_copy_on_write((CowData<stbrp_rect> *)&local_90);
        local_90[lVar12 * 6 + 4] = 0;
        if (local_90 == (int *)0x0) goto LAB_00101390;
        lVar14 = *(long *)(local_90 + -2);
        if (lVar14 <= lVar12) goto LAB_001013b1;
        CowData<stbrp_rect>::_copy_on_write((CowData<stbrp_rect> *)&local_90);
        lVar14 = *(long *)(param_1 + 8);
        local_90[lVar12 * 6 + 5] = 0;
        piVar5 = local_90;
        lVar12 = lVar12 + 1;
      } while (lVar14 != 0);
LAB_00101379:
      if (piVar5 == (int *)0x0) goto LAB_00101425;
    }
    else {
      if (lVar14 == 0) goto LAB_00101425;
      CowData<stbrp_rect>::_copy_on_write((CowData<stbrp_rect> *)&local_90);
      if ((lVar14 * 0x18 == 0) ||
         (uVar9 = lVar14 * 0x18 - 1, uVar9 = uVar9 | uVar9 >> 1, uVar9 = uVar9 | uVar9 >> 2,
         uVar9 = uVar9 | uVar9 >> 4, uVar9 = uVar9 | uVar9 >> 8, uVar9 = uVar9 | uVar9 >> 0x10,
         uVar9 = uVar9 | uVar9 >> 0x20, uVar9 == 0xffffffffffffffff)) {
        uVar6 = 0x16a;
        pcVar4 = 
        "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
        ;
LAB_001016a2:
        _err_print_error("resize","./core/templates/cowdata.h",uVar6,pcVar4,0,0);
        lVar14 = *(long *)(param_1 + 8);
        piVar5 = local_90;
        if (lVar14 != 0) goto LAB_0010120e;
        goto LAB_00101379;
      }
      puVar3 = (undefined8 *)Memory::alloc_static(uVar9 + 0x11,false);
      if (puVar3 == (undefined8 *)0x0) {
        uVar6 = 0x171;
        pcVar4 = "Parameter \"mem_new\" is null.";
        goto LAB_001016a2;
      }
      piVar5 = (int *)(puVar3 + 2);
      *puVar3 = 1;
      puVar3[1] = lVar14;
      lVar14 = *(long *)(param_1 + 8);
      local_90 = piVar5;
      if (lVar14 != 0) goto LAB_0010120e;
    }
    iVar7 = piVar5[-2];
  }
  CowData<stbrp_rect>::_copy_on_write((CowData<stbrp_rect> *)&local_90);
  piVar5 = local_90;
  stbrp_pack_rects(local_88,local_90,iVar7);
  lVar14 = *(long *)(param_1 + 8);
  *(undefined8 *)(this + 8) = 0;
  piVar13 = piVar5;
  if (lVar14 == 0) goto LAB_0010170e;
  lVar12 = *(long *)(lVar14 + -8);
  if (lVar12 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    lVar14 = *(long *)(param_1 + 8);
LAB_00101521:
    piVar13 = local_90;
    if (lVar14 == 0) goto LAB_0010170e;
  }
  else if (lVar12 != 0) {
    CowData<Vector3i>::_copy_on_write((CowData<Vector3i> *)(this + 8));
    sVar11 = lVar12 * 0xc;
    if ((sVar11 == 0) ||
       (uVar9 = sVar11 - 1 | sVar11 - 1 >> 1, uVar9 = uVar9 | uVar9 >> 2, uVar9 = uVar9 | uVar9 >> 4
       , uVar9 = uVar9 | uVar9 >> 8, uVar9 = uVar9 | uVar9 >> 0x10, uVar9 = uVar9 | uVar9 >> 0x20,
       uVar9 == 0xffffffffffffffff)) {
      _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                       "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                       ,0,0);
      lVar14 = *(long *)(param_1 + 8);
    }
    else {
      puVar3 = (undefined8 *)Memory::alloc_static(uVar9 + 0x11,false);
      if (puVar3 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
        lVar14 = *(long *)(param_1 + 8);
      }
      else {
        *puVar3 = 1;
        *(undefined8 **)(this + 8) = puVar3 + 2;
        memset(puVar3 + 2,0,sVar11);
        puVar3[1] = lVar12;
        lVar14 = *(long *)(param_1 + 8);
      }
    }
    goto LAB_00101521;
  }
  piVar13 = local_90;
  if (0 < *(long *)(lVar14 + -8)) {
    if (piVar5 == (int *)0x0) {
      lVar15 = 0;
      lVar10 = 0;
LAB_001013f9:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar15,lVar10,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar15 = 0;
    piVar8 = piVar5;
    do {
      lVar10 = *(long *)(piVar5 + -2);
      if (lVar10 <= lVar15) goto LAB_001013f9;
      iVar7 = piVar8[5];
      lVar12 = (long)*piVar8;
      uVar6 = *(undefined8 *)(piVar8 + 3);
      lVar14 = *(long *)(this + 8);
      if (lVar12 < 0) {
        if (lVar14 == 0) {
LAB_0010177b:
          lVar14 = 0;
        }
        else {
LAB_001015ec:
          lVar14 = *(long *)(lVar14 + -8);
        }
LAB_001013b1:
        _err_print_index_error
                  ("operator[]","./core/templates/vector.h",0x38,lVar12,lVar14,"p_index",
                   "((Vector<T> *)(this))->_cowdata.size()","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (lVar14 == 0) goto LAB_0010177b;
      if (*(long *)(lVar14 + -8) <= lVar12) goto LAB_001015ec;
      lVar15 = lVar15 + 1;
      piVar8 = piVar8 + 6;
      CowData<Vector3i>::_copy_on_write((CowData<Vector3i> *)(this + 8));
      puVar3 = (undefined8 *)(*(long *)(this + 8) + lVar12 * 0xc);
      *puVar3 = uVar6;
      *(uint *)(puVar3 + 1) = (uint)(iVar7 != 0);
      piVar13 = local_90;
    } while ((*(long *)(param_1 + 8) != 0) && (lVar15 < *(long *)(*(long *)(param_1 + 8) + -8)));
  }
LAB_0010170e:
  if (piVar13 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(piVar13 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static(local_90 + -4,false);
    }
  }
  if (local_a0[0] != (undefined8 *)0x0) {
    LOCK();
    plVar1 = local_a0[0] + -2;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static(local_a0[0] + -2,false);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* Vector<Vector2>::push_back(Vector2) [clone .isra.0] */

void __thiscall Vector<Vector2>::push_back(undefined8 param_1,Vector<Vector2> *this)

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
  iVar1 = CowData<Vector2>::resize<false>((CowData<Vector2> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<Vector2>::_copy_on_write((CowData<Vector2> *)(this + 8));
        *(undefined8 *)(*(long *)(this + 8) + lVar3 * 8) = param_1;
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



/* CowData<Vector<Vector2> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector<Vector2>>::_copy_on_write(CowData<Vector<Vector2>> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  CowData<Vector2> *this_00;
  long lVar6;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  if (lVar1 * 0x10 != 0) {
    uVar5 = lVar1 * 0x10 - 1;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar3 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  this_00 = (CowData<Vector2> *)(puVar3 + 3);
  lVar6 = 0;
  *puVar3 = 1;
  puVar3[1] = lVar1;
  if (lVar1 != 0) {
    do {
      lVar4 = lVar6 * 0x10 + *(long *)this;
      *(undefined8 *)this_00 = 0;
      if (*(long *)(lVar4 + 8) != 0) {
        CowData<Vector2>::_ref(this_00,(CowData *)(lVar4 + 8));
      }
      lVar6 = lVar6 + 1;
      this_00 = this_00 + 0x10;
    } while (lVar1 != lVar6);
  }
  _unref(this);
  *(undefined8 **)this = puVar3 + 2;
  return;
}



/* Geometry2D::decompose_polygon_in_convex(Vector<Vector2> const&) */

Geometry2D * __thiscall Geometry2D::decompose_polygon_in_convex(Geometry2D *this,Vector *param_1)

{
  CowData<Vector<Vector2>> *this_00;
  long lVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  TPPLPoly *this_01;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long in_FS_OFFSET;
  long local_a8;
  List local_69;
  undefined1 (*local_68) [16];
  long *local_60;
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 8) = 0;
  local_68 = (undefined1 (*) [16])0x0;
  local_60 = (long *)0x0;
  TPPLPoly::TPPLPoly((TPPLPoly *)local_58);
  TPPLPoly::Init((long)local_58);
  lVar7 = *(long *)(param_1 + 8);
  if ((lVar7 != 0) && (lVar6 = *(long *)(lVar7 + -8), 0 < lVar6)) {
    lVar5 = 0;
    do {
      *(undefined8 *)(local_58[0] + lVar5) = *(undefined8 *)(lVar7 + lVar5);
      lVar5 = lVar5 + 8;
    } while (lVar5 != lVar6 << 3);
  }
  TPPLPoly::SetOrientation((TPPLPoly *)local_58,1);
  if (local_68 == (undefined1 (*) [16])0x0) {
    local_68 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined4 *)local_68[1] = 0;
    *local_68 = (undefined1  [16])0x0;
  }
  this_01 = (TPPLPoly *)operator_new(0x30,DefaultAllocator::alloc);
  TPPLPoly::TPPLPoly(this_01);
  *(undefined8 *)(this_01 + 0x28) = 0;
  *(undefined1 (*) [16])(this_01 + 0x18) = (undefined1  [16])0x0;
  TPPLPoly::operator=(this_01,(TPPLPoly *)local_58);
  lVar7 = *(long *)(*local_68 + 8);
  *(undefined8 *)(this_01 + 0x18) = 0;
  *(undefined1 (**) [16])(this_01 + 0x28) = local_68;
  *(long *)(this_01 + 0x20) = lVar7;
  if (lVar7 != 0) {
    *(TPPLPoly **)(lVar7 + 0x18) = this_01;
  }
  lVar7 = *(long *)*local_68;
  *(TPPLPoly **)(*local_68 + 8) = this_01;
  if (lVar7 == 0) {
    *(TPPLPoly **)*local_68 = this_01;
  }
  *(int *)local_68[1] = *(int *)local_68[1] + 1;
  iVar4 = TPPLPartition::ConvexPartition_HM(&local_69,(List *)&local_68);
  if (iVar4 == 0) {
    _err_print_error("decompose_polygon_in_convex","core/math/geometry_2d.cpp",0x36,
                     "Convex decomposing failed!",0,0);
  }
  else {
    lVar7 = 0;
    if (local_60 != (long *)0x0) {
      lVar7 = (long)(int)local_60[2];
    }
    this_00 = (CowData<Vector<Vector2>> *)(this + 8);
    CowData<Vector<Vector2>>::resize<false>(this_00,lVar7);
    if ((local_60 != (long *)0x0) && (plVar8 = (long *)*local_60, plVar8 != (long *)0x0)) {
      local_a8 = 0;
      do {
        if (*(long *)(this + 8) == 0) {
LAB_00101d10:
          lVar7 = 0;
          lVar6 = local_a8;
LAB_00101d33:
          _err_print_index_error
                    ("operator[]","./core/templates/vector.h",0x38,lVar6,lVar7,"p_index",
                     "((Vector<T> *)(this))->_cowdata.size()","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        lVar7 = *(long *)(*(long *)(this + 8) + -8);
        lVar6 = local_a8;
        if (lVar7 <= local_a8) goto LAB_00101d33;
        lVar5 = 0;
        CowData<Vector<Vector2>>::_copy_on_write(this_00);
        CowData<Vector2>::resize<false>
                  ((CowData<Vector2> *)(*(long *)(this + 8) + local_a8 * 0x10 + 8),plVar8[1]);
        if (0 < plVar8[1]) {
          do {
            lVar2 = *plVar8;
            lVar1 = lVar5 * 8;
            if (*(long *)(this + 8) == 0) goto LAB_00101d10;
            lVar7 = *(long *)(*(long *)(this + 8) + -8);
            lVar6 = local_a8;
            if (lVar7 <= local_a8) goto LAB_00101d33;
            CowData<Vector<Vector2>>::_copy_on_write(this_00);
            lVar9 = local_a8 * 0x10 + *(long *)(this + 8);
            lVar6 = lVar5;
            if (*(long *)(lVar9 + 8) == 0) {
              lVar7 = 0;
              goto LAB_00101d33;
            }
            lVar7 = *(long *)(*(long *)(lVar9 + 8) + -8);
            if (lVar7 <= lVar5) goto LAB_00101d33;
            lVar5 = lVar5 + 1;
            CowData<Vector2>::_copy_on_write((CowData<Vector2> *)(lVar9 + 8));
            *(undefined8 *)(*(long *)(lVar9 + 8) + lVar1) = *(undefined8 *)(lVar2 + lVar1);
          } while (lVar5 < plVar8[1]);
        }
        plVar8 = (long *)plVar8[3];
        local_a8 = local_a8 + 1;
      } while (plVar8 != (long *)0x0);
    }
  }
  TPPLPoly::~TPPLPoly((TPPLPoly *)local_58);
  List<TPPLPoly,DefaultAllocator>::~List((List<TPPLPoly,DefaultAllocator> *)&local_60);
  List<TPPLPoly,DefaultAllocator>::~List((List<TPPLPoly,DefaultAllocator> *)&local_68);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Vector<Vector<Vector2> >::push_back(Vector<Vector2>) [clone .isra.0] */

void __thiscall Vector<Vector<Vector2>>::push_back(Vector<Vector<Vector2>> *this,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<Vector<Vector2>>::resize<false>((CowData<Vector<Vector2>> *)(this + 8),lVar3);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar2 = -1;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(*(long *)(this + 8) + -8);
      lVar2 = lVar3 + -1;
      if (-1 < lVar2) {
        CowData<Vector<Vector2>>::_copy_on_write((CowData<Vector<Vector2>> *)(this + 8));
        lVar3 = *(long *)(this + 8) + lVar2 * 0x10;
        if (*(long *)(lVar3 + 8) == *(long *)(param_2 + 8)) {
          return;
        }
        CowData<Vector2>::_ref((CowData<Vector2> *)(lVar3 + 8),(CowData *)(param_2 + 8));
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar2,lVar3,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* CowData<_AtlasWorkRectResult>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<_AtlasWorkRectResult>::_copy_on_write(CowData<_AtlasWorkRectResult> *this)

{
  CowData<_AtlasWorkRect> *pCVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  CowData<_AtlasWorkRect> *pCVar5;
  CowData<_AtlasWorkRect> *this_00;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
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
  if (lVar2 * 0x18 != 0) {
    uVar6 = lVar2 * 0x18 - 1;
    uVar6 = uVar6 | uVar6 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = (uVar6 | uVar6 >> 0x20) + 0x11;
  }
  pCVar5 = (CowData<_AtlasWorkRect> *)Memory::alloc_static(uVar6,false);
  if (pCVar5 == (CowData<_AtlasWorkRect> *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  pCVar1 = pCVar5 + 0x10;
  lVar8 = 0;
  lVar7 = -0x18 - (long)pCVar5;
  *(undefined8 *)pCVar5 = 1;
  *(long *)(pCVar5 + 8) = lVar2;
  if (lVar2 != 0) {
    do {
      this_00 = pCVar5 + 0x18;
      lVar4 = *(long *)this + lVar7;
      *(undefined8 *)this_00 = 0;
      if (*(long *)(this_00 + lVar4 + 8) != 0) {
        CowData<_AtlasWorkRect>::_ref(this_00,(CowData *)(this_00 + lVar4 + 8));
      }
      lVar8 = lVar8 + 1;
      *(undefined8 *)(pCVar5 + 0x20) = *(undefined8 *)(this_00 + lVar4 + 0x10);
      pCVar5 = this_00;
    } while (lVar2 != lVar8);
  }
  _unref(this);
  *(CowData<_AtlasWorkRect> **)this = pCVar1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Geometry2D::make_atlas(Vector<Vector2i> const&, Vector<Vector2i>&, Vector2i&) */

void Geometry2D::make_atlas(Vector *param_1,Vector *param_2,Vector2i *param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  Vector2i *pVVar4;
  long lVar5;
  code *pcVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  char *pcVar13;
  int *piVar14;
  Vector *pVVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  Vector2i *pVVar19;
  long lVar20;
  int iVar21;
  int iVar22;
  long lVar23;
  Vector *pVVar24;
  long lVar25;
  ulong uVar26;
  CowData<Vector2i> *this;
  long lVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  long in_FS_OFFSET;
  float fVar31;
  float fVar32;
  float fVar33;
  Vector *pVVar34;
  Vector2i *pVVar35;
  int local_f8;
  Vector<_AtlasWorkRect> local_b8 [8];
  uint *local_b0 [2];
  long local_a0 [2];
  undefined8 *local_90 [2];
  long local_80;
  undefined8 local_78;
  long local_60;
  int local_58;
  int local_54;
  undefined8 local_48;
  long local_40;
  
  lVar27 = *(long *)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar8 = 0;
  if (lVar27 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar11 = 0x61;
      pcVar13 = "Condition \"p_rects.is_empty()\" is true.";
LAB_001022a9:
      _err_print_error("make_atlas","core/math/geometry_2d.cpp",uVar11,pcVar13,0,0);
      return;
    }
    goto LAB_00102d4f;
  }
  lVar20 = *(long *)(lVar27 + -8);
  if (lVar20 < 1) {
    local_b0[0] = (uint *)0x0;
    if (lVar20 != 0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x157);
      lVar27 = *(long *)(param_1 + 8);
      goto LAB_001021af;
    }
  }
  else {
    do {
      if (*(int *)(lVar27 + lVar8 * 8) < 1) {
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00102d4f;
        uVar11 = 99;
        pcVar13 = "Condition \"p_rects[i].width <= 0\" is true.";
        goto LAB_001022a9;
      }
      if (*(int *)(lVar27 + 4 + lVar8 * 8) < 1) {
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00102d4f;
        uVar11 = 100;
        pcVar13 = "Condition \"p_rects[i].height <= 0\" is true.";
        goto LAB_001022a9;
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 != lVar20);
    local_b0[0] = (uint *)0x0;
    CowData<_AtlasWorkRect>::_copy_on_write((CowData<_AtlasWorkRect> *)local_b0);
    uVar26 = lVar20 * 0x14 - 1;
    uVar26 = uVar26 | uVar26 >> 1;
    uVar26 = uVar26 | uVar26 >> 2;
    uVar26 = uVar26 | uVar26 >> 4;
    uVar26 = uVar26 | uVar26 >> 8;
    uVar26 = uVar26 | uVar26 >> 0x10;
    puVar9 = (undefined8 *)Memory::alloc_static((uVar26 | uVar26 >> 0x20) + 0x11,false);
    if (puVar9 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171);
      lVar27 = *(long *)(param_1 + 8);
    }
    else {
      local_b0[0] = (uint *)(puVar9 + 2);
      *puVar9 = 1;
      puVar10 = local_b0[0];
      do {
        puVar10[0] = 0;
        puVar10[1] = 0;
        puVar18 = puVar10 + 5;
        puVar10[2] = 0;
        puVar10[3] = 0;
        puVar10[4] = 0;
        puVar10 = puVar18;
      } while ((uint *)((long)puVar9 + lVar20 * 0x14 + 0x10) != puVar18);
      puVar9[1] = lVar20;
      lVar27 = *(long *)(param_1 + 8);
    }
LAB_001021af:
    for (lVar8 = 0; (lVar27 != 0 && (lVar8 < *(long *)(lVar27 + -8))); lVar8 = lVar8 + 1) {
      if (local_b0[0] == (uint *)0x0) goto LAB_0010223b;
      lVar20 = *(long *)(local_b0[0] + -2);
      if (lVar20 <= lVar8) goto LAB_0010225c;
      CowData<_AtlasWorkRect>::_copy_on_write((CowData<_AtlasWorkRect> *)local_b0);
      *(undefined8 *)(local_b0[0] + lVar8 * 5) = *(undefined8 *)(lVar27 + lVar8 * 8);
      if (local_b0[0] == (uint *)0x0) goto LAB_0010223b;
      lVar20 = *(long *)(local_b0[0] + -2);
      if (lVar20 <= lVar8) goto LAB_0010225c;
      CowData<_AtlasWorkRect>::_copy_on_write((CowData<_AtlasWorkRect> *)local_b0);
      local_b0[0][lVar8 * 5 + 4] = (uint)lVar8;
      lVar27 = *(long *)(param_1 + 8);
    }
  }
  Vector<_AtlasWorkRect>::sort_custom<_DefaultComparator<_AtlasWorkRect>,true>(local_b8);
  if (local_b0[0] == (uint *)0x0) {
    lVar27 = 0;
  }
  else {
    lVar27 = *(long *)(local_b0[0] + -2);
    if (0 < lVar27) {
      iVar21 = 0;
      local_a0[0] = 0;
      pVVar35 = (Vector2i *)(ulong)*local_b0[0];
      do {
        iVar30 = 1 << ((byte)iVar21 & 0x1f);
        if ((int)pVVar35 <= iVar30) {
          lVar27 = (long)iVar30;
          local_90[0] = (undefined8 *)0x0;
          CowData<int>::_copy_on_write((CowData<int> *)local_90);
          uVar26 = lVar27 * 4 - 1;
          uVar26 = uVar26 | uVar26 >> 1;
          uVar26 = uVar26 | uVar26 >> 2;
          uVar26 = uVar26 | uVar26 >> 4;
          puVar9 = (undefined8 *)Memory::alloc_static((uVar26 | uVar26 >> 8) + 0x11,false);
          if (puVar9 == (undefined8 *)0x0) {
            _err_print_error("resize","./core/templates/cowdata.h",0x171);
          }
          else {
            local_90[0] = puVar9 + 2;
            *puVar9 = 1;
            puVar9[1] = lVar27;
          }
          lVar8 = 0;
          do {
            if (local_90[0] == (undefined8 *)0x0) {
              lVar20 = 0;
              goto LAB_0010225c;
            }
            lVar20 = local_90[0][-1];
            if (lVar20 <= lVar8) goto LAB_0010225c;
            CowData<int>::_copy_on_write((CowData<int> *)local_90);
            *(undefined4 *)((long)local_90[0] + lVar8 * 4) = 0;
            lVar8 = lVar8 + 1;
          } while (lVar8 != lVar27);
          if (local_b0[0] == (uint *)0x0) {
            iVar29 = 0;
            local_80 = 0;
            local_f8 = 0;
          }
          else {
            uVar16 = 0;
            iVar29 = 0;
            iVar7 = 0;
            puVar10 = local_b0[0];
            local_f8 = 0;
            for (lVar23 = 0; lVar23 < *(long *)(puVar10 + -2); lVar23 = lVar23 + 1) {
              uVar2 = puVar10[lVar23 * 5];
              if (iVar30 < (int)(uVar2 + uVar16)) {
                lVar20 = 0;
                uVar16 = 0;
                uVar28 = 0;
                if ((int)uVar2 < 1) goto LAB_00102d19;
LAB_0010260b:
                uVar16 = uVar28;
                if (local_90[0] == (undefined8 *)0x0) goto LAB_00102acb;
                lVar27 = (long)(int)uVar16;
                uVar28 = 0;
                iVar17 = 0;
                do {
                  if ((long)local_90[0][-1] <= lVar20) goto LAB_001027a3;
                  uVar3 = *(uint *)((long)local_90[0] + lVar27 * 4);
                  if ((int)uVar28 < (int)uVar3) {
                    uVar28 = uVar3;
                  }
                  iVar17 = iVar17 + 1;
                  lVar27 = lVar27 + 1;
                  lVar20 = lVar27;
                } while (iVar17 < (int)uVar2);
              }
              else {
                if (0 < (int)uVar2) {
                  lVar20 = (long)(int)uVar16;
                  uVar28 = uVar16;
                  if (-1 < lVar20) goto LAB_0010260b;
                  if (local_90[0] == (undefined8 *)0x0) {
LAB_00102acb:
                    lVar27 = 0;
                  }
                  else {
LAB_001027a3:
                    lVar27 = local_90[0][-1];
                  }
                  goto LAB_00102780;
                }
LAB_00102d19:
                uVar28 = 0;
              }
              CowData<_AtlasWorkRect>::_copy_on_write((CowData<_AtlasWorkRect> *)local_b0);
              local_b0[0][lVar23 * 5 + 2] = uVar16;
              lVar8 = lVar23;
              if (local_b0[0] == (uint *)0x0) {
                lVar20 = 0;
                goto LAB_0010225c;
              }
              lVar20 = *(long *)(local_b0[0] + -2);
              if (lVar20 <= lVar23) goto LAB_0010225c;
              CowData<_AtlasWorkRect>::_copy_on_write((CowData<_AtlasWorkRect> *)local_b0);
              puVar10 = local_b0[0];
              puVar18 = local_b0[0] + lVar23 * 5;
              puVar18[3] = uVar28;
              lVar20 = lVar23;
              if (local_b0[0] == (uint *)0x0) {
                lVar27 = 0;
                goto LAB_00102780;
              }
              lVar27 = *(long *)(local_b0[0] + -2);
              if (lVar27 <= lVar23) goto LAB_00102780;
              iVar17 = puVar18[1] + uVar28;
              uVar2 = *puVar18;
              if (uVar16 == 0) {
                iVar7 = iVar17;
              }
              iVar22 = 0;
              lVar8 = (long)(int)uVar16;
              while( true ) {
                if (lVar27 <= lVar23) goto LAB_00102780;
                if ((int)*puVar18 <= iVar22) break;
                if (lVar8 < 0) {
                  if (local_90[0] == (undefined8 *)0x0) {
                    lVar20 = 0;
                  }
                  else {
LAB_00102cf2:
                    lVar20 = local_90[0][-1];
                  }
                  goto LAB_0010225c;
                }
                if (local_90[0] == (undefined8 *)0x0) {
                  lVar20 = 0;
                  goto LAB_0010225c;
                }
                if ((long)local_90[0][-1] <= lVar8) goto LAB_00102cf2;
                iVar22 = iVar22 + 1;
                CowData<int>::_copy_on_write((CowData<int> *)local_90);
                *(int *)((long)local_90[0] + lVar8 * 4) = iVar17;
                lVar27 = *(long *)(puVar10 + -2);
                lVar8 = lVar8 + 1;
              }
              if (iVar29 < iVar17) {
                iVar29 = iVar17;
              }
              iVar22 = uVar2 + uVar16;
              if ((int)(uVar2 + uVar16) <= local_f8) {
                iVar22 = local_f8;
              }
              if ((uVar16 == 0) || (iVar7 < iVar17)) {
                uVar16 = uVar16 + *puVar18;
              }
              local_f8 = iVar22;
            }
            local_80 = 0;
            local_78 = 0;
            CowData<_AtlasWorkRect>::_ref((CowData<_AtlasWorkRect> *)&local_80,(CowData *)local_b0);
          }
          local_60 = 0;
          local_78 = CONCAT44(iVar29,local_f8);
          if (local_80 != 0) {
            CowData<_AtlasWorkRect>::_ref((CowData<_AtlasWorkRect> *)&local_60,(CowData *)&local_80)
            ;
          }
          local_58 = local_f8;
          if (local_a0[0] == 0) {
            lVar27 = 0;
          }
          else {
            lVar27 = *(long *)(local_a0[0] + -8);
          }
          local_54 = iVar29;
          iVar30 = CowData<_AtlasWorkRectResult>::resize<false>
                             ((CowData<_AtlasWorkRectResult> *)local_a0,lVar27 + 1);
          if (iVar30 == 0) {
            if (local_a0[0] == 0) {
              lVar8 = -1;
              lVar27 = 0;
            }
            else {
              lVar27 = *(long *)(local_a0[0] + -8);
              lVar8 = lVar27 + -1;
              if (-1 < lVar8) {
                CowData<_AtlasWorkRectResult>::_copy_on_write
                          ((CowData<_AtlasWorkRectResult> *)local_a0);
                lVar27 = lVar8 * 0x18 + local_a0[0];
                if (*(long *)(lVar27 + 8) != local_60) {
                  CowData<_AtlasWorkRect>::_ref
                            ((CowData<_AtlasWorkRect> *)(lVar27 + 8),(CowData *)&local_60);
                }
                *(int *)(lVar27 + 0x14) = iVar29;
                *(int *)(lVar27 + 0x10) = local_f8;
                goto LAB_00102ee3;
              }
            }
            _err_print_index_error
                      ("set","./core/templates/cowdata.h",0xcf,lVar8,lVar27,"p_index","size()","",
                       false,false);
          }
          else {
            _err_print_error("push_back","./core/templates/vector.h",0x142,
                             "Condition \"err\" is true. Returning: true");
          }
LAB_00102ee3:
          CowData<_AtlasWorkRect>::_unref((CowData<_AtlasWorkRect> *)&local_60);
          CowData<_AtlasWorkRect>::_unref((CowData<_AtlasWorkRect> *)&local_80);
          if (local_90[0] != (undefined8 *)0x0) {
            LOCK();
            plVar1 = local_90[0] + -2;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static(local_90[0] + -2,false);
            }
          }
        }
        lVar23 = local_a0[0];
        iVar21 = iVar21 + 1;
      } while (iVar21 != 0xd);
      pVVar34 = param_2;
      if (local_a0[0] == 0) {
        lVar8 = *(long *)(param_1 + 8);
        iVar21 = -1;
        if (lVar8 != 0) goto LAB_001027d4;
        lVar20 = *(long *)(param_2 + 8);
        if (lVar20 == 0) {
          lVar20 = -1;
          lVar27 = 0;
          goto LAB_00102780;
        }
LAB_00102d3f:
        if (*(long *)(lVar20 + -8) != 0) {
          iVar21 = -1;
LAB_00102bcb:
          LOCK();
          plVar1 = (long *)(lVar20 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar27 = *(long *)(param_2 + 8);
            *(undefined8 *)(param_2 + 8) = 0;
            Memory::free_static((void *)(lVar27 + -0x10),false);
            lVar8 = *(long *)(param_1 + 8);
          }
          else {
            *(undefined8 *)(param_2 + 8) = 0;
            lVar8 = *(long *)(param_1 + 8);
          }
          goto LAB_0010293f;
        }
        lVar20 = -1;
LAB_00102da1:
        if (lVar23 == 0) {
          lVar27 = 0;
          goto LAB_00102780;
        }
      }
      else {
        lVar27 = *(long *)(local_a0[0] + -8);
        if (lVar27 < 1) {
          lVar8 = *(long *)(param_1 + 8);
          iVar21 = -1;
          if (lVar8 == 0) {
            lVar20 = *(long *)(param_2 + 8);
            if (lVar20 == 0) {
              lVar20 = -1;
              goto LAB_00102780;
            }
            goto LAB_00102d3f;
          }
LAB_001027d4:
          pVVar4 = *(Vector2i **)(lVar8 + -8);
          this = (CowData<Vector2i> *)(param_2 + 8);
          if ((long)pVVar4 < 0) {
            _err_print_error("resize","./core/templates/cowdata.h",0x157,
                             "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,
                             0);
            lVar8 = *(long *)(param_1 + 8);
          }
          else {
            lVar20 = *(long *)(param_2 + 8);
            if (lVar20 == 0) {
              if (pVVar4 != (Vector2i *)0x0) {
                CowData<Vector2i>::_copy_on_write(this);
                pVVar19 = (Vector2i *)0x0;
                pVVar15 = (Vector *)0x0;
                goto LAB_0010286e;
              }
            }
            else {
              pVVar19 = *(Vector2i **)(lVar20 + -8);
              if (pVVar4 != pVVar19) {
                if (pVVar4 == (Vector2i *)0x0) goto LAB_00102bcb;
                CowData<Vector2i>::_copy_on_write(this);
                pVVar15 = (Vector *)((long)pVVar19 * 8);
                pVVar35 = pVVar19;
                if (pVVar15 != (Vector *)0x0) {
                  uVar26 = (ulong)(pVVar15 + -1) | (ulong)(pVVar15 + -1) >> 1;
                  uVar26 = uVar26 | uVar26 >> 2;
                  uVar26 = uVar26 | uVar26 >> 4;
                  uVar26 = uVar26 | uVar26 >> 8;
                  uVar26 = uVar26 | uVar26 >> 0x10;
                  pVVar15 = (Vector *)((uVar26 | uVar26 >> 0x20) + 1);
                }
LAB_0010286e:
                if ((long)pVVar4 * 8 != 0) {
                  uVar26 = (long)pVVar4 * 8 - 1;
                  uVar26 = uVar26 | uVar26 >> 1;
                  uVar26 = uVar26 | uVar26 >> 2;
                  uVar26 = uVar26 | uVar26 >> 4;
                  uVar26 = uVar26 | uVar26 >> 8;
                  uVar26 = uVar26 | uVar26 >> 0x10;
                  uVar26 = uVar26 | uVar26 >> 0x20;
                  pVVar24 = (Vector *)(uVar26 + 1);
                  if (pVVar24 != (Vector *)0x0) {
                    if ((long)pVVar19 < (long)pVVar4) {
                      if (pVVar24 == pVVar15) {
                        puVar9 = *(undefined8 **)(pVVar34 + 8);
                        if (puVar9 == (undefined8 *)0x0) {
                          make_atlas((Vector *)this,pVVar24,pVVar19);
                          return;
                        }
                      }
                      else {
                        if (pVVar19 == (Vector2i *)0x0) {
                          puVar9 = (undefined8 *)Memory::alloc_static(uVar26 + 0x11,false);
                          if (puVar9 == (undefined8 *)0x0) {
                            _err_print_error("resize","./core/templates/cowdata.h",0x171,
                                             "Parameter \"mem_new\" is null.",0,0);
                            lVar8 = *(long *)(param_1 + 8);
                            goto LAB_0010293f;
                          }
                          *puVar9 = 1;
                          puVar9[1] = 0;
                        }
                        else {
                          pVVar35 = *(Vector2i **)(pVVar34 + 8);
                          puVar9 = (undefined8 *)
                                   Memory::realloc_static(pVVar35 + -0x10,uVar26 + 0x11,false);
                          if (puVar9 == (undefined8 *)0x0) goto LAB_00102fc3;
                          *puVar9 = 1;
                        }
                        puVar9 = puVar9 + 2;
                        *(undefined8 **)(pVVar34 + 8) = puVar9;
                      }
                      lVar27 = puVar9[-1];
                      if (lVar27 < (long)pVVar4) {
                        memset(puVar9 + lVar27,0,((long)pVVar4 - lVar27) * 8);
                      }
                      puVar9[-1] = pVVar4;
                      lVar8 = *(long *)(param_1 + 8);
                    }
                    else {
                      puVar9 = *(undefined8 **)(pVVar34 + 8);
                      if (pVVar24 == pVVar15) {
                        if (puVar9 == (undefined8 *)0x0) {
                          _DAT_00000000 = 0;
                    /* WARNING: Does not return */
                          pcVar6 = (code *)invalidInstructionException();
                          (*pcVar6)();
                        }
                      }
                      else {
                        puVar12 = (undefined8 *)
                                  Memory::realloc_static(puVar9 + -2,uVar26 + 0x11,false);
                        if (puVar12 == (undefined8 *)0x0) {
LAB_00102fc3:
                          _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                                           "Parameter \"mem_new\" is null.",0,0,pVVar34,pVVar35);
                          lVar8 = *(long *)(param_1 + 8);
                          goto LAB_0010293f;
                        }
                        puVar9 = puVar12 + 2;
                        *puVar12 = 1;
                        *(undefined8 **)(pVVar34 + 8) = puVar9;
                      }
                      puVar9[-1] = pVVar4;
                      lVar8 = *(long *)(param_1 + 8);
                    }
                    goto LAB_0010293f;
                  }
                }
                _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                                 "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                                 ,0,0);
                lVar8 = *(long *)(param_1 + 8);
              }
            }
          }
LAB_0010293f:
          pVVar15 = param_2 + 8;
          lVar25 = (long)iVar21;
          if (lVar8 == 0) {
LAB_00102b70:
            lVar20 = lVar25;
            if (lVar20 < 0) goto LAB_00102da1;
            goto LAB_00102b7c;
          }
          lVar20 = 0;
          do {
            if (*(long *)(lVar8 + -8) <= lVar20) goto LAB_00102b70;
            if (lVar23 == 0) {
LAB_00102b11:
              lVar27 = 0;
              lVar20 = lVar25;
              goto LAB_00102780;
            }
            if (iVar21 < 0) {
              if (lVar23 == 0) goto LAB_00102b11;
LAB_00102ad3:
              lVar27 = *(long *)(lVar23 + -8);
              lVar20 = lVar25;
              goto LAB_00102780;
            }
            if (*(long *)(lVar23 + -8) <= lVar25) goto LAB_00102ad3;
            lVar5 = *(long *)(lVar23 + lVar25 * 0x18 + 8);
            if (lVar5 == 0) {
              lVar27 = 0;
              goto LAB_00102780;
            }
            lVar27 = *(long *)(lVar5 + -8);
            if (lVar27 <= lVar20) goto LAB_00102780;
            lVar5 = lVar5 + lVar20 * 0x14;
            lVar27 = *(long *)(pVVar34 + 8);
            lVar8 = (long)*(int *)(lVar5 + 0x10);
            if (lVar8 < 0) {
              if (lVar27 == 0) {
LAB_0010223b:
                lVar20 = 0;
              }
              else {
LAB_00102b03:
                lVar20 = *(long *)(lVar27 + -8);
              }
LAB_0010225c:
              _err_print_index_error
                        ("operator[]","./core/templates/vector.h",0x38,lVar8,lVar20,"p_index",
                         "((Vector<T> *)(this))->_cowdata.size()","",false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar6 = (code *)invalidInstructionException();
              (*pcVar6)();
            }
            if (lVar27 == 0) goto LAB_0010223b;
            if (*(long *)(lVar27 + -8) <= lVar8) goto LAB_00102b03;
            lVar20 = lVar20 + 1;
            CowData<Vector2i>::_copy_on_write((CowData<Vector2i> *)pVVar15);
            *(undefined8 *)(*(long *)(pVVar34 + 8) + lVar8 * 8) = *(undefined8 *)(lVar5 + 8);
            lVar8 = *(long *)(param_1 + 8);
          } while (lVar8 != 0);
        }
        else {
          piVar14 = (int *)(local_a0[0] + 0x10);
          iVar30 = 0;
          iVar21 = -1;
          fVar32 = _LC42;
          do {
            iVar29 = *piVar14;
            if (piVar14[1] == 0) {
              fVar33 = 0.0;
              if (iVar29 != 0) goto LAB_0010243c;
            }
            else {
              uVar16 = piVar14[1] - 1;
              fVar31 = 0.0;
              uVar16 = uVar16 | uVar16 >> 1;
              uVar16 = uVar16 | uVar16 >> 2;
              uVar16 = uVar16 | uVar16 >> 4;
              uVar16 = uVar16 | uVar16 >> 8;
              fVar33 = (float)((uVar16 | uVar16 >> 0x10) + 1);
              if (iVar29 != 0) {
LAB_0010243c:
                uVar16 = iVar29 - 1U | iVar29 - 1U >> 1;
                uVar16 = uVar16 | uVar16 >> 2;
                uVar16 = uVar16 | uVar16 >> 4;
                uVar16 = uVar16 | uVar16 >> 8;
                fVar31 = (float)((uVar16 | uVar16 >> 0x10) + 1);
              }
              if (fVar31 < fVar33) {
                fVar31 = fVar33 / fVar31;
              }
              else {
                fVar31 = fVar31 / fVar33;
              }
              if (fVar31 < fVar32) {
                fVar32 = fVar31;
                iVar21 = iVar30;
              }
            }
            iVar30 = iVar30 + 1;
            piVar14 = piVar14 + 6;
          } while (iVar30 != (int)lVar27);
          lVar8 = *(long *)(param_1 + 8);
          if (lVar8 != 0) goto LAB_001027d4;
          lVar20 = *(long *)(param_2 + 8);
          if (lVar20 != 0) {
            lVar25 = (long)iVar21;
            if (*(long *)(lVar20 + -8) != 0) goto LAB_00102bcb;
            goto LAB_00102b70;
          }
          lVar20 = (long)iVar21;
          if (lVar20 < 0) goto LAB_00102780;
LAB_00102b7c:
          lVar27 = 0;
          lVar25 = lVar20;
          if (lVar23 == 0) goto LAB_00102780;
        }
        lVar20 = lVar25;
        if (lVar20 < *(long *)(lVar23 + -8)) {
          uVar11 = *(undefined8 *)(lVar23 + 0x10 + lVar20 * 0x18);
          local_48 = CONCAT44((float)(int)((ulong)uVar11 >> 0x20),(float)(int)uVar11);
          uVar11 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_48);
          *(undefined8 *)param_3 = uVar11;
          CowData<_AtlasWorkRectResult>::_unref((CowData<_AtlasWorkRectResult> *)local_a0);
          CowData<_AtlasWorkRect>::_unref((CowData<_AtlasWorkRect> *)local_b0);
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
LAB_00102d4f:
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
      }
      lVar27 = *(long *)(lVar23 + -8);
      goto LAB_00102780;
    }
  }
  lVar20 = 0;
LAB_00102780:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar20,lVar27,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}



/* std::back_insert_iterator<std::vector<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > >, std::allocator<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > > > >
   std::transform<__gnu_cxx::__normal_iterator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > const*,
   std::vector<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> >
   >, std::allocator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > > > >,
   std::back_insert_iterator<std::vector<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > >, std::allocator<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > > > >, Clipper2Lib::ScalePaths<long,
   double>(std::vector<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > >,
   std::allocator<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double>
   > > > > const&, double, double, int&)::{lambda(auto:1
   const&)#1}>(__gnu_cxx::__normal_iterator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > const*,
   std::vector<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> >
   >, std::allocator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > > > >,
   __gnu_cxx::__normal_iterator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > const*,
   std::vector<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> >
   >, std::allocator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > > > >,
   std::back_insert_iterator<std::vector<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > >, std::allocator<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > > > >, Clipper2Lib::ScalePaths<long,
   double>(std::vector<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > >,
   std::allocator<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double>
   > > > > const&, double, double, int&)::{lambda(auto:1 const&)#1}) [clone .isra.0] */

void std::
     transform<__gnu_cxx::__normal_iterator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>const*,std::vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>>,std::back_insert_iterator<std::vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>>,Clipper2Lib::ScalePaths<long,double>(std::vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>const&,double,double,int&)::_lambda(auto:1_const&)_1_>
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  double *pdVar13;
  undefined8 *puVar14;
  double *pdVar15;
  long in_FS_OFFSET;
  double dVar16;
  double dVar17;
  uint *in_stack_00000008;
  double in_stack_00000010;
  double in_stack_00000018;
  double local_98;
  double local_90;
  long local_68;
  long lStack_60;
  undefined1 local_58 [16];
  long *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != param_2) {
    do {
      local_48 = (long *)0x0;
      local_58 = (undefined1  [16])0x0;
      if (in_stack_00000018 == 0.0 || in_stack_00000010 == 0.0) {
        *in_stack_00000008 = *in_stack_00000008 | 2;
        if (in_stack_00000010 == 0.0) {
          if (in_stack_00000018 == 0.0) {
            local_98 = _LC49;
            local_90 = local_98;
          }
          else {
            local_98 = _LC49;
            local_90 = in_stack_00000018;
          }
        }
        else {
          local_98 = in_stack_00000010;
          local_90 = _LC49;
        }
      }
      else {
        local_90 = in_stack_00000018;
        local_98 = in_stack_00000010;
      }
      pdVar15 = (double *)param_1[1];
      pdVar13 = (double *)*param_1;
      uVar12 = (long)pdVar15 - (long)pdVar13;
      if (0x7ffffffffffffff0 < uVar12) {
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("vector::reserve");
      }
      if (uVar12 != 0) {
        local_58._8_8_ = operator_new(uVar12);
        pdVar15 = (double *)param_1[1];
        local_48 = (long *)(local_58._8_8_ + uVar12);
        pdVar13 = (double *)*param_1;
        local_58._0_8_ = local_58._8_8_;
      }
      for (; pdVar15 != pdVar13; pdVar13 = pdVar13 + 2) {
        while( true ) {
          dVar16 = round(local_98 * *pdVar13);
          dVar17 = round(local_90 * pdVar13[1]);
          local_68 = (long)dVar16;
          lStack_60 = (long)dVar17;
          if ((long *)local_58._8_8_ != local_48) break;
          pdVar13 = pdVar13 + 2;
          vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::
          _M_realloc_insert<Clipper2Lib::Point<long>>
                    ((vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>> *)
                     local_58,local_58._8_8_,&local_68);
          if (pdVar15 == pdVar13) goto LAB_001032d0;
        }
        *(long *)local_58._8_8_ = local_68;
        *(long *)(local_58._8_8_ + 8) = lStack_60;
        local_58._8_8_ = (long *)(local_58._8_8_ + 0x10);
      }
LAB_001032d0:
      puVar14 = (undefined8 *)param_3[1];
      puVar11 = (undefined8 *)param_3[2];
      if (puVar14 == puVar11) {
        puVar1 = (undefined8 *)*param_3;
        puVar9 = (undefined8 *)((long)puVar14 - (long)puVar1);
        uVar12 = ((long)puVar9 >> 3) * -0x5555555555555555;
        if (uVar12 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
          std::__throw_length_error("vector::_M_realloc_insert");
        }
        if (puVar14 == puVar1) {
          uVar7 = uVar12 + 1;
          if (0xfffffffffffffffe < uVar12) goto LAB_00103475;
          if (0x555555555555555 < uVar7) {
            uVar7 = 0x555555555555555;
          }
          uVar7 = uVar7 * 0x18;
LAB_0010347f:
          puVar6 = (undefined8 *)operator_new(uVar7);
          plVar4 = local_48;
          uVar2 = local_58._0_8_;
          uVar3 = local_58._8_8_;
          puVar11 = (undefined8 *)param_3[2];
          local_58 = (undefined1  [16])0x0;
          puVar9 = (undefined8 *)((long)puVar9 + (long)puVar6);
          lVar8 = uVar7 + (long)puVar6;
          local_48 = (long *)0x0;
          *puVar9 = uVar2;
          puVar9[1] = uVar3;
          puVar9[2] = plVar4;
          puVar9 = puVar1;
          puVar10 = puVar6;
          if (puVar14 != puVar1) goto LAB_00103410;
          puVar14 = puVar6 + 3;
        }
        else {
          uVar7 = ((long)puVar9 >> 3) * 0x5555555555555556;
          if (uVar7 < uVar12) {
LAB_00103475:
            uVar7 = 0x7ffffffffffffff8;
            goto LAB_0010347f;
          }
          if (uVar7 != 0) {
            if (0x555555555555555 < uVar7) {
              uVar7 = 0x555555555555555;
            }
            uVar7 = uVar7 * 0x18;
            goto LAB_0010347f;
          }
          lVar8 = 0;
          puVar9[2] = local_48;
          *puVar9 = local_58._0_8_;
          puVar9[1] = local_58._8_8_;
          puVar6 = (undefined8 *)0x0;
          puVar9 = puVar1;
          puVar10 = puVar6;
LAB_00103410:
          do {
            uVar3 = puVar9[1];
            uVar2 = puVar9[2];
            puVar5 = puVar9 + 3;
            *puVar6 = *puVar9;
            puVar6[1] = uVar3;
            puVar6[2] = uVar2;
            puVar9 = puVar5;
            puVar6 = puVar6 + 3;
          } while (puVar14 != puVar5);
          puVar14 = (undefined8 *)
                    ((long)puVar10 +
                    ((long)puVar14 + (-0x18 - (long)puVar1) & 0xfffffffffffffff8U) + 0x30);
          puVar6 = puVar10;
        }
        if (puVar1 != (undefined8 *)0x0) {
          operator_delete(puVar1,(long)puVar11 - (long)puVar1);
        }
        *param_3 = puVar6;
        param_3[1] = puVar14;
        param_3[2] = lVar8;
      }
      else {
        *puVar14 = local_58._0_8_;
        puVar14[1] = local_58._8_8_;
        puVar14[2] = local_48;
        param_3[1] = puVar14 + 3;
      }
      param_1 = param_1 + 3;
    } while (param_2 != param_1);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Geometry2D::_polypaths_do_operation(Geometry2D::PolyBooleanOperation, Vector<Vector2> const&,
   Vector<Vector2> const&, bool) */

Geometry2D * __thiscall
Geometry2D::_polypaths_do_operation
          (Geometry2D *this,int param_2,long param_3,long param_4,char param_5)

{
  undefined **ppuVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  double dVar6;
  double *pdVar7;
  undefined8 uVar8;
  char cVar9;
  undefined1 (*__src) [16];
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  ulong uVar12;
  undefined1 (*pauVar13) [16];
  void *pvVar14;
  double *pdVar15;
  double *pdVar16;
  undefined *puVar17;
  size_t sVar18;
  long lVar19;
  long lVar20;
  undefined1 (*extraout_RDX) [16];
  ulong uVar21;
  undefined1 auVar22 [8];
  undefined8 *puVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  undefined4 uVar27;
  long in_FS_OFFSET;
  bool bVar28;
  byte bVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double local_298;
  double local_288;
  double local_278;
  void *local_270;
  vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
  *local_260;
  PolyPathD *local_258;
  undefined1 (*local_240) [16];
  Vector<Vector2> local_238 [8];
  undefined **local_230;
  undefined1 local_228 [16];
  long local_218;
  uint *local_208;
  double dStack_200;
  double dStack_1f8;
  uint *local_1e8;
  double dStack_1e0;
  double dStack_1d8;
  uint *local_1c8;
  double dStack_1c0;
  double dStack_1b8;
  undefined1 local_1a8 [8];
  undefined **ppuStack_1a0;
  long local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined1 local_178 [16];
  undefined8 local_168;
  undefined **local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  uint local_7c;
  undefined1 local_77;
  undefined1 local_70 [16];
  undefined8 local_60;
  double local_58;
  undefined8 uStack_50;
  long local_40;
  
  bVar29 = 0;
  uVar27 = 2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 - 1U < 3) {
    uVar27 = *(undefined4 *)(CSWTCH_1319 + (ulong)(param_2 - 1U) * 4);
  }
  lVar20 = *(long *)(param_3 + 8);
  if (lVar20 == 0) {
    pauVar13 = (undefined1 (*) [16])0x0;
    __src = (undefined1 (*) [16])0x0;
  }
  else {
    uVar12 = *(ulong *)(lVar20 + -8);
    if (uVar12 >> 0x3b != 0) goto LAB_00104604;
    if (uVar12 == 0) {
      pauVar13 = (undefined1 (*) [16])0x0;
      __src = (undefined1 (*) [16])0x0;
    }
    else {
      __src = (undefined1 (*) [16])operator_new(uVar12 * 0x10);
      pauVar13 = __src + uVar12;
      pauVar10 = __src;
      do {
        *pauVar10 = (undefined1  [16])0x0;
        pauVar10 = pauVar10 + 1;
      } while (pauVar10 != pauVar13);
      lVar20 = *(long *)(param_3 + 8);
      if (lVar20 == 0) goto LAB_0010362f;
    }
    lVar26 = *(long *)(lVar20 + -8);
    for (lVar19 = 0; lVar19 != lVar26; lVar19 = lVar19 + 1) {
      if (lVar26 <= lVar19) goto LAB_00103f70;
      uVar3 = *(undefined8 *)(lVar20 + lVar19 * 8);
      *(double *)__src[lVar19] = (double)(float)uVar3;
      *(double *)(__src[lVar19] + 8) = (double)(float)((ulong)uVar3 >> 0x20);
    }
  }
LAB_0010362f:
  lVar20 = *(long *)(param_4 + 8);
  if (lVar20 == 0) goto LAB_001043dd;
  uVar12 = *(ulong *)(lVar20 + -8);
  if (uVar12 >> 0x3b != 0) {
LAB_00104604:
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("cannot create std::vector larger than max_size()");
  }
  if (uVar12 == 0) {
    local_240 = (undefined1 (*) [16])0x0;
    pauVar10 = (undefined1 (*) [16])0x0;
  }
  else {
    pauVar10 = (undefined1 (*) [16])operator_new(uVar12 * 0x10);
    local_240 = pauVar10 + uVar12;
    pauVar11 = pauVar10;
    do {
      *pauVar11 = (undefined1  [16])0x0;
      pauVar11 = pauVar11 + 1;
    } while (pauVar11 != local_240);
    lVar20 = *(long *)(param_4 + 8);
    if (lVar20 == 0) goto LAB_001036b7;
  }
  lVar26 = *(long *)(lVar20 + -8);
  for (lVar19 = 0; lVar26 != lVar19; lVar19 = lVar19 + 1) {
    if (lVar26 <= lVar19) {
LAB_00103f70:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar19,lVar26,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    uVar3 = *(undefined8 *)(lVar20 + lVar19 * 8);
    *(double *)pauVar10[lVar19] = (double)(float)uVar3;
    *(double *)(pauVar10[lVar19] + 8) = (double)(float)((ulong)uVar3 >> 0x20);
  }
LAB_001036b7:
  do {
    local_60 = 0;
    puVar23 = &local_150;
    for (lVar20 = 0x1c; lVar20 != 0; lVar20 = lVar20 + -1) {
      *puVar23 = 0;
      puVar23 = puVar23 + (ulong)bVar29 * -2 + 1;
    }
    local_148 = 2;
    local_158 = &PTR__ClipperD_00108b80;
    local_120 = (undefined1  [16])0x0;
    uVar12 = (long)pauVar13 - (long)__src;
    local_110 = (undefined1  [16])0x0;
    local_100 = (undefined1  [16])0x0;
    local_f0 = (undefined1  [16])0x0;
    local_e0 = (undefined1  [16])0x0;
    local_c8 = (undefined1  [16])0x0;
    local_b8 = (undefined1  [16])0x0;
    local_a8 = (undefined1  [16])0x0;
    local_98 = (undefined1  [16])0x0;
    local_70 = (undefined1  [16])0x0;
    local_77 = 1;
    local_58 = __LC55;
    uStack_50 = _UNK_00108be8;
    if (param_5 == '\0') {
      if (uVar12 == 0) {
        local_270 = (void *)0x0;
LAB_00104006:
        if (__src == pauVar13) goto LAB_001042d3;
        local_298 = (double)((long)pauVar13 - (long)__src);
        memcpy(local_270,__src,(size_t)local_298);
        pauVar13 = (undefined1 (*) [16])operator_new(0x18);
        *(undefined8 *)pauVar13[1] = 0;
        *pauVar13 = (undefined1  [16])0x0;
        if (local_298 == 0.0) {
          sVar18 = 0;
          pvVar14 = (void *)0x0;
LAB_00104075:
          *(void **)*pauVar13 = pvVar14;
          *(size_t *)pauVar13[1] = sVar18 + (long)pvVar14;
          if (local_298 == 0.0) goto LAB_001042f8;
          pdVar15 = (double *)memcpy(pvVar14,local_270,(size_t)local_298);
          *(double **)(*pauVar13 + 8) = (double *)((long)local_298 + (long)pdVar15);
          pdVar7 = pdVar15;
          dVar32 = _LC52;
          dVar33 = _LC52;
          dVar31 = _LC53;
          dVar30 = _LC53;
          do {
            dVar34 = dVar31;
            if (pdVar7 == (double *)((long)local_298 + (long)pdVar15)) goto LAB_0010413a;
            dVar35 = *pdVar7;
            pdVar16 = pdVar7 + 2;
            dVar6 = dVar35;
            if (dVar35 <= dVar32) {
              dVar6 = dVar32;
            }
            if (dVar30 <= dVar35) {
              dVar35 = dVar30;
            }
            dVar31 = pdVar7[1];
            dVar30 = dVar31;
            if (dVar31 <= dVar33) {
              dVar30 = dVar33;
            }
            pdVar7 = pdVar16;
            dVar32 = dVar6;
            dVar33 = dVar30;
            dVar30 = dVar35;
            if (dVar34 <= dVar31) {
              dVar31 = dVar34;
            }
          } while( true );
        }
        if ((ulong)local_298 < 0x7ffffffffffffff1) {
          pvVar14 = operator_new((ulong)local_298);
          sVar18 = (size_t)local_298;
          goto LAB_00104075;
        }
        goto LAB_001042c5;
      }
      if (uVar12 < 0x7ffffffffffffff1) {
        local_270 = operator_new(uVar12);
        goto LAB_00104006;
      }
    }
    else {
      if (uVar12 == 0) {
        local_270 = (void *)0x0;
      }
      else {
        if (0x7ffffffffffffff0 < uVar12) goto LAB_001043d8;
        local_270 = operator_new(uVar12);
      }
      if (__src == pauVar13) {
        pauVar13 = (undefined1 (*) [16])operator_new(0x18);
        pvVar14 = (void *)0x0;
        *pauVar13 = (undefined1  [16])0x0;
        *(undefined8 *)*pauVar13 = 0;
        *(undefined8 *)pauVar13[1] = 0;
LAB_00104376:
        *(void **)(*pauVar13 + 8) = pvVar14;
        dVar30 = _LC53;
        dVar31 = _LC52;
        dVar33 = _LC53;
        dVar32 = _LC52;
        goto LAB_001038da;
      }
      local_298 = (double)((long)pauVar13 - (long)__src);
      memcpy(local_270,__src,(size_t)local_298);
      pauVar13 = (undefined1 (*) [16])operator_new(0x18);
      *(undefined8 *)pauVar13[1] = 0;
      *pauVar13 = (undefined1  [16])0x0;
      if (local_298 == 0.0) {
        sVar18 = 0;
        pvVar14 = (void *)0x0;
LAB_00103816:
        *(void **)*pauVar13 = pvVar14;
        *(size_t *)pauVar13[1] = sVar18 + (long)pvVar14;
        if (local_298 == 0.0) goto LAB_00104376;
        pdVar15 = (double *)memcpy(pvVar14,local_270,(size_t)local_298);
        *(double **)(*pauVar13 + 8) = (double *)((long)local_298 + (long)pdVar15);
        pdVar7 = pdVar15;
        dVar31 = _LC52;
        dVar32 = _LC52;
        dVar34 = _LC53;
        dVar30 = _LC53;
        while (dVar33 = dVar34, pdVar7 != (double *)((long)local_298 + (long)pdVar15)) {
          dVar35 = *pdVar7;
          pdVar16 = pdVar7 + 2;
          dVar6 = dVar35;
          if (dVar35 <= dVar31) {
            dVar6 = dVar31;
          }
          if (dVar30 <= dVar35) {
            dVar35 = dVar30;
          }
          dVar34 = pdVar7[1];
          dVar30 = dVar34;
          if (dVar34 <= dVar32) {
            dVar30 = dVar32;
          }
          pdVar7 = pdVar16;
          dVar31 = dVar6;
          dVar32 = dVar30;
          dVar30 = dVar35;
          if (dVar33 <= dVar34) {
            dVar34 = dVar33;
          }
        }
LAB_001038da:
        dVar34 = local_58;
        local_288 = _LC53;
        local_298 = _LC52;
        local_198 = 0;
        _local_1a8 = (undefined1  [16])0x0;
        local_278 = _LC56;
        if ((((dVar30 * local_58 < _LC56) || (_LC57 < dVar31 * local_58)) ||
            (dVar33 * local_58 < _LC56)) || (_LC57 < dVar32 * local_58)) {
          local_7c = local_7c | 0x40;
        }
        else {
          std::
          vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
          ::reserve((vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
                     *)local_1a8,1);
          local_208 = &local_7c;
          dStack_200 = dVar34;
          dStack_1f8 = dVar34;
          std::
          transform<__gnu_cxx::__normal_iterator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>const*,std::vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>>,std::back_insert_iterator<std::vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>>,Clipper2Lib::ScalePaths<long,double>(std::vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>const&,double,double,int&)::_lambda(auto:1_const&)_1_>
                    (pauVar13,pauVar13[1] + 8,
                     (vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
                      *)local_1a8);
        }
        local_260 = (vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
                     *)local_1a8;
        Clipper2Lib::ClipperBase::AddPaths(&local_158,local_260,0);
        ppuVar1 = ppuStack_1a0;
        auVar22 = local_1a8;
        if ((undefined1  [8])ppuStack_1a0 == local_1a8) goto LAB_001039af;
        do {
          pvVar14 = *(void **)auVar22;
          if (pvVar14 != (void *)0x0) {
            operator_delete(pvVar14,*(long *)((long)auVar22 + 0x10) - (long)pvVar14);
          }
          auVar22 = (undefined1  [8])((long)auVar22 + 0x18);
          if ((undefined1  [8])ppuVar1 == auVar22) goto LAB_0010399d;
        } while( true );
      }
      if ((ulong)local_298 < 0x7ffffffffffffff1) {
        pvVar14 = operator_new((ulong)local_298);
        sVar18 = (size_t)local_298;
        goto LAB_00103816;
      }
LAB_001042c5:
      if (-1 < (long)local_298) {
LAB_001042ce:
        std::__throw_bad_alloc();
LAB_001042d3:
        pauVar13 = (undefined1 (*) [16])operator_new(0x18);
        pvVar14 = (void *)0x0;
        *pauVar13 = (undefined1  [16])0x0;
        *(undefined8 *)*pauVar13 = 0;
        *(undefined8 *)pauVar13[1] = 0;
LAB_001042f8:
        *(void **)(*pauVar13 + 8) = pvVar14;
        dVar30 = _LC53;
        dVar32 = _LC52;
        dVar34 = _LC53;
        dVar33 = _LC52;
LAB_0010413a:
        dVar31 = local_58;
        local_288 = _LC53;
        local_298 = _LC52;
        local_198 = 0;
        _local_1a8 = (undefined1  [16])0x0;
        local_278 = _LC56;
        if (((dVar30 * local_58 < _LC56) || (_LC57 < dVar32 * local_58)) ||
           ((dVar34 * local_58 < _LC56 || (_LC57 < local_58 * dVar33)))) {
          local_7c = local_7c | 0x40;
        }
        else {
          std::
          vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
          ::reserve((vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
                     *)local_1a8,1);
          local_1e8 = &local_7c;
          dStack_1e0 = dVar31;
          dStack_1d8 = dVar31;
          std::
          transform<__gnu_cxx::__normal_iterator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>const*,std::vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>>,std::back_insert_iterator<std::vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>>,Clipper2Lib::ScalePaths<long,double>(std::vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>const&,double,double,int&)::_lambda(auto:1_const&)_1_>
                    (pauVar13,pauVar13[1] + 8,
                     (vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
                      *)local_1a8);
        }
        local_260 = (vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
                     *)local_1a8;
        Clipper2Lib::ClipperBase::AddPaths(&local_158,local_260,0);
        ppuVar1 = ppuStack_1a0;
        auVar22 = local_1a8;
        if ((undefined1  [8])ppuStack_1a0 != local_1a8) {
          do {
            pvVar14 = *(void **)auVar22;
            if (pvVar14 != (void *)0x0) {
              operator_delete(pvVar14,*(long *)((long)auVar22 + 0x10) - (long)pvVar14);
            }
            auVar22 = (undefined1  [8])((long)auVar22 + 0x18);
          } while ((undefined1  [8])ppuVar1 != auVar22);
LAB_0010399d:
        }
LAB_001039af:
        local_258 = (PolyPathD *)&local_158;
        local_260 = (vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
                     *)local_1a8;
        if (local_1a8 != (undefined1  [8])0x0) {
          operator_delete((void *)local_1a8,local_198 - (long)local_1a8);
        }
        pvVar14 = *(void **)*pauVar13;
        if (pvVar14 != (void *)0x0) {
          operator_delete(pvVar14,*(long *)pauVar13[1] - (long)pvVar14);
        }
        operator_delete(pauVar13,0x18);
        if (local_270 != (void *)0x0) {
          operator_delete(local_270,uVar12);
        }
        uVar25 = (long)local_240 - (long)pauVar10;
        if (uVar25 == 0) {
          local_270 = (void *)0x0;
        }
        else {
          if (0x7ffffffffffffff0 < uVar25) goto LAB_001043d8;
          local_270 = operator_new(uVar25);
        }
        dVar31 = local_298;
        if (pauVar10 == local_240) {
          local_240 = (undefined1 (*) [16])operator_new(0x18);
          pvVar14 = (void *)0x0;
          *local_240 = (undefined1  [16])0x0;
          *(undefined8 *)*local_240 = 0;
          *(undefined8 *)local_240[1] = 0;
LAB_00104272:
          *(void **)(*local_240 + 8) = pvVar14;
          dVar32 = local_288;
          goto LAB_00103b42;
        }
        uVar21 = (long)local_240 - (long)pauVar10;
        memcpy(local_270,pauVar10,uVar21);
        local_240 = (undefined1 (*) [16])operator_new(0x18);
        *(undefined8 *)local_240[1] = 0;
        *local_240 = (undefined1  [16])0x0;
        if (uVar21 != 0) {
          if (uVar21 < 0x7ffffffffffffff1) {
            pvVar14 = operator_new(uVar21);
            uVar24 = uVar21;
            goto LAB_00103a93;
          }
          if ((long)uVar21 < 0) goto LAB_001043d8;
          goto LAB_001042ce;
        }
        uVar24 = 0;
        pvVar14 = (void *)0x0;
LAB_00103a93:
        *(void **)*local_240 = pvVar14;
        *(ulong *)local_240[1] = uVar24 + (long)pvVar14;
        if (uVar21 == 0) goto LAB_00104272;
        pdVar15 = (double *)memcpy(pvVar14,local_270,uVar21);
        *(double **)(*local_240 + 8) = (double *)((long)pdVar15 + uVar21);
        pdVar7 = pdVar15;
        dVar33 = local_288;
        while (dVar32 = dVar33, pdVar7 != (double *)((long)pdVar15 + uVar21)) {
          dVar30 = *pdVar7;
          pdVar16 = pdVar7 + 2;
          dVar34 = dVar30;
          if (dVar30 <= dVar31) {
            dVar34 = dVar31;
          }
          if (local_288 <= dVar30) {
            dVar30 = local_288;
          }
          dVar33 = pdVar7[1];
          dVar35 = dVar33;
          if (dVar33 <= local_298) {
            dVar35 = local_298;
          }
          pdVar7 = pdVar16;
          dVar31 = dVar34;
          local_298 = dVar35;
          local_288 = dVar30;
          if (dVar32 <= dVar33) {
            dVar33 = dVar32;
          }
        }
LAB_00103b42:
        dVar33 = local_58;
        local_198 = 0;
        _local_1a8 = (undefined1  [16])0x0;
        if (((local_288 * local_58 < local_278) || (_LC57 < dVar31 * local_58)) ||
           ((dVar32 * local_58 < local_278 || (_LC57 < local_58 * local_298)))) {
          local_7c = local_7c | 0x40;
        }
        else {
          std::
          vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
          ::reserve(local_260,1);
          local_1c8 = &local_7c;
          dStack_1c0 = dVar33;
          dStack_1b8 = dVar33;
          std::
          transform<__gnu_cxx::__normal_iterator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>const*,std::vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>>,std::back_insert_iterator<std::vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>>,Clipper2Lib::ScalePaths<long,double>(std::vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>const&,double,double,int&)::_lambda(auto:1_const&)_1_>
                    (local_240,local_240[1] + 8,local_260);
        }
        Clipper2Lib::ClipperBase::AddPaths(local_258,local_260,1,0);
        ppuVar1 = ppuStack_1a0;
        auVar22 = local_1a8;
        if ((undefined1  [8])ppuStack_1a0 != local_1a8) {
          do {
            pvVar14 = *(void **)auVar22;
            if (pvVar14 != (void *)0x0) {
              operator_delete(pvVar14,*(long *)((long)auVar22 + 0x10) - (long)pvVar14);
            }
            auVar22 = (undefined1  [8])((long)auVar22 + 0x18);
          } while ((undefined1  [8])ppuVar1 != auVar22);
        }
        if (local_1a8 != (undefined1  [8])0x0) {
          operator_delete((void *)local_1a8,local_198 - (long)local_1a8);
        }
        pvVar14 = *(void **)*local_240;
        if (pvVar14 != (void *)0x0) {
          operator_delete(pvVar14,*(long *)local_240[1] - (long)pvVar14);
        }
        operator_delete(local_240,0x18);
        if (local_270 != (void *)0x0) {
          operator_delete(local_270,uVar25);
        }
        local_218 = 0;
        local_228 = (undefined1  [16])0x0;
        if (param_5 == '\0') {
          local_198 = 0;
          local_1a8 = (undefined1  [8])0x0;
          ppuStack_1a0 = (undefined **)0x0;
          cVar9 = Clipper2Lib::ClipperBase::ExecuteInternal(local_258,uVar27,0,0);
          if (cVar9 != '\0') {
            Clipper2Lib::ClipperD::BuildPathsD
                      ((vector_conflict *)local_258,(vector_conflict *)local_228);
          }
          Clipper2Lib::ClipperBase::CleanUp();
          ppuVar1 = ppuStack_1a0;
          for (auVar22 = local_1a8; (undefined1  [8])ppuVar1 != auVar22;
              auVar22 = (undefined1  [8])((long)auVar22 + 0x18)) {
            puVar4 = *(undefined **)auVar22;
            if (puVar4 != (undefined *)0x0) {
              operator_delete(puVar4,(long)*(undefined **)((long)auVar22 + 0x10) - (long)puVar4);
            }
          }
          if (local_1a8 != (undefined1  [8])0x0) {
            operator_delete((void *)local_1a8,local_198 - (long)local_1a8);
          }
        }
        else {
          local_1a8 = (undefined1  [8])&PTR__PolyPathD_00108b48;
          ppuStack_1a0 = (undefined **)0x0;
          local_198 = 0;
          local_190 = 0;
          local_188 = 0;
          local_168 = 0;
          local_180 = _LC49;
          local_178 = (undefined1  [16])0x0;
          cVar9 = Clipper2Lib::ClipperBase::ExecuteInternal(local_258,uVar27,0,1);
          if (cVar9 != '\0') {
            std::
            vector<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>>>
            ::resize((vector<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>>>
                      *)&local_198,0);
            uVar3 = local_228._0_8_;
            uVar8 = local_228._8_8_;
            local_180 = uStack_50;
            puVar23 = (undefined8 *)local_228._0_8_;
            if (local_228._0_8_ != local_228._8_8_) {
              do {
                pvVar14 = (void *)*puVar23;
                if (pvVar14 != (void *)0x0) {
                  operator_delete(pvVar14,puVar23[2] - (long)pvVar14);
                }
                puVar23 = puVar23 + 3;
              } while ((undefined8 *)uVar8 != puVar23);
              local_228._8_8_ = uVar3;
            }
            Clipper2Lib::ClipperD::BuildTreeD(local_258,(vector_conflict *)local_260);
          }
          Clipper2Lib::ClipperBase::CleanUp();
          Clipper2Lib::PolyPathD::~PolyPathD((PolyPathD *)local_260);
        }
        *(undefined8 *)(this + 8) = 0;
        if (local_228._8_8_ == local_228._0_8_) goto LAB_00103eea;
        uVar21 = 0;
        do {
          local_230 = (undefined **)0x0;
          uVar24 = 0;
          plVar2 = (long *)(local_228._0_8_ + uVar21 * 3 * 8);
          if (plVar2[1] == *plVar2) {
LAB_0010422a:
            ppuStack_1a0 = (undefined **)0x0;
            Vector<Vector<Vector2>>::push_back((Vector<Vector<Vector2>> *)this);
          }
          else {
            do {
              uVar24 = uVar24 + 1;
              Vector<Vector2>::push_back(local_238);
            } while (uVar24 < (ulong)(plVar2[1] - *plVar2 >> 4));
            ppuStack_1a0 = (undefined **)0x0;
            ppuVar1 = local_230 + -2;
            if (local_230 == (undefined **)0x0) goto LAB_0010422a;
            do {
              puVar4 = *ppuVar1;
              if (puVar4 == (undefined *)0x0) goto LAB_00103e3d;
              LOCK();
              puVar17 = *ppuVar1;
              bVar28 = puVar4 == puVar17;
              if (bVar28) {
                *ppuVar1 = puVar4 + 1;
                puVar17 = puVar4;
              }
              UNLOCK();
            } while (!bVar28);
            if (puVar17 != (undefined *)0xffffffffffffffff) {
              ppuStack_1a0 = local_230;
            }
LAB_00103e3d:
            ppuVar1 = ppuStack_1a0;
            Vector<Vector<Vector2>>::push_back((Vector<Vector<Vector2>> *)this);
            if (ppuVar1 != (undefined **)0x0) {
              LOCK();
              ppuVar1 = ppuVar1 + -2;
              *ppuVar1 = *ppuVar1 + -1;
              UNLOCK();
              if (*ppuVar1 == (undefined *)0x0) {
                Memory::free_static(ppuStack_1a0 + -2,false);
              }
            }
          }
          if (local_230 != (undefined **)0x0) {
            LOCK();
            ppuVar1 = local_230 + -2;
            *ppuVar1 = *ppuVar1 + -1;
            UNLOCK();
            if (*ppuVar1 == (undefined *)0x0) {
              Memory::free_static(local_230 + -2,false);
            }
          }
          uVar3 = local_228._8_8_;
          uVar21 = uVar21 + 1;
          if ((ulong)(((long)(local_228._8_8_ - local_228._0_8_) >> 3) * -0x5555555555555555) <=
              uVar21) {
            puVar23 = (undefined8 *)local_228._0_8_;
            if (local_228._8_8_ != local_228._0_8_) {
              do {
                pvVar14 = (void *)*puVar23;
                if (pvVar14 != (void *)0x0) {
                  operator_delete(pvVar14,puVar23[2] - (long)pvVar14);
                }
                puVar23 = puVar23 + 3;
              } while ((undefined8 *)uVar3 != puVar23);
            }
LAB_00103eea:
            if ((undefined8 *)local_228._0_8_ != (undefined8 *)0x0) {
              operator_delete((void *)local_228._0_8_,local_218 - local_228._0_8_);
            }
            local_158 = &PTR__ClipperD_00108b80;
            Clipper2Lib::ClipperBase::~ClipperBase((ClipperBase *)local_258);
            if (pauVar10 != (undefined1 (*) [16])0x0) {
              operator_delete(pauVar10,uVar25);
            }
            if (__src != (undefined1 (*) [16])0x0) {
              operator_delete(__src,uVar12);
            }
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              return this;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
        } while( true );
      }
    }
LAB_001043d8:
    std::__throw_bad_array_new_length();
    pauVar13 = extraout_RDX;
LAB_001043dd:
    local_240 = (undefined1 (*) [16])0x0;
    pauVar10 = (undefined1 (*) [16])0x0;
  } while( true );
}



/* Geometry2D::_polypath_offset(Vector<Vector2> const&, float, Geometry2D::PolyJoinType,
   Geometry2D::PolyEndType) */

Geometry2D * __thiscall
Geometry2D::_polypath_offset
          (float param_2,Geometry2D *this,undefined1 (*param_1) [16],int param_4,int param_5)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined1 (*__src) [16];
  undefined1 (*pauVar6) [16];
  void *pvVar7;
  void *pvVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  void *pvVar12;
  char cVar13;
  undefined1 *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 (*pauVar17) [16];
  long in_FS_OFFSET;
  bool bVar18;
  double dVar19;
  double local_a0;
  ulong local_90;
  Vector<Vector2> local_88 [8];
  undefined1 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  long local_68;
  undefined1 (*local_58) [16];
  undefined1 *local_50;
  undefined1 *local_48;
  long local_40;
  
  cVar13 = '\x02';
  pvVar7 = (void *)(ulong)(uint)param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 != 1) {
    cVar13 = (param_4 == 2) * '\x03';
  }
  lVar11 = *(long *)(*param_1 + 8);
  iVar5 = 0;
  if (param_5 - 1U < 4) {
    iVar5 = param_5;
  }
  if (lVar11 == 0) {
    __src = (undefined1 (*) [16])0x0;
    dVar19 = _LC61 * clipper_scale;
    local_90 = 0;
    pvVar12 = (void *)0x0;
LAB_00104bbe:
    uVar15 = 0;
    param_1 = (undefined1 (*) [16])operator_new(0x18);
    pvVar8 = (void *)0x0;
    puVar14 = param_1[1] + 8;
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    pvVar7 = pvVar12;
    local_58 = param_1;
    local_48 = puVar14;
LAB_0010480c:
    local_a0 = (double)param_2;
    *(void **)*param_1 = pvVar8;
    *(ulong *)param_1[1] = (long)pvVar8 + uVar15;
    local_50 = puVar14;
    if (pvVar12 == pvVar7) {
      *(void **)(*param_1 + 8) = pvVar8;
      Clipper2Lib::InflatePaths(local_a0,_LC62,&local_78,&local_58,cVar13,iVar5,5);
      pvVar12 = *(void **)*param_1;
      if (pvVar12 != (void *)0x0) goto LAB_00104885;
    }
    else {
      pvVar8 = memcpy(pvVar8,pvVar7,(long)pvVar12 - (long)pvVar7);
      *(long *)(*param_1 + 8) = (long)pvVar8 + ((long)pvVar12 - (long)pvVar7);
      Clipper2Lib::InflatePaths(local_a0,_LC62,dVar19,&local_78,&local_58,cVar13,iVar5,5);
      pvVar12 = *(void **)*param_1;
      if (pvVar12 == (void *)0x0) goto LAB_00104ae0;
LAB_00104885:
      operator_delete(pvVar12,*(long *)param_1[1] - (long)pvVar12);
    }
    operator_delete(param_1,0x18);
    if (pvVar7 == (void *)0x0) goto LAB_001048a7;
  }
  else {
    uVar15 = *(ulong *)(lVar11 + -8);
    if (uVar15 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("cannot create std::vector larger than max_size()");
    }
    if (uVar15 == 0) {
      pauVar17 = (undefined1 (*) [16])0x0;
      __src = (undefined1 (*) [16])0x0;
LAB_001046e5:
      lVar9 = *(long *)(lVar11 + -8);
      for (lVar10 = 0; lVar10 != lVar9; lVar10 = lVar10 + 1) {
        if (lVar9 <= lVar10) {
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar9,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar2 = *(undefined8 *)(lVar11 + lVar10 * 8);
        *(double *)__src[lVar10] = (double)(float)uVar2;
        *(double *)(__src[lVar10] + 8) = (double)(float)((ulong)uVar2 >> 0x20);
      }
    }
    else {
      __src = (undefined1 (*) [16])operator_new(uVar15 * 0x10);
      pauVar17 = __src + uVar15;
      pauVar6 = __src;
      do {
        *pauVar6 = (undefined1  [16])0x0;
        pauVar6 = pauVar6 + 1;
      } while (pauVar6 != pauVar17);
      lVar11 = *(long *)(*param_1 + 8);
      if (lVar11 != 0) goto LAB_001046e5;
    }
    dVar19 = _LC61 * clipper_scale;
    local_90 = (long)pauVar17 - (long)__src;
    if (local_90 == 0) {
      local_90 = 0;
      pvVar7 = (void *)0x0;
LAB_00104770:
      pvVar12 = pvVar7;
      if (pauVar17 == __src) goto LAB_00104bbe;
      uVar15 = (long)pauVar17 - (long)__src;
      memcpy(pvVar7,__src,uVar15);
      pvVar12 = (void *)((long)pvVar7 + uVar15);
      param_1 = (undefined1 (*) [16])operator_new(0x18);
      puVar14 = param_1[1] + 8;
      *param_1 = (undefined1  [16])0x0;
      *(undefined8 *)param_1[1] = 0;
      local_58 = param_1;
      local_48 = puVar14;
      if (uVar15 == 0) {
        pvVar8 = (void *)0x0;
      }
      else {
        if (0x7ffffffffffffff0 < uVar15) {
          if ((long)uVar15 < 0) goto LAB_00104ad3;
          std::__throw_bad_alloc();
          pvVar12 = pvVar7;
          goto LAB_00104bbe;
        }
        pvVar8 = operator_new(uVar15);
      }
      goto LAB_0010480c;
    }
    if (local_90 < 0x7ffffffffffffff1) {
      pvVar7 = operator_new(local_90);
      goto LAB_00104770;
    }
LAB_00104ad3:
    std::__throw_bad_array_new_length();
LAB_00104ae0:
    operator_delete(param_1,0x18);
  }
  operator_delete(pvVar7,local_90);
LAB_001048a7:
  *(undefined8 *)(this + 8) = 0;
  if (local_78 != local_70) {
    uVar15 = 0;
    do {
      uVar16 = 0;
      local_80 = (undefined1 *)0x0;
      plVar1 = local_78 + uVar15 * 3;
      if (*plVar1 == plVar1[1]) {
LAB_00104b09:
        local_50 = (undefined1 *)0x0;
        Vector<Vector<Vector2>>::push_back((Vector<Vector<Vector2>> *)this);
      }
      else {
        do {
          uVar16 = uVar16 + 1;
          Vector<Vector2>::push_back(local_88);
        } while (uVar16 < (ulong)(plVar1[1] - *plVar1 >> 4));
        local_50 = (undefined1 *)0x0;
        plVar1 = (long *)(local_80 + -0x10);
        if (local_80 == (undefined1 *)0x0) goto LAB_00104b09;
        do {
          lVar11 = *plVar1;
          if (lVar11 == 0) goto LAB_00104976;
          LOCK();
          lVar9 = *plVar1;
          bVar18 = lVar11 == lVar9;
          if (bVar18) {
            *plVar1 = lVar11 + 1;
            lVar9 = lVar11;
          }
          UNLOCK();
        } while (!bVar18);
        if (lVar9 != -1) {
          local_50 = local_80;
        }
LAB_00104976:
        puVar14 = local_50;
        Vector<Vector<Vector2>>::push_back((Vector<Vector<Vector2>> *)this);
        if (puVar14 != (undefined1 *)0x0) {
          LOCK();
          plVar1 = (long *)(puVar14 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static(local_50 + -0x10,false);
          }
        }
      }
      if (local_80 != (undefined1 *)0x0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static(local_80 + -0x10,false);
        }
      }
      uVar15 = uVar15 + 1;
      puVar4 = local_78;
    } while (uVar15 < (ulong)(((long)local_70 - (long)local_78 >> 3) * -0x5555555555555555));
    for (; local_70 != puVar4; puVar4 = puVar4 + 3) {
      pvVar7 = (void *)*puVar4;
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7,puVar4[2] - (long)pvVar7);
      }
    }
  }
  if (local_78 != (undefined8 *)0x0) {
    operator_delete(local_78,local_68 - (long)local_78);
  }
  if (__src != (undefined1 (*) [16])0x0) {
    operator_delete(__src,local_90);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* DefaultAllocator::alloc(unsigned long) */

void DefaultAllocator::alloc(ulong param_1)

{
  Memory::alloc_static(param_1,false);
  return;
}



/* Clipper2Lib::PolyPathD::Count() const */

long __thiscall Clipper2Lib::PolyPathD::Count(PolyPathD *this)

{
  return *(long *)(this + 0x18) - *(long *)(this + 0x10) >> 3;
}



/* Clipper2Lib::ClipperD::~ClipperD() */

void __thiscall Clipper2Lib::ClipperD::~ClipperD(ClipperD *this)

{
  *(undefined ***)this = &PTR__ClipperD_00108b80;
  Clipper2Lib::ClipperBase::~ClipperBase((ClipperBase *)this);
  return;
}



/* Clipper2Lib::ClipperD::~ClipperD() */

void __thiscall Clipper2Lib::ClipperD::~ClipperD(ClipperD *this)

{
  *(undefined ***)this = &PTR__ClipperD_00108b80;
  Clipper2Lib::ClipperBase::~ClipperBase((ClipperBase *)this);
  operator_delete(this,0x110);
  return;
}



/* CowData<Vector3i>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector3i>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector2i>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector2i>::_copy_on_write(void)

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



/* CowData<stbrp_rect>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<stbrp_rect>::_copy_on_write(void)

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



/* CowData<stbrp_node>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<stbrp_node>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<_AtlasWorkRect>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<_AtlasWorkRect>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector<Vector2> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector<Vector2>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<_AtlasWorkRectResult>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<_AtlasWorkRectResult>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Geometry2D::make_atlas(Vector<Vector2i> const&, Vector<Vector2i>&, Vector2i&) [clone .cold] */

void Geometry2D::make_atlas(Vector *param_1,Vector *param_2,Vector2i *param_3)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* SortArray<_AtlasWorkRect, _DefaultComparator<_AtlasWorkRect>, true>::introsort(long, long,
   _AtlasWorkRect*, long) const [clone .isra.0] */

void SortArray<_AtlasWorkRect,_DefaultComparator<_AtlasWorkRect>,true>::introsort
               (long param_1,long param_2,_AtlasWorkRect *param_3,long param_4)

{
  _AtlasWorkRect *p_Var1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  _AtlasWorkRect *p_Var10;
  long lVar11;
  long lVar12;
  long lVar13;
  _AtlasWorkRect *p_Var14;
  long lVar15;
  int iVar16;
  long lVar17;
  _AtlasWorkRect *p_Var18;
  long in_FS_OFFSET;
  bool bVar19;
  int local_78;
  
  lVar11 = param_2 - param_1;
  lVar4 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x10 < lVar11) {
    if (param_4 != 0) {
      lVar17 = param_2;
LAB_00104ed6:
      param_4 = param_4 + -1;
      iVar16 = *(int *)(param_3 + param_1 * 0x14);
      iVar2 = *(int *)(param_3 + ((lVar11 >> 1) + param_1) * 0x14);
      iVar3 = *(int *)(param_3 + lVar17 * 0x14 + -0x14);
      if (iVar2 < iVar16) {
        if (iVar3 < iVar16) {
          iVar16 = iVar3;
        }
        if (iVar3 < iVar2) {
          iVar16 = iVar2;
        }
      }
      else {
        if (iVar3 < iVar2) {
          iVar2 = iVar3;
        }
        if (iVar16 <= iVar3) {
          iVar16 = iVar2;
        }
      }
      lVar11 = lVar17;
      p_Var18 = param_3 + param_1 * 0x14;
      param_2 = param_1;
      do {
        if (iVar16 < *(int *)p_Var18) {
          if (lVar17 + -1 == param_2) {
            _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                             "bad comparison function; sorting will be broken",0,0);
            goto LAB_00104f4c;
          }
        }
        else {
LAB_00104f4c:
          lVar11 = lVar11 + -1;
          p_Var14 = param_3 + lVar11 * 0x14;
          if (*(int *)p_Var14 < iVar16) {
            p_Var10 = param_3 + lVar11 * 0x14 + -0x14;
            while (param_1 != lVar11) {
              lVar11 = lVar11 + -1;
              p_Var14 = p_Var10;
              if (iVar16 <= *(int *)p_Var10) goto LAB_00104fbe;
              p_Var10 = p_Var10 + -0x14;
            }
            _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                             "bad comparison function; sorting will be broken",0,0);
          }
LAB_00104fbe:
          if (lVar11 <= param_2) goto LAB_00105000;
          uVar5 = *(undefined8 *)(p_Var14 + 8);
          uVar6 = *(undefined8 *)p_Var18;
          uVar7 = *(undefined8 *)(p_Var18 + 8);
          iVar2 = *(int *)(p_Var18 + 0x10);
          *(undefined8 *)p_Var18 = *(undefined8 *)p_Var14;
          *(undefined8 *)(p_Var18 + 8) = uVar5;
          *(int *)(p_Var18 + 0x10) = *(int *)(p_Var14 + 0x10);
          *(int *)(p_Var14 + 0x10) = iVar2;
          *(undefined8 *)p_Var14 = uVar6;
          *(undefined8 *)(p_Var14 + 8) = uVar7;
        }
        p_Var18 = p_Var18 + 0x14;
        param_2 = param_2 + 1;
      } while( true );
    }
LAB_0010524a:
    lVar15 = lVar11 + -2 >> 1;
    lVar17 = lVar15 * 2 + 2;
    p_Var18 = param_3 + (param_1 + lVar15) * 0x14;
    do {
      uVar5 = *(undefined8 *)p_Var18;
      uVar6 = *(undefined8 *)(p_Var18 + 8);
      iVar16 = *(int *)(p_Var18 + 0x10);
      local_78 = (int)uVar5;
      lVar8 = lVar17;
      lVar13 = lVar15;
      if (lVar17 < lVar11) {
        do {
          lVar9 = lVar8 + -1;
          lVar12 = lVar8;
          p_Var14 = param_3 + (param_1 + lVar8 + -1) * 0x14;
          if (*(int *)(param_3 + (param_1 + lVar8) * 0x14) <=
              *(int *)(param_3 + (param_1 + lVar8 + -1) * 0x14)) {
            lVar12 = lVar8 + 1;
            lVar9 = lVar8;
            p_Var14 = param_3 + (param_1 + lVar8) * 0x14;
          }
          uVar7 = *(undefined8 *)(p_Var14 + 8);
          lVar8 = lVar12 * 2;
          p_Var10 = param_3 + (lVar13 + param_1) * 0x14;
          *(undefined8 *)p_Var10 = *(undefined8 *)p_Var14;
          *(undefined8 *)(p_Var10 + 8) = uVar7;
          *(int *)(p_Var10 + 0x10) = *(int *)(p_Var14 + 0x10);
          lVar13 = lVar9;
        } while (lVar11 != lVar8 && SBORROW8(lVar11,lVar8) == lVar11 + lVar12 * -2 < 0);
        p_Var10 = p_Var14;
        if (lVar11 == lVar8) {
LAB_001053ab:
          lVar9 = lVar8 + -1;
          p_Var14 = param_3 + (param_1 + lVar9) * 0x14;
          uVar7 = *(undefined8 *)(p_Var14 + 8);
          *(undefined8 *)p_Var10 = *(undefined8 *)p_Var14;
          *(undefined8 *)(p_Var10 + 8) = uVar7;
          *(int *)(p_Var10 + 0x10) = *(int *)(p_Var14 + 0x10);
        }
        lVar8 = lVar9 + -1;
        if (lVar9 <= lVar15) goto LAB_00105457;
        do {
          lVar13 = lVar8 >> 1;
          p_Var14 = param_3 + (param_1 + lVar13) * 0x14;
          p_Var10 = param_3 + (lVar9 + param_1) * 0x14;
          if (*(int *)p_Var14 <= local_78) break;
          uVar7 = *(undefined8 *)(p_Var14 + 8);
          *(undefined8 *)p_Var10 = *(undefined8 *)p_Var14;
          *(undefined8 *)(p_Var10 + 8) = uVar7;
          *(int *)(p_Var10 + 0x10) = *(int *)(p_Var14 + 0x10);
          lVar8 = (lVar13 + -1) - (lVar13 + -1 >> 0x3f);
          p_Var10 = p_Var14;
          lVar9 = lVar13;
        } while (lVar15 < lVar13);
        *(int *)(p_Var10 + 0x10) = iVar16;
        *(undefined8 *)p_Var10 = uVar5;
        *(undefined8 *)(p_Var10 + 8) = uVar6;
        if (lVar15 == 0) goto LAB_0010509f;
      }
      else {
        p_Var10 = p_Var18;
        p_Var14 = p_Var18;
        if (lVar17 == lVar11) goto LAB_001053ab;
LAB_00105457:
        *(int *)(p_Var14 + 0x10) = iVar16;
        *(undefined8 *)p_Var14 = uVar5;
        *(undefined8 *)(p_Var14 + 8) = uVar6;
      }
      lVar15 = lVar15 + -1;
      p_Var18 = p_Var18 + -0x14;
      lVar17 = lVar17 + -2;
    } while( true );
  }
  goto LAB_00105213;
LAB_00105000:
  introsort(param_2,lVar17,param_3,param_4);
  lVar11 = param_2 - param_1;
  if (lVar11 < 0x11) goto LAB_00105213;
  lVar17 = param_2;
  if (param_4 == 0) goto LAB_0010524a;
  goto LAB_00104ed6;
LAB_0010509f:
  p_Var18 = param_3 + param_1 * 0x14;
  p_Var14 = param_3 + (param_2 + -1) * 0x14 + -0x14;
  lVar11 = (param_2 + -1) - param_1;
  do {
    uVar5 = *(undefined8 *)(p_Var18 + 8);
    uVar6 = *(undefined8 *)(p_Var14 + 0x14);
    uVar7 = *(undefined8 *)(p_Var14 + 0x1c);
    iVar16 = *(int *)(p_Var14 + 0x24);
    *(undefined8 *)(p_Var14 + 0x14) = *(undefined8 *)p_Var18;
    *(undefined8 *)(p_Var14 + 0x1c) = uVar5;
    *(int *)(p_Var14 + 0x24) = *(int *)(p_Var18 + 0x10);
    local_78 = (int)uVar6;
    if (lVar11 < 3) {
      p_Var10 = p_Var18;
      if (lVar11 == 2) goto LAB_001053e1;
    }
    else {
      lVar17 = 2;
      lVar15 = 0;
      do {
        lVar8 = lVar17 + -1;
        lVar13 = lVar17;
        p_Var10 = param_3 + (param_1 + lVar17 + -1) * 0x14;
        if (*(int *)(param_3 + (param_1 + lVar17) * 0x14) <=
            *(int *)(param_3 + (param_1 + lVar17 + -1) * 0x14)) {
          lVar13 = lVar17 + 1;
          lVar8 = lVar17;
          p_Var10 = param_3 + (param_1 + lVar17) * 0x14;
        }
        uVar5 = *(undefined8 *)(p_Var10 + 8);
        lVar17 = lVar13 * 2;
        p_Var1 = param_3 + (lVar15 + param_1) * 0x14;
        *(undefined8 *)p_Var1 = *(undefined8 *)p_Var10;
        *(undefined8 *)(p_Var1 + 8) = uVar5;
        *(int *)(p_Var1 + 0x10) = *(int *)(p_Var10 + 0x10);
        lVar15 = lVar8;
      } while (lVar17 < lVar11);
      if (lVar17 == lVar11) {
LAB_001053e1:
        uVar5 = *(undefined8 *)(p_Var14 + 8);
        *(undefined8 *)p_Var10 = *(undefined8 *)p_Var14;
        *(undefined8 *)(p_Var10 + 8) = uVar5;
        *(int *)(p_Var10 + 0x10) = *(int *)(p_Var14 + 0x10);
        lVar8 = lVar11 + -1;
        lVar17 = lVar11 + -2 >> 1;
      }
      else {
        lVar17 = (lVar8 + -1) / 2;
        if (lVar8 == 0) goto LAB_001051e4;
      }
      do {
        p_Var1 = param_3 + (param_1 + lVar17) * 0x14;
        p_Var10 = param_3 + (lVar8 + param_1) * 0x14;
        if (*(int *)p_Var1 <= local_78) break;
        uVar5 = *(undefined8 *)(p_Var1 + 8);
        *(undefined8 *)p_Var10 = *(undefined8 *)p_Var1;
        *(undefined8 *)(p_Var10 + 8) = uVar5;
        *(int *)(p_Var10 + 0x10) = *(int *)(p_Var1 + 0x10);
        bVar19 = lVar17 != 0;
        lVar8 = lVar17;
        lVar17 = (lVar17 + -1) / 2;
        p_Var10 = p_Var1;
      } while (bVar19);
    }
LAB_001051e4:
    p_Var14 = p_Var14 + -0x14;
    *(int *)(p_Var10 + 0x10) = iVar16;
    *(undefined8 *)p_Var10 = uVar6;
    *(undefined8 *)(p_Var10 + 8) = uVar7;
    bVar19 = 1 < lVar11;
    lVar11 = lVar11 + -1;
  } while (bVar19);
LAB_00105213:
  if (lVar4 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::vector<std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> > >,
   std::allocator<std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> > >
   > >::reserve(unsigned long) */

void __thiscall
std::
vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
::reserve(vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
          *this,ulong param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  if (0x555555555555555 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::reserve");
  }
  lVar1 = *(long *)this;
  if (param_1 <= (ulong)((*(long *)(this + 0x10) - lVar1 >> 3) * -0x5555555555555555)) {
    return;
  }
  lVar2 = *(long *)(this + 8);
  puVar8 = (undefined8 *)operator_new(param_1 * 0x18);
  puVar3 = *(undefined8 **)(this + 8);
  puVar4 = *(undefined8 **)this;
  puVar7 = puVar8;
  for (puVar9 = puVar4; puVar3 != puVar9; puVar9 = puVar9 + 3) {
    uVar6 = puVar9[1];
    uVar5 = puVar9[2];
    *puVar7 = *puVar9;
    puVar7[1] = uVar6;
    puVar7[2] = uVar5;
    puVar7 = puVar7 + 3;
  }
  if (puVar4 != (undefined8 *)0x0) {
    operator_delete(puVar4,*(long *)(this + 0x10) - (long)puVar4);
  }
  *(undefined8 **)this = puVar8;
  *(long *)(this + 8) = (lVar2 - lVar1) + (long)puVar8;
  *(undefined8 **)(this + 0x10) = puVar8 + param_1 * 3;
  return;
}



/* List<TPPLPoly, DefaultAllocator>::~List() */

void __thiscall List<TPPLPoly,DefaultAllocator>::~List(List<TPPLPoly,DefaultAllocator> *this)

{
  TPPLPoly *this_00;
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)this;
  if (plVar3 == (long *)0x0) {
    return;
  }
  do {
    this_00 = (TPPLPoly *)*plVar3;
    if (this_00 == (TPPLPoly *)0x0) {
      if ((int)plVar3[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)(this_00 + 0x28) == plVar3) {
      lVar2 = *(long *)(this_00 + 0x18);
      lVar1 = *(long *)(this_00 + 0x20);
      *plVar3 = lVar2;
      if (this_00 == (TPPLPoly *)plVar3[1]) {
        plVar3[1] = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 0x18) = lVar2;
        lVar2 = *(long *)(this_00 + 0x18);
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x20) = lVar1;
      }
      TPPLPoly::~TPPLPoly(this_00);
      Memory::free_static(this_00,false);
      *(int *)(plVar3 + 2) = (int)plVar3[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar3 = *(long **)this;
  } while ((int)plVar3[2] != 0);
  Memory::free_static(plVar3,false);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Vector2>::resize<false>(long) */

undefined8 __thiscall CowData<Vector2>::resize<false>(CowData<Vector2> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  
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
    lVar7 = 0;
    lVar3 = 0;
  }
  else {
    lVar7 = *(long *)(lVar3 + -8);
    if (param_1 == lVar7) {
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
    lVar3 = lVar7 * 8;
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
LAB_00105b58:
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
  if (uVar4 == 0xffffffffffffffff) goto LAB_00105b58;
  if (param_1 <= lVar7) {
    puVar6 = *(undefined8 **)this;
    if (uVar4 + 1 == lVar3) {
      if (puVar6 == (undefined8 *)0x0) {
        _DAT_00000000 = 0;
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    else {
      puVar5 = (undefined8 *)Memory::realloc_static(puVar6 + -2,uVar4 + 0x11,false);
      if (puVar5 == (undefined8 *)0x0) {
LAB_00105b90:
        _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                         "Parameter \"mem_new\" is null.",0,0);
        return 6;
      }
      puVar6 = puVar5 + 2;
      *puVar5 = 1;
      *(undefined8 **)this = puVar6;
    }
    puVar6[-1] = param_1;
    return 0;
  }
  if (uVar4 + 1 == lVar3) {
    puVar6 = *(undefined8 **)this;
    if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar6[-1];
LAB_00105a99:
    if (param_1 <= lVar3) goto LAB_00105a11;
  }
  else {
    if (lVar7 != 0) {
      puVar5 = (undefined8 *)
               Memory::realloc_static((void *)(*(long *)this + -0x10),uVar4 + 0x11,false);
      if (puVar5 == (undefined8 *)0x0) goto LAB_00105b90;
      puVar6 = puVar5 + 2;
      *puVar5 = 1;
      *(undefined8 **)this = puVar6;
      lVar3 = puVar5[1];
      goto LAB_00105a99;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar6 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar6;
    lVar3 = 0;
  }
  memset(puVar6 + lVar3,0,(param_1 - lVar3) * 8);
LAB_00105a11:
  puVar6[-1] = param_1;
  return 0;
}



/* std::vector<std::unique_ptr<Clipper2Lib::PolyPathD, std::default_delete<Clipper2Lib::PolyPathD>
   >, std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,
   std::default_delete<Clipper2Lib::PolyPathD> > > >::_M_default_append(unsigned long) */

void __thiscall
std::
vector<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>>>
::_M_default_append(vector<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>>>
                    *this,ulong param_1)

{
  ulong uVar1;
  undefined8 *__s;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  if (param_1 == 0) {
    return;
  }
  __s = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  if ((ulong)(*(long *)(this + 0x10) - (long)__s >> 3) < param_1) {
    uVar4 = (long)__s - (long)puVar2 >> 3;
    if (0xfffffffffffffff - uVar4 < param_1) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_default_append");
    }
    uVar1 = param_1 + uVar4;
    uVar7 = 0xfffffffffffffff;
    if (uVar1 < 0x1000000000000000) {
      uVar7 = uVar1;
    }
    if ((param_1 <= uVar4) && (uVar7 = uVar4 * 2, 0xfffffffffffffff < uVar7)) {
      uVar7 = 0xfffffffffffffff;
    }
    puVar5 = (undefined8 *)operator_new(uVar7 * 8);
    memset((void *)((long)puVar5 + ((long)__s - (long)puVar2)),0,param_1 * 8);
    puVar3 = puVar5;
    for (puVar6 = puVar2; puVar6 != __s; puVar6 = puVar6 + 1) {
      *puVar3 = *puVar6;
      puVar3 = puVar3 + 1;
    }
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
    }
    *(undefined8 **)this = puVar5;
    *(undefined8 **)(this + 8) = puVar5 + uVar1;
    *(undefined8 **)(this + 0x10) = puVar5 + uVar7;
    return;
  }
  memset(__s,0,param_1 * 8);
  *(undefined8 **)(this + 8) = __s + param_1;
  return;
}



/* Clipper2Lib::PolyPathD::~PolyPathD() */

void __thiscall Clipper2Lib::PolyPathD::~PolyPathD(PolyPathD *this)

{
  undefined8 *puVar1;
  long *plVar2;
  PolyPathD *pPVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  *(undefined ***)this = &PTR__PolyPathD_00108b48;
  puVar1 = *(undefined8 **)(this + 0x18);
  puVar8 = *(undefined8 **)(this + 0x10);
  puVar7 = puVar8;
  if (puVar1 != puVar8) {
LAB_00105dc3:
    do {
      plVar2 = (long *)*puVar7;
      if (plVar2 != (long *)0x0) {
        if (*(code **)(*plVar2 + 8) != ~PolyPathD) {
          puVar7 = puVar7 + 1;
          (**(code **)(*plVar2 + 8))(plVar2);
          if (puVar1 == puVar7) break;
          goto LAB_00105dc3;
        }
        puVar6 = (undefined8 *)plVar2[3];
        puVar5 = (undefined8 *)plVar2[2];
        *plVar2 = (long)&PTR__PolyPathD_00108b48;
        puVar9 = puVar5;
        if (puVar6 != puVar5) {
          do {
            while (pPVar3 = (PolyPathD *)*puVar9, pPVar3 == (PolyPathD *)0x0) {
LAB_00105e23:
              puVar9 = puVar9 + 1;
              if (puVar6 == puVar9) goto LAB_00105e55;
            }
            if (*(code **)(*(long *)pPVar3 + 8) == ~PolyPathD) {
              ~PolyPathD(pPVar3);
              operator_delete(pPVar3,0x48);
              goto LAB_00105e23;
            }
            puVar9 = puVar9 + 1;
            (**(code **)(*(long *)pPVar3 + 8))();
          } while (puVar6 != puVar9);
LAB_00105e55:
          plVar2[3] = (long)puVar5;
        }
        pvVar4 = (void *)plVar2[6];
        if (pvVar4 != (void *)0x0) {
          operator_delete(pvVar4,plVar2[8] - (long)pvVar4);
        }
        puVar6 = (undefined8 *)plVar2[3];
        puVar5 = (undefined8 *)plVar2[2];
        if (puVar6 != puVar5) {
          do {
            while (pPVar3 = (PolyPathD *)*puVar5, pPVar3 == (PolyPathD *)0x0) {
LAB_00105e99:
              puVar5 = puVar5 + 1;
              if (puVar6 == puVar5) goto LAB_00105ec8;
            }
            if (*(code **)(*(long *)pPVar3 + 8) == ~PolyPathD) {
              ~PolyPathD(pPVar3);
              operator_delete(pPVar3,0x48);
              goto LAB_00105e99;
            }
            (**(code **)(*(long *)pPVar3 + 8))();
            puVar5 = puVar5 + 1;
          } while (puVar6 != puVar5);
LAB_00105ec8:
          puVar5 = (undefined8 *)plVar2[2];
        }
        if (puVar5 != (undefined8 *)0x0) {
          operator_delete(puVar5,plVar2[4] - (long)puVar5);
        }
        operator_delete(plVar2,0x48);
      }
      puVar7 = puVar7 + 1;
    } while (puVar1 != puVar7);
    *(undefined8 **)(this + 0x18) = puVar8;
  }
  pvVar4 = *(void **)(this + 0x30);
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4,*(long *)(this + 0x40) - (long)pvVar4);
  }
  puVar1 = *(undefined8 **)(this + 0x18);
  puVar8 = *(undefined8 **)(this + 0x10);
  if (puVar1 != puVar8) {
LAB_00105f40:
    do {
      plVar2 = (long *)*puVar8;
      if (plVar2 != (long *)0x0) {
        if (*(code **)(*plVar2 + 8) != ~PolyPathD) {
          puVar8 = puVar8 + 1;
          (**(code **)(*plVar2 + 8))(plVar2);
          if (puVar1 == puVar8) break;
          goto LAB_00105f40;
        }
        puVar7 = (undefined8 *)plVar2[2];
        *plVar2 = (long)&PTR__PolyPathD_00108b48;
        puVar6 = (undefined8 *)plVar2[3];
        puVar5 = puVar7;
        if (puVar6 != puVar7) {
          do {
            while (pPVar3 = (PolyPathD *)*puVar5, pPVar3 == (PolyPathD *)0x0) {
LAB_00105fa3:
              puVar5 = puVar5 + 1;
              if (puVar6 == puVar5) goto LAB_00105fd8;
            }
            if (*(code **)(*(long *)pPVar3 + 8) == ~PolyPathD) {
              ~PolyPathD(pPVar3);
              operator_delete(pPVar3,0x48);
              goto LAB_00105fa3;
            }
            puVar5 = puVar5 + 1;
            (**(code **)(*(long *)pPVar3 + 8))();
          } while (puVar6 != puVar5);
LAB_00105fd8:
          plVar2[3] = (long)puVar7;
        }
        pvVar4 = (void *)plVar2[6];
        if (pvVar4 != (void *)0x0) {
          operator_delete(pvVar4,plVar2[8] - (long)pvVar4);
        }
        puVar7 = (undefined8 *)plVar2[3];
        puVar6 = (undefined8 *)plVar2[2];
        if (puVar7 != puVar6) {
          do {
            while (pPVar3 = (PolyPathD *)*puVar6, pPVar3 == (PolyPathD *)0x0) {
LAB_00106020:
              puVar6 = puVar6 + 1;
              if (puVar7 == puVar6) goto LAB_00106050;
            }
            if (*(code **)(*(long *)pPVar3 + 8) == ~PolyPathD) {
              ~PolyPathD(pPVar3);
              operator_delete(pPVar3,0x48);
              goto LAB_00106020;
            }
            (**(code **)(*(long *)pPVar3 + 8))();
            puVar6 = puVar6 + 1;
          } while (puVar7 != puVar6);
LAB_00106050:
          puVar6 = (undefined8 *)plVar2[2];
        }
        if (puVar6 != (undefined8 *)0x0) {
          operator_delete(puVar6,plVar2[4] - (long)puVar6);
        }
        operator_delete(plVar2,0x48);
      }
      puVar8 = puVar8 + 1;
    } while (puVar1 != puVar8);
    puVar8 = *(undefined8 **)(this + 0x10);
  }
  if (puVar8 == (undefined8 *)0x0) {
    return;
  }
  operator_delete(puVar8,*(long *)(this + 0x20) - (long)puVar8);
  return;
}



/* std::vector<std::unique_ptr<Clipper2Lib::PolyPathD, std::default_delete<Clipper2Lib::PolyPathD>
   >, std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,
   std::default_delete<Clipper2Lib::PolyPathD> > > >::resize(unsigned long) */

void __thiscall
std::
vector<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>>>
::resize(vector<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>>>
         *this,ulong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  PolyPathD *pPVar5;
  void *pvVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  puVar2 = *(undefined8 **)(this + 8);
  uVar7 = (long)puVar2 - *(long *)this >> 3;
  if (uVar7 < param_1) {
    _M_default_append(this,param_1 - uVar7);
    return;
  }
  if ((param_1 < uVar7) &&
     (puVar1 = (undefined8 *)(*(long *)this + param_1 * 8), puVar8 = puVar1, puVar1 != puVar2)) {
    do {
      plVar3 = (long *)*puVar8;
      if (plVar3 != (long *)0x0) {
        if (*(code **)(*plVar3 + 8) == Clipper2Lib::PolyPathD::~PolyPathD) {
          puVar4 = (undefined8 *)plVar3[3];
          *plVar3 = (long)&PTR__PolyPathD_00108b48;
          puVar10 = (undefined8 *)plVar3[2];
          puVar9 = puVar10;
          if (puVar4 != puVar10) {
            do {
              while (pPVar5 = (PolyPathD *)*puVar9, pPVar5 == (PolyPathD *)0x0) {
LAB_001061a2:
                puVar9 = puVar9 + 1;
                if (puVar4 == puVar9) goto LAB_001061d0;
              }
              if (*(code **)(*(long *)pPVar5 + 8) == Clipper2Lib::PolyPathD::~PolyPathD) {
                Clipper2Lib::PolyPathD::~PolyPathD(pPVar5);
                operator_delete(pPVar5,0x48);
                goto LAB_001061a2;
              }
              (**(code **)(*(long *)pPVar5 + 8))();
              puVar9 = puVar9 + 1;
            } while (puVar4 != puVar9);
LAB_001061d0:
            plVar3[3] = (long)puVar10;
          }
          pvVar6 = (void *)plVar3[6];
          if (pvVar6 != (void *)0x0) {
            operator_delete(pvVar6,plVar3[8] - (long)pvVar6);
          }
          puVar4 = (undefined8 *)plVar3[3];
          puVar10 = (undefined8 *)plVar3[2];
          if (puVar4 != puVar10) {
            do {
              while (pPVar5 = (PolyPathD *)*puVar10, pPVar5 == (PolyPathD *)0x0) {
LAB_00106212:
                puVar10 = puVar10 + 1;
                if (puVar4 == puVar10) goto LAB_00106240;
              }
              if (*(code **)(*(long *)pPVar5 + 8) == Clipper2Lib::PolyPathD::~PolyPathD) {
                Clipper2Lib::PolyPathD::~PolyPathD(pPVar5);
                operator_delete(pPVar5,0x48);
                goto LAB_00106212;
              }
              (**(code **)(*(long *)pPVar5 + 8))();
              puVar10 = puVar10 + 1;
            } while (puVar4 != puVar10);
LAB_00106240:
            puVar10 = (undefined8 *)plVar3[2];
          }
          if (puVar10 != (undefined8 *)0x0) {
            operator_delete(puVar10,plVar3[4] - (long)puVar10);
          }
          operator_delete(plVar3,0x48);
        }
        else {
          (**(code **)(*plVar3 + 8))(plVar3);
        }
      }
      puVar8 = puVar8 + 1;
    } while (puVar2 != puVar8);
    *(undefined8 **)(this + 8) = puVar1;
  }
  return;
}



/* Clipper2Lib::PolyPathD::~PolyPathD() */

void __thiscall Clipper2Lib::PolyPathD::~PolyPathD(PolyPathD *this)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  PolyPathD *pPVar4;
  void *pvVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  *(undefined ***)this = &PTR__PolyPathD_00108b48;
  puVar1 = *(undefined8 **)(this + 0x18);
  puVar6 = *(undefined8 **)(this + 0x10);
  puVar7 = puVar6;
  if (puVar1 != puVar6) {
LAB_00106304:
    do {
      plVar2 = (long *)*puVar7;
      if (plVar2 != (long *)0x0) {
        if (*(code **)(*plVar2 + 8) != ~PolyPathD) {
          puVar7 = puVar7 + 1;
          (**(code **)(*plVar2 + 8))(plVar2);
          if (puVar1 == puVar7) break;
          goto LAB_00106304;
        }
        puVar3 = (undefined8 *)plVar2[3];
        *plVar2 = (long)&PTR__PolyPathD_00108b48;
        puVar9 = (undefined8 *)plVar2[2];
        puVar8 = puVar9;
        if (puVar3 != puVar9) {
          do {
            while (pPVar4 = (PolyPathD *)*puVar8, pPVar4 == (PolyPathD *)0x0) {
LAB_0010635f:
              puVar8 = puVar8 + 1;
              if (puVar3 == puVar8) goto LAB_00106390;
            }
            if (*(code **)(*(long *)pPVar4 + 8) == ~PolyPathD) {
              ~PolyPathD(pPVar4);
              operator_delete(pPVar4,0x48);
              goto LAB_0010635f;
            }
            (**(code **)(*(long *)pPVar4 + 8))();
            puVar8 = puVar8 + 1;
          } while (puVar3 != puVar8);
LAB_00106390:
          plVar2[3] = (long)puVar9;
        }
        pvVar5 = (void *)plVar2[6];
        if (pvVar5 != (void *)0x0) {
          operator_delete(pvVar5,plVar2[8] - (long)pvVar5);
        }
        puVar3 = (undefined8 *)plVar2[3];
        puVar9 = (undefined8 *)plVar2[2];
        if (puVar3 != puVar9) {
          do {
            while (pPVar4 = (PolyPathD *)*puVar9, pPVar4 == (PolyPathD *)0x0) {
LAB_001063d7:
              puVar9 = puVar9 + 1;
              if (puVar3 == puVar9) goto LAB_00106400;
            }
            if (*(code **)(*(long *)pPVar4 + 8) == ~PolyPathD) {
              ~PolyPathD(pPVar4);
              operator_delete(pPVar4,0x48);
              goto LAB_001063d7;
            }
            (**(code **)(*(long *)pPVar4 + 8))();
            puVar9 = puVar9 + 1;
          } while (puVar3 != puVar9);
LAB_00106400:
          puVar9 = (undefined8 *)plVar2[2];
        }
        if (puVar9 != (undefined8 *)0x0) {
          operator_delete(puVar9,plVar2[4] - (long)puVar9);
        }
        operator_delete(plVar2,0x48);
      }
      puVar7 = puVar7 + 1;
    } while (puVar1 != puVar7);
    *(undefined8 **)(this + 0x18) = puVar6;
  }
  pvVar5 = *(void **)(this + 0x30);
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5,*(long *)(this + 0x40) - (long)pvVar5);
  }
  puVar1 = *(undefined8 **)(this + 0x18);
  puVar6 = *(undefined8 **)(this + 0x10);
  if (puVar1 != puVar6) {
    do {
      while (pPVar4 = (PolyPathD *)*puVar6, pPVar4 == (PolyPathD *)0x0) {
LAB_00106482:
        puVar6 = puVar6 + 1;
        if (puVar1 == puVar6) goto LAB_001064b0;
      }
      if (*(code **)(*(long *)pPVar4 + 8) == ~PolyPathD) {
        ~PolyPathD(pPVar4);
        operator_delete(pPVar4,0x48);
        goto LAB_00106482;
      }
      (**(code **)(*(long *)pPVar4 + 8))();
      puVar6 = puVar6 + 1;
    } while (puVar1 != puVar6);
LAB_001064b0:
    puVar6 = *(undefined8 **)(this + 0x10);
  }
  if (puVar6 != (undefined8 *)0x0) {
    operator_delete(puVar6,*(long *)(this + 0x20) - (long)puVar6);
  }
  operator_delete(this,0x48);
  return;
}



/* Clipper2Lib::PolyPathD::Clear() */

void __thiscall Clipper2Lib::PolyPathD::Clear(PolyPathD *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  PolyPathD *pPVar9;
  void *pvVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  
  puVar1 = *(undefined8 **)(this + 0x18);
  puVar2 = *(undefined8 **)(this + 0x10);
  puVar13 = puVar2;
  if (puVar1 != puVar2) {
LAB_0010654c:
    do {
      plVar3 = (long *)*puVar13;
      if (plVar3 != (long *)0x0) {
        if (*(code **)(*plVar3 + 8) != ~PolyPathD) {
          puVar13 = puVar13 + 1;
          (**(code **)(*plVar3 + 8))(plVar3);
          if (puVar1 == puVar13) break;
          goto LAB_0010654c;
        }
        puVar4 = (undefined8 *)plVar3[3];
        puVar15 = (undefined8 *)plVar3[2];
        *plVar3 = (long)&PTR__PolyPathD_00108b48;
        puVar16 = puVar15;
        if (puVar4 != puVar15) {
LAB_00106598:
          do {
            plVar5 = (long *)*puVar16;
            if (plVar5 != (long *)0x0) {
              if (*(code **)(*plVar5 + 8) != ~PolyPathD) {
                puVar16 = puVar16 + 1;
                (**(code **)(*plVar5 + 8))(plVar5);
                if (puVar4 == puVar16) break;
                goto LAB_00106598;
              }
              puVar6 = (undefined8 *)plVar5[3];
              puVar12 = (undefined8 *)plVar5[2];
              *plVar5 = (long)&PTR__PolyPathD_00108b48;
              puVar11 = puVar12;
              if (puVar6 != puVar12) {
LAB_001065ea:
                do {
                  plVar7 = (long *)*puVar11;
                  if (plVar7 != (long *)0x0) {
                    if (*(code **)(*plVar7 + 8) != ~PolyPathD) {
                      puVar11 = puVar11 + 1;
                      (**(code **)(*plVar7 + 8))(plVar7);
                      if (puVar6 == puVar11) break;
                      goto LAB_001065ea;
                    }
                    puVar8 = (undefined8 *)plVar7[3];
                    puVar14 = (undefined8 *)plVar7[2];
                    *plVar7 = (long)&PTR__PolyPathD_00108b48;
                    puVar17 = puVar14;
                    if (puVar8 != puVar14) {
                      do {
                        while (pPVar9 = (PolyPathD *)*puVar17, pPVar9 == (PolyPathD *)0x0) {
LAB_00106642:
                          puVar17 = puVar17 + 1;
                          if (puVar8 == puVar17) goto LAB_00106670;
                        }
                        if (*(code **)(*(long *)pPVar9 + 8) == ~PolyPathD) {
                          ~PolyPathD(pPVar9);
                          operator_delete(pPVar9,0x48);
                          goto LAB_00106642;
                        }
                        (**(code **)(*(long *)pPVar9 + 8))();
                        puVar17 = puVar17 + 1;
                      } while (puVar8 != puVar17);
LAB_00106670:
                      plVar7[3] = (long)puVar14;
                    }
                    pvVar10 = (void *)plVar7[6];
                    if (pvVar10 != (void *)0x0) {
                      operator_delete(pvVar10,plVar7[8] - (long)pvVar10);
                    }
                    puVar8 = (undefined8 *)plVar7[3];
                    puVar14 = (undefined8 *)plVar7[2];
                    if (puVar8 != puVar14) {
                      do {
                        while (pPVar9 = (PolyPathD *)*puVar14, pPVar9 == (PolyPathD *)0x0) {
LAB_001066ba:
                          puVar14 = puVar14 + 1;
                          if (puVar8 == puVar14) goto LAB_001066f0;
                        }
                        if (*(code **)(*(long *)pPVar9 + 8) == ~PolyPathD) {
                          ~PolyPathD(pPVar9);
                          operator_delete(pPVar9,0x48);
                          goto LAB_001066ba;
                        }
                        (**(code **)(*(long *)pPVar9 + 8))();
                        puVar14 = puVar14 + 1;
                      } while (puVar8 != puVar14);
LAB_001066f0:
                      puVar14 = (undefined8 *)plVar7[2];
                    }
                    if (puVar14 != (undefined8 *)0x0) {
                      operator_delete(puVar14,plVar7[4] - (long)puVar14);
                    }
                    operator_delete(plVar7,0x48);
                  }
                  puVar11 = puVar11 + 1;
                } while (puVar6 != puVar11);
                plVar5[3] = (long)puVar12;
              }
              pvVar10 = (void *)plVar5[6];
              if (pvVar10 != (void *)0x0) {
                operator_delete(pvVar10,plVar5[8] - (long)pvVar10);
              }
              puVar6 = (undefined8 *)plVar5[3];
              puVar12 = (undefined8 *)plVar5[2];
              if (puVar6 != puVar12) {
                do {
                  while (pPVar9 = (PolyPathD *)*puVar12, pPVar9 == (PolyPathD *)0x0) {
LAB_00106782:
                    puVar12 = puVar12 + 1;
                    if (puVar6 == puVar12) goto LAB_001067b0;
                  }
                  if (*(code **)(*(long *)pPVar9 + 8) == ~PolyPathD) {
                    ~PolyPathD(pPVar9);
                    operator_delete(pPVar9,0x48);
                    goto LAB_00106782;
                  }
                  (**(code **)(*(long *)pPVar9 + 8))();
                  puVar12 = puVar12 + 1;
                } while (puVar6 != puVar12);
LAB_001067b0:
                puVar12 = (undefined8 *)plVar5[2];
              }
              if (puVar12 != (undefined8 *)0x0) {
                operator_delete(puVar12,plVar5[4] - (long)puVar12);
              }
              operator_delete(plVar5,0x48);
            }
            puVar16 = puVar16 + 1;
          } while (puVar4 != puVar16);
          plVar3[3] = (long)puVar15;
        }
        pvVar10 = (void *)plVar3[6];
        if (pvVar10 != (void *)0x0) {
          operator_delete(pvVar10,plVar3[8] - (long)pvVar10);
        }
        puVar4 = (undefined8 *)plVar3[3];
        puVar15 = (undefined8 *)plVar3[2];
        if (puVar4 != puVar15) {
          do {
            while (pPVar9 = (PolyPathD *)*puVar15, pPVar9 == (PolyPathD *)0x0) {
LAB_0010683a:
              puVar15 = puVar15 + 1;
              if (puVar4 == puVar15) goto LAB_00106868;
            }
            if (*(code **)(*(long *)pPVar9 + 8) == ~PolyPathD) {
              ~PolyPathD(pPVar9);
              operator_delete(pPVar9,0x48);
              goto LAB_0010683a;
            }
            (**(code **)(*(long *)pPVar9 + 8))();
            puVar15 = puVar15 + 1;
          } while (puVar4 != puVar15);
LAB_00106868:
          puVar15 = (undefined8 *)plVar3[2];
        }
        if (puVar15 != (undefined8 *)0x0) {
          operator_delete(puVar15,plVar3[4] - (long)puVar15);
        }
        operator_delete(plVar3,0x48);
      }
      puVar13 = puVar13 + 1;
    } while (puVar1 != puVar13);
    *(undefined8 **)(this + 0x18) = puVar2;
  }
  return;
}



/* void std::vector<std::unique_ptr<Clipper2Lib::PolyPathD,
   std::default_delete<Clipper2Lib::PolyPathD> >,
   std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,
   std::default_delete<Clipper2Lib::PolyPathD> > >
   >::_M_realloc_insert<std::unique_ptr<Clipper2Lib::PolyPathD,
   std::default_delete<Clipper2Lib::PolyPathD> >
   >(__gnu_cxx::__normal_iterator<std::unique_ptr<Clipper2Lib::PolyPathD,
   std::default_delete<Clipper2Lib::PolyPathD> >*,
   std::vector<std::unique_ptr<Clipper2Lib::PolyPathD, std::default_delete<Clipper2Lib::PolyPathD>
   >, std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,
   std::default_delete<Clipper2Lib::PolyPathD> > > > >, std::unique_ptr<Clipper2Lib::PolyPathD,
   std::default_delete<Clipper2Lib::PolyPathD> >&&) */

void __thiscall
std::
vector<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>>>
::
_M_realloc_insert<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>>
          (vector<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>>>
           *this,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long local_50;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  uVar5 = (long)puVar1 - (long)puVar2 >> 3;
  if (uVar5 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (puVar2 == puVar1) {
    uVar9 = uVar5 + 1;
    if (0xfffffffffffffffe < uVar5) goto LAB_00106a26;
    if (0xfffffffffffffff < uVar9) {
      uVar9 = 0xfffffffffffffff;
    }
    uVar9 = uVar9 * 8;
LAB_00106a30:
    puVar6 = (undefined8 *)operator_new(uVar9);
    local_50 = (long)puVar6 + uVar9;
    uVar3 = *param_3;
    puVar7 = puVar6 + 1;
    *param_3 = 0;
    *(undefined8 *)((long)puVar6 + ((long)param_2 - (long)puVar2)) = uVar3;
    if (param_2 != puVar2) {
LAB_001069b2:
      puVar7 = puVar2;
      puVar8 = puVar6;
      do {
        uVar3 = *puVar7;
        puVar7 = puVar7 + 1;
        *puVar8 = uVar3;
        puVar8 = puVar8 + 1;
      } while (param_2 != puVar7);
      puVar7 = (undefined8 *)((long)puVar6 + (long)param_2 + (8 - (long)puVar2));
    }
    puVar8 = puVar7;
    if (param_2 == puVar1) goto LAB_001069f2;
  }
  else {
    uVar4 = uVar5 * 2;
    if (uVar4 < uVar5) {
LAB_00106a26:
      uVar9 = 0x7ffffffffffffff8;
      goto LAB_00106a30;
    }
    if (uVar4 != 0) {
      uVar9 = 0xfffffffffffffff;
      if (uVar4 < 0x1000000000000000) {
        uVar9 = uVar4;
      }
      uVar9 = uVar9 << 3;
      goto LAB_00106a30;
    }
    uVar3 = *param_3;
    puVar6 = (undefined8 *)0x0;
    *param_3 = 0;
    puVar7 = (undefined8 *)0x8;
    local_50 = 0;
    *(undefined8 *)((long)param_2 - (long)puVar2) = uVar3;
    if (param_2 != puVar2) goto LAB_001069b2;
  }
  puVar8 = (undefined8 *)((long)puVar7 + ((long)puVar1 - (long)param_2));
  memcpy(puVar7,param_2,(long)puVar1 - (long)param_2);
LAB_001069f2:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar6;
  *(undefined8 **)(this + 8) = puVar8;
  *(long *)(this + 0x10) = local_50;
  return;
}



/* void Vector<_AtlasWorkRect>::sort_custom<_DefaultComparator<_AtlasWorkRect>, true>() */

void __thiscall
Vector<_AtlasWorkRect>::sort_custom<_DefaultComparator<_AtlasWorkRect>,true>
          (Vector<_AtlasWorkRect> *this)

{
  _AtlasWorkRect *__dest;
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  _AtlasWorkRect *__src;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  size_t sVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  _AtlasWorkRect *p_Var14;
  _AtlasWorkRect *p_Var15;
  size_t sVar16;
  long in_FS_OFFSET;
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 8) != 0) && (lVar4 = *(long *)(*(long *)(this + 8) + -8), lVar4 != 0)) {
    CowData<_AtlasWorkRect>::_copy_on_write((CowData<_AtlasWorkRect> *)(this + 8));
    __src = *(_AtlasWorkRect **)(this + 8);
    if (lVar4 == 1) {
      if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
        SortArray<_AtlasWorkRect,_DefaultComparator<_AtlasWorkRect>,true>::introsort(0,1,__src,0);
        return;
      }
      goto LAB_00106e94;
    }
    lVar9 = 0;
    lVar13 = lVar4;
    do {
      lVar13 = lVar13 >> 1;
      lVar9 = lVar9 + 1;
    } while (lVar13 != 1);
    SortArray<_AtlasWorkRect,_DefaultComparator<_AtlasWorkRect>,true>::introsort
              (0,lVar4,__src,lVar9 * 2);
    __dest = __src + 0x14;
    if (lVar4 < 0x11) {
      sVar16 = 0x14;
      lVar13 = 1;
      p_Var14 = __dest;
      do {
        uVar5 = *(undefined8 *)p_Var14;
        uVar6 = *(undefined8 *)(p_Var14 + 8);
        iVar1 = *(int *)(p_Var14 + 0x10);
        iVar2 = *(int *)p_Var14;
        if (*(int *)__src < iVar2) {
          memmove(__dest,__src,sVar16);
          *(int *)(__src + 0x10) = iVar1;
          *(undefined8 *)__src = uVar5;
          *(undefined8 *)(__src + 8) = uVar6;
        }
        else {
          p_Var15 = p_Var14;
          if (*(int *)(p_Var14 + -0x14) < iVar2) {
            sVar8 = sVar16;
            lVar9 = lVar13;
            while (lVar9 = lVar9 + -1, lVar9 != 0) {
              uVar7 = *(undefined8 *)(p_Var14 + sVar8 + -sVar16 + -0x14 + 8);
              *(undefined8 *)(__src + sVar8) = *(undefined8 *)(p_Var14 + sVar8 + -sVar16 + -0x14);
              *(undefined8 *)(__src + sVar8 + 8) = uVar7;
              *(undefined4 *)(__src + sVar8 + 0x10) =
                   *(undefined4 *)(p_Var14 + sVar8 + -sVar16 + -4);
              if (iVar2 <= *(int *)(__src + (sVar8 - 0x28))) {
                p_Var15 = __src + lVar9 * 0x14;
                goto LAB_00106e1f;
              }
              sVar8 = sVar8 - 0x14;
            }
            _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                             "bad comparison function; sorting will be broken",0,0);
            p_Var15 = __dest;
          }
LAB_00106e1f:
          *(undefined8 *)p_Var15 = uVar5;
          *(undefined8 *)(p_Var15 + 8) = uVar6;
          *(int *)(p_Var15 + 0x10) = iVar1;
        }
        lVar13 = lVar13 + 1;
        sVar16 = sVar16 + 0x14;
        p_Var14 = p_Var14 + 0x14;
      } while (lVar4 != lVar13);
    }
    else {
      p_Var14 = __dest;
      lVar13 = 0;
      sVar16 = 0x14;
      do {
        while( true ) {
          uVar5 = *(undefined8 *)p_Var14;
          uVar6 = *(undefined8 *)(p_Var14 + 8);
          iVar1 = *(int *)(p_Var14 + 0x10);
          iVar2 = *(int *)p_Var14;
          lVar9 = lVar13 + 1;
          if (*(int *)__src < iVar2) break;
          p_Var15 = p_Var14;
          if (*(int *)(p_Var14 + -0x14) < iVar2) {
            sVar8 = sVar16;
            while (lVar13 != 0) {
              uVar7 = *(undefined8 *)(p_Var14 + sVar8 + -sVar16 + -0x14 + 8);
              *(undefined8 *)(__src + sVar8) = *(undefined8 *)(p_Var14 + sVar8 + -sVar16 + -0x14);
              *(undefined8 *)(__src + sVar8 + 8) = uVar7;
              *(undefined4 *)(__src + sVar8 + 0x10) =
                   *(undefined4 *)(p_Var14 + sVar8 + -sVar16 + -4);
              if (iVar2 <= *(int *)(__src + (sVar8 - 0x28))) {
                p_Var15 = __src + lVar13 * 0x14;
                goto LAB_00106c63;
              }
              sVar8 = sVar8 - 0x14;
              lVar13 = lVar13 + -1;
            }
            _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                             "bad comparison function; sorting will be broken",0,0);
            p_Var15 = __dest;
          }
LAB_00106c63:
          p_Var14 = p_Var14 + 0x14;
          *(int *)(p_Var15 + 0x10) = iVar1;
          *(undefined8 *)p_Var15 = uVar5;
          *(undefined8 *)(p_Var15 + 8) = uVar6;
          lVar13 = lVar9;
          sVar16 = sVar16 + 0x14;
          if (lVar9 == 0xf) goto LAB_00106c85;
        }
        memmove(__dest,__src,sVar16);
        p_Var14 = p_Var14 + 0x14;
        *(int *)(__src + 0x10) = iVar1;
        *(undefined8 *)__src = uVar5;
        *(undefined8 *)(__src + 8) = uVar6;
        lVar13 = lVar9;
        sVar16 = sVar16 + 0x14;
      } while (lVar9 != 0xf);
LAB_00106c85:
      p_Var14 = __src + 0x140;
      lVar9 = -0x140;
      lVar13 = 0x10;
      do {
        iVar1 = *(int *)(p_Var14 + 0x10);
        uVar5 = *(undefined8 *)p_Var14;
        uVar6 = *(undefined8 *)(p_Var14 + 8);
        iVar2 = *(int *)p_Var14;
        lVar12 = -lVar9;
        lVar10 = lVar13 + -1;
        p_Var15 = p_Var14;
        if (*(int *)(p_Var14 + -0x14) < iVar2) {
          do {
            uVar7 = *(undefined8 *)(p_Var14 + lVar12 + lVar9 + -0x14 + 8);
            *(undefined8 *)(__src + lVar12) = *(undefined8 *)(p_Var14 + lVar12 + lVar9 + -0x14);
            *(undefined8 *)(__src + lVar12 + 8) = uVar7;
            *(undefined4 *)(__src + lVar12 + 0x10) = *(undefined4 *)(p_Var14 + lVar12 + lVar9 + -4);
            lVar11 = lVar10 + -1;
            if (iVar2 <= *(int *)(__src + lVar12 + -0x28)) {
              p_Var15 = __src + lVar10 * 0x14;
              goto LAB_00106d24;
            }
            lVar12 = lVar12 + -0x14;
            lVar10 = lVar11;
          } while (lVar11 != 0);
          _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                           "bad comparison function; sorting will be broken",0,0);
          p_Var15 = __dest;
        }
LAB_00106d24:
        lVar13 = lVar13 + 1;
        p_Var14 = p_Var14 + 0x14;
        lVar9 = lVar9 + -0x14;
        *(int *)(p_Var15 + 0x10) = iVar1;
        *(undefined8 *)p_Var15 = uVar5;
        *(undefined8 *)(p_Var15 + 8) = uVar6;
      } while (lVar4 != lVar13);
    }
  }
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00106e94:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Vector<Vector2> >::_unref() */

void __thiscall CowData<Vector<Vector2>>::_unref(CowData<Vector<Vector2>> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar2 = *(long *)this;
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        lVar6 = lVar2;
        do {
          if (*(long *)(lVar6 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 8);
              *(undefined8 *)(lVar6 + 8) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x10;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* Error CowData<Vector<Vector2> >::resize<false>(long) */

undefined8 __thiscall
CowData<Vector<Vector2>>::resize<false>(CowData<Vector<Vector2>> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
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
    lVar7 = lVar6 * 0x10;
    if (lVar7 != 0) {
      uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x10 == 0) {
LAB_00107238:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar8 = param_1 * 0x10 - 1;
  uVar8 = uVar8 >> 1 | uVar8;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  uVar8 = uVar8 | uVar8 >> 0x20;
  if (uVar8 == 0xffffffffffffffff) goto LAB_00107238;
  if (param_1 <= lVar6) {
    puVar4 = *(undefined8 **)this;
    uVar5 = param_1;
    while (puVar4 != (undefined8 *)0x0) {
      if ((ulong)puVar4[-1] <= uVar5) {
LAB_001070b2:
        if (uVar8 + 1 != lVar7) {
          puVar3 = (undefined8 *)Memory::realloc_static(puVar4 + -2,uVar8 + 0x11,false);
          if (puVar3 == (undefined8 *)0x0) goto LAB_00107267;
          puVar4 = puVar3 + 2;
          *puVar3 = 1;
          *(undefined8 **)this = puVar4;
        }
        puVar4[-1] = param_1;
        return 0;
      }
      while (puVar4[uVar5 * 2 + 1] == 0) {
        uVar5 = uVar5 + 1;
        if ((ulong)puVar4[-1] <= uVar5) goto LAB_001070b2;
      }
      LOCK();
      plVar1 = (long *)(puVar4[uVar5 * 2 + 1] + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar6 = puVar4[uVar5 * 2 + 1];
        puVar4[uVar5 * 2 + 1] = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
      uVar5 = uVar5 + 1;
      puVar4 = *(undefined8 **)this;
    }
LAB_001072b5:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (uVar8 + 1 == lVar7) {
    puVar4 = *(undefined8 **)this;
    if (puVar4 == (undefined8 *)0x0) goto LAB_001072b5;
    lVar6 = puVar4[-1];
LAB_00107198:
    if (param_1 <= lVar6) goto LAB_00107149;
  }
  else {
    if (lVar6 != 0) {
      puVar3 = (undefined8 *)
               Memory::realloc_static((void *)(*(long *)this + -0x10),uVar8 + 0x11,false);
      if (puVar3 == (undefined8 *)0x0) {
LAB_00107267:
        _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                         "Parameter \"mem_new\" is null.",0,0);
        return 6;
      }
      puVar4 = puVar3 + 2;
      *puVar3 = 1;
      *(undefined8 **)this = puVar4;
      lVar6 = puVar3[1];
      goto LAB_00107198;
    }
    puVar3 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar3 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar4 = puVar3 + 2;
    *puVar3 = 1;
    puVar3[1] = 0;
    *(undefined8 **)this = puVar4;
    lVar6 = 0;
  }
  puVar3 = puVar4 + lVar6 * 2;
  do {
    puVar3[1] = 0;
    puVar3 = puVar3 + 2;
  } while (puVar3 != puVar4 + param_1 * 2);
LAB_00107149:
  puVar4[-1] = param_1;
  return 0;
}



/* CowData<_AtlasWorkRect>::_unref() */

void __thiscall CowData<_AtlasWorkRect>::_unref(CowData<_AtlasWorkRect> *this)

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



/* CowData<_AtlasWorkRectResult>::_unref() */

void __thiscall CowData<_AtlasWorkRectResult>::_unref(CowData<_AtlasWorkRectResult> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar2 = *(long *)this;
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        lVar6 = lVar2;
        do {
          if (*(long *)(lVar6 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 8);
              *(undefined8 *)(lVar6 + 8) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x18;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* Error CowData<_AtlasWorkRectResult>::resize<false>(long) */

undefined8 __thiscall
CowData<_AtlasWorkRectResult>::resize<false>(CowData<_AtlasWorkRectResult> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
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
    lVar9 = 0;
    lVar6 = 0;
  }
  else {
    lVar9 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar9) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar6 = lVar9 * 0x18;
    if (lVar6 != 0) {
      uVar7 = lVar6 - 1U | lVar6 - 1U >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = uVar7 | uVar7 >> 0x10;
      lVar6 = (uVar7 | uVar7 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x18 == 0) {
LAB_001076b8:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar7 = param_1 * 0x18 - 1;
  uVar7 = uVar7 >> 1 | uVar7;
  uVar7 = uVar7 | uVar7 >> 2;
  uVar7 = uVar7 | uVar7 >> 4;
  uVar7 = uVar7 | uVar7 >> 8;
  uVar7 = uVar7 | uVar7 >> 0x10;
  uVar7 = uVar7 | uVar7 >> 0x20;
  if (uVar7 == 0xffffffffffffffff) goto LAB_001076b8;
  if (param_1 <= lVar9) {
    puVar5 = *(undefined8 **)this;
    uVar8 = param_1;
    while (puVar5 != (undefined8 *)0x0) {
      if ((ulong)puVar5[-1] <= uVar8) {
LAB_00107519:
        if (uVar7 + 1 != lVar6) {
          puVar4 = (undefined8 *)Memory::realloc_static(puVar5 + -2,uVar7 + 0x11,false);
          if (puVar4 == (undefined8 *)0x0) goto LAB_001076e7;
          puVar5 = puVar4 + 2;
          *puVar4 = 1;
          *(undefined8 **)this = puVar5;
        }
        puVar5[-1] = param_1;
        return 0;
      }
      while (puVar5[uVar8 * 3 + 1] == 0) {
        uVar8 = uVar8 + 1;
        if ((ulong)puVar5[-1] <= uVar8) goto LAB_00107519;
      }
      LOCK();
      plVar1 = (long *)(puVar5[uVar8 * 3 + 1] + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar9 = puVar5[uVar8 * 3 + 1];
        puVar5[uVar8 * 3 + 1] = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
      uVar8 = uVar8 + 1;
      puVar5 = *(undefined8 **)this;
    }
LAB_00107735:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (uVar7 + 1 == lVar6) {
    puVar5 = *(undefined8 **)this;
    if (puVar5 == (undefined8 *)0x0) goto LAB_00107735;
    lVar9 = puVar5[-1];
LAB_00107610:
    if (param_1 <= lVar9) goto LAB_001075c1;
  }
  else {
    if (lVar9 != 0) {
      puVar4 = (undefined8 *)
               Memory::realloc_static((void *)(*(long *)this + -0x10),uVar7 + 0x11,false);
      if (puVar4 == (undefined8 *)0x0) {
LAB_001076e7:
        _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                         "Parameter \"mem_new\" is null.",0,0);
        return 6;
      }
      puVar5 = puVar4 + 2;
      *puVar4 = 1;
      *(undefined8 **)this = puVar5;
      lVar9 = puVar4[1];
      goto LAB_00107610;
    }
    puVar4 = (undefined8 *)Memory::alloc_static(uVar7 + 0x11,false);
    if (puVar4 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar5 = puVar4 + 2;
    *puVar4 = 1;
    puVar4[1] = 0;
    *(undefined8 **)this = puVar5;
    lVar9 = 0;
  }
  puVar4 = puVar5 + lVar9 * 3;
  do {
    puVar4[1] = 0;
    puVar3 = puVar4 + 3;
    puVar4[2] = 0;
    puVar4 = puVar3;
  } while (puVar3 != puVar5 + param_1 * 3);
LAB_001075c1:
  puVar5[-1] = param_1;
  return 0;
}



/* void std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> >
   >::_M_realloc_insert<Clipper2Lib::Point<long>
   >(__gnu_cxx::__normal_iterator<Clipper2Lib::Point<long>*, std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > >, Clipper2Lib::Point<long>&&) */

void __thiscall
std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::
_M_realloc_insert<Clipper2Lib::Point<long>>
          (vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>> *this,
          undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  uVar5 = (long)puVar1 - (long)puVar2 >> 4;
  if (uVar5 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  puVar8 = (undefined8 *)((long)param_2 - (long)puVar2);
  if (puVar2 == puVar1) {
    if (0xfffffffffffffffe < uVar5) goto LAB_00107848;
    uVar7 = 0x7ffffffffffffff;
    if (uVar5 + 1 < 0x800000000000000) {
      uVar7 = uVar5 + 1;
    }
    uVar7 = uVar7 << 4;
LAB_00107852:
    puVar6 = (undefined8 *)operator_new(uVar7);
    uVar3 = param_3[1];
    lVar11 = uVar7 + (long)puVar6;
    puVar10 = puVar6 + 2;
    *(undefined8 *)((long)puVar6 + (long)puVar8) = *param_3;
    ((undefined8 *)((long)puVar6 + (long)puVar8))[1] = uVar3;
    if (param_2 != puVar2) {
LAB_001077ba:
      puVar8 = puVar6;
      puVar9 = puVar2;
      do {
        puVar10 = puVar8;
        uVar3 = *puVar9;
        uVar4 = puVar9[1];
        puVar9 = puVar9 + 2;
        *puVar10 = uVar3;
        puVar10[1] = uVar4;
        puVar8 = puVar10 + 2;
      } while (puVar10 + 2 != (undefined8 *)(((long)param_2 - (long)puVar2) + (long)puVar6));
      puVar10 = puVar10 + 4;
    }
    puVar8 = puVar10;
    if (param_2 == puVar1) goto LAB_0010780c;
  }
  else {
    uVar7 = uVar5 * 2;
    if (uVar7 < uVar5) {
LAB_00107848:
      uVar7 = 0x7ffffffffffffff0;
      goto LAB_00107852;
    }
    if (uVar7 != 0) {
      if (0x7ffffffffffffff < uVar7) {
        uVar7 = 0x7ffffffffffffff;
      }
      uVar7 = uVar7 << 4;
      goto LAB_00107852;
    }
    uVar3 = param_3[1];
    lVar11 = 0;
    puVar6 = (undefined8 *)0x0;
    puVar10 = (undefined8 *)0x10;
    *puVar8 = *param_3;
    puVar8[1] = uVar3;
    if (param_2 != puVar2) goto LAB_001077ba;
  }
  puVar8 = (undefined8 *)((long)puVar10 + ((long)puVar1 - (long)param_2));
  memcpy(puVar10,param_2,(long)puVar1 - (long)param_2);
LAB_0010780c:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar6;
  *(undefined8 **)(this + 8) = puVar8;
  *(long *)(this + 0x10) = lVar11;
  return;
}



/* void std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> >
   >::_M_realloc_insert<Clipper2Lib::Point<double>
   >(__gnu_cxx::__normal_iterator<Clipper2Lib::Point<double>*,
   std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> > > >,
   Clipper2Lib::Point<double>&&) */

void __thiscall
std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>::
_M_realloc_insert<Clipper2Lib::Point<double>>
          (vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>> *this,
          undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  uVar5 = (long)puVar1 - (long)puVar2 >> 4;
  if (uVar5 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  puVar8 = (undefined8 *)((long)param_2 - (long)puVar2);
  if (puVar2 == puVar1) {
    if (0xfffffffffffffffe < uVar5) goto LAB_001079d8;
    uVar7 = 0x7ffffffffffffff;
    if (uVar5 + 1 < 0x800000000000000) {
      uVar7 = uVar5 + 1;
    }
    uVar7 = uVar7 << 4;
LAB_001079e2:
    puVar6 = (undefined8 *)operator_new(uVar7);
    uVar3 = param_3[1];
    lVar11 = uVar7 + (long)puVar6;
    puVar10 = puVar6 + 2;
    *(undefined8 *)((long)puVar6 + (long)puVar8) = *param_3;
    ((undefined8 *)((long)puVar6 + (long)puVar8))[1] = uVar3;
    if (param_2 != puVar2) {
LAB_0010794a:
      puVar8 = puVar6;
      puVar9 = puVar2;
      do {
        puVar10 = puVar8;
        uVar3 = *puVar9;
        uVar4 = puVar9[1];
        puVar9 = puVar9 + 2;
        *puVar10 = uVar3;
        puVar10[1] = uVar4;
        puVar8 = puVar10 + 2;
      } while (puVar10 + 2 != (undefined8 *)(((long)param_2 - (long)puVar2) + (long)puVar6));
      puVar10 = puVar10 + 4;
    }
    puVar8 = puVar10;
    if (param_2 == puVar1) goto LAB_0010799c;
  }
  else {
    uVar7 = uVar5 * 2;
    if (uVar7 < uVar5) {
LAB_001079d8:
      uVar7 = 0x7ffffffffffffff0;
      goto LAB_001079e2;
    }
    if (uVar7 != 0) {
      if (0x7ffffffffffffff < uVar7) {
        uVar7 = 0x7ffffffffffffff;
      }
      uVar7 = uVar7 << 4;
      goto LAB_001079e2;
    }
    uVar3 = param_3[1];
    lVar11 = 0;
    puVar6 = (undefined8 *)0x0;
    puVar10 = (undefined8 *)0x10;
    *puVar8 = *param_3;
    puVar8[1] = uVar3;
    if (param_2 != puVar2) goto LAB_0010794a;
  }
  puVar8 = (undefined8 *)((long)puVar10 + ((long)puVar1 - (long)param_2));
  memcpy(puVar10,param_2,(long)puVar1 - (long)param_2);
LAB_0010799c:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar6;
  *(undefined8 **)(this + 8) = puVar8;
  *(long *)(this + 0x10) = lVar11;
  return;
}



/* std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> > >
   Clipper2Lib::ScalePath<double, long>(std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > const&, double, double, int&) */

Clipper2Lib * __thiscall
Clipper2Lib::ScalePath<double,long>
          (Clipper2Lib *this,vector_conflict *param_1,double param_2,double param_3,int *param_4)

{
  double *pdVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  double dVar12;
  double local_48;
  double dStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x10) = 0;
  if (param_2 != 0.0) {
    bVar5 = param_2 == 0.0;
    if (param_3 == 0.0) {
      bVar5 = !NAN(param_3);
    }
    dVar12 = param_3;
    if (!bVar5) goto LAB_00107ac2;
  }
  *param_4 = *param_4 | 2;
  dVar12 = _LC49;
  if ((param_2 == 0.0) && (param_2 = _LC49, dVar12 = param_3, param_3 == 0.0)) {
    dVar12 = _LC49;
  }
LAB_00107ac2:
  plVar10 = *(long **)(param_1 + 8);
  plVar9 = *(long **)param_1;
  uVar11 = (long)plVar10 - (long)plVar9;
  if (0x7ffffffffffffff0 < uVar11) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::reserve");
  }
  if (uVar11 != 0) {
    puVar7 = (undefined8 *)operator_new(uVar11);
    puVar3 = *(undefined8 **)(this + 8);
    puVar2 = *(undefined8 **)this;
    puVar6 = puVar7;
    for (puVar8 = puVar2; puVar3 != puVar8; puVar8 = puVar8 + 2) {
      uVar4 = puVar8[1];
      *puVar6 = *puVar8;
      puVar6[1] = uVar4;
      puVar6 = puVar6 + 2;
    }
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
    }
    plVar10 = *(long **)(param_1 + 8);
    *(undefined8 **)this = puVar7;
    *(undefined8 **)(this + 8) = puVar7;
    *(ulong *)(this + 0x10) = (long)puVar7 + uVar11;
    plVar9 = *(long **)param_1;
  }
  for (; plVar9 != plVar10; plVar9 = plVar9 + 2) {
    while( true ) {
      pdVar1 = *(double **)(this + 8);
      local_48 = (double)*plVar9 * param_2;
      dStack_40 = (double)plVar9[1] * dVar12;
      if (pdVar1 != *(double **)(this + 0x10)) break;
      plVar9 = plVar9 + 2;
      std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>::
      _M_realloc_insert<Clipper2Lib::Point<double>>
                ((vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>> *)
                 this,pdVar1,&local_48);
      if (plVar10 == plVar9) goto LAB_00107b68;
    }
    *pdVar1 = local_48;
    pdVar1[1] = dStack_40;
    *(double **)(this + 8) = pdVar1 + 2;
  }
LAB_00107b68:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Clipper2Lib::PolyPathD::AddChild(std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > const&) */

undefined8 __thiscall Clipper2Lib::PolyPathD::AddChild(PolyPathD *this,vector_conflict *param_1)

{
  double dVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  PolyPathD *pPVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long in_FS_OFFSET;
  undefined8 local_88;
  int local_5c;
  long *local_58;
  long lStack_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar8 = (long *)operator_new(0x48);
  plVar8[1] = (long)this;
  *plVar8 = (long)&PTR__PolyPathD_00108b48;
  *(undefined1 (*) [16])(plVar8 + 6) = (undefined1  [16])0x0;
  dVar1 = *(double *)(this + 0x28);
  plVar8[2] = 0;
  plVar8[3] = 0;
  plVar8[4] = 0;
  plVar8[8] = 0;
  plVar8[5] = (long)dVar1;
  local_5c = 0;
  ScalePath<double,long>((Clipper2Lib *)&local_58,param_1,dVar1,dVar1,&local_5c);
  pvVar2 = (void *)plVar8[6];
  lVar3 = plVar8[8];
  plVar8[6] = (long)local_58;
  plVar8[7] = lStack_50;
  plVar8[8] = local_48;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2,lVar3 - (long)pvVar2);
  }
  puVar4 = *(undefined8 **)(this + 0x18);
  local_58 = plVar8;
  if (puVar4 == *(undefined8 **)(this + 0x20)) {
    std::
    vector<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>>>
    ::
    _M_realloc_insert<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>>
              ((vector<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>,std::allocator<std::unique_ptr<Clipper2Lib::PolyPathD,std::default_delete<Clipper2Lib::PolyPathD>>>>
                *)(this + 0x10),puVar4,(Clipper2Lib *)&local_58);
    plVar8 = local_58;
    local_88 = *(undefined8 *)(*(long *)(this + 0x18) + -8);
    if (local_58 != (long *)0x0) {
      if (*(code **)(*local_58 + 8) == ~PolyPathD) {
        puVar4 = (undefined8 *)local_58[3];
        *local_58 = (long)&PTR__PolyPathD_00108b48;
        puVar9 = (undefined8 *)local_58[2];
        puVar10 = puVar9;
        if (puVar4 != puVar9) {
LAB_00107df6:
          do {
            plVar5 = (long *)*puVar10;
            if (plVar5 != (long *)0x0) {
              if (*(code **)(*plVar5 + 8) != ~PolyPathD) {
                puVar10 = puVar10 + 1;
                (**(code **)(*plVar5 + 8))(plVar5);
                if (puVar4 == puVar10) break;
                goto LAB_00107df6;
              }
              puVar6 = (undefined8 *)plVar5[3];
              *plVar5 = (long)&PTR__PolyPathD_00108b48;
              puVar12 = (undefined8 *)plVar5[2];
              puVar11 = puVar12;
              if (puVar6 != puVar12) {
                do {
                  while (pPVar7 = (PolyPathD *)*puVar11, pPVar7 == (PolyPathD *)0x0) {
LAB_00107e51:
                    puVar11 = puVar11 + 1;
                    if (puVar6 == puVar11) goto LAB_00107e80;
                  }
                  if (*(code **)(*(long *)pPVar7 + 8) == ~PolyPathD) {
                    ~PolyPathD(pPVar7);
                    operator_delete(pPVar7,0x48);
                    goto LAB_00107e51;
                  }
                  (**(code **)(*(long *)pPVar7 + 8))();
                  puVar11 = puVar11 + 1;
                } while (puVar6 != puVar11);
LAB_00107e80:
                plVar5[3] = (long)puVar12;
              }
              pvVar2 = (void *)plVar5[6];
              if (pvVar2 != (void *)0x0) {
                operator_delete(pvVar2,plVar5[8] - (long)pvVar2);
              }
              puVar6 = (undefined8 *)plVar5[3];
              puVar12 = (undefined8 *)plVar5[2];
              if (puVar6 != puVar12) {
                do {
                  while (pPVar7 = (PolyPathD *)*puVar12, pPVar7 == (PolyPathD *)0x0) {
LAB_00107ec9:
                    puVar12 = puVar12 + 1;
                    if (puVar6 == puVar12) goto LAB_00107ef8;
                  }
                  if (*(code **)(*(long *)pPVar7 + 8) == ~PolyPathD) {
                    ~PolyPathD(pPVar7);
                    operator_delete(pPVar7,0x48);
                    goto LAB_00107ec9;
                  }
                  (**(code **)(*(long *)pPVar7 + 8))();
                  puVar12 = puVar12 + 1;
                } while (puVar6 != puVar12);
LAB_00107ef8:
                puVar12 = (undefined8 *)plVar5[2];
              }
              if (puVar12 != (undefined8 *)0x0) {
                operator_delete(puVar12,plVar5[4] - (long)puVar12);
              }
              operator_delete(plVar5,0x48);
            }
            puVar10 = puVar10 + 1;
          } while (puVar4 != puVar10);
          plVar8[3] = (long)puVar9;
        }
        pvVar2 = (void *)plVar8[6];
        if (pvVar2 != (void *)0x0) {
          operator_delete(pvVar2,plVar8[8] - (long)pvVar2);
        }
        puVar4 = (undefined8 *)plVar8[3];
        puVar9 = (undefined8 *)plVar8[2];
        if (puVar4 != puVar9) {
          do {
            while (pPVar7 = (PolyPathD *)*puVar9, pPVar7 == (PolyPathD *)0x0) {
LAB_00107fa2:
              puVar9 = puVar9 + 1;
              if (puVar4 == puVar9) goto LAB_00107fd0;
            }
            if (*(code **)(*(long *)pPVar7 + 8) == ~PolyPathD) {
              ~PolyPathD(pPVar7);
              operator_delete(pPVar7,0x48);
              goto LAB_00107fa2;
            }
            (**(code **)(*(long *)pPVar7 + 8))();
            puVar9 = puVar9 + 1;
          } while (puVar4 != puVar9);
LAB_00107fd0:
          puVar9 = (undefined8 *)plVar8[2];
        }
        if (puVar9 != (undefined8 *)0x0) {
          operator_delete(puVar9,plVar8[4] - (long)puVar9);
        }
        operator_delete(plVar8,0x48);
      }
      else {
        (**(code **)(*local_58 + 8))(local_58);
      }
    }
  }
  else {
    *puVar4 = plVar8;
    *(undefined8 **)(this + 0x18) = puVar4 + 1;
    local_88 = *puVar4;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_88;
}



/* std::vector<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> >
   >, std::allocator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > > > Clipper2Lib::ScalePaths<double,
   long>(std::vector<std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> >
   >, std::allocator<std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> >
   > > > const&, double, double, int&) */

Clipper2Lib * __thiscall
Clipper2Lib::ScalePaths<double,long>
          (Clipper2Lib *this,vector_conflict *param_1,double param_2,double param_3,int *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  vector_conflict *pvVar13;
  vector_conflict *pvVar14;
  long in_FS_OFFSET;
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  pvVar14 = *(vector_conflict **)(param_1 + 8);
  pvVar13 = *(vector_conflict **)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar12 = (long)pvVar14 - (long)pvVar13;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  if (0x7ffffffffffffff8 < uVar12) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::reserve");
  }
  if (uVar12 != 0) {
    puVar4 = (undefined8 *)operator_new(uVar12);
    puVar8 = *(undefined8 **)(this + 8);
    puVar9 = *(undefined8 **)this;
    puVar5 = puVar4;
    for (puVar6 = puVar9; puVar8 != puVar6; puVar6 = puVar6 + 3) {
      uVar2 = puVar6[1];
      uVar1 = puVar6[2];
      *puVar5 = *puVar6;
      puVar5[1] = uVar2;
      puVar5[2] = uVar1;
      puVar5 = puVar5 + 3;
    }
    if (puVar9 != (undefined8 *)0x0) {
      operator_delete(puVar9,*(long *)(this + 0x10) - (long)puVar9);
    }
    pvVar13 = *(vector_conflict **)param_1;
    pvVar14 = *(vector_conflict **)(param_1 + 8);
    *(undefined8 **)this = puVar4;
    *(undefined8 **)(this + 8) = puVar4;
    *(ulong *)(this + 0x10) = (long)puVar4 + uVar12;
  }
  if (pvVar14 != pvVar13) {
    do {
      while( true ) {
        ScalePath<double,long>((Clipper2Lib *)local_58,pvVar13,param_2,param_3,param_4);
        puVar8 = *(undefined8 **)(this + 8);
        puVar9 = *(undefined8 **)(this + 0x10);
        if (puVar8 != puVar9) break;
        puVar6 = *(undefined8 **)this;
        puVar5 = (undefined8 *)((long)puVar8 - (long)puVar6);
        uVar12 = ((long)puVar5 >> 3) * -0x5555555555555555;
        if (uVar12 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
          std::__throw_length_error("vector::_M_realloc_insert");
        }
        if (puVar8 == puVar6) {
          uVar7 = uVar12 + 1;
          if (0xfffffffffffffffe < uVar12) goto LAB_00108348;
          if (0x555555555555555 < uVar7) {
            uVar7 = 0x555555555555555;
          }
          uVar7 = uVar7 * 0x18;
LAB_00108243:
          puVar4 = (undefined8 *)operator_new(uVar7);
          uVar1 = local_58._0_8_;
          uVar2 = local_58._8_8_;
          local_58 = (undefined1  [16])0x0;
          puVar5 = (undefined8 *)((long)puVar5 + (long)puVar4);
          lVar10 = uVar7 + (long)puVar4;
          puVar9 = *(undefined8 **)(this + 0x10);
          *puVar5 = uVar1;
          puVar5[1] = uVar2;
          puVar5[2] = local_48;
          local_48 = 0;
          puVar5 = puVar6;
          puVar11 = puVar4;
          if (puVar8 != puVar6) goto LAB_00108160;
          puVar8 = puVar4 + 3;
        }
        else {
          uVar7 = ((long)puVar5 >> 3) * 0x5555555555555556;
          if (uVar7 < uVar12) {
LAB_00108348:
            uVar7 = 0x7ffffffffffffff8;
            goto LAB_00108243;
          }
          if (uVar7 != 0) {
            if (0x555555555555555 < uVar7) {
              uVar7 = 0x555555555555555;
            }
            uVar7 = uVar7 * 0x18;
            goto LAB_00108243;
          }
          lVar10 = 0;
          puVar4 = (undefined8 *)0x0;
          puVar5[2] = local_48;
          *puVar5 = local_58._0_8_;
          puVar5[1] = local_58._8_8_;
          puVar5 = puVar6;
          puVar11 = puVar4;
LAB_00108160:
          do {
            uVar2 = puVar5[1];
            uVar1 = puVar5[2];
            puVar3 = puVar5 + 3;
            *puVar4 = *puVar5;
            puVar4[1] = uVar2;
            puVar4[2] = uVar1;
            puVar5 = puVar3;
            puVar4 = puVar4 + 3;
          } while (puVar8 != puVar3);
          puVar8 = puVar11 + (((ulong)((long)puVar8 + (-0x18 - (long)puVar6)) >> 3) *
                              0xaaaaaaaaaaaaaab & 0x1fffffffffffffff) * 3 + 6;
          puVar4 = puVar11;
        }
        if (puVar6 != (undefined8 *)0x0) {
          operator_delete(puVar6,(long)puVar9 - (long)puVar6);
        }
        pvVar13 = pvVar13 + 0x18;
        *(undefined8 **)this = puVar4;
        *(undefined8 **)(this + 8) = puVar8;
        *(long *)(this + 0x10) = lVar10;
        if (pvVar14 == pvVar13) goto LAB_001081f8;
      }
      pvVar13 = pvVar13 + 0x18;
      *puVar8 = local_58._0_8_;
      puVar8[1] = local_58._8_8_;
      puVar8[2] = local_48;
      *(undefined8 **)(this + 8) = puVar8 + 3;
    } while (pvVar14 != pvVar13);
  }
LAB_001081f8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Clipper2Lib::InflatePaths(std::vector<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > >,
   std::allocator<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double>
   > > > > const&, double, Clipper2Lib::JoinType, Clipper2Lib::EndType, double, int, double) */

Clipper2Lib *
Clipper2Lib::InflatePaths
          (Clipper2Lib *param_2,double param_2_00,double param_3,double param_4,double param_5,
          Clipper2Lib *param_1,Clipper2Lib *param_7,ulong param_8,uint param_9,int param_10)

{
  double dVar1;
  undefined8 uVar2;
  double *pdVar3;
  undefined8 uVar4;
  void *pvVar5;
  double *pdVar6;
  long lVar7;
  long lVar8;
  Clipper2Lib *pCVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  Clipper2Lib *pCVar12;
  Clipper2Lib *pCVar13;
  undefined1 (*unaff_R13) [16];
  long *plVar14;
  long *unaff_R14;
  long in_FS_OFFSET;
  Clipper2Lib *pCVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  Clipper2Lib *local_180;
  int local_15c;
  undefined1 local_158 [16];
  long local_148;
  int *local_138;
  Clipper2Lib *pCStack_130;
  Clipper2Lib *pCStack_128;
  undefined4 local_118 [2];
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  long local_90;
  undefined8 local_88;
  double local_80;
  double dStack_78;
  undefined2 local_70;
  undefined1 local_68 [16];
  code *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_15c = 0;
  if (param_10 + 8U < 0x11) {
    unaff_R13 = (undefined1 (*) [16])(param_8 & 0xffffffff);
    unaff_R14 = (long *)(ulong)param_9;
    param_4 = param_2_00;
    if ((double)param_2 == 0.0) goto LAB_00108440;
    pCVar15 = (Clipper2Lib *)pow(_LC59,(double)param_10);
    pCVar13 = *(Clipper2Lib **)param_7;
    pCVar12 = *(Clipper2Lib **)(param_7 + 8);
    local_110 = (undefined1  [16])0x0;
    local_100 = (undefined1  [16])0x0;
    local_f0 = (undefined1  [16])0x0;
    local_118[0] = 0;
    local_90 = 0;
    local_88 = 1;
    local_70 = 0;
    local_58 = (code *)0x0;
    local_50 = 0;
    local_148 = 0;
    local_e0 = (undefined1  [16])0x0;
    local_d0 = (undefined1  [16])0x0;
    local_c0 = (undefined1  [16])0x0;
    local_b0 = (undefined1  [16])0x0;
    local_a0 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    local_158 = (undefined1  [16])0x0;
    pCVar9 = pCVar13;
    dVar18 = _LC52;
    dVar16 = _LC53;
    dVar17 = _LC53;
    param_5 = _LC52;
    local_180 = pCVar15;
    local_80 = param_2_00;
    dStack_78 = param_3;
    if (pCVar13 == pCVar12) goto LAB_0010893f;
    do {
      pdVar3 = *(double **)pCVar9;
      while (param_4 = dVar16, pdVar3 != *(double **)(pCVar9 + 8)) {
        dVar19 = *pdVar3;
        pdVar6 = pdVar3 + 2;
        dVar1 = dVar19;
        if (dVar19 <= param_5) {
          dVar1 = param_5;
        }
        if (dVar17 <= dVar19) {
          dVar19 = dVar17;
        }
        dVar16 = pdVar3[1];
        dVar17 = dVar16;
        if (dVar16 <= dVar18) {
          dVar17 = dVar18;
        }
        pdVar3 = pdVar6;
        dVar18 = dVar17;
        dVar17 = dVar19;
        param_5 = dVar1;
        if (param_4 <= dVar16) {
          dVar16 = param_4;
        }
      }
      pCVar9 = pCVar9 + 0x18;
      dVar16 = param_4;
    } while (pCVar12 != pCVar9);
    dVar16 = _LC56;
    if (_LC56 <= dVar17 * (double)pCVar15) goto LAB_0010890d;
LAB_001086e7:
    local_15c = 0x40;
LAB_001086f4:
    Clipper2Lib::ClipperOffset::AddPaths
              ((vector_conflict *)local_118,(vector_conflict *)local_158,
               (ulong)unaff_R13 & 0xffffffff,(ulong)unaff_R14 & 0xffffffff);
    uVar2 = local_158._8_8_;
    puVar11 = (undefined8 *)local_158._0_8_;
    if (local_158._8_8_ != local_158._0_8_) {
      do {
        pvVar5 = (void *)*puVar11;
        if (pvVar5 != (void *)0x0) {
          operator_delete(pvVar5,puVar11[2] - (long)pvVar5);
        }
        puVar11 = puVar11 + 3;
      } while ((undefined8 *)uVar2 != puVar11);
    }
    if ((undefined8 *)local_158._0_8_ != (undefined8 *)0x0) {
      operator_delete((void *)local_158._0_8_,local_148 - local_158._0_8_);
    }
    if (local_15c == 0) {
      local_148 = 0;
      local_158 = (undefined1  [16])0x0;
      Clipper2Lib::ClipperOffset::Execute
                ((double)param_2 * (double)local_180,(vector_conflict *)local_118);
      ScalePaths<double,long>
                (param_1,(vector_conflict *)local_158,_LC49 / (double)local_180,
                 _LC49 / (double)local_180,&local_15c);
      uVar2 = local_158._8_8_;
      puVar11 = (undefined8 *)local_158._0_8_;
      if (local_158._8_8_ != local_158._0_8_) {
        do {
          pvVar5 = (void *)*puVar11;
          if (pvVar5 != (void *)0x0) {
            operator_delete(pvVar5,puVar11[2] - (long)pvVar5);
          }
          puVar11 = puVar11 + 3;
        } while ((undefined8 *)uVar2 != puVar11);
      }
      if ((undefined8 *)local_158._0_8_ != (undefined8 *)0x0) {
        operator_delete((void *)local_158._0_8_,local_148 - local_158._0_8_);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined1 (*) [16])param_1 = (undefined1  [16])0x0;
    }
    uVar2 = local_a0._0_8_;
    uVar4 = local_a0._8_8_;
    plVar14 = (long *)local_a0._0_8_;
    if (local_a0._0_8_ != local_a0._8_8_) {
      do {
        puVar11 = (undefined8 *)plVar14[1];
        puVar10 = (undefined8 *)*plVar14;
        if (puVar11 != puVar10) {
          do {
            pvVar5 = (void *)*puVar10;
            if (pvVar5 != (void *)0x0) {
              operator_delete(pvVar5,puVar10[2] - (long)pvVar5);
            }
            puVar10 = puVar10 + 3;
          } while (puVar11 != puVar10);
          puVar10 = (undefined8 *)*plVar14;
        }
        if (puVar10 != (undefined8 *)0x0) {
          operator_delete(puVar10,plVar14[2] - (long)puVar10);
        }
        plVar14 = plVar14 + 7;
      } while ((long *)uVar4 != plVar14);
      local_a0._8_8_ = uVar2;
    }
    if (local_e0._0_8_ != local_e0._8_8_) {
      local_e0._8_8_ = local_e0._0_8_;
    }
    if (local_58 != (code *)0x0) {
      (*local_58)(local_68,local_68,3);
    }
    uVar2 = local_a0._8_8_;
    plVar14 = (long *)local_a0._0_8_;
    if (local_a0._8_8_ != local_a0._0_8_) {
      do {
        puVar11 = (undefined8 *)plVar14[1];
        puVar10 = (undefined8 *)*plVar14;
        if (puVar11 != puVar10) {
          do {
            pvVar5 = (void *)*puVar10;
            if (pvVar5 != (void *)0x0) {
              operator_delete(pvVar5,puVar10[2] - (long)pvVar5);
            }
            puVar10 = puVar10 + 3;
          } while (puVar11 != puVar10);
          puVar10 = (undefined8 *)*plVar14;
        }
        if (puVar10 != (undefined8 *)0x0) {
          operator_delete(puVar10,plVar14[2] - (long)puVar10);
        }
        plVar14 = plVar14 + 7;
      } while ((long *)uVar2 != plVar14);
    }
    if ((long *)local_a0._0_8_ != (long *)0x0) {
      operator_delete((void *)local_a0._0_8_,local_90 - local_a0._0_8_);
    }
    if ((void *)local_d0._8_8_ != (void *)0x0) {
      operator_delete((void *)local_d0._8_8_,local_c0._8_8_ - local_d0._8_8_);
    }
    if ((void *)local_e0._0_8_ != (void *)0x0) {
      operator_delete((void *)local_e0._0_8_,local_d0._0_8_ - local_e0._0_8_);
    }
  }
  else {
    local_15c = 1;
    if ((double)param_2 != 0.0) {
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined1 (*) [16])param_1 = (undefined1  [16])0x0;
      goto LAB_00108411;
    }
LAB_00108440:
    pCVar9 = (Clipper2Lib *)(*(long *)(param_7 + 8) - *(long *)param_7);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined1 (*) [16])param_1 = (undefined1  [16])0x0;
    pCVar12 = param_7;
    pCVar13 = param_1;
    dVar18 = param_3;
    pCVar15 = param_2;
    if (pCVar9 == (Clipper2Lib *)0x0) {
      pCVar9 = (Clipper2Lib *)0x0;
      unaff_R13 = (undefined1 (*) [16])0x0;
    }
    else {
      if ((Clipper2Lib *)0x7ffffffffffffff8 < pCVar9) {
LAB_00108908:
        dVar16 = (double)std::__throw_bad_array_new_length();
        param_2 = pCVar9;
LAB_0010890d:
        if (((_LC57 < param_5 * (double)pCVar15) || (param_4 * (double)pCVar15 < dVar16)) ||
           (_LC57 < dVar18 * (double)pCVar15)) goto LAB_001086e7;
LAB_0010893f:
        std::
        vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
        ::reserve((vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
                   *)local_158,((long)pCVar12 - (long)pCVar13 >> 3) * -0x5555555555555555);
        local_138 = &local_15c;
        pCStack_130 = local_180;
        pCStack_128 = local_180;
        std::
        transform<__gnu_cxx::__normal_iterator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>const*,std::vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>>,std::back_insert_iterator<std::vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>>,Clipper2Lib::ScalePaths<long,double>(std::vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>const&,double,double,int&)::_lambda(auto:1_const&)_1_>
                  (*(long *)param_7,*(long *)(param_7 + 8),
                   (vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
                    *)local_158);
        goto LAB_001086f4;
      }
      pCVar13 = pCVar9;
      unaff_R13 = (undefined1 (*) [16])operator_new((ulong)pCVar9);
      dVar18 = param_3;
      pCVar15 = param_2;
    }
    *(Clipper2Lib **)(param_1 + 0x10) = pCVar9 + (long)unaff_R13;
    *(undefined1 (**) [16])param_1 = unaff_R13;
    *(undefined1 (**) [16])(param_1 + 8) = unaff_R13;
    unaff_R14 = *(long **)(param_7 + 8);
    plVar14 = *(long **)param_7;
    if (unaff_R14 != plVar14) {
      pCVar9 = (Clipper2Lib *)0x7ffffffffffffff0;
      do {
        param_7 = (Clipper2Lib *)(plVar14[1] - *plVar14);
        *(undefined8 *)unaff_R13[1] = 0;
        *unaff_R13 = (undefined1  [16])0x0;
        if (param_7 == (Clipper2Lib *)0x0) {
          pvVar5 = (void *)0x0;
        }
        else {
          if ((Clipper2Lib *)0x7ffffffffffffff0 < param_7) {
            if ((long)param_7 < 0) goto LAB_00108908;
            std::__throw_bad_alloc();
            goto LAB_00108a55;
          }
          pCVar13 = param_7;
          pvVar5 = operator_new((ulong)param_7);
        }
        *(Clipper2Lib **)unaff_R13[1] = param_7 + (long)pvVar5;
        *(void **)*unaff_R13 = pvVar5;
        *(void **)(*unaff_R13 + 8) = pvVar5;
        pCVar12 = (Clipper2Lib *)*plVar14;
        if ((Clipper2Lib *)plVar14[1] != pCVar12) {
          lVar7 = plVar14[1] - (long)pCVar12;
          lVar8 = 0;
          do {
            pCVar15 = *(Clipper2Lib **)(pCVar12 + lVar8);
            uVar2 = *(undefined8 *)(pCVar12 + lVar8 + 8);
            *(undefined8 *)((long)pvVar5 + lVar8) = pCVar15;
            ((undefined8 *)((long)pvVar5 + lVar8))[1] = uVar2;
            lVar8 = lVar8 + 0x10;
          } while (lVar7 != lVar8);
          pvVar5 = (void *)((long)pvVar5 + lVar7);
        }
        plVar14 = plVar14 + 3;
        *(void **)(*unaff_R13 + 8) = pvVar5;
        unaff_R13 = (undefined1 (*) [16])(unaff_R13[1] + 8);
      } while (unaff_R14 != plVar14);
    }
    *(undefined1 (**) [16])(param_1 + 8) = unaff_R13;
  }
LAB_00108411:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
LAB_00108a55:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* Clipper2Lib::PolyPathD::~PolyPathD() */

void __thiscall Clipper2Lib::PolyPathD::~PolyPathD(PolyPathD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<TPPLPoly, DefaultAllocator>::~List() */

void __thiscall List<TPPLPoly,DefaultAllocator>::~List(List<TPPLPoly,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Clipper2Lib::ClipperD::~ClipperD() */

void __thiscall Clipper2Lib::ClipperD::~ClipperD(ClipperD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


