
/* ImmediateMesh::get_surface_count() const */

undefined4 __thiscall ImmediateMesh::get_surface_count(ImmediateMesh *this)

{
  return *(undefined4 *)(this + 0x470);
}



/* ImmediateMesh::surface_get_array_index_len(int) const */

undefined8 ImmediateMesh::surface_get_array_index_len(int param_1)

{
  return 0;
}



/* ImmediateMesh::get_blend_shape_count() const */

undefined8 ImmediateMesh::get_blend_shape_count(void)

{
  return 0;
}



/* ImmediateMesh::get_blend_shape_name(int) const */

undefined8 ImmediateMesh::get_blend_shape_name(int param_1)

{
  undefined4 in_register_0000003c;
  
  *(undefined8 *)CONCAT44(in_register_0000003c,param_1) = 0;
  return CONCAT44(in_register_0000003c,param_1);
}



/* ImmediateMesh::set_blend_shape_name(int, StringName const&) */

void ImmediateMesh::set_blend_shape_name(int param_1,StringName *param_2)

{
  return;
}



/* ImmediateMesh::get_rid() const */

undefined8 __thiscall ImmediateMesh::get_rid(ImmediateMesh *this)

{
  return *(undefined8 *)(this + 0x3c0);
}



/* ImmediateMesh::surface_add_vertex(Vector3 const&) */

