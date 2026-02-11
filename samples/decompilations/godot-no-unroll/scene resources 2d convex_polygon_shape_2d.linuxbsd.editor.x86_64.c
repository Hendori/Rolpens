
/* ConvexPolygonShape2D::get_rect() const */

void __thiscall ConvexPolygonShape2D::get_rect(ConvexPolygonShape2D *this)

{
  float *pfVar1;
  undefined8 *puVar2;
  long lVar3;
  float fVar4;
  float fVar6;
  undefined8 uVar5;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  puVar2 = *(undefined8 **)(this + 600);
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  fVar7 = 0.0;
  fVar9 = 0.0;
  uVar5 = 0;
  lVar3 = 0;
  do {
    while( true ) {
      if ((long)puVar2[-1] <= lVar3) {
        return;
      }
      if (lVar3 != 0) break;
      uVar5 = *puVar2;
      lVar3 = 1;
      if (puVar2 == (undefined8 *)0x0) {
        return;
      }
    }
    pfVar1 = (float *)(puVar2 + lVar3);
    if ((fVar7 < 0.0) || (fVar9 < 0.0)) {
      _err_print_error("expand_to","./core/math/rect2.h",0x100,
                       "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                       ,0,0);
      puVar2 = *(undefined8 **)(this + 600);
    }
    fVar8 = *pfVar1;
    fVar4 = (float)uVar5;
    fVar6 = (float)((ulong)uVar5 >> 0x20);
    lVar3 = lVar3 + 1;
    fVar10 = fVar8;
    if (fVar4 <= fVar8) {
      fVar10 = fVar4;
    }
    if (fVar8 <= fVar7 + fVar4) {
      fVar8 = fVar7 + fVar4;
    }
    fVar4 = pfVar1[1];
    fVar7 = fVar8 - fVar10;
    fVar8 = fVar4;
    if (fVar4 <= fVar9 + fVar6) {
      fVar8 = fVar9 + fVar6;
    }
    if (fVar6 <= fVar4) {
      fVar4 = fVar6;
    }
    fVar9 = fVar8 - fVar4;
    uVar5 = CONCAT44(fVar4,fVar10);
  } while (puVar2 != (undefined8 *)0x0);
  return;
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



/* ConvexPolygonShape2D::get_points() const */

void ConvexPolygonShape2D::get_points(void)

{
  long in_RSI;
  long in_RDI;
  
  *(undefined8 *)(in_RDI + 8) = 0;
  if (*(long *)(in_RSI + 600) != 0) {
    CowData<Vector2>::_ref((CowData<Vector2> *)(in_RDI + 8),(CowData *)(in_RSI + 600));
  }
  return;
}



/* ConvexPolygonShape2D::get_enclosing_radius() const */

void __thiscall ConvexPolygonShape2D::get_enclosing_radius(ConvexPolygonShape2D *this)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  bool bVar6;
  float fVar7;
  float local_1c;
  
  lVar4 = 0;
  local_1c = 0.0;
  while (*(long *)(this + 600) != 0) {
    plVar5 = (long *)(*(long *)(this + 600) + -0x10);
    do {
      lVar1 = *plVar5;
      if (lVar1 == 0) goto LAB_001003e9;
      LOCK();
      lVar3 = *plVar5;
      bVar6 = lVar1 == lVar3;
      if (bVar6) {
        *plVar5 = lVar1 + 1;
        lVar3 = lVar1;
      }
      UNLOCK();
    } while (!bVar6);
    if ((lVar3 == -1) || (lVar1 = *(long *)(this + 600), lVar1 == 0)) break;
    lVar3 = *(long *)(lVar1 + -8);
    plVar5 = (long *)(lVar1 + -0x10);
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      Memory::free_static(plVar5,false);
    }
    if (lVar3 <= lVar4) break;
    if (*(long *)(this + 600) == 0) {
LAB_00100410:
      lVar3 = 0;
LAB_00100413:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar4,lVar3,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    plVar5 = (long *)(*(long *)(this + 600) + -0x10);
    do {
      lVar1 = *plVar5;
      if (lVar1 == 0) goto LAB_00100410;
      LOCK();
      lVar3 = *plVar5;
      bVar6 = lVar1 == lVar3;
      if (bVar6) {
        *plVar5 = lVar1 + 1;
        lVar3 = lVar1;
      }
      UNLOCK();
    } while (!bVar6);
    if ((lVar3 == -1) || (lVar1 = *(long *)(this + 600), lVar1 == 0)) goto LAB_00100410;
    lVar3 = *(long *)(lVar1 + -8);
    if (lVar3 <= lVar4) goto LAB_00100413;
    fVar7 = (float)Vector2::length_squared();
    if (fVar7 <= local_1c) {
      fVar7 = local_1c;
    }
    plVar5 = (long *)(lVar1 + -0x10);
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      Memory::free_static(plVar5,false);
    }
    lVar4 = lVar4 + 1;
    local_1c = fVar7;
  }
LAB_001003e9:
  if (local_1c < 0.0) {
    sqrtf(local_1c);
    return;
  }
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



/* ConvexPolygonShape2D::_edit_is_selected_on_click(Vector2 const&, double) const */

void ConvexPolygonShape2D::_edit_is_selected_on_click(Vector2 *param_1,double param_2)

{
  Vector2 *in_RSI;
  
  Geometry2D::is_point_in_polygon(in_RSI,(Vector *)(param_1 + 0x250));
  return;
}



/* left_test(Vector2 const&, Vector2 const&, Vector2 const&) */

bool left_test(Vector2 *param_1,Vector2 *param_2,Vector2 *param_3)

{
  long in_FS_OFFSET;
  float extraout_XMM0_Da;
  float fVar1;
  float fVar2;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  fVar1 = (float)*(undefined8 *)param_1;
  fVar2 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  local_20 = CONCAT44((float)((ulong)*(undefined8 *)param_2 >> 0x20) - fVar2,
                      (float)*(undefined8 *)param_2 - fVar1);
  local_18 = CONCAT44((float)((ulong)*(undefined8 *)param_3 >> 0x20) - fVar2,
                      (float)*(undefined8 *)param_3 - fVar1);
  Vector2::cross((Vector2 *)&local_20);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0.0 <= extraout_XMM0_Da;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* is_convex(Vector<Vector2> const&) */

undefined8 is_convex(Vector *param_1)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long in_FS_OFFSET;
  float fVar13;
  float fVar14;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 8) == 0) {
LAB_001007ed:
    uVar6 = 1;
  }
  else {
    iVar2 = *(int *)(*(long *)(param_1 + 8) + -8);
    lVar11 = 0;
    do {
      iVar10 = (int)lVar11;
      iVar5 = 3;
      if (2 < iVar10) {
        iVar5 = iVar10;
      }
      if (iVar2 <= iVar5) goto LAB_001007ed;
      iVar5 = (iVar10 + 1) % iVar2;
      lVar3 = *(long *)(param_1 + 8);
      lVar7 = (long)((iVar5 + 1) % iVar2);
      lVar9 = lVar7;
      if (lVar3 == 0) {
        lVar12 = 0;
LAB_0010079e:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar12,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar12 = *(long *)(lVar3 + -8);
      if (lVar12 <= lVar7) goto LAB_0010079e;
      lVar8 = (long)iVar5;
      lVar9 = lVar8;
      if ((lVar12 <= lVar8) || (lVar9 = lVar11, lVar12 <= lVar11)) goto LAB_0010079e;
      uVar6 = *(undefined8 *)(lVar3 + lVar11 * 8);
      uVar1 = *(undefined8 *)(lVar3 + lVar8 * 8);
      lVar11 = lVar11 + 1;
      fVar13 = (float)uVar6;
      fVar14 = (float)((ulong)uVar6 >> 0x20);
      local_40 = CONCAT44((float)((ulong)uVar1 >> 0x20) - fVar14,(float)uVar1 - fVar13);
      uVar6 = *(undefined8 *)(lVar3 + lVar7 * 8);
      local_38 = CONCAT44((float)((ulong)uVar6 >> 0x20) - fVar14,(float)uVar6 - fVar13);
      fVar13 = (float)Vector2::cross((Vector2 *)&local_40);
    } while (0.0 <= fVar13);
    uVar6 = 0;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



/* ConvexPolygonShape2D::_update_shape() */

void __thiscall ConvexPolygonShape2D::_update_shape(ConvexPolygonShape2D *this)

{
  float *pfVar1;
  long lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  char cVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  long in_FS_OFFSET;
  bool bVar13;
  float fVar14;
  Vector aVStack_58 [8];
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  if (*(long *)(this + 600) != 0) {
    plVar8 = (long *)(*(long *)(this + 600) + -0x10);
    do {
      lVar12 = *plVar8;
      if (lVar12 == 0) goto LAB_0010086d;
      LOCK();
      lVar6 = *plVar8;
      bVar13 = lVar12 == lVar6;
      if (bVar13) {
        *plVar8 = lVar12 + 1;
        lVar6 = lVar12;
      }
      UNLOCK();
    } while (!bVar13);
    if (lVar6 != -1) {
      local_50 = *(long *)(this + 600);
    }
LAB_0010086d:
    if (local_50 != 0) {
      lVar12 = *(long *)(local_50 + -8);
      iVar11 = (int)lVar12;
      if (2 < iVar11) {
        uVar10 = 1;
        fVar14 = 0.0;
        do {
          pfVar1 = (float *)(local_50 +
                            (long)(int)((long)((ulong)(uint)((int)uVar10 >> 0x1f) << 0x20 |
                                              uVar10 & 0xffffffff) % (long)iVar11) * 8);
          lVar6 = uVar10 * 8;
          lVar2 = uVar10 * 8;
          uVar10 = uVar10 + 1;
          fVar14 = fVar14 + (*pfVar1 - *(float *)(local_50 + -8 + lVar6)) *
                            (pfVar1[1] + *(float *)(local_50 + -4 + lVar2));
        } while ((ulong)(iVar11 - 1) + 2 != uVar10);
        uVar10 = 0;
        if (0.0 < fVar14) {
          for (; (long)uVar10 < lVar12 / 2; uVar10 = uVar10 + 1) {
            CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_50);
            if (local_50 == 0) {
              uVar9 = *(undefined8 *)(uVar10 * 8);
              *(undefined8 *)(uVar10 * 8) = *(undefined8 *)(~uVar10 << 3);
              *(undefined8 *)(~uVar10 << 3) = uVar9;
              break;
            }
            lVar12 = *(long *)(local_50 + -8);
            puVar3 = (undefined8 *)(local_50 + -8 + (lVar12 - uVar10) * 8);
            puVar7 = (undefined8 *)(local_50 + uVar10 * 8);
            uVar9 = *puVar7;
            *puVar7 = *puVar3;
            *puVar3 = uVar9;
          }
        }
      }
    }
  }
  cVar5 = is_convex(aVStack_58);
  if (cVar5 == '\0') {
    _err_print_error("_update_shape","scene/resources/2d/convex_polygon_shape_2d.cpp",0x49,
                     "Concave polygon is assigned to ConvexPolygonShape2D.",0,1);
  }
  plVar8 = (long *)PhysicsServer2D::get_singleton();
  pcVar4 = *(code **)(*plVar8 + 0x198);
  Variant::Variant((Variant *)local_48,aVStack_58);
  uVar9 = (**(code **)(*(long *)this + 0x1c0))(this);
  (*pcVar4)(plVar8,uVar9,(Variant *)local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  Resource::emit_changed();
  lVar12 = local_50;
  if (local_50 != 0) {
    LOCK();
    plVar8 = (long *)(local_50 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar12 + -0x10),false);
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ConvexPolygonShape2D::set_points(Vector<Vector2> const&) */

void __thiscall ConvexPolygonShape2D::set_points(ConvexPolygonShape2D *this,Vector *param_1)

{
  if (*(long *)(this + 600) != *(long *)(param_1 + 8)) {
    CowData<Vector2>::_ref((CowData<Vector2> *)(this + 600),(CowData *)(param_1 + 8));
  }
  _update_shape(this);
  return;
}



/* ConvexPolygonShape2D::ConvexPolygonShape2D() */

void __thiscall ConvexPolygonShape2D::ConvexPolygonShape2D(ConvexPolygonShape2D *this)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  plVar1 = (long *)PhysicsServer2D::get_singleton();
  local_18 = (**(code **)(*plVar1 + 0x188))(plVar1);
  Shape2D::Shape2D((Shape2D *)this,(RID *)&local_18);
  *(undefined8 *)(this + 600) = 0;
  *(undefined ***)this = &PTR__initialize_classv_001073d0;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConvexPolygonShape2D::_bind_methods() */

void ConvexPolygonShape2D::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  MethodBind *pMVar4;
  long *plVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  char *local_a8;
  undefined8 local_a0;
  char *local_98;
  long local_90;
  long *local_88;
  int local_80;
  long local_78;
  undefined4 local_70;
  char *local_68;
  undefined8 local_60;
  char **local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_68 = "point_cloud";
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_point_cloud",(uint)&local_58);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<ConvexPolygonShape2D,Vector<Vector2>const&>(set_point_cloud);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar5 = local_88 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar5 = plVar1;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar2 != lVar6);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  local_60 = 0;
  local_68 = "points";
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_points",(uint)&local_58);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<ConvexPolygonShape2D,Vector<Vector2>const&>(set_points);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar5 = local_88 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar5 = plVar1;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar2 != lVar6);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_98,(char ***)"get_points",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<ConvexPolygonShape2D,Vector<Vector2>>(get_points);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar5 = local_88 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar5 = plVar1;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar2 != lVar6);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 0;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "points";
  local_d0 = 0;
  local_90 = 6;
  String::parse_latin1((StrRange *)&local_d0);
  local_98 = (char *)CONCAT44(local_98._4_4_,0x23);
  local_90 = 0;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_d0);
  }
  local_88 = (long *)0x0;
  local_80 = 0;
  local_78 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_c8);
    local_70 = 6;
    if (local_80 == 0x11) {
      StringName::StringName((StringName *)&local_a8,(String *)&local_78,false);
      if (local_88 == (long *)local_a8) {
        if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_88 = (long *)local_a8;
      }
      goto LAB_00100fcc;
    }
  }
  local_70 = 6;
  StringName::operator=((StringName *)&local_88,(StringName *)&local_c0);
