
/* heuristic_manhattan(Vector2i const&, Vector2i const&) */

undefined8 heuristic_manhattan(Vector2i *param_1,Vector2i *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  
  iVar1 = *(int *)param_2 - *(int *)param_1;
  if (iVar1 < 1) {
    iVar1 = -iVar1;
  }
  auVar3._4_12_ = SUB1612((undefined1  [16])0x0,4);
  iVar2 = *(int *)(param_2 + 4) - *(int *)(param_1 + 4);
  if (iVar2 < 1) {
    iVar2 = -iVar2;
  }
  auVar3._0_4_ = (float)iVar1 + (float)iVar2;
  return auVar3._0_8_;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* heuristic_octile(Vector2i const&, Vector2i const&) */

undefined8 heuristic_octile(Vector2i *param_1,Vector2i *param_2)

{
  int iVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  
  iVar1 = *(int *)param_2 - *(int *)param_1;
  if (iVar1 < 1) {
    iVar1 = -iVar1;
  }
  fVar5 = (float)iVar1;
  iVar1 = *(int *)(param_2 + 4) - *(int *)(param_1 + 4);
  if (iVar1 < 1) {
    iVar1 = -iVar1;
  }
  auVar3._4_12_ = SUB1612((undefined1  [16])0x0,4);
  fVar2 = (float)iVar1;
  if (fVar5 < fVar2) {
    auVar3._0_4_ = fVar2 + fVar5 * __LC0;
    return auVar3._0_8_;
  }
  auVar4._0_4_ = fVar2 * __LC0 + fVar5;
  auVar4._4_12_ = auVar3._4_12_;
  return auVar4._0_8_;
}



/* heuristic_chebyshev(Vector2i const&, Vector2i const&) */

void heuristic_chebyshev(Vector2i *param_1,Vector2i *param_2)

{
  return;
}



/* AStarGrid2D::get_region() const */

undefined1  [16] __thiscall AStarGrid2D::get_region(AStarGrid2D *this)

{
  return *(undefined1 (*) [16])(this + 0x17c);
}



/* AStarGrid2D::get_size() const */

undefined8 __thiscall AStarGrid2D::get_size(AStarGrid2D *this)

{
  return *(undefined8 *)(this + 0x184);
}



/* AStarGrid2D::get_offset() const */

undefined8 __thiscall AStarGrid2D::get_offset(AStarGrid2D *this)

{
  return *(undefined8 *)(this + 0x18c);
}



/* AStarGrid2D::get_cell_size() const */

undefined8 __thiscall AStarGrid2D::get_cell_size(AStarGrid2D *this)

{
  return *(undefined8 *)(this + 0x194);
}



/* AStarGrid2D::get_cell_shape() const */

undefined4 __thiscall AStarGrid2D::get_cell_shape(AStarGrid2D *this)

{
  return *(undefined4 *)(this + 0x1a0);
}



/* AStarGrid2D::is_dirty() const */

AStarGrid2D __thiscall AStarGrid2D::is_dirty(AStarGrid2D *this)

{
  return this[0x19c];
}



/* AStarGrid2D::set_jumping_enabled(bool) */

void __thiscall AStarGrid2D::set_jumping_enabled(AStarGrid2D *this,bool param_1)

{
  this[0x1a4] = (AStarGrid2D)param_1;
  return;
}



/* AStarGrid2D::is_jumping_enabled() const */

AStarGrid2D __thiscall AStarGrid2D::is_jumping_enabled(AStarGrid2D *this)

{
  return this[0x1a4];
}



/* AStarGrid2D::get_diagonal_mode() const */

undefined4 __thiscall AStarGrid2D::get_diagonal_mode(AStarGrid2D *this)

{
  return *(undefined4 *)(this + 0x1a8);
}



/* AStarGrid2D::get_default_compute_heuristic() const */

undefined4 __thiscall AStarGrid2D::get_default_compute_heuristic(AStarGrid2D *this)

{
  return *(undefined4 *)(this + 0x1ac);
}



/* AStarGrid2D::get_default_estimate_heuristic() const */

undefined4 __thiscall AStarGrid2D::get_default_estimate_heuristic(AStarGrid2D *this)

{
  return *(undefined4 *)(this + 0x1b0);
}



/* AStarGrid2D::set_size(Vector2i const&) */

void __thiscall AStarGrid2D::set_size(AStarGrid2D *this,Vector2i *param_1)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  
  if (set_size(Vector2i_const&)::warning_shown == '\0') {
    _err_print_error("set_size","core/math/a_star_grid_2d.cpp",0x4c,
                     "This method has been deprecated and will be removed in the future.",
                     "The \"size\" property is deprecated, use \"region\" instead.",0,1);
    LOCK();
    set_size(Vector2i_const&)::warning_shown = '\x01';
    UNLOCK();
    iVar1 = *(int *)param_1;
  }
  else {
    iVar1 = *(int *)param_1;
  }
  if ((-1 < iVar1) && (-1 < *(int *)(param_1 + 4))) {
    cVar3 = Vector2i::operator!=(param_1,(Vector2i *)(this + 0x184));
    if (cVar3 != '\0') {
      uVar2 = *(undefined8 *)param_1;
      this[0x19c] = (AStarGrid2D)0x1;
      *(undefined8 *)(this + 0x184) = uVar2;
    }
    return;
  }
  _err_print_error("set_size","core/math/a_star_grid_2d.cpp",0x4d,
                   "Condition \"p_size.x < 0 || p_size.y < 0\" is true.",0,0);
  return;
}



/* AStarGrid2D::set_offset(Vector2 const&) */

void __thiscall AStarGrid2D::set_offset(AStarGrid2D *this,Vector2 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = Vector2::is_equal_approx((Vector2 *)(this + 0x18c));
  if (cVar2 == '\0') {
    uVar1 = *(undefined8 *)param_1;
    this[0x19c] = (AStarGrid2D)0x1;
    *(undefined8 *)(this + 0x18c) = uVar1;
  }
  return;
}



/* AStarGrid2D::set_cell_size(Vector2 const&) */

void __thiscall AStarGrid2D::set_cell_size(AStarGrid2D *this,Vector2 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = Vector2::is_equal_approx((Vector2 *)(this + 0x194));
  if (cVar2 == '\0') {
    uVar1 = *(undefined8 *)param_1;
    this[0x19c] = (AStarGrid2D)0x1;
    *(undefined8 *)(this + 0x194) = uVar1;
  }
  return;
}



/* heuristic_euclidean(Vector2i const&, Vector2i const&) */

undefined8 heuristic_euclidean(Vector2i *param_1,Vector2i *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  
  iVar1 = *(int *)param_2 - *(int *)param_1;
  if (iVar1 < 1) {
    iVar1 = -iVar1;
  }
  auVar3._4_12_ = SUB1612((undefined1  [16])0x0,4);
  iVar2 = *(int *)(param_2 + 4) - *(int *)(param_1 + 4);
  if (iVar2 < 1) {
    iVar2 = -iVar2;
  }
  auVar3._0_4_ = SQRT((float)iVar1 * (float)iVar1 + (float)iVar2 * (float)iVar2);
  return auVar3._0_8_;
}



/* AStarGrid2D::set_cell_shape(AStarGrid2D::CellShape) */

void __thiscall AStarGrid2D::set_cell_shape(AStarGrid2D *this,uint param_2)

{
  if (*(uint *)(this + 0x1a0) == param_2) {
    return;
  }
  if (param_2 < 3) {
    *(uint *)(this + 0x1a0) = param_2;
    this[0x19c] = (AStarGrid2D)0x1;
    return;
  }
  _err_print_index_error
            ("set_cell_shape","core/math/a_star_grid_2d.cpp",0x73,(ulong)param_2,3,"p_cell_shape",
             "CellShape::CELL_SHAPE_MAX","",false,false);
  return;
}



/* AStarGrid2D::set_diagonal_mode(AStarGrid2D::DiagonalMode) */

void __thiscall AStarGrid2D::set_diagonal_mode(AStarGrid2D *this,uint param_2)

{
  if (param_2 < 4) {
    *(uint *)(this + 0x1a8) = param_2;
    return;
  }
  _err_print_index_error
            ("set_diagonal_mode","core/math/a_star_grid_2d.cpp",0xc0,(long)(int)param_2,4,
             "(int)p_diagonal_mode","(int)DIAGONAL_MODE_MAX","",false,false);
  return;
}



/* AStarGrid2D::set_default_compute_heuristic(AStarGrid2D::Heuristic) */

void __thiscall AStarGrid2D::set_default_compute_heuristic(AStarGrid2D *this,uint param_2)

{
  if (param_2 < 4) {
    *(uint *)(this + 0x1ac) = param_2;
    return;
  }
  _err_print_index_error
            ("set_default_compute_heuristic","core/math/a_star_grid_2d.cpp",0xc9,(long)(int)param_2,
             4,"(int)p_heuristic","(int)HEURISTIC_MAX","",false,false);
  return;
}



/* AStarGrid2D::set_default_estimate_heuristic(AStarGrid2D::Heuristic) */

void __thiscall AStarGrid2D::set_default_estimate_heuristic(AStarGrid2D *this,uint param_2)

{
  if (param_2 < 4) {
    *(uint *)(this + 0x1b0) = param_2;
    return;
  }
  _err_print_index_error
            ("set_default_estimate_heuristic","core/math/a_star_grid_2d.cpp",0xd2,(long)(int)param_2
             ,4,"(int)p_heuristic","(int)HEURISTIC_MAX","",false,false);
  return;
}



/* AStarGrid2D::set_region(Rect2i const&) */

void __thiscall AStarGrid2D::set_region(AStarGrid2D *this,Rect2i *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  
  if ((-1 < *(int *)(param_1 + 8)) && (-1 < *(int *)(param_1 + 0xc))) {
    cVar3 = Vector2i::operator!=((Vector2i *)param_1,(Vector2i *)(this + 0x17c));
    if (cVar3 == '\0') {
      cVar3 = Vector2i::operator!=((Vector2i *)(param_1 + 8),(Vector2i *)(this + 0x184));
      if (cVar3 == '\0') {
        return;
      }
    }
    uVar1 = *(undefined8 *)param_1;
    uVar2 = *(undefined8 *)(param_1 + 8);
    this[0x19c] = (AStarGrid2D)0x1;
    *(undefined8 *)(this + 0x17c) = uVar1;
    *(undefined8 *)(this + 0x184) = uVar2;
    return;
  }
  _err_print_error("set_region","core/math/a_star_grid_2d.cpp",0x40,
                   "Condition \"p_region.size.x < 0 || p_region.size.y < 0\" is true.",0,0);
  return;
}



/* LocalVector<AStarGrid2D::Point*, unsigned int, false, false>::resize(unsigned int) [clone
   .part.0] */

void LocalVector<AStarGrid2D::Point*,unsigned_int,false,false>::resize(uint param_1)

{
  code *pcVar1;
  
  _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                   "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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



/* AStarGrid2D::is_in_boundsv(Vector2i const&) const */

bool __thiscall AStarGrid2D::is_in_boundsv(AStarGrid2D *this,Vector2i *param_1)

{
  bool bVar1;
  
  if ((*(int *)(this + 0x184) < 0) || (*(int *)(this + 0x188) < 0)) {
    _err_print_error("has_point","./core/math/rect2i.h",0x7f,
                     "Rect2i size is negative, this is not supported. Use Rect2i.abs() to get a Rect2i with a positive size."
                     ,0,0);
  }
  bVar1 = false;
  if (*(int *)(this + 0x17c) <= *(int *)param_1) {
    if ((*(int *)(this + 0x180) <= *(int *)(param_1 + 4)) &&
       (*(int *)param_1 < *(int *)(this + 0x17c) + *(int *)(this + 0x184))) {
      bVar1 = *(int *)(param_1 + 4) < *(int *)(this + 0x180) + *(int *)(this + 0x188);
    }
  }
  return bVar1;
}



/* AStarGrid2D::is_in_bounds(int, int) const */

bool __thiscall AStarGrid2D::is_in_bounds(AStarGrid2D *this,int param_1,int param_2)

{
  bool bVar1;
  
  if ((*(int *)(this + 0x184) < 0) || (*(int *)(this + 0x188) < 0)) {
    _err_print_error("has_point","./core/math/rect2i.h",0x7f,
                     "Rect2i size is negative, this is not supported. Use Rect2i.abs() to get a Rect2i with a positive size."
                     ,0,0);
  }
  bVar1 = false;
  if (((*(int *)(this + 0x17c) <= param_1) && (*(int *)(this + 0x180) <= param_2)) &&
     (param_1 < *(int *)(this + 0x17c) + *(int *)(this + 0x184))) {
    bVar1 = param_2 < *(int *)(this + 0x180) + *(int *)(this + 0x188);
  }
  return bVar1;
}



/* AStarGrid2D::get_point_data_in_region(Rect2i const&) const */

Rect2i * AStarGrid2D::get_point_data_in_region(Rect2i *param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int extraout_var;
  uint *puVar8;
  Variant *pVVar9;
  uint uVar10;
  Vector2i *in_RDX;
  uint uVar12;
  int iVar13;
  long in_RSI;
  Vector2i *pVVar14;
  uint uVar15;
  long in_FS_OFFSET;
  uint local_d4;
  uint local_d0;
  Array local_98 [8];
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  int local_78;
  int local_74;
  undefined8 local_58;
  undefined1 auStack_50 [16];
  long local_40;
  ulong uVar11;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)(in_RSI + 0x19c) != '\0') {
    _err_print_error("get_point_data_in_region","core/math/a_star_grid_2d.cpp",0x25f,
                     "Condition \"dirty\" is true. Returning: TypedArray<Dictionary>()",
                     "Grid is not initialized. Call the update method.",0,0);
    Array::Array((Array *)param_1);
    local_58 = 0;
    local_90 = 0;
    auStack_50 = (undefined1  [16])0x0;
    Array::set_typed((uint)param_1,(StringName *)0x1b,(Variant *)&local_90);
    if ((StringName::configured != '\0') && (local_90 != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    goto LAB_0010115d;
  }
  local_58 = *(ulong *)in_RDX;
  uVar7 = *(undefined8 *)(in_RDX + 8);
  auStack_50._8_8_ = auStack_50._0_8_;
  auStack_50._0_8_ = uVar7;
  if ((*(int *)(in_RSI + 0x184) < 0) || (*(int *)(in_RSI + 0x188) < 0)) {
LAB_00100f80:
    _err_print_error("intersects","./core/math/rect2i.h",0x38,
                     "Rect2i size is negative, this is not supported. Use Rect2i.abs() to get a Rect2i with a positive size."
                     ,0,0);
    uVar5 = auStack_50._0_4_;
  }
  else {
    auStack_50._0_4_ = (undefined4)uVar7;
    auStack_50._4_4_ = (undefined4)((ulong)uVar7 >> 0x20);
    uVar12 = auStack_50._0_4_ | auStack_50._4_4_;
    uVar5 = auStack_50._0_4_;
    if ((int)uVar12 < 0) goto LAB_00100f80;
  }
  iVar4 = *(int *)(in_RSI + 0x17c);
  iVar13 = *(int *)(in_RSI + 0x180);
  if ((iVar4 < (int)(uVar5 + (int)local_58)) && ((int)local_58 < *(int *)(in_RSI + 0x184) + iVar4))
  {
    if ((auStack_50._4_4_ + local_58._4_4_ <= iVar13) ||
       (*(int *)(in_RSI + 0x188) + iVar13 <= local_58._4_4_)) goto LAB_00100ae0;
    iVar3 = *(int *)(in_RDX + 4);
    if (*(int *)(in_RDX + 4) <= iVar13) {
      iVar3 = iVar13;
    }
    iVar13 = *(int *)in_RDX;
    if (*(int *)in_RDX < iVar4) {
      iVar13 = iVar4;
    }
    local_58 = CONCAT44(iVar3,iVar13);
    uVar6 = Vector2i::operator+(in_RDX,in_RDX + 8);
    uVar7 = Vector2i::operator+((Vector2i *)(in_RSI + 0x17c),(Vector2i *)(in_RSI + 0x184));
    local_74 = (int)((ulong)uVar7 >> 0x20);
    iVar4 = (int)((ulong)uVar6 >> 0x20);
    if (iVar4 < local_74) {
      local_74 = iVar4;
    }
    if ((int)uVar6 < (int)uVar7) {
      uVar7 = uVar6;
    }
    local_78 = (int)uVar7;
    local_80 = Vector2i::operator-((Vector2i *)&local_78,(Vector2i *)&local_58);
    iVar4 = *(int *)(in_RSI + 0x17c);
    auStack_50._0_8_ = local_80;
    iVar13 = *(int *)(in_RSI + 0x180);
    local_88 = local_58;
  }
  else {
LAB_00100ae0:
    local_88 = 0;
    local_80 = 0;
  }
  uVar15 = (int)local_88 - iVar4;
  local_d0 = (int)((ulong)local_88 >> 0x20) - iVar13;
  iVar4 = Vector2i::operator+((Vector2i *)&local_88,(Vector2i *)&local_80);
  uVar5 = iVar4 - *(int *)(in_RSI + 0x17c);
  Vector2i::operator+((Vector2i *)&local_88,(Vector2i *)&local_80);
  uVar12 = extraout_var - *(int *)(in_RSI + 0x180);
  Array::Array(local_98);
  local_58 = 0;
  local_90 = 0;
  auStack_50 = (undefined1  [16])0x0;
  Array::set_typed((uint)local_98,(StringName *)0x1b,(Variant *)&local_90);
  if ((StringName::configured != '\0') && (local_90 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  if ((int)local_d0 < (int)uVar12) {
    do {
      local_d4 = uVar15;
      if ((int)uVar15 < (int)uVar5) {
        do {
          uVar1 = *(uint *)(in_RSI + 0x1c8);
          uVar11 = (ulong)local_d0;
          if (uVar1 <= local_d0) {
LAB_00100f2f:
            _err_print_index_error
                      ("operator[]","./core/templates/local_vector.h",0xae,uVar11,(ulong)uVar1,
                       "p_index","count","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          puVar8 = (uint *)((ulong)local_d0 * 0x10 + *(long *)(in_RSI + 0x1d0));
          uVar1 = *puVar8;
          if (uVar1 <= local_d4) {
            uVar11 = (ulong)local_d4;
            goto LAB_00100f2f;
          }
          pVVar14 = (Vector2i *)((ulong)local_d4 * 0x40 + *(long *)(puVar8 + 2));
          Dictionary::Dictionary((Dictionary *)&local_90);
          Variant::Variant((Variant *)&local_58,pVVar14);
          Variant::Variant((Variant *)&local_78,"id");
          pVVar9 = (Variant *)Dictionary::operator[]((Variant *)&local_90);
          if (pVVar9 != (Variant *)&local_58) {
            if (Variant::needs_deinit[*(int *)pVVar9] != '\0') {
              Variant::_clear_internal();
            }
            *(int *)pVVar9 = 0;
            *(int *)pVVar9 = (int)local_58;
            *(undefined8 *)(pVVar9 + 8) = auStack_50._0_8_;
            *(undefined8 *)(pVVar9 + 0x10) = auStack_50._8_8_;
            local_58 = local_58 & 0xffffffff00000000;
          }
          if (Variant::needs_deinit[local_78] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)&local_58,(Vector2 *)(pVVar14 + 8));
          Variant::Variant((Variant *)&local_78,"position");
          pVVar9 = (Variant *)Dictionary::operator[]((Variant *)&local_90);
          if (pVVar9 != (Variant *)&local_58) {
            if (Variant::needs_deinit[*(int *)pVVar9] != '\0') {
              Variant::_clear_internal();
            }
            *(int *)pVVar9 = 0;
            *(int *)pVVar9 = (int)local_58;
            *(undefined8 *)(pVVar9 + 8) = auStack_50._0_8_;
            *(undefined8 *)(pVVar9 + 0x10) = auStack_50._8_8_;
            local_58 = local_58 & 0xffffffff00000000;
          }
          if (Variant::needs_deinit[local_78] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          uVar1 = *(uint *)(in_RSI + 0x1b8);
          uVar10 = ((((*(int *)(pVVar14 + 4) - *(int *)(in_RSI + 0x180)) + 1) *
                     (*(int *)(in_RSI + 0x184) + 2) + *(int *)pVVar14) - *(int *)(in_RSI + 0x17c)) +
                   1;
          uVar11 = (ulong)uVar10;
          if (uVar1 <= uVar10) goto LAB_00100f2f;
          Variant::Variant((Variant *)&local_58,*(bool *)(*(long *)(in_RSI + 0x1c0) + uVar11));
          Variant::Variant((Variant *)&local_78,"solid");
          pVVar9 = (Variant *)Dictionary::operator[]((Variant *)&local_90);
          if (pVVar9 != (Variant *)&local_58) {
            if (Variant::needs_deinit[*(int *)pVVar9] != '\0') {
              Variant::_clear_internal();
            }
            *(int *)pVVar9 = 0;
            *(int *)pVVar9 = (int)local_58;
            *(undefined8 *)(pVVar9 + 8) = auStack_50._0_8_;
            *(undefined8 *)(pVVar9 + 0x10) = auStack_50._8_8_;
            local_58 = local_58 & 0xffffffff00000000;
          }
          if (Variant::needs_deinit[local_78] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)&local_58,*(float *)(pVVar14 + 0x10));
          Variant::Variant((Variant *)&local_78,"weight_scale");
          pVVar9 = (Variant *)Dictionary::operator[]((Variant *)&local_90);
          if (pVVar9 != (Variant *)&local_58) {
            if (Variant::needs_deinit[*(int *)pVVar9] != '\0') {
              Variant::_clear_internal();
            }
            *(int *)pVVar9 = 0;
            *(int *)pVVar9 = (int)local_58;
            *(undefined8 *)(pVVar9 + 8) = auStack_50._0_8_;
            *(undefined8 *)(pVVar9 + 0x10) = auStack_50._8_8_;
            local_58 = local_58 & 0xffffffff00000000;
          }
          if (Variant::needs_deinit[local_78] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)&local_58,(Dictionary *)&local_90);
          Array::push_back((Variant *)local_98);
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          Dictionary::~Dictionary((Dictionary *)&local_90);
          local_d4 = local_d4 + 1;
        } while (uVar5 != local_d4);
      }
      local_d0 = local_d0 + 1;
    } while (uVar12 != local_d0);
  }
  Array::Array((Array *)param_1,local_98);
  Array::~Array(local_98);
LAB_0010115d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* AStarGrid2D::fill_solid_region(Rect2i const&, bool) */

void __thiscall AStarGrid2D::fill_solid_region(AStarGrid2D *this,Rect2i *param_1,bool param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int extraout_var;
  int iVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  long in_FS_OFFSET;
  undefined4 local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x19c] != (AStarGrid2D)0x0) {
    _err_print_error("fill_solid_region","core/math/a_star_grid_2d.cpp",0xf4,
                     "Condition \"dirty\" is true.",
                     "Grid is not initialized. Call the update method.",0,0);
    goto LAB_00101400;
  }
  local_48 = *(undefined8 *)(this + 0x17c);
  uVar7 = *(undefined8 *)(this + 0x184);
  if (((*(int *)(param_1 + 8) < 0) || (*(int *)(param_1 + 0xc) < 0)) ||
     (uStack_40._0_4_ = (uint)uVar7, uStack_40._4_4_ = (uint)((ulong)uVar7 >> 0x20),
     (int)((uint)uStack_40 | uStack_40._4_4_) < 0)) {
    uStack_40 = uVar7;
    _err_print_error("intersects","./core/math/rect2i.h",0x38,
                     "Rect2i size is negative, this is not supported. Use Rect2i.abs() to get a Rect2i with a positive size."
                     ,0,0);
    uVar7 = uStack_40;
  }
  uStack_40 = uVar7;
  iVar12 = *(int *)param_1;
  iVar4 = (uint)uStack_40 + (int)local_48;
  if ((iVar12 < iVar4) && ((int)local_48 < *(int *)(param_1 + 8) + iVar12)) {
    iVar4 = *(int *)(param_1 + 4);
    if (((int)(uStack_40._4_4_ + local_48._4_4_) <= iVar4) ||
       (*(int *)(param_1 + 0xc) + iVar4 <= local_48._4_4_)) goto LAB_001012e0;
    if (iVar4 < *(int *)(this + 0x180)) {
      iVar4 = *(int *)(this + 0x180);
    }
    iVar8 = *(int *)(this + 0x17c);
    if (*(int *)(this + 0x17c) < iVar12) {
      iVar8 = iVar12;
    }
    local_48 = CONCAT44(iVar4,iVar8);
    uVar6 = Vector2i::operator+((Vector2i *)(this + 0x17c),(Vector2i *)(this + 0x184));
    uVar7 = Vector2i::operator+((Vector2i *)param_1,(Vector2i *)(param_1 + 8));
    local_4c = (int)((ulong)uVar7 >> 0x20);
    iVar12 = (int)((ulong)uVar6 >> 0x20);
    if (iVar12 < local_4c) {
      local_4c = iVar12;
    }
    if ((int)uVar6 < (int)uVar7) {
      uVar7 = uVar6;
    }
    local_50 = (undefined4)uVar7;
    uStack_40 = Vector2i::operator-((Vector2i *)&local_50,(Vector2i *)&local_48);
  }
  else {
LAB_001012e0:
    local_48 = 0;
    uStack_40 = 0;
  }
  iVar4 = Vector2i::operator+((Vector2i *)&local_48,(Vector2i *)&uStack_40);
  Vector2i::operator+((Vector2i *)&local_48,(Vector2i *)&uStack_40);
  iVar12 = local_48._4_4_;
  if (local_48._4_4_ < extraout_var) {
    do {
      if ((int)local_48 < iVar4) {
        iVar1 = *(int *)(this + 0x17c);
        uVar2 = *(uint *)(this + 0x1b8);
        iVar9 = ((iVar12 - *(int *)(this + 0x180)) + 1) * (*(int *)(this + 0x184) + 2);
        iVar8 = (int)local_48 + iVar9;
        uVar11 = (1 - (long)iVar1) + (long)iVar8;
        uVar5 = (iVar8 - iVar1) + 1;
        do {
          uVar10 = uVar11 & 0xffffffff;
          if (uVar2 <= uVar5) {
            _err_print_index_error
                      ("operator[]","./core/templates/local_vector.h",0xb2,uVar10,(ulong)uVar2,
                       "p_index","count","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          uVar5 = uVar5 + 1;
          uVar11 = uVar11 + 1;
          *(bool *)(*(long *)(this + 0x1c0) + uVar10) = param_2;
        } while (uVar5 != ((iVar4 + 1) - iVar1) + iVar9);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 != extraout_var);
  }
LAB_00101400:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
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



/* AStarGrid2D::clear() */

void __thiscall AStarGrid2D::clear(AStarGrid2D *this)

{
  int *piVar1;
  long lVar2;
  
  if (*(int *)(this + 0x1c8) != 0) {
    lVar2 = 0;
    do {
      piVar1 = (int *)(lVar2 * 0x10 + *(long *)(this + 0x1d0));
      if (*(void **)(piVar1 + 2) != (void *)0x0) {
        if (*piVar1 != 0) {
          *piVar1 = 0;
        }
        Memory::free_static(*(void **)(piVar1 + 2),false);
      }
      lVar2 = lVar2 + 1;
    } while ((uint)lVar2 < *(uint *)(this + 0x1c8));
    *(undefined4 *)(this + 0x1c8) = 0;
  }
  *(undefined8 *)(this + 0x17c) = 0;
  *(undefined8 *)(this + 0x184) = 0;
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



/* AStarGrid2D::_forced_successor(int, int, int, int, bool) */

int * __thiscall
AStarGrid2D::_forced_successor
          (AStarGrid2D *this,int param_1,int param_2,int param_3,int param_4,bool param_5)

{
  byte *pbVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  int *piVar10;
  code *pcVar11;
  byte bVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  int iVar16;
  uint uVar17;
  uint *puVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  byte bVar22;
  byte bVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  ulong local_78;
  int local_6c;
  int local_68;
  
  local_6c = param_1;
  local_68 = param_2;
  if (param_5) {
    local_6c = param_1 + param_3;
    local_68 = param_2 + param_4;
  }
  iVar6 = *(int *)(this + 0x180);
  iVar24 = param_1 - param_4;
  iVar13 = param_1 + param_4;
  iVar7 = *(int *)(this + 0x17c);
  uVar8 = *(uint *)(this + 0x1b8);
  iVar28 = *(int *)(this + 0x184) + 2;
  uVar14 = (local_6c - iVar7) + 1 + ((local_68 - iVar6) + 1) * iVar28;
  local_78 = (ulong)(int)uVar14;
  if (uVar14 < uVar8) {
    lVar9 = *(long *)(this + 0x1c0);
    lVar19 = (long)(param_4 * iVar28) + (long)param_3;
    iVar25 = ((local_68 - iVar6) + 1 + param_4) * iVar28;
    lVar20 = 1 - (long)iVar7;
    iVar26 = (((param_2 + param_3) - iVar6) + 1 + param_4) * iVar28;
    iVar16 = param_3 + iVar13 + iVar26;
    uVar3 = iVar16 + lVar20;
    iVar2 = param_4 * iVar28 + param_3;
    uVar17 = (iVar16 - iVar7) + 1;
    iVar27 = (((param_2 - param_3) - iVar6) + 1 + param_4) * iVar28;
    uVar4 = (param_3 + iVar24 + iVar27) + lVar20;
    uVar29 = iVar13 + (1 - iVar7) + (param_2 + param_3 + (1 - iVar6)) * iVar28;
    uVar21 = ((param_2 - param_3) + (1 - iVar6)) * iVar28 + (1 - iVar7) + iVar24;
    iVar16 = local_6c - (iVar13 + iVar2 + iVar26);
    bVar23 = 0;
    cVar5 = *(char *)(lVar9 + (ulong)uVar14);
    local_78 = (local_6c + param_3 + iVar25) + lVar20;
    iVar28 = local_68;
    bVar22 = 0;
    while( true ) {
      if (cVar5 != '\0') {
        return (int *)0x0;
      }
      piVar10 = *(int **)(this + 0x1d8);
      if ((*piVar10 == local_6c) && (piVar10[1] == iVar28)) {
        return piVar10;
      }
      bVar12 = bVar23;
      if (bVar23 == 0) {
        uVar15 = (ulong)uVar21;
        if (uVar8 <= uVar21) goto LAB_00101ace;
        bVar12 = *(byte *)(lVar9 + uVar15) ^ 1;
      }
      if (bVar22 == 0) {
        uVar15 = (ulong)uVar29;
        if (uVar8 <= uVar29) goto LAB_00101ace;
        bVar22 = *(byte *)(lVar9 + uVar15) ^ 1;
      }
      uVar15 = uVar4 & 0xffffffff;
      if (uVar8 <= uVar17 + (((iVar24 - iVar13) + iVar27) - iVar26)) goto LAB_00101ace;
      pbVar1 = (byte *)(lVar9 + uVar15);
      uVar15 = uVar3 & 0xffffffff;
      bVar23 = *pbVar1 ^ 1;
      if (uVar8 <= uVar17) goto LAB_00101ace;
      if (((bVar12 == 0) && (*pbVar1 == 0)) || ((bVar22 == 0 && (*(byte *)(lVar9 + uVar15) == 0))))
      break;
      uVar17 = uVar17 + iVar2;
      uVar29 = uVar29 + iVar2;
      uVar3 = uVar3 + lVar19;
      uVar21 = uVar21 + iVar2;
      local_6c = local_6c + param_3;
      uVar4 = uVar4 + lVar19;
      iVar28 = iVar28 + param_4;
      if (uVar8 <= iVar16 + iVar25 + uVar17) goto LAB_00101afd;
      cVar5 = *(char *)(lVar9 + (local_78 & 0xffffffff));
      local_78 = lVar19 + local_78;
      bVar22 = *(byte *)(lVar9 + uVar15) ^ 1;
    }
    uVar8 = *(uint *)(this + 0x1c8);
    uVar14 = ((local_68 - iVar6) - local_68) + iVar28;
    uVar15 = (ulong)uVar14;
    if (uVar14 < uVar8) {
      puVar18 = (uint *)((ulong)uVar14 * 0x10 + *(long *)(this + 0x1d0));
      uVar8 = *puVar18;
      uVar15 = (ulong)(uint)(local_6c - iVar7);
      if ((uint)(local_6c - iVar7) < uVar8) {
        return (int *)(uVar15 * 0x40 + *(long *)(puVar18 + 2));
      }
    }
    iVar28 = 0xb2;
  }
  else {
LAB_00101afd:
    uVar15 = local_78 & 0xffffffff;
LAB_00101ace:
    iVar28 = 0xae;
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",iVar28,uVar15,(ulong)uVar8,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar11 = (code *)invalidInstructionException();
  (*pcVar11)();
}



/* AStarGrid2D::_jump(AStarGrid2D::Point*, AStarGrid2D::Point*) */

int * __thiscall AStarGrid2D::_jump(AStarGrid2D *this,Point *param_1,Point *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  int iVar18;
  int iVar19;
  int local_3c;
  
  iVar9 = *(int *)param_2;
  iVar15 = *(int *)(param_2 + 4);
  iVar11 = *(int *)param_1;
  local_3c = *(int *)(param_1 + 4);
  iVar19 = iVar9 - iVar11;
  iVar18 = iVar15 - local_3c;
  if ((*(uint *)(this + 0x1a8) & 0xfffffffd) != 0) {
    if (*(uint *)(this + 0x1a8) == 3) {
      if ((iVar19 != 0) && (iVar10 = iVar9, iVar18 != 0)) {
        do {
          iVar2 = iVar15;
          iVar9 = iVar10;
          iVar8 = *(int *)(this + 0x180);
          iVar11 = *(int *)(this + 0x17c);
          uVar16 = *(uint *)(this + 0x1b8);
          uVar12 = (ulong)uVar16;
          uVar14 = iVar2 - iVar8;
          iVar15 = *(int *)(this + 0x184) + 2;
          iVar3 = (uVar14 + 1) * iVar15;
          uVar6 = ((iVar9 + iVar3) - iVar11) + 1;
          uVar7 = (ulong)uVar6;
          if (uVar16 <= uVar6) goto LAB_00101f5b;
          lVar4 = *(long *)(this + 0x1c0);
          if (*(char *)(lVar4 + uVar7) != '\0') {
            return (int *)0x0;
          }
          uVar6 = (iVar9 - iVar11) + 1 + (((iVar2 - iVar18) - iVar8) + 1) * iVar15;
          uVar7 = (ulong)uVar6;
          if (uVar16 <= uVar6) goto LAB_00101f5b;
          if (*(char *)(lVar4 + uVar7) != '\0') {
            return (int *)0x0;
          }
          uVar6 = (iVar3 - iVar11) + 1 + (iVar9 - iVar19);
          uVar7 = (ulong)uVar6;
          if (uVar16 <= uVar6) goto LAB_00101f5b;
          if (*(char *)(lVar4 + uVar7) != '\0') {
            return (int *)0x0;
          }
          piVar5 = *(int **)(this + 0x1d8);
          if ((*piVar5 == iVar9) && (piVar5[1] == iVar2)) {
            return piVar5;
          }
          iVar10 = iVar9 + iVar19;
          iVar15 = (((iVar2 + iVar18) - iVar8) + 1) * iVar15;
          uVar6 = ((iVar10 + iVar15) - iVar11) + 1;
          uVar7 = (ulong)uVar6;
          if (uVar16 <= uVar6) goto LAB_00101f5b;
          if (*(char *)(lVar4 + uVar7) == '\0') {
            uVar6 = ((iVar15 + iVar9) - iVar11) + 1;
            uVar7 = (ulong)uVar6;
            if (uVar16 <= uVar6) goto LAB_00101f5b;
            if (*(char *)(lVar4 + uVar7) == '\0') goto LAB_001020ac;
LAB_0010231e:
            uVar12 = (ulong)*(uint *)(this + 0x1c8);
            uVar7 = (ulong)uVar14;
            if (*(uint *)(this + 0x1c8) <= uVar14) goto LAB_0010228b;
            goto LAB_001021e5;
          }
LAB_001020ac:
          uVar6 = ((iVar3 + iVar10) - iVar11) + 1;
          uVar7 = (ulong)uVar6;
          if (uVar16 <= uVar6) goto LAB_00101f5b;
          if (*(char *)(lVar4 + uVar7) != '\0') goto LAB_0010231e;
          lVar4 = _forced_successor(this,iVar9,iVar2,iVar19,0,false);
        } while ((lVar4 == 0) &&
                (lVar4 = _forced_successor(this,iVar9,iVar2,0,iVar18,false), iVar15 = iVar2 + iVar18
                , lVar4 == 0));
        uVar6 = *(uint *)(this + 0x1c8);
        uVar16 = iVar2 - *(int *)(this + 0x180);
        uVar7 = (ulong)uVar16;
        if (uVar6 <= uVar16) goto LAB_00102288;
        puVar17 = (uint *)((ulong)uVar16 * 0x10 + *(long *)(this + 0x1d0));
        uVar7 = (ulong)(uint)(iVar9 - *(int *)(this + 0x17c));
        uVar12 = (ulong)*puVar17;
        if ((uint)(iVar9 - *(int *)(this + 0x17c)) < *puVar17) goto LAB_00102200;
        goto LAB_0010228b;
      }
    }
    else {
      if (iVar18 != 0) {
        iVar19 = *(int *)(this + 0x180);
        iVar11 = *(int *)(this + 0x17c);
        uVar14 = iVar15 - iVar19;
        uVar12 = (ulong)*(uint *)(this + 0x1b8);
        iVar10 = *(int *)(this + 0x184) + 2;
        iVar8 = (uVar14 + 1) * iVar10;
        uVar6 = (iVar9 - iVar11) + 1 + iVar8;
        if (uVar6 < *(uint *)(this + 0x1b8)) {
          do {
            lVar4 = *(long *)(this + 0x1c0);
            if (*(char *)(lVar4 + (ulong)uVar6) != '\0') {
              return (int *)0x0;
            }
            piVar5 = *(int **)(this + 0x1d8);
            if ((*piVar5 == iVar9) && (piVar5[1] == iVar15)) {
              return piVar5;
            }
            uVar6 = (iVar8 - iVar11) + 1 + iVar9 + -1;
            uVar7 = (ulong)uVar6;
            uVar16 = (uint)uVar12;
            if (uVar16 <= uVar6) goto LAB_00101f5b;
            if (*(char *)(lVar4 + uVar7) == '\0') {
              uVar6 = ((((iVar15 - iVar18) - iVar19) + 1) * iVar10 - iVar11) + 1 + iVar9 + -1;
              uVar7 = (ulong)uVar6;
              if (uVar16 <= uVar6) goto LAB_00101f5b;
              if (*(char *)(lVar4 + uVar7) == '\0') goto LAB_00101e6f;
LAB_001021d2:
              uVar12 = (ulong)*(uint *)(this + 0x1c8);
              if (uVar14 < *(uint *)(this + 0x1c8)) goto LAB_001021e5;
              uVar7 = (ulong)uVar14;
              goto LAB_0010228b;
            }
LAB_00101e6f:
            uVar6 = ((iVar9 + 1) - iVar11) + 1 + iVar8;
            uVar7 = (ulong)uVar6;
            if (uVar16 <= uVar6) goto LAB_00101f5b;
            if (*(char *)(lVar4 + uVar7) == '\0') {
              uVar6 = ((iVar9 + 1) - iVar11) + 1 + iVar10 * (((iVar15 - iVar18) - iVar19) + 1);
              uVar7 = (ulong)uVar6;
              if (uVar16 <= uVar6) goto LAB_00101f5b;
              if (*(char *)(lVar4 + uVar7) != '\0') goto LAB_001021d2;
            }
            lVar4 = _forced_successor(this,iVar9,iVar15,1,0,true);
            if ((lVar4 != 0) || (lVar4 = _forced_successor(this,iVar9,iVar15,-1,0,true), lVar4 != 0)
               ) goto LAB_00102238;
            iVar19 = *(int *)(this + 0x180);
            iVar15 = iVar15 + iVar18;
            iVar11 = *(int *)(this + 0x17c);
            uVar12 = (ulong)*(uint *)(this + 0x1b8);
            uVar14 = iVar15 - iVar19;
            iVar10 = *(int *)(this + 0x184) + 2;
            iVar8 = (uVar14 + 1) * iVar10;
            uVar6 = (iVar9 - iVar11) + 1 + iVar8;
          } while (uVar6 < *(uint *)(this + 0x1b8));
        }
        uVar7 = (ulong)uVar6;
LAB_00101f5b:
        iVar9 = 0xae;
        goto LAB_00101f60;
      }
      iVar18 = 0;
    }
    bVar13 = true;
LAB_0010215e:
    piVar5 = (int *)_forced_successor(this,iVar11,local_3c,iVar19,iVar18,bVar13);
    return piVar5;
  }
  if ((iVar19 == 0) || (iVar10 = iVar9, iVar11 = iVar15, iVar18 == 0)) {
    bVar13 = false;
    local_3c = iVar15;
    iVar11 = iVar9;
    goto LAB_0010215e;
  }
  do {
    iVar15 = iVar11;
    iVar9 = iVar10;
    iVar8 = *(int *)(this + 0x180);
    iVar3 = *(int *)(this + 0x17c);
    uVar16 = *(uint *)(this + 0x1b8);
    uVar12 = (ulong)uVar16;
    uVar14 = iVar15 - iVar8;
    iVar2 = *(int *)(this + 0x184) + 2;
    iVar10 = (uVar14 + 1) * iVar2;
    uVar6 = ((iVar9 + iVar10) - iVar3) + 1;
    uVar7 = (ulong)uVar6;
    if (uVar16 <= uVar6) goto LAB_00101f5b;
    lVar4 = *(long *)(this + 0x1c0);
    if (*(char *)(lVar4 + uVar7) != '\0') {
      return (int *)0x0;
    }
    if (*(int *)(this + 0x1a8) != 0) {
      uVar6 = (iVar9 - iVar3) + 1 + ((local_3c - iVar8) + 1) * iVar2;
      uVar7 = (ulong)uVar6;
      if (uVar16 <= uVar6) goto LAB_00101f5b;
      if (*(char *)(lVar4 + uVar7) != '\0') {
        uVar6 = (iVar10 - iVar3) + 1 + (iVar9 - iVar19);
        uVar7 = (ulong)uVar6;
        if (uVar16 <= uVar6) goto LAB_00101f5b;
        if (*(char *)(lVar4 + uVar7) != '\0') {
          return (int *)0x0;
        }
      }
    }
    piVar5 = *(int **)(this + 0x1d8);
    if ((*piVar5 == iVar9) && (piVar5[1] == iVar15)) {
      return piVar5;
    }
    iVar11 = iVar15 + iVar18;
    uVar6 = ((iVar9 - iVar19) - iVar3) + 1 + ((iVar11 - iVar8) + 1) * iVar2;
    uVar7 = (ulong)uVar6;
    if (uVar16 <= uVar6) goto LAB_00101f5b;
    if (*(char *)(lVar4 + uVar7) == '\0') {
      uVar6 = ((iVar10 + (iVar9 - iVar19)) - iVar3) + 1;
      uVar7 = (ulong)uVar6;
      if (uVar16 <= uVar6) goto LAB_00101f5b;
      if (*(char *)(lVar4 + uVar7) == '\0') goto LAB_00101d1c;
LAB_001022b0:
      uVar12 = (ulong)*(uint *)(this + 0x1c8);
      if (uVar14 < *(uint *)(this + 0x1c8)) {
        puVar17 = (uint *)((ulong)uVar14 * 0x10 + *(long *)(this + 0x1d0));
        uVar12 = (ulong)*puVar17;
        uVar7 = (ulong)(uint)(iVar9 - iVar3);
        if (*puVar17 <= (uint)(iVar9 - iVar3)) goto LAB_0010228b;
        goto LAB_00102200;
      }
      uVar7 = (ulong)uVar14;
      goto LAB_0010228b;
    }
LAB_00101d1c:
    iVar10 = iVar9 + iVar19;
    iVar2 = iVar2 * ((local_3c - iVar8) + 1);
    uVar6 = ((iVar10 + iVar2) - iVar3) + 1;
    uVar7 = (ulong)uVar6;
    if (uVar16 <= uVar6) goto LAB_00101f5b;
    if (*(char *)(lVar4 + uVar7) == '\0') {
      uVar6 = ((iVar2 + iVar9) - iVar3) + 1;
      uVar7 = (ulong)uVar6;
      if (uVar16 <= uVar6) goto LAB_00101f5b;
      if (*(char *)(lVar4 + uVar7) != '\0') goto LAB_001022b0;
    }
    lVar4 = _forced_successor(this,iVar10,iVar15,iVar19,0,false);
    if (lVar4 != 0) break;
    lVar4 = _forced_successor(this,iVar9,iVar11,0,iVar18,false);
    local_3c = local_3c + iVar18;
  } while (lVar4 == 0);
LAB_00102238:
  uVar6 = *(uint *)(this + 0x1c8);
  uVar7 = (ulong)(uint)(iVar15 - *(int *)(this + 0x180));
  if ((uint)(iVar15 - *(int *)(this + 0x180)) < uVar6) {
    puVar17 = (uint *)(uVar7 * 0x10 + *(long *)(this + 0x1d0));
    uVar6 = *puVar17;
    uVar12 = (ulong)uVar6;
    uVar7 = (ulong)(uint)(iVar9 - *(int *)(this + 0x17c));
    if ((uint)(iVar9 - *(int *)(this + 0x17c)) < uVar6) {
      return (int *)(uVar7 * 0x40 + *(long *)(puVar17 + 2));
    }
  }
  else {
LAB_00102288:
    uVar12 = (ulong)uVar6;
  }
  goto LAB_0010228b;
LAB_001021e5:
  puVar17 = (uint *)((ulong)uVar14 * 0x10 + *(long *)(this + 0x1d0));
  uVar12 = (ulong)*puVar17;
  uVar7 = (ulong)(uint)(iVar9 - iVar11);
  if ((uint)(iVar9 - iVar11) < *puVar17) {
LAB_00102200:
    return (int *)(uVar7 * 0x40 + *(long *)(puVar17 + 2));
  }
LAB_0010228b:
  iVar9 = 0xb2;
LAB_00101f60:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",iVar9,uVar7,uVar12,"p_index","count","",
             false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* AStarGrid2D::_get_nbors(AStarGrid2D::Point*, LocalVector<AStarGrid2D::Point*, unsigned int,
   false, false>&) */

void __thiscall AStarGrid2D::_get_nbors(AStarGrid2D *this,Point *param_1,LocalVector *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  byte bVar8;
  byte bVar9;
  bool bVar10;
  byte bVar11;
  bool bVar12;
  byte bVar13;
  byte bVar14;
  int iVar15;
  void *pvVar16;
  uint uVar17;
  ulong uVar18;
  int *piVar19;
  uint *puVar20;
  int *piVar21;
  int *piVar22;
  uint uVar23;
  int *piVar24;
  int *piVar25;
  uint uVar26;
  int *piVar27;
  int *piVar28;
  int *local_50;
  ulong local_40;
  
  iVar15 = *(int *)param_1;
  iVar1 = *(int *)(this + 0x17c);
  iVar2 = *(int *)(param_1 + 4);
  iVar3 = *(int *)(this + 0x180);
  if (iVar1 < iVar15) {
    uVar23 = *(uint *)(this + 0x1c8);
    local_40 = (ulong)(uint)(iVar2 - iVar3);
    if ((uint)(iVar2 - iVar3) < uVar23) {
      puVar20 = (uint *)(local_40 * 0x10 + *(long *)(this + 0x1d0));
      uVar23 = (iVar15 + -1) - iVar1;
      uVar18 = (ulong)*puVar20;
      if (uVar23 < *puVar20) {
        iVar4 = *(int *)(this + 0x184);
        bVar7 = true;
        piVar24 = (int *)((ulong)uVar23 * 0x40 + *(long *)(puVar20 + 2));
        if (iVar15 + 1 < iVar4 + iVar1) goto LAB_001023dc;
        goto LAB_0010289e;
      }
      local_40 = (ulong)uVar23;
    }
    else {
LAB_00102960:
      uVar18 = (ulong)uVar23;
    }
    goto LAB_0010297e;
  }
  iVar4 = *(int *)(this + 0x184);
  if (iVar4 + iVar1 <= iVar15 + 1) {
    bVar7 = false;
    piVar24 = (int *)0x0;
LAB_0010289e:
    bVar10 = false;
    piVar25 = (int *)0x0;
    if (iVar2 <= iVar3) goto LAB_001028ae;
LAB_00102403:
    uVar23 = *(uint *)(this + 0x1c8);
    uVar17 = (iVar2 + -1) - iVar3;
    local_40 = (ulong)uVar17;
    if (uVar23 <= uVar17) goto LAB_00102aea;
    puVar20 = (uint *)(local_40 * 0x10 + *(long *)(this + 0x1d0));
    uVar17 = *puVar20;
    uVar26 = iVar15 - iVar1;
    if (uVar17 <= uVar26) {
      local_40 = (ulong)uVar26;
      uVar18 = (ulong)uVar17;
      goto LAB_0010297e;
    }
    lVar5 = *(long *)(puVar20 + 2);
    piVar27 = (int *)((ulong)uVar26 * 0x40 + lVar5);
    if (bVar7) {
      uVar26 = (iVar15 + -1) - iVar1;
      local_40 = (ulong)uVar26;
      local_50 = (int *)(local_40 * 0x40 + lVar5);
      if (uVar26 < uVar17) goto LAB_0010245a;
LAB_001029d0:
      uVar18 = (ulong)uVar17;
      goto LAB_0010297e;
    }
    local_50 = (int *)0x0;
LAB_0010245a:
    if (bVar10) {
      uVar26 = (iVar15 + 1) - iVar1;
      local_40 = (ulong)uVar26;
      piVar19 = (int *)(lVar5 + local_40 * 0x40);
      if (uVar17 <= uVar26) goto LAB_001029d0;
    }
    else {
      piVar19 = (int *)0x0;
    }
    if (iVar2 + 1 < *(int *)(this + 0x188) + iVar3) goto LAB_001028d6;
    piVar21 = (int *)0x0;
    piVar22 = (int *)0x0;
    piVar28 = (int *)0x0;
    goto LAB_001024aa;
  }
  uVar23 = *(uint *)(this + 0x1c8);
  local_40 = (ulong)(uint)(iVar2 - iVar3);
  if (uVar23 <= (uint)(iVar2 - iVar3)) goto LAB_00102960;
  puVar20 = (uint *)(local_40 * 0x10 + *(long *)(this + 0x1d0));
  bVar7 = false;
  piVar24 = (int *)0x0;
  uVar18 = (ulong)*puVar20;
LAB_001023dc:
  uVar23 = (iVar15 + 1) - iVar1;
  local_40 = (ulong)uVar23;
  if ((uint)uVar18 <= uVar23) goto LAB_0010297e;
  bVar10 = true;
  piVar25 = (int *)(local_40 * 0x40 + *(long *)(puVar20 + 2));
  if (iVar3 < iVar2) goto LAB_00102403;
LAB_001028ae:
  if (*(int *)(this + 0x188) + iVar3 <= iVar2 + 1) {
    piVar21 = (int *)0x0;
    piVar22 = (int *)0x0;
    piVar19 = (int *)0x0;
    piVar28 = (int *)0x0;
    local_50 = (int *)0x0;
    goto LAB_00102a44;
  }
  local_50 = (int *)0x0;
  uVar23 = *(uint *)(this + 0x1c8);
  piVar19 = (int *)0x0;
  piVar27 = (int *)0x0;
LAB_001028d6:
  uVar17 = (iVar2 + 1) - iVar3;
  if (uVar17 < uVar23) {
    puVar20 = (uint *)((ulong)uVar17 * 0x10 + *(long *)(this + 0x1d0));
    uVar23 = *puVar20;
    uVar18 = (ulong)uVar23;
    uVar17 = iVar15 - iVar1;
    if (uVar17 < uVar23) {
      lVar5 = *(long *)(puVar20 + 2);
      piVar28 = (int *)((ulong)uVar17 * 0x40 + lVar5);
      if (bVar7) {
        uVar17 = (iVar15 + -1) - iVar1;
        local_40 = (ulong)uVar17;
        piVar22 = (int *)(local_40 * 0x40 + lVar5);
        if (uVar23 <= uVar17) goto LAB_0010297e;
      }
      else {
        piVar22 = (int *)0x0;
      }
      if (bVar10) {
        uVar17 = (iVar15 + 1) - iVar1;
        local_40 = (ulong)uVar17;
        piVar21 = (int *)(lVar5 + local_40 * 0x40);
        if (uVar23 <= uVar17) goto LAB_0010297e;
      }
      else {
        piVar21 = (int *)0x0;
      }
LAB_001024aa:
      if (piVar27 == (int *)0x0) {
LAB_00102a44:
        bVar13 = 0;
joined_r0x00102512:
        if (piVar25 == (int *)0x0) {
LAB_00102a50:
          bVar11 = 0;
          if (piVar28 == (int *)0x0) {
LAB_00102a5c:
            bVar9 = 0;
            if (piVar24 == (int *)0x0) goto LAB_00102a68;
LAB_001025f7:
            uVar18 = (ulong)*(uint *)(this + 0x1b8);
            uVar23 = ((((piVar24[1] - *(int *)(this + 0x180)) + 1) * (*(int *)(this + 0x184) + 2) +
                      *piVar24) - *(int *)(this + 0x17c)) + 1;
            local_40 = (ulong)uVar23;
            if (*(uint *)(this + 0x1b8) <= uVar23) goto LAB_00102a90;
            if (*(char *)(*(long *)(this + 0x1c0) + local_40) != '\0') goto LAB_00102a68;
            uVar23 = *(uint *)param_2;
            pvVar16 = *(void **)(param_2 + 8);
            if (uVar23 == *(uint *)(param_2 + 4)) {
              uVar18 = (ulong)(uVar23 * 2);
              if (uVar23 * 2 == 0) {
                uVar18 = 1;
              }
              *(int *)(param_2 + 4) = (int)uVar18;
              pvVar16 = (void *)Memory::realloc_static(pvVar16,uVar18 * 8,false);
              *(void **)(param_2 + 8) = pvVar16;
              if (pvVar16 == (void *)0x0) goto LAB_00102cd0;
              uVar23 = *(uint *)param_2;
            }
            *(uint *)param_2 = uVar23 + 1;
            *(int **)((long)pvVar16 + (ulong)uVar23 * 8) = piVar24;
            iVar15 = *(int *)(this + 0x1a8);
            bVar8 = 1;
            bVar14 = bVar8;
            if (iVar15 != 2) goto LAB_0010266e;
LAB_00102a7a:
            bVar12 = (bool)(bVar13 | bVar11);
            bVar10 = (bool)(bVar11 | bVar9);
            bVar7 = (bool)(bVar13 | bVar8);
            bVar8 = bVar8 | bVar9;
          }
          else {
LAB_00102588:
            uVar18 = (ulong)*(uint *)(this + 0x1b8);
            uVar23 = ((((piVar28[1] - *(int *)(this + 0x180)) + 1) * (*(int *)(this + 0x184) + 2) +
                      *piVar28) - *(int *)(this + 0x17c)) + 1;
            local_40 = (ulong)uVar23;
            if (*(uint *)(this + 0x1b8) <= uVar23) goto LAB_00102a90;
            if (*(char *)(*(long *)(this + 0x1c0) + local_40) != '\0') goto LAB_00102a5c;
            uVar23 = *(uint *)param_2;
            pvVar16 = *(void **)(param_2 + 8);
            if (uVar23 == *(uint *)(param_2 + 4)) {
              uVar18 = (ulong)(uVar23 * 2);
              if (uVar23 * 2 == 0) {
                uVar18 = 1;
              }
              *(int *)(param_2 + 4) = (int)uVar18;
              pvVar16 = (void *)Memory::realloc_static(pvVar16,uVar18 * 8,false);
              *(void **)(param_2 + 8) = pvVar16;
              if (pvVar16 == (void *)0x0) goto LAB_00102cd0;
              uVar23 = *(uint *)param_2;
            }
            *(uint *)param_2 = uVar23 + 1;
            *(int **)((long)pvVar16 + (ulong)uVar23 * 8) = piVar28;
            bVar9 = 1;
            if (piVar24 != (int *)0x0) goto LAB_001025f7;
LAB_00102a68:
            iVar15 = *(int *)(this + 0x1a8);
            bVar14 = 0;
            bVar8 = 0;
            if (iVar15 == 2) goto LAB_00102a7a;
LAB_0010266e:
            if (iVar15 == 3) {
              bVar12 = (bool)(bVar13 & bVar11);
              bVar10 = (bool)(bVar11 & bVar9);
              bVar7 = (bool)(bVar13 & bVar14);
              bVar8 = bVar14 & bVar9;
            }
            else {
              if (iVar15 != 0) {
                return;
              }
              bVar8 = 1;
              bVar10 = true;
              bVar12 = true;
              bVar7 = true;
            }
          }
          if ((local_50 != (int *)0x0) && (bVar7)) {
            uVar18 = (ulong)*(uint *)(this + 0x1b8);
            uVar23 = ((((local_50[1] - *(int *)(this + 0x180)) + 1) * (*(int *)(this + 0x184) + 2) +
                      *local_50) - *(int *)(this + 0x17c)) + 1;
            local_40 = (ulong)uVar23;
            if (*(uint *)(this + 0x1b8) <= uVar23) goto LAB_00102a90;
            if (*(char *)(*(long *)(this + 0x1c0) + local_40) == '\0') {
              uVar23 = *(uint *)param_2;
              pvVar16 = *(void **)(param_2 + 8);
              if (uVar23 == *(uint *)(param_2 + 4)) {
                uVar18 = (ulong)(uVar23 * 2);
                if (uVar23 * 2 == 0) {
                  uVar18 = 1;
                }
                *(int *)(param_2 + 4) = (int)uVar18;
                pvVar16 = (void *)Memory::realloc_static(pvVar16,uVar18 * 8,false);
                *(void **)(param_2 + 8) = pvVar16;
                if (pvVar16 == (void *)0x0) goto LAB_00102cd0;
                uVar23 = *(uint *)param_2;
              }
              *(uint *)param_2 = uVar23 + 1;
              *(int **)((long)pvVar16 + (ulong)uVar23 * 8) = local_50;
            }
          }
          if ((piVar19 != (int *)0x0) && (bVar12)) {
            uVar18 = (ulong)*(uint *)(this + 0x1b8);
            uVar23 = ((((piVar19[1] - *(int *)(this + 0x180)) + 1) * (*(int *)(this + 0x184) + 2) +
                      *piVar19) - *(int *)(this + 0x17c)) + 1;
            local_40 = (ulong)uVar23;
            if (*(uint *)(this + 0x1b8) <= uVar23) goto LAB_00102a90;
            if (*(char *)(*(long *)(this + 0x1c0) + local_40) == '\0') {
              uVar23 = *(uint *)param_2;
              pvVar16 = *(void **)(param_2 + 8);
              if (uVar23 == *(uint *)(param_2 + 4)) {
                uVar18 = (ulong)(uVar23 * 2);
                if (uVar23 * 2 == 0) {
                  uVar18 = 1;
                }
                *(int *)(param_2 + 4) = (int)uVar18;
                pvVar16 = (void *)Memory::realloc_static(pvVar16,uVar18 * 8,false);
                *(void **)(param_2 + 8) = pvVar16;
                if (pvVar16 == (void *)0x0) goto LAB_00102cd0;
                uVar23 = *(uint *)param_2;
              }
              *(uint *)param_2 = uVar23 + 1;
              *(int **)((long)pvVar16 + (ulong)uVar23 * 8) = piVar19;
            }
          }
          if ((piVar21 == (int *)0x0) || (!bVar10)) {
LAB_001027cd:
            if (!(bool)(bVar8 & piVar22 != (int *)0x0)) {
              return;
            }
            uVar17 = *(uint *)(this + 0x1b8);
            uVar23 = ((((piVar22[1] - *(int *)(this + 0x180)) + 1) * (*(int *)(this + 0x184) + 2) +
                      *piVar22) - *(int *)(this + 0x17c)) + 1;
            local_40 = (ulong)uVar23;
            if (uVar23 < uVar17) {
              if (*(char *)(*(long *)(this + 0x1c0) + local_40) != '\0') {
                return;
              }
              uVar23 = *(uint *)param_2;
              pvVar16 = *(void **)(param_2 + 8);
              if (uVar23 == *(uint *)(param_2 + 4)) {
                uVar18 = (ulong)(uVar23 * 2);
                if (uVar23 * 2 == 0) {
                  uVar18 = 1;
                }
                *(int *)(param_2 + 4) = (int)uVar18;
                pvVar16 = (void *)Memory::realloc_static(pvVar16,uVar18 * 8,false);
                *(void **)(param_2 + 8) = pvVar16;
                if (pvVar16 == (void *)0x0) {
LAB_00102cd0:
                  _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                                   "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
                  _err_flush_stdout();
                    /* WARNING: Does not return */
                  pcVar6 = (code *)invalidInstructionException();
                  (*pcVar6)();
                }
                uVar23 = *(uint *)param_2;
              }
              *(uint *)param_2 = uVar23 + 1;
              *(int **)((long)pvVar16 + (ulong)uVar23 * 8) = piVar22;
              return;
            }
          }
          else {
            uVar17 = *(uint *)(this + 0x1b8);
            uVar23 = ((((piVar21[1] - *(int *)(this + 0x180)) + 1) * (*(int *)(this + 0x184) + 2) +
                      *piVar21) - *(int *)(this + 0x17c)) + 1;
            local_40 = (ulong)uVar23;
            if (uVar23 < uVar17) {
              if (*(char *)(*(long *)(this + 0x1c0) + local_40) == '\0') {
                uVar23 = *(uint *)param_2;
                pvVar16 = *(void **)(param_2 + 8);
                if (uVar23 == *(uint *)(param_2 + 4)) {
                  uVar18 = (ulong)(uVar23 * 2);
                  if (uVar23 * 2 == 0) {
                    uVar18 = 1;
                  }
                  *(int *)(param_2 + 4) = (int)uVar18;
                  pvVar16 = (void *)Memory::realloc_static(pvVar16,uVar18 * 8,false);
                  *(void **)(param_2 + 8) = pvVar16;
                  if (pvVar16 == (void *)0x0) goto LAB_00102cd0;
                  uVar23 = *(uint *)param_2;
                }
                *(uint *)param_2 = uVar23 + 1;
                *(int **)((long)pvVar16 + (ulong)uVar23 * 8) = piVar21;
              }
              goto LAB_001027cd;
            }
          }
          uVar18 = (ulong)uVar17;
          iVar15 = 0xae;
          goto LAB_00102983;
        }
        uVar18 = (ulong)*(uint *)(this + 0x1b8);
        uVar23 = ((((piVar25[1] - *(int *)(this + 0x180)) + 1) * (*(int *)(this + 0x184) + 2) +
                  *piVar25) - *(int *)(this + 0x17c)) + 1;
        local_40 = (ulong)uVar23;
        if (uVar23 < *(uint *)(this + 0x1b8)) {
          if (*(char *)(*(long *)(this + 0x1c0) + local_40) != '\0') goto LAB_00102a50;
          uVar23 = *(uint *)param_2;
          pvVar16 = *(void **)(param_2 + 8);
          if (uVar23 == *(uint *)(param_2 + 4)) {
            uVar18 = (ulong)(uVar23 * 2);
            if (uVar23 * 2 == 0) {
              uVar18 = 1;
            }
            *(int *)(param_2 + 4) = (int)uVar18;
            pvVar16 = (void *)Memory::realloc_static(pvVar16,uVar18 * 8,false);
            *(void **)(param_2 + 8) = pvVar16;
            if (pvVar16 == (void *)0x0) goto LAB_00102cd0;
            uVar23 = *(uint *)param_2;
          }
          *(uint *)param_2 = uVar23 + 1;
          *(int **)((long)pvVar16 + (ulong)uVar23 * 8) = piVar25;
          bVar11 = 1;
          if (piVar28 != (int *)0x0) goto LAB_00102588;
          goto LAB_00102a5c;
        }
      }
      else {
        uVar18 = (ulong)*(uint *)(this + 0x1b8);
        uVar23 = ((((piVar27[1] - iVar3) + 1) * (iVar4 + 2) + *piVar27) - iVar1) + 1;
        local_40 = (ulong)uVar23;
        if (uVar23 < *(uint *)(this + 0x1b8)) {
          if (*(char *)(*(long *)(this + 0x1c0) + local_40) != '\0') goto LAB_00102a44;
          uVar23 = *(uint *)param_2;
          pvVar16 = *(void **)(param_2 + 8);
          if (uVar23 == *(uint *)(param_2 + 4)) {
            uVar18 = (ulong)(uVar23 * 2);
            if (uVar23 * 2 == 0) {
              uVar18 = 1;
            }
            *(int *)(param_2 + 4) = (int)uVar18;
            pvVar16 = (void *)Memory::realloc_static(pvVar16,uVar18 * 8,false);
            *(void **)(param_2 + 8) = pvVar16;
            if (pvVar16 == (void *)0x0) goto LAB_00102cd0;
            uVar23 = *(uint *)param_2;
          }
          *(uint *)param_2 = uVar23 + 1;
          *(int **)((long)pvVar16 + (ulong)uVar23 * 8) = piVar27;
          bVar13 = 1;
          goto joined_r0x00102512;
        }
      }
LAB_00102a90:
      iVar15 = 0xae;
      goto LAB_00102983;
    }
    local_40 = (ulong)uVar17;
  }
  else {
    local_40 = (ulong)uVar17;
LAB_00102aea:
    uVar18 = (ulong)uVar23;
  }
LAB_0010297e:
  iVar15 = 0xb2;
LAB_00102983:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",iVar15,local_40,uVar18,"p_index","count"
             ,"",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}



/* AStarGrid2D::_solve(AStarGrid2D::Point*, AStarGrid2D::Point*, bool) */

byte __thiscall AStarGrid2D::_solve(AStarGrid2D *this,Point *param_1,Point *param_2,bool param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  Point *pPVar5;
  long lVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 *puVar9;
  byte bVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  Point *pPVar15;
  long *plVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *puVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long in_FS_OFFSET;
  bool bVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float local_70;
  uint local_60;
  ulong local_58;
  undefined8 *local_50;
  long local_40;
  
  uVar17 = *(uint *)(this + 0x1b8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = *(int *)(param_2 + 4);
  *(undefined8 *)(this + 0x1e0) = 0;
  *(long *)(this + 0x1e8) = *(long *)(this + 0x1e8) + 1;
  uVar21 = ((((iVar3 - *(int *)(this + 0x180)) + 1) * (*(int *)(this + 0x184) + 2) + *(int *)param_2
            ) - *(int *)(this + 0x17c)) + 1;
  uVar14 = (ulong)uVar21;
  if (uVar17 <= uVar21) {
LAB_0010345e:
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xae,uVar14,(ulong)uVar17,"p_index",
               "count","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar8 = (code *)invalidInstructionException();
    (*pcVar8)();
  }
  bVar10 = *(byte *)(*(long *)(this + 0x1c0) + uVar14) ^ 1 | param_3;
  if (bVar10 != 0) {
    lVar4 = *(long *)this;
    *(undefined4 *)(param_1 + 0x20) = 0;
    uVar26 = (**(code **)(lVar4 + 0x150))(this,param_1,param_2);
    lVar4 = *(long *)this;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x24) = uVar26;
    uVar26 = (**(code **)(lVar4 + 0x150))(this,param_1,param_2);
    *(undefined4 *)(param_1 + 0x3c) = uVar26;
    plVar11 = (long *)Memory::realloc_static((void *)0x0,8,false);
    if (plVar11 == (long *)0x0) {
LAB_001034e2:
      _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    *plVar11 = (long)param_1;
    uVar21 = 1;
    local_60 = 1;
    *(Point **)(this + 0x1d8) = param_2;
    while( true ) {
      lVar4 = *(long *)(this + 0x1e0);
      pPVar5 = (Point *)*plVar11;
      if (((lVar4 == 0) ||
          (fVar29 = *(float *)(lVar4 + 0x3c), bVar25 = *(float *)(pPVar5 + 0x3c) <= fVar29,
          bVar25 && fVar29 != *(float *)(pPVar5 + 0x3c))) ||
         ((bVar25 &&
          (*(float *)(pPVar5 + 0x38) <= *(float *)(lVar4 + 0x38) &&
           *(float *)(lVar4 + 0x38) != *(float *)(pPVar5 + 0x38))))) {
        *(Point **)(this + 0x1e0) = pPVar5;
      }
      if (param_2 == pPVar5) break;
      uVar14 = (ulong)uVar21;
      lVar4 = plVar11[uVar14 - 1];
      lVar22 = uVar14 - 1;
      plVar11[lVar22] = *plVar11;
      if (lVar22 < 3) {
        plVar16 = plVar11;
        if (lVar22 == 2) {
          lVar22 = 0;
          lVar19 = 1;
          *plVar11 = plVar11[1];
          goto LAB_0010301e;
        }
      }
      else {
        lVar12 = 2;
        lVar24 = 0;
        do {
          lVar19 = lVar12 + -1;
          plVar16 = plVar11 + lVar19;
          lVar23 = *plVar16;
          lVar6 = plVar11[lVar12];
          lVar13 = lVar12;
          if ((*(float *)(lVar6 + 0x24) <= *(float *)(lVar23 + 0x24)) &&
             ((*(float *)(lVar6 + 0x24) < *(float *)(lVar23 + 0x24) ||
              (*(float *)(lVar23 + 0x20) < *(float *)(lVar6 + 0x20) ||
               *(float *)(lVar23 + 0x20) == *(float *)(lVar6 + 0x20))))) {
            lVar13 = lVar12 + 1;
            lVar19 = lVar12;
            plVar16 = plVar11 + lVar12;
            lVar23 = lVar6;
          }
          lVar12 = lVar13 * 2;
          plVar11[lVar24] = lVar23;
          lVar24 = lVar19;
        } while (lVar22 != lVar12 && SBORROW8(lVar22,lVar12) == lVar22 + lVar13 * -2 < 0);
        if (lVar22 == lVar12) {
          lVar19 = uVar14 - 2;
          lVar22 = (long)(uVar14 - 3) >> 1;
          *plVar16 = plVar11[lVar19];
        }
        else {
          lVar22 = (lVar19 + -1) / 2;
          if (lVar19 < 1) goto LAB_00103074;
        }
LAB_0010301e:
        fVar29 = *(float *)(lVar4 + 0x24);
        do {
          lVar12 = plVar11[lVar22];
          if ((*(float *)(lVar12 + 0x24) <= fVar29) &&
             ((*(float *)(lVar12 + 0x24) < fVar29 ||
              (*(float *)(lVar4 + 0x20) < *(float *)(lVar12 + 0x20) ||
               *(float *)(lVar4 + 0x20) == *(float *)(lVar12 + 0x20))))) {
            plVar16 = plVar11 + lVar19;
            break;
          }
          plVar11[lVar19] = lVar12;
          bVar25 = lVar22 != 0;
          lVar19 = lVar22;
          plVar16 = plVar11 + lVar22;
          lVar22 = (lVar22 + -1) / 2;
        } while (bVar25);
      }
LAB_00103074:
      uVar7 = *(undefined8 *)(this + 0x1e8);
      *plVar16 = lVar4;
      uVar21 = uVar21 - 1;
      local_58 = 0;
      *(undefined8 *)(pPVar5 + 0x30) = uVar7;
      local_50 = (undefined8 *)0x0;
      _get_nbors(this,pPVar5,(LocalVector *)&local_58);
      puVar9 = local_50;
      puVar2 = local_50 + (local_58 & 0xffffffff);
      puVar20 = local_50;
joined_r0x001030b7:
      if (puVar2 != puVar20) {
LAB_001030e0:
        pPVar15 = (Point *)*puVar20;
        if (this[0x1a4] == (AStarGrid2D)0x0) {
          uVar17 = *(uint *)(this + 0x1b8);
          uVar1 = ((((*(int *)(pPVar15 + 4) - *(int *)(this + 0x180)) + 1) *
                    (*(int *)(this + 0x184) + 2) + *(int *)pPVar15) - *(int *)(this + 0x17c)) + 1;
          uVar14 = (ulong)uVar1;
          if (uVar17 <= uVar1) goto LAB_0010345e;
          if ((*(char *)(*(long *)(this + 0x1c0) + uVar14) != '\0') ||
             (*(long *)(pPVar15 + 0x30) == *(long *)(this + 0x1e8))) goto LAB_00103276;
          local_70 = *(float *)(pPVar15 + 0x10);
        }
        else {
          pPVar15 = (Point *)_jump(this,pPVar5,pPVar15);
          if ((pPVar15 == (Point *)0x0) ||
             (local_70 = 1.0, *(long *)(pPVar15 + 0x30) == *(long *)(this + 0x1e8)))
          goto LAB_00103276;
        }
        fVar29 = *(float *)(pPVar5 + 0x20);
        fVar27 = (float)(**(code **)(*(long *)this + 0x158))(this,pPVar5,pPVar15);
        fVar29 = local_70 * fVar27 + fVar29;
        if (*(long *)(pPVar15 + 0x28) != *(long *)(this + 0x1e8)) {
          *(long *)(pPVar15 + 0x28) = *(long *)(this + 0x1e8);
          if (uVar21 == local_60) {
            local_60 = 1;
            if (uVar21 * 2 != 0) {
              local_60 = uVar21 * 2;
            }
            plVar11 = (long *)Memory::realloc_static(plVar11,(ulong)local_60 << 3,false);
            if (plVar11 == (long *)0x0) goto LAB_001034e2;
          }
          lVar4 = *(long *)this;
          uVar14 = (ulong)uVar21;
          plVar16 = plVar11 + uVar14;
          *plVar16 = (long)pPVar15;
          *(float *)(pPVar15 + 0x20) = fVar29;
          *(Point **)(pPVar15 + 0x18) = pPVar5;
          fVar28 = (float)(**(code **)(lVar4 + 0x150))(this,pPVar15,param_2);
          fVar27 = *(float *)(pPVar15 + 0x20);
          fVar28 = fVar28 + fVar29;
          *(float *)(pPVar15 + 0x24) = fVar28;
          *(ulong *)(pPVar15 + 0x38) = CONCAT44(fVar28 - fVar27,fVar29);
          if (uVar14 == 0) goto LAB_0010326d;
          goto LAB_00103222;
        }
        if (fVar29 < *(float *)(pPVar15 + 0x20)) {
          lVar4 = *(long *)this;
          *(Point **)(pPVar15 + 0x18) = pPVar5;
          *(float *)(pPVar15 + 0x20) = fVar29;
          fVar28 = (float)(**(code **)(lVar4 + 0x150))(this,pPVar15,param_2);
          fVar27 = *(float *)(pPVar15 + 0x20);
          uVar14 = 0;
          fVar28 = fVar28 + fVar29;
          *(float *)(pPVar15 + 0x24) = fVar28;
          *(ulong *)(pPVar15 + 0x38) = CONCAT44(fVar28 - fVar27,fVar29);
          plVar16 = plVar11;
          if (uVar21 != 0) {
            do {
              if ((Point *)*plVar16 == pPVar15) {
                if (uVar14 == 0) goto LAB_00103415;
                goto LAB_001033c6;
              }
              uVar17 = (int)uVar14 + 1;
              uVar14 = (ulong)uVar17;
              plVar16 = plVar16 + 1;
            } while (uVar21 != uVar17);
          }
          plVar11[-1] = (long)pPVar15;
          goto LAB_00103418;
        }
        goto LAB_00103276;
      }
LAB_00103296:
      if (puVar9 != (undefined8 *)0x0) {
        Memory::free_static(puVar9,false);
      }
      if (uVar21 == 0) {
        bVar10 = 0;
        if (plVar11 == (long *)0x0) goto LAB_001032c0;
        break;
      }
    }
    Memory::free_static(plVar11,false);
  }
LAB_001032c0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
  while (plVar11[uVar14] = lVar4, uVar14 = uVar18, uVar18 != 0) {
LAB_001033c6:
    uVar18 = (long)(uVar14 - 1) / 2;
    plVar16 = plVar11 + uVar18;
    lVar4 = *plVar16;
    if ((*(float *)(lVar4 + 0x24) <= fVar28) &&
       ((*(float *)(lVar4 + 0x24) < fVar28 ||
        (fVar27 < *(float *)(lVar4 + 0x20) || fVar27 == *(float *)(lVar4 + 0x20))))) {
      plVar16 = plVar11 + uVar14;
      break;
    }
  }
LAB_00103415:
  *plVar16 = (long)pPVar15;
LAB_00103418:
  puVar20 = puVar20 + 1;
  if (puVar2 == puVar20) goto LAB_00103296;
  goto LAB_001030e0;
  while (plVar11[uVar14] = lVar4, uVar14 = uVar18, uVar18 != 0) {
LAB_00103222:
    uVar18 = (long)(uVar14 - 1) / 2;
    plVar16 = plVar11 + uVar18;
    lVar4 = *plVar16;
    if ((*(float *)(lVar4 + 0x24) <= fVar28) &&
       ((*(float *)(lVar4 + 0x24) < fVar28 ||
        (fVar27 < *(float *)(lVar4 + 0x20) || fVar27 == *(float *)(lVar4 + 0x20))))) {
      plVar16 = plVar11 + uVar14;
      break;
    }
  }
LAB_0010326d:
  *plVar16 = (long)pPVar15;
  uVar21 = uVar21 + 1;
LAB_00103276:
  puVar20 = puVar20 + 1;
  goto joined_r0x001030b7;
}



/* AStarGrid2D::set_point_solid(Vector2i const&, bool) */

void __thiscall AStarGrid2D::set_point_solid(AStarGrid2D *this,Vector2i *param_1,bool param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  long in_FS_OFFSET;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x19c] == (AStarGrid2D)0x0) {
    if ((*(int *)(this + 0x184) < 0) || (*(int *)(this + 0x188) < 0)) {
      _err_print_error("has_point","./core/math/rect2i.h",0x7f,
                       "Rect2i size is negative, this is not supported. Use Rect2i.abs() to get a Rect2i with a positive size."
                       ,0,0);
    }
    iVar1 = *(int *)param_1;
    iVar2 = *(int *)(this + 0x17c);
    if (iVar2 <= iVar1) {
      iVar3 = *(int *)(param_1 + 4);
      iVar4 = *(int *)(this + 0x180);
      if (((iVar4 <= iVar3) && (iVar1 < iVar2 + *(int *)(this + 0x184))) &&
         (iVar3 < *(int *)(this + 0x188) + iVar4)) {
        uVar6 = (iVar1 - iVar2) + 1 + ((iVar3 - iVar4) + 1) * (*(int *)(this + 0x184) + 2);
        if (*(uint *)(this + 0x1b8) <= uVar6) {
          _err_print_index_error
                    ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)uVar6,
                     (ulong)*(uint *)(this + 0x1b8),"p_index","count","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        *(bool *)(*(long *)(this + 0x1c0) + (ulong)uVar6) = param_2;
        goto LAB_00103644;
      }
    }
    local_50 = 0;
    local_40 = 0x3a;
    local_48 = "Can\'t set if point is disabled. Point %s out of bounds %s.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<Vector2i,Rect2i>
              ((CowData<char32_t> *)&local_48,(StrRange *)&local_50,*(undefined8 *)param_1,
               *(undefined8 *)(this + 0x17c),*(undefined8 *)(this + 0x184));
    _err_print_error("set_point_solid","core/math/a_star_grid_2d.cpp",0xdc,
                     "Condition \"!is_in_boundsv(p_id)\" is true.",(CowData<char32_t> *)&local_48,0,
                     0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  else {
    _err_print_error("set_point_solid","core/math/a_star_grid_2d.cpp",0xdb,
                     "Condition \"dirty\" is true.",
                     "Grid is not initialized. Call the update method.",0,0);
  }
LAB_00103644:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AStarGrid2D::is_point_solid(Vector2i const&) const */

undefined1 __thiscall AStarGrid2D::is_point_solid(AStarGrid2D *this,Vector2i *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined1 uVar7;
  long in_FS_OFFSET;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x19c] == (AStarGrid2D)0x0) {
    if ((*(int *)(this + 0x184) < 0) || (*(int *)(this + 0x188) < 0)) {
      _err_print_error("has_point","./core/math/rect2i.h",0x7f,
                       "Rect2i size is negative, this is not supported. Use Rect2i.abs() to get a Rect2i with a positive size."
                       ,0,0);
    }
    iVar2 = *(int *)param_1;
    iVar3 = *(int *)(this + 0x17c);
    if (iVar3 <= iVar2) {
      iVar4 = *(int *)(param_1 + 4);
      iVar5 = *(int *)(this + 0x180);
      if (((iVar5 <= iVar4) && (iVar2 < iVar3 + *(int *)(this + 0x184))) &&
         (iVar4 < *(int *)(this + 0x188) + iVar5)) {
        uVar1 = (iVar2 - iVar3) + 1 + ((iVar4 - iVar5) + 1) * (*(int *)(this + 0x184) + 2);
        if (*(uint *)(this + 0x1b8) <= uVar1) {
          _err_print_index_error
                    ("operator[]","./core/templates/local_vector.h",0xae,(ulong)uVar1,
                     (ulong)*(uint *)(this + 0x1b8),"p_index","count","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        uVar7 = *(undefined1 *)(*(long *)(this + 0x1c0) + (ulong)uVar1);
        goto LAB_00103871;
      }
    }
    local_50 = 0;
    local_40 = 0x3a;
    local_48 = "Can\'t get if point is disabled. Point %s out of bounds %s.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<Vector2i,Rect2i>
              ((CowData<char32_t> *)&local_48,(StrRange *)&local_50,*(undefined8 *)param_1,
               *(undefined8 *)(this + 0x17c),*(undefined8 *)(this + 0x184));
    _err_print_error("is_point_solid","core/math/a_star_grid_2d.cpp",0xe2,
                     "Condition \"!is_in_boundsv(p_id)\" is true. Returning: false",
                     (CowData<char32_t> *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    uVar7 = 0;
  }
  else {
    _err_print_error("is_point_solid","core/math/a_star_grid_2d.cpp",0xe1,
                     "Condition \"dirty\" is true. Returning: false",
                     "Grid is not initialized. Call the update method.",0,0);
    uVar7 = 0;
  }
LAB_00103871:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AStarGrid2D::get_point_weight_scale(Vector2i const&) const */

void __thiscall AStarGrid2D::get_point_weight_scale(AStarGrid2D *this,Vector2i *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  uint uVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x19c] == (AStarGrid2D)0x0) {
    if ((*(int *)(this + 0x184) < 0) || (*(int *)(this + 0x188) < 0)) {
      _err_print_error("has_point","./core/math/rect2i.h",0x7f,
                       "Rect2i size is negative, this is not supported. Use Rect2i.abs() to get a Rect2i with a positive size."
                       ,0,0);
    }
    iVar1 = *(int *)param_1;
    iVar2 = *(int *)(this + 0x17c);
    if (iVar2 <= iVar1) {
      iVar3 = *(int *)(param_1 + 4);
      iVar4 = *(int *)(this + 0x180);
      if (((iVar4 <= iVar3) && (iVar1 < *(int *)(this + 0x184) + iVar2)) &&
         (iVar3 < *(int *)(this + 0x188) + iVar4)) {
        uVar5 = *(uint *)(this + 0x1c8);
        uVar7 = iVar3 - iVar4;
        if (uVar7 < uVar5) {
          lVar8 = (long)(int)uVar7;
          uVar7 = iVar1 - iVar2;
          uVar5 = *(uint *)(lVar8 * 0x10 + *(long *)(this + 0x1d0));
          if (uVar7 < uVar5) goto LAB_00103aa0;
        }
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xae,(long)(int)uVar7,(ulong)uVar5
                   ,"p_index","count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
    }
    local_50 = 0;
    local_40 = 0x3a;
    local_48 = "Can\'t get point\'s weight scale. Point %s out of bounds %s.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<Vector2i,Rect2i>
              ((CowData<char32_t> *)&local_48,(StrRange *)&local_50,*(undefined8 *)param_1,
               *(undefined8 *)(this + 0x17c),*(undefined8 *)(this + 0x184));
    _err_print_error("get_point_weight_scale","core/math/a_star_grid_2d.cpp",0xef,
                     "Condition \"!is_in_boundsv(p_id)\" is true. Returning: 0",
                     (CowData<char32_t> *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  else {
    _err_print_error("get_point_weight_scale","core/math/a_star_grid_2d.cpp",0xee,
                     "Condition \"dirty\" is true. Returning: 0",
                     "Grid is not initialized. Call the update method.",0,0);
  }
LAB_00103aa0:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* AStarGrid2D::get_point_position(Vector2i const&) const */

undefined8 __thiscall AStarGrid2D::get_point_position(AStarGrid2D *this,Vector2i *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  uint uVar7;
  uint *puVar8;
  long lVar9;
  long in_FS_OFFSET;
  undefined8 uVar10;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x19c] == (AStarGrid2D)0x0) {
    if ((*(int *)(this + 0x184) < 0) || (*(int *)(this + 0x188) < 0)) {
      _err_print_error("has_point","./core/math/rect2i.h",0x7f,
                       "Rect2i size is negative, this is not supported. Use Rect2i.abs() to get a Rect2i with a positive size."
                       ,0,0);
    }
    iVar1 = *(int *)param_1;
    iVar2 = *(int *)(this + 0x17c);
    if (iVar2 <= iVar1) {
      iVar3 = *(int *)(param_1 + 4);
      iVar4 = *(int *)(this + 0x180);
      if (((iVar4 <= iVar3) && (iVar1 < *(int *)(this + 0x184) + iVar2)) &&
         (iVar3 < *(int *)(this + 0x188) + iVar4)) {
        uVar5 = *(uint *)(this + 0x1c8);
        uVar7 = iVar3 - iVar4;
        if (uVar7 < uVar5) {
          puVar8 = (uint *)((long)(int)uVar7 * 0x10 + *(long *)(this + 0x1d0));
          uVar5 = *puVar8;
          lVar9 = (long)(iVar1 - iVar2);
          if ((uint)(iVar1 - iVar2) < uVar5) {
            uVar10 = *(undefined8 *)(lVar9 * 0x40 + *(long *)(puVar8 + 2) + 8);
            goto LAB_00103ce0;
          }
        }
        else {
          lVar9 = (long)(int)uVar7;
        }
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xae,lVar9,(ulong)uVar5,"p_index",
                   "count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
    }
    local_50 = 0;
    local_40 = 0x36;
    local_48 = "Can\'t get point\'s position. Point %s out of bounds %s.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<Vector2i,Rect2i>
              ((CowData<char32_t> *)&local_48,(StrRange *)&local_50,*(undefined8 *)param_1,
               *(undefined8 *)(this + 0x17c),*(undefined8 *)(this + 0x184));
    _err_print_error("get_point_position","core/math/a_star_grid_2d.cpp",0x25a,
                     "Condition \"!is_in_boundsv(p_id)\" is true. Returning: Vector2()",
                     (CowData<char32_t> *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    uVar10 = 0;
  }
  else {
    _err_print_error("get_point_position","core/math/a_star_grid_2d.cpp",0x259,
                     "Condition \"dirty\" is true. Returning: Vector2()",
                     "Grid is not initialized. Call the update method.",0,0);
    uVar10 = 0;
  }
LAB_00103ce0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AStarGrid2D::set_point_weight_scale(Vector2i const&, float) */

void __thiscall
AStarGrid2D::set_point_weight_scale(AStarGrid2D *this,Vector2i *param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  uint uVar7;
  uint *puVar8;
  long lVar9;
  long in_FS_OFFSET;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x19c] != (AStarGrid2D)0x0) {
    _err_print_error("set_point_weight_scale","core/math/a_star_grid_2d.cpp",0xe7,
                     "Condition \"dirty\" is true.",
                     "Grid is not initialized. Call the update method.",0,0);
    goto LAB_00103f33;
  }
  if ((*(int *)(this + 0x184) < 0) || (*(int *)(this + 0x188) < 0)) {
    _err_print_error("has_point","./core/math/rect2i.h",0x7f,
                     "Rect2i size is negative, this is not supported. Use Rect2i.abs() to get a Rect2i with a positive size."
                     ,0,0);
  }
  iVar1 = *(int *)param_1;
  iVar2 = *(int *)(this + 0x17c);
  if (iVar2 <= iVar1) {
    iVar3 = *(int *)(param_1 + 4);
    iVar4 = *(int *)(this + 0x180);
    if (((iVar4 <= iVar3) && (iVar1 < *(int *)(this + 0x184) + iVar2)) &&
       (iVar3 < *(int *)(this + 0x188) + iVar4)) {
      if (0.0 <= param_2) {
        uVar5 = *(uint *)(this + 0x1c8);
        uVar7 = iVar3 - iVar4;
        if (uVar7 < uVar5) {
          puVar8 = (uint *)((long)(int)uVar7 * 0x10 + *(long *)(this + 0x1d0));
          uVar5 = *puVar8;
          lVar9 = (long)(iVar1 - iVar2);
          if ((uint)(iVar1 - iVar2) < uVar5) {
            *(float *)(lVar9 * 0x40 + *(long *)(puVar8 + 2) + 0x10) = param_2;
            goto LAB_00103f33;
          }
        }
        else {
          lVar9 = (long)(int)uVar7;
        }
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xb2,lVar9,(ulong)uVar5,"p_index",
                   "count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      local_50 = 0;
      local_48 = "Can\'t set point\'s weight scale less than 0.0: %f.";
      local_40 = 0x31;
      String::parse_latin1((StrRange *)&local_50);
      vformat<float>((CowData<char32_t> *)&local_48,param_2);
      _err_print_error("set_point_weight_scale","core/math/a_star_grid_2d.cpp",0xe9,
                       "Condition \"p_weight_scale < 0.0\" is true.",(CowData<char32_t> *)&local_48,
                       0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      goto LAB_00103f33;
    }
  }
  local_50 = 0;
  local_40 = 0x3a;
  local_48 = "Can\'t set point\'s weight scale. Point %s out of bounds %s.";
  String::parse_latin1((StrRange *)&local_50);
  vformat<Vector2i,Rect2i>
            ((CowData<char32_t> *)&local_48,(StrRange *)&local_50,*(undefined8 *)param_1,
             *(undefined8 *)(this + 0x17c),*(undefined8 *)(this + 0x184));
  _err_print_error("set_point_weight_scale","core/math/a_star_grid_2d.cpp",0xe8,
                   "Condition \"!is_in_boundsv(p_id)\" is true.",(CowData<char32_t> *)&local_48,0,0)
  ;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_00103f33:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AStarGrid2D::fill_weight_scale_region(Rect2i const&, float) */

void __thiscall
AStarGrid2D::fill_weight_scale_region(AStarGrid2D *this,Rect2i *param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int extraout_var;
  ulong uVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  long in_FS_OFFSET;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x19c] != (AStarGrid2D)0x0) {
    _err_print_error("fill_weight_scale_region","core/math/a_star_grid_2d.cpp",0x102,
                     "Condition \"dirty\" is true.",
                     "Grid is not initialized. Call the update method.",0,0);
    goto LAB_00104348;
  }
  if (param_2 < 0.0) {
    local_70 = 0;
    local_68 = "Can\'t set point\'s weight scale less than 0.0: %f.";
    local_60 = 0x31;
    String::parse_latin1((StrRange *)&local_70);
    vformat<float>((CowData<char32_t> *)&local_68,param_2);
    _err_print_error("fill_weight_scale_region","core/math/a_star_grid_2d.cpp",0x103,
                     "Condition \"p_weight_scale < 0.0\" is true.",(CowData<char32_t> *)&local_68,0,
                     0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    goto LAB_00104348;
  }
  local_48 = *(undefined8 *)(this + 0x17c);
  uVar7 = *(undefined8 *)(this + 0x184);
  if ((*(int *)(param_1 + 8) < 0) || (*(int *)(param_1 + 0xc) < 0)) {
LAB_001043e0:
    uStack_40 = uVar7;
    _err_print_error("intersects","./core/math/rect2i.h",0x38,
                     "Rect2i size is negative, this is not supported. Use Rect2i.abs() to get a Rect2i with a positive size."
                     ,0,0);
    uVar7 = uStack_40;
  }
  else {
    uStack_40._0_4_ = (uint)uVar7;
    uStack_40._4_4_ = (uint)((ulong)uVar7 >> 0x20);
    if ((int)((uint)uStack_40 | uStack_40._4_4_) < 0) goto LAB_001043e0;
  }
  uStack_40 = uVar7;
  iVar11 = *(int *)param_1;
  iVar4 = (uint)uStack_40 + (int)local_48;
  if ((iVar11 < iVar4) && ((int)local_48 < *(int *)(param_1 + 8) + iVar11)) {
    iVar4 = *(int *)(param_1 + 4);
    if (((int)(uStack_40._4_4_ + local_48._4_4_) <= iVar4) ||
       (*(int *)(param_1 + 0xc) + iVar4 <= local_48._4_4_)) goto LAB_00104290;
    if (iVar4 < *(int *)(this + 0x180)) {
      iVar4 = *(int *)(this + 0x180);
    }
    iVar5 = *(int *)(this + 0x17c);
    if (*(int *)(this + 0x17c) < iVar11) {
      iVar5 = iVar11;
    }
    local_48 = CONCAT44(iVar4,iVar5);
    uVar6 = Vector2i::operator+((Vector2i *)(this + 0x17c),(Vector2i *)(this + 0x184));
    uVar7 = Vector2i::operator+((Vector2i *)param_1,(Vector2i *)(param_1 + 8));
    local_4c = (int)((ulong)uVar7 >> 0x20);
    iVar11 = (int)((ulong)uVar6 >> 0x20);
    if (iVar11 < local_4c) {
      local_4c = iVar11;
    }
    if ((int)uVar6 < (int)uVar7) {
      uVar7 = uVar6;
    }
    local_50 = (undefined4)uVar7;
    uStack_40 = Vector2i::operator-((Vector2i *)&local_50,(Vector2i *)&local_48);
  }
  else {
LAB_00104290:
    local_48 = 0;
    uStack_40 = 0;
  }
  iVar4 = Vector2i::operator+((Vector2i *)&local_48,(Vector2i *)&uStack_40);
  Vector2i::operator+((Vector2i *)&local_48,(Vector2i *)&uStack_40);
  iVar11 = local_48._4_4_;
  if (local_48._4_4_ < extraout_var) {
    do {
      if ((int)local_48 < iVar4) {
        uVar10 = iVar11 - *(int *)(this + 0x180);
        uVar1 = *(uint *)(this + 0x1c8);
        iVar5 = (int)local_48;
        do {
          uVar8 = (ulong)uVar10;
          uVar2 = uVar1;
          if (uVar1 <= uVar10) {
LAB_0010438e:
            _err_print_index_error
                      ("operator[]","./core/templates/local_vector.h",0xb2,uVar8,(ulong)uVar2,
                       "p_index","count","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          uVar8 = (ulong)(uint)(iVar5 - *(int *)(this + 0x17c));
          puVar9 = (uint *)(*(long *)(this + 0x1d0) + (ulong)uVar10 * 0x10);
          uVar2 = *puVar9;
          if (uVar2 <= (uint)(iVar5 - *(int *)(this + 0x17c))) goto LAB_0010438e;
          iVar5 = iVar5 + 1;
          *(float *)(uVar8 * 0x40 + *(long *)(puVar9 + 2) + 0x10) = param_2;
        } while (iVar5 != iVar4);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 != extraout_var);
  }
LAB_00104348:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* AStarGrid2D::get_id_path(Vector2i const&, Vector2i const&, bool) */

Vector2i * AStarGrid2D::get_id_path(Vector2i *param_1,Vector2i *param_2,bool param_3)

{
  int iVar1;
  int iVar2;
  Vector2i *pVVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  Variant *pVVar7;
  int *in_RCX;
  long lVar8;
  int iVar9;
  undefined7 in_register_00000011;
  int *piVar10;
  uint *puVar11;
  uint uVar12;
  Vector2i *pVVar13;
  uint uVar14;
  bool in_R8B;
  ulong uVar15;
  uint uVar16;
  int iVar17;
  Vector2i *pVVar18;
  Vector2i *pVVar19;
  int iVar20;
  uint uVar21;
  long in_FS_OFFSET;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  piVar10 = (int *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar14 = (uint)param_1;
  if (param_2[0x19c] == (Vector2i)0x0) {
    if ((*(int *)(param_2 + 0x184) < 0) || (*(int *)(param_2 + 0x188) < 0)) {
      _err_print_error("has_point","./core/math/rect2i.h",0x7f,
                       "Rect2i size is negative, this is not supported. Use Rect2i.abs() to get a Rect2i with a positive size."
                       ,0,0);
    }
    iVar6 = *(int *)(param_2 + 0x17c);
    if (*piVar10 < iVar6) {
LAB_001049e0:
      local_70 = 0;
      local_60 = 0x2d;
      local_68 = "Can\'t get id path. Point %s out of bounds %s.";
      String::parse_latin1((StrRange *)&local_70);
      vformat<Vector2i,Rect2i>
                ((CowData<char32_t> *)&local_68,(StrRange *)&local_70,*(undefined8 *)piVar10,
                 *(undefined8 *)(param_2 + 0x17c),*(undefined8 *)(param_2 + 0x184));
      _err_print_error("get_id_path","core/math/a_star_grid_2d.cpp",0x2b0,
                       "Condition \"!is_in_boundsv(p_from_id)\" is true. Returning: TypedArray<Vector2i>()"
                       ,(CowData<char32_t> *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      Array::Array((Array *)param_1);
      goto LAB_00104a97;
    }
    if (((piVar10[1] < *(int *)(param_2 + 0x180)) ||
        ((int)(iVar6 + *(uint *)(param_2 + 0x184)) <= *piVar10)) ||
       ((int)(*(int *)(param_2 + 0x180) + *(uint *)(param_2 + 0x188)) <= piVar10[1]))
    goto LAB_001049e0;
    if ((int)(*(uint *)(param_2 + 0x184) | *(uint *)(param_2 + 0x188)) < 0) {
      _err_print_error("has_point","./core/math/rect2i.h",0x7f,
                       "Rect2i size is negative, this is not supported. Use Rect2i.abs() to get a Rect2i with a positive size."
                       ,0,0);
      iVar6 = *(int *)(param_2 + 0x17c);
    }
    iVar17 = *in_RCX;
    if (iVar17 < iVar6) {
LAB_00104af0:
      local_70 = 0;
      local_68 = "Can\'t get id path. Point %s out of bounds %s.";
      local_60 = 0x2d;
      String::parse_latin1((StrRange *)&local_70);
      vformat<Vector2i,Rect2i>
                ((CowData<char32_t> *)&local_68,(StrRange *)&local_70,*(undefined8 *)in_RCX,
                 *(undefined8 *)(param_2 + 0x17c),*(undefined8 *)(param_2 + 0x184));
      _err_print_error("get_id_path","core/math/a_star_grid_2d.cpp",0x2b1,
                       "Condition \"!is_in_boundsv(p_to_id)\" is true. Returning: TypedArray<Vector2i>()"
                       ,(CowData<char32_t> *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      Array::Array((Array *)param_1);
      local_58 = 0;
      local_68 = (char *)0x0;
      local_50 = (undefined1  [16])0x0;
      Array::set_typed(uVar14,(StringName *)0x6,(Variant *)&local_68);
    }
    else {
      iVar20 = in_RCX[1];
      iVar9 = *(int *)(param_2 + 0x180);
      if (((iVar20 < iVar9) ||
          (uVar21 = *(uint *)(param_2 + 0x184), (int)(uVar21 + iVar6) <= iVar17)) ||
         (uVar12 = *(uint *)(param_2 + 0x188), (int)(iVar9 + uVar12) <= iVar20)) goto LAB_00104af0;
      iVar1 = piVar10[1];
      iVar2 = *piVar10;
      if ((int)(uVar21 | uVar12) < 0) {
        _err_print_error("has_point","./core/math/rect2i.h",0x7f,
                         "Rect2i size is negative, this is not supported. Use Rect2i.abs() to get a Rect2i with a positive size."
                         ,0,0);
        iVar6 = *(int *)(param_2 + 0x17c);
        if (iVar6 <= iVar2) {
          iVar9 = *(int *)(param_2 + 0x180);
          uVar21 = *(uint *)(param_2 + 0x184);
          goto LAB_00104610;
        }
        uVar21 = *(uint *)(param_2 + 0x184);
        pVVar13 = (Vector2i *)0x0;
LAB_00104672:
        iVar20 = in_RCX[1];
        iVar17 = *in_RCX;
        if (-1 < (int)uVar21) {
          uVar12 = *(uint *)(param_2 + 0x188);
          goto LAB_00104688;
        }
LAB_00104d00:
        _err_print_error("has_point","./core/math/rect2i.h",0x7f,
                         "Rect2i size is negative, this is not supported. Use Rect2i.abs() to get a Rect2i with a positive size."
                         ,0,0);
        iVar6 = *(int *)(param_2 + 0x17c);
      }
      else {
        if (iVar6 <= iVar2) {
LAB_00104610:
          if (((iVar1 < iVar9) || ((int)(iVar6 + uVar21) <= iVar2)) ||
             (*(int *)(param_2 + 0x188) + iVar9 <= iVar1)) {
            pVVar13 = (Vector2i *)0x0;
          }
          else {
            uVar15 = (ulong)*(uint *)(param_2 + 0x1c8);
            uVar12 = iVar1 - iVar9;
            lVar8 = (long)(int)uVar12;
            if (*(uint *)(param_2 + 0x1c8) <= uVar12) goto LAB_00104be3;
            uVar16 = iVar2 - iVar6;
            puVar11 = (uint *)((long)(int)uVar12 * 0x10 + *(long *)(param_2 + 0x1d0));
            uVar12 = *puVar11;
            uVar15 = (ulong)uVar12;
            if (uVar12 <= uVar16) {
              lVar8 = (long)(int)uVar16;
              goto LAB_00104be3;
            }
            pVVar13 = (Vector2i *)((long)(int)uVar16 * 0x40 + *(long *)(puVar11 + 2));
          }
          goto LAB_00104672;
        }
        pVVar13 = (Vector2i *)0x0;
LAB_00104688:
        if ((int)uVar12 < 0) goto LAB_00104d00;
      }
      if ((((iVar17 < iVar6) || (iVar9 = *(int *)(param_2 + 0x180), iVar20 < iVar9)) ||
          (*(int *)(param_2 + 0x184) + iVar6 <= iVar17)) ||
         (*(int *)(param_2 + 0x188) + iVar9 <= iVar20)) {
        pVVar18 = (Vector2i *)0x0;
        if (pVVar13 != (Vector2i *)0x0) goto LAB_001047cc;
LAB_00104717:
        Array::Array((Array *)&local_70);
        local_58 = 0;
        local_68 = (char *)0x0;
        local_50 = (undefined1  [16])0x0;
        Array::set_typed((uint)(Array *)&local_70,(StringName *)0x6,(Variant *)&local_68);
        if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)&local_58,pVVar13);
        Array::push_back((Variant *)&local_70);
        cVar5 = Variant::needs_deinit[(int)local_58];
joined_r0x001047ac:
        if (cVar5 != '\0') {
          Variant::_clear_internal();
        }
LAB_00104943:
        Array::Array((Array *)param_1,(Array *)&local_70);
        Array::~Array((Array *)&local_70);
        goto LAB_00104958;
      }
      uVar15 = (ulong)*(uint *)(param_2 + 0x1c8);
      uVar21 = iVar20 - iVar9;
      lVar8 = (long)(int)uVar21;
      if (*(uint *)(param_2 + 0x1c8) <= uVar21) {
LAB_00104be3:
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xb2,lVar8,uVar15,"p_index",
                   "count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      uVar12 = iVar17 - iVar6;
      puVar11 = (uint *)((long)(int)uVar21 * 0x10 + *(long *)(param_2 + 0x1d0));
      lVar8 = (long)(int)uVar12;
      uVar21 = *puVar11;
      uVar15 = (ulong)uVar21;
      if (uVar21 <= uVar12) goto LAB_00104be3;
      pVVar18 = (Vector2i *)((long)(int)uVar12 * 0x40 + *(long *)(puVar11 + 2));
      if (pVVar18 == pVVar13) goto LAB_00104717;
LAB_001047cc:
      cVar5 = _solve((AStarGrid2D *)param_2,(Point *)pVVar13,(Point *)pVVar18,in_R8B);
      pVVar19 = pVVar18;
      if (cVar5 != '\0') goto LAB_00104810;
      if ((in_R8B != false) &&
         (pVVar18 = *(Vector2i **)(param_2 + 0x1e0), pVVar19 = pVVar18, pVVar3 = pVVar13,
         pVVar18 != (Vector2i *)0x0)) {
        for (; pVVar18 != pVVar13; pVVar18 = *(Vector2i **)(pVVar18 + 0x18)) {
LAB_00104810:
          pVVar3 = pVVar19;
        }
        Array::Array((Array *)&local_70);
        local_58 = 0;
        local_68 = (char *)0x0;
        local_50 = (undefined1  [16])0x0;
        uVar14 = (uint)(Array *)&local_70;
        Array::set_typed(uVar14,(StringName *)0x6,(Variant *)&local_68);
        if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        Array::resize(uVar14);
        for (; pVVar13 != pVVar3; pVVar3 = *(Vector2i **)(pVVar3 + 0x18)) {
          Variant::Variant((Variant *)&local_58,pVVar3);
          pVVar7 = (Variant *)Array::operator[](uVar14);
          if (pVVar7 == (Variant *)&local_58) {
            if (Variant::needs_deinit[(int)local_58] != '\0') {
              Variant::_clear_internal();
            }
          }
          else {
            if (Variant::needs_deinit[*(int *)pVVar7] != '\0') {
              Variant::_clear_internal();
            }
            *(undefined4 *)pVVar7 = 0;
            *(int *)pVVar7 = (int)local_58;
            *(undefined8 *)(pVVar7 + 8) = local_50._0_8_;
            *(undefined8 *)(pVVar7 + 0x10) = local_50._8_8_;
          }
        }
        Variant::Variant((Variant *)&local_58,pVVar13);
        pVVar7 = (Variant *)Array::operator[](uVar14);
        if (pVVar7 == (Variant *)&local_58) {
          cVar5 = Variant::needs_deinit[(int)local_58];
          goto joined_r0x001047ac;
        }
        if (Variant::needs_deinit[*(int *)pVVar7] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar7 = 0;
        *(int *)pVVar7 = (int)local_58;
        *(undefined8 *)(pVVar7 + 8) = local_50._0_8_;
        *(undefined8 *)(pVVar7 + 0x10) = local_50._8_8_;
        goto LAB_00104943;
      }
      Array::Array((Array *)param_1);
      local_58 = 0;
      local_68 = (char *)0x0;
      local_50 = (undefined1  [16])0x0;
      Array::set_typed(uVar14,(StringName *)0x6,(Variant *)&local_68);
    }
  }
  else {
    _err_print_error("get_id_path","core/math/a_star_grid_2d.cpp",0x2af,
                     "Condition \"dirty\" is true. Returning: TypedArray<Vector2i>()",
                     "Grid is not initialized. Call the update method.",0,0);
    Array::Array((Array *)param_1);
LAB_00104a97:
    local_50 = (undefined1  [16])0x0;
    local_58 = 0;
    local_68 = (char *)0x0;
    Array::set_typed(uVar14,(StringName *)0x6,(Variant *)&local_68);
  }
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
LAB_00104958:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* AStarGrid2D::_get_id_path_bind_compat_88047(Vector2i const&, Vector2i const&) */

AStarGrid2D * __thiscall
AStarGrid2D::_get_id_path_bind_compat_88047(AStarGrid2D *this,Vector2i *param_1,Vector2i *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  get_id_path((Vector2i *)this,param_1,SUB81(param_2,0));
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AStarGrid2D::_bind_compatibility_methods() */

void AStarGrid2D::_bind_compatibility_methods(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  MethodBind *pMVar4;
  long *plVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_b8 [2];
  long *local_a8;
  char *local_98;
  char *pcStack_90;
  undefined8 local_88;
  char *local_78;
  char *pcStack_70;
  undefined8 local_68;
  char **local_58;
  undefined1 auStack_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = 0;
  local_58 = &local_78;
  local_78 = "from_id";
  pcStack_70 = "to_id";
  auStack_50._8_8_ = auStack_50._0_8_;
  auStack_50._0_8_ = &pcStack_70;
  D_METHODP((char *)local_b8,(char ***)"get_id_path",(uint)&local_58);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<AStarGrid2D,TypedArray<Vector2i>,Vector2i_const&,Vector2i_const&>
                     (_get_id_path_bind_compat_88047);
  ClassDB::bind_methodfi(1,pMVar4,true,(MethodDefinition *)local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar5 = local_a8 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_a8[-1];
      local_a8 = (long *)0x0;
      if (lVar1 != 0) {
        lVar6 = 0;
        plVar5 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8[0] != 0)) {
    StringName::unref();
  }
  local_88 = 0;
  auStack_50._0_8_ = &pcStack_90;
  local_98 = "from_id";
  pcStack_90 = "to_id";
  local_58 = &local_98;
  D_METHODP((char *)local_b8,(char ***)"get_point_path",(uint)&local_58);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<AStarGrid2D,Vector<Vector2>,Vector2i_const&,Vector2i_const&>
                     (_get_point_path_bind_compat_88047);
  ClassDB::bind_methodfi(1,pMVar4,true,(MethodDefinition *)local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar5 = local_a8 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_a8[-1];
      local_a8 = (long *)0x0;
      if (lVar1 != 0) {
        lVar6 = 0;
        plVar5 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8[0] != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AStarGrid2D::update() */

void __thiscall AStarGrid2D::update(AStarGrid2D *this)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  code *pcVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int extraout_var;
  void *pvVar10;
  ulong uVar11;
  void *pvVar12;
  int *piVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  long lVar22;
  int iVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  int iVar27;
  
  if (this[0x19c] == (AStarGrid2D)0x0) {
    return;
  }
  LocalVector<LocalVector<AStarGrid2D::Point,unsigned_int,false,false>,unsigned_int,false,false>::
  resize((LocalVector<LocalVector<AStarGrid2D::Point,unsigned_int,false,false>,unsigned_int,false,false>
          *)(this + 0x1c8),0);
  if (*(int *)(this + 0x1b8) != 0) {
    *(undefined4 *)(this + 0x1b8) = 0;
  }
  iVar8 = Vector2i::operator+((Vector2i *)(this + 0x17c),(Vector2i *)(this + 0x184));
  Vector2i::operator+((Vector2i *)(this + 0x17c),(Vector2i *)(this + 0x184));
  fVar25 = (float)*(undefined8 *)(this + 0x194) * (float)_LC90;
  fVar26 = (float)((ulong)*(undefined8 *)(this + 0x194) >> 0x20) * _LC90._4_4_;
  if (iVar8 + 1 < *(int *)(this + 0x17c)) {
    iVar23 = *(int *)(this + 0x180);
    if (extraout_var <= iVar23) goto LAB_001059d5;
    uVar20 = (ulong)*(uint *)(this + 0x1b8);
    pvVar10 = *(void **)(this + 0x1c0);
LAB_00105388:
    iVar27 = _LC48;
    if (*(int *)(this + 0x1bc) == (int)uVar20) goto LAB_0010580f;
LAB_0010539c:
    iVar19 = *(int *)(this + 0x17c);
    uVar18 = (int)uVar20 + 1;
    *(uint *)(this + 0x1b8) = uVar18;
    *(undefined1 *)((long)pvVar10 + uVar20) = 1;
    if (iVar19 < iVar8) {
      lVar22 = 0;
      pvVar12 = (void *)0x0;
      uVar9 = 0;
      do {
        uVar24 = *(undefined8 *)(this + 0x18c);
        iVar3 = *(int *)(this + 0x1a0);
        fVar6 = (float)((ulong)uVar24 >> 0x20);
        if (iVar3 == 1) {
          iVar3 = -iVar19;
          iVar7 = iVar23;
LAB_00105493:
          uVar24 = CONCAT44(fVar6 + (float)(iVar23 + iVar3) * fVar26 + fVar26,
                            (float)uVar24 + (float)(iVar19 + iVar7) * fVar25 + fVar25);
        }
        else {
          if (iVar3 == 2) {
            iVar7 = -iVar23;
            iVar3 = iVar19;
            goto LAB_00105493;
          }
          if (iVar3 == 0) {
            uVar24 = CONCAT44(fVar6 + (float)((ulong)*(undefined8 *)(this + 0x194) >> 0x20) *
                                      (float)iVar23,
                              (float)uVar24 + (float)*(undefined8 *)(this + 0x194) * (float)iVar19);
          }
        }
        uVar21 = (uint)lVar22;
        if (uVar9 == uVar21) {
          uVar9 = uVar9 * 2;
          if (uVar9 == 0) {
            uVar9 = 1;
          }
          pvVar12 = (void *)Memory::realloc_static(pvVar12,(ulong)uVar9 << 6,false);
          iVar27 = _LC48;
          if (pvVar12 == (void *)0x0) goto LAB_0010533b;
        }
        uVar2 = *(uint *)(this + 0x1b8);
        pvVar10 = *(void **)(this + 0x1c0);
        piVar13 = (int *)(lVar22 * 0x40 + (long)pvVar12);
        *(undefined8 *)(piVar13 + 2) = uVar24;
        *piVar13 = iVar19;
        piVar13[1] = iVar23;
        piVar13[6] = 0;
        piVar13[7] = 0;
        piVar13[8] = 0;
        piVar13[9] = 0;
        piVar13[0xe] = 0;
        piVar13[0xf] = 0;
        piVar13[4] = iVar27;
        *(undefined1 (*) [16])(piVar13 + 10) = (undefined1  [16])0x0;
        if (uVar2 == *(uint *)(this + 0x1bc)) {
          uVar20 = (ulong)(uVar2 * 2);
          if (uVar2 * 2 == 0) {
            uVar20 = 1;
          }
          *(int *)(this + 0x1bc) = (int)uVar20;
          pvVar10 = (void *)Memory::realloc_static(pvVar10,uVar20,false);
          *(void **)(this + 0x1c0) = pvVar10;
          if (pvVar10 == (void *)0x0) goto LAB_0010533b;
          uVar2 = *(uint *)(this + 0x1b8);
          iVar27 = _LC48;
        }
        uVar18 = uVar2 + 1;
        iVar19 = iVar19 + 1;
        lVar22 = lVar22 + 1;
        *(uint *)(this + 0x1b8) = uVar18;
        *(undefined1 *)((long)pvVar10 + (ulong)uVar2) = 0;
      } while (iVar8 != iVar19);
      uVar21 = uVar21 + 1;
    }
    else {
      pvVar12 = (void *)0x0;
      uVar21 = 0;
    }
    if (*(uint *)(this + 0x1bc) == uVar18) {
      uVar18 = uVar18 * 2;
      if (uVar18 == 0) {
        uVar18 = 1;
      }
      *(uint *)(this + 0x1bc) = uVar18;
      pvVar10 = (void *)Memory::realloc_static(pvVar10,(ulong)uVar18,false);
      *(void **)(this + 0x1c0) = pvVar10;
      if (pvVar10 == (void *)0x0) goto LAB_0010533b;
      uVar18 = *(uint *)(this + 0x1b8);
      iVar27 = _LC48;
    }
    *(uint *)(this + 0x1b8) = uVar18 + 1;
    *(undefined1 *)((long)pvVar10 + (ulong)uVar18) = 1;
    if (uVar21 == 0) {
      puVar14 = (undefined8 *)0x0;
    }
    else {
      uVar18 = uVar21 - 1 | uVar21 - 1 >> 1;
      uVar18 = uVar18 >> 2 | uVar18;
      uVar18 = uVar18 | uVar18 >> 4;
      uVar18 = uVar18 | uVar18 >> 8;
      puVar14 = (undefined8 *)
                Memory::realloc_static
                          ((void *)0x0,(ulong)((uVar18 | uVar18 >> 0x10) + 1) << 6,false);
      iVar27 = _LC48;
      if (puVar14 == (undefined8 *)0x0) goto LAB_001058f1;
      puVar16 = puVar14;
      do {
        *puVar16 = 0;
        puVar15 = puVar16 + 8;
        puVar16[1] = 0;
        *(int *)(puVar16 + 2) = iVar27;
        puVar16[3] = 0;
        puVar16[4] = 0;
        *(undefined1 (*) [16])(puVar16 + 5) = (undefined1  [16])0x0;
        puVar16[7] = 0;
        puVar16 = puVar15;
      } while (puVar15 != puVar14 + (ulong)uVar21 * 8);
      lVar22 = 0;
      do {
        uVar24 = ((undefined8 *)((long)pvVar12 + lVar22))[1];
        *(undefined8 *)((long)puVar14 + lVar22) = *(undefined8 *)((long)pvVar12 + lVar22);
        ((undefined8 *)((long)puVar14 + lVar22))[1] = uVar24;
        puVar16 = (undefined8 *)((long)pvVar12 + lVar22 + 0x10);
        uVar24 = puVar16[1];
        puVar15 = (undefined8 *)((long)puVar14 + lVar22 + 0x10);
        *puVar15 = *puVar16;
        puVar15[1] = uVar24;
        puVar16 = (undefined8 *)((long)pvVar12 + lVar22 + 0x20);
        uVar24 = puVar16[1];
        puVar15 = (undefined8 *)((long)puVar14 + lVar22 + 0x20);
        *puVar15 = *puVar16;
        puVar15[1] = uVar24;
        puVar16 = (undefined8 *)((long)pvVar12 + lVar22 + 0x30);
        uVar24 = puVar16[1];
        puVar15 = (undefined8 *)((long)puVar14 + lVar22 + 0x30);
        *puVar15 = *puVar16;
        puVar15[1] = uVar24;
        lVar22 = lVar22 + 0x40;
      } while ((ulong)uVar21 * 0x40 != lVar22);
    }
    uVar18 = *(uint *)(this + 0x1c8);
    pvVar10 = *(void **)(this + 0x1d0);
    if (uVar18 == *(uint *)(this + 0x1cc)) {
      uVar18 = uVar18 * 2;
      if (uVar18 == 0) {
        uVar18 = 1;
      }
      *(uint *)(this + 0x1cc) = uVar18;
      pvVar10 = (void *)Memory::realloc_static(pvVar10,(ulong)uVar18 << 4,false);
      *(void **)(this + 0x1d0) = pvVar10;
      if (pvVar10 == (void *)0x0) goto LAB_0010533b;
      uVar18 = *(uint *)(this + 0x1c8);
      iVar27 = _LC48;
    }
    puVar1 = (uint *)((long)pvVar10 + (ulong)uVar18 * 0x10);
    *(uint *)(this + 0x1c8) = uVar18 + 1;
    puVar1[0] = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    if (uVar21 == 0) {
      if (puVar14 != (undefined8 *)0x0) goto LAB_0010579c;
    }
    else {
      uVar18 = uVar21 - 1;
      uVar9 = uVar18 >> 1 | uVar18;
      uVar9 = uVar9 >> 2 | uVar9;
      uVar9 = uVar9 >> 4 | uVar9;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = (uVar9 | uVar9 >> 0x10) + 1;
      puVar1[1] = uVar9;
      lVar22 = Memory::realloc_static((void *)0x0,(ulong)uVar9 << 6,false);
      *(long *)(puVar1 + 2) = lVar22;
      iVar27 = _LC48;
      if (lVar22 == 0) {
LAB_001058f1:
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      uVar9 = *puVar1;
      if (uVar9 < uVar21) {
        puVar16 = (undefined8 *)((ulong)uVar9 * 0x40 + lVar22);
        do {
          *puVar16 = 0;
          puVar15 = puVar16 + 8;
          puVar16[1] = 0;
          *(int *)(puVar16 + 2) = iVar27;
          puVar16[3] = 0;
          puVar16[4] = 0;
          *(undefined1 (*) [16])(puVar16 + 5) = (undefined1  [16])0x0;
          puVar16[7] = 0;
          puVar16 = puVar15;
        } while (puVar15 !=
                 (undefined8 *)(((ulong)uVar9 + 1 + (ulong)(uVar18 - uVar9)) * 0x40 + lVar22));
      }
      *puVar1 = uVar21;
      lVar17 = 0;
      do {
        uVar24 = ((undefined8 *)((long)puVar14 + lVar17))[1];
        *(undefined8 *)(lVar22 + lVar17) = *(undefined8 *)((long)puVar14 + lVar17);
        ((undefined8 *)(lVar22 + lVar17))[1] = uVar24;
        puVar16 = (undefined8 *)((long)puVar14 + lVar17 + 0x10);
        uVar24 = puVar16[1];
        puVar15 = (undefined8 *)(lVar22 + 0x10 + lVar17);
        *puVar15 = *puVar16;
        puVar15[1] = uVar24;
        puVar16 = (undefined8 *)((long)puVar14 + lVar17 + 0x20);
        uVar24 = puVar16[1];
        puVar15 = (undefined8 *)(lVar22 + 0x20 + lVar17);
        *puVar15 = *puVar16;
        puVar15[1] = uVar24;
        puVar16 = (undefined8 *)((long)puVar14 + lVar17 + 0x30);
        uVar24 = puVar16[1];
        puVar15 = (undefined8 *)(lVar22 + 0x30 + lVar17);
        *puVar15 = *puVar16;
        puVar15[1] = uVar24;
        lVar17 = lVar17 + 0x40;
      } while (lVar17 != (ulong)uVar21 << 6);
LAB_0010579c:
      Memory::free_static(puVar14,false);
      iVar27 = _LC48;
    }
    if (pvVar12 != (void *)0x0) {
      Memory::free_static(pvVar12,false);
      iVar27 = _LC48;
    }
    iVar23 = iVar23 + 1;
    if (iVar23 < extraout_var) {
      uVar20 = (ulong)*(uint *)(this + 0x1b8);
      pvVar10 = *(void **)(this + 0x1c0);
      if (*(uint *)(this + 0x1bc) == *(uint *)(this + 0x1b8)) {
LAB_0010580f:
        uVar18 = (int)uVar20 * 2;
        if (uVar18 == 0) {
          uVar18 = 1;
        }
        *(uint *)(this + 0x1bc) = uVar18;
        pvVar10 = (void *)Memory::realloc_static(pvVar10,(ulong)uVar18,false);
        *(void **)(this + 0x1c0) = pvVar10;
        if (pvVar10 == (void *)0x0) goto LAB_0010533b;
        uVar20 = (ulong)*(uint *)(this + 0x1b8);
        iVar27 = _LC48;
      }
      goto LAB_0010539c;
    }
  }
  else {
    pvVar10 = *(void **)(this + 0x1c0);
    uVar11 = (ulong)*(uint *)(this + 0x1b8);
    iVar23 = *(int *)(this + 0x17c);
    do {
      if (*(int *)(this + 0x1bc) == (int)uVar11) {
        uVar18 = (int)uVar11 * 2;
        if (uVar18 == 0) {
          uVar18 = 1;
        }
        *(uint *)(this + 0x1bc) = uVar18;
        pvVar10 = (void *)Memory::realloc_static(pvVar10,(ulong)uVar18,false);
        *(void **)(this + 0x1c0) = pvVar10;
        if (pvVar10 == (void *)0x0) goto LAB_0010533b;
        uVar11 = (ulong)*(uint *)(this + 0x1b8);
      }
      uVar18 = (int)uVar11 + 1;
      uVar20 = (ulong)uVar18;
      *(uint *)(this + 0x1b8) = uVar18;
      *(undefined1 *)((long)pvVar10 + uVar11) = 1;
      bVar4 = iVar23 <= iVar8;
      uVar11 = uVar20;
      iVar23 = iVar23 + 1;
    } while (bVar4);
    iVar23 = *(int *)(this + 0x180);
    if (iVar23 < extraout_var) goto LAB_00105388;
  }
  if (*(int *)(this + 0x17c) <= iVar8 + 1) {
    uVar18 = *(uint *)(this + 0x1b8);
    pvVar10 = *(void **)(this + 0x1c0);
    iVar23 = *(int *)(this + 0x17c);
    do {
      if (uVar18 == *(uint *)(this + 0x1bc)) {
        uVar18 = uVar18 * 2;
        if (uVar18 == 0) {
          uVar18 = 1;
        }
        *(uint *)(this + 0x1bc) = uVar18;
        pvVar10 = (void *)Memory::realloc_static(pvVar10,(ulong)uVar18,false);
        *(void **)(this + 0x1c0) = pvVar10;
        if (pvVar10 == (void *)0x0) {
LAB_0010533b:
          _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                           "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        uVar18 = *(uint *)(this + 0x1b8);
      }
      uVar20 = (ulong)uVar18;
      uVar18 = uVar18 + 1;
      *(uint *)(this + 0x1b8) = uVar18;
      *(undefined1 *)((long)pvVar10 + uVar20) = 1;
      bVar4 = iVar23 <= iVar8;
      iVar23 = iVar23 + 1;
    } while (bVar4);
  }
LAB_001059d5:
  this[0x19c] = (AStarGrid2D)0x0;
  return;
}



/* AStarGrid2D::get_point_path(Vector2i const&, Vector2i const&, bool) */

Vector2i * AStarGrid2D::get_point_path(Vector2i *param_1,Vector2i *param_2,bool param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  int *in_RCX;
  long lVar7;
  char *pcVar8;
  int iVar9;
  undefined7 in_register_00000011;
  int *piVar10;
  uint *puVar11;
  undefined8 uVar12;
  int iVar13;
  Point *pPVar14;
  Point *pPVar15;
  bool in_R8B;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  Point *pPVar19;
  long lVar20;
  int iVar21;
  uint uVar22;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  undefined8 *local_50 [2];
  long local_40;
  
  piVar10 = (int *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2[0x19c] != (Vector2i)0x0) {
    _err_print_error("get_point_path","core/math/a_star_grid_2d.cpp",0x27a,
                     "Condition \"dirty\" is true. Returning: Vector<Vector2>()",
                     "Grid is not initialized. Call the update method.",0,0);
    *(undefined8 *)(param_1 + 8) = 0;
    goto LAB_00105d12;
  }
  if ((*(int *)(param_2 + 0x184) < 0) || (*(int *)(param_2 + 0x188) < 0)) {
    _err_print_error("has_point","./core/math/rect2i.h",0x7f,
                     "Rect2i size is negative, this is not supported. Use Rect2i.abs() to get a Rect2i with a positive size."
                     ,0,0);
  }
  iVar5 = *(int *)(param_2 + 0x17c);
  if (*piVar10 < iVar5) {
LAB_00105d60:
    local_60 = 0;
    local_58 = "Can\'t get id path. Point %s out of bounds %s.";
    local_50[0] = (undefined8 *)0x2d;
    String::parse_latin1((StrRange *)&local_60);
    vformat<Vector2i,Rect2i>
              (&local_58,(StrRange *)&local_60,*(undefined8 *)piVar10,
               *(undefined8 *)(param_2 + 0x17c),*(undefined8 *)(param_2 + 0x184));
    pcVar8 = "Condition \"!is_in_boundsv(p_from_id)\" is true. Returning: Vector<Vector2>()";
    uVar12 = 0x27b;
  }
  else {
    if (((piVar10[1] < *(int *)(param_2 + 0x180)) ||
        ((int)(iVar5 + *(uint *)(param_2 + 0x184)) <= *piVar10)) ||
       ((int)(*(int *)(param_2 + 0x180) + *(uint *)(param_2 + 0x188)) <= piVar10[1]))
    goto LAB_00105d60;
    if ((int)(*(uint *)(param_2 + 0x184) | *(uint *)(param_2 + 0x188)) < 0) {
      _err_print_error("has_point","./core/math/rect2i.h",0x7f,
                       "Rect2i size is negative, this is not supported. Use Rect2i.abs() to get a Rect2i with a positive size."
                       ,0,0);
      iVar5 = *(int *)(param_2 + 0x17c);
    }
    iVar13 = *in_RCX;
    if (iVar5 <= iVar13) {
      iVar21 = in_RCX[1];
      iVar9 = *(int *)(param_2 + 0x180);
      if (((iVar9 <= iVar21) &&
          (uVar22 = *(uint *)(param_2 + 0x184), iVar13 < (int)(uVar22 + iVar5))) &&
         (uVar18 = *(uint *)(param_2 + 0x188), iVar21 < (int)(iVar9 + uVar18))) {
        iVar1 = piVar10[1];
        iVar2 = *piVar10;
        if ((int)(uVar22 | uVar18) < 0) {
          _err_print_error("has_point","./core/math/rect2i.h",0x7f,
                           "Rect2i size is negative, this is not supported. Use Rect2i.abs() to get a Rect2i with a positive size."
                           ,0,0);
          iVar5 = *(int *)(param_2 + 0x17c);
          if (iVar5 <= iVar2) {
            iVar9 = *(int *)(param_2 + 0x180);
            uVar22 = *(uint *)(param_2 + 0x184);
            goto LAB_00105afb;
          }
          uVar22 = *(uint *)(param_2 + 0x184);
          pPVar19 = (Point *)0x0;
LAB_00105b60:
          iVar21 = in_RCX[1];
          iVar13 = *in_RCX;
          if (-1 < (int)uVar22) {
            uVar18 = *(uint *)(param_2 + 0x188);
            goto LAB_00105b76;
          }
LAB_00105fc0:
          _err_print_error("has_point","./core/math/rect2i.h",0x7f,
                           "Rect2i size is negative, this is not supported. Use Rect2i.abs() to get a Rect2i with a positive size."
                           ,0,0);
          iVar5 = *(int *)(param_2 + 0x17c);
        }
        else {
          if (iVar5 <= iVar2) {
LAB_00105afb:
            if (((iVar1 < iVar9) || ((int)(iVar5 + uVar22) <= iVar2)) ||
               (*(int *)(param_2 + 0x188) + iVar9 <= iVar1)) {
              pPVar19 = (Point *)0x0;
            }
            else {
              uVar16 = (ulong)*(uint *)(param_2 + 0x1c8);
              uVar18 = iVar1 - iVar9;
              lVar7 = (long)(int)uVar18;
              if (*(uint *)(param_2 + 0x1c8) <= uVar18) goto LAB_00105e83;
              uVar17 = iVar2 - iVar5;
              puVar11 = (uint *)((long)(int)uVar18 * 0x10 + *(long *)(param_2 + 0x1d0));
              uVar18 = *puVar11;
              uVar16 = (ulong)uVar18;
              if (uVar18 <= uVar17) {
                lVar7 = (long)(int)uVar17;
                goto LAB_00105e83;
              }
              pPVar19 = (Point *)((long)(int)uVar17 * 0x40 + *(long *)(puVar11 + 2));
            }
            goto LAB_00105b60;
          }
          pPVar19 = (Point *)0x0;
LAB_00105b76:
          if ((int)uVar18 < 0) goto LAB_00105fc0;
        }
        if ((((iVar13 < iVar5) || (iVar9 = *(int *)(param_2 + 0x180), iVar21 < iVar9)) ||
            (*(int *)(param_2 + 0x184) + iVar5 <= iVar13)) ||
           (*(int *)(param_2 + 0x188) + iVar9 <= iVar21)) {
          pPVar14 = (Point *)0x0;
          if (pPVar19 != (Point *)0x0) {
LAB_00105c67:
            cVar4 = _solve((AStarGrid2D *)param_2,pPVar19,pPVar14,in_R8B);
            if (cVar4 == '\0') {
              if ((in_R8B == false) ||
                 (pPVar14 = *(Point **)(param_2 + 0x1e0), pPVar14 == (Point *)0x0)) {
                *(undefined8 *)(param_1 + 8) = 0;
                goto LAB_00105d12;
              }
              if (pPVar14 != pPVar19) goto LAB_00105ca0;
              local_50[0] = (undefined8 *)0x0;
              CowData<Vector2>::resize<false>((CowData<Vector2> *)local_50,1);
              CowData<Vector2>::_copy_on_write((CowData<Vector2> *)local_50);
            }
            else {
LAB_00105ca0:
              iVar5 = 1;
              pPVar15 = pPVar14;
              do {
                pPVar15 = *(Point **)(pPVar15 + 0x18);
                lVar7 = (long)iVar5;
                iVar5 = iVar5 + 1;
              } while (pPVar15 != pPVar19);
              local_50[0] = (undefined8 *)0x0;
              CowData<Vector2>::resize<false>((CowData<Vector2> *)local_50,(long)iVar5);
              CowData<Vector2>::_copy_on_write((CowData<Vector2> *)local_50);
              puVar6 = local_50[0] + lVar7;
              do {
                pPVar15 = pPVar14 + 8;
                pPVar14 = *(Point **)(pPVar14 + 0x18);
                *puVar6 = *(undefined8 *)pPVar15;
                puVar6 = puVar6 + -1;
              } while (pPVar14 != pPVar19);
            }
            *local_50[0] = *(undefined8 *)(pPVar19 + 8);
            *(undefined8 **)(param_1 + 8) = local_50[0];
            goto LAB_00105d12;
          }
        }
        else {
          uVar16 = (ulong)*(uint *)(param_2 + 0x1c8);
          uVar22 = iVar21 - iVar9;
          lVar7 = (long)(int)uVar22;
          if (*(uint *)(param_2 + 0x1c8) <= uVar22) {
LAB_00105e83:
            _err_print_index_error
                      ("operator[]","./core/templates/local_vector.h",0xb2,lVar7,uVar16,"p_index",
                       "count","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          uVar18 = iVar13 - iVar5;
          puVar11 = (uint *)((long)(int)uVar22 * 0x10 + *(long *)(param_2 + 0x1d0));
          lVar7 = (long)(int)uVar18;
          uVar22 = *puVar11;
          uVar16 = (ulong)uVar22;
          if (uVar22 <= uVar18) goto LAB_00105e83;
          pPVar14 = (Point *)((long)(int)uVar18 * 0x40 + *(long *)(puVar11 + 2));
          if (pPVar14 != pPVar19) goto LAB_00105c67;
        }
        uVar12 = *(undefined8 *)(pPVar14 + 8);
        local_50[0] = (undefined8 *)0x0;
        iVar5 = CowData<Vector2>::resize<false>((CowData<Vector2> *)local_50,1);
        puVar6 = local_50[0];
        if (iVar5 == 0) {
          if (local_50[0] == (undefined8 *)0x0) {
            lVar20 = -1;
            lVar7 = 0;
          }
          else {
            lVar7 = local_50[0][-1];
            lVar20 = lVar7 + -1;
            if (-1 < lVar20) {
              CowData<Vector2>::_copy_on_write((CowData<Vector2> *)local_50);
              local_50[0][lVar20] = uVar12;
              puVar6 = local_50[0];
              goto LAB_00105c55;
            }
          }
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar20,lVar7,"p_index","size()","",
                     false,false);
        }
        else {
          _err_print_error("push_back","./core/templates/vector.h",0x142,
                           "Condition \"err\" is true. Returning: true",0,0);
          puVar6 = local_50[0];
        }
LAB_00105c55:
        *(undefined8 **)(param_1 + 8) = puVar6;
        goto LAB_00105d12;
      }
    }
    local_60 = 0;
    local_58 = "Can\'t get id path. Point %s out of bounds %s.";
    local_50[0] = (undefined8 *)0x2d;
    String::parse_latin1((StrRange *)&local_60);
    vformat<Vector2i,Rect2i>
              (&local_58,(StrRange *)&local_60,*(undefined8 *)in_RCX,
               *(undefined8 *)(param_2 + 0x17c),*(undefined8 *)(param_2 + 0x184));
    pcVar8 = "Condition \"!is_in_boundsv(p_to_id)\" is true. Returning: Vector<Vector2>()";
    uVar12 = 0x27c;
  }
  _err_print_error("get_point_path","core/math/a_star_grid_2d.cpp",uVar12,pcVar8,
                   (CowData<char32_t> *)&local_58,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  *(undefined8 *)(param_1 + 8) = 0;
LAB_00105d12:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AStarGrid2D::_get_point_path_bind_compat_88047(Vector2i const&, Vector2i const&) */

AStarGrid2D * __thiscall
AStarGrid2D::_get_point_path_bind_compat_88047
          (AStarGrid2D *this,Vector2i *param_1,Vector2i *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  get_point_path((Vector2i *)this,param_1,SUB81(param_2,0));
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* Vector<String>::push_back(String) [clone .isra.0] */

void __thiscall Vector<String>::push_back(Vector<String> *this,CowData *param_2)

{
  CowData<char32_t> *this_00;
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<String>::resize<false>((CowData<String> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<String>::_copy_on_write((CowData<String> *)(this + 8));
        this_00 = (CowData<char32_t> *)(*(long *)(this + 8) + lVar3 * 8);
        if (*(long *)this_00 == *(long *)param_2) {
          return;
        }
        CowData<char32_t>::_ref(this_00,param_2);
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



/* AStarGrid2D::_bind_methods() */

void AStarGrid2D::_bind_methods(void)

{
  long *plVar1;
  char cVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
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
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uVar22;
  int *piVar23;
  MethodBind *pMVar24;
  uint uVar25;
  long lVar26;
  int *piVar27;
  long lVar28;
  long in_FS_OFFSET;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  long local_228;
  long local_220;
  long local_218;
  undefined8 local_210;
  char *local_208;
  long local_200;
  ulong local_1f8;
  undefined4 local_1f0;
  long local_1e8;
  undefined4 local_1e0;
  char *local_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8 [16];
  undefined8 local_1b8;
  long local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198 [2];
  int *local_188;
  undefined8 local_180;
  Vector<int> local_178 [8];
  long local_170;
  char *local_168;
  undefined8 local_160;
  undefined *local_158;
  char *pcStack_150;
  undefined8 local_148;
  undefined *local_138;
  char *pcStack_130;
  undefined8 local_128;
  undefined *local_118;
  char *pcStack_110;
  undefined8 local_108;
  undefined *local_f8;
  char *pcStack_f0;
  undefined8 local_e8;
  Variant *local_d8;
  undefined *puStack_d0;
  undefined8 local_c8;
  undefined *local_b8;
  undefined *puStack_b0;
  char *local_a8;
  undefined8 local_a0;
  Variant *local_98;
  undefined *puStack_90;
  char *local_88;
  undefined8 local_80;
  Variant **local_78;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  puVar21 = PTR__LC40_00125c18;
  puVar20 = PTR__LC108_00125c10;
  puVar19 = PTR__LC87_00125c08;
  puVar18 = PTR__LC86_00125c00;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_168 = "region";
  local_160 = 0;
  uVar25 = (uint)(Variant *)&local_78;
  local_78 = (Variant **)&local_168;
  D_METHODP((char *)&local_1d8,(char ***)"set_region",uVar25);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar24 = create_method_bind<AStarGrid2D,Rect2i_const&>(set_region);
  ClassDB::bind_methodfi(1,pMVar24,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHODP((char *)&local_1d8,(char ***)"get_region",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar24 = create_method_bind<AStarGrid2D,Rect2i>(get_region);
  ClassDB::bind_methodfi(1,pMVar24,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  local_160 = 0;
  local_168 = "size";
  local_78 = (Variant **)&local_168;
  D_METHODP((char *)&local_1d8,(char ***)"set_size",uVar25);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar24 = create_method_bind<AStarGrid2D,Vector2i_const&>(set_size);
  ClassDB::bind_methodfi(1,pMVar24,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHODP((char *)&local_1d8,(char ***)"get_size",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar24 = create_method_bind<AStarGrid2D,Vector2i>(get_size);
  ClassDB::bind_methodfi(1,pMVar24,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  local_160 = 0;
  local_168 = "offset";
  local_78 = (Variant **)&local_168;
  D_METHODP((char *)&local_1d8,(char ***)"set_offset",uVar25);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar24 = create_method_bind<AStarGrid2D,Vector2_const&>(set_offset);
  ClassDB::bind_methodfi(1,pMVar24,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHODP((char *)&local_1d8,(char ***)"get_offset",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar24 = create_method_bind<AStarGrid2D,Vector2>(get_offset);
  ClassDB::bind_methodfi(1,pMVar24,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  local_160 = 0;
  local_168 = "cell_size";
  local_78 = (Variant **)&local_168;
  D_METHODP((char *)&local_1d8,(char ***)"set_cell_size",uVar25);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar24 = create_method_bind<AStarGrid2D,Vector2_const&>(set_cell_size);
  ClassDB::bind_methodfi(1,pMVar24,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHODP((char *)&local_1d8,(char ***)"get_cell_size",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar24 = create_method_bind<AStarGrid2D,Vector2>(get_cell_size);
  ClassDB::bind_methodfi(1,pMVar24,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  local_160 = 0;
  local_168 = "cell_shape";
  local_78 = (Variant **)&local_168;
  D_METHODP((char *)&local_1d8,(char ***)"set_cell_shape",uVar25);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar24 = create_method_bind<AStarGrid2D,AStarGrid2D::CellShape>(set_cell_shape);
  ClassDB::bind_methodfi(1,pMVar24,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHODP((char *)&local_1d8,(char ***)"get_cell_shape",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar24 = create_method_bind<AStarGrid2D,AStarGrid2D::CellShape>(get_cell_shape);
  ClassDB::bind_methodfi(1,pMVar24,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  local_c8 = 0;
  auStack_70._0_8_ = &puStack_d0;
  local_d8 = (Variant *)&_LC109;
  puStack_d0 = &_LC110;
  local_78 = &local_d8;
  D_METHODP((char *)&local_1d8,(char ***)"is_in_bounds",uVar25);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar24 = create_method_bind<AStarGrid2D,bool,int,int>(is_in_bounds);
  ClassDB::bind_methodfi(1,pMVar24,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  puStack_d0 = (undefined *)0x0;
  local_d8 = (Variant *)&_LC40;
  local_78 = &local_d8;
  D_METHODP((char *)&local_1d8,(char ***)"is_in_boundsv",uVar25);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar24 = create_method_bind<AStarGrid2D,bool,Vector2i_const&>(is_in_boundsv);
  ClassDB::bind_methodfi(1,pMVar24,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHODP((char *)&local_1d8,(char ***)"is_dirty",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar24 = create_method_bind<AStarGrid2D,bool>(is_dirty);
  ClassDB::bind_methodfi(1,pMVar24,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHODP((char *)&local_1d8,(char ***)"update",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar24 = create_method_bind<AStarGrid2D>(update);
  ClassDB::bind_methodfi(1,pMVar24,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  puStack_d0 = (undefined *)0x0;
  local_d8 = (Variant *)0x10cb0c;
  local_78 = &local_d8;
  D_METHODP((char *)&local_1d8,(char ***)"set_jumping_enabled",uVar25);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar24 = create_method_bind<AStarGrid2D,bool>(set_jumping_enabled);
  ClassDB::bind_methodfi(1,pMVar24,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHODP((char *)&local_1d8,(char ***)"is_jumping_enabled",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar24 = create_method_bind<AStarGrid2D,bool>(is_jumping_enabled);
  ClassDB::bind_methodfi(1,pMVar24,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  puStack_d0 = (undefined *)0x0;
  local_d8 = (Variant *)&_LC129;
  local_78 = &local_d8;
  D_METHODP((char *)&local_1d8,(char ***)"set_diagonal_mode",uVar25);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar24 = create_method_bind<AStarGrid2D,AStarGrid2D::DiagonalMode>(set_diagonal_mode);
  ClassDB::bind_methodfi(1,pMVar24,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHODP((char *)&local_1d8,(char ***)"get_diagonal_mode",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar24 = create_method_bind<AStarGrid2D,AStarGrid2D::DiagonalMode>(get_diagonal_mode);
  ClassDB::bind_methodfi(1,pMVar24,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  local_d8 = (Variant *)0x10cb52;
  puStack_d0 = (undefined *)0x0;
  local_78 = &local_d8;
  D_METHODP((char *)&local_1d8,(char ***)"set_default_compute_heuristic",uVar25);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar24 = create_method_bind<AStarGrid2D,AStarGrid2D::Heuristic>(set_default_compute_heuristic);
  ClassDB::bind_methodfi(1,pMVar24,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHODP((char *)&local_1d8,(char ***)"get_default_compute_heuristic",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar24 = create_method_bind<AStarGrid2D,AStarGrid2D::Heuristic>(get_default_compute_heuristic);
  ClassDB::bind_methodfi(1,pMVar24,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  local_d8 = (Variant *)0x10cb52;
  puStack_d0 = (undefined *)0x0;
  local_78 = &local_d8;
  D_METHODP((char *)&local_1d8,(char ***)"set_default_estimate_heuristic",uVar25);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar24 = create_method_bind<AStarGrid2D,AStarGrid2D::Heuristic>(set_default_estimate_heuristic);
  ClassDB::bind_methodfi(1,pMVar24,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHODP((char *)&local_1d8,(char ***)"get_default_estimate_heuristic",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar24 = create_method_bind<AStarGrid2D,AStarGrid2D::Heuristic>(get_default_estimate_heuristic);
  ClassDB::bind_methodfi(1,pMVar24,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  local_e8 = 0;
  local_f8 = puVar21;
  pcStack_f0 = "solid";
  auStack_70._0_8_ = &pcStack_f0;
  local_78 = (Variant **)&local_f8;
  D_METHODP((char *)&local_1d8,(char ***)"set_point_solid",uVar25);
  Variant::Variant((Variant *)&local_78,true);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_d8 = (Variant *)&local_78;
  pMVar24 = create_method_bind<AStarGrid2D,Vector2i_const&,bool>(set_point_solid);
  ClassDB::bind_methodfi(1,pMVar24,false,(MethodDefinition *)&local_1d8,&local_d8,1);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar2 = Variant::needs_deinit[(int)local_78];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[(int)local_78];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  puStack_d0 = (undefined *)0x0;
  local_d8 = (Variant *)&_LC40;
  local_78 = &local_d8;
  D_METHODP((char *)&local_1d8,(char ***)"is_point_solid",uVar25);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar24 = create_method_bind<AStarGrid2D,bool,Vector2i_const&>(is_point_solid);
  ClassDB::bind_methodfi(1,pMVar24,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  local_108 = 0;
  local_118 = puVar21;
  pcStack_110 = "weight_scale";
  auStack_70._0_8_ = &pcStack_110;
  local_78 = (Variant **)&local_118;
  D_METHODP((char *)&local_1d8,(char ***)"set_point_weight_scale",uVar25);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar24 = create_method_bind<AStarGrid2D,Vector2i_const&,float>(set_point_weight_scale);
  ClassDB::bind_methodfi(1,pMVar24,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  puStack_d0 = (undefined *)0x0;
  local_d8 = (Variant *)&_LC40;
  local_78 = &local_d8;
  D_METHODP((char *)&local_1d8,(char ***)"get_point_weight_scale",uVar25);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar24 = create_method_bind<AStarGrid2D,float,Vector2i_const&>(get_point_weight_scale);
  ClassDB::bind_methodfi(1,pMVar24,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  local_128 = 0;
  local_138 = puVar20;
  pcStack_130 = "solid";
  auStack_70._0_8_ = &pcStack_130;
  local_78 = (Variant **)&local_138;
  D_METHODP((char *)&local_1d8,(char ***)"fill_solid_region",uVar25);
  Variant::Variant((Variant *)&local_78,true);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_d8 = (Variant *)&local_78;
  pMVar24 = create_method_bind<AStarGrid2D,Rect2i_const&,bool>(fill_solid_region);
  ClassDB::bind_methodfi(1,pMVar24,false,(MethodDefinition *)&local_1d8,&local_d8,1);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar2 = Variant::needs_deinit[(int)local_78];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[(int)local_78];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  local_148 = 0;
  local_158 = puVar20;
  pcStack_150 = "weight_scale";
  auStack_70._0_8_ = &pcStack_150;
  local_78 = (Variant **)&local_158;
  D_METHODP((char *)&local_1d8,(char ***)"fill_weight_scale_region",uVar25);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar24 = create_method_bind<AStarGrid2D,Rect2i_const&,float>(fill_weight_scale_region);
  ClassDB::bind_methodfi(1,pMVar24,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  D_METHODP((char *)&local_1d8,(char ***)"clear",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar24 = create_method_bind<AStarGrid2D>(clear);
  ClassDB::bind_methodfi(1,pMVar24,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  puStack_d0 = (undefined *)0x0;
  local_d8 = (Variant *)&_LC40;
  local_78 = &local_d8;
  D_METHODP((char *)&local_1d8,(char ***)"get_point_position",uVar25);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar24 = create_method_bind<AStarGrid2D,Vector2,Vector2i_const&>(get_point_position);
  ClassDB::bind_methodfi(1,pMVar24,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  puStack_d0 = (undefined *)0x0;
  local_d8 = (Variant *)0x10ca60;
  local_78 = &local_d8;
  D_METHODP((char *)&local_1d8,(char ***)"get_point_data_in_region",uVar25);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar24 = create_method_bind<AStarGrid2D,TypedArray<Dictionary>,Rect2i_const&>
                      (get_point_data_in_region);
  ClassDB::bind_methodfi(1,pMVar24,false,(MethodDefinition *)&local_1d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  local_98 = (Variant *)puVar18;
  puStack_90 = puVar19;
  auStack_70._8_8_ = &local_88;
  auStack_70._0_8_ = &puStack_90;
  local_80 = 0;
  local_88 = "allow_partial_path";
  local_78 = &local_98;
  D_METHODP((char *)&local_1d8,(char ***)"get_point_path",uVar25);
  Variant::Variant((Variant *)&local_78,false);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_98 = (Variant *)&local_78;
  pMVar24 = create_method_bind<AStarGrid2D,Vector<Vector2>,Vector2i_const&,Vector2i_const&,bool>
                      (get_point_path);
  ClassDB::bind_methodfi(1,pMVar24,false,(MethodDefinition *)&local_1d8,&local_98,1);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar2 = Variant::needs_deinit[(int)local_78];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[(int)local_78];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  local_b8 = puVar18;
  puStack_b0 = puVar19;
  auStack_70._8_8_ = &local_a8;
  auStack_70._0_8_ = &puStack_b0;
  local_a0 = 0;
  local_a8 = "allow_partial_path";
  local_78 = (Variant **)&local_b8;
  D_METHODP((char *)&local_1d8,(char ***)"get_id_path",uVar25);
  Variant::Variant((Variant *)&local_78,false);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_98 = (Variant *)&local_78;
  pMVar24 = create_method_bind<AStarGrid2D,TypedArray<Vector2i>,Vector2i_const&,Vector2i_const&,bool>
                      (get_id_path);
  ClassDB::bind_methodfi(1,pMVar24,false,(MethodDefinition *)&local_1d8,&local_98,1);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1d8);
  local_210 = 0;
  local_208 = (char *)0x0;
  local_1d8 = "from_id";
  local_1d0 = 7;
  String::parse_latin1((StrRange *)&local_208);
  local_1d8 = (char *)0x0;
  if (local_208 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1d8,(CowData *)&local_208);
  }
  Vector<String>::push_back((Vector<String> *)&local_218,(MethodDefinition *)&local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
  local_220 = 0;
  local_1d8 = "end_id";
  local_1d0 = 6;
  String::parse_latin1((StrRange *)&local_220);
  local_1d8 = (char *)0x0;
  if (local_220 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1d8,(CowData *)&local_220);
  }
  Vector<String>::push_back((Vector<String> *)&local_218,(MethodDefinition *)&local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_208);
  local_1c8._0_8_ = 0;
  local_1c8._8_8_ = 0;
  local_208 = "_estimate_cost";
  local_1d8 = (char *)0x0;
  local_1d0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 6;
  local_1a0 = 1;
  local_198[0] = 0;
  local_188 = (int *)0x0;
  local_180 = 0;
  local_170 = 0;
  local_200 = 0xe;
  String::parse_latin1((StrRange *)&local_1d8);
  local_1a0 = CONCAT44(local_1a0._4_4_,0xc);
  GetTypeInfo<float,void>::get_class_info((GetTypeInfo<float,void> *)&local_208);
  uVar22 = local_1c8._0_8_;
  local_1d0 = CONCAT44(local_1d0._4_4_,local_208._0_4_);
  if (local_1c8._0_8_ != local_200) {
    lVar26 = local_200;
    if (local_1c8._0_8_ != 0) {
      LOCK();
      plVar1 = (long *)(local_1c8._0_8_ + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_1c8._0_8_ = 0;
        Memory::free_static((void *)(uVar22 + -0x10),false);
        lVar26 = local_200;
      }
    }
    local_200 = 0;
    local_1c8._0_8_ = lVar26;
  }
  if (local_1c8._8_8_ != local_1f8) {
    StringName::unref();
    local_1c8._8_8_ = local_1f8;
    local_1f8 = 0;
  }
  lVar26 = local_1b0;
  local_1b8 = CONCAT44(local_1b8._4_4_,local_1f0);
  if (local_1b0 != local_1e8) {
    lVar28 = local_1e8;
    if (local_1b0 != 0) {
      LOCK();
      plVar1 = (long *)(local_1b0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_1b0 = 0;
        Memory::free_static((void *)(lVar26 + -0x10),false);
        lVar28 = local_1e8;
      }
    }
    local_1e8 = 0;
    local_1b0 = lVar28;
  }
  local_1a8 = CONCAT44(local_1a8._4_4_,local_1e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_208);
  local_180 = CONCAT44(local_180._4_4_,9);
  GetTypeInfo<Vector2i,void>::get_class_info((GetTypeInfo<Vector2i,void> *)&local_208);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_198,(PropertyInfo *)&local_208);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_208);
  Vector<int>::push_back(local_178,0);
  GetTypeInfo<Vector2i,void>::get_class_info((GetTypeInfo<Vector2i,void> *)&local_208);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_198,(PropertyInfo *)&local_208);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_208);
  Vector<int>::push_back(local_178,0);
  local_208 = "AStarGrid2D";
  local_220 = 0;
  local_200 = 0xb;
  String::parse_latin1((StrRange *)&local_220);
  StringName::StringName((StringName *)&local_208,(String *)&local_220,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_208,(MethodInfo *)&local_1d8,true,(Vector<String> *)&local_218,
             false);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  lVar26 = local_170;
  if (local_170 != 0) {
    LOCK();
    plVar1 = (long *)(local_170 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_170 = 0;
      Memory::free_static((void *)(lVar26 + -0x10),false);
    }
  }
  piVar23 = local_188;
  if (local_188 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_188 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_188 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar26 = *(long *)(local_188 + -2);
      lVar28 = 0;
      local_188 = (int *)0x0;
      piVar27 = piVar23;
      if (lVar26 != 0) {
        do {
          if (Variant::needs_deinit[*piVar27] != '\0') {
            Variant::_clear_internal();
          }
          lVar28 = lVar28 + 1;
          piVar27 = piVar27 + 6;
        } while (lVar26 != lVar28);
      }
      Memory::free_static(piVar23 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  if ((StringName::configured != '\0') && (local_1c8._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
  CowData<String>::_unref((CowData<String> *)&local_210);
  local_210 = 0;
  local_208 = (char *)0x0;
  local_1d8 = "from_id";
  local_1d0 = 7;
  String::parse_latin1((StrRange *)&local_208);
  local_1d8 = (char *)0x0;
  if (local_208 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1d8,(CowData *)&local_208);
  }
  Vector<String>::push_back((Vector<String> *)&local_218,(MethodDefinition *)&local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
  local_220 = 0;
  local_1d8 = "to_id";
  local_1d0 = 5;
  String::parse_latin1((StrRange *)&local_220);
  local_1d8 = (char *)0x0;
  if (local_220 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1d8,(CowData *)&local_220);
  }
  Vector<String>::push_back((Vector<String> *)&local_218,(MethodDefinition *)&local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_208);
  local_1c8._0_8_ = 0;
  local_1c8._8_8_ = 0;
  local_208 = "_compute_cost";
  local_1d8 = (char *)0x0;
  local_1d0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 6;
  local_1a0 = 1;
  local_198[0] = 0;
  local_188 = (int *)0x0;
  local_180 = 0;
  local_170 = 0;
  local_200 = 0xd;
  String::parse_latin1((StrRange *)&local_1d8);
  local_1a0 = CONCAT44(local_1a0._4_4_,0xc);
  GetTypeInfo<float,void>::get_class_info((GetTypeInfo<float,void> *)&local_208);
  uVar22 = local_1c8._0_8_;
  local_1d0 = CONCAT44(local_1d0._4_4_,local_208._0_4_);
  if (local_1c8._0_8_ != local_200) {
    lVar26 = local_200;
    if (local_1c8._0_8_ != 0) {
      LOCK();
      plVar1 = (long *)(local_1c8._0_8_ + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_1c8._0_8_ = 0;
        Memory::free_static((void *)(uVar22 + -0x10),false);
        lVar26 = local_200;
      }
    }
    local_200 = 0;
    local_1c8._0_8_ = lVar26;
  }
  if (local_1c8._8_8_ != local_1f8) {
    StringName::unref();
    local_1c8._8_8_ = local_1f8;
    local_1f8 = 0;
  }
  lVar26 = local_1b0;
  local_1b8 = CONCAT44(local_1b8._4_4_,local_1f0);
  if (local_1b0 != local_1e8) {
    lVar28 = local_1e8;
    if (local_1b0 != 0) {
      LOCK();
      plVar1 = (long *)(local_1b0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_1b0 = 0;
        Memory::free_static((void *)(lVar26 + -0x10),false);
        lVar28 = local_1e8;
      }
    }
    local_1e8 = 0;
    local_1b0 = lVar28;
  }
  local_1a8 = CONCAT44(local_1a8._4_4_,local_1e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_208);
  local_180 = CONCAT44(local_180._4_4_,9);
  GetTypeInfo<Vector2i,void>::get_class_info((GetTypeInfo<Vector2i,void> *)&local_208);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_198,(PropertyInfo *)&local_208);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_208);
  Vector<int>::push_back(local_178,0);
  GetTypeInfo<Vector2i,void>::get_class_info((GetTypeInfo<Vector2i,void> *)&local_208);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_198,(PropertyInfo *)&local_208);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_208);
  Vector<int>::push_back(local_178,0);
  local_208 = "AStarGrid2D";
  local_220 = 0;
  local_200 = 0xb;
  String::parse_latin1((StrRange *)&local_220);
  StringName::StringName((StringName *)&local_208,(String *)&local_220,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_208,(MethodInfo *)&local_1d8,true,(Vector<String> *)&local_218,
             false);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  lVar26 = local_170;
  if (local_170 != 0) {
    LOCK();
    plVar1 = (long *)(local_170 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_170 = 0;
      Memory::free_static((void *)(lVar26 + -0x10),false);
    }
  }
  piVar23 = local_188;
  if (local_188 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_188 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_188 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar26 = *(long *)(local_188 + -2);
      lVar28 = 0;
      local_188 = (int *)0x0;
      piVar27 = piVar23;
      if (lVar26 != 0) {
        do {
          if (Variant::needs_deinit[*piVar27] != '\0') {
            Variant::_clear_internal();
          }
          lVar28 = lVar28 + 1;
          piVar27 = piVar27 + 6;
        } while (lVar26 != lVar28);
      }
      Memory::free_static(piVar23 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  if ((StringName::configured != '\0') && (local_1c8._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d8);
  CowData<String>::_unref((CowData<String> *)&local_210);
  _scs_create((char *)&local_218,true);
  _scs_create((char *)&local_220,true);
  local_228 = 0;
  local_1d8 = "";
  local_230 = 0;
  local_1d0 = 0;
  String::parse_latin1((StrRange *)&local_230);
  local_238 = 0;
  local_1d8 = "region";
  local_1d0 = 6;
  String::parse_latin1((StrRange *)&local_238);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_1d8,8,(StrRange *)&local_238,0,(StrRange *)&local_230,6,
             (StrRange *)&local_228);
  local_208 = "AStarGrid2D";
  local_240 = 0;
  local_200 = 0xb;
  String::parse_latin1((StrRange *)&local_240);
  StringName::StringName((StringName *)&local_208,(String *)&local_240,false);
  ClassDB::add_property
            ((StringName *)&local_208,(PropertyInfo *)&local_1d8,(StringName *)&local_220,
             (StringName *)&local_218,-1);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_240);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  if ((((StringName::configured != '\0') &&
       ((local_228 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_220 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_218 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_218,true);
  _scs_create((char *)&local_220,true);
  local_1d8 = "";
  local_228 = 0;
  local_230 = 0;
  local_1d0 = 0;
  String::parse_latin1((StrRange *)&local_230);
  local_1d8 = "size";
  local_238 = 0;
  local_1d0 = 4;
  String::parse_latin1((StrRange *)&local_238);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_1d8,6,(StrRange *)&local_238,0,(StrRange *)&local_230,6,
             (StrRange *)&local_228);
  local_208 = "AStarGrid2D";
  local_240 = 0;
  local_200 = 0xb;
  String::parse_latin1((StrRange *)&local_240);
  StringName::StringName((StringName *)&local_208,(String *)&local_240,false);
  ClassDB::add_property
            ((StringName *)&local_208,(PropertyInfo *)&local_1d8,(StringName *)&local_220,
             (StringName *)&local_218,-1);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_240);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  if ((((StringName::configured != '\0') &&
       ((local_228 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_220 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_218 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_218,true);
  _scs_create((char *)&local_220,true);
  local_1d8 = "";
  local_228 = 0;
  local_230 = 0;
  local_1d0 = 0;
  String::parse_latin1((StrRange *)&local_230);
  local_1d8 = "offset";
  local_238 = 0;
  local_1d0 = 6;
  String::parse_latin1((StrRange *)&local_238);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_1d8,5,(StrRange *)&local_238,0,(StrRange *)&local_230,6,
             (StrRange *)&local_228);
  local_208 = "AStarGrid2D";
  local_240 = 0;
  local_200 = 0xb;
  String::parse_latin1((StrRange *)&local_240);
  StringName::StringName((StringName *)&local_208,(String *)&local_240,false);
  ClassDB::add_property
            ((StringName *)&local_208,(PropertyInfo *)&local_1d8,(StringName *)&local_220,
             (StringName *)&local_218,-1);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_240);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  if ((((StringName::configured != '\0') &&
       ((local_228 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_220 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_218 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_218,true);
  _scs_create((char *)&local_220,true);
  local_1d8 = "";
  local_228 = 0;
  local_230 = 0;
  local_1d0 = 0;
  String::parse_latin1((StrRange *)&local_230);
  local_1d8 = "cell_size";
  local_238 = 0;
  local_1d0 = 9;
  String::parse_latin1((StrRange *)&local_238);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_1d8,5,(StrRange *)&local_238,0,(StrRange *)&local_230,6,
             (StrRange *)&local_228);
  local_208 = "AStarGrid2D";
  local_240 = 0;
  local_200 = 0xb;
  String::parse_latin1((StrRange *)&local_240);
  StringName::StringName((StringName *)&local_208,(String *)&local_240,false);
  ClassDB::add_property
            ((StringName *)&local_208,(PropertyInfo *)&local_1d8,(StringName *)&local_220,
             (StringName *)&local_218,-1);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_240);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  if (((StringName::configured != '\0') &&
      ((local_228 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_220 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_218 != 0)
      ))) {
    StringName::unref();
  }
  _scs_create((char *)&local_218,true);
  _scs_create((char *)&local_220,true);
  local_1d8 = "Square,IsometricRight,IsometricDown";
  local_228 = 0;
  local_230 = 0;
  local_1d0 = 0x23;
  String::parse_latin1((StrRange *)&local_230);
  local_1d8 = "cell_shape";
  local_238 = 0;
  local_1d0 = 10;
  String::parse_latin1((StrRange *)&local_238);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_1d8,2,(StrRange *)&local_238,2,(StrRange *)&local_230,6,
             (StrRange *)&local_228);
  local_208 = "AStarGrid2D";
  local_240 = 0;
  local_200 = 0xb;
  String::parse_latin1((StrRange *)&local_240);
  StringName::StringName((StringName *)&local_208,(String *)&local_240,false);
  ClassDB::add_property
            ((StringName *)&local_208,(PropertyInfo *)&local_1d8,(StringName *)&local_220,
             (StringName *)&local_218,-1);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_240);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  if ((((StringName::configured != '\0') &&
       ((local_228 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_220 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_218 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_218,true);
  _scs_create((char *)&local_220,true);
  local_1d8 = "";
  local_228 = 0;
  local_230 = 0;
  local_1d0 = 0;
  String::parse_latin1((StrRange *)&local_230);
  local_1d8 = "jumping_enabled";
  local_238 = 0;
  local_1d0 = 0xf;
  String::parse_latin1((StrRange *)&local_238);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_1d8,1,(StrRange *)&local_238,0,(StrRange *)&local_230,6,
             (StrRange *)&local_228);
  local_208 = "AStarGrid2D";
  local_240 = 0;
  local_200 = 0xb;
  String::parse_latin1((StrRange *)&local_240);
  StringName::StringName((StringName *)&local_208,(String *)&local_240,false);
  ClassDB::add_property
            ((StringName *)&local_208,(PropertyInfo *)&local_1d8,(StringName *)&local_220,
             (StringName *)&local_218,-1);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_240);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  if ((((StringName::configured != '\0') &&
       ((local_228 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_220 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_218 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_218,true);
  _scs_create((char *)&local_220,true);
  local_1d8 = "Euclidean,Manhattan,Octile,Chebyshev";
  local_228 = 0;
  local_230 = 0;
  local_1d0 = 0x24;
  String::parse_latin1((StrRange *)&local_230);
  local_1d8 = "default_compute_heuristic";
  local_238 = 0;
  local_1d0 = 0x19;
  String::parse_latin1((StrRange *)&local_238);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_1d8,2,(StrRange *)&local_238,2,(StrRange *)&local_230,6,
             (StrRange *)&local_228);
  local_208 = "AStarGrid2D";
  local_240 = 0;
  local_200 = 0xb;
  String::parse_latin1((StrRange *)&local_240);
  StringName::StringName((StringName *)&local_208,(String *)&local_240,false);
  ClassDB::add_property
            ((StringName *)&local_208,(PropertyInfo *)&local_1d8,(StringName *)&local_220,
             (StringName *)&local_218,-1);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_240);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  if ((((StringName::configured != '\0') &&
       ((local_228 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_220 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_218 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_218,true);
  _scs_create((char *)&local_220,true);
  local_1d8 = "Euclidean,Manhattan,Octile,Chebyshev";
  local_228 = 0;
  local_230 = 0;
  local_1d0 = 0x24;
  String::parse_latin1((StrRange *)&local_230);
  local_1d8 = "default_estimate_heuristic";
  local_238 = 0;
  local_1d0 = 0x1a;
  String::parse_latin1((StrRange *)&local_238);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_1d8,2,(StrRange *)&local_238,2,(StrRange *)&local_230,6,
             (StrRange *)&local_228);
  local_208 = "AStarGrid2D";
  local_240 = 0;
  local_200 = 0xb;
  String::parse_latin1((StrRange *)&local_240);
  StringName::StringName((StringName *)&local_208,(String *)&local_240,false);
  ClassDB::add_property
            ((StringName *)&local_208,(PropertyInfo *)&local_1d8,(StringName *)&local_220,
             (StringName *)&local_218,-1);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_240);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  if (((StringName::configured != '\0') &&
      ((local_228 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_220 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_218 != 0)
      ))) {
    StringName::unref();
  }
  _scs_create((char *)&local_218,true);
  _scs_create((char *)&local_220,true);
  local_1d8 = "Never,Always,At Least One Walkable,Only If No Obstacles";
  local_228 = 0;
  local_230 = 0;
  local_1d0 = 0x37;
  String::parse_latin1((StrRange *)&local_230);
  local_1d8 = "diagonal_mode";
  local_238 = 0;
  local_1d0 = 0xd;
  String::parse_latin1((StrRange *)&local_238);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_1d8,2,(StrRange *)&local_238,2,(StrRange *)&local_230,6,
             (StrRange *)&local_228);
  local_208 = "AStarGrid2D";
  local_240 = 0;
  local_200 = 0xb;
  String::parse_latin1((StrRange *)&local_240);
  StringName::StringName((StringName *)&local_208,(String *)&local_240,false);
  ClassDB::add_property
            ((StringName *)&local_208,(PropertyInfo *)&local_1d8,(StringName *)&local_220,
             (StringName *)&local_218,-1);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_240);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  if ((((StringName::configured != '\0') &&
       ((local_228 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_220 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_218 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"HEURISTIC_EUCLIDEAN",false);
  local_220 = 0;
  local_1d8 = "HEURISTIC_EUCLIDEAN";
  local_1d0 = 0x13;
  String::parse_latin1((StrRange *)&local_220);
  GetTypeInfo<AStarGrid2D::Heuristic,void>::get_class_info
            ((GetTypeInfo<AStarGrid2D::Heuristic,void> *)&local_1d8);
  local_218 = local_1c8._0_8_;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = local_1c8._8_8_;
  local_1c8 = auVar17 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1d8);
  local_1d8 = "AStarGrid2D";
  local_228 = 0;
  local_1d0 = 0xb;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,0,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"HEURISTIC_MANHATTAN",false);
  local_220 = 0;
  local_1d8 = "HEURISTIC_MANHATTAN";
  local_1d0 = 0x13;
  String::parse_latin1((StrRange *)&local_220);
  GetTypeInfo<AStarGrid2D::Heuristic,void>::get_class_info
            ((GetTypeInfo<AStarGrid2D::Heuristic,void> *)&local_1d8);
  local_218 = local_1c8._0_8_;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_1c8._8_8_;
  local_1c8 = auVar4 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1d8);
  local_1d8 = "AStarGrid2D";
  local_228 = 0;
  local_1d0 = 0xb;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,1,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"HEURISTIC_OCTILE",false);
  local_220 = 0;
  local_1d8 = "HEURISTIC_OCTILE";
  local_1d0 = 0x10;
  String::parse_latin1((StrRange *)&local_220);
  GetTypeInfo<AStarGrid2D::Heuristic,void>::get_class_info
            ((GetTypeInfo<AStarGrid2D::Heuristic,void> *)&local_1d8);
  local_218 = local_1c8._0_8_;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = local_1c8._8_8_;
  local_1c8 = auVar5 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1d8);
  local_1d8 = "AStarGrid2D";
  local_228 = 0;
  local_1d0 = 0xb;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,2,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"HEURISTIC_CHEBYSHEV",false);
  local_220 = 0;
  local_1d8 = "HEURISTIC_CHEBYSHEV";
  local_1d0 = 0x13;
  String::parse_latin1((StrRange *)&local_220);
  GetTypeInfo<AStarGrid2D::Heuristic,void>::get_class_info
            ((GetTypeInfo<AStarGrid2D::Heuristic,void> *)&local_1d8);
  local_218 = local_1c8._0_8_;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = local_1c8._8_8_;
  local_1c8 = auVar6 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1d8);
  local_1d8 = "AStarGrid2D";
  local_228 = 0;
  local_1d0 = 0xb;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,3,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"HEURISTIC_MAX",false);
  local_220 = 0;
  local_1d8 = "HEURISTIC_MAX";
  local_1d0 = 0xd;
  String::parse_latin1((StrRange *)&local_220);
  GetTypeInfo<AStarGrid2D::Heuristic,void>::get_class_info
            ((GetTypeInfo<AStarGrid2D::Heuristic,void> *)&local_1d8);
  local_218 = local_1c8._0_8_;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = local_1c8._8_8_;
  local_1c8 = auVar7 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1d8);
  local_1d8 = "AStarGrid2D";
  local_228 = 0;
  local_1d0 = 0xb;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,4,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"DIAGONAL_MODE_ALWAYS",false);
  local_220 = 0;
  local_1d8 = "DIAGONAL_MODE_ALWAYS";
  local_1d0 = 0x14;
  String::parse_latin1((StrRange *)&local_220);
  GetTypeInfo<AStarGrid2D::DiagonalMode,void>::get_class_info
            ((GetTypeInfo<AStarGrid2D::DiagonalMode,void> *)&local_1d8);
  local_218 = local_1c8._0_8_;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = local_1c8._8_8_;
  local_1c8 = auVar8 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1d8);
  local_1d8 = "AStarGrid2D";
  local_228 = 0;
  local_1d0 = 0xb;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,0,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"DIAGONAL_MODE_NEVER",false);
  local_220 = 0;
  local_1d8 = "DIAGONAL_MODE_NEVER";
  local_1d0 = 0x13;
  String::parse_latin1((StrRange *)&local_220);
  GetTypeInfo<AStarGrid2D::DiagonalMode,void>::get_class_info
            ((GetTypeInfo<AStarGrid2D::DiagonalMode,void> *)&local_1d8);
  local_218 = local_1c8._0_8_;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = local_1c8._8_8_;
  local_1c8 = auVar9 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1d8);
  local_1d8 = "AStarGrid2D";
  local_228 = 0;
  local_1d0 = 0xb;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,1,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"DIAGONAL_MODE_AT_LEAST_ONE_WALKABLE",false);
  local_220 = 0;
  local_1d8 = "DIAGONAL_MODE_AT_LEAST_ONE_WALKABLE";
  local_1d0 = 0x23;
  String::parse_latin1((StrRange *)&local_220);
  GetTypeInfo<AStarGrid2D::DiagonalMode,void>::get_class_info
            ((GetTypeInfo<AStarGrid2D::DiagonalMode,void> *)&local_1d8);
  local_218 = local_1c8._0_8_;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = local_1c8._8_8_;
  local_1c8 = auVar10 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1d8);
  local_1d8 = "AStarGrid2D";
  local_228 = 0;
  local_1d0 = 0xb;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,2,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"DIAGONAL_MODE_ONLY_IF_NO_OBSTACLES",false);
  local_220 = 0;
  local_1d8 = "DIAGONAL_MODE_ONLY_IF_NO_OBSTACLES";
  local_1d0 = 0x22;
  String::parse_latin1((StrRange *)&local_220);
  GetTypeInfo<AStarGrid2D::DiagonalMode,void>::get_class_info
            ((GetTypeInfo<AStarGrid2D::DiagonalMode,void> *)&local_1d8);
  local_218 = local_1c8._0_8_;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = local_1c8._8_8_;
  local_1c8 = auVar11 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1d8);
  local_1d8 = "AStarGrid2D";
  local_228 = 0;
  local_1d0 = 0xb;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,3,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"DIAGONAL_MODE_MAX",false);
  local_220 = 0;
  local_1d8 = "DIAGONAL_MODE_MAX";
  local_1d0 = 0x11;
  String::parse_latin1((StrRange *)&local_220);
  GetTypeInfo<AStarGrid2D::DiagonalMode,void>::get_class_info
            ((GetTypeInfo<AStarGrid2D::DiagonalMode,void> *)&local_1d8);
  local_218 = local_1c8._0_8_;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = local_1c8._8_8_;
  local_1c8 = auVar12 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1d8);
  local_1d8 = "AStarGrid2D";
  local_228 = 0;
  local_1d0 = 0xb;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,4,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"CELL_SHAPE_SQUARE",false);
  local_220 = 0;
  local_1d8 = "CELL_SHAPE_SQUARE";
  local_1d0 = 0x11;
  String::parse_latin1((StrRange *)&local_220);
  GetTypeInfo<AStarGrid2D::CellShape,void>::get_class_info
            ((GetTypeInfo<AStarGrid2D::CellShape,void> *)&local_1d8);
  local_218 = local_1c8._0_8_;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = local_1c8._8_8_;
  local_1c8 = auVar13 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1d8);
  local_1d8 = "AStarGrid2D";
  local_228 = 0;
  local_1d0 = 0xb;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,0,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"CELL_SHAPE_ISOMETRIC_RIGHT",false);
  local_220 = 0;
  local_1d8 = "CELL_SHAPE_ISOMETRIC_RIGHT";
  local_1d0 = 0x1a;
  String::parse_latin1((StrRange *)&local_220);
  GetTypeInfo<AStarGrid2D::CellShape,void>::get_class_info
            ((GetTypeInfo<AStarGrid2D::CellShape,void> *)&local_1d8);
  local_218 = local_1c8._0_8_;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = local_1c8._8_8_;
  local_1c8 = auVar14 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1d8);
  local_1d8 = "AStarGrid2D";
  local_228 = 0;
  local_1d0 = 0xb;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,1,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"CELL_SHAPE_ISOMETRIC_DOWN",false);
  local_220 = 0;
  local_1d8 = "CELL_SHAPE_ISOMETRIC_DOWN";
  local_1d0 = 0x19;
  String::parse_latin1((StrRange *)&local_220);
  GetTypeInfo<AStarGrid2D::CellShape,void>::get_class_info
            ((GetTypeInfo<AStarGrid2D::CellShape,void> *)&local_1d8);
  local_218 = local_1c8._0_8_;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = local_1c8._8_8_;
  local_1c8 = auVar15 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1d8);
  local_1d8 = "AStarGrid2D";
  local_228 = 0;
  local_1d0 = 0xb;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,2,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_208,"CELL_SHAPE_MAX",false);
  local_220 = 0;
  local_1d8 = "CELL_SHAPE_MAX";
  local_1d0 = 0xe;
  String::parse_latin1((StrRange *)&local_220);
  GetTypeInfo<AStarGrid2D::CellShape,void>::get_class_info
            ((GetTypeInfo<AStarGrid2D::CellShape,void> *)&local_1d8);
  local_218 = local_1c8._0_8_;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = local_1c8._8_8_;
  local_1c8 = auVar16 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1d8);
  local_1d8 = "AStarGrid2D";
  local_228 = 0;
  local_1d0 = 0xb;
  String::parse_latin1((StrRange *)&local_228);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_228,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_1d8,(StringName *)&local_218,(StringName *)&local_208,3,false);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  if ((StringName::configured != '\0') && (local_218 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AStarGrid2D::_compute_cost(Vector2i const&, Vector2i const&) */

void __thiscall AStarGrid2D::_compute_cost(AStarGrid2D *this,Vector2i *param_1,Vector2i *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  undefined8 local_168;
  long local_160;
  GetTypeInfo<float,void> local_158 [8];
  long local_150 [5];
  int local_128 [2];
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [16];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8 [2];
  undefined8 local_d8;
  undefined8 local_d0;
  Vector<int> local_c8 [8];
  undefined8 local_c0;
  Variant *local_b8;
  undefined8 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  undefined8 local_98 [4];
  Variant **local_78;
  undefined8 *puStack_70;
  int local_60 [8];
  long local_40;
  
  plVar4 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b8 = *(Variant **)param_1;
  local_b0 = *(undefined8 *)param_2;
  if (plVar4 == (long *)0x0) {
LAB_0010a595:
    if ((*(long *)(this + 8) != 0) && (this[0x210] == (AStarGrid2D)0x0)) {
      local_128[0] = 0;
      local_128[1] = 0;
      local_118 = (undefined1  [16])0x0;
      uStack_120 = 0;
      uStack_11c = 0;
      local_108 = 0;
      local_100 = 0;
      local_f8 = 6;
      local_f0 = 1;
      local_e8[0] = 0;
      local_d8 = 0;
      local_d0 = 0;
      local_c0 = 0;
      String::parse_latin1((String *)local_128,"_compute_cost");
      local_f0 = CONCAT44(local_f0._4_4_,0xc);
      GetTypeInfo<float,void>::get_class_info(local_158);
      PropertyInfo::operator=((PropertyInfo *)&uStack_120,(PropertyInfo *)local_158);
      PropertyInfo::~PropertyInfo((PropertyInfo *)local_158);
      local_d0 = CONCAT44(local_d0._4_4_,9);
      GetTypeInfo<Vector2i,void>::get_class_info((GetTypeInfo<Vector2i,void> *)local_158);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_e8,(PropertyInfo *)local_158);
      PropertyInfo::~PropertyInfo((PropertyInfo *)local_158);
      Vector<int>::push_back(local_c8,0);
      GetTypeInfo<Vector2i,void>::get_class_info((GetTypeInfo<Vector2i,void> *)local_158);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_e8,(PropertyInfo *)local_158);
      PropertyInfo::~PropertyInfo((PropertyInfo *)local_158);
      Vector<int>::push_back(local_c8,0);
      uVar1 = MethodInfo::get_compatibility_hash();
      *(undefined8 *)(this + 0x218) = 0;
      lVar3 = *(long *)(this + 8);
      pcVar5 = *(code **)(lVar3 + 0xd8);
      if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
         (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
        local_168 = 0;
        String::parse_latin1((String *)&local_168,"AStarGrid2D");
        StringName::StringName((StringName *)&local_160,(String *)&local_168,false);
        ClassDB::get_virtual_method_compatibility_hashes
                  ((StringName *)local_158,(StringName *)&local_160);
        if (local_150[0] == 0) {
          lVar3 = 0;
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_150);
          if (StringName::configured != '\0') goto LAB_0010a9b3;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
LAB_0010a9d2:
          lVar3 = *(long *)(this + 8);
          pcVar5 = *(code **)(lVar3 + 200);
          if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
             (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 == (code *)0x0)) goto LAB_0010a8af;
          uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x208);
          *(undefined8 *)(this + 0x218) = uVar2;
        }
        else {
          lVar3 = *(long *)(local_150[0] + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_150);
          if (StringName::configured != '\0') {
LAB_0010a9b3:
            if (local_160 != 0) {
              StringName::unref();
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
          if (lVar3 == 0) goto LAB_0010a9d2;
        }
        lVar3 = *(long *)(this + 8);
      }
      else {
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x208,uVar1);
        *(undefined8 *)(this + 0x218) = uVar2;
        lVar3 = *(long *)(this + 8);
      }
LAB_0010a8af:
      if (*(char *)(lVar3 + 0x29) != '\0') {
        plVar4 = (long *)operator_new(0x18,"");
        *plVar4 = (long)(this + 0x218);
        plVar4[1] = (long)(this + 0x210);
        plVar4[2] = *(long *)(this + 0x168);
        *(long **)(this + 0x168) = plVar4;
      }
      this[0x210] = (AStarGrid2D)0x1;
      MethodInfo::~MethodInfo((MethodInfo *)local_128);
    }
    pcVar5 = *(code **)(this + 0x218);
    if (pcVar5 == (code *)0x0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010a6a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(heuristics + (long)*(int *)(this + 0x1ac) * 8))(param_1,param_2);
        return;
      }
      goto LAB_0010aa46;
    }
    local_78 = &local_a8;
    local_a8 = local_b8;
    local_98[0] = local_b0;
    puStack_70 = local_98;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar5)(*(undefined8 *)(this + 0x10),&local_78,local_128);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x208,pcVar5,&local_78,local_128);
    }
  }
  else {
    local_128[0] = 0;
    local_128[1] = 0;
    uStack_120 = 0;
    Variant::Variant((Variant *)&local_78,(Vector2i *)&local_b8);
    Variant::Variant((Variant *)local_60,(Vector2i *)&local_b0);
    local_a8 = (Variant *)&local_78;
    pVStack_a0 = (Variant *)local_60;
    (**(code **)(*plVar4 + 0x60))((Variant *)local_98,plVar4,this + 0x208,&local_a8,2,local_128);
    if (local_128[0] != 0) {
      if (Variant::needs_deinit[(int)local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_60[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010a595;
    }
    Variant::operator_cast_to_float((Variant *)local_98);
    if (Variant::needs_deinit[(int)local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_60[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010aa46:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AStarGrid2D::_estimate_cost(Vector2i const&, Vector2i const&) */

void __thiscall AStarGrid2D::_estimate_cost(AStarGrid2D *this,Vector2i *param_1,Vector2i *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  undefined8 local_168;
  long local_160;
  GetTypeInfo<float,void> local_158 [8];
  long local_150 [5];
  int local_128 [2];
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [16];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8 [2];
  undefined8 local_d8;
  undefined8 local_d0;
  Vector<int> local_c8 [8];
  undefined8 local_c0;
  Variant *local_b8;
  undefined8 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  undefined8 local_98 [4];
  Variant **local_78;
  undefined8 *puStack_70;
  int local_60 [8];
  long local_40;
  
  plVar4 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b8 = *(Variant **)param_1;
  local_b0 = *(undefined8 *)param_2;
  if (plVar4 == (long *)0x0) {
LAB_0010abb5:
    if ((*(long *)(this + 8) != 0) && (this[0x1f8] == (AStarGrid2D)0x0)) {
      local_128[0] = 0;
      local_128[1] = 0;
      local_118 = (undefined1  [16])0x0;
      uStack_120 = 0;
      uStack_11c = 0;
      local_108 = 0;
      local_100 = 0;
      local_f8 = 6;
      local_f0 = 1;
      local_e8[0] = 0;
      local_d8 = 0;
      local_d0 = 0;
      local_c0 = 0;
      String::parse_latin1((String *)local_128,"_estimate_cost");
      local_f0 = CONCAT44(local_f0._4_4_,0xc);
      GetTypeInfo<float,void>::get_class_info(local_158);
      PropertyInfo::operator=((PropertyInfo *)&uStack_120,(PropertyInfo *)local_158);
      PropertyInfo::~PropertyInfo((PropertyInfo *)local_158);
      local_d0 = CONCAT44(local_d0._4_4_,9);
      GetTypeInfo<Vector2i,void>::get_class_info((GetTypeInfo<Vector2i,void> *)local_158);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_e8,(PropertyInfo *)local_158);
      PropertyInfo::~PropertyInfo((PropertyInfo *)local_158);
      Vector<int>::push_back(local_c8,0);
      GetTypeInfo<Vector2i,void>::get_class_info((GetTypeInfo<Vector2i,void> *)local_158);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_e8,(PropertyInfo *)local_158);
      PropertyInfo::~PropertyInfo((PropertyInfo *)local_158);
      Vector<int>::push_back(local_c8,0);
      uVar1 = MethodInfo::get_compatibility_hash();
      *(undefined8 *)(this + 0x200) = 0;
      lVar3 = *(long *)(this + 8);
      pcVar5 = *(code **)(lVar3 + 0xd8);
      if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
         (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
        local_168 = 0;
        String::parse_latin1((String *)&local_168,"AStarGrid2D");
        StringName::StringName((StringName *)&local_160,(String *)&local_168,false);
        ClassDB::get_virtual_method_compatibility_hashes
                  ((StringName *)local_158,(StringName *)&local_160);
        if (local_150[0] == 0) {
          lVar3 = 0;
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_150);
          if (StringName::configured != '\0') goto LAB_0010afd3;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
LAB_0010aff2:
          lVar3 = *(long *)(this + 8);
          pcVar5 = *(code **)(lVar3 + 200);
          if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
             (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 == (code *)0x0)) goto LAB_0010aecf;
          uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x1f0);
          *(undefined8 *)(this + 0x200) = uVar2;
        }
        else {
          lVar3 = *(long *)(local_150[0] + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_150);
          if (StringName::configured != '\0') {
LAB_0010afd3:
            if (local_160 != 0) {
              StringName::unref();
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
          if (lVar3 == 0) goto LAB_0010aff2;
        }
        lVar3 = *(long *)(this + 8);
      }
      else {
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x1f0,uVar1);
        *(undefined8 *)(this + 0x200) = uVar2;
        lVar3 = *(long *)(this + 8);
      }
LAB_0010aecf:
      if (*(char *)(lVar3 + 0x29) != '\0') {
        plVar4 = (long *)operator_new(0x18,"");
        *plVar4 = (long)(this + 0x200);
        plVar4[1] = (long)(this + 0x1f8);
        plVar4[2] = *(long *)(this + 0x168);
        *(long **)(this + 0x168) = plVar4;
      }
      this[0x1f8] = (AStarGrid2D)0x1;
      MethodInfo::~MethodInfo((MethodInfo *)local_128);
    }
    pcVar5 = *(code **)(this + 0x200);
    if (pcVar5 == (code *)0x0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010acc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(heuristics + (long)*(int *)(this + 0x1b0) * 8))(param_1,param_2);
        return;
      }
      goto LAB_0010b066;
    }
    local_78 = &local_a8;
    local_a8 = local_b8;
    local_98[0] = local_b0;
    puStack_70 = local_98;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar5)(*(undefined8 *)(this + 0x10),&local_78,local_128);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x1f0,pcVar5,&local_78,local_128);
    }
  }
  else {
    local_128[0] = 0;
    local_128[1] = 0;
    uStack_120 = 0;
    Variant::Variant((Variant *)&local_78,(Vector2i *)&local_b8);
    Variant::Variant((Variant *)local_60,(Vector2i *)&local_b0);
    local_a8 = (Variant *)&local_78;
    pVStack_a0 = (Variant *)local_60;
    (**(code **)(*plVar4 + 0x60))((Variant *)local_98,plVar4,this + 0x1f0,&local_a8,2,local_128);
    if (local_128[0] != 0) {
      if (Variant::needs_deinit[(int)local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_60[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010abb5;
    }
    Variant::operator_cast_to_float((Variant *)local_98);
    if (Variant::needs_deinit[(int)local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_60[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010b066:
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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x125c,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x125c,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* AStarGrid2D::is_class_ptr(void*) const */

uint __thiscall AStarGrid2D::is_class_ptr(AStarGrid2D *this,void *param_1)

{
  return (uint)CONCAT71(0x125c,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x125c,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x125c,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* AStarGrid2D::_getv(StringName const&, Variant&) const */

undefined8 AStarGrid2D::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AStarGrid2D::_setv(StringName const&, Variant const&) */

undefined8 AStarGrid2D::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AStarGrid2D::_validate_propertyv(PropertyInfo&) const */

void AStarGrid2D::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* AStarGrid2D::_property_can_revertv(StringName const&) const */

undefined8 AStarGrid2D::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* AStarGrid2D::_property_get_revertv(StringName const&, Variant&) const */

undefined8 AStarGrid2D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AStarGrid2D::_notificationv(int, bool) */

void AStarGrid2D::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MethodBindTR<TypedArray<Vector2i>, Vector2i const&, Vector2i const&,
   bool>::_gen_argument_type(int) const */

char __thiscall
MethodBindTR<TypedArray<Vector2i>,Vector2i_const&,Vector2i_const&,bool>::_gen_argument_type
          (MethodBindTR<TypedArray<Vector2i>,Vector2i_const&,Vector2i_const&,bool> *this,int param_1
          )

{
  char cVar1;
  
  cVar1 = '\x1c';
  if ((uint)param_1 < 3) {
    cVar1 = (param_1 != 2) * '\x05' + '\x01';
  }
  return cVar1;
}



/* MethodBindTR<TypedArray<Vector2i>, Vector2i const&, Vector2i const&,
   bool>::get_argument_meta(int) const */

undefined8
MethodBindTR<TypedArray<Vector2i>,Vector2i_const&,Vector2i_const&,bool>::get_argument_meta
          (int param_1)

{
  return 0;
}



/* MethodBindTR<Vector<Vector2>, Vector2i const&, Vector2i const&, bool>::_gen_argument_type(int)
   const */

char __thiscall
MethodBindTR<Vector<Vector2>,Vector2i_const&,Vector2i_const&,bool>::_gen_argument_type
          (MethodBindTR<Vector<Vector2>,Vector2i_const&,Vector2i_const&,bool> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '#';
  if ((uint)param_1 < 3) {
    cVar1 = (param_1 != 2) * '\x05' + '\x01';
  }
  return cVar1;
}



/* MethodBindTR<Vector<Vector2>, Vector2i const&, Vector2i const&, bool>::get_argument_meta(int)
   const */

undefined8
MethodBindTR<Vector<Vector2>,Vector2i_const&,Vector2i_const&,bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<TypedArray<Dictionary>, Rect2i const&>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<TypedArray<Dictionary>,Rect2i_const&>::_gen_argument_type
          (MethodBindTRC<TypedArray<Dictionary>,Rect2i_const&> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffec) + 0x1c;
}



/* MethodBindTRC<TypedArray<Dictionary>, Rect2i const&>::get_argument_meta(int) const */

undefined8 MethodBindTRC<TypedArray<Dictionary>,Rect2i_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Vector2, Vector2i const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRC<Vector2,Vector2i_const&>::_gen_argument_type
          (MethodBindTRC<Vector2,Vector2i_const&> *this,int param_1)

{
  return (param_1 == 0) + '\x05';
}



/* MethodBindTRC<Vector2, Vector2i const&>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Vector2,Vector2i_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Rect2i const&, float>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<Rect2i_const&,float>::_gen_argument_type
          (MethodBindT<Rect2i_const&,float> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((uint)param_1 < 2) {
    cVar1 = (-(param_1 == 0) & 5U) + 3;
  }
  return cVar1;
}



/* MethodBindT<Rect2i const&, float>::get_argument_meta(int) const */

char __thiscall
MethodBindT<Rect2i_const&,float>::get_argument_meta
          (MethodBindT<Rect2i_const&,float> *this,int param_1)

{
  return (param_1 == 1) * '\t';
}



/* MethodBindT<Rect2i const&, bool>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<Rect2i_const&,bool>::_gen_argument_type
          (MethodBindT<Rect2i_const&,bool> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((uint)param_1 < 2) {
    cVar1 = (-(param_1 == 0) & 7U) + 1;
  }
  return cVar1;
}



/* MethodBindT<Rect2i const&, bool>::get_argument_meta(int) const */

undefined8 MethodBindT<Rect2i_const&,bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<float, Vector2i const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRC<float,Vector2i_const&>::_gen_argument_type
          (MethodBindTRC<float,Vector2i_const&> *this,int param_1)

{
  return (-(param_1 == 0) & 3U) + 3;
}



/* MethodBindTRC<float, Vector2i const&>::get_argument_meta(int) const */

uint __thiscall
MethodBindTRC<float,Vector2i_const&>::get_argument_meta
          (MethodBindTRC<float,Vector2i_const&> *this,int param_1)

{
  return param_1 >> 0x1f & 9;
}



/* MethodBindT<Vector2i const&, float>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<Vector2i_const&,float>::_gen_argument_type
          (MethodBindT<Vector2i_const&,float> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((uint)param_1 < 2) {
    cVar1 = (-(param_1 == 0) & 3U) + 3;
  }
  return cVar1;
}



/* MethodBindT<Vector2i const&, float>::get_argument_meta(int) const */

char __thiscall
MethodBindT<Vector2i_const&,float>::get_argument_meta
          (MethodBindT<Vector2i_const&,float> *this,int param_1)

{
  return (param_1 == 1) * '\t';
}



/* MethodBindT<Vector2i const&, bool>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<Vector2i_const&,bool>::_gen_argument_type
          (MethodBindT<Vector2i_const&,bool> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((uint)param_1 < 2) {
    cVar1 = (-(param_1 == 0) & 5U) + 1;
  }
  return cVar1;
}



/* MethodBindT<Vector2i const&, bool>::get_argument_meta(int) const */

undefined8 MethodBindT<Vector2i_const&,bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<AStarGrid2D::Heuristic>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<AStarGrid2D::Heuristic>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<AStarGrid2D::Heuristic>::get_argument_meta(int) const */

undefined8 MethodBindTRC<AStarGrid2D::Heuristic>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<AStarGrid2D::Heuristic>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<AStarGrid2D::Heuristic>::_gen_argument_type
          (MethodBindT<AStarGrid2D::Heuristic> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<AStarGrid2D::Heuristic>::get_argument_meta(int) const */

undefined8 MethodBindT<AStarGrid2D::Heuristic>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<AStarGrid2D::DiagonalMode>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<AStarGrid2D::DiagonalMode>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<AStarGrid2D::DiagonalMode>::get_argument_meta(int) const */

undefined8 MethodBindTRC<AStarGrid2D::DiagonalMode>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<AStarGrid2D::DiagonalMode>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<AStarGrid2D::DiagonalMode>::_gen_argument_type
          (MethodBindT<AStarGrid2D::DiagonalMode> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<AStarGrid2D::DiagonalMode>::get_argument_meta(int) const */

undefined8 MethodBindT<AStarGrid2D::DiagonalMode>::get_argument_meta(int param_1)

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



/* MethodBindT<>::_gen_argument_type(int) const */

undefined8 MethodBindT<>::_gen_argument_type(int param_1)

{
  return 0;
}



/* MethodBindT<>::_gen_argument_type_info(int) const */

undefined8 MethodBindT<>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  
  *(undefined4 *)CONCAT44(in_register_0000003c,param_1) = 0;
  *(undefined4 *)(CONCAT44(in_register_0000003c,param_1) + 0x18) = 0;
  *(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 0x20) = 0;
  *(undefined4 *)(CONCAT44(in_register_0000003c,param_1) + 0x28) = 6;
  *(undefined1 (*) [16])(CONCAT44(in_register_0000003c,param_1) + 8) = (undefined1  [16])0x0;
  return CONCAT44(in_register_0000003c,param_1);
}



/* MethodBindT<>::get_argument_meta(int) const */

undefined8 MethodBindT<>::get_argument_meta(int param_1)

{
  return 0;
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



/* MethodBindTRC<bool, Vector2i const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRC<bool,Vector2i_const&>::_gen_argument_type
          (MethodBindTRC<bool,Vector2i_const&> *this,int param_1)

{
  return (-(param_1 == 0) & 5U) + 1;
}



/* MethodBindTRC<bool, Vector2i const&>::get_argument_meta(int) const */

undefined8 MethodBindTRC<bool,Vector2i_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<bool, int, int>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRC<bool,int,int>::_gen_argument_type(MethodBindTRC<bool,int,int> *this,int param_1)

{
  return ((uint)param_1 < 2) + '\x01';
}



/* MethodBindTRC<bool, int, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<bool,int,int>::get_argument_meta(MethodBindTRC<bool,int,int> *this,int param_1)

{
  return -((uint)param_1 < 2) & 3;
}



/* MethodBindTRC<AStarGrid2D::CellShape>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<AStarGrid2D::CellShape>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<AStarGrid2D::CellShape>::get_argument_meta(int) const */

undefined8 MethodBindTRC<AStarGrid2D::CellShape>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<AStarGrid2D::CellShape>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<AStarGrid2D::CellShape>::_gen_argument_type
          (MethodBindT<AStarGrid2D::CellShape> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<AStarGrid2D::CellShape>::get_argument_meta(int) const */

undefined8 MethodBindT<AStarGrid2D::CellShape>::get_argument_meta(int param_1)

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



/* MethodBindTRC<Vector2i>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Vector2i>::_gen_argument_type(int param_1)

{
  return 6;
}



/* MethodBindTRC<Vector2i>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Vector2i>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Vector2i const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Vector2i_const&>::_gen_argument_type(MethodBindT<Vector2i_const&> *this,int param_1)

{
  return -(param_1 == 0) & 6;
}



/* MethodBindT<Vector2i const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Vector2i_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Rect2i>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Rect2i>::_gen_argument_type(int param_1)

{
  return 8;
}



/* MethodBindTRC<Rect2i>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Rect2i>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Rect2i const&>::_gen_argument_type(int) const */

long __thiscall
MethodBindT<Rect2i_const&>::_gen_argument_type(MethodBindT<Rect2i_const&> *this,int param_1)

{
  return (ulong)(param_1 == 0) << 3;
}



/* MethodBindT<Rect2i const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Rect2i_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Vector<Vector2>, Vector2i const&, Vector2i const&>::_gen_argument_type(int) const */

int __thiscall
MethodBindTR<Vector<Vector2>,Vector2i_const&,Vector2i_const&>::_gen_argument_type
          (MethodBindTR<Vector<Vector2>,Vector2i_const&,Vector2i_const&> *this,int param_1)

{
  return (-(uint)((uint)param_1 < 2) & 0xffffffe3) + 0x23;
}



/* MethodBindTR<Vector<Vector2>, Vector2i const&, Vector2i const&>::get_argument_meta(int) const */

undefined8
MethodBindTR<Vector<Vector2>,Vector2i_const&,Vector2i_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<TypedArray<Vector2i>, Vector2i const&, Vector2i const&>::_gen_argument_type(int)
   const */

int __thiscall
MethodBindTR<TypedArray<Vector2i>,Vector2i_const&,Vector2i_const&>::_gen_argument_type
          (MethodBindTR<TypedArray<Vector2i>,Vector2i_const&,Vector2i_const&> *this,int param_1)

{
  return (-(uint)((uint)param_1 < 2) & 0xffffffea) + 0x1c;
}



/* MethodBindTR<TypedArray<Vector2i>, Vector2i const&, Vector2i const&>::get_argument_meta(int)
   const */

undefined8
MethodBindTR<TypedArray<Vector2i>,Vector2i_const&,Vector2i_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<TypedArray<Vector2i>, Vector2i const&, Vector2i const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<TypedArray<Vector2i>,Vector2i_const&,Vector2i_const&>::~MethodBindTR
          (MethodBindTR<TypedArray<Vector2i>,Vector2i_const&,Vector2i_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125170;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<TypedArray<Vector2i>, Vector2i const&, Vector2i const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<TypedArray<Vector2i>,Vector2i_const&,Vector2i_const&>::~MethodBindTR
          (MethodBindTR<TypedArray<Vector2i>,Vector2i_const&,Vector2i_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125170;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Vector<Vector2>, Vector2i const&, Vector2i const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Vector<Vector2>,Vector2i_const&,Vector2i_const&>::~MethodBindTR
          (MethodBindTR<Vector<Vector2>,Vector2i_const&,Vector2i_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001251d0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Vector<Vector2>, Vector2i const&, Vector2i const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Vector<Vector2>,Vector2i_const&,Vector2i_const&>::~MethodBindTR
          (MethodBindTR<Vector<Vector2>,Vector2i_const&,Vector2i_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001251d0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Rect2i const&>::~MethodBindT() */

void __thiscall MethodBindT<Rect2i_const&>::~MethodBindT(MethodBindT<Rect2i_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125230;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Rect2i const&>::~MethodBindT() */

void __thiscall MethodBindT<Rect2i_const&>::~MethodBindT(MethodBindT<Rect2i_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125230;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Rect2i>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Rect2i>::~MethodBindTRC(MethodBindTRC<Rect2i> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125290;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Rect2i>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Rect2i>::~MethodBindTRC(MethodBindTRC<Rect2i> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125290;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Vector2i const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector2i_const&>::~MethodBindT(MethodBindT<Vector2i_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001252f0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Vector2i const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector2i_const&>::~MethodBindT(MethodBindT<Vector2i_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001252f0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Vector2i>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector2i>::~MethodBindTRC(MethodBindTRC<Vector2i> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125350;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Vector2i>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector2i>::~MethodBindTRC(MethodBindTRC<Vector2i> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125350;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Vector2 const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector2_const&>::~MethodBindT(MethodBindT<Vector2_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001253b0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Vector2 const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector2_const&>::~MethodBindT(MethodBindT<Vector2_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001253b0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Vector2>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector2>::~MethodBindTRC(MethodBindTRC<Vector2> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125410;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Vector2>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector2>::~MethodBindTRC(MethodBindTRC<Vector2> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125410;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<AStarGrid2D::CellShape>::~MethodBindT() */

void __thiscall
MethodBindT<AStarGrid2D::CellShape>::~MethodBindT(MethodBindT<AStarGrid2D::CellShape> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125470;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<AStarGrid2D::CellShape>::~MethodBindT() */

void __thiscall
MethodBindT<AStarGrid2D::CellShape>::~MethodBindT(MethodBindT<AStarGrid2D::CellShape> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125470;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<AStarGrid2D::CellShape>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<AStarGrid2D::CellShape>::~MethodBindTRC(MethodBindTRC<AStarGrid2D::CellShape> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001254d0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<AStarGrid2D::CellShape>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<AStarGrid2D::CellShape>::~MethodBindTRC(MethodBindTRC<AStarGrid2D::CellShape> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001254d0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool, int, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool,int,int>::~MethodBindTRC(MethodBindTRC<bool,int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125530;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool, int, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool,int,int>::~MethodBindTRC(MethodBindTRC<bool,int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125530;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001256b0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001256b0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001255f0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001255f0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<AStarGrid2D::DiagonalMode>::~MethodBindT() */

void __thiscall
MethodBindT<AStarGrid2D::DiagonalMode>::~MethodBindT(MethodBindT<AStarGrid2D::DiagonalMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125710;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<AStarGrid2D::DiagonalMode>::~MethodBindT() */

void __thiscall
MethodBindT<AStarGrid2D::DiagonalMode>::~MethodBindT(MethodBindT<AStarGrid2D::DiagonalMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125710;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<AStarGrid2D::DiagonalMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<AStarGrid2D::DiagonalMode>::~MethodBindTRC
          (MethodBindTRC<AStarGrid2D::DiagonalMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125770;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<AStarGrid2D::DiagonalMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<AStarGrid2D::DiagonalMode>::~MethodBindTRC
          (MethodBindTRC<AStarGrid2D::DiagonalMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125770;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<AStarGrid2D::Heuristic>::~MethodBindT() */

void __thiscall
MethodBindT<AStarGrid2D::Heuristic>::~MethodBindT(MethodBindT<AStarGrid2D::Heuristic> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001257d0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<AStarGrid2D::Heuristic>::~MethodBindT() */

void __thiscall
MethodBindT<AStarGrid2D::Heuristic>::~MethodBindT(MethodBindT<AStarGrid2D::Heuristic> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001257d0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<AStarGrid2D::Heuristic>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<AStarGrid2D::Heuristic>::~MethodBindTRC(MethodBindTRC<AStarGrid2D::Heuristic> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125830;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<AStarGrid2D::Heuristic>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<AStarGrid2D::Heuristic>::~MethodBindTRC(MethodBindTRC<AStarGrid2D::Heuristic> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125830;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Vector2i const&, bool>::~MethodBindT() */

void __thiscall
MethodBindT<Vector2i_const&,bool>::~MethodBindT(MethodBindT<Vector2i_const&,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125890;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Vector2i const&, bool>::~MethodBindT() */

void __thiscall
MethodBindT<Vector2i_const&,bool>::~MethodBindT(MethodBindT<Vector2i_const&,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125890;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool, Vector2i const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<bool,Vector2i_const&>::~MethodBindTRC(MethodBindTRC<bool,Vector2i_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125590;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool, Vector2i const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<bool,Vector2i_const&>::~MethodBindTRC(MethodBindTRC<bool,Vector2i_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125590;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Vector2i const&, float>::~MethodBindT() */

void __thiscall
MethodBindT<Vector2i_const&,float>::~MethodBindT(MethodBindT<Vector2i_const&,float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001258f0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Vector2i const&, float>::~MethodBindT() */

void __thiscall
MethodBindT<Vector2i_const&,float>::~MethodBindT(MethodBindT<Vector2i_const&,float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001258f0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<float, Vector2i const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<float,Vector2i_const&>::~MethodBindTRC(MethodBindTRC<float,Vector2i_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125950;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<float, Vector2i const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<float,Vector2i_const&>::~MethodBindTRC(MethodBindTRC<float,Vector2i_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125950;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Rect2i const&, bool>::~MethodBindT() */

void __thiscall MethodBindT<Rect2i_const&,bool>::~MethodBindT(MethodBindT<Rect2i_const&,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001259b0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Rect2i const&, bool>::~MethodBindT() */

void __thiscall MethodBindT<Rect2i_const&,bool>::~MethodBindT(MethodBindT<Rect2i_const&,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001259b0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Rect2i const&, float>::~MethodBindT() */

void __thiscall
MethodBindT<Rect2i_const&,float>::~MethodBindT(MethodBindT<Rect2i_const&,float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125a10;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Rect2i const&, float>::~MethodBindT() */

void __thiscall
MethodBindT<Rect2i_const&,float>::~MethodBindT(MethodBindT<Rect2i_const&,float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125a10;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125650;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125650;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Vector2, Vector2i const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Vector2,Vector2i_const&>::~MethodBindTRC(MethodBindTRC<Vector2,Vector2i_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125a70;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Vector2, Vector2i const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Vector2,Vector2i_const&>::~MethodBindTRC(MethodBindTRC<Vector2,Vector2i_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125a70;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<TypedArray<Dictionary>, Rect2i const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TypedArray<Dictionary>,Rect2i_const&>::~MethodBindTRC
          (MethodBindTRC<TypedArray<Dictionary>,Rect2i_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125ad0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<TypedArray<Dictionary>, Rect2i const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TypedArray<Dictionary>,Rect2i_const&>::~MethodBindTRC
          (MethodBindTRC<TypedArray<Dictionary>,Rect2i_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125ad0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Vector<Vector2>, Vector2i const&, Vector2i const&, bool>::~MethodBindTR() */

void __thiscall
MethodBindTR<Vector<Vector2>,Vector2i_const&,Vector2i_const&,bool>::~MethodBindTR
          (MethodBindTR<Vector<Vector2>,Vector2i_const&,Vector2i_const&,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125b30;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Vector<Vector2>, Vector2i const&, Vector2i const&, bool>::~MethodBindTR() */

void __thiscall
MethodBindTR<Vector<Vector2>,Vector2i_const&,Vector2i_const&,bool>::~MethodBindTR
          (MethodBindTR<Vector<Vector2>,Vector2i_const&,Vector2i_const&,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125b30;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<TypedArray<Vector2i>, Vector2i const&, Vector2i const&, bool>::~MethodBindTR() */

void __thiscall
MethodBindTR<TypedArray<Vector2i>,Vector2i_const&,Vector2i_const&,bool>::~MethodBindTR
          (MethodBindTR<TypedArray<Vector2i>,Vector2i_const&,Vector2i_const&,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125b90;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<TypedArray<Vector2i>, Vector2i const&, Vector2i const&, bool>::~MethodBindTR() */

void __thiscall
MethodBindTR<TypedArray<Vector2i>,Vector2i_const&,Vector2i_const&,bool>::~MethodBindTR
          (MethodBindTR<TypedArray<Vector2i>,Vector2i_const&,Vector2i_const&,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00125b90;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00124ea0;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00124ea0;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

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



/* AStarGrid2D::_bind_compatibility_methods() [clone .cold] */

void AStarGrid2D::_bind_compatibility_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<String>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* AStarGrid2D::_bind_methods() [clone .cold] */

void AStarGrid2D::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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
LAB_0010cdd3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010cdd3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0010ce3e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0010ce3e:
  return &_get_class_namev()::_class_name_static;
}



/* AStarGrid2D::_get_class_namev() const */

undefined8 * AStarGrid2D::_get_class_namev(void)

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
LAB_0010ceb3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010ceb3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"AStarGrid2D");
      goto LAB_0010cf1e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"AStarGrid2D");
LAB_0010cf1e:
  return &_get_class_namev()::_class_name_static;
}



/* AStarGrid2D::get_class() const */

void AStarGrid2D::get_class(void)

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



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010d17f;
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
LAB_0010d17f:
    cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
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
    if (cVar6 != '\0') goto LAB_0010d233;
  }
  cVar6 = String::operator==((String *)param_1,"RefCounted");
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
              if (lVar5 == 0) goto LAB_0010d2e3;
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
LAB_0010d2e3:
      cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
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
      if (cVar6 != '\0') goto LAB_0010d233;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==((String *)param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_0010d233:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AStarGrid2D::is_class(String const&) const */

undefined8 __thiscall AStarGrid2D::is_class(AStarGrid2D *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010d40f;
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
LAB_0010d40f:
    cVar5 = String::operator==((String *)param_1,(StrRange *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0010d4c3;
  }
  cVar5 = String::operator==((String *)param_1,"AStarGrid2D");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010d4c3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
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
  local_48 = &_LC8;
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
      goto joined_r0x0010d65c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010d65c:
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
  local_48 = &_LC8;
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
      goto joined_r0x0010d7dc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010d7dc:
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



/* MethodBindTRC<Rect2i>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Rect2i>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC8;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 8;
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
      goto joined_r0x0010d95c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010d95c:
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



/* MethodBindTRC<Vector2i>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Vector2i>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC8;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 6;
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
      goto joined_r0x0010dadc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010dadc:
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



/* RefCounted::_initialize_classv() */

void RefCounted::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_48 = 0;
    local_38 = "Object";
    local_30 = 6;
    String::parse_latin1((StrRange *)&local_48);
    StringName::StringName((StringName *)&local_40,(String *)&local_48,false);
    local_38 = "RefCounted";
    local_50 = 0;
    local_30 = 10;
    String::parse_latin1((StrRange *)&local_50);
    StringName::StringName((StringName *)&local_38,(String *)&local_50,false);
    ClassDB::_add_class2((StringName *)&local_38,(StringName *)&local_40);
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
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
    if ((StringName::configured != '\0') && (local_40 != 0)) {
      StringName::unref();
    }
    lVar2 = local_48;
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
    if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
      RefCounted::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
LAB_0010de28:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010de28;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x0010de46;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x0010de46:
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



/* AStarGrid2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall AStarGrid2D::_get_property_listv(AStarGrid2D *this,List *param_1,bool param_2)

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
  local_78 = "AStarGrid2D";
  local_70 = 0xb;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AStarGrid2D";
  local_98 = 0;
  local_70 = 0xb;
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
LAB_0010e228:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010e228;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010e245;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010e245:
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
  StringName::StringName((StringName *)&local_78,"AStarGrid2D",false);
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



/* GetTypeInfo<float, void>::get_class_info() */

GetTypeInfo<float,void> * __thiscall
GetTypeInfo<float,void>::get_class_info(GetTypeInfo<float,void> *this)

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
  local_48 = &_LC8;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 3;
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
      goto joined_r0x0010e84c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010e84c:
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



/* GetTypeInfo<Vector2i, void>::get_class_info() */

GetTypeInfo<Vector2i,void> * __thiscall
GetTypeInfo<Vector2i,void>::get_class_info(GetTypeInfo<Vector2i,void> *this)

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
  local_48 = &_LC8;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 6;
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
      goto joined_r0x0010e9cc;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010e9cc:
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



/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  
  if (*(long *)(this + 0x10) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x10) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(this + 0x10);
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = plVar1[-1];
      *(undefined8 *)(this + 0x10) = 0;
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
    }
  }
  if ((StringName::configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
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



/* MethodInfo::~MethodInfo() */

void __thiscall MethodInfo::~MethodInfo(MethodInfo *this)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  code *pcVar4;
  int *piVar5;
  long lVar6;
  
  if (*(long *)(this + 0x68) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x68) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x68);
      *(undefined8 *)(this + 0x68) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x50) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x50) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      piVar2 = *(int **)(this + 0x50);
      if (piVar2 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = *(long *)(piVar2 + -2);
      *(undefined8 *)(this + 0x50) = 0;
      if (lVar3 != 0) {
        lVar6 = 0;
        piVar5 = piVar2;
        do {
          if (Variant::needs_deinit[*piVar5] != '\0') {
            Variant::_clear_internal();
          }
          lVar6 = lVar6 + 1;
          piVar5 = piVar5 + 6;
        } while (lVar3 != lVar6);
      }
      Memory::free_static(piVar2 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)(this + 0x40));
  if (*(long *)(this + 0x28) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x28) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x28);
      *(undefined8 *)(this + 0x28) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 0x18) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 0x10) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x10) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x10);
      *(undefined8 *)(this + 0x10) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return;
    }
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



/* String vformat<Vector2i, Rect2i>(String const&, Vector2i const, Rect2i const) */

long * vformat<Vector2i,Rect2i>
                 (long *param_1,bool *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  Variant *pVVar1;
  long *plVar2;
  long lVar3;
  Variant *pVVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined8 local_108;
  undefined8 local_100;
  String *local_f8;
  undefined8 local_f0 [2];
  char local_d9;
  Array local_d8 [8];
  long local_d0;
  undefined8 local_c8;
  String local_c0 [8];
  undefined8 local_b8;
  String local_b0 [8];
  String local_a8 [8];
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  local_108 = param_4;
  local_100 = param_5;
  local_f0[0] = param_3;
  Variant::Variant(local_88,(Vector2i *)local_f0);
  Variant::Variant(local_70,(Rect2i *)&local_108);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar5 = (int)local_d8;
  Array::resize(iVar5);
  pVVar4 = (Variant *)Array::operator[](iVar5);
  Variant::operator=(pVVar4,local_88);
  pVVar4 = (Variant *)Array::operator[](iVar5);
  Variant::operator=(pVVar4,local_70);
  local_d9 = '\0';
  String::sprintf((Array *)&local_d0,param_2);
  if (local_d9 == '\0') {
    *param_1 = local_d0;
  }
  else {
    local_a0 = 0;
    local_98 = ".";
    local_90 = 1;
    String::parse_latin1((StrRange *)&local_a0);
    local_b8 = 0;
    local_98 = "\": ";
    local_90 = 3;
    String::parse_latin1((StrRange *)&local_b8);
    local_c8 = 0;
    local_98 = "Formatting error in string \"";
    local_90 = 0x1c;
    String::parse_latin1((StrRange *)&local_c8);
    String::operator+(local_c0,(String *)&local_c8);
    local_f8 = local_c0;
    String::operator+(local_b0,local_c0);
    String::operator+(local_a8,local_b0);
    String::operator+((String *)&local_98,local_a8);
    _err_print_error("vformat","./core/variant/variant.h",0x3b1,
                     "Condition \"error\" is true. Returning: String()",(String *)&local_98,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    lVar3 = local_d0;
    *param_1 = 0;
    if (local_d0 != 0) {
      LOCK();
      plVar2 = (long *)(local_d0 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_d0 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
  }
  pVVar4 = (Variant *)local_40;
  Array::~Array(local_d8);
  do {
    pVVar1 = pVVar4 + -0x18;
    pVVar4 = pVVar4 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar4 != local_88);
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x0010f378) */
/* WARNING: Removing unreachable block (ram,0x0010f50d) */
/* WARNING: Removing unreachable block (ram,0x0010f519) */
/* String vformat<float>(String const&, float const) */

String * vformat<float>(String *param_1,float param_2)

{
  Variant *this;
  bool *in_RSI;
  int iVar1;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_2);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar1 = (int)local_c8;
  Array::resize(iVar1);
  this = (Variant *)Array::operator[](iVar1);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,in_RSI);
  *(undefined8 *)param_1 = local_c0[0];
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



/* MethodBindT<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<bool>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
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
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar7 = 0;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  puVar7[10] = 6;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_0010f5b9;
  local_78 = 0;
  local_68 = &_LC8;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0010f6b0:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010f6b0;
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
  *puVar7 = local_68._0_4_;
  if (*(long *)(puVar7 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 2));
    uVar5 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(puVar7 + 2) = uVar5;
  }
  if (*(long *)(puVar7 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar5 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar7 + 4) = uVar5;
  }
  lVar6 = local_48;
  puVar7[6] = local_50;
  if (*(long *)(puVar7 + 8) == local_48) {
    puVar7[10] = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 8));
    *(long *)(puVar7 + 8) = local_48;
    puVar7[10] = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
LAB_0010f5b9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



/* MethodBindT<Vector2 const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Vector2_const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
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
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar7 = 0;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  puVar7[10] = 6;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_0010f869;
  local_78 = 0;
  local_68 = &_LC8;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,5);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0010f960:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010f960;
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
  *puVar7 = local_68._0_4_;
  if (*(long *)(puVar7 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 2));
    uVar5 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(puVar7 + 2) = uVar5;
  }
  if (*(long *)(puVar7 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar5 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar7 + 4) = uVar5;
  }
  lVar6 = local_48;
  puVar7[6] = local_50;
  if (*(long *)(puVar7 + 8) == local_48) {
    puVar7[10] = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 8));
    *(long *)(puVar7 + 8) = local_48;
    puVar7[10] = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
LAB_0010f869:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



/* MethodBind* create_method_bind<AStarGrid2D, TypedArray<Vector2i>, Vector2i const&, Vector2i
   const&>(TypedArray<Vector2i> (AStarGrid2D::*)(Vector2i const&, Vector2i const&)) */

MethodBind *
create_method_bind<AStarGrid2D,TypedArray<Vector2i>,Vector2i_const&,Vector2i_const&>
          (_func_TypedArray_Vector2i_ptr_Vector2i_ptr *param_1)

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
  *(_func_TypedArray_Vector2i_ptr_Vector2i_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00125170;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "AStarGrid2D";
  local_30 = 0xb;
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



/* MethodBind* create_method_bind<AStarGrid2D, Vector<Vector2>, Vector2i const&, Vector2i
   const&>(Vector<Vector2> (AStarGrid2D::*)(Vector2i const&, Vector2i const&)) */

MethodBind *
create_method_bind<AStarGrid2D,Vector<Vector2>,Vector2i_const&,Vector2i_const&>
          (_func_Vector_Vector2i_ptr_Vector2i_ptr *param_1)

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
  *(_func_Vector_Vector2i_ptr_Vector2i_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001251d0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "AStarGrid2D";
  local_30 = 0xb;
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



/* LocalVector<LocalVector<AStarGrid2D::Point, unsigned int, false, false>, unsigned int, false,
   false>::resize(unsigned int) */

void __thiscall
LocalVector<LocalVector<AStarGrid2D::Point,unsigned_int,false,false>,unsigned_int,false,false>::
resize(LocalVector<LocalVector<AStarGrid2D::Point,unsigned_int,false,false>,unsigned_int,false,false>
       *this,uint param_1)

{
  code *pcVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  
  uVar7 = *(uint *)this;
  if (param_1 < uVar7) {
    lVar6 = (ulong)param_1 << 4;
    uVar7 = param_1;
    do {
      piVar2 = (int *)(*(long *)(this + 8) + lVar6);
      if (*(void **)(piVar2 + 2) != (void *)0x0) {
        if (*piVar2 != 0) {
          *piVar2 = 0;
        }
        Memory::free_static(*(void **)(piVar2 + 2),false);
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x10;
    } while (uVar7 < *(uint *)this);
  }
  else {
    if (param_1 <= uVar7) {
      return;
    }
    uVar5 = param_1 - 1;
    if (*(uint *)(this + 4) < param_1) {
      uVar7 = uVar5 >> 1 | uVar5;
      uVar7 = uVar7 >> 2 | uVar7;
      uVar7 = uVar7 >> 4 | uVar7;
      uVar7 = uVar7 >> 8 | uVar7;
      uVar7 = (uVar7 | uVar7 >> 0x10) + 1;
      *(uint *)(this + 4) = uVar7;
      lVar6 = Memory::realloc_static(*(void **)(this + 8),(ulong)uVar7 << 4,false);
      *(long *)(this + 8) = lVar6;
      if (lVar6 == 0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar7 = *(uint *)this;
      if (param_1 <= uVar7) goto LAB_0010fd89;
    }
    lVar6 = *(long *)(this + 8);
    puVar3 = (undefined8 *)((ulong)uVar7 * 0x10 + lVar6);
    do {
      *puVar3 = 0;
      puVar4 = puVar3 + 2;
      puVar3[1] = 0;
      puVar3 = puVar4;
    } while (puVar4 != (undefined8 *)(lVar6 + 0x10 + ((ulong)(uVar5 - uVar7) + (ulong)uVar7) * 0x10)
            );
  }
LAB_0010fd89:
  *(uint *)this = param_1;
  return;
}



/* AStarGrid2D::~AStarGrid2D() */

void __thiscall AStarGrid2D::~AStarGrid2D(AStarGrid2D *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_00125000;
  if (bVar1) {
    if (*(long *)(this + 0x208) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010fed0;
    }
    if (*(long *)(this + 0x1f0) != 0) {
      StringName::unref();
    }
  }
LAB_0010fed0:
  if (*(long *)(this + 0x1d0) != 0) {
    LocalVector<LocalVector<AStarGrid2D::Point,unsigned_int,false,false>,unsigned_int,false,false>::
    resize((LocalVector<LocalVector<AStarGrid2D::Point,unsigned_int,false,false>,unsigned_int,false,false>
            *)(this + 0x1c8),0);
    if (*(void **)(this + 0x1d0) != (void *)0x0) {
      Memory::free_static(*(void **)(this + 0x1d0),false);
    }
  }
  if (*(void **)(this + 0x1c0) != (void *)0x0) {
    if (*(int *)(this + 0x1b8) != 0) {
      *(undefined4 *)(this + 0x1b8) = 0;
    }
    Memory::free_static(*(void **)(this + 0x1c0),false);
  }
  *(undefined ***)this = &PTR__initialize_classv_00124ea0;
  Object::~Object((Object *)this);
  return;
}



/* AStarGrid2D::~AStarGrid2D() */

void __thiscall AStarGrid2D::~AStarGrid2D(AStarGrid2D *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_00125000;
  if (bVar1) {
    if (*(long *)(this + 0x208) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ff90;
    }
    if (*(long *)(this + 0x1f0) != 0) {
      StringName::unref();
    }
  }
LAB_0010ff90:
  if (*(long *)(this + 0x1d0) != 0) {
    LocalVector<LocalVector<AStarGrid2D::Point,unsigned_int,false,false>,unsigned_int,false,false>::
    resize((LocalVector<LocalVector<AStarGrid2D::Point,unsigned_int,false,false>,unsigned_int,false,false>
            *)(this + 0x1c8),0);
    if (*(void **)(this + 0x1d0) != (void *)0x0) {
      Memory::free_static(*(void **)(this + 0x1d0),false);
    }
  }
  if (*(void **)(this + 0x1c0) != (void *)0x0) {
    if (*(int *)(this + 0x1b8) != 0) {
      *(undefined4 *)(this + 0x1b8) = 0;
    }
    Memory::free_static(*(void **)(this + 0x1c0),false);
  }
  *(undefined ***)this = &PTR__initialize_classv_00124ea0;
  Object::~Object((Object *)this);
  operator_delete(this,0x220);
  return;
}



/* MethodBind* create_method_bind<AStarGrid2D, Rect2i const&>(void (AStarGrid2D::*)(Rect2i const&))
    */

MethodBind * create_method_bind<AStarGrid2D,Rect2i_const&>(_func_void_Rect2i_ptr *param_1)

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
  *(_func_void_Rect2i_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00125230;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "AStarGrid2D";
  local_30 = 0xb;
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



/* MethodBind* create_method_bind<AStarGrid2D, Rect2i>(Rect2i (AStarGrid2D::*)() const) */

MethodBind * create_method_bind<AStarGrid2D,Rect2i>(_func_Rect2i *param_1)

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
  *(_func_Rect2i **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00125290;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "AStarGrid2D";
  local_30 = 0xb;
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



/* MethodBind* create_method_bind<AStarGrid2D, Vector2i const&>(void (AStarGrid2D::*)(Vector2i
   const&)) */

MethodBind * create_method_bind<AStarGrid2D,Vector2i_const&>(_func_void_Vector2i_ptr *param_1)

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
  *(_func_void_Vector2i_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001252f0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "AStarGrid2D";
  local_30 = 0xb;
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



/* MethodBind* create_method_bind<AStarGrid2D, Vector2i>(Vector2i (AStarGrid2D::*)() const) */

MethodBind * create_method_bind<AStarGrid2D,Vector2i>(_func_Vector2i *param_1)

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
  *(_func_Vector2i **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00125350;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "AStarGrid2D";
  local_30 = 0xb;
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



/* MethodBind* create_method_bind<AStarGrid2D, Vector2 const&>(void (AStarGrid2D::*)(Vector2
   const&)) */

MethodBind * create_method_bind<AStarGrid2D,Vector2_const&>(_func_void_Vector2_ptr *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_001253b0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "AStarGrid2D";
  local_30 = 0xb;
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



/* MethodBind* create_method_bind<AStarGrid2D, Vector2>(Vector2 (AStarGrid2D::*)() const) */

MethodBind * create_method_bind<AStarGrid2D,Vector2>(_func_Vector2 *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00125410;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "AStarGrid2D";
  local_30 = 0xb;
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



/* MethodBind* create_method_bind<AStarGrid2D, AStarGrid2D::CellShape>(void
   (AStarGrid2D::*)(AStarGrid2D::CellShape)) */

MethodBind * create_method_bind<AStarGrid2D,AStarGrid2D::CellShape>(_func_void_CellShape *param_1)

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
  *(_func_void_CellShape **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00125470;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "AStarGrid2D";
  local_30 = 0xb;
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



/* MethodBind* create_method_bind<AStarGrid2D, AStarGrid2D::CellShape>(AStarGrid2D::CellShape
   (AStarGrid2D::*)() const) */

MethodBind * create_method_bind<AStarGrid2D,AStarGrid2D::CellShape>(_func_CellShape *param_1)

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
  *(_func_CellShape **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001254d0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "AStarGrid2D";
  local_30 = 0xb;
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



/* MethodBind* create_method_bind<AStarGrid2D, bool, int, int>(bool (AStarGrid2D::*)(int, int)
   const) */

MethodBind * create_method_bind<AStarGrid2D,bool,int,int>(_func_bool_int_int *param_1)

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
  *(_func_bool_int_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00125530;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "AStarGrid2D";
  local_30 = 0xb;
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



/* MethodBind* create_method_bind<AStarGrid2D, bool, Vector2i const&>(bool (AStarGrid2D::*)(Vector2i
   const&) const) */

MethodBind * create_method_bind<AStarGrid2D,bool,Vector2i_const&>(_func_bool_Vector2i_ptr *param_1)

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
  *(_func_bool_Vector2i_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00125590;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "AStarGrid2D";
  local_30 = 0xb;
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



/* MethodBind* create_method_bind<AStarGrid2D, bool>(bool (AStarGrid2D::*)() const) */

MethodBind * create_method_bind<AStarGrid2D,bool>(_func_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_001255f0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "AStarGrid2D";
  local_30 = 0xb;
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



/* MethodBind* create_method_bind<AStarGrid2D>(void (AStarGrid2D::*)()) */

MethodBind * create_method_bind<AStarGrid2D>(_func_void *param_1)

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
  *(_func_void **)(this + 0x58) = param_1;
  *(undefined8 *)(this + 0x60) = in_RSI;
  *(undefined ***)this = &PTR__gen_argument_type_00125650;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "AStarGrid2D";
  local_30 = 0xb;
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



/* MethodBind* create_method_bind<AStarGrid2D, bool>(void (AStarGrid2D::*)(bool)) */

MethodBind * create_method_bind<AStarGrid2D,bool>(_func_void_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_001256b0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "AStarGrid2D";
  local_30 = 0xb;
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



/* MethodBind* create_method_bind<AStarGrid2D, AStarGrid2D::DiagonalMode>(void
   (AStarGrid2D::*)(AStarGrid2D::DiagonalMode)) */

MethodBind *
create_method_bind<AStarGrid2D,AStarGrid2D::DiagonalMode>(_func_void_DiagonalMode *param_1)

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
  *(_func_void_DiagonalMode **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00125710;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "AStarGrid2D";
  local_30 = 0xb;
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



/* MethodBind* create_method_bind<AStarGrid2D, AStarGrid2D::DiagonalMode>(AStarGrid2D::DiagonalMode
   (AStarGrid2D::*)() const) */

MethodBind * create_method_bind<AStarGrid2D,AStarGrid2D::DiagonalMode>(_func_DiagonalMode *param_1)

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
  *(_func_DiagonalMode **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00125770;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "AStarGrid2D";
  local_30 = 0xb;
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



/* MethodBind* create_method_bind<AStarGrid2D, AStarGrid2D::Heuristic>(void
   (AStarGrid2D::*)(AStarGrid2D::Heuristic)) */

MethodBind * create_method_bind<AStarGrid2D,AStarGrid2D::Heuristic>(_func_void_Heuristic *param_1)

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
  *(_func_void_Heuristic **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001257d0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "AStarGrid2D";
  local_30 = 0xb;
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



/* MethodBind* create_method_bind<AStarGrid2D, AStarGrid2D::Heuristic>(AStarGrid2D::Heuristic
   (AStarGrid2D::*)() const) */

MethodBind * create_method_bind<AStarGrid2D,AStarGrid2D::Heuristic>(_func_Heuristic *param_1)

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
  *(_func_Heuristic **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00125830;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "AStarGrid2D";
  local_30 = 0xb;
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



/* MethodBind* create_method_bind<AStarGrid2D, Vector2i const&, bool>(void (AStarGrid2D::*)(Vector2i
   const&, bool)) */

MethodBind *
create_method_bind<AStarGrid2D,Vector2i_const&,bool>(_func_void_Vector2i_ptr_bool *param_1)

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
  *(_func_void_Vector2i_ptr_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00125890;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "AStarGrid2D";
  local_30 = 0xb;
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



/* MethodBind* create_method_bind<AStarGrid2D, Vector2i const&, float>(void
   (AStarGrid2D::*)(Vector2i const&, float)) */

MethodBind *
create_method_bind<AStarGrid2D,Vector2i_const&,float>(_func_void_Vector2i_ptr_float *param_1)

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
  *(_func_void_Vector2i_ptr_float **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001258f0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "AStarGrid2D";
  local_30 = 0xb;
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



/* MethodBind* create_method_bind<AStarGrid2D, float, Vector2i const&>(float
   (AStarGrid2D::*)(Vector2i const&) const) */

MethodBind *
create_method_bind<AStarGrid2D,float,Vector2i_const&>(_func_float_Vector2i_ptr *param_1)

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
  *(_func_float_Vector2i_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00125950;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "AStarGrid2D";
  local_30 = 0xb;
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



/* MethodBind* create_method_bind<AStarGrid2D, Rect2i const&, bool>(void (AStarGrid2D::*)(Rect2i
   const&, bool)) */

MethodBind * create_method_bind<AStarGrid2D,Rect2i_const&,bool>(_func_void_Rect2i_ptr_bool *param_1)

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
  *(_func_void_Rect2i_ptr_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001259b0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "AStarGrid2D";
  local_30 = 0xb;
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



/* MethodBind* create_method_bind<AStarGrid2D, Rect2i const&, float>(void (AStarGrid2D::*)(Rect2i
   const&, float)) */

MethodBind *
create_method_bind<AStarGrid2D,Rect2i_const&,float>(_func_void_Rect2i_ptr_float *param_1)

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
  *(_func_void_Rect2i_ptr_float **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00125a10;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "AStarGrid2D";
  local_30 = 0xb;
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



/* MethodBind* create_method_bind<AStarGrid2D, Vector2, Vector2i const&>(Vector2
   (AStarGrid2D::*)(Vector2i const&) const) */

MethodBind *
create_method_bind<AStarGrid2D,Vector2,Vector2i_const&>(_func_Vector2_Vector2i_ptr *param_1)

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
  *(_func_Vector2_Vector2i_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00125a70;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "AStarGrid2D";
  local_30 = 0xb;
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



/* MethodBind* create_method_bind<AStarGrid2D, TypedArray<Dictionary>, Rect2i
   const&>(TypedArray<Dictionary> (AStarGrid2D::*)(Rect2i const&) const) */

MethodBind *
create_method_bind<AStarGrid2D,TypedArray<Dictionary>,Rect2i_const&>
          (_func_TypedArray_Rect2i_ptr *param_1)

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
  *(_func_TypedArray_Rect2i_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00125ad0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "AStarGrid2D";
  local_30 = 0xb;
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



/* MethodBind* create_method_bind<AStarGrid2D, Vector<Vector2>, Vector2i const&, Vector2i const&,
   bool>(Vector<Vector2> (AStarGrid2D::*)(Vector2i const&, Vector2i const&, bool)) */

MethodBind *
create_method_bind<AStarGrid2D,Vector<Vector2>,Vector2i_const&,Vector2i_const&,bool>
          (_func_Vector_Vector2i_ptr_Vector2i_ptr_bool *param_1)

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
  *(_func_Vector_Vector2i_ptr_Vector2i_ptr_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00125b30;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 3;
  local_40 = 0;
  local_38 = "AStarGrid2D";
  local_30 = 0xb;
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



/* MethodBind* create_method_bind<AStarGrid2D, TypedArray<Vector2i>, Vector2i const&, Vector2i
   const&, bool>(TypedArray<Vector2i> (AStarGrid2D::*)(Vector2i const&, Vector2i const&, bool)) */

MethodBind *
create_method_bind<AStarGrid2D,TypedArray<Vector2i>,Vector2i_const&,Vector2i_const&,bool>
          (_func_TypedArray_Vector2i_ptr_Vector2i_ptr_bool *param_1)

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
  *(_func_TypedArray_Vector2i_ptr_Vector2i_ptr_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00125b90;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 3;
  local_40 = 0;
  local_38 = "AStarGrid2D";
  local_30 = 0xb;
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
/* Error CowData<Vector2>::resize<false>(long) */

undefined8 __thiscall CowData<Vector2>::resize<false>(CowData<Vector2> *this,long param_1)

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
LAB_001121e0:
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
  if (lVar7 == 0) goto LAB_001121e0;
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
LAB_0011214c:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_001120e1;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_0011214c;
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
LAB_001120e1:
  puVar9[-1] = param_1;
  return 0;
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



/* godot::details::enum_qualified_name_to_class_info_name(String const&) */

details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_60;
  char local_58 [8];
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::split(local_58,SUB81(param_1,0),0x1122fa);
  if ((local_50 != 0) && (2 < *(long *)(local_50 + -8))) {
    local_60 = 0;
    local_48 = &_LC55;
    local_40 = 1;
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == 0) {
      lVar4 = 0;
      lVar3 = -2;
    }
    else {
      lVar4 = *(long *)(local_50 + -8);
      lVar3 = lVar4 + -2;
      if (-1 < lVar3) {
        String::operator+((String *)&local_48,(String *)(local_50 + lVar3 * 8));
        String::operator+((String *)this,(String *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        goto LAB_001123cb;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar3,lVar4,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_60 = 0;
  local_48 = &_LC55;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join(this);
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
LAB_001123cb:
  CowData<String>::_unref((CowData<String> *)&local_50);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<AStarGrid2D::CellShape, void>::get_class_info() */

GetTypeInfo<AStarGrid2D::CellShape,void> * __thiscall
GetTypeInfo<AStarGrid2D::CellShape,void>::get_class_info
          (GetTypeInfo<AStarGrid2D::CellShape,void> *this)

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
  local_48 = "AStarGrid2D::CellShape";
  local_40 = 0x16;
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



/* GetTypeInfo<AStarGrid2D::DiagonalMode, void>::get_class_info() */

GetTypeInfo<AStarGrid2D::DiagonalMode,void> * __thiscall
GetTypeInfo<AStarGrid2D::DiagonalMode,void>::get_class_info
          (GetTypeInfo<AStarGrid2D::DiagonalMode,void> *this)

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
  local_48 = "AStarGrid2D::DiagonalMode";
  local_40 = 0x19;
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



/* GetTypeInfo<AStarGrid2D::Heuristic, void>::get_class_info() */

GetTypeInfo<AStarGrid2D::Heuristic,void> * __thiscall
GetTypeInfo<AStarGrid2D::Heuristic,void>::get_class_info
          (GetTypeInfo<AStarGrid2D::Heuristic,void> *this)

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
  local_48 = "AStarGrid2D::Heuristic";
  local_40 = 0x16;
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



/* MethodBindTRC<AStarGrid2D::CellShape>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<AStarGrid2D::CellShape>::_gen_argument_type_info(int param_1)

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
  local_30 = 0x16;
  local_38 = "AStarGrid2D::CellShape";
  String::parse_latin1((StrRange *)&local_40);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_38,(StrRange *)&local_40)
  ;
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



/* MethodBindTRC<AStarGrid2D::DiagonalMode>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<AStarGrid2D::DiagonalMode>::_gen_argument_type_info(int param_1)

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
  local_30 = 0x19;
  local_38 = "AStarGrid2D::DiagonalMode";
  String::parse_latin1((StrRange *)&local_40);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_38,(StrRange *)&local_40)
  ;
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



/* MethodBindTRC<AStarGrid2D::Heuristic>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<AStarGrid2D::Heuristic>::_gen_argument_type_info(int param_1)

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
  local_30 = 0x16;
  local_38 = "AStarGrid2D::Heuristic";
  String::parse_latin1((StrRange *)&local_40);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_38,(StrRange *)&local_40)
  ;
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



/* MethodBindT<AStarGrid2D::Heuristic>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<AStarGrid2D::Heuristic>::_gen_argument_type_info(int param_1)

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
    local_68 = "AStarGrid2D::Heuristic";
    local_60._0_8_ = 0x16;
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(local_88,(StrRange *)&local_80);
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



/* MethodBindT<AStarGrid2D::DiagonalMode>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<AStarGrid2D::DiagonalMode>::_gen_argument_type_info(int param_1)

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
    local_68 = "AStarGrid2D::DiagonalMode";
    local_60._0_8_ = 0x19;
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(local_88,(StrRange *)&local_80);
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



/* MethodBindT<AStarGrid2D::CellShape>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<AStarGrid2D::CellShape>::_gen_argument_type_info(int param_1)

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
    local_68 = "AStarGrid2D::CellShape";
    local_60._0_8_ = 0x16;
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(local_88,(StrRange *)&local_80);
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
LAB_001136b0:
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
  if (lVar10 == 0) goto LAB_001136b0;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_00113589:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_00113589;
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
    goto LAB_00113706;
  }
  if (lVar10 == lVar7) {
LAB_0011362f:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_00113706:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_0011361a;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0011362f;
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
LAB_0011361a:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<unsigned int>::_unref() */

void __thiscall CowData<unsigned_int>::_unref(CowData<unsigned_int> *this)

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
LAB_001139d0:
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
  if (lVar8 == 0) goto LAB_001139d0;
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
        goto LAB_001138e1;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_001138e1:
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



/* AStarGrid2D::_initialize_classv() */

void AStarGrid2D::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (RefCounted::initialize_class()::initialized == '\0') {
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
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
        RefCounted::_bind_methods();
      }
      RefCounted::initialize_class()::initialized = '\x01';
    }
    local_48 = "RefCounted";
    local_58 = 0;
    local_40 = 10;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "AStarGrid2D";
    local_60 = 0;
    local_40 = 0xb;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
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
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
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
    _bind_methods();
    _bind_compatibility_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00113dc8) */
/* WARNING: Removing unreachable block (ram,0x00113f5d) */
/* WARNING: Removing unreachable block (ram,0x00113f69) */
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



/* MethodBindTR<Vector<Vector2>, Vector2i const&, Vector2i const&, bool>::validated_call(Object*,
   Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Vector<Vector2>,Vector2i_const&,Vector2i_const&,bool>::validated_call
          (MethodBindTR<Vector<Vector2>,Vector2i_const&,Vector2i_const&,bool> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  long local_40 [2];
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
      local_40[0] = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00114153;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*param_2 + 8,param_2[1] + 8,
            param_2[2][8]);
  if (*(long *)(*(long *)(param_3 + 8) + 0x18) != local_40[0]) {
    CowData<Vector2>::_ref((CowData<Vector2> *)(*(long *)(param_3 + 8) + 0x18),(CowData *)local_40);
  }
  lVar1 = local_40[0];
  if (local_40[0] != 0) {
    LOCK();
    plVar3 = (long *)(local_40[0] + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_40[0] = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
LAB_00114153:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<Vector2>, Vector2i const&, Vector2i const&, bool>::ptrcall(Object*, void
   const**, void*) const */

void __thiscall
MethodBindTR<Vector<Vector2>,Vector2i_const&,Vector2i_const&,bool>::ptrcall
          (MethodBindTR<Vector<Vector2>,Vector2i_const&,Vector2i_const&,bool> *this,Object *param_1,
          void **param_2,void *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  long local_40 [2];
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
      local_40[0] = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011438d;
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
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*param_2,param_2[1],
            *param_2[2] != '\0');
  if (*(long *)((long)param_3 + 8) != local_40[0]) {
    CowData<Vector2>::_ref((CowData<Vector2> *)((long)param_3 + 8),(CowData *)local_40);
  }
  lVar1 = local_40[0];
  if (local_40[0] != 0) {
    LOCK();
    plVar3 = (long *)(local_40[0] + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_40[0] = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
LAB_0011438d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2, Vector2i const&>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTRC<Vector2,Vector2i_const&>::validated_call
          (MethodBindTRC<Vector2,Vector2i_const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  undefined8 uVar5;
  long local_58;
  long local_50;
  char *local_48;
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
    if (local_48 == (char *)*plVar4) {
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
                       ,(StringName *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011455b;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar5 = (*pcVar3)(param_1 + *(long *)(this + 0x60),*param_2 + 8);
  *(undefined8 *)(param_3 + 8) = uVar5;
LAB_0011455b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2, Vector2i const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Vector2,Vector2i_const&>::ptrcall
          (MethodBindTRC<Vector2,Vector2i_const&> *this,Object *param_1,void **param_2,void *param_3
          )

{
  char *pcVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  undefined8 uVar4;
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
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00114777;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar4 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*param_2);
  *(undefined8 *)param_3 = uVar4;
LAB_00114777:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Rect2i const&, float>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Rect2i_const&,float>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar4;
  long in_FS_OFFSET;
  undefined1 auVar5 [16];
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
      goto LAB_00114b55;
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
    auVar5._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar5._0_4_ = (float)*(double *)(*(long *)(param_3 + 8) + 8);
                    /* WARNING: Could not recover jumptable at 0x00114996. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (auVar5._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8
              );
    return;
  }
LAB_00114b55:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Rect2i const&, float>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Rect2i_const&,float>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  long in_FS_OFFSET;
  undefined1 auVar4 [16];
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
      goto LAB_00114d7d;
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
                    /* WARNING: Load size is inaccurate */
    auVar4._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar4._0_4_ = (float)**(double **)((long)param_3 + 8);
                    /* WARNING: Could not recover jumptable at 0x00114bc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (auVar4._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_00114d7d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Rect2i const&, bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Rect2i_const&,bool>::validated_call
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
      goto LAB_00114fad;
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
                    /* WARNING: Could not recover jumptable at 0x00114df3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8,
               *(undefined1 *)(*(long *)(param_3 + 8) + 8));
    return;
  }
LAB_00114fad:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Rect2i const&, bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Rect2i_const&,bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_001151e5;
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
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x00115024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3,
               **(char **)((long)param_3 + 8) != '\0');
    return;
  }
LAB_001151e5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float, Vector2i const&>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTRC<float,Vector2i_const&>::validated_call
          (MethodBindTRC<float,Vector2i_const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  float fVar5;
  long local_58;
  long local_50;
  char *local_48;
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
    if (local_48 == (char *)*plVar4) {
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
                       ,(StringName *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011523f;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  fVar5 = (float)(*pcVar3)(param_1 + *(long *)(this + 0x60),*param_2 + 8);
  *(double *)(param_3 + 8) = (double)fVar5;
LAB_0011523f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float, Vector2i const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<float,Vector2i_const&>::ptrcall
          (MethodBindTRC<float,Vector2i_const&> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  float fVar5;
  long local_58;
  long local_50;
  char *local_48;
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
    if (local_48 == (char *)*plVar4) {
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
                       ,(StringName *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011545b;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  fVar5 = (float)(*pcVar3)(param_1 + *(long *)(this + 0x60),*param_2);
  *(double *)param_3 = (double)fVar5;
LAB_0011545b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector2i const&, float>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Vector2i_const&,float>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar4;
  long in_FS_OFFSET;
  undefined1 auVar5 [16];
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
      goto LAB_00115855;
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
    auVar5._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar5._0_4_ = (float)*(double *)(*(long *)(param_3 + 8) + 8);
                    /* WARNING: Could not recover jumptable at 0x00115696. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (auVar5._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8
              );
    return;
  }
LAB_00115855:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector2i const&, float>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Vector2i_const&,float>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  long in_FS_OFFSET;
  undefined1 auVar4 [16];
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
      goto LAB_00115a7d;
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
                    /* WARNING: Load size is inaccurate */
    auVar4._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar4._0_4_ = (float)**(double **)((long)param_3 + 8);
                    /* WARNING: Could not recover jumptable at 0x001158c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (auVar4._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_00115a7d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector2i const&, bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Vector2i_const&,bool>::validated_call
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
      goto LAB_00115cad;
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
                    /* WARNING: Could not recover jumptable at 0x00115af3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8,
               *(undefined1 *)(*(long *)(param_3 + 8) + 8));
    return;
  }
LAB_00115cad:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector2i const&, bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Vector2i_const&,bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00115ee5;
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
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x00115d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3,
               **(char **)((long)param_3 + 8) != '\0');
    return;
  }
LAB_00115ee5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<AStarGrid2D::Heuristic>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<AStarGrid2D::Heuristic>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  long *plVar6;
  undefined4 in_register_00000014;
  long *plVar7;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar5;
  
  plVar7 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar7 != (long *)0x0) && (plVar7[1] != 0)) && (*(char *)(plVar7[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar7[1] == 0) {
      plVar6 = (long *)plVar7[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    else {
      plVar6 = (long *)(plVar7[1] + 0x20);
    }
    if (local_58 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC171,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_58 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar7 = (long *)(local_60 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00116040;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar5 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar5 & 1) != 0) {
        pVVar5 = *(Variant **)(pVVar5 + *(long *)((long)plVar7 + (long)pVVar1) + -1);
      }
      iVar4 = (*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,iVar4);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
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
LAB_00116040:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<AStarGrid2D::Heuristic>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTRC<AStarGrid2D::Heuristic>::validated_call
          (MethodBindTRC<AStarGrid2D::Heuristic> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar4;
  
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
    if (local_48 == (char *)*plVar5) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001162a4;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar3;
LAB_001162a4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<AStarGrid2D::Heuristic>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<AStarGrid2D::Heuristic>::ptrcall
          (MethodBindTRC<AStarGrid2D::Heuristic> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar4;
  
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
    if (local_48 == (char *)*plVar5) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001164a3;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar3;
LAB_001164a3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<AStarGrid2D::Heuristic>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<AStarGrid2D::Heuristic>::validated_call
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
      goto LAB_00116875;
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
                    /* WARNING: Could not recover jumptable at 0x001166b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00116875:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<AStarGrid2D::Heuristic>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<AStarGrid2D::Heuristic>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00116a95;
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
                    /* WARNING: Could not recover jumptable at 0x001168d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00116a95:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<AStarGrid2D::DiagonalMode>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<AStarGrid2D::DiagonalMode>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  long *plVar6;
  undefined4 in_register_00000014;
  long *plVar7;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar5;
  
  plVar7 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar7 != (long *)0x0) && (plVar7[1] != 0)) && (*(char *)(plVar7[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar7[1] == 0) {
      plVar6 = (long *)plVar7[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    else {
      plVar6 = (long *)(plVar7[1] + 0x20);
    }
    if (local_58 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC171,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_58 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar7 = (long *)(local_60 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00116b60;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar5 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar5 & 1) != 0) {
        pVVar5 = *(Variant **)(pVVar5 + *(long *)((long)plVar7 + (long)pVVar1) + -1);
      }
      iVar4 = (*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,iVar4);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
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
LAB_00116b60:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<AStarGrid2D::DiagonalMode>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTRC<AStarGrid2D::DiagonalMode>::validated_call
          (MethodBindTRC<AStarGrid2D::DiagonalMode> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar4;
  
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
    if (local_48 == (char *)*plVar5) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00116dc4;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar3;
LAB_00116dc4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<AStarGrid2D::DiagonalMode>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<AStarGrid2D::DiagonalMode>::ptrcall
          (MethodBindTRC<AStarGrid2D::DiagonalMode> *this,Object *param_1,void **param_2,
          void *param_3)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar4;
  
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
    if (local_48 == (char *)*plVar5) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00116fc3;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar3;
LAB_00116fc3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<AStarGrid2D::DiagonalMode>::validated_call(Object*, Variant const**, Variant*) const
    */

void MethodBindT<AStarGrid2D::DiagonalMode>::validated_call
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
      goto LAB_00117395;
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
                    /* WARNING: Could not recover jumptable at 0x001171d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00117395:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<AStarGrid2D::DiagonalMode>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<AStarGrid2D::DiagonalMode>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_001175b5;
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
                    /* WARNING: Could not recover jumptable at 0x001173f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_001175b5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<bool>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_001177d5;
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
                    /* WARNING: Could not recover jumptable at 0x00117619. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)param_3 + 8));
    return;
  }
LAB_001177d5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_001179f5;
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
                    /* WARNING: Could not recover jumptable at 0x0011783e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3 != '\0');
    return;
  }
LAB_001179f5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC171,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar3 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_48 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_50;
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
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00117b20;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
      (*(code *)pVVar4)();
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
LAB_00117b20:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      local_30 = 0x35;
      local_40 = 0;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0,0);
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
      goto LAB_00117f1b;
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
                    /* WARNING: Could not recover jumptable at 0x00117d82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00117f1b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      local_30 = 0x35;
      local_40 = 0;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0,0);
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
      goto LAB_0011810b;
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
                    /* WARNING: Could not recover jumptable at 0x00117f72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011810b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  bool bVar4;
  long *plVar6;
  undefined4 in_register_00000014;
  long *plVar7;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar5;
  
  plVar7 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar7 != (long *)0x0) && (plVar7[1] != 0)) && (*(char *)(plVar7[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar7[1] == 0) {
      plVar6 = (long *)plVar7[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    else {
      plVar6 = (long *)(plVar7[1] + 0x20);
    }
    if (local_58 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC171,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_58 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar7 = (long *)(local_60 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001181d0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar5 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar5 & 1) != 0) {
        pVVar5 = *(Variant **)(pVVar5 + *(long *)((long)plVar7 + (long)pVVar1) + -1);
      }
      bVar4 = (bool)(*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,bVar4);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
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
LAB_001181d0:
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
  long lVar1;
  char *pcVar2;
  Variant VVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar4;
  
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
    if (local_48 == (char *)*plVar5) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00118432;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar3 = (Variant)(*pcVar4)(param_1 + *(long *)(this + 0x60));
  param_3[8] = VVar3;
LAB_00118432:
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
  long lVar1;
  char *pcVar2;
  undefined1 uVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar4;
  
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
    if (local_48 == (char *)*plVar5) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00118631;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(undefined1 *)param_3 = uVar3;
LAB_00118631:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, Vector2i const&>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<bool,Vector2i_const&>::validated_call
          (MethodBindTRC<bool,Vector2i_const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  Variant VVar3;
  code *pcVar4;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
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
    if (local_48 == (char *)*plVar5) {
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
                       ,(StringName *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00118829;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar3 = (Variant)(*pcVar4)(param_1 + *(long *)(this + 0x60),*param_2 + 8);
  param_3[8] = VVar3;
LAB_00118829:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, Vector2i const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<bool,Vector2i_const&>::ptrcall
          (MethodBindTRC<bool,Vector2i_const&> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  undefined1 uVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar4;
  
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
    if (local_48 == (char *)*plVar5) {
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
                       ,(StringName *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00118a45;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60),*param_2);
  *(undefined1 *)param_3 = uVar3;
LAB_00118a45:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, int, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<bool,int,int>::validated_call
          (MethodBindTRC<bool,int,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  Variant VVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
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
    if (local_48 == (char *)*plVar4) {
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
                       ,(StringName *)&local_48,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00118c6f;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar2 = (Variant)(*pcVar3)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8),
                             *(undefined4 *)(param_2[1] + 8));
  param_3[8] = VVar2;
LAB_00118c6f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, int, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<bool,int,int>::ptrcall
          (MethodBindTRC<bool,int,int> *this,Object *param_1,void **param_2,void *param_3)

{
  char *pcVar1;
  undefined1 uVar2;
  code *pcVar3;
  long *plVar4;
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
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
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
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00118e6c;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  uVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60),**param_2,*param_2[1]);
  *(undefined1 *)param_3 = uVar2;
LAB_00118e6c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<AStarGrid2D::CellShape>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<AStarGrid2D::CellShape>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  long *plVar6;
  undefined4 in_register_00000014;
  long *plVar7;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar5;
  
  plVar7 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar7 != (long *)0x0) && (plVar7[1] != 0)) && (*(char *)(plVar7[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar7[1] == 0) {
      plVar6 = (long *)plVar7[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    else {
      plVar6 = (long *)(plVar7[1] + 0x20);
    }
    if (local_58 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC171,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_58 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar7 = (long *)(local_60 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001190e0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar5 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar5 & 1) != 0) {
        pVVar5 = *(Variant **)(pVVar5 + *(long *)((long)plVar7 + (long)pVVar1) + -1);
      }
      iVar4 = (*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,iVar4);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
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
LAB_001190e0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<AStarGrid2D::CellShape>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTRC<AStarGrid2D::CellShape>::validated_call
          (MethodBindTRC<AStarGrid2D::CellShape> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar4;
  
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
    if (local_48 == (char *)*plVar5) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00119344;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar3;
LAB_00119344:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<AStarGrid2D::CellShape>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<AStarGrid2D::CellShape>::ptrcall
          (MethodBindTRC<AStarGrid2D::CellShape> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar4;
  
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
    if (local_48 == (char *)*plVar5) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00119543;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar3;
LAB_00119543:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<AStarGrid2D::CellShape>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<AStarGrid2D::CellShape>::validated_call
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
      goto LAB_00119915;
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
                    /* WARNING: Could not recover jumptable at 0x00119758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00119915:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<AStarGrid2D::CellShape>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<AStarGrid2D::CellShape>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00119b35;
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
                    /* WARNING: Could not recover jumptable at 0x00119977. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00119b35:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Vector2>::call
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
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
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
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_68 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC171,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      pcVar3 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_68 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar6 = (long *)(local_70 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00119c10;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
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
      local_50 = (*(code *)pVVar4)();
      Variant::Variant((Variant *)local_48,(Vector2 *)&local_50);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
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
LAB_00119c10:
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
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  undefined8 uVar5;
  long local_58;
  long local_50;
  char *local_48;
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
    if (local_48 == (char *)*plVar4) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00119e74;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar5 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)(param_3 + 8) = uVar5;
LAB_00119e74:
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
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  undefined8 uVar5;
  long local_58;
  long local_50;
  char *local_48;
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
    if (local_48 == (char *)*plVar4) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011a073;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar5 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)param_3 = uVar5;
LAB_0011a073:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector2 const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Vector2_const&>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_0011a445;
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
                    /* WARNING: Could not recover jumptable at 0x0011a289. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_0011a445:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector2 const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Vector2_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0011a665;
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
                    /* WARNING: Could not recover jumptable at 0x0011a4a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0011a665:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2i>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Vector2i>::call
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
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
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
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_68 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC171,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      pcVar3 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_68 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar6 = (long *)(local_70 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0011a740;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
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
      local_50 = (*(code *)pVVar4)();
      Variant::Variant((Variant *)local_48,(Vector2i *)&local_50);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
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
LAB_0011a740:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2i>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Vector2i>::validated_call
          (MethodBindTRC<Vector2i> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar4;
  
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
    if (local_48 == (char *)*plVar5) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011a9a2;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)(param_3 + 8) = uVar3;
LAB_0011a9a2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2i>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Vector2i>::ptrcall
          (MethodBindTRC<Vector2i> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar4;
  
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
    if (local_48 == (char *)*plVar5) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011aba1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)param_3 = uVar3;
LAB_0011aba1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector2i const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Vector2i_const&>::validated_call
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
      goto LAB_0011af65;
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
                    /* WARNING: Could not recover jumptable at 0x0011ada9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_0011af65:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector2i const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Vector2i_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0011b185;
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
                    /* WARNING: Could not recover jumptable at 0x0011afc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0011b185:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Rect2i>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Rect2i>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  char *pcVar5;
  Variant *pVVar6;
  long *plVar7;
  undefined4 in_register_00000014;
  long *plVar8;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar8 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar8 != (long *)0x0) && (plVar8[1] != 0)) && (*(char *)(plVar8[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar8[1] == 0) {
      plVar7 = (long *)plVar8[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar8 + 0x40))(plVar8);
      }
    }
    else {
      plVar7 = (long *)(plVar8[1] + 0x20);
    }
    if (local_68 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC171,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      pcVar5 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar8 = (long *)(local_68 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar4 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar8 = (long *)(local_70 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      auVar3._8_8_ = local_58._8_8_;
      auVar3._0_8_ = local_58._0_8_;
      if ((StringName::configured != '\0') && (local_58 = auVar3, local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0011b260;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  auVar2._8_8_ = local_58._8_8_;
  auVar2._0_8_ = local_58._0_8_;
  pVVar6 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar6 & 1) != 0) {
        pVVar6 = *(Variant **)(pVVar6 + *(long *)((long)plVar8 + (long)pVVar1) + -1);
      }
      local_58 = (*(code *)pVVar6)();
      Variant::Variant((Variant *)local_48,(Rect2i *)local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
      local_58 = auVar2;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_0011b260:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Rect2i>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Rect2i>::validated_call
          (MethodBindTRC<Rect2i> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  undefined1 auVar5 [16];
  long local_58;
  long local_50;
  char *local_48;
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
    if (local_48 == (char *)*plVar4) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011b4c7;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  auVar5 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(undefined1 (*) [16])(param_3 + 8) = auVar5;
LAB_0011b4c7:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Rect2i>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Rect2i>::ptrcall
          (MethodBindTRC<Rect2i> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  undefined1 auVar5 [16];
  long local_58;
  long local_50;
  char *local_48;
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
    if (local_48 == (char *)*plVar4) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011b6c6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  auVar5 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(undefined1 (*) [16])param_3 = auVar5;
LAB_0011b6c6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Rect2i const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Rect2i_const&>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_0011ba95;
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
                    /* WARNING: Could not recover jumptable at 0x0011b8d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_0011ba95:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Rect2i const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Rect2i_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0011bcb5;
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
                    /* WARNING: Could not recover jumptable at 0x0011baf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0011bcb5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<Vector2>, Vector2i const&, Vector2i const&>::validated_call(Object*, Variant
   const**, Variant*) const */

void __thiscall
MethodBindTR<Vector<Vector2>,Vector2i_const&,Vector2i_const&>::validated_call
          (MethodBindTR<Vector<Vector2>,Vector2i_const&,Vector2i_const&> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  long local_40 [2];
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
      local_40[0] = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011bd6a;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*param_2 + 8,param_2[1] + 8);
  if (*(long *)(*(long *)(param_3 + 8) + 0x18) != local_40[0]) {
    CowData<Vector2>::_ref((CowData<Vector2> *)(*(long *)(param_3 + 8) + 0x18),(CowData *)local_40);
  }
  lVar1 = local_40[0];
  if (local_40[0] != 0) {
    LOCK();
    plVar3 = (long *)(local_40[0] + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_40[0] = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
LAB_0011bd6a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<Vector2>, Vector2i const&, Vector2i const&>::ptrcall(Object*, void const**,
   void*) const */

void __thiscall
MethodBindTR<Vector<Vector2>,Vector2i_const&,Vector2i_const&>::ptrcall
          (MethodBindTR<Vector<Vector2>,Vector2i_const&,Vector2i_const&> *this,Object *param_1,
          void **param_2,void *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  long local_40 [2];
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
      local_40[0] = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011bf8e;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*param_2,param_2[1]);
  if (*(long *)((long)param_3 + 8) != local_40[0]) {
    CowData<Vector2>::_ref((CowData<Vector2> *)((long)param_3 + 8),(CowData *)local_40);
  }
  lVar1 = local_40[0];
  if (local_40[0] != 0) {
    LOCK();
    plVar3 = (long *)(local_40[0] + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_40[0] = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
LAB_0011bf8e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<TypedArray<Vector2i>, Vector2i const&, Vector2i const&>::validated_call(Object*,
   Variant const**, Variant*) const */

void __thiscall
MethodBindTR<TypedArray<Vector2i>,Vector2i_const&,Vector2i_const&>::validated_call
          (MethodBindTR<TypedArray<Vector2i>,Vector2i_const&,Vector2i_const&> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
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
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
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
      goto LAB_0011c179;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar2)((Array *)&local_48,param_1 + *(long *)(this + 0x60),*param_2 + 8,param_2[1] + 8);
  Array::operator=((Array *)(param_3 + 8),(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_0011c179:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<TypedArray<Vector2i>, Vector2i const&, Vector2i const&,
   bool>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<TypedArray<Vector2i>,Vector2i_const&,Vector2i_const&,bool>::validated_call
          (MethodBindTR<TypedArray<Vector2i>,Vector2i_const&,Vector2i_const&,bool> *this,
          Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
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
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
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
      goto LAB_0011c3a2;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar2)((Array *)&local_48,param_1 + *(long *)(this + 0x60),*param_2 + 8,param_2[1] + 8,
            param_2[2][8]);
  Array::operator=((Array *)(param_3 + 8),(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_0011c3a2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<TypedArray<Vector2i>, Vector2i const&, Vector2i const&>::ptrcall(Object*, void
   const**, void*) const */

void __thiscall
MethodBindTR<TypedArray<Vector2i>,Vector2i_const&,Vector2i_const&>::ptrcall
          (MethodBindTR<TypedArray<Vector2i>,Vector2i_const&,Vector2i_const&> *this,Object *param_1,
          void **param_2,void *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
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
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
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
      goto LAB_0011c5bf;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar2)((Array *)&local_48,param_1 + *(long *)(this + 0x60),*param_2,param_2[1]);
  Array::operator=((Array *)param_3,(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_0011c5bf:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<TypedArray<Vector2i>, Vector2i const&, Vector2i const&, bool>::ptrcall(Object*, void
   const**, void*) const */

void __thiscall
MethodBindTR<TypedArray<Vector2i>,Vector2i_const&,Vector2i_const&,bool>::ptrcall
          (MethodBindTR<TypedArray<Vector2i>,Vector2i_const&,Vector2i_const&,bool> *this,
          Object *param_1,void **param_2,void *param_3)

{
  char *pcVar1;
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
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011c7de;
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
  (*pcVar2)((Array *)&local_48,param_1 + *(long *)(this + 0x60),*param_2,param_2[1],
            *param_2[2] != '\0');
  Array::operator=((Array *)param_3,(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_0011c7de:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TypedArray<Dictionary>, Rect2i const&>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTRC<TypedArray<Dictionary>,Rect2i_const&>::validated_call
          (MethodBindTRC<TypedArray<Dictionary>,Rect2i_const&> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  char *pcVar1;
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
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011c9f1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar2)((Array *)&local_48,param_1 + *(long *)(this + 0x60),*param_2 + 8);
  Array::operator=((Array *)(param_3 + 8),(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_0011c9f1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TypedArray<Dictionary>, Rect2i const&>::ptrcall(Object*, void const**, void*) const
    */

void __thiscall
MethodBindTRC<TypedArray<Dictionary>,Rect2i_const&>::ptrcall
          (MethodBindTRC<TypedArray<Dictionary>,Rect2i_const&> *this,Object *param_1,void **param_2,
          void *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
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
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
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
      goto LAB_0011cbfb;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar2)((Array *)&local_48,param_1 + *(long *)(this + 0x60),*param_2);
  Array::operator=((Array *)param_3,(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_0011cbfb:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<TypedArray<Vector2i>, Vector2i const&, Vector2i const&>::call(Object*, Variant
   const**, int, Callable::CallError&) const */

Object * MethodBindTR<TypedArray<Vector2i>,Vector2i_const&,Vector2i_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  Variant *this;
  uint in_R8D;
  undefined4 *in_R9;
  int iVar11;
  Variant *pVVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_78,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_78 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_80 = 0;
      local_70 = 0x35;
      String::parse_latin1((StrRange *)&local_80);
      vformat<StringName>((StringName *)&local_78,(StrRange *)&local_80,&local_88);
      _err_print_error(&_LC171,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_0011cf3c;
    }
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 3) {
    pVVar13 = param_2[5];
    iVar6 = 2 - in_R8D;
    if (pVVar13 == (Variant *)0x0) {
      if (iVar6 != 0) goto LAB_0011cf80;
      this = *(Variant **)param_4;
LAB_0011cf9d:
      pVVar13 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar2 = *(long *)(pVVar13 + -8);
      iVar11 = (int)lVar2;
      if (iVar11 < iVar6) {
LAB_0011cf80:
        uVar7 = 4;
        goto LAB_0011cf6d;
      }
      if (in_R8D == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar2 <= lVar9) goto LAB_0011d060;
        this = pVVar13 + lVar9 * 0x18;
      }
      else {
        this = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_0011cf9d;
      }
      lVar9 = (long)(int)((in_R8D ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar9) {
LAB_0011d060:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar13 = pVVar13 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar13,6);
    uVar4 = _LC173;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    local_68 = Variant::operator_cast_to_Vector2i(pVVar13);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,6);
    uVar4 = _LC174;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    local_60 = Variant::operator_cast_to_Vector2i(this);
    (*(code *)pVVar12)((Array *)&local_78,(Variant *)((long)plVar10 + (long)pVVar1),&local_60,
                       &local_68);
    Variant::Variant((Variant *)local_58,(Array *)&local_78);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    Array::~Array((Array *)&local_78);
  }
  else {
    uVar7 = 3;
LAB_0011cf6d:
    *in_R9 = uVar7;
    in_R9[2] = 2;
  }
LAB_0011cf3c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<Vector2>, Vector2i const&, Vector2i const&>::call(Object*, Variant const**,
   int, Callable::CallError&) const */

Object * MethodBindTR<Vector<Vector2>,Vector2i_const&,Vector2i_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  Variant *this;
  int iVar11;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_88;
  undefined8 local_80;
  char *local_78;
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_78,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_78 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_80 = 0;
      local_70 = 0x35;
      String::parse_latin1((StrRange *)&local_80);
      vformat<StringName>((StringName *)&local_78,(StrRange *)&local_80,&local_88);
      _err_print_error(&_LC171,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_0011d360;
    }
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 3) {
    pVVar13 = param_2[5];
    iVar6 = 2 - in_R8D;
    if (pVVar13 == (Variant *)0x0) {
      if (iVar6 != 0) goto LAB_0011d3a8;
      this = *(Variant **)param_4;
LAB_0011d3bd:
      pVVar13 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar2 = *(long *)(pVVar13 + -8);
      iVar11 = (int)lVar2;
      if (iVar11 < iVar6) {
LAB_0011d3a8:
        uVar7 = 4;
        goto LAB_0011d395;
      }
      if (in_R8D == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar2 <= lVar9) goto LAB_0011d480;
        this = pVVar13 + lVar9 * 0x18;
      }
      else {
        this = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_0011d3bd;
      }
      lVar9 = (long)(int)((in_R8D ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar9) {
LAB_0011d480:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar13 = pVVar13 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar13,6);
    uVar4 = _LC173;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    local_68 = Variant::operator_cast_to_Vector2i(pVVar13);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,6);
    uVar4 = _LC174;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    local_60 = Variant::operator_cast_to_Vector2i(this);
    (*(code *)pVVar12)(&local_78,(Variant *)((long)plVar10 + (long)pVVar1),&local_60,&local_68);
    Variant::Variant((Variant *)local_58,(Vector *)&local_78);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    lVar2 = local_70;
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    if (local_70 != 0) {
      LOCK();
      plVar10 = (long *)(local_70 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  else {
    uVar7 = 3;
LAB_0011d395:
    *in_R9 = uVar7;
    in_R9[2] = 2;
  }
LAB_0011d360:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector2i const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Vector2i_const&>::call
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
  undefined8 local_40;
  undefined8 local_38;
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
      _err_print_error(&_LC171,"./core/object/method_bind.h",0x154,
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
      goto LAB_0011d6d0;
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
      if (in_R8D != 1) goto LAB_0011d720;
LAB_0011d710:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011d720:
        uVar7 = 4;
        goto LAB_0011d6c5;
      }
      if (in_R8D == 1) goto LAB_0011d710;
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
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar11,6);
    uVar4 = _LC174;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    local_38 = Variant::operator_cast_to_Vector2i(pVVar11);
    (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),&local_38);
  }
  else {
    uVar7 = 3;
LAB_0011d6c5:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0011d6d0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, Vector2i const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<bool,Vector2i_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
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
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_68 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC171,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0011da70;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0011dab0;
LAB_0011daa0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011dab0:
        uVar7 = 4;
        goto LAB_0011da65;
      }
      if (in_R8D == 1) goto LAB_0011daa0;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,6);
    uVar4 = _LC174;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    local_50 = Variant::operator_cast_to_Vector2i(pVVar11);
    bVar6 = (bool)(*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),&local_50);
    Variant::Variant((Variant *)local_48,bVar6);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar7 = 3;
LAB_0011da65:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0011da70:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float, Vector2i const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<float,Vector2i_const&>::call
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
  float fVar12;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_68 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC171,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0011ddf0;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0011de30;
LAB_0011de20:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011de30:
        uVar6 = 4;
        goto LAB_0011dde5;
      }
      if (in_R8D == 1) goto LAB_0011de20;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,6);
    uVar4 = _LC174;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    local_50 = Variant::operator_cast_to_Vector2i(pVVar10);
    fVar12 = (float)(*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),&local_50);
    Variant::Variant((Variant *)local_48,fVar12);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar6 = 3;
LAB_0011dde5:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_0011ddf0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2, Vector2i const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<Vector2,Vector2i_const&>::call
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
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_68 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC171,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0011e180;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0011e1c0;
LAB_0011e1b0:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011e1c0:
        uVar6 = 4;
        goto LAB_0011e175;
      }
      if (in_R8D == 1) goto LAB_0011e1b0;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,6);
    uVar4 = _LC174;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    local_50 = Variant::operator_cast_to_Vector2i(pVVar10);
    local_58 = (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),&local_50);
    Variant::Variant((Variant *)local_48,(Vector2 *)&local_58);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar6 = 3;
LAB_0011e175:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_0011e180:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<Vector2>, Vector2i const&, Vector2i const&, bool>::call(Object*, Variant
   const**, int, Callable::CallError&) const */

Object * MethodBindTR<Vector<Vector2>,Vector2i_const&,Vector2i_const&,bool>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  bool bVar7;
  undefined4 uVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  int iVar12;
  undefined4 in_register_00000014;
  long *plVar13;
  Variant *pVVar14;
  long lVar15;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar16;
  long in_FS_OFFSET;
  long local_a8;
  long local_a0;
  char *local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  Variant *local_78 [4];
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar13 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar13 != (long *)0x0) && (plVar13[1] != 0)) && (*(char *)(plVar13[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_98,(StringName *)(param_2 + 3));
    if (plVar13[1] == 0) {
      plVar10 = (long *)plVar13[0x23];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar13 + 0x40))(plVar13);
      }
    }
    else {
      plVar10 = (long *)(plVar13[1] + 0x20);
    }
    if (local_98 == (char *)*plVar10) {
      if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_98 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_a0 = 0;
      local_90 = 0x35;
      String::parse_latin1((StrRange *)&local_a0);
      vformat<StringName>((StringName *)&local_98,(StrRange *)&local_a0,&local_a8);
      _err_print_error(&_LC171,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_98,0);
      pcVar5 = local_98;
      if (local_98 != (char *)0x0) {
        LOCK();
        plVar13 = (long *)(local_98 + -0x10);
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          local_98 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar15 = local_a0;
      if (local_a0 != 0) {
        LOCK();
        plVar13 = (long *)(local_a0 + -0x10);
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar15 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_a8 != 0)) {
        StringName::unref();
      }
      goto LAB_0011e5c2;
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar16 = param_2[0xb];
  pVVar1 = param_2[0xc];
  uVar8 = 3;
  if (in_R8D < 4) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar12 = 0;
      lVar15 = 0;
    }
    else {
      lVar15 = *(long *)(pVVar2 + -8);
      iVar12 = (int)lVar15;
    }
    if ((int)(3 - in_R8D) <= iVar12) {
      lVar9 = 0;
      do {
        if ((int)lVar9 < (int)in_R8D) {
          pVVar14 = *(Variant **)(param_4 + lVar9 * 8);
        }
        else {
          uVar11 = iVar12 + -3 + (int)lVar9;
          if (lVar15 <= (int)uVar11) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar11,lVar15,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar14 = pVVar2 + (ulong)uVar11 * 0x18;
        }
        local_78[lVar9] = pVVar14;
        lVar9 = lVar9 + 1;
      } while (lVar9 != 3);
      *in_R9 = 0;
      if (((ulong)pVVar16 & 1) != 0) {
        pVVar16 = *(Variant **)(pVVar16 + *(long *)((long)plVar13 + (long)pVVar1) + -1);
      }
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_78[2],1);
      uVar4 = _LC176;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      bVar7 = Variant::operator_cast_to_bool(local_78[2]);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_78[1],6);
      uVar4 = _LC173;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      local_88 = Variant::operator_cast_to_Vector2i(local_78[1]);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_78[0],6);
      uVar4 = _LC174;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      local_80 = Variant::operator_cast_to_Vector2i(local_78[0]);
      (*(code *)pVVar16)(&local_98,(Variant *)((long)plVar13 + (long)pVVar1),&local_80,&local_88,
                         bVar7);
      Variant::Variant((Variant *)local_58,(Vector *)&local_98);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      lVar15 = local_90;
      *(undefined4 *)param_1 = local_58[0];
      *(undefined8 *)(param_1 + 8) = local_50;
      *(undefined8 *)(param_1 + 0x10) = uStack_48;
      if (local_90 != 0) {
        LOCK();
        plVar13 = (long *)(local_90 + -0x10);
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          local_90 = 0;
          Memory::free_static((void *)(lVar15 + -0x10),false);
        }
      }
      goto LAB_0011e5c2;
    }
    uVar8 = 4;
  }
  *in_R9 = uVar8;
  in_R9[2] = 3;
LAB_0011e5c2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<TypedArray<Vector2i>, Vector2i const&, Vector2i const&, bool>::call(Object*, Variant
   const**, int, Callable::CallError&) const */

Object * MethodBindTR<TypedArray<Vector2i>,Vector2i_const&,Vector2i_const&,bool>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  bool bVar7;
  undefined4 uVar8;
  long lVar9;
  long *plVar10;
  int iVar11;
  uint uVar12;
  Variant *pVVar13;
  undefined4 in_register_00000014;
  long *plVar14;
  long lVar15;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar16;
  long in_FS_OFFSET;
  long local_a8;
  long local_a0;
  char *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  Variant *local_78 [4];
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar14 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar14 != (long *)0x0) && (plVar14[1] != 0)) && (*(char *)(plVar14[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_98,(StringName *)(param_2 + 3));
    if (plVar14[1] == 0) {
      plVar10 = (long *)plVar14[0x23];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar14 + 0x40))();
      }
    }
    else {
      plVar10 = (long *)(plVar14[1] + 0x20);
    }
    if (local_98 == (char *)*plVar10) {
      if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_98 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_a0 = 0;
      local_90 = 0x35;
      String::parse_latin1((StrRange *)&local_a0);
      vformat<StringName>((StringName *)&local_98,(StrRange *)&local_a0,&local_a8);
      _err_print_error(&_LC171,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_98,0);
      pcVar5 = local_98;
      if (local_98 != (char *)0x0) {
        LOCK();
        plVar14 = (long *)(local_98 + -0x10);
        *plVar14 = *plVar14 + -1;
        UNLOCK();
        if (*plVar14 == 0) {
          local_98 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar15 = local_a0;
      if (local_a0 != 0) {
        LOCK();
        plVar14 = (long *)(local_a0 + -0x10);
        *plVar14 = *plVar14 + -1;
        UNLOCK();
        if (*plVar14 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar15 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_a8 != 0)) {
        StringName::unref();
      }
      goto LAB_0011ea02;
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar16 = param_2[0xb];
  pVVar1 = param_2[0xc];
  uVar8 = 3;
  if (in_R8D < 4) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar11 = 0;
      lVar15 = 0;
    }
    else {
      lVar15 = *(long *)(pVVar2 + -8);
      iVar11 = (int)lVar15;
    }
    if ((int)(3 - in_R8D) <= iVar11) {
      lVar9 = 0;
      do {
        if ((int)lVar9 < (int)in_R8D) {
          pVVar13 = *(Variant **)(param_4 + lVar9 * 8);
        }
        else {
          uVar12 = iVar11 + -3 + (int)lVar9;
          if (lVar15 <= (int)uVar12) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar12,lVar15,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar13 = pVVar2 + (ulong)uVar12 * 0x18;
        }
        local_78[lVar9] = pVVar13;
        lVar9 = lVar9 + 1;
      } while (lVar9 != 3);
      *in_R9 = 0;
      if (((ulong)pVVar16 & 1) != 0) {
        pVVar16 = *(Variant **)(pVVar16 + *(long *)((long)plVar14 + (long)pVVar1) + -1);
      }
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_78[2],1);
      uVar4 = _LC176;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      bVar7 = Variant::operator_cast_to_bool(local_78[2]);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_78[1],6);
      uVar4 = _LC173;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      local_88 = Variant::operator_cast_to_Vector2i(local_78[1]);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_78[0],6);
      uVar4 = _LC174;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      local_80 = Variant::operator_cast_to_Vector2i(local_78[0]);
      (*(code *)pVVar16)((Array *)&local_98,(Variant *)((long)plVar14 + (long)pVVar1),&local_80,
                         &local_88,bVar7);
      Variant::Variant((Variant *)local_58,(Array *)&local_98);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_58[0];
      *(undefined8 *)(param_1 + 8) = local_50;
      *(undefined8 *)(param_1 + 0x10) = uStack_48;
      Array::~Array((Array *)&local_98);
      goto LAB_0011ea02;
    }
    uVar8 = 4;
  }
  *in_R9 = uVar8;
  in_R9[2] = 3;
LAB_0011ea02:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Rect2i const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Rect2i_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  char *pcVar6;
  char cVar7;
  undefined4 uVar8;
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
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
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
      _err_print_error(&_LC171,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_58,0);
      pcVar6 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar11 = (long *)(local_58 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar6 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar11 = (long *)(local_60 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      auVar4._8_8_ = local_48._8_8_;
      auVar4._0_8_ = local_48._0_8_;
      if ((StringName::configured != '\0') && (local_48 = auVar4, local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011ed98;
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
      if (in_R8D != 1) goto LAB_0011edf0;
LAB_0011ede0:
      pVVar12 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011edf0:
        uVar8 = 4;
        goto LAB_0011ed8d;
      }
      if (in_R8D == 1) goto LAB_0011ede0;
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
    cVar7 = Variant::can_convert_strict(*(undefined4 *)pVVar12,8);
    uVar5 = _LC177;
    if (cVar7 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar5;
    }
    local_48 = Variant::operator_cast_to_Rect2i(pVVar12);
    (*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),local_48);
  }
  else {
    uVar8 = 3;
LAB_0011ed8d:
    *in_R9 = uVar8;
    in_R9[2] = 1;
  }
LAB_0011ed98:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<TypedArray<Dictionary>, Rect2i const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<TypedArray<Dictionary>,Rect2i_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
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
  long local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_78,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_78 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_80 = 0;
      local_70 = 0x35;
      String::parse_latin1((StrRange *)&local_80);
      vformat<StringName>((StringName *)&local_78,(StrRange *)&local_80,&local_88);
      _err_print_error(&_LC171,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      auVar4._8_8_ = local_68._8_8_;
      auVar4._0_8_ = local_68._0_8_;
      if ((StringName::configured != '\0') && (local_68 = auVar4, local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_0011f160;
    }
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0011f1b0;
LAB_0011f1a0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011f1b0:
        uVar7 = 4;
        goto LAB_0011f155;
      }
      if (in_R8D == 1) goto LAB_0011f1a0;
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
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar11,8);
    uVar5 = _LC177;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar5;
    }
    local_68 = Variant::operator_cast_to_Rect2i(pVVar11);
    (*(code *)pVVar12)((Array *)&local_78,(Variant *)((long)plVar10 + (long)pVVar1),local_68);
    Variant::Variant((Variant *)local_58,(Array *)&local_78);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    Array::~Array((Array *)&local_78);
  }
  else {
    uVar7 = 3;
LAB_0011f155:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0011f160:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<Vector2 const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Vector2_const&>::call
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
  undefined8 local_40;
  undefined8 local_38;
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
      _err_print_error(&_LC171,"./core/object/method_bind.h",0x154,
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
      goto LAB_0011f4c0;
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
      if (in_R8D != 1) goto LAB_0011f510;
LAB_0011f500:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011f510:
        uVar7 = 4;
        goto LAB_0011f4b5;
      }
      if (in_R8D == 1) goto LAB_0011f500;
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
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar11,5);
    uVar4 = _LC178;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    local_38 = Variant::operator_cast_to_Vector2(pVVar11);
    (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),&local_38);
  }
  else {
    uVar7 = 3;
LAB_0011f4b5:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0011f4c0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, Rect2i const&, float>(__UnexistingClass*, void
   (__UnexistingClass::*)(Rect2i const&, float), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,Rect2i_const&,float>
               (__UnexistingClass *param_1,_func_void_Rect2i_ptr_float *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 in_register_0000000c;
  long *plVar9;
  long lVar10;
  Variant *this;
  uint uVar11;
  int iVar12;
  Variant *this_00;
  long in_FS_OFFSET;
  float fVar13;
  long in_stack_00000008;
  
  plVar9 = (long *)CONCAT44(in_register_0000000c,param_4);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = (uint)param_5;
  if (uVar11 < 3) {
    lVar2 = *(long *)(in_stack_00000008 + 8);
    iVar7 = 2 - uVar11;
    if (lVar2 == 0) {
      if (iVar7 != 0) goto LAB_0011f868;
      this = (Variant *)*plVar9;
LAB_0011f8bd:
      this_00 = (Variant *)plVar9[1];
    }
    else {
      lVar3 = *(long *)(lVar2 + -8);
      iVar12 = (int)lVar3;
      if (iVar12 < iVar7) {
LAB_0011f868:
        uVar8 = 4;
        goto LAB_0011f86d;
      }
      if (uVar11 == 0) {
        lVar10 = (long)(iVar12 + -2);
        if (lVar3 <= lVar10) goto LAB_0011f8d8;
        this = (Variant *)(lVar2 + lVar10 * 0x18);
      }
      else {
        this = (Variant *)*plVar9;
        if (uVar11 == 2) goto LAB_0011f8bd;
      }
      lVar10 = (long)(int)((uVar11 ^ 1) + (iVar12 - iVar7));
      if (lVar3 <= lVar10) {
LAB_0011f8d8:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar3,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      this_00 = (Variant *)(lVar2 + lVar10 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_Rect2i_ptr_float **)(param_2 + *(long *)(param_1 + (long)param_3) + -1)
      ;
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)this_00,3);
    uVar5 = _LC179;
    if (cVar6 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar5;
    }
    fVar13 = Variant::operator_cast_to_float(this_00);
    cVar6 = Variant::can_convert_strict(*(undefined4 *)this,8);
    uVar5 = _LC177;
    if (cVar6 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar5;
    }
    Variant::operator_cast_to_Rect2i(this);
    (*param_2)((Rect2i *)(param_1 + (long)param_3),fVar13);
  }
  else {
    uVar8 = 3;
LAB_0011f86d:
    *(undefined4 *)param_6 = uVar8;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Rect2i const&, float>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<Rect2i_const&,float>::call
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
      _err_print_error(&_LC171,"./core/object/method_bind.h",0x154,
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
      goto LAB_0011f976;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,Rect2i_const&,float>
            (p_Var4,(_func_void_Rect2i_ptr_float *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011f976:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, Rect2i const&, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(Rect2i const&, bool), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,Rect2i_const&,bool>
               (__UnexistingClass *param_1,_func_void_Rect2i_ptr_bool *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 in_register_0000000c;
  long *plVar8;
  long lVar9;
  Variant *this;
  uint uVar10;
  int iVar11;
  Variant *this_00;
  long in_FS_OFFSET;
  long in_stack_00000008;
  undefined1 local_48 [16];
  long local_30;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = (uint)param_5;
  if (uVar10 < 3) {
    lVar1 = *(long *)(in_stack_00000008 + 8);
    iVar6 = 2 - uVar10;
    if (lVar1 == 0) {
      if (iVar6 != 0) goto LAB_0011fcc0;
      this = (Variant *)*plVar8;
LAB_0011fd0d:
      this_00 = (Variant *)plVar8[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar11 = (int)lVar2;
      if (iVar11 < iVar6) {
LAB_0011fcc0:
        uVar7 = 4;
        goto LAB_0011fcc5;
      }
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar2 <= lVar9) goto LAB_0011fd28;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_0011fd0d;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar9) {
LAB_0011fd28:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar9 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_Rect2i_ptr_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,1);
    uVar4 = _LC180;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_bool(this_00);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,8);
    uVar4 = _LC177;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    local_48 = Variant::operator_cast_to_Rect2i(this);
    (*param_2)((Rect2i *)(param_1 + (long)param_3),SUB81(local_48,0));
  }
  else {
    uVar7 = 3;
LAB_0011fcc5:
    *(undefined4 *)param_6 = uVar7;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Rect2i const&, bool>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<Rect2i_const&,bool>::call
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
      _err_print_error(&_LC171,"./core/object/method_bind.h",0x154,
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
      goto LAB_0011fdc6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,Rect2i_const&,bool>
            (p_Var4,(_func_void_Rect2i_ptr_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4
             ,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011fdc6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, Vector2i const&, float>(__UnexistingClass*,
   void (__UnexistingClass::*)(Vector2i const&, float), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,Vector2i_const&,float>
               (__UnexistingClass *param_1,_func_void_Vector2i_ptr_float *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 in_register_0000000c;
  long *plVar9;
  long lVar10;
  Variant *this;
  uint uVar11;
  int iVar12;
  Variant *this_00;
  long in_FS_OFFSET;
  float fVar13;
  long in_stack_00000008;
  
  plVar9 = (long *)CONCAT44(in_register_0000000c,param_4);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = (uint)param_5;
  if (uVar11 < 3) {
    lVar2 = *(long *)(in_stack_00000008 + 8);
    iVar7 = 2 - uVar11;
    if (lVar2 == 0) {
      if (iVar7 != 0) goto LAB_00120110;
      this = (Variant *)*plVar9;
LAB_0012015d:
      this_00 = (Variant *)plVar9[1];
    }
    else {
      lVar3 = *(long *)(lVar2 + -8);
      iVar12 = (int)lVar3;
      if (iVar12 < iVar7) {
LAB_00120110:
        uVar8 = 4;
        goto LAB_00120115;
      }
      if (uVar11 == 0) {
        lVar10 = (long)(iVar12 + -2);
        if (lVar3 <= lVar10) goto LAB_00120178;
        this = (Variant *)(lVar2 + lVar10 * 0x18);
      }
      else {
        this = (Variant *)*plVar9;
        if (uVar11 == 2) goto LAB_0012015d;
      }
      lVar10 = (long)(int)((uVar11 ^ 1) + (iVar12 - iVar7));
      if (lVar3 <= lVar10) {
LAB_00120178:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar3,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      this_00 = (Variant *)(lVar2 + lVar10 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_Vector2i_ptr_float **)
                 (param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)this_00,3);
    uVar5 = _LC179;
    if (cVar6 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar5;
    }
    fVar13 = Variant::operator_cast_to_float(this_00);
    cVar6 = Variant::can_convert_strict(*(undefined4 *)this,6);
    uVar5 = _LC174;
    if (cVar6 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar5;
    }
    Variant::operator_cast_to_Vector2i(this);
    (*param_2)((Vector2i *)(param_1 + (long)param_3),fVar13);
  }
  else {
    uVar8 = 3;
LAB_00120115:
    *(undefined4 *)param_6 = uVar8;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector2i const&, float>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<Vector2i_const&,float>::call
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
      _err_print_error(&_LC171,"./core/object/method_bind.h",0x154,
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
      goto LAB_00120216;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,Vector2i_const&,float>
            (p_Var4,(_func_void_Vector2i_ptr_float *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00120216:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, Vector2i const&, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(Vector2i const&, bool), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,Vector2i_const&,bool>
               (__UnexistingClass *param_1,_func_void_Vector2i_ptr_bool *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 in_register_0000000c;
  long *plVar8;
  long lVar9;
  Variant *this;
  uint uVar10;
  int iVar11;
  Variant *this_00;
  long in_FS_OFFSET;
  long in_stack_00000008;
  undefined8 local_38;
  long local_30;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = (uint)param_5;
  if (uVar10 < 3) {
    lVar1 = *(long *)(in_stack_00000008 + 8);
    iVar6 = 2 - uVar10;
    if (lVar1 == 0) {
      if (iVar6 != 0) goto LAB_00120558;
      this = (Variant *)*plVar8;
LAB_001205ad:
      this_00 = (Variant *)plVar8[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar11 = (int)lVar2;
      if (iVar11 < iVar6) {
LAB_00120558:
        uVar7 = 4;
        goto LAB_0012055d;
      }
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar2 <= lVar9) goto LAB_001205c8;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_001205ad;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar9) {
LAB_001205c8:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar9 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_Vector2i_ptr_bool **)
                 (param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,1);
    uVar4 = _LC180;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_bool(this_00);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,6);
    uVar4 = _LC174;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    local_38 = Variant::operator_cast_to_Vector2i(this);
    (*param_2)((Vector2i *)(param_1 + (long)param_3),SUB81(&local_38,0));
  }
  else {
    uVar7 = 3;
LAB_0012055d:
    *(undefined4 *)param_6 = uVar7;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector2i const&, bool>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<Vector2i_const&,bool>::call
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
      _err_print_error(&_LC171,"./core/object/method_bind.h",0x154,
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
      goto LAB_00120666;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,Vector2i_const&,bool>
            (p_Var4,(_func_void_Vector2i_ptr_bool *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00120666:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, AStarGrid2D::Heuristic>(__UnexistingClass*,
   void (__UnexistingClass::*)(AStarGrid2D::Heuristic), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,AStarGrid2D::Heuristic>
               (__UnexistingClass *param_1,_func_void_Heuristic *param_2,Variant **param_3,
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
    goto LAB_0012096d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_001209d0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_001209d0:
      uVar6 = 4;
LAB_0012096d:
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
      goto LAB_001208eb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_001208eb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_Heuristic **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC181;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x00120946. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<AStarGrid2D::Heuristic>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<AStarGrid2D::Heuristic>::call
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
      _err_print_error(&_LC171,"./core/object/method_bind.h",0x154,
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
      goto LAB_00120a36;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,AStarGrid2D::Heuristic>
            (p_Var4,(_func_void_Heuristic *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8
             ,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00120a36:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, AStarGrid2D::DiagonalMode>(__UnexistingClass*,
   void (__UnexistingClass::*)(AStarGrid2D::DiagonalMode), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,AStarGrid2D::DiagonalMode>
               (__UnexistingClass *param_1,_func_void_DiagonalMode *param_2,Variant **param_3,
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
    goto LAB_00120d3d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00120da0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00120da0:
      uVar6 = 4;
LAB_00120d3d:
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
      goto LAB_00120cbb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_00120cbb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_DiagonalMode **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC181;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x00120d16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<AStarGrid2D::DiagonalMode>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<AStarGrid2D::DiagonalMode>::call
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
      _err_print_error(&_LC171,"./core/object/method_bind.h",0x154,
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
      goto LAB_00120e06;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,AStarGrid2D::DiagonalMode>
            (p_Var4,(_func_void_DiagonalMode *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00120e06:
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
    goto LAB_0012110d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00121170;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00121170:
      uVar6 = 4;
LAB_0012110d:
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
      goto LAB_0012108b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012108b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
  uVar4 = _LC182;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_bool(this);
                    /* WARNING: Could not recover jumptable at 0x001210e7. Too many branches */
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
      _err_print_error(&_LC171,"./core/object/method_bind.h",0x154,
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
      goto LAB_001211d6;
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
LAB_001211d6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_retc_dv<__UnexistingClass, bool, int, int>(__UnexistingClass*, bool
   (__UnexistingClass::*)(int, int) const, Variant const**, int, Variant&, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_retc_dv<__UnexistingClass,bool,int,int>
               (__UnexistingClass *param_1,_func_bool_int_int *param_2,Variant **param_3,int param_4
               ,Variant *param_5,CallError *param_6,Vector *param_7)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 in_register_0000000c;
  long *plVar8;
  long lVar9;
  Variant *this;
  uint uVar10;
  int iVar11;
  int iVar12;
  Variant *this_00;
  long in_FS_OFFSET;
  long in_stack_00000010;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = (uint)param_5;
  if (uVar10 < 3) {
    lVar1 = *(long *)(in_stack_00000010 + 8);
    iVar11 = 2 - uVar10;
    if (lVar1 == 0) {
      if (iVar11 != 0) goto LAB_00121558;
      this = (Variant *)*plVar8;
LAB_001215ad:
      this_00 = (Variant *)plVar8[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar12 = (int)lVar2;
      if (iVar12 < iVar11) {
LAB_00121558:
        uVar7 = 4;
        goto LAB_0012155d;
      }
      if (uVar10 == 0) {
        lVar9 = (long)(iVar12 + -2);
        if (lVar2 <= lVar9) goto LAB_001215c8;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_001215ad;
      }
      lVar9 = (long)(int)((iVar12 - iVar11) + (uVar10 ^ 1));
      if (lVar2 <= lVar9) {
LAB_001215c8:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar9 * 0x18);
    }
    *(undefined4 *)param_7 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_bool_int_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,2);
    uVar4 = _LC183;
    if (cVar5 == '\0') {
      *(undefined4 *)param_7 = 2;
      *(undefined8 *)(param_7 + 4) = uVar4;
    }
    Variant::operator_cast_to_int(this_00);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar4 = _LC181;
    if (cVar5 == '\0') {
      *(undefined4 *)param_7 = 2;
      *(undefined8 *)(param_7 + 4) = uVar4;
    }
    iVar11 = Variant::operator_cast_to_int(this);
    bVar6 = (*param_2)((int)(param_1 + (long)param_3),iVar11);
    Variant::Variant((Variant *)local_58,bVar6);
    if (Variant::needs_deinit[*(int *)param_6] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_6 = local_58[0];
    *(undefined8 *)(param_6 + 8) = local_50;
    *(undefined8 *)(param_6 + 0x10) = uStack_48;
  }
  else {
    uVar7 = 3;
LAB_0012155d:
    *(undefined4 *)param_7 = uVar7;
    *(undefined4 *)(param_7 + 8) = 2;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, int, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<bool,int,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  Variant *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
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
    in_R8 = (Variant *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC171,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
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
      goto LAB_00121686;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_retc_dv<__UnexistingClass,bool,int,int>
            (p_Var4,(_func_bool_int_int *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             (CallError *)param_1,in_R9);
LAB_00121686:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, AStarGrid2D::CellShape>(__UnexistingClass*,
   void (__UnexistingClass::*)(AStarGrid2D::CellShape), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,AStarGrid2D::CellShape>
               (__UnexistingClass *param_1,_func_void_CellShape *param_2,Variant **param_3,
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
    goto LAB_0012197d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_001219e0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_001219e0:
      uVar6 = 4;
LAB_0012197d:
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
      goto LAB_001218fb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_001218fb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_CellShape **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC181;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x00121956. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<AStarGrid2D::CellShape>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<AStarGrid2D::CellShape>::call
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
      _err_print_error(&_LC171,"./core/object/method_bind.h",0x154,
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
      goto LAB_00121a46;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,AStarGrid2D::CellShape>
            (p_Var4,(_func_void_CellShape *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8
             ,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00121a46:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<Vector2i const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Vector2i_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int iVar7;
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
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar7 = *param_2;
  if (iVar7 != param_1) goto LAB_00121c87;
  local_78 = 0;
  local_68 = &_LC8;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,6);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00121d80:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00121d80;
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
  *(undefined4 *)param_3 = local_68._0_4_;
  if (*(long *)(param_3 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar5 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar5;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar5 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar5;
  }
  lVar6 = local_48;
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) == local_48) {
    *(undefined4 *)(param_3 + 0x28) = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    *(long *)(param_3 + 0x20) = local_48;
    *(undefined4 *)(param_3 + 0x28) = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
  iVar7 = *param_2;
LAB_00121c87:
  *param_2 = iVar7 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTR<Vector<Vector2>, Vector2i const&, Vector2i const&>::_gen_argument_type_info(int)
   const */

undefined4 *
MethodBindTR<Vector<Vector2>,Vector2i_const&,Vector2i_const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_60 = (undefined1  [16])0x0;
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    call_get_argument_type_info_helper<Vector2i_const&>
              (in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<Vector2i_const&>
              (in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_00122051;
  }
  local_70 = 0;
  local_68 = &_LC8;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 0x23;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_0012207f:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_0012207f;
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
    }
  }
  lVar3 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00122051:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector2i const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<Vector2i_const&>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_14 = 0;
  call_get_argument_type_info_helper<Vector2i_const&>(in_EDX,&local_14,pPVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, Vector2i const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool,Vector2i_const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<Vector2i_const&>
              (0,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_00122215;
  }
  local_70 = 0;
  local_68 = &_LC8;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 1;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_00122327:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_00122327;
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      lVar3 = local_78;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        lVar3 = local_78;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
      lVar3 = local_78;
    }
  }
  local_78 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00122215:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float, Vector2i const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<float,Vector2i_const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<Vector2i_const&>
              (0,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_00122415;
  }
  local_78 = 0;
  local_70 = 0;
  local_68 = &_LC8;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_70);
  *puVar4 = 3;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_70 == 0) {
    puVar4[10] = 6;
LAB_0012252f:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_78);
    uVar3 = local_70;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_70);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_0012252f;
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      uVar3 = local_70;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        uVar3 = local_70;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
      uVar3 = local_70;
    }
  }
  local_70 = uVar3;
  if (uVar3 != 0) {
    LOCK();
    plVar1 = (long *)(uVar3 - 0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(uVar3 - 0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
LAB_00122415:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar4;
}



/* MethodBindTRC<Vector2, Vector2i const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Vector2,Vector2i_const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<Vector2i_const&>
              (0,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_00122625;
  }
  local_70 = 0;
  local_68 = &_LC8;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 5;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_00122737:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_00122737;
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      lVar3 = local_78;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        lVar3 = local_78;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
      lVar3 = local_78;
    }
  }
  local_78 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00122625:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector2i const&, bool>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<Vector2i_const&,bool>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar7;
  long in_FS_OFFSET;
  int local_8c;
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
  
  pPVar7 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar7 = 0;
  *(undefined4 *)(pPVar7 + 0x18) = 0;
  *(undefined8 *)(pPVar7 + 0x20) = 0;
  *(undefined4 *)(pPVar7 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar7 + 8) = (undefined1  [16])0x0;
  local_8c = 0;
  call_get_argument_type_info_helper<Vector2i_const&>(in_EDX,&local_8c,pPVar7);
  if (in_EDX != local_8c) goto LAB_001227f4;
  local_78 = 0;
  local_68 = &_LC8;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_001228f0:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_001228f0;
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
  *(undefined4 *)pPVar7 = local_68._0_4_;
  if (*(long *)(pPVar7 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar7 + 8));
    uVar5 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(pPVar7 + 8) = uVar5;
  }
  if (*(long *)(pPVar7 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar5 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(pPVar7 + 0x10) = uVar5;
  }
  lVar6 = local_48;
  *(int *)(pPVar7 + 0x18) = local_50;
  if (*(long *)(pPVar7 + 0x20) == local_48) {
    *(undefined4 *)(pPVar7 + 0x28) = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar7 + 0x20));
    *(long *)(pPVar7 + 0x20) = local_48;
    *(undefined4 *)(pPVar7 + 0x28) = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
LAB_001227f4:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar7;
}



/* MethodBindTR<TypedArray<Vector2i>, Vector2i const&, Vector2i const&,
   bool>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTR<TypedArray<Vector2i>,Vector2i_const&,Vector2i_const&,bool>::_gen_argument_type_info
          (int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar6;
  long in_FS_OFFSET;
  uint local_bc;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar6 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 3) {
    local_90._0_8_ = 0;
    local_90._8_8_ = 0;
    local_98 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 6;
    local_bc = 0;
    call_get_argument_type_info_helper<Vector2i_const&>
              (in_EDX,(int *)&local_bc,(PropertyInfo *)&local_98);
    call_get_argument_type_info_helper<Vector2i_const&>
              (in_EDX,(int *)&local_bc,(PropertyInfo *)&local_98);
    if (in_EDX == local_bc) {
      local_a8 = 0;
      local_b0 = 0;
      local_68 = &_LC8;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      String::parse_latin1((StrRange *)&local_b0);
      local_b8 = 0;
      local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
      local_50 = 0;
      local_48 = 0;
      local_60 = (undefined1  [16])0x0;
      if (local_b0 == 0) {
LAB_00122d5b:
        local_40 = 6;
        StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_a8);
      }
      else {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_b0);
        local_40 = 6;
        if (local_50 != 0x11) goto LAB_00122d5b;
        StringName::StringName((StringName *)&local_a0,(String *)&local_48,false);
        if (local_60._8_8_ == local_a0) {
          if ((StringName::configured != '\0') && (local_a0 != 0)) {
            StringName::unref();
          }
        }
        else {
          StringName::unref();
          local_60._8_8_ = local_a0;
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      if ((StringName::configured != '\0') && (local_a8 != 0)) {
        StringName::unref();
      }
      local_98 = CONCAT44(local_98._4_4_,local_68._0_4_);
      if (local_90._0_8_ != local_60._0_8_) {
        CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
        local_90._0_8_ = local_60._0_8_;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = local_60._8_8_;
        local_60 = auVar3 << 0x40;
      }
      if (local_90._8_8_ != local_60._8_8_) {
        StringName::unref();
        local_90._8_8_ = local_60._8_8_;
        local_60._8_8_ = 0;
      }
      local_80 = CONCAT44(local_80._4_4_,local_50);
      if (local_78 != local_48) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        local_78 = local_48;
        local_48 = 0;
      }
      local_70 = local_40;
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
    }
    uVar5 = local_90._8_8_;
    uVar4 = local_90._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_90._8_8_;
    local_90 = auVar1 << 0x40;
    *puVar6 = (undefined4)local_98;
    *(undefined8 *)(puVar6 + 2) = uVar4;
    *(undefined8 *)(puVar6 + 4) = uVar5;
    puVar6[6] = (undefined4)local_80;
    *(long *)(puVar6 + 8) = local_78;
    puVar6[10] = local_70;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    goto LAB_00122b33;
  }
  local_98 = 0;
  Variant::get_type_name((CowData<char32_t> *)&local_a0,6);
  local_a8 = 0;
  *puVar6 = 0x1c;
  puVar6[6] = 0x1f;
  *(undefined8 *)(puVar6 + 8) = 0;
  *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
  if (local_a0 == 0) {
    puVar6[10] = 6;
LAB_00122c07:
    StringName::operator=((StringName *)(puVar6 + 4),(StringName *)&local_98);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar6 + 8),(CowData *)&local_a0);
    puVar6[10] = 6;
    if (puVar6[6] != 0x11) goto LAB_00122c07;
    StringName::StringName((StringName *)&local_68,(String *)(puVar6 + 8),false);
    if ((undefined *)*(long *)(puVar6 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar6 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
LAB_00122b33:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar6;
}



/* MethodBindT<Vector2i const&, float>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<Vector2i_const&,float>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar5;
  long in_FS_OFFSET;
  int local_8c;
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
  
  pPVar5 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar5 = 0;
  *(undefined4 *)(pPVar5 + 0x18) = 0;
  *(undefined8 *)(pPVar5 + 0x20) = 0;
  *(undefined4 *)(pPVar5 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar5 + 8) = (undefined1  [16])0x0;
  local_8c = 0;
  call_get_argument_type_info_helper<Vector2i_const&>(in_EDX,&local_8c,pPVar5);
  if (in_EDX != local_8c) goto LAB_00122ee4;
  local_88 = 0;
  local_68 = &_LC8;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_78 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,3);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00122fe5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00122fe5;
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
  *(undefined4 *)pPVar5 = local_68._0_4_;
  if (*(long *)(pPVar5 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar5 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(pPVar5 + 8) = uVar3;
  }
  if (*(long *)(pPVar5 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(pPVar5 + 0x10) = uVar3;
  }
  *(int *)(pPVar5 + 0x18) = local_50;
  if (*(long *)(pPVar5 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar5 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(pPVar5 + 0x20) = lVar4;
  }
  *(undefined4 *)(pPVar5 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00122ee4:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar5;
}



/* MethodBindTR<TypedArray<Vector2i>, Vector2i const&, Vector2i
   const&>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTR<TypedArray<Vector2i>,Vector2i_const&,Vector2i_const&>::_gen_argument_type_info
          (int param_1)

{
  long *plVar1;
  long lVar2;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  long local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_60 = (undefined1  [16])0x0;
    local_68 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    call_get_argument_type_info_helper<Vector2i_const&>
              (in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<Vector2i_const&>
              (in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar3 = (undefined4)local_68;
    *(undefined8 *)(puVar3 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar3 + 4) = local_60._8_8_;
    puVar3[6] = (undefined4)local_50;
    *(undefined8 *)(puVar3 + 8) = local_48;
    puVar3[10] = local_40;
    goto LAB_00123259;
  }
  local_70 = 0;
  Variant::get_type_name(&local_78,6);
  *puVar3 = 0x1c;
  puVar3[6] = 0x1f;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar3[10] = 6;
LAB_00123287:
    StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_78);
    puVar3[10] = 6;
    if (puVar3[6] != 0x11) goto LAB_00123287;
    StringName::StringName((StringName *)&local_68,(String *)(puVar3 + 8),false);
    if (*(long *)(puVar3 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(long *)(puVar3 + 4) = local_68;
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
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00123259:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<Vector2>, Vector2i const&, Vector2i const&,
   bool>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTR<Vector<Vector2>,Vector2i_const&,Vector2i_const&,bool>::_gen_argument_type_info
          (int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
  long in_FS_OFFSET;
  uint local_bc;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 3) {
    local_90._0_8_ = 0;
    local_90._8_8_ = 0;
    local_98 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 6;
    local_bc = 0;
    call_get_argument_type_info_helper<Vector2i_const&>
              (in_EDX,(int *)&local_bc,(PropertyInfo *)&local_98);
    call_get_argument_type_info_helper<Vector2i_const&>
              (in_EDX,(int *)&local_bc,(PropertyInfo *)&local_98);
    if (in_EDX == local_bc) {
      local_a8 = 0;
      local_b0 = 0;
      local_68 = &_LC8;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_60._8_8_;
      local_60 = auVar3 << 0x40;
      String::parse_latin1((StrRange *)&local_b0);
      local_b8 = 0;
      local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
      local_50 = 0;
      local_48 = 0;
      local_60 = (undefined1  [16])0x0;
      if (local_b0 == 0) {
LAB_0012361b:
        local_40 = 6;
        StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_a8);
      }
      else {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_b0);
        local_40 = 6;
        if (local_50 != 0x11) goto LAB_0012361b;
        StringName::StringName((StringName *)&local_a0,(String *)&local_48,false);
        if (local_60._8_8_ == local_a0) {
          if ((StringName::configured != '\0') && (local_a0 != 0)) {
            StringName::unref();
          }
        }
        else {
          StringName::unref();
          local_60._8_8_ = local_a0;
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      if ((StringName::configured != '\0') && (local_a8 != 0)) {
        StringName::unref();
      }
      local_98 = CONCAT44(local_98._4_4_,local_68._0_4_);
      if (local_90._0_8_ != local_60._0_8_) {
        CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
        local_90._0_8_ = local_60._0_8_;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = local_60._8_8_;
        local_60 = auVar4 << 0x40;
      }
      if (local_90._8_8_ != local_60._8_8_) {
        StringName::unref();
        local_90._8_8_ = local_60._8_8_;
        local_60._8_8_ = 0;
      }
      local_80 = CONCAT44(local_80._4_4_,local_50);
      if (local_78 != local_48) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        local_78 = local_48;
        local_48 = 0;
      }
      local_70 = local_40;
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
    }
    uVar6 = local_90._8_8_;
    uVar5 = local_90._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_90._8_8_;
    local_90 = auVar1 << 0x40;
    *puVar7 = (undefined4)local_98;
    *(undefined8 *)(puVar7 + 2) = uVar5;
    *(undefined8 *)(puVar7 + 4) = uVar6;
    puVar7[6] = (undefined4)local_80;
    *(long *)(puVar7 + 8) = local_78;
    puVar7[10] = local_70;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    goto LAB_001233d3;
  }
  local_98 = 0;
  local_a0 = 0;
  local_68 = &_LC8;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_a0);
  local_a8 = 0;
  *puVar7 = 0x23;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (local_a0 == 0) {
    puVar7[10] = 6;
LAB_001234c7:
    StringName::operator=((StringName *)(puVar7 + 4),(StringName *)&local_98);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 8),(CowData *)&local_a0);
    puVar7[10] = 6;
    if (puVar7[6] != 0x11) goto LAB_001234c7;
    StringName::StringName((StringName *)&local_68,(String *)(puVar7 + 8),false);
    if (*(undefined **)(puVar7 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar7 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
LAB_001233d3:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



/* void call_get_argument_type_info_helper<Rect2i const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Rect2i_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int iVar7;
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
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar7 = *param_2;
  if (iVar7 != param_1) goto LAB_00123767;
  local_78 = 0;
  local_68 = &_LC8;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,8);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00123860:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00123860;
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
  *(undefined4 *)param_3 = local_68._0_4_;
  if (*(long *)(param_3 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar5 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar5;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar5 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar5;
  }
  lVar6 = local_48;
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) == local_48) {
    *(undefined4 *)(param_3 + 0x28) = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    *(long *)(param_3 + 0x20) = local_48;
    *(undefined4 *)(param_3 + 0x28) = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
  iVar7 = *param_2;
LAB_00123767:
  *param_2 = iVar7 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<Rect2i const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<Rect2i_const&>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_14 = 0;
  call_get_argument_type_info_helper<Rect2i_const&>(in_EDX,&local_14,pPVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TypedArray<Dictionary>, Rect2i const&>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTRC<TypedArray<Dictionary>,Rect2i_const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_68;
  ulong local_60;
  long local_58;
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  long local_20;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_58 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 6;
    local_60 = local_60 & 0xffffffff00000000;
    local_50 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<Rect2i_const&>(0,(int *)&local_60,(PropertyInfo *)&local_58);
    *puVar3 = (undefined4)local_58;
    *(undefined8 *)(puVar3 + 2) = local_50._0_8_;
    *(undefined8 *)(puVar3 + 4) = local_50._8_8_;
    puVar3[6] = (undefined4)local_40;
    *(undefined8 *)(puVar3 + 8) = local_38;
    puVar3[10] = local_30;
    goto LAB_00123ae3;
  }
  local_60 = 0;
  Variant::get_type_name(&local_68,0x1b);
  *puVar3 = 0x1c;
  puVar3[6] = 0x1f;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_68 == 0) {
    puVar3[10] = 6;
LAB_00123bd7:
    StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_60);
    lVar2 = local_68;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_68);
    puVar3[10] = 6;
    if (puVar3[6] != 0x11) goto LAB_00123bd7;
    StringName::StringName((StringName *)&local_58,(String *)(puVar3 + 8),false);
    if (*(long *)(puVar3 + 4) == local_58) {
      lVar2 = local_68;
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
        lVar2 = local_68;
      }
    }
    else {
      StringName::unref();
      *(long *)(puVar3 + 4) = local_58;
      lVar2 = local_68;
    }
  }
  local_68 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
LAB_00123ae3:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Rect2i const&, bool>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<Rect2i_const&,bool>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar7;
  long in_FS_OFFSET;
  int local_8c;
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
  
  pPVar7 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar7 = 0;
  *(undefined4 *)(pPVar7 + 0x18) = 0;
  *(undefined8 *)(pPVar7 + 0x20) = 0;
  *(undefined4 *)(pPVar7 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar7 + 8) = (undefined1  [16])0x0;
  local_8c = 0;
  call_get_argument_type_info_helper<Rect2i_const&>(in_EDX,&local_8c,pPVar7);
  if (in_EDX != local_8c) goto LAB_00123c94;
  local_78 = 0;
  local_68 = &_LC8;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00123d90:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00123d90;
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
  *(undefined4 *)pPVar7 = local_68._0_4_;
  if (*(long *)(pPVar7 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar7 + 8));
    uVar5 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(pPVar7 + 8) = uVar5;
  }
  if (*(long *)(pPVar7 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar5 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(pPVar7 + 0x10) = uVar5;
  }
  lVar6 = local_48;
  *(int *)(pPVar7 + 0x18) = local_50;
  if (*(long *)(pPVar7 + 0x20) == local_48) {
    *(undefined4 *)(pPVar7 + 0x28) = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar7 + 0x20));
    *(long *)(pPVar7 + 0x20) = local_48;
    *(undefined4 *)(pPVar7 + 0x28) = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
LAB_00123c94:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar7;
}



/* MethodBindT<Rect2i const&, float>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<Rect2i_const&,float>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar5;
  long in_FS_OFFSET;
  int local_8c;
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
  
  pPVar5 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar5 = 0;
  *(undefined4 *)(pPVar5 + 0x18) = 0;
  *(undefined8 *)(pPVar5 + 0x20) = 0;
  *(undefined4 *)(pPVar5 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar5 + 8) = (undefined1  [16])0x0;
  local_8c = 0;
  call_get_argument_type_info_helper<Rect2i_const&>(in_EDX,&local_8c,pPVar5);
  if (in_EDX != local_8c) goto LAB_00123f64;
  local_88 = 0;
  local_68 = &_LC8;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_78 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,3);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00124065:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00124065;
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
  *(undefined4 *)pPVar5 = local_68._0_4_;
  if (*(long *)(pPVar5 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar5 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(pPVar5 + 8) = uVar3;
  }
  if (*(long *)(pPVar5 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(pPVar5 + 0x10) = uVar3;
  }
  *(int *)(pPVar5 + 0x18) = local_50;
  if (*(long *)(pPVar5 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar5 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(pPVar5 + 0x20) = lVar4;
  }
  *(undefined4 *)(pPVar5 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00123f64:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar5;
}



/* void call_get_argument_type_info_helper<int>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<int>(int param_1,int *param_2,PropertyInfo *param_3)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int iVar7;
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
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar7 = *param_2;
  if (iVar7 != param_1) goto LAB_001241b7;
  local_78 = 0;
  local_68 = &_LC8;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,2);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_001242b0:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_001242b0;
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
  *(undefined4 *)param_3 = local_68._0_4_;
  if (*(long *)(param_3 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar5 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar5;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar5 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar5;
  }
  lVar6 = local_48;
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) == local_48) {
    *(undefined4 *)(param_3 + 0x28) = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    *(long *)(param_3 + 0x20) = local_48;
    *(undefined4 *)(param_3 + 0x28) = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
  iVar7 = *param_2;
LAB_001241b7:
  *param_2 = iVar7 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTRC<bool, int, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool,int,int>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_60 = (undefined1  [16])0x0;
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    call_get_argument_type_info_helper<int>(in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<int>(in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_00124581;
  }
  local_70 = 0;
  local_68 = &_LC8;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 1;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_001245af:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_001245af;
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
    }
  }
  lVar3 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00124581:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* AStarGrid2D::~AStarGrid2D() */

void __thiscall AStarGrid2D::~AStarGrid2D(AStarGrid2D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodInfo::~MethodInfo() */

void __thiscall MethodInfo::~MethodInfo(MethodInfo *this)

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
/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

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
/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<TypedArray<Vector2i>, Vector2i const&, Vector2i const&, bool>::~MethodBindTR() */

void __thiscall
MethodBindTR<TypedArray<Vector2i>,Vector2i_const&,Vector2i_const&,bool>::~MethodBindTR
          (MethodBindTR<TypedArray<Vector2i>,Vector2i_const&,Vector2i_const&,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Vector<Vector2>, Vector2i const&, Vector2i const&, bool>::~MethodBindTR() */

void __thiscall
MethodBindTR<Vector<Vector2>,Vector2i_const&,Vector2i_const&,bool>::~MethodBindTR
          (MethodBindTR<Vector<Vector2>,Vector2i_const&,Vector2i_const&,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<TypedArray<Dictionary>, Rect2i const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TypedArray<Dictionary>,Rect2i_const&>::~MethodBindTRC
          (MethodBindTRC<TypedArray<Dictionary>,Rect2i_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Vector2, Vector2i const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Vector2,Vector2i_const&>::~MethodBindTRC(MethodBindTRC<Vector2,Vector2i_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Rect2i const&, float>::~MethodBindT() */

void __thiscall
MethodBindT<Rect2i_const&,float>::~MethodBindT(MethodBindT<Rect2i_const&,float> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Rect2i const&, bool>::~MethodBindT() */

void __thiscall MethodBindT<Rect2i_const&,bool>::~MethodBindT(MethodBindT<Rect2i_const&,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<float, Vector2i const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<float,Vector2i_const&>::~MethodBindTRC(MethodBindTRC<float,Vector2i_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Vector2i const&, float>::~MethodBindT() */

void __thiscall
MethodBindT<Vector2i_const&,float>::~MethodBindT(MethodBindT<Vector2i_const&,float> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<bool, Vector2i const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<bool,Vector2i_const&>::~MethodBindTRC(MethodBindTRC<bool,Vector2i_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Vector2i const&, bool>::~MethodBindT() */

void __thiscall
MethodBindT<Vector2i_const&,bool>::~MethodBindT(MethodBindT<Vector2i_const&,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<AStarGrid2D::Heuristic>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<AStarGrid2D::Heuristic>::~MethodBindTRC(MethodBindTRC<AStarGrid2D::Heuristic> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<AStarGrid2D::Heuristic>::~MethodBindT() */

void __thiscall
MethodBindT<AStarGrid2D::Heuristic>::~MethodBindT(MethodBindT<AStarGrid2D::Heuristic> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<AStarGrid2D::DiagonalMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<AStarGrid2D::DiagonalMode>::~MethodBindTRC
          (MethodBindTRC<AStarGrid2D::DiagonalMode> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<AStarGrid2D::DiagonalMode>::~MethodBindT() */

void __thiscall
MethodBindT<AStarGrid2D::DiagonalMode>::~MethodBindT(MethodBindT<AStarGrid2D::DiagonalMode> *this)

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
/* MethodBindTRC<bool, int, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool,int,int>::~MethodBindTRC(MethodBindTRC<bool,int,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<AStarGrid2D::CellShape>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<AStarGrid2D::CellShape>::~MethodBindTRC(MethodBindTRC<AStarGrid2D::CellShape> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<AStarGrid2D::CellShape>::~MethodBindT() */

void __thiscall
MethodBindT<AStarGrid2D::CellShape>::~MethodBindT(MethodBindT<AStarGrid2D::CellShape> *this)

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
/* MethodBindTRC<Vector2i>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector2i>::~MethodBindTRC(MethodBindTRC<Vector2i> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Vector2i const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector2i_const&>::~MethodBindT(MethodBindT<Vector2i_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Rect2i>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Rect2i>::~MethodBindTRC(MethodBindTRC<Rect2i> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Rect2i const&>::~MethodBindT() */

void __thiscall MethodBindT<Rect2i_const&>::~MethodBindT(MethodBindT<Rect2i_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Vector<Vector2>, Vector2i const&, Vector2i const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Vector<Vector2>,Vector2i_const&,Vector2i_const&>::~MethodBindTR
          (MethodBindTR<Vector<Vector2>,Vector2i_const&,Vector2i_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<TypedArray<Vector2i>, Vector2i const&, Vector2i const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<TypedArray<Vector2i>,Vector2i_const&,Vector2i_const&>::~MethodBindTR
          (MethodBindTR<TypedArray<Vector2i>,Vector2i_const&,Vector2i_const&> *this)

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