void __thiscall ImmediateMesh::surface_add_vertex(ImmediateMesh *this,Vector3 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  void *pvVar7;
  uint uVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x480] == (ImmediateMesh)0x0) {
    _err_print_error("surface_add_vertex","scene/resources/immediate_mesh.cpp",0x66,
                     "Condition \"!surface_active\" is true.",
                     "Not creating any surface. Use surface_begin() to do it.",0,0);
  }
  else {
    if ((*(int *)(this + 0x460) != 0) && (this[0x498] != (ImmediateMesh)0x0)) {
      _err_print_error("surface_add_vertex","scene/resources/immediate_mesh.cpp",0x67,
                       "Condition \"vertices.size() && active_surface_data.vertex_2d\" is true.",
                       "Can\'t mix 2D and 3D vertices in a surface.",0,0);
      goto LAB_001001fe;
    }
    if (this[0x3c8] != (ImmediateMesh)0x0) {
      uVar4 = *(undefined8 *)(this + 0x3d0);
      uVar6 = *(undefined8 *)(this + 0x3d8);
      uVar8 = *(uint *)(this + 0x410);
      pvVar7 = *(void **)(this + 0x418);
      if (uVar8 == *(uint *)(this + 0x414)) {
        uVar8 = uVar8 * 2;
        if (uVar8 == 0) {
          uVar8 = 1;
        }
        *(uint *)(this + 0x414) = uVar8;
        pvVar7 = (void *)Memory::realloc_static(pvVar7,(ulong)uVar8 << 4,false);
        *(void **)(this + 0x418) = pvVar7;
        if (pvVar7 == (void *)0x0) goto LAB_00100470;
        uVar8 = *(uint *)(this + 0x410);
      }
      *(uint *)(this + 0x410) = uVar8 + 1;
      puVar1 = (undefined8 *)((long)pvVar7 + (ulong)uVar8 * 0x10);
      *puVar1 = uVar4;
      puVar1[1] = uVar6;
    }
    if (this[0x3c9] != (ImmediateMesh)0x0) {
      uVar4 = *(undefined8 *)(this + 0x3e0);
      uVar8 = *(uint *)(this + 0x420);
      pvVar7 = *(void **)(this + 0x428);
      uVar2 = *(undefined4 *)(this + 1000);
      if (uVar8 == *(uint *)(this + 0x424)) {
        uVar9 = (ulong)(uVar8 * 2);
        if (uVar8 * 2 == 0) {
          uVar9 = 1;
        }
        *(int *)(this + 0x424) = (int)uVar9;
        pvVar7 = (void *)Memory::realloc_static(pvVar7,uVar9 * 0xc,false);
        *(void **)(this + 0x428) = pvVar7;
        if (pvVar7 == (void *)0x0) goto LAB_00100470;
        uVar8 = *(uint *)(this + 0x420);
      }
      *(uint *)(this + 0x420) = uVar8 + 1;
      puVar1 = (undefined8 *)((long)pvVar7 + (ulong)uVar8 * 0xc);
      *puVar1 = uVar4;
      *(undefined4 *)(puVar1 + 1) = uVar2;
    }
    if (this[0x3ca] != (ImmediateMesh)0x0) {
      uVar4 = *(undefined8 *)(this + 0x3ec);
      uVar6 = *(undefined8 *)(this + 0x3f4);
      uVar8 = *(uint *)(this + 0x430);
      pvVar7 = *(void **)(this + 0x438);
      if (uVar8 == *(uint *)(this + 0x434)) {
        uVar8 = uVar8 * 2;
        if (uVar8 == 0) {
          uVar8 = 1;
        }
        *(uint *)(this + 0x434) = uVar8;
        pvVar7 = (void *)Memory::realloc_static(pvVar7,(ulong)uVar8 << 4,false);
        *(void **)(this + 0x438) = pvVar7;
        if (pvVar7 == (void *)0x0) goto LAB_00100470;
        uVar8 = *(uint *)(this + 0x430);
      }
      *(uint *)(this + 0x430) = uVar8 + 1;
      puVar1 = (undefined8 *)((long)pvVar7 + (ulong)uVar8 * 0x10);
      *puVar1 = uVar4;
      puVar1[1] = uVar6;
    }
    if (this[0x3cb] != (ImmediateMesh)0x0) {
      uVar4 = *(undefined8 *)(this + 0x3fc);
      uVar8 = *(uint *)(this + 0x440);
      pvVar7 = *(void **)(this + 0x448);
      if (uVar8 == *(uint *)(this + 0x444)) {
        uVar9 = (ulong)(uVar8 * 2);
        if (uVar8 * 2 == 0) {
          uVar9 = 1;
        }
        *(int *)(this + 0x444) = (int)uVar9;
        pvVar7 = (void *)Memory::realloc_static(pvVar7,uVar9 * 8,false);
        *(void **)(this + 0x448) = pvVar7;
        if (pvVar7 == (void *)0x0) goto LAB_00100470;
        uVar8 = *(uint *)(this + 0x440);
      }
      *(uint *)(this + 0x440) = uVar8 + 1;
      *(undefined8 *)((long)pvVar7 + (ulong)uVar8 * 8) = uVar4;
    }
    if (this[0x3cc] != (ImmediateMesh)0x0) {
      uVar4 = *(undefined8 *)(this + 0x404);
      uVar8 = *(uint *)(this + 0x450);
      pvVar7 = *(void **)(this + 0x458);
      if (uVar8 == *(uint *)(this + 0x454)) {
        uVar9 = (ulong)(uVar8 * 2);
        if (uVar8 * 2 == 0) {
          uVar9 = 1;
        }
        *(int *)(this + 0x454) = (int)uVar9;
        pvVar7 = (void *)Memory::realloc_static(pvVar7,uVar9 * 8,false);
        *(void **)(this + 0x458) = pvVar7;
        if (pvVar7 == (void *)0x0) goto LAB_00100470;
        uVar8 = *(uint *)(this + 0x450);
      }
      *(uint *)(this + 0x450) = uVar8 + 1;
      *(undefined8 *)((long)pvVar7 + (ulong)uVar8 * 8) = uVar4;
    }
    uVar4 = *(undefined8 *)param_1;
    uVar8 = *(uint *)(this + 0x460);
    pvVar7 = *(void **)(this + 0x468);
    uVar2 = *(undefined4 *)(param_1 + 8);
    if (uVar8 == *(uint *)(this + 0x464)) {
      uVar9 = (ulong)(uVar8 * 2);
      if (uVar8 * 2 == 0) {
        uVar9 = 1;
      }
      *(int *)(this + 0x464) = (int)uVar9;
      pvVar7 = (void *)Memory::realloc_static(pvVar7,uVar9 * 0xc,false);
      *(void **)(this + 0x468) = pvVar7;
      if (pvVar7 == (void *)0x0) {
LAB_00100470:
        _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      uVar8 = *(uint *)(this + 0x460);
    }
    *(uint *)(this + 0x460) = uVar8 + 1;
    puVar1 = (undefined8 *)((long)pvVar7 + (ulong)uVar8 * 0xc);
    *puVar1 = uVar4;
    *(undefined4 *)(puVar1 + 1) = uVar2;
  }
LAB_001001fe:
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ImmediateMesh::surface_add_vertex_2d(Vector2 const&) */

void __thiscall ImmediateMesh::surface_add_vertex_2d(ImmediateMesh *this,Vector2 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  void *pvVar7;
  uint uVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x480] == (ImmediateMesh)0x0) {
    _err_print_error("surface_add_vertex_2d","scene/resources/immediate_mesh.cpp",0x7c,
                     "Condition \"!surface_active\" is true.",
                     "Not creating any surface. Use surface_begin() to do it.",0,0);
  }
  else {
    if ((*(int *)(this + 0x460) != 0) && (this[0x498] == (ImmediateMesh)0x0)) {
      _err_print_error("surface_add_vertex_2d","scene/resources/immediate_mesh.cpp",0x7d,
                       "Condition \"vertices.size() && !active_surface_data.vertex_2d\" is true.",
                       "Can\'t mix 2D and 3D vertices in a surface.",0,0);
      goto LAB_00100644;
    }
    if (this[0x3c8] != (ImmediateMesh)0x0) {
      uVar4 = *(undefined8 *)(this + 0x3d0);
      uVar6 = *(undefined8 *)(this + 0x3d8);
      uVar8 = *(uint *)(this + 0x410);
      pvVar7 = *(void **)(this + 0x418);
      if (uVar8 == *(uint *)(this + 0x414)) {
        uVar8 = uVar8 * 2;
        if (uVar8 == 0) {
          uVar8 = 1;
        }
        *(uint *)(this + 0x414) = uVar8;
        pvVar7 = (void *)Memory::realloc_static(pvVar7,(ulong)uVar8 << 4,false);
        *(void **)(this + 0x418) = pvVar7;
        if (pvVar7 == (void *)0x0) goto LAB_001008c0;
        uVar8 = *(uint *)(this + 0x410);
      }
      *(uint *)(this + 0x410) = uVar8 + 1;
      puVar1 = (undefined8 *)((long)pvVar7 + (ulong)uVar8 * 0x10);
      *puVar1 = uVar4;
      puVar1[1] = uVar6;
    }
    if (this[0x3c9] != (ImmediateMesh)0x0) {
      uVar4 = *(undefined8 *)(this + 0x3e0);
      uVar8 = *(uint *)(this + 0x420);
      pvVar7 = *(void **)(this + 0x428);
      uVar2 = *(undefined4 *)(this + 1000);
      if (uVar8 == *(uint *)(this + 0x424)) {
        uVar9 = (ulong)(uVar8 * 2);
        if (uVar8 * 2 == 0) {
          uVar9 = 1;
        }
        *(int *)(this + 0x424) = (int)uVar9;
        pvVar7 = (void *)Memory::realloc_static(pvVar7,uVar9 * 0xc,false);
        *(void **)(this + 0x428) = pvVar7;
        if (pvVar7 == (void *)0x0) goto LAB_001008c0;
        uVar8 = *(uint *)(this + 0x420);
      }
      *(uint *)(this + 0x420) = uVar8 + 1;
      puVar1 = (undefined8 *)((long)pvVar7 + (ulong)uVar8 * 0xc);
      *puVar1 = uVar4;
      *(undefined4 *)(puVar1 + 1) = uVar2;
    }
    if (this[0x3ca] != (ImmediateMesh)0x0) {
      uVar4 = *(undefined8 *)(this + 0x3ec);
      uVar6 = *(undefined8 *)(this + 0x3f4);
      uVar8 = *(uint *)(this + 0x430);
      pvVar7 = *(void **)(this + 0x438);
      if (uVar8 == *(uint *)(this + 0x434)) {
        uVar8 = uVar8 * 2;
        if (uVar8 == 0) {
          uVar8 = 1;
        }
        *(uint *)(this + 0x434) = uVar8;
        pvVar7 = (void *)Memory::realloc_static(pvVar7,(ulong)uVar8 << 4,false);
        *(void **)(this + 0x438) = pvVar7;
        if (pvVar7 == (void *)0x0) goto LAB_001008c0;
        uVar8 = *(uint *)(this + 0x430);
      }
      *(uint *)(this + 0x430) = uVar8 + 1;
      puVar1 = (undefined8 *)((long)pvVar7 + (ulong)uVar8 * 0x10);
      *puVar1 = uVar4;
      puVar1[1] = uVar6;
    }
    if (this[0x3cb] != (ImmediateMesh)0x0) {
      uVar4 = *(undefined8 *)(this + 0x3fc);
      uVar8 = *(uint *)(this + 0x440);
      pvVar7 = *(void **)(this + 0x448);
      if (uVar8 == *(uint *)(this + 0x444)) {
        uVar9 = (ulong)(uVar8 * 2);
        if (uVar8 * 2 == 0) {
          uVar9 = 1;
        }
        *(int *)(this + 0x444) = (int)uVar9;
        pvVar7 = (void *)Memory::realloc_static(pvVar7,uVar9 * 8,false);
        *(void **)(this + 0x448) = pvVar7;
        if (pvVar7 == (void *)0x0) goto LAB_001008c0;
        uVar8 = *(uint *)(this + 0x440);
      }
      *(uint *)(this + 0x440) = uVar8 + 1;
      *(undefined8 *)((long)pvVar7 + (ulong)uVar8 * 8) = uVar4;
    }
    if (this[0x3cc] != (ImmediateMesh)0x0) {
      uVar4 = *(undefined8 *)(this + 0x404);
      uVar8 = *(uint *)(this + 0x450);
      pvVar7 = *(void **)(this + 0x458);
      if (uVar8 == *(uint *)(this + 0x454)) {
        uVar9 = (ulong)(uVar8 * 2);
        if (uVar8 * 2 == 0) {
          uVar9 = 1;
        }
        *(int *)(this + 0x454) = (int)uVar9;
        pvVar7 = (void *)Memory::realloc_static(pvVar7,uVar9 * 8,false);
        *(void **)(this + 0x458) = pvVar7;
        if (pvVar7 == (void *)0x0) goto LAB_001008c0;
        uVar8 = *(uint *)(this + 0x450);
      }
      *(uint *)(this + 0x450) = uVar8 + 1;
      *(undefined8 *)((long)pvVar7 + (ulong)uVar8 * 8) = uVar4;
    }
    uVar4 = *(undefined8 *)param_1;
    uVar8 = *(uint *)(this + 0x460);
    pvVar7 = *(void **)(this + 0x468);
    if (uVar8 == *(uint *)(this + 0x464)) {
      uVar9 = (ulong)(uVar8 * 2);
      if (uVar8 * 2 == 0) {
        uVar9 = 1;
      }
      *(int *)(this + 0x464) = (int)uVar9;
      pvVar7 = (void *)Memory::realloc_static(pvVar7,uVar9 * 0xc,false);
      *(void **)(this + 0x468) = pvVar7;
      if (pvVar7 == (void *)0x0) {
LAB_001008c0:
        _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      uVar8 = *(uint *)(this + 0x460);
    }
    *(uint *)(this + 0x460) = uVar8 + 1;
    puVar1 = (undefined8 *)((long)pvVar7 + (ulong)uVar8 * 0xc);
    *puVar1 = uVar4;
    *(undefined4 *)(puVar1 + 1) = 0;
    this[0x498] = (ImmediateMesh)0x1;
  }
LAB_00100644:
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ImmediateMesh::surface_get_array_len(int) const */

undefined4 __thiscall ImmediateMesh::surface_get_array_len(ImmediateMesh *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  
  uVar1 = *(uint *)(this + 0x470);
  if ((-1 < param_1) && (param_1 < (int)uVar1)) {
    if ((uint)param_1 < uVar1) {
      return *(undefined4 *)(*(long *)(this + 0x478) + (long)param_1 * 0x38 + 0x14);
    }
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xae,(long)param_1,(ulong)uVar1,
               "p_index","count","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  _err_print_index_error
            ("surface_get_array_len","scene/resources/immediate_mesh.cpp",0x156,(long)param_1,
             (long)(int)uVar1,"p_idx","int(surfaces.size())","",false,false);
  return 0xffffffff;
}



/* ImmediateMesh::surface_get_format(int) const */

undefined8 __thiscall ImmediateMesh::surface_get_format(ImmediateMesh *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  
  uVar1 = *(uint *)(this + 0x470);
  if ((-1 < param_1) && (param_1 < (int)uVar1)) {
    if ((uint)param_1 < uVar1) {
      return *(undefined8 *)(*(long *)(this + 0x478) + (long)param_1 * 0x38 + 0x18);
    }
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xae,(long)param_1,(ulong)uVar1,
               "p_index","count","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  _err_print_index_error
            ("surface_get_format","scene/resources/immediate_mesh.cpp",0x167,(long)param_1,
             (long)(int)uVar1,"p_idx","int(surfaces.size())","",false,false);
  return 0;
}



/* ImmediateMesh::surface_get_primitive_type(int) const */

undefined4 __thiscall ImmediateMesh::surface_get_primitive_type(ImmediateMesh *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  
  uVar1 = *(uint *)(this + 0x470);
  if ((-1 < param_1) && (param_1 < (int)uVar1)) {
    if ((uint)param_1 < uVar1) {
      return *(undefined4 *)(*(long *)(this + 0x478) + (long)param_1 * 0x38);
    }
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xae,(long)param_1,(ulong)uVar1,
               "p_index","count","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  _err_print_index_error
            ("surface_get_primitive_type","scene/resources/immediate_mesh.cpp",0x16b,(long)param_1,
             (long)(int)uVar1,"p_idx","int(surfaces.size())","",false,false);
  return 5;
}



/* ImmediateMesh::surface_get_arrays(int) const */

Array * ImmediateMesh::surface_get_arrays(int param_1)

{
  long lVar1;
  undefined8 uVar2;
  int in_EDX;
  long in_RSI;
  undefined4 in_register_0000003c;
  Array *this;
  long in_FS_OFFSET;
  
  this = (Array *)CONCAT44(in_register_0000003c,param_1);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((in_EDX < 0) || (*(int *)(in_RSI + 0x470) <= in_EDX)) {
    _err_print_index_error
              ("surface_get_arrays","scene/resources/immediate_mesh.cpp",0x15d,(long)in_EDX,
               (long)*(int *)(in_RSI + 0x470),"p_surface","int(surfaces.size())","",false,false);
    Array::Array(this);
  }
  else {
    uVar2 = RenderingServer::get_singleton();
    RenderingServer::mesh_surface_get_arrays(this,uVar2,*(undefined8 *)(in_RSI + 0x3c0),in_EDX);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ImmediateMesh::surface_get_blend_shape_arrays(int) const */

Array * ImmediateMesh::surface_get_blend_shape_arrays(int param_1)

{
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  long local_40;
  undefined8 local_38;
  undefined1 local_30 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Array::Array((Array *)CONCAT44(in_register_0000003c,param_1));
  local_38 = 0;
  local_40 = 0;
  local_30 = (undefined1  [16])0x0;
  Array::set_typed(param_1,(StringName *)0x1c,(Variant *)&local_40);
  if ((StringName::configured != '\0') && (local_40 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_38] != '\0') {
    Variant::_clear_internal();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (Array *)CONCAT44(in_register_0000003c,param_1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ImmediateMesh::surface_get_lods(int) const */

undefined8 ImmediateMesh::surface_get_lods(int param_1)

{
  undefined4 in_register_0000003c;
  
  Dictionary::Dictionary((Dictionary *)CONCAT44(in_register_0000003c,param_1));
  return CONCAT44(in_register_0000003c,param_1);
}



/* ImmediateMesh::get_aabb() const */

void ImmediateMesh::get_aabb(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  long in_RSI;
  undefined8 *in_RDI;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = *(int *)(in_RSI + 0x470);
  *in_RDI = 0;
  *(undefined4 *)(in_RDI + 1) = 0;
  *(undefined8 *)((long)in_RDI + 0xc) = 0;
  *(undefined4 *)((long)in_RDI + 0x14) = 0;
  if (iVar1 != 0) {
    uVar5 = 0;
    do {
      while (lVar2 = *(long *)(in_RSI + 0x478), uVar5 != 0) {
        uVar5 = uVar5 + 1;
        AABB::merge((AABB *)&local_58);
        *in_RDI = local_58;
        in_RDI[1] = uStack_50;
        in_RDI[2] = local_48;
        if (*(uint *)(in_RSI + 0x470) <= uVar5) goto LAB_00100dce;
      }
      uVar3 = *(undefined8 *)(lVar2 + 0x20);
      uVar4 = *(undefined8 *)(lVar2 + 0x28);
      uVar5 = 1;
      in_RDI[2] = *(undefined8 *)(lVar2 + 0x30);
      *in_RDI = uVar3;
      in_RDI[1] = uVar4;
    } while (1 < *(uint *)(in_RSI + 0x470));
  }
LAB_00100dce:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* LocalVector<Plane, unsigned int, false, false>::resize(unsigned int) [clone .part.0] */

void LocalVector<Plane,unsigned_int,false,false>::resize(uint param_1)

{
  code *pcVar1;
  
  _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                   "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Ref<Material>::TEMPNAMEPLACEHOLDERVALUE(Ref<Material> const&) [clone .isra.0] */

void __thiscall Ref<Material>::operator=(Ref<Material> *this,Ref *param_1)

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



/* ImmediateMesh::surface_begin(Mesh::PrimitiveType, Ref<Material> const&) */

undefined8 __thiscall
ImmediateMesh::surface_begin(ImmediateMesh *this,undefined4 param_2,long *param_3)

{
  Object *pOVar1;
  Object *pOVar2;
  undefined8 in_RAX;
  
  if (this[0x480] == (ImmediateMesh)0x0) {
    *(undefined4 *)(this + 0x488) = param_2;
    pOVar1 = (Object *)*param_3;
    pOVar2 = *(Object **)(this + 0x490);
    if (pOVar1 != pOVar2) {
      *(Object **)(this + 0x490) = pOVar1;
      if (pOVar1 != (Object *)0x0) {
        in_RAX = RefCounted::reference();
        if ((char)in_RAX == '\0') {
          *(undefined8 *)(this + 0x490) = 0;
        }
      }
      if (pOVar2 != (Object *)0x0) {
        in_RAX = RefCounted::unreference();
        if ((char)in_RAX != '\0') {
          in_RAX = predelete_handler(pOVar2);
          if ((char)in_RAX != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            in_RAX = Memory::free_static(pOVar2,false);
          }
        }
      }
    }
    this[0x480] = (ImmediateMesh)0x1;
    return in_RAX;
  }
  _err_print_error("surface_begin","scene/resources/immediate_mesh.cpp",0x22,
                   "Condition \"surface_active\" is true.","Already creating a new surface.",0);
  return 0;
}



/* ImmediateMesh::surface_get_material(int) const */

long * ImmediateMesh::surface_get_material(int param_1)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  uint in_EDX;
  long in_RSI;
  undefined4 in_register_0000003c;
  long *plVar5;
  
  plVar5 = (long *)CONCAT44(in_register_0000003c,param_1);
  uVar1 = *(uint *)(in_RSI + 0x470);
  if ((-1 < (int)in_EDX) && ((int)in_EDX < (int)uVar1)) {
    if (in_EDX < uVar1) {
      lVar2 = *(long *)(in_RSI + 0x478);
      *plVar5 = 0;
      lVar2 = *(long *)(lVar2 + 8 + (long)(int)in_EDX * 0x38);
      if (lVar2 != 0) {
        *plVar5 = lVar2;
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          *plVar5 = 0;
        }
      }
      return plVar5;
    }
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xae,(long)(int)in_EDX,(ulong)uVar1,
               "p_index","count","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  _err_print_index_error
            ("surface_get_material","scene/resources/immediate_mesh.cpp",0x178,(long)(int)in_EDX,
             (long)(int)uVar1,"p_idx","int(surfaces.size())","",false,false);
  *plVar5 = 0;
  return plVar5;
}



/* ImmediateMesh::surface_set_material(int, Ref<Material> const&) */

void __thiscall ImmediateMesh::surface_set_material(ImmediateMesh *this,int param_1,Ref *param_2)

{
  long lVar1;
  uint uVar2;
  Object *pOVar3;
  code *pcVar4;
  char cVar5;
  undefined8 uVar6;
  long *plVar7;
  Object *pOVar8;
  
  uVar2 = *(uint *)(this + 0x470);
  if ((-1 < param_1) && (param_1 < (int)uVar2)) {
    if ((uint)param_1 < uVar2) {
      pOVar3 = *(Object **)param_2;
      lVar1 = *(long *)(this + 0x478) + (long)param_1 * 0x38;
      pOVar8 = *(Object **)(lVar1 + 8);
      if (pOVar3 != pOVar8) {
        *(Object **)(lVar1 + 8) = pOVar3;
        if (pOVar3 != (Object *)0x0) {
          cVar5 = RefCounted::reference();
          if (cVar5 == '\0') {
            *(undefined8 *)(lVar1 + 8) = 0;
          }
        }
        if (pOVar8 != (Object *)0x0) {
          cVar5 = RefCounted::unreference();
          if (cVar5 != '\0') {
            cVar5 = predelete_handler(pOVar8);
            if (cVar5 != '\0') {
              (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
              Memory::free_static(pOVar8,false);
            }
          }
        }
        pOVar8 = *(Object **)param_2;
      }
      uVar6 = 0;
      if (pOVar8 != (Object *)0x0) {
        uVar6 = (**(code **)(*(long *)pOVar8 + 0x1c0))(pOVar8);
      }
      plVar7 = (long *)RenderingServer::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00101155. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x358))(plVar7,*(undefined8 *)(this + 0x3c0),param_1,uVar6);
      return;
    }
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xb2,(long)param_1,(ulong)uVar2,
               "p_index","count","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  _err_print_index_error
            ("surface_set_material","scene/resources/immediate_mesh.cpp",0x16f,(long)param_1,
             (long)(int)uVar2,"p_idx","int(surfaces.size())","",false,false);
  return;
}



/* CowData<unsigned char>::_ref(CowData<unsigned char> const&) [clone .part.0] */

void __thiscall CowData<unsigned_char>::_ref(CowData<unsigned_char> *this,CowData *param_1)

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



/* ImmediateMesh::surface_set_tangent(Plane const&) */

undefined1  [16] ImmediateMesh::surface_set_tangent(Plane *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 *in_RAX;
  uint uVar4;
  undefined8 *in_RDX;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *in_RSI;
  uint uVar7;
  undefined1 auVar8 [16];
  ulong uStack_30;
  
  if (param_1[0x480] == (Plane)0x0) {
    _err_print_error("surface_set_tangent","scene/resources/immediate_mesh.cpp",0x42,
                     "Condition \"!surface_active\" is true.",
                     "Not creating any surface. Use surface_begin() to do it.",0);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uStack_30;
    return auVar3 << 0x40;
  }
  if (param_1[0x3ca] != (Plane)0x0) goto LAB_001012ca;
  uVar1 = *(uint *)(param_1 + 0x460);
  uVar4 = *(uint *)(param_1 + 0x430);
  in_RAX = *(undefined8 **)(param_1 + 0x438);
  if (uVar1 < uVar4) {
LAB_0010135e:
    *(uint *)(param_1 + 0x430) = uVar1;
    uVar4 = uVar1;
  }
  else if (uVar4 < uVar1) {
    uVar7 = uVar1 - 1;
    if (*(uint *)(param_1 + 0x434) < uVar1) {
      uVar4 = uVar7 >> 1 | uVar7;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = (uVar4 | uVar4 >> 0x10) + 1;
      *(uint *)(param_1 + 0x434) = uVar4;
      puVar5 = in_RAX;
      in_RAX = (undefined8 *)Memory::realloc_static(in_RAX,(ulong)uVar4 << 4,false);
      *(undefined8 **)(param_1 + 0x438) = in_RAX;
      if (in_RAX == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        LocalVector<Plane,unsigned_int,false,false>::resize((uint)puVar5);
      }
      uVar4 = *(uint *)(param_1 + 0x430);
      if (uVar1 <= uVar4) goto LAB_0010135e;
    }
    puVar5 = in_RAX + (ulong)uVar4 * 2;
    do {
      *puVar5 = 0;
      puVar6 = puVar5 + 2;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((long)puVar5 + 0xc) = 0;
      puVar5 = puVar6;
    } while (puVar6 != in_RAX + ((ulong)(uVar7 - uVar4) + (ulong)uVar4) * 2 + 2);
    goto LAB_0010135e;
  }
  in_RDX = in_RAX + (ulong)uVar4 * 2;
  for (; in_RDX != in_RAX; in_RAX = in_RAX + 2) {
    uVar2 = in_RSI[1];
    *in_RAX = *in_RSI;
    in_RAX[1] = uVar2;
  }
  param_1[0x3ca] = (Plane)0x1;
LAB_001012ca:
  uVar2 = in_RSI[1];
  *(undefined8 *)(param_1 + 0x3ec) = *in_RSI;
  *(undefined8 *)(param_1 + 0x3f4) = uVar2;
  auVar8._8_8_ = in_RDX;
  auVar8._0_8_ = in_RAX;
  return auVar8;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ImmediateMesh::surface_set_color(Color const&) */

undefined1  [16] ImmediateMesh::surface_set_color(Color *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 *in_RAX;
  uint uVar5;
  undefined8 *in_RDX;
  undefined8 *puVar6;
  undefined8 *in_RSI;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  ulong uStack_20;
  
  if (param_1[0x480] == (Color)0x0) {
    _err_print_error("surface_set_color","scene/resources/immediate_mesh.cpp",0x28,
                     "Condition \"!surface_active\" is true.",
                     "Not creating any surface. Use surface_begin() to do it.",0);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uStack_20;
    return auVar3 << 0x40;
  }
  if (param_1[0x3c8] != (Color)0x0) goto LAB_00101474;
  uVar1 = *(uint *)(param_1 + 0x460);
  uVar5 = *(uint *)(param_1 + 0x410);
  in_RAX = *(undefined8 **)(param_1 + 0x418);
  if (uVar1 < uVar5) {
LAB_001014ec:
    *(uint *)(param_1 + 0x410) = uVar1;
    uVar5 = uVar1;
  }
  else if (uVar5 < uVar1) {
    if (*(uint *)(param_1 + 0x414) < uVar1) {
      uVar5 = uVar1 - 1 | uVar1 - 1 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = (uVar5 | uVar5 >> 0x10) + 1;
      *(uint *)(param_1 + 0x414) = uVar5;
      puVar7 = in_RAX;
      in_RAX = (undefined8 *)Memory::realloc_static(in_RAX,(ulong)uVar5 << 4,false);
      *(undefined8 **)(param_1 + 0x418) = in_RAX;
      if (in_RAX == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        LocalVector<Plane,unsigned_int,false,false>::resize((uint)puVar7);
      }
      uVar5 = *(uint *)(param_1 + 0x410);
      if (uVar1 <= uVar5) goto LAB_001014ec;
    }
    uVar4 = _UNK_0010b5b8;
    uVar2 = __LC34;
    puVar6 = in_RAX + (ulong)uVar5 * 2;
    puVar7 = puVar6 + (ulong)(uVar1 - uVar5) * 2;
    do {
      *puVar6 = uVar2;
      puVar6[1] = uVar4;
      puVar6 = puVar6 + 2;
    } while (puVar7 != puVar6);
    goto LAB_001014ec;
  }
  in_RDX = in_RAX + (ulong)uVar5 * 2;
  for (; in_RDX != in_RAX; in_RAX = in_RAX + 2) {
    uVar2 = in_RSI[1];
    *in_RAX = *in_RSI;
    in_RAX[1] = uVar2;
  }
  param_1[0x3c8] = (Color)0x1;
LAB_00101474:
  uVar2 = in_RSI[1];
  *(undefined8 *)(param_1 + 0x3d0) = *in_RSI;
  *(undefined8 *)(param_1 + 0x3d8) = uVar2;
  auVar8._8_8_ = in_RDX;
  auVar8._0_8_ = in_RAX;
  return auVar8;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ImmediateMesh::ImmediateMesh() */

void __thiscall ImmediateMesh::ImmediateMesh(ImmediateMesh *this)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  Mesh::Mesh((Mesh *)this);
  uVar1 = _UNK_0010b5b8;
  uVar3 = __LC34;
  *(undefined8 *)(this + 0x3c0) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0010b0a0;
  *(undefined8 *)(this + 0x3d0) = uVar3;
  *(undefined8 *)(this + 0x3d8) = uVar1;
  *(undefined4 *)(this + 0x3c8) = 0;
  this[0x3cc] = (ImmediateMesh)0x0;
  *(undefined8 *)(this + 0x3e0) = 0;
  *(undefined4 *)(this + 1000) = 0;
  *(undefined8 *)(this + 0x3ec) = 0;
  *(undefined4 *)(this + 0x3f4) = 0;
  *(undefined4 *)(this + 0x3f8) = 0;
  *(undefined8 *)(this + 0x3fc) = 0;
  *(undefined8 *)(this + 0x404) = 0;
  *(undefined8 *)(this + 0x410) = 0;
  *(undefined8 *)(this + 0x418) = 0;
  *(undefined8 *)(this + 0x420) = 0;
  *(undefined8 *)(this + 0x428) = 0;
  *(undefined8 *)(this + 0x430) = 0;
  *(undefined8 *)(this + 0x438) = 0;
  *(undefined8 *)(this + 0x440) = 0;
  *(undefined8 *)(this + 0x448) = 0;
  *(undefined8 *)(this + 0x450) = 0;
  *(undefined8 *)(this + 0x458) = 0;
  *(undefined8 *)(this + 0x460) = 0;
  *(undefined8 *)(this + 0x468) = 0;
  *(undefined8 *)(this + 0x470) = 0;
  *(undefined8 *)(this + 0x478) = 0;
  this[0x480] = (ImmediateMesh)0x0;
  *(undefined8 *)(this + 0x490) = 0;
  this[0x498] = (ImmediateMesh)0x0;
  *(undefined4 *)(this + 0x49c) = 0;
  *(undefined8 *)(this + 0x4a0) = 0;
  *(undefined8 *)(this + 0x4a8) = 0;
  uVar3 = _LC35;
  *(undefined4 *)(this + 0x4b0) = 0;
  *(undefined8 *)(this + 0x4b4) = 0;
  *(undefined4 *)(this + 0x4bc) = 0;
  *(undefined8 *)(this + 0x4c8) = 0;
  *(undefined8 *)(this + 0x4d8) = 0;
  *(undefined8 *)(this + 0x4e0) = uVar3;
  *(undefined4 *)(this + 0x4e8) = 0x3727c5ac;
  plVar2 = (long *)RenderingServer::get_singleton();
  uVar3 = (**(code **)(*plVar2 + 0x2d0))(plVar2);
  *(undefined8 *)(this + 0x3c0) = uVar3;
  return;
}



/* ImmediateMesh::surface_set_normal(Vector3 const&) */

undefined1  [16] ImmediateMesh::surface_set_normal(Vector3 *param_1)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  ulong in_RDX;
  undefined8 *in_RSI;
  undefined1 auVar4 [16];
  ulong uStack_20;
  
  if (param_1[0x480] == (Vector3)0x0) {
    _err_print_error("surface_set_normal","scene/resources/immediate_mesh.cpp",0x35,
                     "Condition \"!surface_active\" is true.",
                     "Not creating any surface. Use surface_begin() to do it.",0);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uStack_20;
    return auVar2 << 0x40;
  }
  if (param_1[0x3c9] == (Vector3)0x0) {
    LocalVector<Vector3,unsigned_int,false,false>::resize
              ((LocalVector<Vector3,unsigned_int,false,false> *)(param_1 + 0x420),
               *(uint *)(param_1 + 0x460));
    puVar3 = *(undefined8 **)(param_1 + 0x428);
    in_RDX = (ulong)*(uint *)(param_1 + 0x420) * 3;
    puVar1 = (undefined8 *)((long)puVar3 + (ulong)*(uint *)(param_1 + 0x420) * 0xc);
    for (; puVar1 != puVar3; puVar3 = (undefined8 *)((long)puVar3 + 0xc)) {
      *puVar3 = *in_RSI;
      in_RDX = (ulong)*(uint *)(in_RSI + 1);
      *(uint *)(puVar3 + 1) = *(uint *)(in_RSI + 1);
    }
    param_1[0x3c9] = (Vector3)0x1;
  }
  *(undefined8 *)(param_1 + 0x3e0) = *in_RSI;
  auVar4._4_4_ = 0;
  auVar4._0_4_ = *(uint *)(in_RSI + 1);
  *(uint *)(param_1 + 1000) = *(uint *)(in_RSI + 1);
  auVar4._8_8_ = in_RDX;
  return auVar4;
}



/* ImmediateMesh::clear_surfaces() */

void __thiscall ImmediateMesh::clear_surfaces(ImmediateMesh *this)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar4 + 0x3a8))(plVar4);
  if (*(int *)(this + 0x470) != 0) {
    lVar5 = 0;
LAB_00101a44:
    do {
      lVar1 = *(long *)(this + 0x478) + lVar5 * 0x38;
      if (*(long *)(lVar1 + 8) != 0) {
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          pOVar2 = *(Object **)(lVar1 + 8);
          cVar3 = predelete_handler(pOVar2);
          if (cVar3 != '\0') {
            lVar5 = lVar5 + 1;
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
            if (*(uint *)(this + 0x470) <= (uint)lVar5) break;
            goto LAB_00101a44;
          }
        }
      }
      lVar5 = lVar5 + 1;
    } while ((uint)lVar5 < *(uint *)(this + 0x470));
    *(undefined4 *)(this + 0x470) = 0;
  }
  this[0x480] = (ImmediateMesh)0x0;
  if (*(int *)(this + 0x410) != 0) {
    *(undefined4 *)(this + 0x410) = 0;
  }
  LocalVector<Vector3,unsigned_int,false,false>::resize
            ((LocalVector<Vector3,unsigned_int,false,false> *)(this + 0x420),0);
  if (*(int *)(this + 0x430) != 0) {
    *(undefined4 *)(this + 0x430) = 0;
  }
  LocalVector<Vector2,unsigned_int,false,false>::resize
            ((LocalVector<Vector2,unsigned_int,false,false> *)(this + 0x440),0);
  LocalVector<Vector2,unsigned_int,false,false>::resize
            ((LocalVector<Vector2,unsigned_int,false,false> *)(this + 0x450),0);
  LocalVector<Vector3,unsigned_int,false,false>::resize
            ((LocalVector<Vector3,unsigned_int,false,false> *)(this + 0x460),0);
  this[0x3cc] = (ImmediateMesh)0x0;
  *(undefined4 *)(this + 0x3c8) = 0;
  return;
}



/* ImmediateMesh::surface_set_uv(Vector2 const&) */

undefined1  [16] ImmediateMesh::surface_set_uv(Vector2 *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  ulong *puVar4;
  ulong in_RDX;
  ulong *in_RSI;
  undefined1 auVar5 [16];
  ulong uStack_20;
  
  if (param_1[0x480] == (Vector2)0x0) {
    _err_print_error("surface_set_uv","scene/resources/immediate_mesh.cpp",0x4e,
                     "Condition \"!surface_active\" is true.",
                     "Not creating any surface. Use surface_begin() to do it.",0);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uStack_20;
    return auVar3 << 0x40;
  }
  if (param_1[0x3cb] == (Vector2)0x0) {
    LocalVector<Vector2,unsigned_int,false,false>::resize
              ((LocalVector<Vector2,unsigned_int,false,false> *)(param_1 + 0x440),
               *(uint *)(param_1 + 0x460));
    puVar4 = *(ulong **)(param_1 + 0x448);
    in_RDX = (ulong)*(uint *)(param_1 + 0x440);
    puVar1 = puVar4 + in_RDX;
    for (; puVar1 != puVar4; puVar4 = puVar4 + 1) {
      in_RDX = *in_RSI;
      *puVar4 = in_RDX;
    }
    param_1[0x3cb] = (Vector2)0x1;
  }
  uVar2 = *in_RSI;
  *(ulong *)(param_1 + 0x3fc) = uVar2;
  auVar5._8_8_ = in_RDX;
  auVar5._0_8_ = uVar2;
  return auVar5;
}



/* ImmediateMesh::surface_set_uv2(Vector2 const&) */

undefined1  [16] ImmediateMesh::surface_set_uv2(Vector2 *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  ulong *puVar4;
  ulong in_RDX;
  ulong *in_RSI;
  undefined1 auVar5 [16];
  ulong uStack_20;
  
  if (param_1[0x480] == (Vector2)0x0) {
    _err_print_error("surface_set_uv2","scene/resources/immediate_mesh.cpp",0x5a,
                     "Condition \"!surface_active\" is true.",
                     "Not creating any surface. Use surface_begin() to do it.",0);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uStack_20;
    return auVar3 << 0x40;
  }
  if (param_1[0x3cc] == (Vector2)0x0) {
    LocalVector<Vector2,unsigned_int,false,false>::resize
              ((LocalVector<Vector2,unsigned_int,false,false> *)(param_1 + 0x450),
               *(uint *)(param_1 + 0x460));
    puVar4 = *(ulong **)(param_1 + 0x458);
    in_RDX = (ulong)*(uint *)(param_1 + 0x450);
    puVar1 = puVar4 + in_RDX;
    for (; puVar1 != puVar4; puVar4 = puVar4 + 1) {
      in_RDX = *in_RSI;
      *puVar4 = in_RDX;
    }
    param_1[0x3cc] = (Vector2)0x1;
  }
  uVar2 = *in_RSI;
  *(ulong *)(param_1 + 0x404) = uVar2;
  auVar5._8_8_ = in_RDX;
  auVar5._0_8_ = uVar2;
  return auVar5;
}



/* ImmediateMesh::_bind_methods() */

void ImmediateMesh::_bind_methods(void)

{
  char cVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  MethodBind *pMVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long in_FS_OFFSET;
  long local_b8 [2];
  long *local_a8;
  Variant *local_98;
  char *pcStack_90;
  undefined8 local_88;
  Variant **local_78;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_98 = (Variant *)0x1044c8;
  pcStack_90 = "material";
  auStack_70._8_8_ = auStack_70._0_8_;
  auStack_70._0_8_ = &pcStack_90;
  uVar6 = (uint)(Variant *)&local_78;
  local_78 = &local_98;
  D_METHODP((char *)local_b8,(char ***)"surface_begin",uVar6);
  Variant::Variant((Variant *)&local_78,(Object *)0x0);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_98 = (Variant *)&local_78;
  pMVar5 = create_method_bind<ImmediateMesh,Mesh::PrimitiveType,Ref<Material>const&>(surface_begin);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_b8,&local_98,1);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar7 = local_a8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_a8[-1];
      local_a8 = (long *)0x0;
      if (lVar2 != 0) {
        lVar8 = 0;
        plVar7 = plVar4;
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8[0] != 0)) {
    StringName::unref();
  }
  pcStack_90 = (char *)0x0;
  local_98 = (Variant *)0x1044db;
  local_78 = &local_98;
  D_METHODP((char *)local_b8,(char ***)"surface_set_color",uVar6);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar5 = create_method_bind<ImmediateMesh,Color_const&>(surface_set_color);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar7 = local_a8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_a8[-1];
      local_a8 = (long *)0x0;
      if (lVar2 != 0) {
        lVar8 = 0;
        plVar7 = plVar4;
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8[0] != 0)) {
    StringName::unref();
  }
  pcStack_90 = (char *)0x0;
  local_98 = (Variant *)0x1044e1;
  local_78 = &local_98;
  D_METHODP((char *)local_b8,(char ***)"surface_set_normal",uVar6);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar5 = create_method_bind<ImmediateMesh,Vector3_const&>(surface_set_normal);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar7 = local_a8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_a8[-1];
      local_a8 = (long *)0x0;
      if (lVar2 != 0) {
        lVar8 = 0;
        plVar7 = plVar4;
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8[0] != 0)) {
    StringName::unref();
  }
  pcStack_90 = (char *)0x0;
  local_98 = (Variant *)0x1044e8;
  local_78 = &local_98;
  D_METHODP((char *)local_b8,(char ***)"surface_set_tangent",uVar6);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar5 = create_method_bind<ImmediateMesh,Plane_const&>(surface_set_tangent);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar7 = local_a8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_a8[-1];
      local_a8 = (long *)0x0;
      if (lVar2 != 0) {
        lVar8 = 0;
        plVar7 = plVar4;
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8[0] != 0)) {
    StringName::unref();
  }
  pcStack_90 = (char *)0x0;
  local_98 = (Variant *)&_LC56;
  local_78 = &local_98;
  D_METHODP((char *)local_b8,(char ***)"surface_set_uv",uVar6);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar5 = create_method_bind<ImmediateMesh,Vector2_const&>(surface_set_uv);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar7 = local_a8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_a8[-1];
      local_a8 = (long *)0x0;
      if (lVar2 != 0) {
        lVar8 = 0;
        plVar7 = plVar4;
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8[0] != 0)) {
    StringName::unref();
  }
  pcStack_90 = (char *)0x0;
  local_98 = (Variant *)&_LC57;
  local_78 = &local_98;
  D_METHODP((char *)local_b8,(char ***)"surface_set_uv2",uVar6);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar5 = create_method_bind<ImmediateMesh,Vector2_const&>(surface_set_uv2);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar7 = local_a8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_a8[-1];
      local_a8 = (long *)0x0;
      if (lVar2 != 0) {
        lVar8 = 0;
        plVar7 = plVar4;
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8[0] != 0)) {
    StringName::unref();
  }
  pcStack_90 = (char *)0x0;
  local_98 = (Variant *)0x1044f7;
  local_78 = &local_98;
  D_METHODP((char *)local_b8,(char ***)"surface_add_vertex",uVar6);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar5 = create_method_bind<ImmediateMesh,Vector3_const&>(surface_add_vertex);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar7 = local_a8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_a8[-1];
      local_a8 = (long *)0x0;
      if (lVar2 != 0) {
        lVar8 = 0;
        plVar7 = plVar4;
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8[0] != 0)) {
    StringName::unref();
  }
  pcStack_90 = (char *)0x0;
  local_98 = (Variant *)0x1044f7;
  local_78 = &local_98;
  D_METHODP((char *)local_b8,(char ***)"surface_add_vertex_2d",uVar6);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar5 = create_method_bind<ImmediateMesh,Vector2_const&>(surface_add_vertex_2d);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar7 = local_a8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_a8[-1];
      local_a8 = (long *)0x0;
      if (lVar2 != 0) {
        lVar8 = 0;
        plVar7 = plVar4;
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_b8,(char ***)"surface_end",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar5 = create_method_bind<ImmediateMesh>(surface_end);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar7 = local_a8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_a8[-1];
      local_a8 = (long *)0x0;
      if (lVar2 != 0) {
        lVar8 = 0;
        plVar7 = plVar4;
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_b8,(char ***)"clear_surfaces",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar5 = create_method_bind<ImmediateMesh>(clear_surfaces);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar7 = local_a8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_a8[-1];
      local_a8 = (long *)0x0;
      if (lVar2 != 0) {
        lVar8 = 0;
        plVar7 = plVar4;
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
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



/* ImmediateMesh::~ImmediateMesh() */

void __thiscall ImmediateMesh::~ImmediateMesh(ImmediateMesh *this)

{
  Object *pOVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  void *pvVar6;
  
  *(undefined ***)this = &PTR__initialize_classv_0010b0a0;
  lVar3 = RenderingServer::get_singleton();
  if (lVar3 == 0) {
    _err_print_error("~ImmediateMesh","scene/resources/immediate_mesh.cpp",0x1a6,
                     "Parameter \"RenderingServer::get_singleton()\" is null.",0,0);
    CowData<unsigned_char>::_unref((CowData<unsigned_char> *)(this + 0x4d8));
    CowData<unsigned_char>::_unref((CowData<unsigned_char> *)(this + 0x4c8));
    Ref<Material>::unref((Ref<Material> *)(this + 0x490));
    if (*(long *)(this + 0x478) != 0) {
      LocalVector<ImmediateMesh::Surface,unsigned_int,false,false>::resize
                ((LocalVector<ImmediateMesh::Surface,unsigned_int,false,false> *)(this + 0x470),0);
      if (*(void **)(this + 0x478) != (void *)0x0) {
        Memory::free_static(*(void **)(this + 0x478),false);
      }
    }
    if (*(long *)(this + 0x468) != 0) {
      LocalVector<Vector3,unsigned_int,false,false>::resize
                ((LocalVector<Vector3,unsigned_int,false,false> *)(this + 0x460),0);
      if (*(void **)(this + 0x468) != (void *)0x0) {
        Memory::free_static(*(void **)(this + 0x468),false);
      }
    }
    if (*(long *)(this + 0x458) != 0) {
      LocalVector<Vector2,unsigned_int,false,false>::resize
                ((LocalVector<Vector2,unsigned_int,false,false> *)(this + 0x450),0);
      if (*(void **)(this + 0x458) != (void *)0x0) {
        Memory::free_static(*(void **)(this + 0x458),false);
      }
    }
    if (*(long *)(this + 0x448) != 0) {
      LocalVector<Vector2,unsigned_int,false,false>::resize
                ((LocalVector<Vector2,unsigned_int,false,false> *)(this + 0x440),0);
      if (*(void **)(this + 0x448) != (void *)0x0) {
        Memory::free_static(*(void **)(this + 0x448),false);
      }
    }
    if (*(long *)(this + 0x438) == 0) goto LAB_00102a1f;
    LocalVector<Plane,unsigned_int,false,false>::resize
              ((LocalVector<Plane,unsigned_int,false,false> *)(this + 0x430),0);
    pvVar6 = *(void **)(this + 0x438);
    if (pvVar6 == (void *)0x0) goto LAB_00102a1f;
  }
  else {
    plVar4 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar4 + 0x11b0))(plVar4);
    CowData<unsigned_char>::_unref((CowData<unsigned_char> *)(this + 0x4d8));
    CowData<unsigned_char>::_unref((CowData<unsigned_char> *)(this + 0x4c8));
    if ((*(long *)(this + 0x490) == 0) || (cVar2 = RefCounted::unreference(), cVar2 == '\0')) {
LAB_001028e2:
      pvVar6 = *(void **)(this + 0x478);
    }
    else {
      pOVar1 = *(Object **)(this + 0x490);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 == '\0') goto LAB_001028e2;
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
      pvVar6 = *(void **)(this + 0x478);
    }
    if (pvVar6 != (void *)0x0) {
      if (*(int *)(this + 0x470) != 0) {
        lVar3 = 0;
        uVar5 = 0;
        do {
          if (*(long *)((long)pvVar6 + lVar3 + 8) != 0) {
            cVar2 = RefCounted::unreference();
            if (cVar2 != '\0') {
              pOVar1 = *(Object **)((long)pvVar6 + lVar3 + 8);
              cVar2 = predelete_handler(pOVar1);
              if (cVar2 != '\0') {
                (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
                Memory::free_static(pOVar1,false);
              }
            }
            pvVar6 = *(void **)(this + 0x478);
          }
          uVar5 = uVar5 + 1;
          lVar3 = lVar3 + 0x38;
        } while (uVar5 < *(uint *)(this + 0x470));
        *(undefined4 *)(this + 0x470) = 0;
        if (pvVar6 == (void *)0x0) goto LAB_00102977;
      }
      Memory::free_static(pvVar6,false);
    }
LAB_00102977:
    if (*(long *)(this + 0x468) != 0) {
      LocalVector<Vector3,unsigned_int,false,false>::resize
                ((LocalVector<Vector3,unsigned_int,false,false> *)(this + 0x460),0);
      if (*(void **)(this + 0x468) != (void *)0x0) {
        Memory::free_static(*(void **)(this + 0x468),false);
      }
    }
    if (*(long *)(this + 0x458) != 0) {
      LocalVector<Vector2,unsigned_int,false,false>::resize
                ((LocalVector<Vector2,unsigned_int,false,false> *)(this + 0x450),0);
      if (*(void **)(this + 0x458) != (void *)0x0) {
        Memory::free_static(*(void **)(this + 0x458),false);
      }
    }
    if (*(long *)(this + 0x448) != 0) {
      LocalVector<Vector2,unsigned_int,false,false>::resize
                ((LocalVector<Vector2,unsigned_int,false,false> *)(this + 0x440),0);
      if (*(void **)(this + 0x448) != (void *)0x0) {
        Memory::free_static(*(void **)(this + 0x448),false);
      }
    }
    pvVar6 = *(void **)(this + 0x438);
    if (pvVar6 == (void *)0x0) goto LAB_00102a1f;
    if (*(int *)(this + 0x430) != 0) {
      *(undefined4 *)(this + 0x430) = 0;
    }
  }
  Memory::free_static(pvVar6,false);
LAB_00102a1f:
  if (*(long *)(this + 0x428) != 0) {
    LocalVector<Vector3,unsigned_int,false,false>::resize
              ((LocalVector<Vector3,unsigned_int,false,false> *)(this + 0x420),0);
    if (*(void **)(this + 0x428) != (void *)0x0) {
      Memory::free_static(*(void **)(this + 0x428),false);
    }
  }
  if (*(long *)(this + 0x418) != 0) {
    LocalVector<Color,unsigned_int,false,false>::resize
              ((LocalVector<Color,unsigned_int,false,false> *)(this + 0x410),0);
    if (*(void **)(this + 0x418) != (void *)0x0) {
      Memory::free_static(*(void **)(this + 0x418),false);
    }
  }
  Mesh::~Mesh((Mesh *)this);
  return;
}



/* ImmediateMesh::~ImmediateMesh() */

void __thiscall ImmediateMesh::~ImmediateMesh(ImmediateMesh *this)

{
  ~ImmediateMesh(this);
  operator_delete(this,0x4f0);
  return;
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<unsigned_char>::_copy_on_write(CowData<unsigned_char> *this)

{
  size_t __n;
  code *pcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  __n = *(size_t *)(*(long *)this + -8);
  uVar3 = 0x10;
  if (__n != 0) {
    uVar3 = __n - 1 | __n - 1 >> 1;
    uVar3 = uVar3 | uVar3 >> 2;
    uVar3 = uVar3 | uVar3 >> 4;
    uVar3 = uVar3 | uVar3 >> 8;
    uVar3 = uVar3 | uVar3 >> 0x10;
    uVar3 = (uVar3 | uVar3 >> 0x20) + 0x11;
  }
  puVar2 = (undefined8 *)Memory::alloc_static(uVar3,false);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 1;
    puVar2[1] = __n;
    memcpy(puVar2 + 2,*(void **)this,__n);
    _unref(this);
    *(undefined8 **)this = puVar2 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this,long param_1)

{
  CowData<unsigned_char> *pCVar1;
  int iVar2;
  ulong uVar3;
  CowData<unsigned_char> *pCVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  CowData<unsigned_char> *pCVar7;
  long lVar8;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
LAB_00102eb6:
    lVar8 = 0;
    pCVar4 = (CowData<unsigned_char> *)0x0;
  }
  else {
    lVar8 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar8) {
      return;
    }
    if (param_1 == 0) {
      _unref(this);
      return;
    }
    _copy_on_write(this);
    if (lVar8 == 0) goto LAB_00102eb6;
    uVar3 = lVar8 - 1U | lVar8 - 1U >> 1;
    uVar3 = uVar3 | uVar3 >> 2;
    uVar3 = uVar3 | uVar3 >> 4;
    uVar3 = uVar3 | uVar3 >> 8;
    uVar3 = uVar3 | uVar3 >> 0x10;
    pCVar4 = (CowData<unsigned_char> *)((uVar3 | uVar3 >> 0x20) + 1);
  }
  uVar3 = param_1 - 1U | param_1 - 1U >> 1;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 | uVar3 >> 0x10;
  pCVar7 = (CowData<unsigned_char> *)(uVar3 | uVar3 >> 0x20);
  pCVar1 = pCVar7 + 1;
  if (param_1 <= lVar8) {
    if ((pCVar1 != pCVar4) && (iVar2 = _realloc(this,(long)pCVar1), iVar2 != 0)) {
      return;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return;
    }
    FUN_0010796a();
    return;
  }
  if (pCVar1 != pCVar4) {
    if (lVar8 == 0) {
      puVar5 = (undefined8 *)Memory::alloc_static((ulong)(pCVar7 + 0x11),false);
      if (puVar5 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
        return;
      }
      puVar6 = puVar5 + 2;
      *puVar5 = 1;
      puVar5[1] = 0;
      *(undefined8 **)this = puVar6;
      goto LAB_00102e0c;
    }
    pCVar7 = this;
    iVar2 = _realloc(this,(long)pCVar1);
    if (iVar2 != 0) {
      return;
    }
  }
  puVar6 = *(undefined8 **)this;
  if (puVar6 == (undefined8 *)0x0) {
    resize<false>((long)pCVar7);
    return;
  }
LAB_00102e0c:
  puVar6[-1] = param_1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ImmediateMesh::surface_end() */

void __thiscall ImmediateMesh::surface_end(ImmediateMesh *this)

{
  float fVar1;
  ImmediateMesh IVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  double dVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  float *pfVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  ulong uVar20;
  CowData<unsigned_char> *pCVar21;
  undefined1 *puVar22;
  undefined4 *puVar23;
  undefined1 uVar24;
  ulong uVar25;
  ulong uVar26;
  float *pfVar27;
  uint uVar28;
  long in_FS_OFFSET;
  float extraout_XMM0_Da;
  float fVar29;
  float extraout_XMM0_Da_00;
  undefined8 uVar30;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float fVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  undefined1 local_1c8 [16];
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  int local_19c;
  uint local_190;
  Ref *local_170;
  ImmediateMesh local_168;
  undefined4 local_164;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_138;
  ulong local_130;
  undefined8 local_120 [2];
  long local_110 [2];
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  float fStack_cc;
  float local_c8;
  long local_b8;
  long local_a8;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x480] == (ImmediateMesh)0x0) {
    _err_print_error("surface_end","scene/resources/immediate_mesh.cpp",0x95,
                     "Condition \"!surface_active\" is true.",
                     "Not creating any surface. Use surface_begin() to do it.",0,0);
    goto LAB_00103c62;
  }
  iVar19 = *(int *)(this + 0x460);
  if (iVar19 == 0) {
    _err_print_error("surface_end","scene/resources/immediate_mesh.cpp",0x96,
                     "Condition \"vertices.is_empty()\" is true.",
                     "No vertices were added, surface can\'t be created.",0,0);
    goto LAB_00103c62;
  }
  uVar8 = 0x802000001;
  iVar14 = (-(uint)(this[0x498] == (ImmediateMesh)0x0) & 4) + 8;
  if (this[0x498] == (ImmediateMesh)0x0) {
    uVar8 = 0x800000001;
  }
  uVar11 = iVar14 * iVar19;
  if (this[0x3c9] == (ImmediateMesh)0x0) {
    if (this[0x3ca] != (ImmediateMesh)0x0) {
      local_19c = 4;
      local_190 = 0;
      uVar12 = uVar11;
      goto LAB_001033a3;
    }
    local_190 = 0;
    uVar12 = 0;
    local_19c = 0;
    iVar7 = iVar14;
  }
  else {
    local_19c = 8;
    uVar8 = uVar8 | 2;
    uVar12 = uVar11 + 4;
    local_190 = uVar11;
LAB_001033a3:
    uVar8 = uVar8 | 4;
    iVar7 = local_19c + iVar14;
  }
  pCVar21 = (CowData<unsigned_char> *)(this + 0x4c8);
  CowData<unsigned_char>::resize<false>(pCVar21,(ulong)(uint)(iVar19 * iVar7));
  CowData<unsigned_char>::_copy_on_write(pCVar21);
  lVar10 = *(long *)(this + 0x4c8);
  if (*(int *)(this + 0x460) == 0) {
    local_1ac = 0.0;
    local_1b0 = 0.0;
    local_1c8 = (undefined1  [16])0x0;
    uVar11 = 0;
  }
  else {
    uVar26 = 0;
    uVar20 = 0;
    local_1ac = 0.0;
    local_1b0 = 0.0;
    local_1a8 = 0.0;
    local_1a4 = 0.0;
    local_1c8._0_4_ = 0.0;
    local_1a0 = 0.0;
    uVar28 = uVar12;
    do {
      uVar11 = (uint)uVar20;
      pfVar16 = (float *)(uVar26 + lVar10);
      pfVar27 = (float *)(*(long *)(this + 0x468) + uVar20 * 0xc);
      IVar2 = this[0x498];
      *pfVar16 = *pfVar27;
      pfVar16[1] = pfVar27[1];
      if (IVar2 == (ImmediateMesh)0x0) {
        pfVar16[2] = pfVar27[2];
      }
      if (uVar11 == 0) {
        local_1b0 = *(float *)(this + 0x4e4);
        local_1c8._0_4_ = *(undefined4 *)(this + 0x4e0);
        local_1ac = *(float *)(this + 0x4e8);
        local_1a8 = *pfVar27;
        local_1a4 = pfVar27[2];
        local_1a0 = pfVar27[1];
      }
      else {
        if ((((float)local_1c8._0_4_ < 0.0) || (local_1b0 < 0.0)) || (local_1ac < 0.0)) {
          _err_print_error("expand_to","./core/math/aabb.h",0x158,
                           "AABB size is negative, this is not supported. Use AABB.abs() to get an AABB with a positive size."
                           ,0,0);
        }
        fVar1 = *pfVar27;
        fVar29 = pfVar27[1];
        fVar31 = pfVar27[2];
        fVar35 = fVar1;
        if (local_1a8 <= fVar1) {
          fVar35 = local_1a8;
        }
        fVar38 = fVar29;
        if (local_1a0 <= fVar29) {
          fVar38 = local_1a0;
        }
        if (fVar1 <= (float)local_1c8._0_4_ + local_1a8) {
          fVar1 = (float)local_1c8._0_4_ + local_1a8;
        }
        fVar39 = fVar31;
        if (local_1a4 <= fVar31) {
          fVar39 = local_1a4;
        }
        if (fVar29 <= local_1b0 + local_1a0) {
          fVar29 = local_1b0 + local_1a0;
        }
        if (fVar31 <= local_1ac + local_1a4) {
          fVar31 = local_1ac + local_1a4;
        }
        local_1c8._0_4_ = fVar1 - fVar35;
        local_1b0 = fVar29 - fVar38;
        local_1ac = fVar31 - fVar39;
        local_1a8 = fVar35;
        local_1a4 = fVar39;
        local_1a0 = fVar38;
      }
      if (this[0x3c9] == (ImmediateMesh)0x0) {
        if (this[0x3ca] != (ImmediateMesh)0x0) {
LAB_0010333f:
          uVar25 = (ulong)*(uint *)(this + 0x430);
          if (*(uint *)(this + 0x430) <= uVar11) goto LAB_001034b8;
          Vector3::octahedron_tangent_encode
                    (*(float *)(uVar20 * 0x10 + *(long *)(this + 0x438) + 0xc));
          fVar1 = _LC75;
          fVar29 = extraout_XMM0_Db_00;
          fVar31 = extraout_XMM0_Da_00;
          goto LAB_00103211;
        }
      }
      else {
        uVar25 = (ulong)*(uint *)(this + 0x420);
        if (*(uint *)(this + 0x420) <= uVar11) {
LAB_001034b8:
          uVar20 = uVar20 & 0xffffffff;
          goto LAB_001034ba;
        }
        uVar30 = Vector3::octahedron_encode();
        fVar1 = _LC75;
        uVar15 = 0;
        fVar29 = (float)uVar30 * _LC75;
        if ((0.0 <= fVar29) && (uVar15 = 0xffff, fVar29 <= _LC75)) {
          uVar15 = (int)fVar29 & 0xffff;
        }
        fVar29 = (float)((ulong)uVar30 >> 0x20) * _LC75;
        if (0.0 <= fVar29) {
          if (_LC75 < fVar29) {
            uVar15 = uVar15 | 0xffff0000;
          }
          else {
            uVar15 = uVar15 | (int)fVar29 << 0x10;
          }
        }
        IVar2 = this[0x3ca];
        *(uint *)((ulong)((local_190 - uVar12) + uVar28) + lVar10) = uVar15;
        if (IVar2 != (ImmediateMesh)0x0) goto LAB_0010333f;
        if (this[0x3c9] == (ImmediateMesh)0x0) goto LAB_00103269;
        uVar25 = (ulong)*(uint *)(this + 0x420);
        if (*(uint *)(this + 0x420) <= uVar11) goto LAB_001034b8;
        pfVar16 = (float *)(uVar20 * 0xc + *(long *)(this + 0x428));
        uVar25 = *(ulong *)(pfVar16 + 1);
        fVar29 = *pfVar16;
        fVar38 = (float)uVar25;
        fVar39 = (float)(uVar25 >> 0x20);
        fVar31 = fVar29 * fVar29 + fVar38 * fVar38 + fVar39 * fVar39;
        auVar34 = ZEXT816(0);
        fVar35 = 0.0;
        if (fVar31 != 0.0) {
          fVar31 = SQRT(fVar31);
          auVar37._8_8_ = 0;
          auVar37._0_8_ = uVar25;
          fVar35 = fVar29 / fVar31;
          auVar34._4_4_ = fVar31;
          auVar34._0_4_ = fVar31;
          auVar34._8_8_ = _LC77;
          auVar34 = divps(auVar37,auVar34);
        }
        fVar31 = auVar34._4_4_;
        auVar33._0_4_ = fVar31 * (float)((uint)fVar29 ^ __LC76) - auVar34._0_4_ * fVar38;
        auVar33._4_4_ = fVar35 * fVar38 - fVar31 * fVar39;
        auVar33._8_4_ = fVar31 - auVar34._8_4_ * 0.0;
        auVar33._12_4_ = 0.0 - auVar34._12_4_ * 0.0;
        fVar31 = auVar34._0_4_ * fVar39 - (float)((uint)fVar29 ^ __LC76) * fVar35;
        fVar29 = auVar33._0_4_ * auVar33._0_4_ + auVar33._4_4_ * auVar33._4_4_ + fVar31 * fVar31;
        fVar35 = 0.0;
        local_138 = 0;
        if (fVar29 != 0.0) {
          fVar29 = SQRT(fVar29);
          fVar35 = fVar31 / fVar29;
          auVar36._4_4_ = fVar29;
          auVar36._0_4_ = fVar29;
          auVar36._8_8_ = _LC77;
          auVar34 = divps(auVar33,auVar36);
          local_138 = auVar34._0_8_;
        }
        local_130 = CONCAT44(local_130._4_4_,fVar35);
        Vector3::octahedron_tangent_encode(_LC78);
        fVar29 = extraout_XMM0_Db;
        fVar31 = extraout_XMM0_Da;
LAB_00103211:
        fVar31 = fVar31 * fVar1;
        uVar11 = 0;
        if ((0.0 <= fVar31) && (uVar11 = 0xffff, fVar31 <= _LC75)) {
          uVar11 = (int)fVar31 & 0xffff;
        }
        fVar29 = fVar29 * fVar1;
        if (0.0 <= fVar29) {
          uVar15 = 0xffff0000;
          if (fVar29 <= _LC75) {
            uVar15 = (int)fVar29 << 0x10;
          }
          uVar11 = uVar11 | uVar15;
          if (uVar11 == 0xffff0000) {
            uVar11 = 0xffffffff;
          }
        }
        *(uint *)((ulong)uVar28 + lVar10) = uVar11;
      }
LAB_00103269:
      uVar11 = *(uint *)(this + 0x460);
      uVar20 = uVar20 + 1;
      uVar26 = (ulong)(uint)((int)uVar26 + iVar14);
      uVar28 = uVar28 + local_19c;
    } while ((uint)uVar20 < uVar11);
    local_1c8._12_4_ = local_1c8._0_4_;
    local_1c8._8_4_ = local_1a4;
    local_1c8._4_4_ = local_1a0;
    local_1c8._0_4_ = local_1a8;
  }
  if (this[0x3c8] == (ImmediateMesh)0x0) {
    if (this[0x3cb] != (ImmediateMesh)0x0) {
      iVar19 = 8;
      iVar14 = 0;
LAB_001035e4:
      uVar8 = uVar8 | 0x10;
      goto LAB_001035e8;
    }
    if (this[0x3cc] != (ImmediateMesh)0x0) {
      iVar14 = 0;
      iVar19 = 0;
      goto LAB_00103d04;
    }
  }
  else {
    uVar8 = uVar8 | 8;
    iVar14 = 0;
    iVar19 = 4;
    if (this[0x3cb] != (ImmediateMesh)0x0) {
      iVar19 = 0xc;
      iVar14 = 4;
      goto LAB_001035e4;
    }
LAB_001035e8:
    iVar7 = 0;
    if (this[0x3cc] != (ImmediateMesh)0x0) {
LAB_00103d04:
      iVar7 = iVar19;
      uVar8 = uVar8 | 0x20;
      iVar19 = iVar7 + 8;
    }
    CowData<unsigned_char>::resize<false>
              ((CowData<unsigned_char> *)(this + 0x4d8),(ulong)(uVar11 * iVar19));
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(this + 0x4d8));
    dVar6 = _LC79;
    lVar10 = *(long *)(this + 0x4d8);
    if (*(int *)(this + 0x460) != 0) {
      uVar20 = 0;
      lVar17 = 0;
      uVar11 = 0;
      do {
        iVar13 = (int)uVar20;
        if (this[0x3c8] != (ImmediateMesh)0x0) {
          uVar25 = (ulong)*(uint *)(this + 0x410);
          puVar22 = (undefined1 *)(uVar20 + lVar10);
          if (*(uint *)(this + 0x410) <= uVar11) goto LAB_00103cf0;
          lVar18 = lVar17 * 2;
          dVar32 = (double)*(float *)(*(long *)(this + 0x418) + lVar17 * 2) * dVar6;
          uVar24 = 0;
          if ((0.0 <= dVar32) && (uVar24 = 0xff, dVar32 <= dVar6)) {
            uVar24 = (undefined1)(int)dVar32;
          }
          *puVar22 = uVar24;
          uVar25 = (ulong)*(uint *)(this + 0x410);
          if (*(uint *)(this + 0x410) <= uVar11) goto LAB_00103cf0;
          dVar32 = (double)*(float *)(*(long *)(this + 0x418) + 4 + lVar18) * dVar6;
          uVar24 = 0;
          if ((0.0 <= dVar32) && (uVar24 = 0xff, dVar32 <= dVar6)) {
            uVar24 = (undefined1)(int)dVar32;
          }
          puVar22[1] = uVar24;
          uVar25 = (ulong)*(uint *)(this + 0x410);
          if (*(uint *)(this + 0x410) <= uVar11) goto LAB_00103cf0;
          dVar32 = (double)*(float *)(*(long *)(this + 0x418) + 8 + lVar18) * dVar6;
          uVar24 = 0;
          if ((0.0 <= dVar32) && (uVar24 = 0xff, dVar32 <= dVar6)) {
            uVar24 = (undefined1)(int)dVar32;
          }
          puVar22[2] = uVar24;
          uVar25 = (ulong)*(uint *)(this + 0x410);
          if (*(uint *)(this + 0x410) <= uVar11) goto LAB_00103cf0;
          dVar32 = (double)*(float *)(*(long *)(this + 0x418) + 0xc + lVar18) * dVar6;
          uVar24 = 0;
          if ((0.0 <= dVar32) && (uVar24 = 0xff, dVar32 <= dVar6)) {
            uVar24 = (undefined1)(int)dVar32;
          }
          puVar22[3] = uVar24;
        }
        if (this[0x3cb] != (ImmediateMesh)0x0) {
          uVar25 = (ulong)*(uint *)(this + 0x440);
          puVar23 = (undefined4 *)((ulong)(uint)(iVar13 + iVar14) + lVar10);
          if (*(uint *)(this + 0x440) <= uVar11) goto LAB_00103cf0;
          lVar18 = *(long *)(this + 0x448);
          *puVar23 = *(undefined4 *)(lVar18 + lVar17);
          puVar23[1] = ((undefined4 *)(lVar18 + lVar17))[1];
        }
        if (this[0x3cc] != (ImmediateMesh)0x0) {
          uVar25 = (ulong)*(uint *)(this + 0x450);
          puVar23 = (undefined4 *)((ulong)(uint)(iVar7 + iVar13) + lVar10);
          if (*(uint *)(this + 0x450) <= uVar11) {
LAB_00103cf0:
            uVar20 = (ulong)uVar11;
LAB_001034ba:
            _err_print_index_error
                      ("operator[]","./core/templates/local_vector.h",0xb2,uVar20,uVar25,"p_index",
                       "count","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          lVar18 = *(long *)(this + 0x458);
          *puVar23 = *(undefined4 *)(lVar18 + lVar17);
          puVar23[1] = ((undefined4 *)(lVar18 + lVar17))[1];
        }
        uVar11 = uVar11 + 1;
        lVar17 = lVar17 + 8;
        uVar20 = (ulong)(uint)(iVar13 + iVar19);
      } while (uVar11 < *(uint *)(this + 0x460));
    }
  }
  local_a0 = ZEXT416(_LC81);
  local_120[0] = 0;
  local_110[0] = 0;
  local_100 = 0;
  local_f8 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  fStack_cc = 0.0;
  local_c8 = 0.0;
  local_b8 = 0;
  local_a8 = 0;
  local_80 = 0x3f800000;
  local_7c = 0;
  local_74 = 0;
  local_68 = 0;
  local_50 = 0;
  local_138 = CONCAT44(local_138._4_4_,*(undefined4 *)(this + 0x488));
  local_60 = (undefined1  [16])0x0;
  local_130 = uVar8;
  local_90 = local_a0;
  if (*(long *)(this + 0x4c8) != 0) {
    CowData<unsigned_char>::_ref((CowData<unsigned_char> *)local_120,(CowData *)pCVar21);
  }
  if ((((this[0x3c8] != (ImmediateMesh)0x0) || (this[0x3cb] != (ImmediateMesh)0x0)) ||
      (this[0x3cc] != (ImmediateMesh)0x0)) && (local_110[0] != *(long *)(this + 0x4d8))) {
    CowData<unsigned_char>::_ref((CowData<unsigned_char> *)local_110,(CowData *)(this + 0x4d8));
  }
  local_f8 = *(undefined4 *)(this + 0x460);
  local_dc = local_1c8._0_8_;
  uStack_d4 = local_1c8._8_4_;
  uStack_d0 = local_1c8._12_4_;
  fStack_cc = local_1b0;
  local_c8 = local_1ac;
  if (*(long **)(this + 0x490) != (long *)0x0) {
    local_50 = (**(code **)(**(long **)(this + 0x490) + 0x1c0))();
  }
  plVar9 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar9 + 800))(plVar9,*(undefined8 *)(this + 0x3c0),&local_138);
  *(ulong *)(this + 0x4a0) = uVar8;
  *(undefined8 *)(this + 0x4a8) = local_1c8._0_8_;
  *(undefined8 *)(this + 0x4b0) = local_1c8._8_8_;
  *(undefined4 *)(this + 0x49c) = *(undefined4 *)(this + 0x460);
  uVar3 = *(undefined4 *)(this + 0x488);
  *(float *)(this + 0x4b8) = local_1b0;
  *(float *)(this + 0x4bc) = local_1ac;
  local_170 = (Ref *)0x0;
  Ref<Material>::operator=((Ref<Material> *)&local_170,*(Ref **)(this + 0x490));
  local_148 = *(undefined8 *)(this + 0x4b8);
  IVar2 = this[0x498];
  uVar4 = *(undefined4 *)(this + 0x49c);
  uVar30 = *(undefined8 *)(this + 0x4a0);
  local_158 = *(undefined8 *)(this + 0x4a8);
  uStack_150 = *(undefined8 *)(this + 0x4b0);
  uVar11 = *(uint *)(this + 0x470);
  local_168 = IVar2;
  local_164 = uVar4;
  local_160 = uVar30;
  if (uVar11 == *(uint *)(this + 0x474)) {
    uVar8 = (ulong)(uVar11 * 2);
    if (uVar11 * 2 == 0) {
      uVar8 = 1;
    }
    *(int *)(this + 0x474) = (int)uVar8;
    lVar10 = Memory::realloc_static(*(void **)(this + 0x478),uVar8 * 0x38,false);
    *(long *)(this + 0x478) = lVar10;
    if (lVar10 == 0) {
      _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    uVar11 = *(uint *)(this + 0x470);
  }
  else {
    lVar10 = *(long *)(this + 0x478);
  }
  *(uint *)(this + 0x470) = uVar11 + 1;
  puVar23 = (undefined4 *)(lVar10 + (ulong)uVar11 * 0x38);
  *puVar23 = uVar3;
  *(undefined8 *)(puVar23 + 2) = 0;
  Ref<Material>::operator=((Ref<Material> *)(puVar23 + 2),local_170);
  *(ImmediateMesh *)(puVar23 + 4) = IVar2;
  puVar23[5] = uVar4;
  *(undefined8 *)(puVar23 + 0xc) = local_148;
  *(undefined8 *)(puVar23 + 6) = uVar30;
  *(undefined8 *)(puVar23 + 8) = local_158;
  *(undefined8 *)(puVar23 + 10) = uStack_150;
  Ref<Material>::unref((Ref<Material> *)&local_170);
  LocalVector<Color,unsigned_int,false,false>::resize
            ((LocalVector<Color,unsigned_int,false,false> *)(this + 0x410),0);
  LocalVector<Vector3,unsigned_int,false,false>::resize
            ((LocalVector<Vector3,unsigned_int,false,false> *)(this + 0x420),0);
  LocalVector<Plane,unsigned_int,false,false>::resize
            ((LocalVector<Plane,unsigned_int,false,false> *)(this + 0x430),0);
  LocalVector<Vector2,unsigned_int,false,false>::resize
            ((LocalVector<Vector2,unsigned_int,false,false> *)(this + 0x440),0);
  LocalVector<Vector2,unsigned_int,false,false>::resize
            ((LocalVector<Vector2,unsigned_int,false,false> *)(this + 0x450),0);
  LocalVector<Vector3,unsigned_int,false,false>::resize
            ((LocalVector<Vector3,unsigned_int,false,false> *)(this + 0x460),0);
  this[0x3cc] = (ImmediateMesh)0x0;
  *(undefined4 *)(this + 0x3c8) = 0;
  this[0x480] = (ImmediateMesh)0x0;
  Resource::emit_changed();
  CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_68);
  lVar10 = local_a8;
  if (local_a8 != 0) {
    LOCK();
    plVar9 = (long *)(local_a8 + -0x10);
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      local_a8 = 0;
      Memory::free_static((void *)(lVar10 + -0x10),false);
    }
  }
  lVar10 = local_b8;
  if (local_b8 != 0) {
    LOCK();
    plVar9 = (long *)(local_b8 + -0x10);
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_b8 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar17 = *(long *)(local_b8 + -8);
      pCVar21 = (CowData<unsigned_char> *)(local_b8 + 0x10);
      lVar18 = 0;
      local_b8 = 0;
      if (lVar17 != 0) {
        do {
          lVar18 = lVar18 + 1;
          CowData<unsigned_char>::_unref(pCVar21);
          pCVar21 = pCVar21 + 0x18;
        } while (lVar17 != lVar18);
      }
      Memory::free_static((void *)(lVar10 + -0x10),false);
    }
  }
  CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_e8);
  CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_100);
  CowData<unsigned_char>::_unref((CowData<unsigned_char> *)local_110);
  CowData<unsigned_char>::_unref((CowData<unsigned_char> *)local_120);