LAB_00100fcc:
  local_d8 = 0;
  local_a8 = "ConvexPolygonShape2D";
  local_a0 = 0x14;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
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
  if ((StringName::configured != '\0') && (local_88 != (long *)0x0)) {
    StringName::unref();
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
  lVar2 = local_d0;
  if (local_d0 != 0) {
    LOCK();
    plVar1 = (long *)(local_d0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    plVar1 = (long *)(local_c8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((((StringName::configured != '\0') &&
       ((local_c0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_b8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_b0 != 0)
     ) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ConvexPolygonShape2D::set_point_cloud(Vector<Vector2> const&) */

void __thiscall ConvexPolygonShape2D::set_point_cloud(ConvexPolygonShape2D *this,Vector *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  bool bVar4;
  Geometry2D aGStack_48 [8];
  long local_40 [2];
  long local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  if (*(long *)(param_1 + 8) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 8) + -0x10);
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) goto LAB_001012a5;
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
      local_30 = *(long *)(param_1 + 8);
    }
  }
LAB_001012a5:
  Geometry2D::convex_hull(aGStack_48);
  if (local_30 != 0) {
    LOCK();
    plVar1 = (long *)(local_30 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_30 + -0x10),false);
    }
  }
  lVar2 = local_40[0];
  if (local_40[0] == 0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("set_point_cloud","scene/resources/2d/convex_polygon_shape_2d.cpp",0x52,
                       "Condition \"hull.size() < 3\" is true.",0,0);
      return;
    }
  }
  else {
    if (*(long *)(local_40[0] + -8) < 3) {
      _err_print_error("set_point_cloud","scene/resources/2d/convex_polygon_shape_2d.cpp",0x52,
                       "Condition \"hull.size() < 3\" is true.",0,0);
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      lVar2 = *plVar1;
      UNLOCK();
    }
    else {
      if (local_40[0] != *(long *)(this + 600)) {
        CowData<Vector2>::_ref((CowData<Vector2> *)(this + 600),(CowData *)local_40);
      }
      _update_shape(this);
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      lVar2 = *plVar1;
      UNLOCK();
    }
    if (lVar2 == 0) {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static((void *)(local_40[0] + -0x10),false);
        return;
      }
    }
    else if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConvexPolygonShape2D::draw(RID const&, Color const&) */

void __thiscall ConvexPolygonShape2D::draw(ConvexPolygonShape2D *this,RID *param_1,Color *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  long in_FS_OFFSET;
  undefined1 local_78 [8];
  undefined8 *local_70;
  undefined1 local_68 [8];
  undefined8 *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 600) == 0) || (*(long *)(*(long *)(this + 600) + -8) < 3))
  goto LAB_00101413;
  uVar2 = *(undefined8 *)param_2;
  uVar4 = *(undefined8 *)(param_2 + 8);
  local_70 = (undefined8 *)0x0;
  iVar6 = CowData<Color>::resize<false>((CowData<Color> *)&local_70,1);
  if (iVar6 == 0) {
    if (local_70 == (undefined8 *)0x0) {
      lVar9 = 0;
    }
    else {
      lVar9 = local_70[-1];
      if (0 < lVar9) {
        CowData<Color>::_copy_on_write((CowData<Color> *)&local_70);
        *local_70 = uVar2;
        local_70[1] = uVar4;
        goto LAB_001014a0;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,0,lVar9,"p_index","size()","",false,false);
  }
LAB_001014a0:
  plVar7 = (long *)RenderingServer::get_singleton();
  local_60 = (undefined8 *)0x0;
  (**(code **)(*plVar7 + 0xf50))(plVar7,*(undefined8 *)param_1,this + 0x250,local_78,local_68,0);
  puVar8 = local_60;
  if (local_60 != (undefined8 *)0x0) {
    LOCK();
    plVar7 = local_60 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      local_60 = (undefined8 *)0x0;
      Memory::free_static(puVar8 + -2,false);
    }
  }
  cVar5 = Shape2D::is_collision_outline_enabled();
  if (cVar5 != '\0') {
    uVar2 = *(undefined8 *)param_2;
    uVar1 = *(undefined4 *)(param_2 + 8);
    local_60 = (undefined8 *)0x0;
    iVar6 = CowData<Color>::resize<false>((CowData<Color> *)&local_60,1);
    puVar8 = local_60;
    if (iVar6 == 0) {
      if (local_60 == (undefined8 *)0x0) {
        lVar9 = 0;
LAB_001016a1:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,0,lVar9,"p_index","size()","",false,false
                  );
        goto LAB_001016e8;
      }
      lVar9 = local_60[-1];
      if (lVar9 < 1) goto LAB_001016a1;
      CowData<Color>::_copy_on_write((CowData<Color> *)&local_60);
      uVar11 = _LC28;
      *local_60 = uVar2;
      *(undefined4 *)((long)local_60 + 0xc) = uVar11;
      *(undefined4 *)(local_60 + 1) = uVar1;
      puVar8 = local_60;
      if (local_70 == local_60) goto LAB_00101706;
LAB_00101587:
      puVar8 = local_70;
      if (local_70 != (undefined8 *)0x0) {
        LOCK();
        plVar7 = local_70 + -2;
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_70 = (undefined8 *)0x0;
          Memory::free_static(puVar8 + -2,false);
        }
      }
      local_70 = local_60;
    }
    else {
LAB_001016e8:
      uVar11 = _LC28;
      if (local_70 != puVar8) goto LAB_00101587;
      if (puVar8 != (undefined8 *)0x0) {
LAB_00101706:
        LOCK();
        plVar7 = puVar8 + -2;
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          Memory::free_static(local_60 + -2,false);
        }
      }
    }
    plVar7 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar7 + 0xf00))(_LC49,plVar7,*(undefined8 *)param_1,this + 0x250,local_78);
    plVar7 = (long *)RenderingServer::get_singleton();
    local_50 = *(undefined4 *)(param_2 + 8);
    lVar9 = *(long *)(this + 600);
    local_58 = *(undefined8 *)param_2;
    local_4c = uVar11;
    if (lVar9 == 0) {
      lVar10 = 0;
LAB_0010176b:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,0,lVar10,"p_index","size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar10 = *(long *)(lVar9 + -8);
    if (lVar10 < 1) goto LAB_0010176b;
    (**(code **)(*plVar7 + 0xef8))
              (_LC49,plVar7,*(undefined8 *)param_1,lVar9 + -8 + lVar10 * 8,lVar9,&local_58,0);
  }
  puVar8 = local_70;
  if (local_70 != (undefined8 *)0x0) {
    LOCK();
    plVar7 = local_70 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      local_70 = (undefined8 *)0x0;
      Memory::free_static(puVar8 + -2,false);
    }
  }