LAB_00103c62:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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



/* ImmediateMesh::is_class_ptr(void*) const */

uint __thiscall ImmediateMesh::is_class_ptr(ImmediateMesh *this,void *param_1)

{
  return (uint)CONCAT71(0x10b5,(undefined4 *)param_1 == &Mesh::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b5,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b5,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b5,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b5,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* ImmediateMesh::_getv(StringName const&, Variant&) const */

undefined8 ImmediateMesh::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ImmediateMesh::_setv(StringName const&, Variant const&) */

undefined8 ImmediateMesh::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ImmediateMesh::_validate_propertyv(PropertyInfo&) const */

void ImmediateMesh::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* ImmediateMesh::_property_can_revertv(StringName const&) const */

undefined8 ImmediateMesh::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ImmediateMesh::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ImmediateMesh::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ImmediateMesh::_notificationv(int, bool) */

void ImmediateMesh::_notificationv(int param_1,bool param_2)

{
  return;
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



/* MethodBindT<Plane const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Plane_const&>::_gen_argument_type(MethodBindT<Plane_const&> *this,int param_1)

{
  return -(param_1 == 0) & 0xe;
}



/* MethodBindT<Plane const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Plane_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Vector3 const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Vector3_const&>::_gen_argument_type(MethodBindT<Vector3_const&> *this,int param_1)

{
  return -(param_1 == 0) & 9;
}



/* MethodBindT<Vector3 const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Vector3_const&>::get_argument_meta(int param_1)

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



/* MethodBindT<Mesh::PrimitiveType, Ref<Material> const&>::_gen_argument_type(int) const */

int __thiscall
MethodBindT<Mesh::PrimitiveType,Ref<Material>const&>::_gen_argument_type
          (MethodBindT<Mesh::PrimitiveType,Ref<Material>const&> *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((uint)param_1 < 2) {
    iVar1 = (-(uint)(param_1 == 0) & 0xffffffea) + 0x18;
  }
  return iVar1;
}



/* MethodBindT<Mesh::PrimitiveType, Ref<Material> const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Mesh::PrimitiveType,Ref<Material>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Mesh::PrimitiveType, Ref<Material> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Mesh::PrimitiveType,Ref<Material>const&>::~MethodBindT
          (MethodBindT<Mesh::PrimitiveType,Ref<Material>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010b300;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Mesh::PrimitiveType, Ref<Material> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Mesh::PrimitiveType,Ref<Material>const&>::~MethodBindT
          (MethodBindT<Mesh::PrimitiveType,Ref<Material>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010b300;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Color const&>::~MethodBindT() */

void __thiscall MethodBindT<Color_const&>::~MethodBindT(MethodBindT<Color_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010b360;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Color const&>::~MethodBindT() */

void __thiscall MethodBindT<Color_const&>::~MethodBindT(MethodBindT<Color_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010b360;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Plane const&>::~MethodBindT() */

void __thiscall MethodBindT<Plane_const&>::~MethodBindT(MethodBindT<Plane_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010b420;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Plane const&>::~MethodBindT() */

void __thiscall MethodBindT<Plane_const&>::~MethodBindT(MethodBindT<Plane_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010b420;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Vector3 const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector3_const&>::~MethodBindT(MethodBindT<Vector3_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010b3c0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Vector3 const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector3_const&>::~MethodBindT(MethodBindT<Vector3_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010b3c0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Vector2 const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector2_const&>::~MethodBindT(MethodBindT<Vector2_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010b480;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Vector2 const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector2_const&>::~MethodBindT(MethodBindT<Vector2_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010b480;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010b4e0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010b4e0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
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



/* ImmediateMesh::_get_class_namev() const */

undefined8 * ImmediateMesh::_get_class_namev(void)

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
LAB_00104803:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104803;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ImmediateMesh");
      goto LAB_0010486e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ImmediateMesh");
LAB_0010486e:
  return &_get_class_namev()::_class_name_static;
}



/* ImmediateMesh::get_class() const */

void ImmediateMesh::get_class(void)

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



/* Mesh::~Mesh() */

void __thiscall Mesh::~Mesh(Mesh *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  code *pcVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  bool bVar8;
  
  bVar8 = StringName::configured != '\0';
  *(code **)this = Mesh::Mesh;
  if (((((((bVar8) &&
          ((*(long *)(this + 0x3a8) == 0 || (StringName::unref(), StringName::configured != '\0'))))
         && ((*(long *)(this + 0x390) == 0 || (StringName::unref(), StringName::configured != '\0'))
            )) && ((((*(long *)(this + 0x378) == 0 ||
                     (StringName::unref(), StringName::configured != '\0')) &&
                    ((*(long *)(this + 0x360) == 0 ||
                     (StringName::unref(), StringName::configured != '\0')))) &&
                   ((*(long *)(this + 0x348) == 0 ||
                    (StringName::unref(), StringName::configured != '\0')))))) &&
       ((*(long *)(this + 0x330) == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((((*(long *)(this + 0x318) == 0 || (StringName::unref(), StringName::configured != '\0')) &&
        ((*(long *)(this + 0x300) == 0 || (StringName::unref(), StringName::configured != '\0'))))
       && (((*(long *)(this + 0x2e8) == 0 || (StringName::unref(), StringName::configured != '\0'))
           && ((*(long *)(this + 0x2d0) == 0 ||
               (StringName::unref(), StringName::configured != '\0')))))))) &&
     ((((*(long *)(this + 0x2b8) == 0 || (StringName::unref(), StringName::configured != '\0')) &&
       ((*(long *)(this + 0x2a0) == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      (((*(long *)(this + 0x288) == 0 || (StringName::unref(), StringName::configured != '\0')) &&
       (*(long *)(this + 0x270) != 0)))))) {
    StringName::unref();
  }
  if (*(long *)(this + 0x260) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x260) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x260);
      *(undefined8 *)(this + 0x260) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x250) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x250) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(this + 0x250);
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar2 = plVar1[-1];
      lVar7 = 0;
      *(undefined8 *)(this + 0x250) = 0;
      plVar6 = plVar1;
      if (lVar2 != 0) {
        do {
          while ((*plVar6 == 0 || (cVar5 = RefCounted::unreference(), cVar5 == '\0'))) {
LAB_00104c40:
            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 1;
            if (lVar2 == lVar7) goto LAB_00104c98;
          }
          pOVar3 = (Object *)*plVar6;
          cVar5 = predelete_handler(pOVar3);
          if (cVar5 == '\0') goto LAB_00104c40;
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
        } while (lVar2 != lVar7);
      }
LAB_00104c98:
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((*(long *)(this + 0x240) != 0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) {
    pOVar3 = *(Object **)(this + 0x240);
    cVar5 = predelete_handler(pOVar3);
    if (cVar5 != '\0') {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
  }
  Resource::~Resource((Resource *)this);
  return;
}



/* Mesh::~Mesh() */

void __thiscall Mesh::~Mesh(Mesh *this)

{
  ~Mesh(this);
  operator_delete(this,0x3c0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LocalVector<Color, unsigned int, false, false>::resize(unsigned int) */

void __thiscall
LocalVector<Color,unsigned_int,false,false>::resize
          (LocalVector<Color,unsigned_int,false,false> *this,uint param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  void *pvVar7;
  
  uVar3 = *(uint *)this;
  if (uVar3 <= param_1) {
    if (param_1 <= uVar3) {
      return;
    }
    if (*(uint *)(this + 4) < param_1) {
      pvVar7 = *(void **)(this + 8);
      uVar3 = param_1 - 1 | param_1 - 1 >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = (uVar3 | uVar3 >> 0x10) + 1;
      *(uint *)(this + 4) = uVar3;
      lVar5 = Memory::realloc_static(pvVar7,(ulong)uVar3 << 4,false);
      *(long *)(this + 8) = lVar5;
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        LocalVector<Plane,unsigned_int,false,false>::resize((uint)pvVar7);
      }
      uVar3 = *(uint *)this;
      if (param_1 <= uVar3) goto LAB_00104d9c;
    }
    uVar2 = _UNK_0010b5b8;
    uVar1 = __LC34;
    puVar4 = (undefined8 *)((ulong)uVar3 * 0x10 + *(long *)(this + 8));
    puVar6 = puVar4 + (ulong)(param_1 - uVar3) * 2;
    do {
      *puVar4 = uVar1;
      puVar4[1] = uVar2;
      puVar4 = puVar4 + 2;
    } while (puVar4 != puVar6);
  }
LAB_00104d9c:
  *(uint *)this = param_1;
  return;
}



/* LocalVector<Vector3, unsigned int, false, false>::resize(unsigned int) */

void __thiscall
LocalVector<Vector3,unsigned_int,false,false>::resize
          (LocalVector<Vector3,unsigned_int,false,false> *this,uint param_1)

{
  code *pcVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  
  uVar2 = *(uint *)this;
  if (uVar2 <= param_1) {
    if (param_1 <= uVar2) {
      return;
    }
    uVar4 = param_1 - 1;
    if (*(uint *)(this + 4) < param_1) {
      uVar2 = uVar4 >> 1 | uVar4;
      uVar2 = uVar2 | uVar2 >> 2;
      uVar2 = uVar2 | uVar2 >> 4;
      uVar2 = uVar2 | uVar2 >> 8;
      uVar2 = (uVar2 | uVar2 >> 0x10) + 1;
      *(uint *)(this + 4) = uVar2;
      lVar3 = Memory::realloc_static(*(void **)(this + 8),(ulong)uVar2 * 0xc,false);
      *(long *)(this + 8) = lVar3;
      if (lVar3 == 0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar2 = *(uint *)this;
      if (param_1 <= uVar2) goto LAB_00104e51;
    }
    memset((void *)(*(long *)(this + 8) + (ulong)uVar2 * 0xc),0,((ulong)(uVar4 - uVar2) * 3 + 3) * 4
          );
  }
LAB_00104e51:
  *(uint *)this = param_1;
  return;
}



/* LocalVector<Plane, unsigned int, false, false>::resize(unsigned int) */

void __thiscall
LocalVector<Plane,unsigned_int,false,false>::resize
          (LocalVector<Plane,unsigned_int,false,false> *this,uint param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  uint uVar6;
  
  uVar2 = *(uint *)this;
  if (uVar2 <= param_1) {
    if (param_1 <= uVar2) {
      return;
    }
    uVar6 = param_1 - 1;
    if (*(uint *)(this + 4) < param_1) {
      uVar2 = uVar6 >> 1 | uVar6;
      uVar2 = uVar2 | uVar2 >> 2;
      uVar2 = uVar2 | uVar2 >> 4;
      uVar2 = uVar2 | uVar2 >> 8;
      uVar2 = (uVar2 | uVar2 >> 0x10) + 1;
      *(uint *)(this + 4) = uVar2;
      lVar5 = Memory::realloc_static(*(void **)(this + 8),(ulong)uVar2 << 4,false);
      *(long *)(this + 8) = lVar5;
      if (lVar5 == 0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar2 = *(uint *)this;
      if (param_1 <= uVar2) goto LAB_00104f4e;
    }
    lVar5 = *(long *)(this + 8);
    puVar3 = (undefined8 *)((ulong)uVar2 * 0x10 + lVar5);
    do {
      *puVar3 = 0;
      puVar4 = puVar3 + 2;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined4 *)((long)puVar3 + 0xc) = 0;
      puVar3 = puVar4;
    } while (puVar4 != (undefined8 *)(lVar5 + 0x10 + ((ulong)(uVar6 - uVar2) + (ulong)uVar2) * 0x10)
            );
  }
LAB_00104f4e:
  *(uint *)this = param_1;
  return;
}



/* LocalVector<Vector2, unsigned int, false, false>::resize(unsigned int) */

void __thiscall
LocalVector<Vector2,unsigned_int,false,false>::resize
          (LocalVector<Vector2,unsigned_int,false,false> *this,uint param_1)

{
  code *pcVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  
  uVar2 = *(uint *)this;
  if (uVar2 <= param_1) {
    if (param_1 <= uVar2) {
      return;
    }
    uVar4 = param_1 - 1;
    if (*(uint *)(this + 4) < param_1) {
      uVar2 = uVar4 >> 1 | uVar4;
      uVar2 = uVar2 | uVar2 >> 2;
      uVar2 = uVar2 | uVar2 >> 4;
      uVar2 = uVar2 | uVar2 >> 8;
      uVar2 = (uVar2 | uVar2 >> 0x10) + 1;
      *(uint *)(this + 4) = uVar2;
      lVar3 = Memory::realloc_static(*(void **)(this + 8),(ulong)uVar2 * 8,false);
      *(long *)(this + 8) = lVar3;
      if (lVar3 == 0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar2 = *(uint *)this;
      if (param_1 <= uVar2) goto LAB_0010502a;
    }
    memset((void *)(*(long *)(this + 8) + (ulong)uVar2 * 8),0,(ulong)(uVar4 - uVar2) * 8 + 8);
  }
LAB_0010502a:
  *(uint *)this = param_1;
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
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined8 local_60;
  char local_58 [8];
  long *local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::split(local_58,SUB81(param_1,0),0x10510d);
  if ((local_50 != (long *)0x0) && (2 < local_50[-1])) {
    local_60 = 0;
    local_48 = &_LC41;
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
        goto LAB_001051da;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar7,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  local_60 = 0;
  local_48 = &_LC41;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_001051da:
  plVar4 = local_50;
  if (local_50 != (long *)0x0) {
    LOCK();
    plVar5 = local_50 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_50 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar7 = local_50[-1];
      local_50 = (long *)0x0;
      if (lVar7 != 0) {
        lVar6 = 0;
        plVar5 = plVar4;
        do {
          if (*plVar5 != 0) {
            LOCK();
            plVar1 = (long *)(*plVar5 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar2 = *plVar5;
              *plVar5 = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
            }
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar7 != lVar6);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
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
            if (lVar3 == 0) goto LAB_001053df;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
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
LAB_001053df:
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
    if (cVar6 != '\0') goto LAB_00105493;
  }
  cVar6 = String::operator==(param_1,"RefCounted");
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_00105493;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = String::operator==(param_1,"Object");
      return uVar8;
    }
  }
  else {
LAB_00105493:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ImmediateMesh::is_class(String const&) const */

undefined8 __thiscall ImmediateMesh::is_class(ImmediateMesh *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar4 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_001056ab;
  }
  cVar5 = String::operator==(param_1,"ImmediateMesh");
  if (cVar5 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          if (*(long *)(lVar4 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar5 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_001056ab;
    }
    cVar5 = String::operator==(param_1,"Mesh");
    if (cVar5 == '\0') {
      for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
        lVar4 = *(long *)(lVar2 + 0x20);
        if (lVar4 == 0) {
          local_60 = 0;
        }
        else {
          pcVar3 = *(char **)(lVar4 + 8);
          local_60 = 0;
          if (pcVar3 == (char *)0x0) {
            if (*(long *)(lVar4 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
            }
          }
          else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange *)&local_60);
          }
        }
        cVar5 = String::operator==(param_1,(String *)&local_60);
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
        if (cVar5 != '\0') goto LAB_001056ab;
      }
      cVar5 = String::operator==(param_1,"Resource");
      if (cVar5 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar6 = RefCounted::is_class((RefCounted *)this,param_1);
          return uVar6;
        }
        goto LAB_001058a0;
      }
    }
  }
LAB_001056ab:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001058a0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  undefined7 in_register_00000031;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
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
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
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
      goto LAB_00105a0c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00105a0c:
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
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
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
  if (local_90 != 0) {
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
      goto LAB_00105c71;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00105c71:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
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



/* Mesh::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Mesh::_get_property_listv(Mesh *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
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
  if (!param_2) {
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = &_LC47;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC47;
  local_98 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
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
      goto LAB_00105f21;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00105f21:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Mesh",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
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



/* ImmediateMesh::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall ImmediateMesh::_get_property_listv(ImmediateMesh *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
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
    Mesh::_get_property_listv((Mesh *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "ImmediateMesh";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ImmediateMesh";
  local_98 = 0;
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
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
      goto LAB_001061d1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001061d1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"ImmediateMesh",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Mesh::_get_property_listv((Mesh *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  if (in_EDX != 0) goto LAB_00106359;
  local_78 = 0;
  local_68 = &_LC15;
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
LAB_00106455:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00106455;
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
LAB_00106359:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<Vector3 const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Vector3_const&>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != 0) goto LAB_001065c9;
  local_78 = 0;
  local_68 = &_LC15;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,9);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_001066c5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_001066c5;
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
LAB_001065c9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<Plane const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Plane_const&>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != 0) goto LAB_00106839;
  local_78 = 0;
  local_68 = &_LC15;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0xe);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00106935:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00106935;
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
LAB_00106839:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
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
  if (in_EDX != 0) goto LAB_00106aa9;
  local_78 = 0;
  local_68 = &_LC15;
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
LAB_00106ba5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00106ba5;
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
LAB_00106aa9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<Mesh::PrimitiveType, Ref<Material> const&>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindT<Mesh::PrimitiveType,Ref<Material>const&>::_gen_argument_type_info(int param_1)

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
  undefined8 local_60;
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
    local_78 = "Mesh::PrimitiveType";
    local_70._0_8_ = 0x13;
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
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((StringName::configured != '\0') && (local_70._8_8_ != 0)) {
      StringName::unref();
    }
  }
  else {
    if (in_EDX != 1) goto LAB_00106d4a;
    local_88 = 0;
    local_78 = "Material";
    local_90 = 0;
    local_70._0_8_ = 8;
    String::parse_latin1((StrRange *)&local_90);
    local_98 = 0;
    local_78 = (char *)CONCAT44(local_78._4_4_,0x18);
    local_60 = CONCAT44(local_60._4_4_,0x11);
    local_58 = 0;
    local_70 = (undefined1  [16])0x0;
    if (local_90 == 0) {
LAB_0010709d:
      local_50 = 6;
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
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
      local_50 = 6;
      if ((int)local_60 == 0x11) goto LAB_0010709d;
      StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    if ((StringName::configured != '\0') && (local_88 != 0)) {
      StringName::unref();
    }
    *puVar5 = local_78._0_4_;
    if (*(long *)(puVar5 + 2) != local_70._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
      uVar3 = local_70._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_70._8_8_;
      local_70 = auVar2 << 0x40;
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
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((StringName::configured != '\0') && (local_70._8_8_ != 0)) {
      StringName::unref();
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
LAB_00106d4a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* Ref<Material>::unref() */

void __thiscall Ref<Material>::unref(Ref<Material> *this)

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



/* LocalVector<ImmediateMesh::Surface, unsigned int, false, false>::resize(unsigned int) */

void __thiscall
LocalVector<ImmediateMesh::Surface,unsigned_int,false,false>::resize
          (LocalVector<ImmediateMesh::Surface,unsigned_int,false,false> *this,uint param_1)

{
  Object *pOVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  void *pvVar7;
  uint uVar8;
  
  uVar8 = *(uint *)this;
  if (param_1 < uVar8) {
    lVar6 = (ulong)param_1 * 0x38;
    uVar8 = param_1;
LAB_001071b6:
    do {
      lVar3 = *(long *)(this + 8);
      if ((*(long *)(lVar3 + lVar6 + 8) != 0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0'))
      {
        pOVar1 = *(Object **)(lVar3 + lVar6 + 8);
        cVar2 = predelete_handler(pOVar1);
        if (cVar2 != '\0') {
          uVar8 = uVar8 + 1;
          lVar6 = lVar6 + 0x38;
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
          if (*(uint *)this <= uVar8) break;
          goto LAB_001071b6;
        }
      }
      uVar8 = uVar8 + 1;
      lVar6 = lVar6 + 0x38;
    } while (uVar8 < *(uint *)this);
  }
  else {
    if (param_1 <= uVar8) {
      return;
    }
    uVar5 = param_1 - 1;
    if (*(uint *)(this + 4) < param_1) {
      uVar8 = uVar5 >> 1 | uVar5;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = (uVar8 | uVar8 >> 0x10) + 1;
      *(uint *)(this + 4) = uVar8;
      pvVar7 = *(void **)(this + 8);
      lVar6 = Memory::realloc_static(pvVar7,(ulong)uVar8 * 0x38,false);
      *(long *)(this + 8) = lVar6;
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        LocalVector<Plane,unsigned_int,false,false>::resize((uint)pvVar7);
      }
      uVar8 = *(uint *)this;
      if (param_1 <= uVar8) goto LAB_00107208;
    }
    lVar6 = *(long *)(this + 8);
    lVar3 = lVar6 + (ulong)uVar8 * 0x38;
    do {
      *(undefined8 *)(lVar3 + 8) = 0;
      lVar4 = lVar3 + 0x38;
      *(undefined1 *)(lVar3 + 0x10) = 0;
      *(undefined4 *)(lVar3 + 0x14) = 0;
      *(undefined8 *)(lVar3 + 0x18) = 0;
      *(undefined8 *)(lVar3 + 0x20) = 0;
      *(undefined4 *)(lVar3 + 0x28) = 0;
      *(undefined8 *)(lVar3 + 0x2c) = 0;
      *(undefined4 *)(lVar3 + 0x34) = 0;
      lVar3 = lVar4;
    } while (lVar4 != lVar6 + 0x38 + ((ulong)(uVar5 - uVar8) + (ulong)uVar8) * 0x38);
  }
LAB_00107208:
  *(uint *)this = param_1;
  return;
}



/* MethodBind* create_method_bind<ImmediateMesh, Mesh::PrimitiveType, Ref<Material> const&>(void
   (ImmediateMesh::*)(Mesh::PrimitiveType, Ref<Material> const&)) */

MethodBind *
create_method_bind<ImmediateMesh,Mesh::PrimitiveType,Ref<Material>const&>
          (_func_void_PrimitiveType_Ref_ptr *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_PrimitiveType_Ref_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010b300;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "ImmediateMesh";
  local_30 = 0xd;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<ImmediateMesh, Color const&>(void (ImmediateMesh::*)(Color
   const&)) */

MethodBind * create_method_bind<ImmediateMesh,Color_const&>(_func_void_Color_ptr *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_Color_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010b360;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "ImmediateMesh";
  local_30 = 0xd;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<ImmediateMesh, Vector3 const&>(void (ImmediateMesh::*)(Vector3
   const&)) */

MethodBind * create_method_bind<ImmediateMesh,Vector3_const&>(_func_void_Vector3_ptr *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_Vector3_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010b3c0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "ImmediateMesh";
  local_30 = 0xd;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<ImmediateMesh, Plane const&>(void (ImmediateMesh::*)(Plane
   const&)) */

MethodBind * create_method_bind<ImmediateMesh,Plane_const&>(_func_void_Plane_ptr *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_Plane_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010b420;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "ImmediateMesh";
  local_30 = 0xd;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<ImmediateMesh, Vector2 const&>(void (ImmediateMesh::*)(Vector2
   const&)) */

MethodBind * create_method_bind<ImmediateMesh,Vector2_const&>(_func_void_Vector2_ptr *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_Vector2_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010b480;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "ImmediateMesh";
  local_30 = 0xd;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<ImmediateMesh>(void (ImmediateMesh::*)()) */

MethodBind * create_method_bind<ImmediateMesh>(_func_void *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void **)(this + 0x58) = param_1;
  *(undefined8 *)(this + 0x60) = in_RSI;
  *(undefined ***)this = &PTR__gen_argument_type_0010b4e0;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "ImmediateMesh";
  local_30 = 0xd;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ImmediateMesh::_bind_methods() [clone .cold] */

void ImmediateMesh::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010796a(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ImmediateMesh::surface_end() [clone .cold] */

void ImmediateMesh::surface_end(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ImmediateMesh::_initialize_classv() */

void ImmediateMesh::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Mesh::initialize_class()::initialized == '\0') {
      if (Resource::initialize_class()::initialized == '\0') {
        if (RefCounted::initialize_class()::initialized == '\0') {
          Object::initialize_class();
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Object");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          local_70 = 0;
          String::parse_latin1((String *)&local_70,"RefCounted");
          StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
          ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
          if ((StringName::configured != '\0') && (local_68 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if ((code *)PTR__bind_methods_0010f008 != RefCounted::_bind_methods) {
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
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        Resource::_bind_methods();
        Resource::initialize_class()::initialized = '\x01';
      }
      local_58 = "Resource";
      local_68 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "Mesh";
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
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Resource::_bind_methods) {
        Mesh::_bind_methods();
      }
      Mesh::initialize_class()::initialized = '\x01';
    }
    local_58 = "Mesh";
    local_68 = 0;
    local_50 = 4;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ImmediateMesh";
    local_70 = 0;
    local_50 = 0xd;
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
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* CowData<unsigned char>::_realloc(long) */

undefined8 __thiscall CowData<unsigned_char>::_realloc(CowData<unsigned_char> *this,long param_1)

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



/* WARNING: Removing unreachable block (ram,0x00108008) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

{
  char cVar1;
  Variant *this;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c0 [8];
  undefined8 local_b8 [8];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c0);
  iVar2 = (int)local_c0;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_b8,param_2);
  *param_1 = local_b8[0];
  local_b8[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  Array::~Array(local_c0);
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



/* MethodBindT<>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
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
      _err_print_error(&_LC92,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00108300;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
      (*(code *)pVVar2)();
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
LAB_00108300:
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
      local_40 = 0x35;
      local_50 = 0;
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
      goto LAB_0010870f;
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
                    /* WARNING: Could not recover jumptable at 0x001085b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010870f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      local_40 = 0x35;
      local_50 = 0;
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
      goto LAB_001088cf;
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
                    /* WARNING: Could not recover jumptable at 0x00108776. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_001088cf:
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
      goto LAB_00108ab1;
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
                    /* WARNING: Could not recover jumptable at 0x0010893d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_00108ab1:
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
      goto LAB_00108c91;
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
                    /* WARNING: Could not recover jumptable at 0x00108b19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_00108c91:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Plane const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Plane_const&>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_00108e71;
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
                    /* WARNING: Could not recover jumptable at 0x00108cfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_00108e71:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Plane const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Plane_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00109051;
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
                    /* WARNING: Could not recover jumptable at 0x00108ed9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_00109051:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector3 const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Vector3_const&>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_00109231;
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
                    /* WARNING: Could not recover jumptable at 0x001090bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_00109231:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector3 const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Vector3_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00109411;
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
                    /* WARNING: Could not recover jumptable at 0x00109299. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_00109411:
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
      goto LAB_001095f1;
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
                    /* WARNING: Could not recover jumptable at 0x0010947d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_001095f1:
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
      goto LAB_001097d1;
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
                    /* WARNING: Could not recover jumptable at 0x00109659. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_001097d1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Mesh::PrimitiveType, Ref<Material> const&>::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<Mesh::PrimitiveType,Ref<Material>const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  Object *pOVar4;
  Variant *pVVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar5 = param_2[0x23];
      if (pVVar5 == (Variant *)0x0) {
        pVVar5 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar5 = param_2[1] + 0x20;
    }
    if (local_68 == (Object *)*(long *)pVVar5) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x108188;
      local_60 = 0x35;
      local_70 = 0;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_001098e9;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Variant::Variant((Variant *)local_58,*(Object **)(*(long *)(param_3 + 8) + 0x10));
  local_68 = (Object *)0x0;
  pOVar4 = (Object *)Variant::get_validated_object();
  pOVar2 = local_68;
  if (pOVar4 != local_68) {
    if (pOVar4 == (Object *)0x0) {
      if (local_68 != (Object *)0x0) {
        local_68 = (Object *)0x0;
LAB_001098a0:
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
      pOVar4 = (Object *)__dynamic_cast(pOVar4,&Object::typeinfo,&Material::typeinfo,0);
      if (pOVar2 != pOVar4) {
        local_68 = pOVar4;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_68 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_001098a0;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar6)((long *)((long)param_2 + lVar1),*(undefined4 *)(*(long *)param_3 + 8),
            (StringName *)&local_68);
  if (local_68 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_68;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_68);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_001098e9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Mesh::PrimitiveType, Ref<Material> const&>::ptrcall(Object*, void const**, void*)
   const */

void MethodBindT<Mesh::PrimitiveType,Ref<Material>const&>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

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
      local_48 = (Object *)0x108188;
      local_40 = 0x35;
      local_50 = 0;
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
      goto LAB_00109b98;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar5 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar5 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)((long)param_2 + lVar1) + -1);
  }
  if ((*(long **)((long)param_3 + 8) == (long *)0x0) ||
     (local_48 = (Object *)**(long **)((long)param_3 + 8), local_48 == (Object *)0x0)) {
LAB_00109b6d:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_00109b6d;
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar5)((long *)((long)param_2 + lVar1),**param_3,(StringName *)&local_48);
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
LAB_00109b98:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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
      _err_print_error(&_LC92,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00109e30;
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
      if (in_R8D != 1) goto LAB_00109e80;
LAB_00109e70:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00109e80:
        uVar6 = 4;
        goto LAB_00109e25;
      }
      if (in_R8D == 1) goto LAB_00109e70;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,5);
    uVar4 = _LC96;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    local_38 = Variant::operator_cast_to_Vector2(pVVar10);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),&local_38);
  }
  else {
    uVar6 = 3;
LAB_00109e25:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00109e30:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Plane const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Plane_const&>::call
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
  long local_98;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  undefined8 local_78 [4];
  undefined8 local_58;
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_88,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_88 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_88 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_90 = 0;
      local_80 = 0x35;
      String::parse_latin1((StrRange *)&local_90);
      vformat<StringName>((StringName *)&local_88,(StrRange *)&local_90,&local_98);
      _err_print_error(&_LC92,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_88,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      if ((StringName::configured != '\0') && (local_98 != 0)) {
        StringName::unref();
      }
      goto LAB_0010a160;
    }
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010a1b0;
LAB_0010a1a0:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010a1b0:
        uVar6 = 4;
        goto LAB_0010a155;
      }
      if (in_R8D == 1) goto LAB_0010a1a0;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0xe);
    uVar4 = _LC98;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    local_78[0] = Variant::operator_cast_to_Plane(pVVar10);
    local_58 = local_78[0];
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),local_78);
  }
  else {
    uVar6 = 3;
LAB_0010a155:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_0010a160:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector3 const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Vector3_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auVar4 [12];
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
  undefined1 local_60 [4] [12];
  long local_30;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
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
      _err_print_error(&_LC92,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      auVar4._8_4_ = local_60[0]._8_4_;
      auVar4._0_8_ = local_60[0]._0_8_;
      if ((StringName::configured != '\0') && (local_60[0] = auVar4, local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_0010a488;
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
      if (in_R8D != 1) goto LAB_0010a4e0;
LAB_0010a4d0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010a4e0:
        uVar7 = 4;
        goto LAB_0010a47d;
      }
      if (in_R8D == 1) goto LAB_0010a4d0;
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
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar11,9);
    uVar5 = _LC99;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar5;
    }
    local_60[0] = Variant::operator_cast_to_Vector3(pVVar11);
    (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),local_60);
  }
  else {
    uVar7 = 3;
LAB_0010a47d:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0010a488:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
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
      _err_print_error(&_LC92,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010a7b8;
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
      if (in_R8D != 1) goto LAB_0010a810;
LAB_0010a800:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010a810:
        uVar6 = 4;
        goto LAB_0010a7ad;
      }
      if (in_R8D == 1) goto LAB_0010a800;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x14);
    uVar4 = _LC100;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    local_48[0] = Variant::operator_cast_to_Color(pVVar10);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),local_48);
  }
  else {
    uVar6 = 3;
LAB_0010a7ad:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_0010a7b8:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x0010ac09) */
/* WARNING: Removing unreachable block (ram,0x0010ac11) */
/* WARNING: Removing unreachable block (ram,0x0010ac21) */
/* WARNING: Removing unreachable block (ram,0x0010ac31) */
/* void call_with_variant_args_dv<__UnexistingClass, Mesh::PrimitiveType, Ref<Material>
   const&>(__UnexistingClass*, void (__UnexistingClass::*)(Mesh::PrimitiveType, Ref<Material>
   const&), Variant const**, int, Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,Mesh::PrimitiveType,Ref<Material>const&>
               (__UnexistingClass *param_1,_func_void_PrimitiveType_Ref_ptr *param_2,
               Variant **param_3,int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  Object *pOVar9;
  ulong uVar10;
  undefined4 in_register_0000000c;
  long *plVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  Variant *this;
  undefined4 *puVar15;
  long in_FS_OFFSET;
  long in_stack_00000008;
  Object *local_38;
  
  plVar11 = (long *)CONCAT44(in_register_0000000c,param_4);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar13 = (uint)param_5;
  if (uVar13 < 3) {
    lVar8 = *(long *)(in_stack_00000008 + 8);
    iVar6 = 2 - uVar13;
    if (lVar8 == 0) {
      if (iVar6 != 0) goto LAB_0010aba0;
      this = (Variant *)*plVar11;
LAB_0010abed:
      puVar15 = (undefined4 *)plVar11[1];
    }
    else {
      lVar2 = *(long *)(lVar8 + -8);
      iVar14 = (int)lVar2;
      if (iVar14 < iVar6) {
LAB_0010aba0:
        uVar7 = 4;
        goto LAB_0010aba5;
      }
      if (uVar13 == 0) {
        lVar12 = (long)(iVar14 + -2);
        if (lVar2 <= lVar12) goto LAB_0010ac58;
        this = (Variant *)(lVar8 + lVar12 * 0x18);
      }
      else {
        this = (Variant *)*plVar11;
        if (uVar13 == 2) goto LAB_0010abed;
      }
      lVar12 = (long)(int)((uVar13 ^ 1) + (iVar14 - iVar6));
      if (lVar2 <= lVar12) {
LAB_0010ac58:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar12,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      puVar15 = (undefined4 *)(lVar8 + lVar12 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_PrimitiveType_Ref_ptr **)
                 (param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*puVar15);
    uVar4 = _LC101;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    local_38 = (Object *)0x0;
    lVar8 = Variant::get_validated_object();
    if ((((lVar8 != 0) && (lVar8 != 0)) &&
        (pOVar9 = (Object *)__dynamic_cast(lVar8,&Object::typeinfo,&Material::typeinfo,0),
        pOVar9 != (Object *)0x0)) &&
       ((local_38 = pOVar9, pOVar9 != (Object *)0x0 &&
        (cVar5 = RefCounted::reference(), cVar5 == '\0')))) {
      local_38 = (Object *)0x0;
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar4 = _LC102;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    uVar10 = Variant::operator_cast_to_long(this);
    (*param_2)((char)(param_1 + (long)param_3),(Ref *)(uVar10 & 0xffffffff));
    if (((local_38 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
       (cVar5 = predelete_handler(local_38), cVar5 != '\0')) {
      (**(code **)(*(long *)local_38 + 0x140))(local_38);
      Memory::free_static(local_38,false);
    }
  }
  else {
    uVar7 = 3;
LAB_0010aba5:
    *(undefined4 *)param_6 = uVar7;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<Mesh::PrimitiveType, Ref<Material> const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<Mesh::PrimitiveType,Ref<Material>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC92,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0010acf6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,Mesh::PrimitiveType,Ref<Material>const&>
            (p_Var2,(_func_void_PrimitiveType_Ref_ptr *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0010acf6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Mesh::~Mesh() */

void __thiscall Mesh::~Mesh(Mesh *this)

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
/* MethodBindT<Vector2 const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector2_const&>::~MethodBindT(MethodBindT<Vector2_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Vector3 const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector3_const&>::~MethodBindT(MethodBindT<Vector3_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Plane const&>::~MethodBindT() */

void __thiscall MethodBindT<Plane_const&>::~MethodBindT(MethodBindT<Plane_const&> *this)

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
/* MethodBindT<Mesh::PrimitiveType, Ref<Material> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Mesh::PrimitiveType,Ref<Material>const&>::~MethodBindT
          (MethodBindT<Mesh::PrimitiveType,Ref<Material>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