LAB_00101413:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
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



/* Resource::set_last_modified_time(unsigned long) */

void __thiscall Resource::set_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x198) = param_1;
  return;
}



/* Resource::set_import_last_modified_time(unsigned long) */

void __thiscall Resource::set_import_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x1a0) = param_1;
  return;
}



/* ConvexPolygonShape2D::is_class_ptr(void*) const */

uint __thiscall ConvexPolygonShape2D::is_class_ptr(ConvexPolygonShape2D *this,void *param_1)

{
  return (uint)CONCAT71(0x1076,(undefined4 *)param_1 == &Shape2D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1076,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1076,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1076,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1076,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* ConvexPolygonShape2D::_getv(StringName const&, Variant&) const */

undefined8 ConvexPolygonShape2D::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ConvexPolygonShape2D::_setv(StringName const&, Variant const&) */

undefined8 ConvexPolygonShape2D::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ConvexPolygonShape2D::_validate_propertyv(PropertyInfo&) const */

void ConvexPolygonShape2D::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* ConvexPolygonShape2D::_property_can_revertv(StringName const&) const */

undefined8 ConvexPolygonShape2D::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ConvexPolygonShape2D::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ConvexPolygonShape2D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ConvexPolygonShape2D::_notificationv(int, bool) */

void ConvexPolygonShape2D::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MethodBindTRC<Vector<Vector2>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Vector<Vector2>>::_gen_argument_type(int param_1)

{
  return 0x23;
}



/* MethodBindTRC<Vector<Vector2>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Vector<Vector2>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Vector<Vector2> const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Vector<Vector2>const&>::_gen_argument_type
          (MethodBindT<Vector<Vector2>const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x23;
}



/* MethodBindT<Vector<Vector2> const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Vector<Vector2>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Vector<Vector2> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Vector<Vector2>const&>::~MethodBindT(MethodBindT<Vector<Vector2>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001075c8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Vector<Vector2> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Vector<Vector2>const&>::~MethodBindT(MethodBindT<Vector<Vector2>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001075c8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Vector<Vector2>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector<Vector2>>::~MethodBindTRC(MethodBindTRC<Vector<Vector2>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00107628;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Vector<Vector2>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector<Vector2>>::~MethodBindTRC(MethodBindTRC<Vector<Vector2>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00107628;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* CowData<Color>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Color>::_copy_on_write(void)

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



/* ConvexPolygonShape2D::_bind_methods() [clone .cold] */

void ConvexPolygonShape2D::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Resource::get_base_extension() const */

Resource * __thiscall Resource::get_base_extension(Resource *this)

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



/* Shape2D::get_save_class() const */

Shape2D * __thiscall Shape2D::get_save_class(Shape2D *this)

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



/* SortArray<Vector2, _DefaultComparator<Vector2>, true>::introsort(long, long, Vector2*, long)
   const [clone .isra.0] */

void SortArray<Vector2,_DefaultComparator<Vector2>,true>::introsort
               (long param_1,long param_2,Vector2 *param_3,long param_4)

{
  Vector2 *pVVar1;
  float fVar2;
  undefined8 uVar3;
  Vector2 *pVVar4;
  Vector2 *pVVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  Vector2 *pVVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  
  lVar9 = param_2 - param_1;
  if (lVar9 < 0x11) {
    return;
  }
  if (param_4 != 0) {
    pVVar13 = param_3 + param_1 * 8;
    lVar10 = param_2;
LAB_00101d2e:
    fVar16 = *(float *)pVVar13;
    param_4 = param_4 + -1;
    pVVar1 = param_3 + ((lVar9 >> 1) + param_1) * 8;
    fVar2 = *(float *)pVVar1;
    if (fVar16 == fVar2) {
      bVar14 = *(float *)(pVVar13 + 4) <= *(float *)(pVVar1 + 4) &&
               *(float *)(pVVar1 + 4) != *(float *)(pVVar13 + 4);
    }
    else {
      bVar14 = fVar16 < fVar2;
    }
    pVVar5 = param_3 + lVar10 * 8 + -8;
    fVar15 = *(float *)pVVar5;
    if (bVar14) {
      if (fVar2 == fVar15) {
        bVar14 = *(float *)(pVVar1 + 4) <= *(float *)(pVVar5 + 4) &&
                 *(float *)(pVVar5 + 4) != *(float *)(pVVar1 + 4);
      }
      else {
        bVar14 = fVar2 < fVar15;
      }
      if (bVar14) {
LAB_00101e97:
        pVVar5 = pVVar1;
        fVar15 = fVar2;
        goto LAB_00101dba;
      }
      if (fVar16 == fVar15) {
        bVar14 = *(float *)(pVVar13 + 4) <= *(float *)(pVVar5 + 4) &&
                 *(float *)(pVVar5 + 4) != *(float *)(pVVar13 + 4);
      }
      else {
        bVar14 = fVar16 < fVar15;
      }
      if (bVar14) goto LAB_00101dba;
    }
    else {
      if (fVar16 == fVar15) {
        bVar14 = *(float *)(pVVar13 + 4) <= *(float *)(pVVar5 + 4) &&
                 *(float *)(pVVar5 + 4) != *(float *)(pVVar13 + 4);
      }
      else {
        bVar14 = fVar16 < fVar15;
      }
      if (!bVar14) {
        if (fVar2 == fVar15) {
          bVar14 = *(float *)(pVVar1 + 4) <= *(float *)(pVVar5 + 4) &&
                   *(float *)(pVVar5 + 4) != *(float *)(pVVar1 + 4);
        }
        else {
          bVar14 = fVar2 < fVar15;
        }
        if (bVar14) goto LAB_00101dba;
        goto LAB_00101e97;
      }
    }
    pVVar5 = pVVar13;
    fVar15 = fVar16;
LAB_00101dba:
    fVar16 = *(float *)(pVVar5 + 4);
    param_2 = param_1;
    lVar9 = lVar10;
    do {
      fVar2 = *(float *)(param_3 + param_2 * 8);
      if (NAN(fVar2) || NAN(fVar15)) {
LAB_00101dfa:
        pVVar1 = param_3 + lVar9 * 8 + -8;
        do {
          pVVar5 = pVVar1;
          lVar9 = lVar9 + -1;
          if (*(float *)pVVar5 == fVar15) {
            bVar14 = fVar16 < *(float *)(pVVar5 + 4);
          }
          else {
            bVar14 = fVar15 < *(float *)pVVar5;
          }
          if (!bVar14) goto LAB_00101ee5;
          pVVar1 = pVVar5 + -8;
        } while (param_1 != lVar9);
        _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                         "bad comparison function; sorting will be broken",0,0);
LAB_00101ee5:
        if (lVar9 <= param_2) goto LAB_00101f70;
        uVar3 = *(undefined8 *)(param_3 + param_2 * 8);
        *(undefined8 *)(param_3 + param_2 * 8) = *(undefined8 *)pVVar5;
        *(undefined8 *)pVVar5 = uVar3;
      }
      else {
        if (fVar2 == fVar15) {
          if (*(float *)(param_3 + param_2 * 8 + 4) <= fVar16 &&
              fVar16 != *(float *)(param_3 + param_2 * 8 + 4)) goto LAB_00101f20;
          goto LAB_00101dfa;
        }
        if (fVar15 < fVar2) goto LAB_00101dfa;
LAB_00101f20:
        if (lVar10 + -1 == param_2) {
          _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                           "bad comparison function; sorting will be broken",0,0);
          goto LAB_00101dfa;
        }
      }
      param_2 = param_2 + 1;
    } while( true );
  }
LAB_00102018:
  lVar11 = lVar9 + -2 >> 1;
  lVar10 = lVar11 * 2 + 2;
  pVVar13 = param_3 + (param_1 + lVar11) * 8;
  fVar16 = *(float *)pVVar13;
  fVar2 = *(float *)(pVVar13 + 4);
  lVar12 = lVar11;
  lVar6 = lVar10;
  pVVar1 = pVVar13;
joined_r0x0010204b:
  while (lVar10 < lVar9) {
    pVVar5 = param_3 + (param_1 + lVar10) * 8;
    pVVar13 = param_3 + (param_1 + lVar10 + -1) * 8;
    if (*(float *)pVVar5 == *(float *)pVVar13) {
      bVar14 = *(float *)(pVVar5 + 4) <= *(float *)(pVVar13 + 4) &&
               *(float *)(pVVar13 + 4) != *(float *)(pVVar5 + 4);
    }
    else {
      bVar14 = *(float *)pVVar5 < *(float *)pVVar13;
    }
    lVar8 = lVar10 + -1;
    lVar7 = lVar10;
    if (!bVar14) {
      lVar7 = lVar10 + 1;
      lVar8 = lVar10;
      pVVar13 = pVVar5;
    }
    *(undefined8 *)(param_3 + (lVar11 + param_1) * 8) = *(undefined8 *)pVVar13;
    lVar11 = lVar8;
    lVar10 = lVar7 * 2;
  }
  if (lVar10 == lVar9) {
    *(undefined8 *)pVVar13 = *(undefined8 *)(param_3 + (param_1 + lVar9 + -1) * 8);
    lVar11 = lVar9 + -1;
    pVVar13 = param_3 + (param_1 + lVar9 + -1) * 8;
  }
  lVar10 = lVar11 + -1;
  if (lVar12 < lVar11) {
    do {
      lVar8 = lVar10 >> 1;
      pVVar13 = param_3 + (param_1 + lVar8) * 8;
      if (*(float *)pVVar13 == fVar16) {
        bVar14 = *(float *)(pVVar13 + 4) <= fVar2 && fVar2 != *(float *)(pVVar13 + 4);
      }
      else {
        bVar14 = *(float *)pVVar13 < fVar16;
      }
      pVVar5 = param_3 + (lVar11 + param_1) * 8;
      if (!bVar14) break;
      *(undefined8 *)(param_3 + (lVar11 + param_1) * 8) = *(undefined8 *)pVVar13;
      lVar10 = (lVar8 + -1) - (lVar8 + -1 >> 0x3f);
      pVVar5 = pVVar13;
      lVar11 = lVar8;
    } while (lVar12 < lVar8);
    *(float *)pVVar5 = fVar16;
    *(float *)(pVVar5 + 4) = fVar2;
    if (lVar12 == 0) goto LAB_00102187;
  }
  else {
    *(float *)pVVar13 = fVar16;
    *(float *)(pVVar13 + 4) = fVar2;
  }
  pVVar13 = pVVar1 + -8;
  lVar10 = lVar6 + -2;
  lVar11 = lVar12 + -1;
  fVar16 = *(float *)pVVar13;
  fVar2 = *(float *)(pVVar1 + -4);
  lVar12 = lVar11;
  lVar6 = lVar10;
  pVVar1 = pVVar13;
  goto joined_r0x0010204b;
LAB_00101f70:
  introsort(param_2,lVar10,param_3,param_4);
  lVar9 = param_2 - param_1;
  if (lVar9 < 0x11) {
    return;
  }
  lVar10 = param_2;
  if (param_4 == 0) goto LAB_00102018;
  goto LAB_00101d2e;
LAB_00102187:
  pVVar1 = param_3 + param_1 * 8;
  pVVar13 = param_3 + (param_2 + -1) * 8 + -8;
  lVar9 = (param_2 + -1) - param_1;
LAB_001021a0:
  do {
    uVar3 = *(undefined8 *)(pVVar13 + 8);
    *(undefined8 *)(pVVar13 + 8) = *(undefined8 *)pVVar1;
    fVar16 = (float)((ulong)uVar3 >> 0x20);
    if (lVar9 < 3) {
      pVVar5 = pVVar1;
      if (lVar9 != 2) {
        *(undefined8 *)pVVar1 = uVar3;
        return;
      }
LAB_001022d1:
      *(undefined8 *)pVVar5 = *(undefined8 *)pVVar13;
      lVar6 = lVar9 + -1;
      lVar10 = lVar9 + -2 >> 1;
    }
    else {
      lVar10 = 2;
      lVar12 = 0;
      do {
        pVVar4 = param_3 + (param_1 + lVar10) * 8;
        pVVar5 = param_3 + (param_1 + lVar10 + -1) * 8;
        if (*(float *)pVVar4 == *(float *)pVVar5) {
          bVar14 = *(float *)(pVVar4 + 4) <= *(float *)(pVVar5 + 4) &&
                   *(float *)(pVVar5 + 4) != *(float *)(pVVar4 + 4);
        }
        else {
          bVar14 = *(float *)pVVar4 < *(float *)pVVar5;
        }
        lVar6 = lVar10 + -1;
        lVar11 = lVar10;
        if (!bVar14) {
          lVar11 = lVar10 + 1;
          lVar6 = lVar10;
          pVVar5 = pVVar4;
        }
        lVar10 = lVar11 * 2;
        *(undefined8 *)(param_3 + (param_1 + lVar12) * 8) = *(undefined8 *)pVVar5;
        lVar12 = lVar6;
      } while (lVar10 < lVar9);
      if (lVar10 == lVar9) goto LAB_001022d1;
      lVar10 = (lVar6 + -1) / 2;
      if (lVar6 == 0) {
        *(undefined8 *)pVVar5 = uVar3;
        lVar9 = lVar9 + -1;
        pVVar13 = pVVar13 + -8;
        goto LAB_001021a0;
      }
    }
    do {
      pVVar5 = param_3 + (param_1 + lVar10) * 8;
      if (*(float *)pVVar5 == (float)uVar3) {
        bVar14 = *(float *)(pVVar5 + 4) <= fVar16 && fVar16 != *(float *)(pVVar5 + 4);
      }
      else {
        bVar14 = *(float *)pVVar5 < (float)uVar3;
      }
      pVVar4 = param_3 + (lVar6 + param_1) * 8;
      if (!bVar14) break;
      *(undefined8 *)(param_3 + (lVar6 + param_1) * 8) = *(undefined8 *)pVVar5;
      bVar14 = lVar10 != 0;
      lVar6 = lVar10;
      pVVar4 = pVVar5;
      lVar10 = (lVar10 + -1) / 2;
    } while (bVar14);
    *(undefined8 *)pVVar4 = uVar3;
    pVVar13 = pVVar13 + -8;
    bVar14 = lVar9 < 2;
    lVar9 = lVar9 + -1;
    if (bVar14) {
      return;
    }
  } while( true );
}



/* ConvexPolygonShape2D::_get_class_namev() const */

undefined8 * ConvexPolygonShape2D::_get_class_namev(void)

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
LAB_00102383:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00102383;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ConvexPolygonShape2D");
      goto LAB_001023ee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ConvexPolygonShape2D");
LAB_001023ee:
  return &_get_class_namev()::_class_name_static;
}



/* ConvexPolygonShape2D::~ConvexPolygonShape2D() */

void __thiscall ConvexPolygonShape2D::~ConvexPolygonShape2D(ConvexPolygonShape2D *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_001073d0;
  if (*(long *)(this + 600) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 600) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 600);
      *(undefined8 *)(this + 600) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      Shape2D::~Shape2D((Shape2D *)this);
      return;
    }
  }
  Shape2D::~Shape2D((Shape2D *)this);
  return;
}



/* ConvexPolygonShape2D::~ConvexPolygonShape2D() */

void __thiscall ConvexPolygonShape2D::~ConvexPolygonShape2D(ConvexPolygonShape2D *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_001073d0;
  if (*(long *)(this + 600) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 600) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 600);
      *(undefined8 *)(this + 600) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  Shape2D::~Shape2D((Shape2D *)this);
  operator_delete(this,0x260);
  return;
}



/* ConvexPolygonShape2D::get_class() const */

void ConvexPolygonShape2D::get_class(void)

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



/* MethodBindTRC<Vector<Vector2>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Vector<Vector2>>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC16;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x23;
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
      goto joined_r0x001026fc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001026fc:
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



/* MethodBindT<Vector<Vector2> const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Vector<Vector2>const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  long lVar7;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar8;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  undefined *local_58;
  undefined1 local_50 [16];
  int local_40;
  long local_38;
  undefined4 local_30;
  long local_20;
  
  puVar8 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar8 = 0;
  puVar8[6] = 0;
  *(undefined8 *)(puVar8 + 8) = 0;
  puVar8[10] = 6;
  *(undefined1 (*) [16])(puVar8 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00102787;
  local_68 = 0;
  local_58 = &_LC16;
  local_70 = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_50._8_8_;
  local_50 = auVar3 << 0x40;
  String::parse_latin1((StrRange *)&local_70);
  local_58 = (undefined *)CONCAT44(local_58._4_4_,0x23);
  local_40 = 0;
  local_38 = 0;
  local_50 = (undefined1  [16])0x0;
  if (local_70 == 0) {
LAB_00102878:
    local_30 = 6;
    StringName::operator=((StringName *)(local_50 + 8),(StringName *)&local_68);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_38,(CowData *)&local_70);
    local_30 = 6;
    if (local_40 != 0x11) goto LAB_00102878;
    StringName::StringName((StringName *)&local_60,(String *)&local_38,false);
    if (local_50._8_8_ == local_60) {
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_50._8_8_ = local_60;
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
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  *puVar8 = local_58._0_4_;
  lVar2 = *(long *)(puVar8 + 2);
  if (lVar2 != local_50._0_8_) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(puVar8 + 2);
        *(undefined8 *)(puVar8 + 2) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 *)(puVar8 + 2) = local_50._0_8_;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = local_50._8_8_;
    local_50 = auVar5 << 0x40;
  }
  if (*(long *)(puVar8 + 4) != local_50._8_8_) {
    StringName::unref();
    uVar6 = local_50._8_8_;
    local_50._8_8_ = 0;
    *(undefined8 *)(puVar8 + 4) = uVar6;
  }
  lVar7 = local_38;
  puVar8[6] = local_40;
  lVar2 = *(long *)(puVar8 + 8);
  if (lVar2 == local_38) {
    puVar8[10] = local_30;
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_38 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
  }
  else {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(puVar8 + 8);
        *(undefined8 *)(puVar8 + 8) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(long *)(puVar8 + 8) = local_38;
    puVar8[10] = local_30;
  }
  if ((StringName::configured != '\0') && (local_50._8_8_ != 0)) {
    StringName::unref();
  }
  uVar6 = local_50._0_8_;
  if (local_50._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_50._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_50._8_8_;
      local_50 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar6 + -0x10),false);
    }
  }
LAB_00102787:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar8;
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  undefined7 in_register_00000031;
  List *pLVar6;
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
  
  pLVar6 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_90 = 0;
  local_78 = "RefCounted";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RefCounted";
  local_98 = 0;
  local_70 = 10;
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
LAB_00102bd8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00102bd8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00102bf6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00102bf6:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar6 = pauVar4;
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
  plVar1 = *(long **)pLVar6;
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
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar6,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::is_class(String const&) const */

undefined8 __thiscall Resource::is_class(Resource *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_00102edf;
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
LAB_00102edf:
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
    if (cVar6 != '\0') goto LAB_00102f93;
  }
  cVar6 = String::operator==(param_1,"Resource");
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
              if (lVar5 == 0) goto LAB_0010306b;
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
LAB_0010306b:
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
      if (cVar6 != '\0') goto LAB_00102f93;
    }
    cVar6 = String::operator==(param_1,"RefCounted");
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
                if (lVar5 == 0) goto LAB_0010314b;
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
LAB_0010314b:
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
        if (cVar6 != '\0') goto LAB_00102f93;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
      goto LAB_001031f4;
    }
  }
LAB_00102f93:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001031f4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConvexPolygonShape2D::is_class(String const&) const */

undefined8 __thiscall ConvexPolygonShape2D::is_class(ConvexPolygonShape2D *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010326f;
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
LAB_0010326f:
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
    if (cVar6 != '\0') goto LAB_00103323;
  }
  cVar6 = String::operator==(param_1,"ConvexPolygonShape2D");
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
              if (lVar5 == 0) goto LAB_001033e3;
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
LAB_001033e3:
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
      if (cVar6 != '\0') goto LAB_00103323;
    }
    cVar6 = String::operator==(param_1,"Shape2D");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = Resource::is_class((Resource *)this,param_1);
        return uVar7;
      }
      goto LAB_0010348c;
    }
  }
LAB_00103323:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010348c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

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
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Resource";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Resource";
  local_98 = 0;
  local_70 = 8;
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
LAB_00103618:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00103618;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00103635;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00103635:
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
  StringName::StringName((StringName *)&local_78,"Resource",false);
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



/* Shape2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Shape2D::_get_property_listv(Shape2D *this,List *param_1,bool param_2)

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
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Shape2D";
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Shape2D";
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
LAB_00103a68:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00103a68;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00103a85;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00103a85:
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
  StringName::StringName((StringName *)&local_78,"Shape2D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Resource::_get_property_listv((Resource *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConvexPolygonShape2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
ConvexPolygonShape2D::_get_property_listv(ConvexPolygonShape2D *this,List *param_1,bool param_2)

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
    Shape2D::_get_property_listv((Shape2D *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "ConvexPolygonShape2D";
  local_70 = 0x14;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ConvexPolygonShape2D";
  local_98 = 0;
  local_70 = 0x14;
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
LAB_00103eb8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00103eb8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00103ed5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00103ed5:
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
  StringName::StringName((StringName *)&local_78,"ConvexPolygonShape2D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Shape2D::_get_property_listv((Shape2D *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Geometry2D::is_point_in_polygon(Vector2 const&, Vector<Vector2> const&) */

ulong Geometry2D::is_point_in_polygon(Vector2 *param_1,Vector *param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint local_5c;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  pfVar3 = *(float **)(param_2 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = 0;
  if (pfVar3 == (float *)0x0) {
    uVar5 = 0;
  }
  else {
    iVar6 = (int)*(undefined8 *)(pfVar3 + -2);
    if (2 < iVar6) {
      pfVar4 = pfVar3;
      fVar9 = _LC23;
      fVar8 = _LC23;
      fVar14 = _LC22;
      fVar16 = _LC22;
      do {
        fVar1 = pfVar4[1];
        fVar2 = *pfVar4;
        pfVar4 = pfVar4 + 2;
        if (fVar14 <= fVar1) {
          fVar14 = fVar1;
        }
        if (fVar16 <= fVar2) {
          fVar16 = fVar2;
        }
        if (fVar1 <= fVar9) {
          fVar9 = fVar1;
        }
        if (fVar2 <= fVar8) {
          fVar8 = fVar2;
        }
      } while (pfVar4 != pfVar3 + (ulong)(iVar6 - 1) * 2 + 2);
      local_5c = 0;
      fVar8 = (fVar16 - fVar8) * __LC25;
      uVar7 = 1;
      fVar9 = (fVar14 - fVar9) * __LC26;
      do {
        fVar1 = *(float *)param_1;
        fVar2 = *(float *)(param_1 + 4);
        local_50 = 0;
        fVar11 = (float)*(undefined8 *)(pfVar3 + uVar7 * 2 + -2);
        fVar13 = (float)((ulong)*(undefined8 *)(pfVar3 + uVar7 * 2 + -2) >> 0x20);
        local_48 = CONCAT44((float)((ulong)*(undefined8 *)
                                            (pfVar3 + (long)(int)((long)((ulong)(uint)((int)uVar7 >>
                                                                                      0x1f) << 0x20
                                                                        | uVar7 & 0xffffffff) %
                                                                 (long)iVar6) * 2) >> 0x20) - fVar13
                            ,(float)*(undefined8 *)
                                     (pfVar3 + (long)(int)((long)((ulong)(uint)((int)uVar7 >> 0x1f)
                                                                  << 0x20 | uVar7 & 0xffffffff) %
                                                          (long)iVar6) * 2) - fVar11);
        fVar10 = (float)Vector2::dot((Vector2 *)&local_48);
        if (0.0 < fVar10) {
          fVar19 = (fVar9 + fVar14) - fVar13;
          fVar17 = local_48._4_4_ / fVar10;
          fVar18 = (fVar8 + fVar16) - fVar11;
          fVar10 = (float)local_48 / fVar10;
          fVar12 = (fVar2 - fVar13) * fVar10 - (fVar1 - fVar11) * fVar17;
          fVar15 = fVar19 * fVar10 - fVar18 * fVar17;
          if (fVar12 < _LC27) {
            if (_LC27 <= fVar15) goto LAB_00104279;
          }
          else if (_LC24 < fVar12) {
            if (fVar15 <= _LC24) goto LAB_00104279;
          }
          else if (fVar12 != fVar15) {
LAB_00104279:
            fVar20 = _LC24;
            if (_LC24 <= ABS(fVar12) * _LC24) {
              fVar20 = ABS(fVar12) * _LC24;
            }
            if (((fVar20 <= ABS(fVar12 - fVar15)) &&
                (fVar18 = fVar18 * fVar10 + fVar19 * fVar17,
                fVar18 = ((((fVar1 - fVar11) * fVar10 + (fVar2 - fVar13) * fVar17) - fVar18) *
                         fVar15) / (fVar15 - fVar12) + fVar18, 0.0 <= fVar18)) && (fVar18 <= _LC28))
            {
              local_5c = local_5c + 1;
              local_50 = CONCAT44(fVar18 * local_48._4_4_ +
                                  (float)((ulong)*(undefined8 *)(pfVar3 + uVar7 * 2 + -2) >> 0x20),
                                  fVar18 * (float)local_48 +
                                  (float)*(undefined8 *)(pfVar3 + uVar7 * 2 + -2));
              uVar5 = Vector2::is_equal_approx((Vector2 *)&local_50);
              if ((char)uVar5 != '\0') goto LAB_00104450;
            }
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != (ulong)(iVar6 - 1) + 2);
      uVar5 = (ulong)(local_5c & 1);
    }
  }
LAB_00104450:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void Vector<Vector2>::sort_custom<_DefaultComparator<Vector2>, true>() */

void __thiscall
Vector<Vector2>::sort_custom<_DefaultComparator<Vector2>,true>(Vector<Vector2> *this)

{
  undefined8 uVar1;
  long lVar2;
  Vector2 *__src;
  undefined8 uVar3;
  bool bVar4;
  Vector2 *pVVar5;
  long lVar6;
  long lVar7;
  Vector2 *pVVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (*(long *)(this + 8) == 0) {
    return;
  }
  lVar2 = *(long *)(*(long *)(this + 8) + -8);
  if (lVar2 != 0) {
    CowData<Vector2>::_copy_on_write((CowData<Vector2> *)(this + 8));
    __src = *(Vector2 **)(this + 8);
    if (lVar2 == 1) {
      SortArray<Vector2,_DefaultComparator<Vector2>,true>::introsort(0,1,__src,0);
      return;
    }
    lVar6 = 0;
    lVar7 = lVar2;
    do {
      lVar7 = lVar7 >> 1;
      lVar6 = lVar6 + 1;
    } while (lVar7 != 1);
    SortArray<Vector2,_DefaultComparator<Vector2>,true>::introsort(0,lVar2,__src,lVar6 * 2);
    if (lVar2 < 0x11) {
      lVar7 = 1;
      pVVar8 = __src + 8;
      do {
        uVar1 = *(undefined8 *)pVVar8;
        fVar11 = *(float *)__src;
        uVar3 = *(undefined8 *)pVVar8;
        fVar9 = (float)uVar1;
        fVar10 = (float)((ulong)uVar1 >> 0x20);
        pVVar5 = pVVar8;
        lVar6 = lVar7;
        if (NAN(fVar11) || NAN(fVar9)) {
LAB_001047cb:
          while( true ) {
            if (*(float *)(pVVar5 + -8) == fVar9) {
              bVar4 = fVar10 < *(float *)(pVVar5 + -4);
            }
            else {
              bVar4 = fVar9 < *(float *)(pVVar5 + -8);
            }
            if (!bVar4) goto LAB_0010481b;
            if (lVar6 + -1 == 0) break;
            *(undefined8 *)pVVar5 = *(undefined8 *)(pVVar5 + -8);
            pVVar5 = pVVar5 + -8;
            lVar6 = lVar6 + -1;
          }
          _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                           "bad comparison function; sorting will be broken",0,0);
LAB_0010481b:
          *(undefined8 *)pVVar5 = uVar3;
        }
        else {
          if (fVar11 == fVar9) {
            if (*(float *)(__src + 4) <= fVar10) goto LAB_001047cb;
          }
          else if (fVar11 <= fVar9) goto LAB_001047cb;
          memmove(__src + 8,__src,lVar7 * 8);
          *(undefined8 *)__src = uVar1;
        }
        lVar7 = lVar7 + 1;
        pVVar8 = pVVar8 + 8;
        if (lVar2 == lVar7) {
          return;
        }
      } while( true );
    }
    lVar7 = 1;
    do {
      uVar1 = *(undefined8 *)(__src + lVar7 * 8);
      fVar11 = *(float *)__src;
      uVar3 = *(undefined8 *)(__src + lVar7 * 8);
      fVar9 = (float)uVar1;
      fVar10 = (float)((ulong)uVar1 >> 0x20);
      if (NAN(fVar11) || NAN(fVar9)) {
LAB_00104640:
        pVVar8 = __src + lVar7 * 8;
        while( true ) {
          if (*(float *)(pVVar8 + -8) == fVar9) {
            bVar4 = fVar10 < *(float *)(pVVar8 + -4);
          }
          else {
            bVar4 = fVar9 < *(float *)(pVVar8 + -8);
          }
          if (!bVar4) goto LAB_001046b1;
          pVVar5 = pVVar8 + -8;
          if (__src == pVVar5) break;
          *(undefined8 *)pVVar8 = *(undefined8 *)pVVar5;
          pVVar8 = pVVar5;
        }
        _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                         "bad comparison function; sorting will be broken",0,0);
LAB_001046b1:
        *(undefined8 *)pVVar8 = uVar3;
      }
      else {
        if (fVar11 == fVar9) {
          if (*(float *)(__src + 4) <= fVar10) goto LAB_00104640;
        }
        else if (fVar11 <= fVar9) goto LAB_00104640;
        memmove(__src + 8,__src,lVar7 * 8);
        *(undefined8 *)__src = uVar1;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0x10);
    lVar7 = 0x10;
    do {
      uVar1 = *(undefined8 *)(__src + lVar7 * 8);
      fVar11 = (float)uVar1;
      lVar6 = lVar7;
      while( true ) {
        pVVar8 = __src + lVar6 * 8 + -8;
        if (NAN(fVar11) || NAN(*(float *)pVVar8)) break;
        if (fVar11 == *(float *)pVVar8) {
          if (*(float *)(__src + lVar6 * 8 + -4) <= (float)((ulong)uVar1 >> 0x20)) break;
        }
        else if (*(float *)pVVar8 <= fVar11 && fVar11 != *(float *)pVVar8) break;
        if (lVar6 == 1) {
          _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                           "bad comparison function; sorting will be broken",0,0);
          lVar6 = 1;
          break;
        }
        lVar6 = lVar6 + -1;
        *(undefined8 *)(__src + lVar6 * 8 + 8) = *(undefined8 *)(__src + lVar6 * 8);
      }
      lVar7 = lVar7 + 1;
      *(undefined8 *)(__src + lVar6 * 8) = uVar1;
    } while (lVar2 != lVar7);
  }
  return;
}



/* MethodBind* create_method_bind<ConvexPolygonShape2D, Vector<Vector2> const&>(void
   (ConvexPolygonShape2D::*)(Vector<Vector2> const&)) */

MethodBind *
create_method_bind<ConvexPolygonShape2D,Vector<Vector2>const&>(_func_void_Vector_ptr *param_1)

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
  *(_func_void_Vector_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001075c8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "ConvexPolygonShape2D";
  local_30 = 0x14;
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



/* MethodBind* create_method_bind<ConvexPolygonShape2D, Vector<Vector2>>(Vector<Vector2>
   (ConvexPolygonShape2D::*)() const) */

MethodBind * create_method_bind<ConvexPolygonShape2D,Vector<Vector2>>(_func_Vector *param_1)

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
  *(_func_Vector **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00107628;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "ConvexPolygonShape2D";
  local_30 = 0x14;
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



/* ConvexPolygonShape2D::_initialize_classv() */

void ConvexPolygonShape2D::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Shape2D::initialize_class()::initialized == '\0') {
      if (Resource::initialize_class()::initialized == '\0') {
        if (RefCounted::initialize_class()::initialized == '\0') {
          Object::initialize_class();
          local_68 = 0;
          local_50 = 6;
          local_58 = "Object";
          String::parse_latin1((StrRange *)&local_68);
          StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
          local_58 = "RefCounted";
          local_70 = 0;
          local_50 = 10;
          String::parse_latin1((StrRange *)&local_70);
          StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
          if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
          }
          lVar2 = local_68;
          if (local_68 != 0) {
            LOCK();
            plVar1 = (long *)(local_68 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_68 = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
            }
          }
          if ((code *)PTR__bind_methods_0010a008 != RefCounted::_bind_methods) {
            RefCounted::_bind_methods();
          }
          RefCounted::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "RefCounted";
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Resource";
        local_70 = 0;
        local_50 = 8;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        lVar2 = local_68;
        if (local_68 != 0) {
          LOCK();
          plVar1 = (long *)(local_68 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_68 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        Resource::_bind_methods();
        Resource::initialize_class()::initialized = '\x01';
      }
      local_58 = "Resource";
      local_68 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "Shape2D";
      local_70 = 0;
      local_50 = 7;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      lVar2 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Resource::_bind_methods) {
        Shape2D::_bind_methods();
      }
      Shape2D::initialize_class()::initialized = '\x01';
    }
    local_58 = "Shape2D";
    local_68 = 0;
    local_50 = 7;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ConvexPolygonShape2D";
    local_70 = 0;
    local_50 = 0x14;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    lVar2 = local_68;
    if (local_68 != 0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Vector2>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<Vector2>::resize<false>(CowData<Vector2> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar4 = *(long *)this;
  if (lVar4 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar10 = 0;
    lVar4 = 0;
  }
  else {
    lVar10 = *(long *)(lVar4 + -8);
    if (param_1 == lVar10) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar4 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar4 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    lVar4 = lVar10 * 8;
    if (lVar4 != 0) {
      uVar5 = lVar4 - 1U | lVar4 - 1U >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      lVar4 = (uVar5 | uVar5 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 != 0) {
    uVar5 = param_1 * 8 - 1;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = uVar5 | uVar5 >> 0x20;
    lVar9 = uVar5 + 1;
    if (lVar9 != 0) {
      if (param_1 <= lVar10) {
        if ((lVar9 != lVar4) && (iVar3 = _realloc(this,lVar9), iVar3 != 0)) {
          return;
        }
        if (*(long *)this != 0) {
          *(long *)(*(long *)this + -8) = param_1;
          return;
        }
        _DAT_00000000 = 0;
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (lVar9 == lVar4) {
LAB_001052ec:
        puVar11 = *(undefined8 **)this;
        if (puVar11 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        lVar4 = puVar11[-1];
        if (param_1 <= lVar4) goto LAB_0010527d;
      }
      else {
        if (lVar10 != 0) {
          iVar3 = _realloc(this,lVar9);
          if (iVar3 != 0) {
            return;
          }
          goto LAB_001052ec;
        }
        puVar6 = (undefined8 *)Memory::alloc_static(uVar5 + 0x11,false);
        if (puVar6 == (undefined8 *)0x0) {
          uVar8 = 0x171;
          pcVar7 = "Parameter \"mem_new\" is null.";
          goto LAB_00105392;
        }
        puVar11 = puVar6 + 2;
        *puVar6 = 1;
        puVar6[1] = 0;
        *(undefined8 **)this = puVar11;
        lVar4 = 0;
      }
      memset(puVar11 + lVar4,0,(param_1 - lVar4) * 8);
LAB_0010527d:
      puVar11[-1] = param_1;
      return;
    }
  }
  uVar8 = 0x16a;
  pcVar7 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_00105392:
  _err_print_error("resize","./core/templates/cowdata.h",uVar8,pcVar7,0,0);
  return;
}



/* Geometry2D::convex_hull(Vector<Vector2>) */

Geometry2D * __thiscall Geometry2D::convex_hull(Geometry2D *this,Vector<Vector2> *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  int iVar20;
  bool bVar21;
  CowData<Vector2> *local_50;
  
  if (*(long *)(param_2 + 8) == 0) {
    *(undefined8 *)(this + 8) = 0;
    CowData<Vector2>::resize<false>((CowData<Vector2> *)(this + 8),0);
    Vector<Vector2>::sort_custom<_DefaultComparator<Vector2>,true>(param_2);
  }
  else {
    uVar6 = *(undefined8 *)(*(long *)(param_2 + 8) + -8);
    *(undefined8 *)(this + 8) = 0;
    iVar9 = (int)uVar6;
    CowData<Vector2>::resize<false>((CowData<Vector2> *)(this + 8),(long)(iVar9 * 2));
    Vector<Vector2>::sort_custom<_DefaultComparator<Vector2>,true>(param_2);
    if (0 < iVar9) {
      iVar14 = 0;
      uVar19 = 0;
      do {
        lVar16 = *(long *)(param_2 + 8);
        iVar20 = iVar14;
        if (1 < iVar14) {
          if (lVar16 == 0) {
            uVar11 = uVar19;
            lVar18 = 0;
            goto LAB_0010558e;
          }
          lVar15 = *(long *)(lVar16 + -8);
          uVar10 = (ulong)iVar14;
          pfVar1 = (float *)(lVar16 + uVar19 * 8);
          uVar12 = uVar10 - 2;
          do {
            uVar11 = uVar19;
            lVar18 = lVar15;
            if (lVar15 <= (long)uVar19) goto LAB_0010558e;
            uVar10 = uVar10 - 1;
            lVar13 = *(long *)(this + 8);
            iVar14 = iVar20 + -1;
            if (lVar13 == 0) goto LAB_00105570;
            lVar18 = *(long *)(lVar13 + -8);
            uVar11 = uVar10;
            if ((lVar18 <= (long)uVar10) ||
               (pfVar2 = (float *)(lVar13 + uVar10 * 8), uVar11 = uVar12, lVar18 <= (long)uVar12))
            goto LAB_0010558e;
            pfVar3 = (float *)(lVar13 + uVar12 * 8);
            uVar12 = uVar12 - 1;
            fVar4 = pfVar3[1];
            fVar5 = *pfVar3;
            if (0.0 < (*pfVar2 - fVar5) * (pfVar1[1] - fVar4) -
                      (pfVar2[1] - fVar4) * (*pfVar1 - fVar5)) goto LAB_0010560f;
            iVar20 = iVar14;
          } while (iVar14 != 1);
        }
        if (lVar16 == 0) {
          uVar11 = uVar19;
          lVar18 = 0;
          goto LAB_0010558e;
        }
        lVar15 = *(long *)(lVar16 + -8);
LAB_0010560f:
        uVar11 = uVar19;
        lVar18 = lVar15;
        if (lVar15 <= (long)uVar19) goto LAB_0010558e;
        iVar14 = iVar20 + 1;
        lVar15 = (long)iVar20;
        if (*(long *)(this + 8) == 0) {
          lVar18 = 0;
          goto LAB_0010570f;
        }
        lVar18 = *(long *)(*(long *)(this + 8) + -8);
        if (lVar18 <= lVar15) goto LAB_0010570f;
        CowData<Vector2>::_copy_on_write((CowData<Vector2> *)(this + 8));
        lVar13 = *(long *)(this + 8);
        *(undefined8 *)(lVar13 + lVar15 * 8) = *(undefined8 *)(lVar16 + uVar19 * 8);
        bVar21 = uVar19 != iVar9 - 1;
        uVar19 = uVar19 + 1;
      } while (bVar21);
      if (iVar9 == 1) {
        lVar16 = (long)iVar14;
      }
      else {
        uVar19 = (ulong)(int)(iVar9 - 2U);
        iVar20 = iVar14;
        do {
          local_50 = (CowData<Vector2> *)(this + 8);
          lVar7 = *(long *)(param_2 + 8);
          lVar16 = uVar19 * 8;
          if (iVar14 < iVar20) {
            if (lVar7 == 0) {
              uVar11 = uVar19;
              lVar18 = 0;
              goto LAB_0010558e;
            }
            lVar17 = *(long *)(lVar7 + -8);
            uVar10 = (ulong)iVar20;
            pfVar1 = (float *)(lVar7 + lVar16);
            uVar12 = uVar10 - 2;
            do {
              uVar10 = uVar10 - 1;
              uVar11 = uVar19;
              lVar18 = lVar17;
              if (lVar17 <= (long)uVar19) goto LAB_0010558e;
              if (lVar13 == 0) goto LAB_00105570;
              lVar18 = *(long *)(lVar13 + -8);
              uVar11 = uVar10;
              if ((lVar18 <= (long)uVar10) ||
                 (pfVar2 = (float *)(lVar13 + uVar10 * 8), uVar11 = uVar12, lVar18 <= (long)uVar12))
              goto LAB_0010558e;
              pfVar3 = (float *)(lVar13 + uVar12 * 8);
              uVar12 = uVar12 - 1;
              fVar4 = pfVar3[1];
              fVar5 = *pfVar3;
              if (0.0 < (*pfVar2 - fVar5) * (pfVar1[1] - fVar4) -
                        (pfVar2[1] - fVar4) * (*pfVar1 - fVar5)) goto LAB_0010584b;
              iVar20 = iVar20 + -1;
            } while (iVar14 < iVar20);
          }
          if (lVar7 == 0) {
            uVar11 = uVar19;
            lVar18 = 0;
            goto LAB_0010558e;
          }
          lVar17 = *(long *)(lVar7 + -8);
LAB_0010584b:
          lVar15 = (long)iVar20;
          uVar11 = uVar19;
          lVar18 = lVar17;
          if (lVar17 <= (long)uVar19) goto LAB_0010558e;
          iVar20 = iVar20 + 1;
          if (lVar13 == 0) {
            lVar18 = 0;
LAB_0010570f:
            _err_print_index_error
                      ("operator[]","./core/templates/vector.h",0x38,lVar15,lVar18,"p_index",
                       "((Vector<T> *)(this))->_cowdata.size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          lVar18 = *(long *)(lVar13 + -8);
          if (lVar18 <= lVar15) goto LAB_0010570f;
          uVar19 = uVar19 - 1;
          CowData<Vector2>::_copy_on_write(local_50);
          lVar13 = *(long *)(this + 8);
          *(undefined8 *)(lVar13 + lVar15 * 8) = *(undefined8 *)(lVar7 + lVar16);
        } while (uVar19 != ((long)iVar9 + -3) - (ulong)(iVar9 - 2U));
        lVar16 = (long)iVar20;
      }
      goto LAB_001056c0;
    }
  }
  lVar16 = 0;
LAB_001056c0:
  CowData<Vector2>::resize<false>((CowData<Vector2> *)(this + 8),lVar16);
  return this;
LAB_00105570:
  uVar11 = uVar10;
  lVar18 = 0;
LAB_0010558e:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,uVar11,lVar18,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar8 = (code *)invalidInstructionException();
  (*pcVar8)();
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Color>::resize<false>(long) */

undefined8 __thiscall CowData<Color>::resize<false>(CowData<Color> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar4 = *(long *)this;
  if (lVar4 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar10 = 0;
    lVar4 = 0;
  }
  else {
    lVar10 = *(long *)(lVar4 + -8);
    if (param_1 == lVar10) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar4 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar4 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
      return 0;
    }
    _copy_on_write(this);
    lVar4 = lVar10 * 0x10;
    if (lVar4 != 0) {
      uVar5 = lVar4 - 1U | lVar4 - 1U >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      lVar4 = (uVar5 | uVar5 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x10 == 0) {
LAB_00105c30:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar5 = param_1 * 0x10 - 1;
  uVar5 = uVar5 >> 1 | uVar5;
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  uVar5 = uVar5 | uVar5 >> 8;
  uVar5 = uVar5 | uVar5 >> 0x10;
  uVar5 = uVar5 | uVar5 >> 0x20;
  lVar11 = uVar5 + 1;
  if (lVar11 == 0) goto LAB_00105c30;
  if (param_1 <= lVar10) {
    if ((lVar11 != lVar4) && (uVar7 = _realloc(this,lVar11), (int)uVar7 != 0)) {
      return uVar7;
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
  if (lVar11 == lVar4) {
LAB_00105b9c:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar4 = puVar8[-1];
    if (param_1 <= lVar4) goto LAB_00105b34;
  }
  else {
    if (lVar10 != 0) {
      uVar7 = _realloc(this,lVar11);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      goto LAB_00105b9c;
    }
    puVar6 = (undefined8 *)Memory::alloc_static(uVar5 + 0x11,false);
    if (puVar6 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar6 + 2;
    *puVar6 = 1;
    puVar6[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar4 = 0;
  }
  uVar3 = _UNK_00107718;
  uVar7 = __LC47;
  puVar6 = puVar8 + lVar4 * 2;
  puVar9 = puVar6 + (param_1 - lVar4) * 2;
  do {
    *puVar6 = uVar7;
    puVar6[1] = uVar3;
    puVar6 = puVar6 + 2;
  } while (puVar9 != puVar6);
LAB_00105b34:
  puVar8[-1] = param_1;
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x00105e28) */
/* WARNING: Removing unreachable block (ram,0x00105f58) */
/* WARNING: Removing unreachable block (ram,0x00106120) */
/* WARNING: Removing unreachable block (ram,0x00105f64) */
/* WARNING: Removing unreachable block (ram,0x00105f6e) */
/* WARNING: Removing unreachable block (ram,0x00106100) */
/* WARNING: Removing unreachable block (ram,0x00105f7a) */
/* WARNING: Removing unreachable block (ram,0x00105f84) */
/* WARNING: Removing unreachable block (ram,0x001060e0) */
/* WARNING: Removing unreachable block (ram,0x00105f90) */
/* WARNING: Removing unreachable block (ram,0x00105f9a) */
/* WARNING: Removing unreachable block (ram,0x001060c0) */
/* WARNING: Removing unreachable block (ram,0x00105fa6) */
/* WARNING: Removing unreachable block (ram,0x00105fb0) */
/* WARNING: Removing unreachable block (ram,0x001060a0) */
/* WARNING: Removing unreachable block (ram,0x00105fbc) */
/* WARNING: Removing unreachable block (ram,0x00105fc6) */
/* WARNING: Removing unreachable block (ram,0x00106080) */
/* WARNING: Removing unreachable block (ram,0x00105fd2) */
/* WARNING: Removing unreachable block (ram,0x00105fdc) */
/* WARNING: Removing unreachable block (ram,0x00106060) */
/* WARNING: Removing unreachable block (ram,0x00105fe4) */
/* WARNING: Removing unreachable block (ram,0x00105ffa) */
/* WARNING: Removing unreachable block (ram,0x00106006) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

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



/* MethodBindTRC<Vector<Vector2>>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindTRC<Vector<Vector2>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  long local_50;
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
    if (local_58 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC59,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_58 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar6 = (long *)(local_60 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00106330;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
      (*(code *)pVVar4)((Vector *)&local_58);
      Variant::Variant((Variant *)local_48,(Vector *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      lVar2 = local_50;
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      if (local_50 != 0) {
        LOCK();
        plVar6 = (long *)(local_50 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
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
LAB_00106330:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<Vector2>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Vector<Vector2>>::validated_call
          (MethodBindTRC<Vector<Vector2>> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant **ppVVar1;
  long lVar2;
  Variant **ppVVar3;
  code *pcVar4;
  long *plVar5;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  Variant **local_48;
  long local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x106148;
      local_40[0] = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      ppVVar3 = local_48;
      if (local_48 != (Variant **)0x0) {
        LOCK();
        ppVVar1 = local_48 + -2;
        *ppVVar1 = *ppVVar1 + -1;
        UNLOCK();
        if (*ppVVar1 == (Variant *)0x0) {
          local_48 = (Variant **)0x0;
          Memory::free_static(ppVVar3 + -2,false);
        }
      }
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010667b;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar4 = *(code **)(pcVar4 + (long)param_2 + -1);
  }
  (*pcVar4)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(long *)(*(long *)(param_3 + 8) + 0x18) != local_40[0]) {
    CowData<Vector2>::_ref((CowData<Vector2> *)(*(long *)(param_3 + 8) + 0x18),(CowData *)local_40);
  }
  lVar2 = local_40[0];
  if (local_40[0] != 0) {
    LOCK();
    plVar5 = (long *)(local_40[0] + -0x10);
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      local_40[0] = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
LAB_0010667b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<Vector2>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Vector<Vector2>>::ptrcall
          (MethodBindTRC<Vector<Vector2>> *this,Object *param_1,void **param_2,void *param_3)

{
  void **ppvVar1;
  long lVar2;
  void **ppvVar3;
  code *pcVar4;
  long *plVar5;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  void **local_48;
  long local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (void **)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x106148;
      local_40[0] = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      ppvVar3 = local_48;
      if (local_48 != (void **)0x0) {
        LOCK();
        ppvVar1 = local_48 + -2;
        *ppvVar1 = (void *)((long)*ppvVar1 + -1);
        UNLOCK();
        if (*ppvVar1 == (void *)0x0) {
          local_48 = (void **)0x0;
          Memory::free_static(ppvVar3 + -2,false);
        }
      }
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001068c7;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar4 = *(code **)(pcVar4 + (long)param_2 + -1);
  }
  (*pcVar4)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(long *)((long)param_3 + 8) != local_40[0]) {
    CowData<Vector2>::_ref((CowData<Vector2> *)((long)param_3 + 8),(CowData *)local_40);
  }
  lVar2 = local_40[0];
  if (local_40[0] != 0) {
    LOCK();
    plVar5 = (long *)(local_40[0] + -0x10);
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      local_40[0] = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
LAB_001068c7:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<Vector2> const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Vector<Vector2>const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar4 = param_2[0x23];
      if (pVVar4 == (Variant *)0x0) {
        pVVar4 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar4 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar4) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
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
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00106c85;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00106acd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(long *)(*(long *)param_3 + 8) + 0x10);
    return;
  }
LAB_00106c85:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<Vector2> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Vector<Vector2>const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      pcVar2 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_38 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar3 = (long *)(local_40 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00106ea5;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00106ce5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_00106ea5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<Vector2> const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<Vector<Vector2>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  long local_40;
  long local_30;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_48 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC59,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0);
      pcVar5 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar10 = (long *)(local_48 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar10 = (long *)(local_50 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00107070;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_001070c0;
LAB_001070b0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001070c0:
        uVar7 = 4;
        goto LAB_00107065;
      }
      if (in_R8D == 1) goto LAB_001070b0;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar11,0x23);
    uVar4 = _LC64;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Vector((Variant *)&local_48);
    (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1));
    lVar2 = local_40;
    if (local_40 != 0) {
      LOCK();
      plVar10 = (long *)(local_40 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_40 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  else {
    uVar7 = 3;
LAB_00107065:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00107070:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* ConvexPolygonShape2D::~ConvexPolygonShape2D() */

void __thiscall ConvexPolygonShape2D::~ConvexPolygonShape2D(ConvexPolygonShape2D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Vector<Vector2>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector<Vector2>>::~MethodBindTRC(MethodBindTRC<Vector<Vector2>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Vector<Vector2> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Vector<Vector2>const&>::~MethodBindT(MethodBindT<Vector<Vector2>const&> *this)

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


