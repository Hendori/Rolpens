
/* MeshDataTool::get_format() const */

undefined8 __thiscall MeshDataTool::get_format(MeshDataTool *this)

{
  return *(undefined8 *)(this + 0x180);
}



/* MeshDataTool::get_vertex_count() const */

undefined4 __thiscall MeshDataTool::get_vertex_count(MeshDataTool *this)

{
  if (*(long *)(this + 400) != 0) {
    return *(undefined4 *)(*(long *)(this + 400) + -8);
  }
  return 0;
}



/* MeshDataTool::get_edge_count() const */

undefined4 __thiscall MeshDataTool::get_edge_count(MeshDataTool *this)

{
  if (*(long *)(this + 0x1a0) != 0) {
    return *(undefined4 *)(*(long *)(this + 0x1a0) + -8);
  }
  return 0;
}



/* MeshDataTool::get_face_count() const */

undefined4 __thiscall MeshDataTool::get_face_count(MeshDataTool *this)

{
  if (*(long *)(this + 0x1b0) != 0) {
    return *(undefined4 *)(*(long *)(this + 0x1b0) + -8);
  }
  return 0;
}



/* MeshDataTool::get_face_vertex(int, int) const */

undefined4 __thiscall MeshDataTool::get_face_vertex(MeshDataTool *this,int param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = (long)param_1;
  lVar1 = *(long *)(this + 0x1b0);
  if (param_1 < 0) {
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar1 + -8);
      goto LAB_001000c5;
    }
  }
  else if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar3) {
      if (2 < (uint)param_2) {
        _err_print_index_error
                  ("get_face_vertex","scene/resources/mesh_data_tool.cpp",0x1e5,(long)param_2,3,
                   "p_vertex","3","",false,false);
        return 0xffffffff;
      }
      return *(undefined4 *)(lVar1 + lVar2 * 0x30 + (long)param_2 * 4);
    }
    goto LAB_001000c5;
  }
  lVar3 = 0;
LAB_001000c5:
  _err_print_index_error
            ("get_face_vertex","scene/resources/mesh_data_tool.cpp",0x1e4,lVar2,lVar3,"p_face",
             "faces.size()","",false,false);
  return 0xffffffff;
}



/* MeshDataTool::get_face_edge(int, int) const */

undefined4 __thiscall MeshDataTool::get_face_edge(MeshDataTool *this,int param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = (long)param_1;
  lVar1 = *(long *)(this + 0x1b0);
  if (param_1 < 0) {
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar1 + -8);
      goto LAB_001001b5;
    }
  }
  else if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar3) {
      if (2 < (uint)param_2) {
        _err_print_index_error
                  ("get_face_edge","scene/resources/mesh_data_tool.cpp",0x1eb,(long)param_2,3,
                   "p_vertex","3","",false,false);
        return 0xffffffff;
      }
      return *(undefined4 *)(lVar1 + lVar2 * 0x30 + 0xc + (long)param_2 * 4);
    }
    goto LAB_001001b5;
  }
  lVar3 = 0;
LAB_001001b5:
  _err_print_index_error
            ("get_face_edge","scene/resources/mesh_data_tool.cpp",0x1ea,lVar2,lVar3,"p_face",
             "faces.size()","",false,false);
  return 0xffffffff;
}



/* MeshDataTool::get_edge_vertex(int, int) const */

undefined4 __thiscall MeshDataTool::get_edge_vertex(MeshDataTool *this,int param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = (long)param_1;
  lVar1 = *(long *)(this + 0x1a0);
  if (param_1 < 0) {
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar1 + -8);
      goto LAB_001002a5;
    }
  }
  else if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar3) {
      if (1 < (uint)param_2) {
        _err_print_index_error
                  ("get_edge_vertex","scene/resources/mesh_data_tool.cpp",0x1d0,(long)param_2,2,
                   "p_vertex","2","",false,false);
        return 0xffffffff;
      }
      return *(undefined4 *)(lVar1 + lVar2 * 0x30 + (long)param_2 * 4);
    }
    goto LAB_001002a5;
  }
  lVar3 = 0;
LAB_001002a5:
  _err_print_index_error
            ("get_edge_vertex","scene/resources/mesh_data_tool.cpp",0x1cf,lVar2,lVar3,"p_edge",
             "edges.size()","",false,false);
  return 0xffffffff;
}



/* MeshDataTool::get_vertex_meta(int) const */

Variant * MeshDataTool::get_vertex_meta(int param_1)

{
  long lVar1;
  long lVar2;
  int in_EDX;
  long in_RSI;
  undefined4 in_register_0000003c;
  Variant *this;
  long lVar3;
  
  this = (Variant *)CONCAT44(in_register_0000003c,param_1);
  lVar2 = (long)in_EDX;
  lVar1 = *(long *)(in_RSI + 400);
  if (in_EDX < 0) {
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar1 + -8);
      goto LAB_00100389;
    }
  }
  else if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar3) {
      Variant::Variant(this,(Variant *)(lVar1 + 0x88 + lVar2 * 0xa0));
      return this;
    }
    goto LAB_00100389;
  }
  lVar3 = 0;
LAB_00100389:
  _err_print_index_error
            ("get_vertex_meta","scene/resources/mesh_data_tool.cpp",0x1bb,lVar2,lVar3,"p_idx",
             "vertices.size()","",false,false);
  *(undefined4 *)this = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  return this;
}



/* MeshDataTool::get_face_meta(int) const */

Variant * MeshDataTool::get_face_meta(int param_1)

{
  long lVar1;
  long lVar2;
  int in_EDX;
  long in_RSI;
  undefined4 in_register_0000003c;
  Variant *this;
  long lVar3;
  
  this = (Variant *)CONCAT44(in_register_0000003c,param_1);
  lVar2 = (long)in_EDX;
  lVar1 = *(long *)(in_RSI + 0x1b0);
  if (in_EDX < 0) {
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar1 + -8);
      goto LAB_00100429;
    }
  }
  else if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar3) {
      Variant::Variant(this,(Variant *)(lVar1 + 0x18 + lVar2 * 0x30));
      return this;
    }
    goto LAB_00100429;
  }
  lVar3 = 0;
LAB_00100429:
  _err_print_index_error
            ("get_face_meta","scene/resources/mesh_data_tool.cpp",0x1f0,lVar2,lVar3,"p_face",
             "faces.size()","",false,false);
  *(undefined4 *)this = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  return this;
}



/* MeshDataTool::get_edge_meta(int) const */

Variant * MeshDataTool::get_edge_meta(int param_1)

{
  long lVar1;
  long lVar2;
  int in_EDX;
  long in_RSI;
  undefined4 in_register_0000003c;
  Variant *this;
  long lVar3;
  
  this = (Variant *)CONCAT44(in_register_0000003c,param_1);
  lVar2 = (long)in_EDX;
  lVar1 = *(long *)(in_RSI + 0x1a0);
  if (in_EDX < 0) {
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar1 + -8);
      goto LAB_001004c9;
    }
  }
  else if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar3) {
      Variant::Variant(this,(Variant *)(lVar1 + 0x18 + lVar2 * 0x30));
      return this;
    }
    goto LAB_001004c9;
  }
  lVar3 = 0;
LAB_001004c9:
  _err_print_index_error
            ("get_edge_meta","scene/resources/mesh_data_tool.cpp",0x1da,lVar2,lVar3,"p_idx",
             "edges.size()","",false,false);
  *(undefined4 *)this = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  return this;
}



/* MeshDataTool::get_face_normal(int) const */

undefined1  [16] __thiscall MeshDataTool::get_face_normal(MeshDataTool *this,int param_1)

{
  long lVar1;
  code *pcVar2;
  int *piVar3;
  long lVar4;
  float *pfVar5;
  long lVar6;
  long lVar7;
  float *pfVar8;
  float *pfVar9;
  long lVar10;
  long in_FS_OFFSET;
  float fVar11;
  float fVar13;
  undefined1 auVar12 [16];
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  undefined1 auVar18 [16];
  undefined8 local_20;
  float local_18;
  
  lVar6 = (long)param_1;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = *(long *)(this + 0x1b0);
  if (param_1 < 0) {
    if (lVar7 == 0) goto LAB_001007c0;
    lVar10 = *(long *)(lVar7 + -8);
  }
  else if (lVar7 == 0) {
LAB_001007c0:
    lVar10 = 0;
  }
  else {
    lVar10 = *(long *)(lVar7 + -8);
    if (lVar6 < lVar10) {
      lVar10 = *(long *)(this + 400);
      piVar3 = (int *)(lVar7 + lVar6 * 0x30);
      lVar7 = (long)*piVar3;
      if (lVar7 < 0) {
        if (lVar10 != 0) {
          lVar6 = *(long *)(lVar10 + -8);
          goto LAB_001006eb;
        }
      }
      else if (lVar10 != 0) {
        lVar6 = *(long *)(lVar10 + -8);
        if (lVar6 <= lVar7) goto LAB_001006eb;
        pfVar8 = (float *)(lVar7 * 0xa0 + lVar10);
        lVar7 = (long)piVar3[1];
        if ((lVar6 <= lVar7) || (lVar7 < 0)) goto LAB_001006eb;
        lVar4 = (long)piVar3[2];
        pfVar9 = (float *)(lVar7 * 0xa0 + lVar10);
        lVar7 = lVar4;
        if ((lVar4 < 0) || (lVar6 <= lVar4)) goto LAB_001006eb;
        fVar14 = (float)*(undefined8 *)(pfVar8 + 1);
        fVar15 = (float)((ulong)*(undefined8 *)(pfVar8 + 1) >> 0x20);
        fVar17 = fVar14 - (float)*(undefined8 *)(pfVar9 + 1);
        pfVar5 = (float *)(lVar4 * 0xa0 + lVar10);
        fVar11 = *pfVar8 - *pfVar9;
        fVar14 = fVar14 - (float)*(undefined8 *)(pfVar5 + 1);
        fVar13 = *pfVar8 - *pfVar5;
        auVar16._0_4_ = (pfVar8[2] - pfVar9[2]) * fVar14 - (pfVar8[2] - pfVar5[2]) * fVar17;
        auVar16._4_4_ =
             fVar11 * (fVar15 - (float)((ulong)*(undefined8 *)(pfVar5 + 1) >> 0x20)) -
             fVar13 * (fVar15 - (float)((ulong)*(undefined8 *)(pfVar9 + 1) >> 0x20));
        auVar16._8_8_ = 0;
        fVar11 = fVar13 * fVar17 - fVar14 * fVar11;
        fVar13 = auVar16._0_4_ * auVar16._0_4_ + auVar16._4_4_ * auVar16._4_4_ + fVar11 * fVar11;
        local_18 = 0.0;
        local_20 = 0;
        if (fVar13 != 0.0) {
          fVar13 = SQRT(fVar13);
          local_18 = fVar11 / fVar13;
          auVar12._4_4_ = fVar13;
          auVar12._0_4_ = fVar13;
          auVar12._8_8_ = _LC23;
          auVar16 = divps(auVar16,auVar12);
          local_20 = auVar16._0_8_;
        }
        goto LAB_00100693;
      }
      lVar6 = 0;
LAB_001006eb:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar6,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  _err_print_index_error
            ("get_face_normal","scene/resources/mesh_data_tool.cpp",0x1fa,lVar6,lVar10,"p_face",
             "faces.size()","",false,false);
  local_18 = 0.0;
  local_20 = 0;
LAB_00100693:
  auVar18._8_4_ = local_18;
  auVar18._0_8_ = local_20;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar18._12_4_ = 0;
    return auVar18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MeshDataTool::get_vertex(int) const */

undefined1  [16] __thiscall MeshDataTool::get_vertex(MeshDataTool *this,int param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined1 auVar6 [16];
  undefined8 local_28;
  undefined4 local_20;
  
  lVar4 = (long)param_1;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = *(long *)(this + 400);
  if (param_1 < 0) {
    if (lVar2 == 0) goto LAB_001008b0;
    lVar5 = *(long *)(lVar2 + -8);
  }
  else if (lVar2 == 0) {
LAB_001008b0:
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar2 + -8);
    if (lVar4 < lVar5) {
      puVar3 = (undefined8 *)(lVar2 + lVar4 * 0xa0);
      local_28 = *puVar3;
      local_20 = *(undefined4 *)(puVar3 + 1);
      goto LAB_00100832;
    }
  }
  _err_print_index_error
            ("get_vertex","scene/resources/mesh_data_tool.cpp",0x162,lVar4,lVar5,"p_idx",
             "vertices.size()","",false,false);
  local_20 = 0;
  local_28 = 0;
LAB_00100832:
  auVar6._8_4_ = local_20;
  auVar6._0_8_ = local_28;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar6._12_4_ = 0;
    return auVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MeshDataTool::get_vertex_normal(int) const */

undefined1  [16] __thiscall MeshDataTool::get_vertex_normal(MeshDataTool *this,int param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined1 auVar5 [16];
  undefined8 local_28;
  undefined4 local_20;
  
  lVar3 = (long)param_1;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = *(long *)(this + 400);
  if (param_1 < 0) {
    if (lVar2 == 0) goto LAB_00100990;
    lVar4 = *(long *)(lVar2 + -8);
  }
  else if (lVar2 == 0) {
LAB_00100990:
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(lVar2 + -8);
    if (lVar3 < lVar4) {
      lVar2 = lVar2 + lVar3 * 0xa0;
      local_28 = *(undefined8 *)(lVar2 + 0x1c);
      local_20 = *(undefined4 *)(lVar2 + 0x24);
      goto LAB_00100913;
    }
  }
  _err_print_index_error
            ("get_vertex_normal","scene/resources/mesh_data_tool.cpp",0x16c,lVar3,lVar4,"p_idx",
             "vertices.size()","",false,false);
  local_20 = 0;
  local_28 = 0;
LAB_00100913:
  auVar5._8_4_ = local_20;
  auVar5._0_8_ = local_28;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar5._12_4_ = 0;
    return auVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MeshDataTool::get_vertex_tangent(int) const */

undefined1  [16] __thiscall MeshDataTool::get_vertex_tangent(MeshDataTool *this,int param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  lVar6 = (long)param_1;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = *(long *)(this + 400);
  if (param_1 < 0) {
    if (lVar3 == 0) goto LAB_00100a70;
    lVar7 = *(long *)(lVar3 + -8);
  }
  else if (lVar3 == 0) {
LAB_00100a70:
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(lVar3 + -8);
    if (lVar6 < lVar7) {
      puVar1 = (undefined8 *)(lVar3 + 0x28 + lVar6 * 0xa0);
      local_28 = *puVar1;
      uVar4 = puVar1[1];
      uStack_20 = (undefined4)uVar4;
      uStack_1c = (undefined4)((ulong)uVar4 >> 0x20);
      goto LAB_001009eb;
    }
  }
  _err_print_index_error
            ("get_vertex_tangent","scene/resources/mesh_data_tool.cpp",0x177,lVar6,lVar7,"p_idx",
             "vertices.size()","",false,false);
  uStack_20 = 0;
  local_28 = 0;
  uStack_1c = 0;
LAB_001009eb:
  auVar5._8_4_ = uStack_20;
  auVar5._0_8_ = local_28;
  auVar5._12_4_ = uStack_1c;
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return auVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MeshDataTool::get_vertex_uv(int) const */

undefined8 __thiscall MeshDataTool::get_vertex_uv(MeshDataTool *this,int param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(this + 400);
  lVar2 = (long)param_1;
  if (param_1 < 0) {
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar1 + -8);
      goto LAB_00100ab9;
    }
  }
  else if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar3) {
      return *(undefined8 *)(lVar1 + 0x38 + lVar2 * 0xa0);
    }
    goto LAB_00100ab9;
  }
  lVar3 = 0;
LAB_00100ab9:
  _err_print_index_error
            ("get_vertex_uv","scene/resources/mesh_data_tool.cpp",0x182,lVar2,lVar3,"p_idx",
             "vertices.size()","",false,false);
  return 0;
}



/* MeshDataTool::get_vertex_uv2(int) const */

undefined8 __thiscall MeshDataTool::get_vertex_uv2(MeshDataTool *this,int param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(this + 400);
  lVar2 = (long)param_1;
  if (param_1 < 0) {
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar1 + -8);
      goto LAB_00100b49;
    }
  }
  else if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar3) {
      return *(undefined8 *)(lVar1 + 0x40 + lVar2 * 0xa0);
    }
    goto LAB_00100b49;
  }
  lVar3 = 0;
LAB_00100b49:
  _err_print_index_error
            ("get_vertex_uv2","scene/resources/mesh_data_tool.cpp",0x18d,lVar2,lVar3,"p_idx",
             "vertices.size()","",false,false);
  return 0;
}



/* MeshDataTool::get_vertex_color(int) const */

undefined1  [16] __thiscall MeshDataTool::get_vertex_color(MeshDataTool *this,int param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  lVar1 = *(long *)(this + 400);
  lVar2 = (long)param_1;
  if (param_1 < 0) {
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar1 + -8);
      goto LAB_00100bf1;
    }
  }
  else if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar3) {
      auVar4._8_8_ = *(undefined8 *)(lVar1 + 0x14 + lVar2 * 0xa0);
      auVar4._0_8_ = *(undefined8 *)(lVar1 + 0xc + lVar2 * 0xa0);
      return auVar4;
    }
    goto LAB_00100bf1;
  }
  lVar3 = 0;
LAB_00100bf1:
  _err_print_index_error
            ("get_vertex_color","scene/resources/mesh_data_tool.cpp",0x198,lVar2,lVar3,"p_idx",
             "vertices.size()","",false,false);
  return ZEXT816(0x3f80000000000000) << 0x40;
}



/* MeshDataTool::set_material(Ref<Material> const&) */

void __thiscall MeshDataTool::set_material(MeshDataTool *this,Ref *param_1)

{
  Object *pOVar1;
  Object *pOVar2;
  char cVar3;
  
  pOVar1 = *(Object **)param_1;
  pOVar2 = *(Object **)(this + 0x1b8);
  if (pOVar1 != pOVar2) {
    *(Object **)(this + 0x1b8) = pOVar1;
    if (pOVar1 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(this + 0x1b8) = 0;
      }
    }
    if (pOVar2 != (Object *)0x0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler(pOVar2);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
          return;
        }
      }
    }
  }
  return;
}



/* MeshDataTool::get_material() const */

void MeshDataTool::get_material(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0x1b8) != 0) {
    *in_RDI = *(long *)(in_RSI + 0x1b8);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
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



/* MeshDataTool::get_vertex_weights(int) const */

long MeshDataTool::get_vertex_weights(int param_1)

{
  long lVar1;
  int in_EDX;
  long in_RSI;
  long lVar2;
  undefined4 in_register_0000003c;
  long lVar3;
  long lVar4;
  
  lVar3 = CONCAT44(in_register_0000003c,param_1);
  lVar1 = (long)in_EDX;
  lVar2 = *(long *)(in_RSI + 400);
  if (in_EDX < 0) {
    if (lVar2 != 0) {
      lVar4 = *(long *)(lVar2 + -8);
      goto LAB_00100e01;
    }
  }
  else if (lVar2 != 0) {
    lVar4 = *(long *)(lVar2 + -8);
    if (lVar1 < lVar4) {
      *(undefined8 *)(lVar3 + 8) = 0;
      lVar2 = lVar2 + lVar1 * 0xa0;
      if (*(long *)(lVar2 + 0x60) != 0) {
        CowData<float>::_ref((CowData<float> *)(lVar3 + 8),(CowData *)(lVar2 + 0x60));
      }
      return lVar3;
    }
    goto LAB_00100e01;
  }
  lVar4 = 0;
LAB_00100e01:
  _err_print_index_error
            ("get_vertex_weights","scene/resources/mesh_data_tool.cpp",0x1af,lVar1,lVar4,"p_idx",
             "vertices.size()","",false,false);
  *(undefined8 *)(lVar3 + 8) = 0;
  return lVar3;
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



/* MeshDataTool::get_vertex_edges(int) const */

long MeshDataTool::get_vertex_edges(int param_1)

{
  long lVar1;
  int in_EDX;
  long in_RSI;
  long lVar2;
  undefined4 in_register_0000003c;
  long lVar3;
  long lVar4;
  
  lVar3 = CONCAT44(in_register_0000003c,param_1);
  lVar1 = (long)in_EDX;
  lVar2 = *(long *)(in_RSI + 400);
  if (in_EDX < 0) {
    if (lVar2 != 0) {
      lVar4 = *(long *)(lVar2 + -8);
      goto LAB_00100f31;
    }
  }
  else if (lVar2 != 0) {
    lVar4 = *(long *)(lVar2 + -8);
    if (lVar1 < lVar4) {
      *(undefined8 *)(lVar3 + 8) = 0;
      lVar2 = lVar2 + lVar1 * 0xa0;
      if (*(long *)(lVar2 + 0x70) != 0) {
        CowData<int>::_ref((CowData<int> *)(lVar3 + 8),(CowData *)(lVar2 + 0x70));
      }
      return lVar3;
    }
    goto LAB_00100f31;
  }
  lVar4 = 0;
LAB_00100f31:
  _err_print_index_error
            ("get_vertex_edges","scene/resources/mesh_data_tool.cpp",0x1c5,lVar1,lVar4,"p_idx",
             "vertices.size()","",false,false);
  *(undefined8 *)(lVar3 + 8) = 0;
  return lVar3;
}



/* MeshDataTool::get_vertex_bones(int) const */

long MeshDataTool::get_vertex_bones(int param_1)

{
  long lVar1;
  int in_EDX;
  long in_RSI;
  long lVar2;
  undefined4 in_register_0000003c;
  long lVar3;
  long lVar4;
  
  lVar3 = CONCAT44(in_register_0000003c,param_1);
  lVar1 = (long)in_EDX;
  lVar2 = *(long *)(in_RSI + 400);
  if (in_EDX < 0) {
    if (lVar2 != 0) {
      lVar4 = *(long *)(lVar2 + -8);
      goto LAB_00100fe1;
    }
  }
  else if (lVar2 != 0) {
    lVar4 = *(long *)(lVar2 + -8);
    if (lVar1 < lVar4) {
      *(undefined8 *)(lVar3 + 8) = 0;
      lVar2 = lVar2 + lVar1 * 0xa0;
      if (*(long *)(lVar2 + 0x50) != 0) {
        CowData<int>::_ref((CowData<int> *)(lVar3 + 8),(CowData *)(lVar2 + 0x50));
      }
      return lVar3;
    }
    goto LAB_00100fe1;
  }
  lVar4 = 0;
LAB_00100fe1:
  _err_print_index_error
            ("get_vertex_bones","scene/resources/mesh_data_tool.cpp",0x1a3,lVar1,lVar4,"p_idx",
             "vertices.size()","",false,false);
  *(undefined8 *)(lVar3 + 8) = 0;
  return lVar3;
}



/* MeshDataTool::get_edge_faces(int) const */

long MeshDataTool::get_edge_faces(int param_1)

{
  long lVar1;
  int in_EDX;
  long in_RSI;
  long lVar2;
  undefined4 in_register_0000003c;
  long lVar3;
  long lVar4;
  
  lVar3 = CONCAT44(in_register_0000003c,param_1);
  lVar1 = (long)in_EDX;
  lVar2 = *(long *)(in_RSI + 0x1a0);
  if (in_EDX < 0) {
    if (lVar2 != 0) {
      lVar4 = *(long *)(lVar2 + -8);
      goto LAB_00101091;
    }
  }
  else if (lVar2 != 0) {
    lVar4 = *(long *)(lVar2 + -8);
    if (lVar1 < lVar4) {
      *(undefined8 *)(lVar3 + 8) = 0;
      lVar2 = lVar2 + lVar1 * 0x30;
      if (*(long *)(lVar2 + 0x10) != 0) {
        CowData<int>::_ref((CowData<int> *)(lVar3 + 8),(CowData *)(lVar2 + 0x10));
      }
      return lVar3;
    }
    goto LAB_00101091;
  }
  lVar4 = 0;
LAB_00101091:
  _err_print_index_error
            ("get_edge_faces","scene/resources/mesh_data_tool.cpp",0x1d5,lVar1,lVar4,"p_edge",
             "edges.size()","",false,false);
  *(undefined8 *)(lVar3 + 8) = 0;
  return lVar3;
}



/* MeshDataTool::get_vertex_faces(int) const */

long MeshDataTool::get_vertex_faces(int param_1)

{
  long lVar1;
  int in_EDX;
  long in_RSI;
  long lVar2;
  undefined4 in_register_0000003c;
  long lVar3;
  long lVar4;
  
  lVar3 = CONCAT44(in_register_0000003c,param_1);
  lVar1 = (long)in_EDX;
  lVar2 = *(long *)(in_RSI + 400);
  if (in_EDX < 0) {
    if (lVar2 != 0) {
      lVar4 = *(long *)(lVar2 + -8);
      goto LAB_00101149;
    }
  }
  else if (lVar2 != 0) {
    lVar4 = *(long *)(lVar2 + -8);
    if (lVar1 < lVar4) {
      *(undefined8 *)(lVar3 + 8) = 0;
      lVar2 = lVar2 + lVar1 * 0xa0;
      if (*(long *)(lVar2 + 0x80) != 0) {
        CowData<int>::_ref((CowData<int> *)(lVar3 + 8),(CowData *)(lVar2 + 0x80));
      }
      return lVar3;
    }
    goto LAB_00101149;
  }
  lVar4 = 0;
LAB_00101149:
  _err_print_index_error
            ("get_vertex_faces","scene/resources/mesh_data_tool.cpp",0x1ca,lVar1,lVar4,"p_idx",
             "vertices.size()","",false,false);
  *(undefined8 *)(lVar3 + 8) = 0;
  return lVar3;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Vector2>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<Vector2>::resize<false>(CowData<Vector2> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  char *pcVar9;
  long lVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar10 = 0;
    lVar3 = 0;
  }
  else {
    lVar10 = *(long *)(lVar3 + -8);
    if (param_1 == lVar10) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    lVar3 = lVar10 * 8;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 != 0) {
    uVar4 = param_1 * 8 - 1;
    uVar4 = uVar4 | uVar4 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = uVar4 | uVar4 >> 0x20;
    if (uVar4 != 0xffffffffffffffff) {
      if (param_1 <= lVar10) {
        puVar8 = *(undefined8 **)this;
        if (uVar4 + 1 == lVar3) {
          if (puVar8 == (undefined8 *)0x0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
LAB_001015c2:
          puVar8[-1] = param_1;
          return;
        }
        puVar5 = (undefined8 *)Memory::realloc_static(puVar8 + -2,uVar4 + 0x11,false);
        if (puVar5 != (undefined8 *)0x0) {
          puVar8 = puVar5 + 2;
          *puVar5 = 1;
          *(undefined8 **)this = puVar8;
          goto LAB_001015c2;
        }
LAB_00101720:
        pcVar6 = "Parameter \"mem_new\" is null.";
        uVar7 = 0x1a9;
        pcVar9 = "_realloc";
        goto LAB_00101708;
      }
      if (uVar4 + 1 == lVar3) {
        puVar8 = *(undefined8 **)this;
        if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        lVar3 = puVar8[-1];
LAB_00101631:
        if (param_1 <= lVar3) goto LAB_0010159d;
      }
      else {
        if (lVar10 != 0) {
          puVar5 = (undefined8 *)
                   Memory::realloc_static((void *)(*(long *)this + -0x10),uVar4 + 0x11,false);
          if (puVar5 == (undefined8 *)0x0) goto LAB_00101720;
          puVar8 = puVar5 + 2;
          *puVar5 = 1;
          *(undefined8 **)this = puVar8;
          lVar3 = puVar5[1];
          goto LAB_00101631;
        }
        puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
        if (puVar5 == (undefined8 *)0x0) {
          pcVar6 = "Parameter \"mem_new\" is null.";
          uVar7 = 0x171;
          pcVar9 = "resize";
          goto LAB_00101708;
        }
        puVar8 = puVar5 + 2;
        *puVar5 = 1;
        puVar5[1] = 0;
        *(undefined8 **)this = puVar8;
        lVar3 = 0;
      }
      memset(puVar8 + lVar3,0,(param_1 - lVar3) * 8);
LAB_0010159d:
      puVar8[-1] = param_1;
      return;
    }
  }
  pcVar6 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
  uVar7 = 0x16a;
  pcVar9 = "resize";
LAB_00101708:
  _err_print_error(pcVar9,"./core/templates/cowdata.h",uVar7,pcVar6,0,0);
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Vector3>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<Vector3>::resize<false>(CowData<Vector3> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  char *pcVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  char *pcVar9;
  long lVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar5 = *(long *)this;
  if (lVar5 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar10 = 0;
    lVar5 = 0;
  }
  else {
    lVar10 = *(long *)(lVar5 + -8);
    if (param_1 == lVar10) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar5 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar5 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    lVar5 = lVar10 * 0xc;
    if (lVar5 != 0) {
      uVar6 = lVar5 - 1U | lVar5 - 1U >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      lVar5 = (uVar6 | uVar6 >> 0x20) + 1;
    }
  }
  if (param_1 * 0xc != 0) {
    uVar6 = param_1 * 0xc - 1;
    uVar6 = uVar6 | uVar6 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = uVar6 | uVar6 >> 0x20;
    if (uVar6 != 0xffffffffffffffff) {
      if (param_1 <= lVar10) {
        puVar8 = *(undefined8 **)this;
        if (uVar6 + 1 == lVar5) {
          if (puVar8 == (undefined8 *)0x0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
LAB_00101a02:
          puVar8[-1] = param_1;
          return;
        }
        puVar3 = (undefined8 *)Memory::realloc_static(puVar8 + -2,uVar6 + 0x11,false);
        if (puVar3 != (undefined8 *)0x0) {
          puVar8 = puVar3 + 2;
          *puVar3 = 1;
          *(undefined8 **)this = puVar8;
          goto LAB_00101a02;
        }
LAB_00101b60:
        pcVar4 = "Parameter \"mem_new\" is null.";
        uVar7 = 0x1a9;
        pcVar9 = "_realloc";
        goto LAB_00101b48;
      }
      if (uVar6 + 1 == lVar5) {
        puVar8 = *(undefined8 **)this;
        if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        lVar5 = puVar8[-1];
LAB_00101a71:
        if (param_1 <= lVar5) goto LAB_001019d7;
      }
      else {
        if (lVar10 != 0) {
          puVar3 = (undefined8 *)
                   Memory::realloc_static((void *)(*(long *)this + -0x10),uVar6 + 0x11,false);
          if (puVar3 == (undefined8 *)0x0) goto LAB_00101b60;
          puVar8 = puVar3 + 2;
          *puVar3 = 1;
          *(undefined8 **)this = puVar8;
          lVar5 = puVar3[1];
          goto LAB_00101a71;
        }
        puVar3 = (undefined8 *)Memory::alloc_static(uVar6 + 0x11,false);
        if (puVar3 == (undefined8 *)0x0) {
          pcVar4 = "Parameter \"mem_new\" is null.";
          uVar7 = 0x171;
          pcVar9 = "resize";
          goto LAB_00101b48;
        }
        puVar8 = puVar3 + 2;
        *puVar3 = 1;
        puVar3[1] = 0;
        *(undefined8 **)this = puVar8;
        lVar5 = 0;
      }
      memset((void *)((long)puVar8 + lVar5 * 0xc),0,(param_1 - lVar5) * 0xc);
LAB_001019d7:
      puVar8[-1] = param_1;
      return;
    }
  }
  pcVar4 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
  uVar7 = 0x16a;
  pcVar9 = "resize";
LAB_00101b48:
  _err_print_error(pcVar9,"./core/templates/cowdata.h",uVar7,pcVar4,0,0);
  return;
}



/* MeshDataTool::_bind_compatibility_methods() */

void MeshDataTool::_bind_compatibility_methods(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  MethodBind *pMVar4;
  long *plVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_78 [2];
  long *local_68;
  undefined *local_58;
  undefined8 local_50;
  undefined **local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = &_LC58;
  local_48 = &local_58;
  local_50 = 0;
  D_METHODP((char *)local_78,(char ***)"commit_to_surface",(uint)&local_48);
  local_40 = (undefined1  [16])0x0;
  local_48 = (undefined **)0x0;
  pMVar4 = create_method_bind<MeshDataTool,Error,Ref<ArrayMesh>const&>
                     (commit_to_surface_bind_compat_81138);
  ClassDB::bind_methodfi(1,pMVar4,true,(MethodDefinition *)local_78,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_68;
  if (local_68 != (long *)0x0) {
    LOCK();
    plVar5 = local_68 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_68 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_68[-1];
      local_68 = (long *)0x0;
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
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MeshDataTool::_bind_methods() */

void MeshDataTool::_bind_methods(void)

{
  char cVar1;
  MethodBind *pMVar2;
  uint uVar3;
  long in_FS_OFFSET;
  MethodDefinition local_288 [32];
  undefined *local_268;
  undefined *puStack_260;
  undefined8 local_258;
  undefined *local_248;
  undefined *puStack_240;
  undefined8 local_238;
  undefined *local_228;
  char *pcStack_220;
  undefined8 local_218;
  undefined *local_208;
  undefined *puStack_200;
  undefined8 local_1f8;
  undefined *local_1e8;
  char *pcStack_1e0;
  undefined8 local_1d8;
  undefined *local_1c8;
  undefined *puStack_1c0;
  undefined8 local_1b8;
  undefined *local_1a8;
  char *pcStack_1a0;
  undefined8 local_198;
  undefined *local_188;
  char *pcStack_180;
  undefined8 local_178;
  undefined *local_168;
  char *pcStack_160;
  undefined8 local_158;
  undefined *local_148;
  undefined *puStack_140;
  undefined8 local_138;
  undefined *local_128;
  undefined *puStack_120;
  undefined8 local_118;
  undefined *local_108;
  char *pcStack_100;
  undefined8 local_f8;
  undefined *local_e8;
  char *pcStack_e0;
  undefined8 local_d8;
  undefined *local_c8;
  char *pcStack_c0;
  undefined8 local_b8;
  undefined *local_a8;
  char *pcStack_a0;
  undefined8 local_98;
  Variant *local_88;
  char *pcStack_80;
  undefined8 local_78;
  Variant **local_68;
  undefined1 auStack_60 [16];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHODP((char *)local_288,(char ***)"clear",0);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (Variant **)0x0;
  pMVar2 = create_method_bind<MeshDataTool>(clear);
  ClassDB::bind_methodfi(1,pMVar2,false,local_288,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_288);
  local_78 = 0;
  local_88 = (Variant *)&_LC58;
  pcStack_80 = "surface";
  auStack_60._0_8_ = &pcStack_80;
  uVar3 = (uint)(Variant *)&local_68;
  local_68 = &local_88;
  D_METHODP((char *)local_288,(char ***)"create_from_surface",uVar3);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (Variant **)0x0;
  pMVar2 = create_method_bind<MeshDataTool,Error,Ref<ArrayMesh>const&,int>(create_from_surface);
  ClassDB::bind_methodfi(1,pMVar2,false,local_288,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_288);
  local_98 = 0;
  local_a8 = &_LC58;
  pcStack_a0 = "compression_flags";
  auStack_60._0_8_ = &pcStack_a0;
  local_68 = (Variant **)&local_a8;
  D_METHODP((char *)local_288,(char ***)"commit_to_surface",uVar3);
  Variant::Variant((Variant *)&local_68,0);
  local_48 = (undefined1  [16])0x0;
  local_50 = 0;
  local_88 = (Variant *)&local_68;
  pMVar2 = create_method_bind<MeshDataTool,Error,Ref<ArrayMesh>const&,unsigned_long>
                     (commit_to_surface);
  ClassDB::bind_methodfi(1,pMVar2,false,local_288,&local_88,1);
  if (Variant::needs_deinit[(int)local_50] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_68];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_68];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_288);
  D_METHODP((char *)local_288,(char ***)"get_format",0);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (Variant **)0x0;
  pMVar2 = create_method_bind<MeshDataTool,unsigned_long>(get_format);
  ClassDB::bind_methodfi(1,pMVar2,false,local_288,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_288);
  D_METHODP((char *)local_288,(char ***)"get_vertex_count",0);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (Variant **)0x0;
  pMVar2 = create_method_bind<MeshDataTool,int>(get_vertex_count);
  ClassDB::bind_methodfi(1,pMVar2,false,local_288,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_288);
  D_METHODP((char *)local_288,(char ***)"get_edge_count",0);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (Variant **)0x0;
  pMVar2 = create_method_bind<MeshDataTool,int>(get_edge_count);
  ClassDB::bind_methodfi(1,pMVar2,false,local_288,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_288);
  D_METHODP((char *)local_288,(char ***)"get_face_count",0);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (Variant **)0x0;
  pMVar2 = create_method_bind<MeshDataTool,int>(get_face_count);
  ClassDB::bind_methodfi(1,pMVar2,false,local_288,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_288);
  local_b8 = 0;
  local_c8 = &_LC61;
  pcStack_c0 = "vertex";
  auStack_60._0_8_ = &pcStack_c0;
  local_68 = (Variant **)&local_c8;
  D_METHODP((char *)local_288,(char ***)"set_vertex",uVar3);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (Variant **)0x0;
  pMVar2 = create_method_bind<MeshDataTool,int,Vector3_const&>(set_vertex);
  ClassDB::bind_methodfi(1,pMVar2,false,local_288,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_288);
  local_88 = (Variant *)&_LC61;
  pcStack_80 = (char *)0x0;
  local_68 = &local_88;
  D_METHODP((char *)local_288,(char ***)"get_vertex",uVar3);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (Variant **)0x0;
  pMVar2 = create_method_bind<MeshDataTool,Vector3,int>(get_vertex);
  ClassDB::bind_methodfi(1,pMVar2,false,local_288,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_288);
  local_d8 = 0;
  local_e8 = &_LC61;
  pcStack_e0 = "normal";
  auStack_60._0_8_ = &pcStack_e0;
  local_68 = (Variant **)&local_e8;
  D_METHODP((char *)local_288,(char ***)"set_vertex_normal",uVar3);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (Variant **)0x0;
  pMVar2 = create_method_bind<MeshDataTool,int,Vector3_const&>(set_vertex_normal);
  ClassDB::bind_methodfi(1,pMVar2,false,local_288,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_288);
  local_88 = (Variant *)&_LC61;
  pcStack_80 = (char *)0x0;
  local_68 = &local_88;
  D_METHODP((char *)local_288,(char ***)"get_vertex_normal",uVar3);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (Variant **)0x0;
  pMVar2 = create_method_bind<MeshDataTool,Vector3,int>(get_vertex_normal);
  ClassDB::bind_methodfi(1,pMVar2,false,local_288,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_288);
  local_f8 = 0;
  local_108 = &_LC61;
  pcStack_100 = "tangent";
  auStack_60._0_8_ = &pcStack_100;
  local_68 = (Variant **)&local_108;
  D_METHODP((char *)local_288,(char ***)"set_vertex_tangent",uVar3);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (Variant **)0x0;
  pMVar2 = create_method_bind<MeshDataTool,int,Plane_const&>(set_vertex_tangent);
  ClassDB::bind_methodfi(1,pMVar2,false,local_288,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_288);
  local_88 = (Variant *)&_LC61;
  pcStack_80 = (char *)0x0;
  local_68 = &local_88;
  D_METHODP((char *)local_288,(char ***)"get_vertex_tangent",uVar3);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (Variant **)0x0;
  pMVar2 = create_method_bind<MeshDataTool,Plane,int>(get_vertex_tangent);
  ClassDB::bind_methodfi(1,pMVar2,false,local_288,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_288);
  local_118 = 0;
  local_128 = &_LC61;
  puStack_120 = &_LC69;
  auStack_60._0_8_ = &puStack_120;
  local_68 = (Variant **)&local_128;
  D_METHODP((char *)local_288,(char ***)"set_vertex_uv",uVar3);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (Variant **)0x0;
  pMVar2 = create_method_bind<MeshDataTool,int,Vector2_const&>(set_vertex_uv);
  ClassDB::bind_methodfi(1,pMVar2,false,local_288,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_288);
  local_88 = (Variant *)&_LC61;
  pcStack_80 = (char *)0x0;
  local_68 = &local_88;
  D_METHODP((char *)local_288,(char ***)"get_vertex_uv",uVar3);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (Variant **)0x0;
  pMVar2 = create_method_bind<MeshDataTool,Vector2,int>(get_vertex_uv);
  ClassDB::bind_methodfi(1,pMVar2,false,local_288,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_288);
  local_138 = 0;
  local_148 = &_LC61;
  puStack_140 = &_LC68;
  auStack_60._0_8_ = &puStack_140;
  local_68 = (Variant **)&local_148;
  D_METHODP((char *)local_288,(char ***)"set_vertex_uv2",uVar3);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (Variant **)0x0;
  pMVar2 = create_method_bind<MeshDataTool,int,Vector2_const&>(set_vertex_uv2);
  ClassDB::bind_methodfi(1,pMVar2,false,local_288,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_288);
  local_88 = (Variant *)&_LC61;
  pcStack_80 = (char *)0x0;
  local_68 = &local_88;
  D_METHODP((char *)local_288,(char ***)"get_vertex_uv2",uVar3);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (Variant **)0x0;
  pMVar2 = create_method_bind<MeshDataTool,Vector2,int>(get_vertex_uv2);
  ClassDB::bind_methodfi(1,pMVar2,false,local_288,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_288);
  local_158 = 0;
  local_168 = &_LC61;
  pcStack_160 = "color";
  auStack_60._0_8_ = &pcStack_160;
  local_68 = (Variant **)&local_168;
  D_METHODP((char *)local_288,(char ***)"set_vertex_color",uVar3);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (Variant **)0x0;
  pMVar2 = create_method_bind<MeshDataTool,int,Color_const&>(set_vertex_color);
  ClassDB::bind_methodfi(1,pMVar2,false,local_288,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_288);
  local_88 = (Variant *)&_LC61;
  pcStack_80 = (char *)0x0;
  local_68 = &local_88;
  D_METHODP((char *)local_288,(char ***)"get_vertex_color",uVar3);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (Variant **)0x0;
  pMVar2 = create_method_bind<MeshDataTool,Color,int>(get_vertex_color);
  ClassDB::bind_methodfi(1,pMVar2,false,local_288,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_288);
  local_178 = 0;
  local_188 = &_LC61;
  pcStack_180 = "bones";
  auStack_60._0_8_ = &pcStack_180;
  local_68 = (Variant **)&local_188;
  D_METHODP((char *)local_288,(char ***)"set_vertex_bones",uVar3);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (Variant **)0x0;
  pMVar2 = create_method_bind<MeshDataTool,int,Vector<int>const&>(set_vertex_bones);
  ClassDB::bind_methodfi(1,pMVar2,false,local_288,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_288);
  local_88 = (Variant *)&_LC61;
  pcStack_80 = (char *)0x0;
  local_68 = &local_88;
  D_METHODP((char *)local_288,(char ***)"get_vertex_bones",uVar3);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (Variant **)0x0;
  pMVar2 = create_method_bind<MeshDataTool,Vector<int>,int>(get_vertex_bones);
  ClassDB::bind_methodfi(1,pMVar2,false,local_288,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_288);
  local_198 = 0;
  local_1a8 = &_LC61;
  pcStack_1a0 = "weights";
  auStack_60._0_8_ = &pcStack_1a0;
  local_68 = (Variant **)&local_1a8;
  D_METHODP((char *)local_288,(char ***)"set_vertex_weights",uVar3);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (Variant **)0x0;
  pMVar2 = create_method_bind<MeshDataTool,int,Vector<float>const&>(set_vertex_weights);
  ClassDB::bind_methodfi(1,pMVar2,false,local_288,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_288);
  local_88 = (Variant *)&_LC61;
  pcStack_80 = (char *)0x0;
  local_68 = &local_88;
  D_METHODP((char *)local_288,(char ***)"get_vertex_weights",uVar3);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (Variant **)0x0;
  pMVar2 = create_method_bind<MeshDataTool,Vector<float>,int>(get_vertex_weights);
  ClassDB::bind_methodfi(1,pMVar2,false,local_288,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_288);
  local_1b8 = 0;
  local_1c8 = &_LC61;
  puStack_1c0 = &_LC62;
  auStack_60._0_8_ = &puStack_1c0;
  local_68 = (Variant **)&local_1c8;
  D_METHODP((char *)local_288,(char ***)"set_vertex_meta",uVar3);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (Variant **)0x0;
  pMVar2 = create_method_bind<MeshDataTool,int,Variant_const&>(set_vertex_meta);
  ClassDB::bind_methodfi(1,pMVar2,false,local_288,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_288);
  local_88 = (Variant *)&_LC61;
  pcStack_80 = (char *)0x0;
  local_68 = &local_88;
  D_METHODP((char *)local_288,(char ***)"get_vertex_meta",uVar3);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (Variant **)0x0;
  pMVar2 = create_method_bind<MeshDataTool,Variant,int>(get_vertex_meta);
  ClassDB::bind_methodfi(1,pMVar2,false,local_288,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_288);
  local_88 = (Variant *)&_LC61;
  pcStack_80 = (char *)0x0;
  local_68 = &local_88;
  D_METHODP((char *)local_288,(char ***)"get_vertex_edges",uVar3);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (Variant **)0x0;
  pMVar2 = create_method_bind<MeshDataTool,Vector<int>,int>(get_vertex_edges);
  ClassDB::bind_methodfi(1,pMVar2,false,local_288,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_288);
  local_88 = (Variant *)&_LC61;
  pcStack_80 = (char *)0x0;
  local_68 = &local_88;
  D_METHODP((char *)local_288,(char ***)"get_vertex_faces",uVar3);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (Variant **)0x0;
  pMVar2 = create_method_bind<MeshDataTool,Vector<int>,int>(get_vertex_faces);
  ClassDB::bind_methodfi(1,pMVar2,false,local_288,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_288);
  local_1d8 = 0;
  local_1e8 = &_LC61;
  pcStack_1e0 = "vertex";
  auStack_60._0_8_ = &pcStack_1e0;
  local_68 = (Variant **)&local_1e8;
  D_METHODP((char *)local_288,(char ***)"get_edge_vertex",uVar3);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (Variant **)0x0;
  pMVar2 = create_method_bind<MeshDataTool,int,int,int>(get_edge_vertex);
  ClassDB::bind_methodfi(1,pMVar2,false,local_288,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_288);
  local_88 = (Variant *)&_LC61;
  pcStack_80 = (char *)0x0;
  local_68 = &local_88;
  D_METHODP((char *)local_288,(char ***)"get_edge_faces",uVar3);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (Variant **)0x0;
  pMVar2 = create_method_bind<MeshDataTool,Vector<int>,int>(get_edge_faces);
  ClassDB::bind_methodfi(1,pMVar2,false,local_288,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_288);
  local_1f8 = 0;
  local_208 = &_LC61;
  puStack_200 = &_LC62;
  auStack_60._0_8_ = &puStack_200;
  local_68 = (Variant **)&local_208;
  D_METHODP((char *)local_288,(char ***)"set_edge_meta",uVar3);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (Variant **)0x0;
  pMVar2 = create_method_bind<MeshDataTool,int,Variant_const&>(set_edge_meta);
  ClassDB::bind_methodfi(1,pMVar2,false,local_288,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_288);
  local_88 = (Variant *)&_LC61;
  pcStack_80 = (char *)0x0;
  local_68 = &local_88;
  D_METHODP((char *)local_288,(char ***)"get_edge_meta",uVar3);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (Variant **)0x0;
  pMVar2 = create_method_bind<MeshDataTool,Variant,int>(get_edge_meta);
  ClassDB::bind_methodfi(1,pMVar2,false,local_288,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_288);
  local_218 = 0;
  local_228 = &_LC61;
  pcStack_220 = "vertex";
  auStack_60._0_8_ = &pcStack_220;
  local_68 = (Variant **)&local_228;
  D_METHODP((char *)local_288,(char ***)"get_face_vertex",uVar3);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (Variant **)0x0;
  pMVar2 = create_method_bind<MeshDataTool,int,int,int>(get_face_vertex);
  ClassDB::bind_methodfi(1,pMVar2,false,local_288,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_288);
  local_238 = 0;
  local_248 = &_LC61;
  puStack_240 = &_LC63;
  auStack_60._0_8_ = &puStack_240;
  local_68 = (Variant **)&local_248;
  D_METHODP((char *)local_288,(char ***)"get_face_edge",uVar3);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (Variant **)0x0;
  pMVar2 = create_method_bind<MeshDataTool,int,int,int>(get_face_edge);
  ClassDB::bind_methodfi(1,pMVar2,false,local_288,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_288);
  local_258 = 0;
  local_268 = &_LC61;
  puStack_260 = &_LC62;
  auStack_60._0_8_ = &puStack_260;
  local_68 = (Variant **)&local_268;
  D_METHODP((char *)local_288,(char ***)"set_face_meta",uVar3);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (Variant **)0x0;
  pMVar2 = create_method_bind<MeshDataTool,int,Variant_const&>(set_face_meta);
  ClassDB::bind_methodfi(1,pMVar2,false,local_288,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_288);
  local_88 = (Variant *)&_LC61;
  pcStack_80 = (char *)0x0;
  local_68 = &local_88;
  D_METHODP((char *)local_288,(char ***)"get_face_meta",uVar3);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (Variant **)0x0;
  pMVar2 = create_method_bind<MeshDataTool,Variant,int>(get_face_meta);
  ClassDB::bind_methodfi(1,pMVar2,false,local_288,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_288);
  local_88 = (Variant *)&_LC61;
  pcStack_80 = (char *)0x0;
  local_68 = &local_88;
  D_METHODP((char *)local_288,(char ***)"get_face_normal",uVar3);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (Variant **)0x0;
  pMVar2 = create_method_bind<MeshDataTool,Vector3,int>(get_face_normal);
  ClassDB::bind_methodfi(1,pMVar2,false,local_288,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_288);
  pcStack_80 = (char *)0x0;
  local_88 = (Variant *)0x1084ea;
  local_68 = &local_88;
  D_METHODP((char *)local_288,(char ***)"set_material",uVar3);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (Variant **)0x0;
  pMVar2 = create_method_bind<MeshDataTool,Ref<Material>const&>(set_material);
  ClassDB::bind_methodfi(1,pMVar2,false,local_288,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_288);
  D_METHODP((char *)local_288,(char ***)"get_material",0);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (Variant **)0x0;
  pMVar2 = create_method_bind<MeshDataTool,Ref<Material>>(get_material);
  ClassDB::bind_methodfi(1,pMVar2,false,local_288,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition(local_288);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<int>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<int>::_copy_on_write(CowData<int> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar4 = 0x10;
  __n = lVar1 * 4;
  if (__n != 0) {
    uVar4 = __n - 1 | __n - 1 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = (uVar4 | uVar4 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar4,false);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 1;
    puVar3[1] = lVar1;
    memcpy(puVar3 + 2,*(void **)this,__n);
    _unref(this);
    *(undefined8 **)this = puVar3 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
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



/* CowData<float>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<float>::_copy_on_write(CowData<float> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar4 = 0x10;
  __n = lVar1 * 4;
  if (__n != 0) {
    uVar4 = __n - 1 | __n - 1 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = (uVar4 | uVar4 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar4,false);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 1;
    puVar3[1] = lVar1;
    memcpy(puVar3 + 2,*(void **)this,__n);
    _unref(this);
    *(undefined8 **)this = puVar3 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* Vector<float>::push_back(float) [clone .isra.0] */

void __thiscall Vector<float>::push_back(Vector<float> *this,float param_1)

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
  iVar1 = CowData<float>::resize<false>((CowData<float> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<float>::_copy_on_write((CowData<float> *)(this + 8));
        *(float *)(*(long *)(this + 8) + lVar3 * 4) = param_1;
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



/* CowData<MeshDataTool::Vertex>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<MeshDataTool::Vertex>::_copy_on_write(CowData<MeshDataTool::Vertex> *this)

{
  Variant *this_00;
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar11 = 0x10;
  if (lVar2 * 0xa0 != 0) {
    uVar11 = lVar2 * 0xa0 - 1;
    uVar11 = uVar11 | uVar11 >> 1;
    uVar11 = uVar11 | uVar11 >> 2;
    uVar11 = uVar11 | uVar11 >> 4;
    uVar11 = uVar11 | uVar11 >> 8;
    uVar11 = uVar11 | uVar11 >> 0x10;
    uVar11 = (uVar11 | uVar11 >> 0x20) + 0x11;
  }
  puVar9 = (undefined8 *)Memory::alloc_static(uVar11,false);
  if (puVar9 != (undefined8 *)0x0) {
    lVar12 = 0;
    *puVar9 = 1;
    puVar9[1] = lVar2;
    puVar13 = puVar9 + 2;
    if (lVar2 != 0) {
      do {
        puVar10 = (undefined8 *)((long)puVar13 + *(long *)this + (-0x10 - (long)puVar9));
        uVar3 = *(undefined8 *)((long)puVar10 + 0xc);
        uVar6 = *(undefined8 *)((long)puVar10 + 0x14);
        uVar7 = puVar10[5];
        uVar8 = puVar10[6];
        *puVar13 = *puVar10;
        uVar1 = *(undefined4 *)(puVar10 + 1);
        *(undefined8 *)((long)puVar13 + 0xc) = uVar3;
        *(undefined8 *)((long)puVar13 + 0x14) = uVar6;
        *(undefined4 *)(puVar13 + 1) = uVar1;
        uVar3 = *(undefined8 *)((long)puVar10 + 0x1c);
        puVar13[5] = uVar7;
        puVar13[6] = uVar8;
        *(undefined8 *)((long)puVar13 + 0x1c) = uVar3;
        *(undefined4 *)((long)puVar13 + 0x24) = *(undefined4 *)((long)puVar10 + 0x24);
        puVar13[7] = puVar10[7];
        uVar3 = puVar10[8];
        puVar13[10] = 0;
        lVar4 = puVar10[10];
        puVar13[8] = uVar3;
        if (lVar4 != 0) {
          CowData<int>::_ref((CowData<int> *)(puVar13 + 10),(CowData *)(puVar10 + 10));
        }
        puVar13[0xc] = 0;
        if (puVar10[0xc] != 0) {
          CowData<float>::_ref((CowData<float> *)(puVar13 + 0xc),(CowData *)(puVar10 + 0xc));
        }
        puVar13[0xe] = 0;
        if (puVar10[0xe] != 0) {
          CowData<int>::_ref((CowData<int> *)(puVar13 + 0xe),(CowData *)(puVar10 + 0xe));
        }
        puVar13[0x10] = 0;
        if (puVar10[0x10] != 0) {
          CowData<int>::_ref((CowData<int> *)(puVar13 + 0x10),(CowData *)(puVar10 + 0x10));
        }
        this_00 = (Variant *)(puVar13 + 0x11);
        lVar12 = lVar12 + 1;
        puVar13 = puVar13 + 0x14;
        Variant::Variant(this_00,(Variant *)(puVar10 + 0x11));
      } while (lVar2 != lVar12);
    }
    _unref(this);
    *(undefined8 **)this = puVar9 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* MeshDataTool::set_vertex_bones(int, Vector<int> const&) */

void __thiscall MeshDataTool::set_vertex_bones(MeshDataTool *this,int param_1,Vector *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)param_1;
  lVar1 = *(long *)(this + 400);
  if (param_1 < 0) {
    if (lVar1 != 0) {
      lVar1 = *(long *)(lVar1 + -8);
      goto LAB_00103fa9;
    }
  }
  else if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar1) {
      if ((*(long *)(param_2 + 8) != 0) && (*(long *)(*(long *)(param_2 + 8) + -8) == 4)) {
        CowData<MeshDataTool::Vertex>::_copy_on_write((CowData<MeshDataTool::Vertex> *)(this + 400))
        ;
        lVar1 = lVar2 * 0xa0 + *(long *)(this + 400);
        if (*(long *)(lVar1 + 0x50) != *(long *)(param_2 + 8)) {
          CowData<int>::_ref((CowData<int> *)(lVar1 + 0x50),(CowData *)(param_2 + 8));
        }
        *(ulong *)(this + 0x180) = *(ulong *)(this + 0x180) | 0x400;
        return;
      }
      _err_print_error("set_vertex_bones","scene/resources/mesh_data_tool.cpp",0x1a9,
                       "Condition \"p_bones.size() != 4\" is true.",0,0);
      return;
    }
    goto LAB_00103fa9;
  }
  lVar1 = 0;
LAB_00103fa9:
  _err_print_index_error
            ("set_vertex_bones","scene/resources/mesh_data_tool.cpp",0x1a8,lVar2,lVar1,"p_idx",
             "vertices.size()","",false,false);
  return;
}



/* MeshDataTool::set_vertex_weights(int, Vector<float> const&) */

void __thiscall MeshDataTool::set_vertex_weights(MeshDataTool *this,int param_1,Vector *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)param_1;
  lVar1 = *(long *)(this + 400);
  if (param_1 < 0) {
    if (lVar1 != 0) {
      lVar1 = *(long *)(lVar1 + -8);
      goto LAB_001040c9;
    }
  }
  else if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar1) {
      if ((*(long *)(param_2 + 8) != 0) && (*(long *)(*(long *)(param_2 + 8) + -8) == 4)) {
        CowData<MeshDataTool::Vertex>::_copy_on_write((CowData<MeshDataTool::Vertex> *)(this + 400))
        ;
        lVar1 = lVar2 * 0xa0 + *(long *)(this + 400);
        if (*(long *)(lVar1 + 0x60) != *(long *)(param_2 + 8)) {
          CowData<float>::_ref((CowData<float> *)(lVar1 + 0x60),(CowData *)(param_2 + 8));
        }
        *(ulong *)(this + 0x180) = *(ulong *)(this + 0x180) | 0x800;
        return;
      }
      _err_print_error("set_vertex_weights","scene/resources/mesh_data_tool.cpp",0x1b5,
                       "Condition \"p_weights.size() != 4\" is true.",0,0);
      return;
    }
    goto LAB_001040c9;
  }
  lVar1 = 0;
LAB_001040c9:
  _err_print_index_error
            ("set_vertex_weights","scene/resources/mesh_data_tool.cpp",0x1b4,lVar2,lVar1,"p_idx",
             "vertices.size()","",false,false);
  return;
}



/* MeshDataTool::set_vertex_meta(int, Variant const&) */

void __thiscall MeshDataTool::set_vertex_meta(MeshDataTool *this,int param_1,Variant *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)param_1;
  lVar1 = *(long *)(this + 400);
  if (param_1 < 0) {
    if (lVar1 != 0) {
      lVar1 = *(long *)(lVar1 + -8);
      goto LAB_001041b9;
    }
  }
  else if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar1) {
      CowData<MeshDataTool::Vertex>::_copy_on_write((CowData<MeshDataTool::Vertex> *)(this + 400));
      Variant::operator=((Variant *)(lVar2 * 0xa0 + *(long *)(this + 400) + 0x88),param_2);
      return;
    }
    goto LAB_001041b9;
  }
  lVar1 = 0;
LAB_001041b9:
  _err_print_index_error
            ("set_vertex_meta","scene/resources/mesh_data_tool.cpp",0x1c0,lVar2,lVar1,"p_idx",
             "vertices.size()","",false,false);
  return;
}



/* MeshDataTool::set_vertex_color(int, Color const&) */

void __thiscall MeshDataTool::set_vertex_color(MeshDataTool *this,int param_1,Color *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)param_1;
  lVar2 = *(long *)(this + 400);
  if (param_1 < 0) {
    if (lVar2 != 0) {
      lVar2 = *(long *)(lVar2 + -8);
      goto LAB_00104279;
    }
  }
  else if (lVar2 != 0) {
    lVar2 = *(long *)(lVar2 + -8);
    if (lVar3 < lVar2) {
      CowData<MeshDataTool::Vertex>::_copy_on_write((CowData<MeshDataTool::Vertex> *)(this + 400));
      uVar1 = *(undefined8 *)(param_2 + 8);
      lVar2 = lVar3 * 0xa0 + *(long *)(this + 400);
      *(undefined8 *)(lVar2 + 0xc) = *(undefined8 *)param_2;
      *(undefined8 *)(lVar2 + 0x14) = uVar1;
      *(ulong *)(this + 0x180) = *(ulong *)(this + 0x180) | 8;
      return;
    }
    goto LAB_00104279;
  }
  lVar2 = 0;
LAB_00104279:
  _err_print_index_error
            ("set_vertex_color","scene/resources/mesh_data_tool.cpp",0x19d,lVar3,lVar2,"p_idx",
             "vertices.size()","",false,false);
  return;
}



/* MeshDataTool::set_vertex_uv2(int, Vector2 const&) */

void __thiscall MeshDataTool::set_vertex_uv2(MeshDataTool *this,int param_1,Vector2 *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)param_1;
  lVar1 = *(long *)(this + 400);
  if (param_1 < 0) {
    if (lVar1 != 0) {
      lVar1 = *(long *)(lVar1 + -8);
      goto LAB_00104339;
    }
  }
  else if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar1) {
      CowData<MeshDataTool::Vertex>::_copy_on_write((CowData<MeshDataTool::Vertex> *)(this + 400));
      *(undefined8 *)(lVar2 * 0xa0 + *(long *)(this + 400) + 0x40) = *(undefined8 *)param_2;
      *(ulong *)(this + 0x180) = *(ulong *)(this + 0x180) | 0x20;
      return;
    }
    goto LAB_00104339;
  }
  lVar1 = 0;
LAB_00104339:
  _err_print_index_error
            ("set_vertex_uv2","scene/resources/mesh_data_tool.cpp",0x192,lVar2,lVar1,"p_idx",
             "vertices.size()","",false,false);
  return;
}



/* MeshDataTool::set_vertex_uv(int, Vector2 const&) */

void __thiscall MeshDataTool::set_vertex_uv(MeshDataTool *this,int param_1,Vector2 *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)param_1;
  lVar1 = *(long *)(this + 400);
  if (param_1 < 0) {
    if (lVar1 != 0) {
      lVar1 = *(long *)(lVar1 + -8);
      goto LAB_001043f9;
    }
  }
  else if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar1) {
      CowData<MeshDataTool::Vertex>::_copy_on_write((CowData<MeshDataTool::Vertex> *)(this + 400));
      *(undefined8 *)(lVar2 * 0xa0 + *(long *)(this + 400) + 0x38) = *(undefined8 *)param_2;
      *(ulong *)(this + 0x180) = *(ulong *)(this + 0x180) | 0x10;
      return;
    }
    goto LAB_001043f9;
  }
  lVar1 = 0;
LAB_001043f9:
  _err_print_index_error
            ("set_vertex_uv","scene/resources/mesh_data_tool.cpp",0x187,lVar2,lVar1,"p_idx",
             "vertices.size()","",false,false);
  return;
}



/* MeshDataTool::set_vertex_tangent(int, Plane const&) */

void __thiscall MeshDataTool::set_vertex_tangent(MeshDataTool *this,int param_1,Plane *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)param_1;
  lVar2 = *(long *)(this + 400);
  if (param_1 < 0) {
    if (lVar2 != 0) {
      lVar2 = *(long *)(lVar2 + -8);
      goto LAB_001044b9;
    }
  }
  else if (lVar2 != 0) {
    lVar2 = *(long *)(lVar2 + -8);
    if (lVar3 < lVar2) {
      CowData<MeshDataTool::Vertex>::_copy_on_write((CowData<MeshDataTool::Vertex> *)(this + 400));
      uVar1 = *(undefined8 *)(param_2 + 8);
      lVar2 = lVar3 * 0xa0 + *(long *)(this + 400);
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)param_2;
      *(undefined8 *)(lVar2 + 0x30) = uVar1;
      *(ulong *)(this + 0x180) = *(ulong *)(this + 0x180) | 4;
      return;
    }
    goto LAB_001044b9;
  }
  lVar2 = 0;
LAB_001044b9:
  _err_print_index_error
            ("set_vertex_tangent","scene/resources/mesh_data_tool.cpp",0x17c,lVar3,lVar2,"p_idx",
             "vertices.size()","",false,false);
  return;
}



/* MeshDataTool::set_vertex_normal(int, Vector3 const&) */

void __thiscall MeshDataTool::set_vertex_normal(MeshDataTool *this,int param_1,Vector3 *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)param_1;
  lVar1 = *(long *)(this + 400);
  if (param_1 < 0) {
    if (lVar1 != 0) {
      lVar1 = *(long *)(lVar1 + -8);
      goto LAB_00104581;
    }
  }
  else if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar1) {
      CowData<MeshDataTool::Vertex>::_copy_on_write((CowData<MeshDataTool::Vertex> *)(this + 400));
      lVar1 = lVar2 * 0xa0 + *(long *)(this + 400);
      *(undefined8 *)(lVar1 + 0x1c) = *(undefined8 *)param_2;
      *(undefined4 *)(lVar1 + 0x24) = *(undefined4 *)(param_2 + 8);
      *(ulong *)(this + 0x180) = *(ulong *)(this + 0x180) | 2;
      return;
    }
    goto LAB_00104581;
  }
  lVar1 = 0;
LAB_00104581:
  _err_print_index_error
            ("set_vertex_normal","scene/resources/mesh_data_tool.cpp",0x171,lVar2,lVar1,"p_idx",
             "vertices.size()","",false,false);
  return;
}



/* MeshDataTool::set_vertex(int, Vector3 const&) */

void __thiscall MeshDataTool::set_vertex(MeshDataTool *this,int param_1,Vector3 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)param_1;
  lVar2 = *(long *)(this + 400);
  if (param_1 < 0) {
    if (lVar2 != 0) {
      lVar2 = *(long *)(lVar2 + -8);
      goto LAB_00104639;
    }
  }
  else if (lVar2 != 0) {
    lVar2 = *(long *)(lVar2 + -8);
    if (lVar3 < lVar2) {
      CowData<MeshDataTool::Vertex>::_copy_on_write((CowData<MeshDataTool::Vertex> *)(this + 400));
      puVar1 = (undefined8 *)(lVar3 * 0xa0 + *(long *)(this + 400));
      *puVar1 = *(undefined8 *)param_2;
      *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 8);
      return;
    }
    goto LAB_00104639;
  }
  lVar2 = 0;
LAB_00104639:
  _err_print_index_error
            ("set_vertex","scene/resources/mesh_data_tool.cpp",0x167,lVar3,lVar2,"p_idx",
             "vertices.size()","",false,false);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MeshDataTool::commit_to_surface(Ref<ArrayMesh> const&, unsigned long) */

undefined8 __thiscall MeshDataTool::commit_to_surface(MeshDataTool *this,Ref *param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  Variant *pVVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined4 *puVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  int iVar19;
  long lVar20;
  int iVar21;
  int iVar22;
  long lVar23;
  long lVar24;
  long *plVar25;
  long in_FS_OFFSET;
  bool bVar26;
  Variant *local_168;
  long local_160;
  Array local_110 [8];
  long *local_108;
  Array local_100 [8];
  Dictionary local_f8 [8];
  long local_f0;
  Vector local_e8 [8];
  long local_e0;
  Vector local_d8 [8];
  long local_d0;
  Vector local_c8 [8];
  long local_c0;
  Vector local_b8 [8];
  long local_b0;
  Vector local_a8 [8];
  long local_a0;
  Vector local_98 [8];
  undefined8 *local_90;
  Vector local_88 [8];
  long local_80;
  Vector local_78 [8];
  long local_70;
  Vector local_68 [8];
  undefined4 *local_60;
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)param_1 == 0) {
    _err_print_error("commit_to_surface","scene/resources/mesh_data_tool.cpp",0xc3,
                     "Condition \"p_mesh.is_null()\" is true. Returning: ERR_INVALID_PARAMETER",0,0)
    ;
    uVar10 = 0x1f;
    goto LAB_00104e12;
  }
  Array::Array(local_110);
  iVar19 = (int)local_110;
  Array::resize(iVar19);
  if (*(long *)(this + 400) == 0) {
    lVar23 = 0;
    iVar22 = 0;
  }
  else {
    iVar22 = (int)*(undefined8 *)(*(long *)(this + 400) + -8);
    lVar23 = (long)iVar22;
  }
  local_e0 = 0;
  local_d0 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_a0 = 0;
  local_90 = (undefined8 *)0x0;
  local_80 = 0;
  local_70 = 0;
  local_60 = (undefined4 *)0x0;
  CowData<Vector3>::resize<false>((CowData<Vector3> *)&local_e0,lVar23);
  CowData<Vector3>::_copy_on_write((CowData<Vector3> *)&local_e0);
  lVar4 = local_e0;
  uVar16 = *(ulong *)(this + 0x180);
  lVar24 = 0;
  if ((uVar16 & 2) != 0) {
    CowData<Vector3>::resize<false>((CowData<Vector3> *)&local_d0,lVar23);
    CowData<Vector3>::_copy_on_write((CowData<Vector3> *)&local_d0);
    uVar16 = *(ulong *)(this + 0x180);
    lVar24 = local_d0;
  }
  lVar15 = 0;
  if ((uVar16 & 4) != 0) {
    CowData<float>::resize<false>((CowData<float> *)&local_c0,(long)(iVar22 * 4));
    CowData<float>::_copy_on_write((CowData<float> *)&local_c0);
    uVar16 = *(ulong *)(this + 0x180);
    lVar15 = local_c0;
  }
  local_168 = (Variant *)0x0;
  if ((uVar16 & 0x10) != 0) {
    CowData<Vector2>::resize<false>((CowData<Vector2> *)&local_b0,lVar23);
    CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_b0);
    local_168 = (Variant *)local_b0;
    uVar16 = *(ulong *)(this + 0x180);
  }
  local_160 = 0;
  if ((uVar16 & 0x20) != 0) {
    CowData<Vector2>::resize<false>((CowData<Vector2> *)&local_a0,lVar23);
    CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_a0);
    local_160 = local_a0;
    uVar16 = *(ulong *)(this + 0x180);
  }
  puVar7 = local_90;
  puVar17 = (undefined8 *)0x0;
  if ((uVar16 & 8) != 0) {
    if (lVar23 < 0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x157);
    }
    else if (local_90 == (undefined8 *)0x0) {
      if (lVar23 != 0) {
        CowData<Color>::_copy_on_write((CowData<Color> *)&local_90);
        lVar12 = 0;
LAB_00104e96:
        uVar16 = (long)iVar22 * 0x10 - 1;
        uVar16 = uVar16 | uVar16 >> 1;
        uVar16 = uVar16 | uVar16 >> 2;
        uVar16 = uVar16 >> 4 | uVar16;
        uVar16 = uVar16 | uVar16 >> 8;
        uVar16 = uVar16 | uVar16 >> 0x10;
        lVar18 = (uVar16 | uVar16 >> 0x20) + 1;
        if (lVar12 < lVar23) {
LAB_00104f08:
          if (lVar12 == 0) {
            puVar7 = (undefined8 *)Memory::alloc_static(lVar18 + 0x10,false);
            if (puVar7 == (undefined8 *)0x0) {
              _err_print_error("resize","./core/templates/cowdata.h",0x171);
            }
            else {
              local_90 = puVar7 + 2;
              *puVar7 = 1;
              puVar7[1] = 0;
              lVar12 = 0;
LAB_00104b8a:
              uVar3 = _UNK_0011e678;
              uVar10 = __LC104;
              if (lVar12 < lVar23) {
                puVar17 = local_90 + lVar12 * 2;
                puVar7 = puVar17 + (lVar23 - lVar12) * 2;
                do {
                  *puVar17 = uVar10;
                  puVar17[1] = uVar3;
                  puVar17 = puVar17 + 2;
                } while (puVar7 != puVar17);
              }
              local_90[-1] = (long)iVar22;
            }
          }
          else {
            iVar21 = CowData<Color>::_realloc((CowData<Color> *)&local_90,lVar18);
            if (iVar21 == 0) {
LAB_00104b75:
              if (local_90 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              lVar12 = local_90[-1];
              goto LAB_00104b8a;
            }
          }
        }
        else {
LAB_00104ee5:
          iVar21 = CowData<Color>::_realloc((CowData<Color> *)&local_90,lVar18);
          if (iVar21 == 0) goto LAB_00104e59;
        }
      }
    }
    else {
      lVar12 = local_90[-1];
      if (lVar12 != lVar23) {
        if (lVar23 == 0) {
          LOCK();
          plVar25 = local_90 + -2;
          *plVar25 = *plVar25 + -1;
          UNLOCK();
          if (*plVar25 == 0) {
            local_90 = (undefined8 *)0x0;
            Memory::free_static(puVar7 + -2,false);
          }
          else {
            local_90 = (undefined8 *)0x0;
          }
        }
        else {
          CowData<Color>::_copy_on_write((CowData<Color> *)&local_90);
          uVar16 = (long)iVar22 * 0x10 - 1;
          uVar16 = uVar16 >> 1 | uVar16;
          uVar16 = uVar16 >> 2 | uVar16;
          uVar16 = uVar16 >> 4 | uVar16;
          uVar16 = uVar16 >> 8 | uVar16;
          uVar16 = uVar16 >> 0x10 | uVar16;
          uVar16 = uVar16 >> 0x20 | uVar16;
          lVar18 = uVar16 + 1;
          if (lVar12 * 0x10 == 0) goto LAB_00104e96;
          uVar11 = lVar12 * 0x10 - 1;
          uVar11 = uVar11 | uVar11 >> 1;
          uVar11 = uVar11 | uVar11 >> 2;
          uVar11 = uVar11 | uVar11 >> 4;
          uVar11 = uVar11 | uVar11 >> 8;
          uVar11 = uVar11 | uVar11 >> 0x10;
          uVar11 = uVar11 | uVar11 >> 0x20;
          if (lVar12 < lVar23) {
            if (uVar11 != uVar16) goto LAB_00104f08;
            goto LAB_00104b75;
          }
          if (uVar11 != uVar16) goto LAB_00104ee5;
LAB_00104e59:
          if (local_90 == (undefined8 *)0x0) {
            uVar10 = FUN_00108b60();
            return uVar10;
          }
          local_90[-1] = (long)iVar22;
        }
      }
    }
    CowData<Color>::_copy_on_write((CowData<Color> *)&local_90);
    uVar16 = *(ulong *)(this + 0x180);
    puVar17 = local_90;
  }
  lVar23 = 0;
  if ((uVar16 & 0x400) != 0) {
    CowData<int>::resize<false>((CowData<int> *)&local_80,(long)(iVar22 * 4));
    CowData<int>::_copy_on_write((CowData<int> *)&local_80);
    uVar16 = *(ulong *)(this + 0x180);
    lVar23 = local_80;
  }
  lVar12 = 0;
  if ((uVar16 & 0x800) != 0) {
    CowData<float>::resize<false>((CowData<float> *)&local_70,(long)(iVar22 * 4));
    CowData<float>::_copy_on_write((CowData<float> *)&local_70);
    lVar12 = local_70;
  }
  if (iVar22 < 1) {
LAB_00104f65:
    if (*(long *)(this + 0x1b0) == 0) {
      CowData<int>::resize<false>((CowData<int> *)&local_60,0);
      CowData<int>::_copy_on_write((CowData<int> *)&local_60);
    }
    else {
      iVar22 = (int)*(undefined8 *)(*(long *)(this + 0x1b0) + -8);
      CowData<int>::resize<false>((CowData<int> *)&local_60,(long)(iVar22 * 3));
      CowData<int>::_copy_on_write((CowData<int> *)&local_60);
      if (0 < iVar22) {
        puVar8 = *(undefined4 **)(this + 0x1b0);
        if (puVar8 == (undefined4 *)0x0) {
          uVar16 = 0;
          lVar18 = 0;
          goto LAB_00104cc6;
        }
        lVar18 = *(long *)(puVar8 + -2);
        puVar14 = local_60;
        uVar16 = 0;
        do {
          if (lVar18 <= (long)uVar16) goto LAB_00104cc6;
          *puVar14 = *puVar8;
          puVar14[1] = puVar8[1];
          puVar14[2] = puVar8[2];
          bVar26 = uVar16 != iVar22 - 1;
          puVar8 = puVar8 + 0xc;
          puVar14 = puVar14 + 3;
          uVar16 = uVar16 + 1;
        } while (bVar26);
      }
    }
    Variant::Variant((Variant *)local_58,local_e8);
    pVVar9 = (Variant *)Array::operator[](iVar19);
    Variant::operator=(pVVar9,(Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_58,local_68);
    pVVar9 = (Variant *)Array::operator[](iVar19);
    Variant::operator=(pVVar9,(Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((local_d0 != 0) && (*(long *)(local_d0 + -8) != 0)) {
      Variant::Variant((Variant *)local_58,local_d8);
      pVVar9 = (Variant *)Array::operator[](iVar19);
      Variant::operator=(pVVar9,(Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    if ((local_90 != (undefined8 *)0x0) && (local_90[-1] != 0)) {
      Variant::Variant((Variant *)local_58,local_98);
      pVVar9 = (Variant *)Array::operator[](iVar19);
      Variant::operator=(pVVar9,(Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    if ((local_b0 != 0) && (*(long *)(local_b0 + -8) != 0)) {
      Variant::Variant((Variant *)local_58,local_b8);
      pVVar9 = (Variant *)Array::operator[](iVar19);
      Variant::operator=(pVVar9,(Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    if ((local_a0 != 0) && (*(long *)(local_a0 + -8) != 0)) {
      Variant::Variant((Variant *)local_58,local_a8);
      pVVar9 = (Variant *)Array::operator[](iVar19);
      Variant::operator=(pVVar9,(Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    if ((local_c0 != 0) && (*(long *)(local_c0 + -8) != 0)) {
      Variant::Variant((Variant *)local_58,local_c8);
      pVVar9 = (Variant *)Array::operator[](iVar19);
      Variant::operator=(pVVar9,(Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    if ((local_80 != 0) && (*(long *)(local_80 + -8) != 0)) {
      Variant::Variant((Variant *)local_58,local_88);
      pVVar9 = (Variant *)Array::operator[](iVar19);
      Variant::operator=(pVVar9,(Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    if ((local_70 != 0) && (*(long *)(local_70 + -8) != 0)) {
      Variant::Variant((Variant *)local_58,local_78);
      pVVar9 = (Variant *)Array::operator[](iVar19);
      Variant::operator=(pVVar9,(Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    local_108 = (long *)0x0;
    plVar25 = *(long **)param_1;
    if (plVar25 != (long *)0x0) {
      local_f0 = 0;
      local_108 = plVar25;
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
        local_108 = (long *)0x0;
        plVar25 = (long *)0x0;
      }
      Ref<ArrayMesh>::unref((Ref<ArrayMesh> *)&local_f0);
    }
    local_168 = (Variant *)&local_f0;
    uVar6 = (**(code **)(*plVar25 + 0x1c8))(plVar25);
    Dictionary::Dictionary(local_f8);
    Array::Array(local_100);
    local_58[0] = 0;
    local_58[1] = 0;
    local_f0 = 0;
    local_50 = (undefined1  [16])0x0;
    Array::set_typed((uint)local_100,(StringName *)0x1c,local_168);
    if ((StringName::configured != '\0') && (local_f0 != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    ArrayMesh::add_surface_from_arrays(plVar25,3,local_110,local_100,local_f8,param_2);
    Array::~Array(local_100);
    Dictionary::~Dictionary(local_f8);
    (**(code **)(*plVar25 + 0x208))(plVar25,uVar6,this + 0x1b8);
    Ref<ArrayMesh>::unref((Ref<ArrayMesh> *)&local_108);
    CowData<int>::_unref((CowData<int> *)&local_60);
    CowData<float>::_unref((CowData<float> *)&local_70);
    CowData<int>::_unref((CowData<int> *)&local_80);
    CowData<Color>::_unref((CowData<Color> *)&local_90);
    CowData<Vector2>::_unref((CowData<Vector2> *)&local_a0);
    CowData<Vector2>::_unref((CowData<Vector2> *)&local_b0);
    CowData<float>::_unref((CowData<float> *)&local_c0);
    CowData<Vector3>::_unref((CowData<Vector3> *)&local_d0);
    CowData<Vector3>::_unref((CowData<Vector3> *)&local_e0);
    Array::~Array(local_110);
    uVar10 = 0;
LAB_00104e12:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return uVar10;
  }
  puVar7 = *(undefined8 **)(this + 400);
  if (puVar7 == (undefined8 *)0x0) {
    lVar18 = 0;
    uVar16 = 0;
  }
  else {
    lVar18 = puVar7[-1];
    lVar13 = 0;
    uVar11 = 0;
    iVar21 = 0;
    uVar16 = 0;
    if (0 < lVar18) {
      do {
        *(undefined8 *)(lVar4 + lVar13) = *puVar7;
        *(undefined4 *)(lVar4 + 8 + lVar13) = *(undefined4 *)(puVar7 + 1);
        if (lVar24 != 0) {
          *(undefined8 *)(lVar24 + lVar13) = *(undefined8 *)((long)puVar7 + 0x1c);
          *(undefined4 *)(lVar24 + 8 + lVar13) = *(undefined4 *)((long)puVar7 + 0x24);
        }
        if (lVar15 != 0) {
          lVar20 = (long)iVar21 * 4;
          *(undefined4 *)(lVar15 + (long)iVar21 * 4) = *(undefined4 *)(puVar7 + 5);
          *(undefined4 *)(lVar15 + 4 + lVar20) = *(undefined4 *)((long)puVar7 + 0x2c);
          *(undefined4 *)(lVar15 + 8 + lVar20) = *(undefined4 *)(puVar7 + 6);
          *(undefined4 *)(lVar15 + 0xc + lVar20) = *(undefined4 *)((long)puVar7 + 0x34);
        }
        if (local_168 != (Variant *)0x0) {
          *(undefined8 *)((long)local_168 + uVar11 * 8) = puVar7[7];
        }
        if (local_160 != 0) {
          *(undefined8 *)(local_160 + uVar11 * 8) = puVar7[8];
        }
        if (puVar17 != (undefined8 *)0x0) {
          uVar10 = *(undefined8 *)((long)puVar7 + 0x14);
          puVar17[uVar11 * 2] = *(undefined8 *)((long)puVar7 + 0xc);
          (puVar17 + uVar11 * 2)[1] = uVar10;
        }
        if (lVar12 != 0) {
          puVar8 = (undefined4 *)puVar7[0xc];
          if (puVar8 == (undefined4 *)0x0) {
LAB_00104d30:
            lVar20 = 0;
          }
          else {
            lVar20 = *(long *)(puVar8 + -2);
            if (0 < lVar20) {
              lVar1 = (long)iVar21 * 4;
              *(undefined4 *)(lVar12 + (long)iVar21 * 4) = *puVar8;
              if (lVar20 == 1) {
LAB_00104d58:
                uVar16 = 1;
                lVar18 = 1;
              }
              else {
                *(undefined4 *)(lVar12 + 4 + lVar1) = puVar8[1];
                if (lVar20 == 2) {
LAB_00104d88:
                  uVar16 = 2;
                  lVar18 = 2;
                }
                else {
                  *(undefined4 *)(lVar12 + 8 + lVar1) = puVar8[2];
                  if (lVar20 != 3) {
                    *(undefined4 *)(lVar12 + 0xc + lVar1) = puVar8[3];
                    goto LAB_00104961;
                  }
LAB_00104db8:
                  uVar16 = 3;
                  lVar18 = 3;
                }
              }
              break;
            }
          }
LAB_00104d33:
          uVar16 = 0;
          lVar18 = lVar20;
          break;
        }
LAB_00104961:
        if (lVar23 != 0) {
          puVar8 = (undefined4 *)puVar7[10];
          if (puVar8 == (undefined4 *)0x0) goto LAB_00104d30;
          lVar20 = *(long *)(puVar8 + -2);
          if (lVar20 < 1) goto LAB_00104d33;
          lVar1 = (long)iVar21 * 4;
          *(undefined4 *)(lVar23 + (long)iVar21 * 4) = *puVar8;
          if (lVar20 == 1) goto LAB_00104d58;
          *(undefined4 *)(lVar23 + 4 + lVar1) = puVar8[1];
          if (lVar20 == 2) goto LAB_00104d88;
          *(undefined4 *)(lVar23 + 8 + lVar1) = puVar8[2];
          if (lVar20 == 3) goto LAB_00104db8;
          *(undefined4 *)(lVar23 + 0xc + lVar1) = puVar8[3];
        }
        uVar11 = uVar11 + 1;
        iVar21 = iVar21 + 4;
        puVar7 = puVar7 + 0x14;
        lVar13 = lVar13 + 0xc;
        if (uVar11 == (long)iVar22) goto LAB_00104f65;
        uVar16 = uVar11;
      } while ((long)uVar11 < lVar18);
    }
  }
LAB_00104cc6:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,uVar16,lVar18,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* MeshDataTool::commit_to_surface_bind_compat_81138(Ref<ArrayMesh> const&) */

void __thiscall MeshDataTool::commit_to_surface_bind_compat_81138(MeshDataTool *this,Ref *param_1)

{
  commit_to_surface(this,param_1,0);
  return;
}



/* CowData<MeshDataTool::Edge>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<MeshDataTool::Edge>::_copy_on_write(CowData<MeshDataTool::Edge> *this)

{
  Variant *this_00;
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar1 * 0x30 != 0) {
    uVar7 = lVar1 * 0x30 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 != (undefined8 *)0x0) {
    lVar8 = 0;
    *puVar5 = 1;
    puVar5[1] = lVar1;
    puVar9 = puVar5 + 2;
    if (lVar1 != 0) {
      do {
        puVar6 = (undefined8 *)((long)puVar9 + *(long *)this + (-0x10 - (long)puVar5));
        uVar2 = *puVar6;
        puVar9[2] = 0;
        lVar3 = puVar6[2];
        *puVar9 = uVar2;
        if (lVar3 != 0) {
          CowData<int>::_ref((CowData<int> *)(puVar9 + 2),(CowData *)(puVar6 + 2));
        }
        this_00 = (Variant *)(puVar9 + 3);
        lVar8 = lVar8 + 1;
        puVar9 = puVar9 + 6;
        Variant::Variant(this_00,(Variant *)(puVar6 + 3));
      } while (lVar1 != lVar8);
    }
    _unref(this);
    *(undefined8 **)this = puVar5 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* MeshDataTool::set_edge_meta(int, Variant const&) */

void __thiscall MeshDataTool::set_edge_meta(MeshDataTool *this,int param_1,Variant *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)param_1;
  lVar1 = *(long *)(this + 0x1a0);
  if (param_1 < 0) {
    if (lVar1 != 0) {
      lVar1 = *(long *)(lVar1 + -8);
      goto LAB_00105809;
    }
  }
  else if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar1) {
      CowData<MeshDataTool::Edge>::_copy_on_write((CowData<MeshDataTool::Edge> *)(this + 0x1a0));
      Variant::operator=((Variant *)(lVar2 * 0x30 + *(long *)(this + 0x1a0) + 0x18),param_2);
      return;
    }
    goto LAB_00105809;
  }
  lVar1 = 0;
LAB_00105809:
  _err_print_index_error
            ("set_edge_meta","scene/resources/mesh_data_tool.cpp",0x1df,lVar2,lVar1,"p_idx",
             "edges.size()","",false,false);
  return;
}



/* CowData<MeshDataTool::Face>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<MeshDataTool::Face>::_copy_on_write(CowData<MeshDataTool::Face> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  
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
  if (lVar1 * 0x30 != 0) {
    uVar5 = lVar1 * 0x30 - 1;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar3 != (undefined8 *)0x0) {
    lVar7 = 0;
    *puVar3 = 1;
    puVar3[1] = lVar1;
    puVar6 = puVar3 + 2;
    if (lVar1 != 0) {
      do {
        puVar4 = (undefined8 *)((long)puVar6 + *(long *)this + (-0x10 - (long)puVar3));
        lVar7 = lVar7 + 1;
        *puVar6 = *puVar4;
        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar4 + 1);
        *(undefined8 *)((long)puVar6 + 0xc) = *(undefined8 *)((long)puVar4 + 0xc);
        *(undefined4 *)((long)puVar6 + 0x14) = *(undefined4 *)((long)puVar4 + 0x14);
        Variant::Variant((Variant *)(puVar6 + 3),(Variant *)(puVar4 + 3));
        puVar6 = puVar6 + 6;
      } while (lVar1 != lVar7);
    }
    _unref(this);
    *(undefined8 **)this = puVar3 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* MeshDataTool::set_face_meta(int, Variant const&) */

void __thiscall MeshDataTool::set_face_meta(MeshDataTool *this,int param_1,Variant *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)param_1;
  lVar1 = *(long *)(this + 0x1b0);
  if (param_1 < 0) {
    if (lVar1 != 0) {
      lVar1 = *(long *)(lVar1 + -8);
      goto LAB_00105a19;
    }
  }
  else if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar1) {
      CowData<MeshDataTool::Face>::_copy_on_write((CowData<MeshDataTool::Face> *)(this + 0x1b0));
      Variant::operator=((Variant *)(lVar2 * 0x30 + *(long *)(this + 0x1b0) + 0x18),param_2);
      return;
    }
    goto LAB_00105a19;
  }
  lVar1 = 0;
LAB_00105a19:
  _err_print_index_error
            ("set_face_meta","scene/resources/mesh_data_tool.cpp",0x1f5,lVar2,lVar1,"p_face",
             "faces.size()","",false,false);
  return;
}



/* MeshDataTool::clear() */

void __thiscall MeshDataTool::clear(MeshDataTool *this)

{
  Object *pOVar1;
  char cVar2;
  
  if ((*(long *)(this + 400) != 0) && (*(long *)(*(long *)(this + 400) + -8) != 0)) {
    CowData<MeshDataTool::Vertex>::_unref((CowData<MeshDataTool::Vertex> *)(this + 400));
  }
  if ((*(long *)(this + 0x1a0) != 0) && (*(long *)(*(long *)(this + 0x1a0) + -8) != 0)) {
    CowData<MeshDataTool::Edge>::_unref((CowData<MeshDataTool::Edge> *)(this + 0x1a0));
  }
  if ((*(long *)(this + 0x1b0) != 0) && (*(long *)(*(long *)(this + 0x1b0) + -8) != 0)) {
    CowData<MeshDataTool::Face>::_unref((CowData<MeshDataTool::Face> *)(this + 0x1b0));
  }
  pOVar1 = *(Object **)(this + 0x1b8);
  if (pOVar1 != (Object *)0x0) {
    *(undefined8 *)(this + 0x1b8) = 0;
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  *(undefined8 *)(this + 0x180) = 0;
  return;
}



/* MeshDataTool::MeshDataTool() */

void __thiscall MeshDataTool::MeshDataTool(MeshDataTool *this)

{
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined ***)this = &PTR__initialize_classv_0011da30;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined1 (*) [16])(this + 0x1b0) = (undefined1  [16])0x0;
  clear(this);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MeshDataTool::create_from_surface(Ref<ArrayMesh> const&, int) */

undefined8 __thiscall MeshDataTool::create_from_surface(MeshDataTool *this,Ref *param_1,int param_2)

{
  Object *pOVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined8 uVar11;
  int *piVar12;
  CowData<MeshDataTool::Vertex> *this_00;
  ulong uVar13;
  undefined8 *puVar14;
  long *plVar15;
  int *piVar16;
  undefined4 *puVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long lVar20;
  int iVar21;
  ulong uVar22;
  long lVar23;
  Object *pOVar24;
  ulong uVar25;
  ulong uVar26;
  int iVar27;
  long *plVar28;
  long lVar29;
  long in_FS_OFFSET;
  bool bVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  CowData<int> *local_270;
  long local_268;
  long local_260;
  long local_248;
  long local_240;
  CowData<int> *local_238;
  long local_230;
  long local_218;
  uint local_1d4;
  Array local_1d0 [8];
  Variant local_1c8 [8];
  long *local_1c0;
  int *local_1b0;
  Object *local_1a8;
  undefined1 local_1a0 [16];
  undefined1 local_190 [16];
  undefined8 local_180;
  long local_170 [5];
  long local_148;
  undefined4 local_140;
  int local_13c [3];
  int local_130 [2];
  undefined1 local_128 [16];
  long local_118;
  undefined8 local_108;
  int local_100 [2];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long local_a8;
  Vector<int> local_a0 [8];
  long local_98;
  Vector<float> local_90 [8];
  long local_88 [2];
  long local_78 [2];
  long local_68;
  int local_60 [2];
  undefined1 local_58 [16];
  long local_40;
  
  plVar28 = *(long **)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar28 == (long *)0x0) {
    _err_print_error("create_from_surface","scene/resources/mesh_data_tool.cpp",0x2b,
                     "Condition \"p_mesh.is_null()\" is true. Returning: ERR_INVALID_PARAMETER",0,0)
    ;
  }
  else {
    iVar7 = (**(code **)(*plVar28 + 0x200))(plVar28,param_2);
    if (iVar7 == 3) {
      (**(code **)(**(long **)param_1 + 0x1e0))(local_1d0,*(long **)param_1,param_2);
      cVar6 = Array::is_empty();
      if (cVar6 == '\0') {
        iVar7 = (int)local_1d0;
        Array::operator[](iVar7);
        Variant::operator_cast_to_Vector(local_1c8);
        if ((local_1c0 == (long *)0x0) || (iVar8 = (int)local_1c0[-1], iVar8 == 0)) {
          uVar11 = 0x1f;
          _err_print_error("create_from_surface","scene/resources/mesh_data_tool.cpp",0x34,
                           "Condition \"vcount == 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0
                          );
        }
        else {
          local_1b0 = (int *)0x0;
          piVar10 = (int *)Array::operator[](iVar7);
          if (*piVar10 == 0) {
            CowData<int>::resize<false>((CowData<int> *)&local_1b0,(long)iVar8);
            CowData<int>::_copy_on_write((CowData<int> *)&local_1b0);
            piVar10 = local_1b0;
            if (iVar8 < 1) goto LAB_00105ce0;
            uVar22 = 0;
            do {
              local_1b0[uVar22] = (int)uVar22;
              bVar30 = uVar22 != iVar8 - 1;
              uVar22 = uVar22 + 1;
            } while (bVar30);
LAB_00105ce9:
            iVar27 = (int)*(undefined8 *)(piVar10 + -2);
            if (iVar27 == 0) goto LAB_0010632a;
            if ((iVar27 / 3) * 3 != iVar27) {
              _err_print_error("create_from_surface","scene/resources/mesh_data_tool.cpp",0x47,
                               "Condition \"icount % 3\" is true. Returning: ERR_INVALID_PARAMETER",
                               0,0);
              goto LAB_00106292;
            }
            if (0 < iVar27) {
              piVar12 = piVar10;
              do {
                iVar9 = *piVar12;
                if ((iVar8 <= iVar9) || (iVar9 < 0)) {
                  _err_print_index_error
                            ("create_from_surface","scene/resources/mesh_data_tool.cpp",0x49,
                             (long)iVar9,(long)iVar8,"r[i]","vcount","",false,false);
                  goto LAB_00106292;
                }
                piVar12 = piVar12 + 1;
              } while (piVar10 + (ulong)(iVar27 - 1) + 1 != piVar12);
            }
            clear(this);
            uVar11 = (**(code **)(**(long **)param_1 + 0x1f8))(*(long **)param_1,param_2);
            plVar28 = *(long **)param_1;
            *(undefined8 *)(this + 0x180) = uVar11;
            (**(code **)(*plVar28 + 0x210))((Variant *)&local_1a8,plVar28,param_2);
            pOVar1 = *(Object **)(this + 0x1b8);
            pOVar24 = pOVar1;
            if (local_1a8 == pOVar1) {
LAB_00105e18:
              if (((pOVar24 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0'))
                 && (cVar6 = predelete_handler(local_1a8), cVar6 != '\0')) {
                (**(code **)(*(long *)local_1a8 + 0x140))(local_1a8);
                Memory::free_static(local_1a8,false);
              }
            }
            else {
              *(Object **)(this + 0x1b8) = local_1a8;
              if (local_1a8 != (Object *)0x0) {
                cVar6 = RefCounted::reference();
                if (cVar6 == '\0') {
                  *(undefined8 *)(this + 0x1b8) = 0;
                }
                pOVar24 = local_1a8;
                if (pOVar1 != (Object *)0x0) goto LAB_00105dec;
                goto LAB_00105e18;
              }
              if (pOVar1 != (Object *)0x0) {
LAB_00105dec:
                cVar6 = RefCounted::unreference();
                pOVar24 = local_1a8;
                if ((cVar6 != '\0') &&
                   (cVar6 = predelete_handler(pOVar1), pOVar24 = local_1a8, cVar6 != '\0')) {
                  (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
                  Memory::free_static(pOVar1,false);
                  pOVar24 = local_1a8;
                }
                goto LAB_00105e18;
              }
            }
            plVar28 = local_1c0;
            piVar12 = (int *)Array::operator[](iVar7);
            local_248 = 0;
            if (*piVar12 != 0) {
              Array::operator[](iVar7);
              Variant::operator_cast_to_Vector((Variant *)&local_1a8);
              local_248 = local_1a0._0_8_;
              CowData<Vector3>::_unref((CowData<Vector3> *)local_1a0);
            }
            piVar12 = (int *)Array::operator[](iVar7);
            local_240 = 0;
            if (*piVar12 != 0) {
              Array::operator[](iVar7);
              Variant::operator_cast_to_Vector((Variant *)&local_1a8);
              local_240 = local_1a0._0_8_;
              CowData<float>::_unref((CowData<float> *)local_1a0);
            }
            piVar12 = (int *)Array::operator[](iVar7);
            local_238 = (CowData<int> *)0x0;
            if (*piVar12 != 0) {
              Array::operator[](iVar7);
              Variant::operator_cast_to_Vector((Variant *)&local_1a8);
              local_238 = (CowData<int> *)local_1a0._0_8_;
              CowData<Vector2>::_unref((CowData<Vector2> *)local_1a0);
            }
            piVar12 = (int *)Array::operator[](iVar7);
            local_230 = 0;
            if (*piVar12 != 0) {
              Array::operator[](iVar7);
              Variant::operator_cast_to_Vector((Variant *)&local_1a8);
              local_230 = local_1a0._0_8_;
              CowData<Vector2>::_unref((CowData<Vector2> *)local_1a0);
            }
            piVar12 = (int *)Array::operator[](iVar7);
            local_218 = 0;
            if (*piVar12 != 0) {
              Array::operator[](iVar7);
              Variant::operator_cast_to_Vector((Variant *)&local_1a8);
              local_218 = local_1a0._0_8_;
              CowData<Color>::_unref((CowData<Color> *)local_1a0);
            }
            piVar12 = (int *)Array::operator[](iVar7);
            local_268 = 0;
            if (*piVar12 != 0) {
              Array::operator[](iVar7);
              Variant::operator_cast_to_Vector((Variant *)&local_1a8);
              local_268 = local_1a0._0_8_;
              CowData<int>::_unref((CowData<int> *)local_1a0);
            }
            piVar12 = (int *)Array::operator[](iVar7);
            local_260 = 0;
            if (*piVar12 != 0) {
              Array::operator[](iVar7);
              Variant::operator_cast_to_Vector((Variant *)&local_1a8);
              local_260 = local_1a0._0_8_;
              CowData<float>::_unref((CowData<float> *)local_1a0);
            }
            uVar22 = (ulong)iVar8;
            this_00 = (CowData<MeshDataTool::Vertex> *)(this + 400);
            if (-1 < (long)uVar22) {
              uVar25 = uVar22;
              if (*(long *)(this + 400) == 0) {
                uVar26 = 0;
                CowData<MeshDataTool::Vertex>::_copy_on_write(this_00);
LAB_0010647e:
                uVar13 = uVar22 * 0xa0 - 1;
                uVar13 = uVar13 >> 1 | uVar13;
                uVar13 = uVar13 | uVar13 >> 2;
                uVar13 = uVar13 | uVar13 >> 4;
                uVar13 = uVar13 >> 8 | uVar13;
                uVar13 = uVar13 | uVar13 >> 0x10;
                lVar20 = (uVar13 | uVar13 >> 0x20) + 1;
                if ((long)uVar26 < (long)uVar22) {
LAB_001072e0:
                  if (uVar26 == 0) {
                    puVar18 = (undefined8 *)Memory::alloc_static(lVar20 + 0x10,false);
                    if (puVar18 == (undefined8 *)0x0) {
                      _err_print_error("resize","./core/templates/cowdata.h",0x171,
                                       "Parameter \"mem_new\" is null.",0,0);
                      uVar31 = __LC104;
                      uVar32 = _UNK_0011e674;
                      uVar33 = _UNK_0011e678;
                      iVar7 = _UNK_0011e67c;
                    }
                    else {
                      puVar14 = puVar18 + 2;
                      *puVar18 = 1;
                      puVar18[1] = 0;
                      *(undefined8 **)(this + 400) = puVar14;
                      uVar25 = 0;
LAB_0010612b:
                      iVar7 = _UNK_0011e67c;
                      uVar33 = _UNK_0011e678;
                      uVar32 = _UNK_0011e674;
                      uVar31 = __LC104;
                      lVar20 = uVar25 * 0xa0;
                      while( true ) {
                        puVar14 = (undefined8 *)((long)puVar14 + lVar20);
                        uVar25 = uVar25 + 1;
                        lVar20 = lVar20 + 0xa0;
                        *puVar14 = 0;
                        *(undefined4 *)(puVar14 + 1) = 0;
                        *(undefined8 *)((long)puVar14 + 0x1c) = 0;
                        *(undefined4 *)((long)puVar14 + 0x24) = 0;
                        puVar14[5] = 0;
                        *(undefined4 *)(puVar14 + 6) = 0;
                        *(undefined4 *)((long)puVar14 + 0x34) = 0;
                        puVar14[7] = 0;
                        puVar14[8] = 0;
                        puVar14[10] = 0;
                        puVar14[0xc] = 0;
                        puVar14[0xe] = 0;
                        puVar14[0x10] = 0;
                        *(undefined4 *)(puVar14 + 0x11) = 0;
                        *(undefined4 *)((long)puVar14 + 0xc) = uVar31;
                        *(undefined4 *)(puVar14 + 2) = uVar32;
                        *(undefined4 *)((long)puVar14 + 0x14) = uVar33;
                        *(int *)(puVar14 + 3) = iVar7;
                        *(undefined1 (*) [16])(puVar14 + 0x12) = (undefined1  [16])0x0;
                        if (uVar22 == uVar25) break;
                        puVar14 = *(undefined8 **)(this + 400);
                      }
                      puVar14 = *(undefined8 **)(this + 400);
                      if (puVar14 == (undefined8 *)0x0) {
                        uVar11 = FUN_00108b8a();
                        return uVar11;
                      }
LAB_001061f9:
                      puVar14[-1] = uVar22;
                    }
                  }
                  else {
                    iVar9 = CowData<MeshDataTool::Vertex>::_realloc(this_00,lVar20);
                    uVar31 = __LC104;
                    uVar32 = _UNK_0011e674;
                    uVar33 = _UNK_0011e678;
                    iVar7 = _UNK_0011e67c;
                    if (iVar9 == 0) {
LAB_00106103:
                      puVar14 = *(undefined8 **)(this + 400);
                      if (puVar14 == (undefined8 *)0x0) goto MeshDataTool_create_from_surface;
                      uVar25 = puVar14[-1];
                      uVar31 = __LC104;
                      uVar32 = _UNK_0011e674;
                      uVar33 = _UNK_0011e678;
                      iVar7 = _UNK_0011e67c;
                      if ((long)uVar25 < (long)uVar22) goto LAB_0010612b;
                      goto LAB_001061f9;
                    }
                  }
LAB_0010665a:
                  lVar20 = 0;
                  do {
                    local_cc = 0;
                    local_c4 = 0;
                    local_c0 = 0;
                    local_58 = (undefined1  [16])0x0;
                    local_e8 = *plVar28;
                    lStack_b8 = 0;
                    local_e0 = (undefined4)plVar28[1];
                    local_b0 = 0;
                    local_a8 = 0;
                    local_98 = 0;
                    local_88[0] = 0;
                    local_78[0] = 0;
                    local_68 = 0;
                    local_60[0] = 0;
                    if (local_248 != 0) {
                      local_cc = *(undefined8 *)(local_248 + lVar20 * 0xc);
                      local_c4 = *(undefined4 *)(local_248 + 8 + lVar20 * 0xc);
                    }
                    iVar9 = (int)lVar20;
                    if (local_240 != 0) {
                      plVar15 = (long *)(local_240 + (long)(iVar9 * 4) * 4);
                      local_c0 = *plVar15;
                      lStack_b8 = plVar15[1];
                    }
                    if (local_238 != (CowData<int> *)0x0) {
                      local_b0 = *(long *)((long)local_238 + lVar20 * 8);
                    }
                    if (local_230 != 0) {
                      local_a8 = *(long *)(local_230 + lVar20 * 8);
                    }
                    local_dc = uVar31;
                    uStack_d8 = uVar32;
                    uStack_d4 = uVar33;
                    iStack_d0 = iVar7;
                    if (local_218 != 0) {
                      puVar18 = (undefined8 *)(local_218 + lVar20 * 0x10);
                      uVar11 = *puVar18;
                      uVar4 = puVar18[1];
                      local_dc = (undefined4)uVar11;
                      uStack_d8 = (undefined4)((ulong)uVar11 >> 0x20);
                      uStack_d4 = (undefined4)uVar4;
                      iStack_d0 = (int)((ulong)uVar4 >> 0x20);
                    }
                    if (local_260 != 0) {
                      lVar29 = (long)(iVar9 * 4) * 4;
                      Vector<float>::push_back
                                (local_90,*(float *)(local_260 + (long)(iVar9 * 4) * 4));
                      Vector<float>::push_back(local_90,*(float *)(local_260 + 4 + lVar29));
                      Vector<float>::push_back(local_90,*(float *)(local_260 + 8 + lVar29));
                      Vector<float>::push_back(local_90,*(float *)(local_260 + 0xc + lVar29));
                    }
                    if (local_268 != 0) {
                      lVar29 = (long)(iVar9 * 4) * 4;
                      Vector<int>::push_back(local_a0,*(int *)(local_268 + (long)(iVar9 * 4) * 4));
                      Vector<int>::push_back(local_a0,*(int *)(local_268 + 4 + lVar29));
                      Vector<int>::push_back(local_a0,*(int *)(local_268 + 8 + lVar29));
                      Vector<int>::push_back(local_a0,*(int *)(local_268 + 0xc + lVar29));
                    }
                    if (*(long *)(this + 400) == 0) goto LAB_00106a50;
                    lVar29 = *(long *)(*(long *)(this + 400) + -8);
                    if (lVar29 <= lVar20) goto LAB_00106a53;
                    CowData<MeshDataTool::Vertex>::_copy_on_write(this_00);
                    plVar15 = (long *)(lVar20 * 0xa0 + *(long *)(this + 400));
                    *plVar15 = local_e8;
                    *(ulong *)((long)plVar15 + 0xc) = CONCAT44(uStack_d8,local_dc);
                    *(ulong *)((long)plVar15 + 0x14) = CONCAT44(iStack_d0,uStack_d4);
                    *(undefined4 *)(plVar15 + 1) = local_e0;
                    *(undefined8 *)((long)plVar15 + 0x1c) = local_cc;
                    *(undefined4 *)((long)plVar15 + 0x24) = local_c4;
                    plVar15[7] = local_b0;
                    plVar15[5] = local_c0;
                    plVar15[6] = lStack_b8;
                    plVar15[8] = local_a8;
                    if (plVar15[10] != local_98) {
                      CowData<int>::_ref((CowData<int> *)(plVar15 + 10),(CowData *)&local_98);
                    }
                    if (plVar15[0xc] != local_88[0]) {
                      CowData<float>::_ref((CowData<float> *)(plVar15 + 0xc),(CowData *)local_88);
                    }
                    if (plVar15[0xe] != local_78[0]) {
                      CowData<int>::_ref((CowData<int> *)(plVar15 + 0xe),(CowData *)local_78);
                    }
                    if (plVar15[0x10] != local_68) {
                      CowData<int>::_ref((CowData<int> *)(plVar15 + 0x10),(CowData *)&local_68);
                    }
                    Variant::operator=((Variant *)(plVar15 + 0x11),(Variant *)local_60);
                    if (Variant::needs_deinit[local_60[0]] != '\0') {
                      Variant::_clear_internal();
                    }
                    lVar20 = lVar20 + 1;
                    plVar28 = (long *)((long)plVar28 + 0xc);
                    CowData<int>::_unref((CowData<int> *)&local_68);
                    CowData<int>::_unref((CowData<int> *)local_78);
                    CowData<float>::_unref((CowData<float> *)local_88);
                    CowData<int>::_unref((CowData<int> *)&local_98);
                  } while ((int)lVar20 < iVar8);
                  goto LAB_00106aac;
                }
                lVar29 = 0;
              }
              else {
                uVar26 = *(ulong *)(*(long *)(this + 400) + -8);
                uVar31 = __LC104;
                uVar32 = _UNK_0011e674;
                uVar33 = _UNK_0011e678;
                iVar7 = _UNK_0011e67c;
                if (uVar22 == uVar26) goto LAB_0010665a;
                CowData<MeshDataTool::Vertex>::_copy_on_write(this_00);
                if (uVar26 * 0xa0 == 0) goto LAB_0010647e;
                uVar13 = uVar26 * 0xa0 - 1;
                uVar19 = uVar22 * 0xa0 - 1;
                uVar19 = uVar19 >> 1 | uVar19;
                uVar19 = uVar19 >> 2 | uVar19;
                uVar19 = uVar19 >> 4 | uVar19;
                uVar19 = uVar19 >> 8 | uVar19;
                uVar19 = uVar19 >> 0x10 | uVar19;
                uVar19 = uVar19 >> 0x20 | uVar19;
                lVar20 = uVar19 + 1;
                uVar13 = uVar13 | uVar13 >> 1;
                uVar13 = uVar13 | uVar13 >> 2;
                uVar13 = uVar13 | uVar13 >> 4;
                uVar13 = uVar13 | uVar13 >> 8;
                uVar13 = uVar13 | uVar13 >> 0x10;
                uVar13 = uVar13 | uVar13 >> 0x20;
                lVar29 = uVar13 + 1;
                if ((long)uVar26 < (long)uVar22) {
                  if (uVar19 != uVar13) goto LAB_001072e0;
                  goto LAB_00106103;
                }
              }
              while (lVar23 = *(long *)(this + 400), lVar23 != 0) {
                if (*(ulong *)(lVar23 + -8) <= uVar25) {
                  if (lVar20 != lVar29) {
                    iVar9 = CowData<MeshDataTool::Vertex>::_realloc(this_00,lVar20);
                    uVar31 = __LC104;
                    uVar32 = _UNK_0011e674;
                    uVar33 = _UNK_0011e678;
                    iVar7 = _UNK_0011e67c;
                    if (iVar9 != 0) goto LAB_0010665a;
                    lVar23 = *(long *)(this + 400);
                    if (lVar23 == 0) {
                      _DAT_00000000 = 0;
                    /* WARNING: Does not return */
                      pcVar3 = (code *)invalidInstructionException();
                      (*pcVar3)();
                    }
                  }
                  *(ulong *)(lVar23 + -8) = uVar22;
                  uVar31 = __LC104;
                  uVar32 = _UNK_0011e674;
                  uVar33 = _UNK_0011e678;
                  iVar7 = _UNK_0011e67c;
                  goto LAB_0010665a;
                }
                lVar23 = lVar23 + uVar25 * 0xa0;
                if (Variant::needs_deinit[*(int *)(lVar23 + 0x88)] != '\0') {
                  Variant::_clear_internal();
                }
                if (*(long *)(lVar23 + 0x80) != 0) {
                  LOCK();
                  plVar15 = (long *)(*(long *)(lVar23 + 0x80) + -0x10);
                  *plVar15 = *plVar15 + -1;
                  UNLOCK();
                  if (*plVar15 == 0) {
                    lVar2 = *(long *)(lVar23 + 0x80);
                    *(undefined8 *)(lVar23 + 0x80) = 0;
                    Memory::free_static((void *)(lVar2 + -0x10),false);
                  }
                }
                if (*(long *)(lVar23 + 0x70) != 0) {
                  LOCK();
                  plVar15 = (long *)(*(long *)(lVar23 + 0x70) + -0x10);
                  *plVar15 = *plVar15 + -1;
                  UNLOCK();
                  if (*plVar15 == 0) {
                    lVar2 = *(long *)(lVar23 + 0x70);
                    *(undefined8 *)(lVar23 + 0x70) = 0;
                    Memory::free_static((void *)(lVar2 + -0x10),false);
                  }
                }
                if (*(long *)(lVar23 + 0x60) != 0) {
                  LOCK();
                  plVar15 = (long *)(*(long *)(lVar23 + 0x60) + -0x10);
                  *plVar15 = *plVar15 + -1;
                  UNLOCK();
                  if (*plVar15 == 0) {
                    lVar2 = *(long *)(lVar23 + 0x60);
                    *(undefined8 *)(lVar23 + 0x60) = 0;
                    Memory::free_static((void *)(lVar2 + -0x10),false);
                  }
                }
                if (*(long *)(lVar23 + 0x50) != 0) {
                  LOCK();
                  plVar15 = (long *)(*(long *)(lVar23 + 0x50) + -0x10);
                  *plVar15 = *plVar15 + -1;
                  UNLOCK();
                  if (*plVar15 == 0) {
                    lVar2 = *(long *)(lVar23 + 0x50);
                    *(undefined8 *)(lVar23 + 0x50) = 0;
                    Memory::free_static((void *)(lVar2 + -0x10),false);
                  }
                }
                uVar25 = uVar25 + 1;
              }
MeshDataTool_create_from_surface:
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            _err_print_error("resize","./core/templates/cowdata.h",0x157,
                             "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,
                             0);
LAB_00106aac:
            local_180 = 2;
            local_1a0 = (undefined1  [16])0x0;
            local_190 = (undefined1  [16])0x0;
            if (0 < iVar27) {
              iVar7 = 0;
              piVar12 = piVar10;
              do {
                lVar20 = (long)*piVar12;
                lVar29 = *(long *)(this + 400);
                if (lVar20 < 0) {
LAB_00106a46:
                  if (lVar29 == 0) goto LAB_00106a50;
LAB_00107269:
                  lVar29 = *(long *)(lVar29 + -8);
                  goto LAB_00106a53;
                }
                if (lVar29 == 0) goto LAB_00106a50;
                if (*(long *)(lVar29 + -8) <= lVar20) goto LAB_00107269;
                CowData<MeshDataTool::Vertex>::_copy_on_write(this_00);
                lVar29 = *(long *)(this + 400);
                lVar23 = (long)piVar12[1];
                local_170[1] = lVar20 * 0xa0 + lVar29;
                lVar20 = lVar23;
                if (lVar23 < 0) {
LAB_00107337:
                  if (lVar29 == 0) {
LAB_00106a50:
                    lVar29 = 0;
                  }
                  else {
LAB_00107340:
                    lVar29 = *(long *)(lVar29 + -8);
                  }
LAB_00106a53:
                  _err_print_index_error
                            ("operator[]","./core/templates/vector.h",0x38,lVar20,lVar29,"p_index",
                             "((Vector<T> *)(this))->_cowdata.size()","",false,true);
                  _err_flush_stdout();
                    /* WARNING: Does not return */
                  pcVar3 = (code *)invalidInstructionException();
                  (*pcVar3)();
                }
                if (lVar29 == 0) goto LAB_00106a50;
                if (*(long *)(lVar29 + -8) <= lVar23) goto LAB_00107340;
                CowData<MeshDataTool::Vertex>::_copy_on_write(this_00);
                lVar29 = *(long *)(this + 400);
                lVar20 = (long)piVar12[2];
                local_170[2] = lVar23 * 0xa0 + lVar29;
                if (lVar20 < 0) goto LAB_00107337;
                if (lVar29 == 0) goto LAB_00106a50;
                if (*(long *)(lVar29 + -8) <= lVar20) goto LAB_00107340;
                CowData<MeshDataTool::Vertex>::_copy_on_write(this_00);
                local_170[3] = lVar20 * 0xa0 + *(long *)(this + 400);
                if (*(long *)(this + 0x1b0) == 0) {
                  local_240._0_4_ = 0;
                }
                else {
                  local_240._0_4_ = *(int *)(*(long *)(this + 0x1b0) + -8);
                }
                plVar28 = &local_148;
                local_148 = 0;
                uVar22 = 1;
                local_140 = 0;
                local_13c[0] = 0;
                local_13c[1] = 0;
                local_13c[2] = 0;
                local_130[0] = 0;
                local_128 = (undefined1  [16])0x0;
                do {
                  iVar8 = piVar12[uVar22 - 1];
                  *(int *)plVar28 = iVar8;
                  iVar21 = (int)uVar22 + (int)((uVar22 & 0xffffffff) / 3) * -3;
                  iVar9 = piVar10[iVar7 + iVar21];
                  if (iVar9 < iVar8) {
                    local_170[0] = CONCAT44(iVar8,iVar9);
                  }
                  else {
                    local_170[0] = CONCAT44(iVar9,iVar8);
                  }
                  local_1d4 = 0;
                  cVar6 = HashMap<Vector2i,int,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,int>>>
                          ::_lookup_pos((HashMap<Vector2i,int,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,int>>>
                                         *)&local_1a8,(Vector2i *)local_170,&local_1d4);
                  if (cVar6 == '\0') {
                    iVar8 = local_180._4_4_;
                    *(int *)((long)plVar28 + 0xc) = local_180._4_4_;
                    piVar16 = (int *)HashMap<Vector2i,int,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,int>>>
                                     ::operator[]((
                                                  HashMap<Vector2i,int,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,int>>>
                                                  *)&local_1a8,(Vector2i *)local_170);
                    *piVar16 = iVar8;
                    local_108 = 0;
                    local_118 = local_170[0];
                    local_e8 = local_170[0];
                    local_100[0] = 0;
                    uStack_d8 = 0;
                    uStack_d4 = 0;
                    local_f8 = (undefined1  [16])0x0;
                    Variant::Variant((Variant *)&iStack_d0,(Variant *)local_100);
                    if (*(long *)(this + 0x1a0) == 0) {
                      lVar20 = 1;
                    }
                    else {
                      lVar20 = *(long *)(*(long *)(this + 0x1a0) + -8) + 1;
                    }
                    iVar8 = CowData<MeshDataTool::Edge>::resize<false>
                                      ((CowData<MeshDataTool::Edge> *)(this + 0x1a0),lVar20);
                    if (iVar8 == 0) {
                      if (*(long *)(this + 0x1a0) == 0) {
                        lVar29 = -1;
                        lVar20 = 0;
                      }
                      else {
                        lVar20 = *(long *)(*(long *)(this + 0x1a0) + -8);
                        lVar29 = lVar20 + -1;
                        if (-1 < lVar29) {
                          CowData<MeshDataTool::Edge>::_copy_on_write
                                    ((CowData<MeshDataTool::Edge> *)(this + 0x1a0));
                          puVar17 = (undefined4 *)(lVar29 * 0x30 + *(long *)(this + 0x1a0));
                          *puVar17 = (undefined4)local_e8;
                          puVar17[1] = local_e8._4_4_;
                          if (*(long *)(puVar17 + 4) != CONCAT44(uStack_d4,uStack_d8)) {
                            CowData<int>::_ref((CowData<int> *)(puVar17 + 4),(CowData *)&uStack_d8);
                          }
                          Variant::operator=((Variant *)(puVar17 + 6),(Variant *)&iStack_d0);
                          goto LAB_001071d3;
                        }
                      }
                      _err_print_index_error
                                ("set","./core/templates/cowdata.h",0xcf,lVar29,lVar20,"p_index",
                                 "size()","",false,false);
                    }
                    else {
                      _err_print_error("push_back","./core/templates/vector.h",0x142,
                                       "Condition \"err\" is true. Returning: true",0,0);
                    }
LAB_001071d3:
                    local_238 = (CowData<int> *)&uStack_d8;
                    if (Variant::needs_deinit[iStack_d0] != '\0') {
                      Variant::_clear_internal();
                    }
                    CowData<int>::_unref(local_238);
                    Vector<int>::push_back
                              ((Vector<int> *)(local_170[uVar22] + 0x68),
                               *(int *)((long)plVar28 + 0xc));
                    Vector<int>::push_back
                              ((Vector<int> *)(local_170[(long)iVar21 + 1] + 0x68),
                               *(int *)((long)plVar28 + 0xc));
                    if (Variant::needs_deinit[local_100[0]] != '\0') {
                      Variant::_clear_internal();
                    }
                    CowData<int>::_unref((CowData<int> *)&local_108);
                    iVar8 = *(int *)((long)plVar28 + 0xc);
                  }
                  else {
                    piVar16 = (int *)HashMap<Vector2i,int,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,int>>>
                                     ::operator[]((
                                                  HashMap<Vector2i,int,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,int>>>
                                                  *)&local_1a8,(Vector2i *)local_170);
                    iVar8 = *piVar16;
                    *(int *)((long)plVar28 + 0xc) = iVar8;
                  }
                  lVar20 = (long)iVar8;
                  lVar29 = *(long *)(this + 0x1a0);
                  if (lVar20 < 0) goto LAB_00106a46;
                  if (lVar29 == 0) goto LAB_00106a50;
                  if (*(long *)(lVar29 + -8) <= lVar20) goto LAB_00107269;
                  plVar28 = (long *)((long)plVar28 + 4);
                  CowData<MeshDataTool::Edge>::_copy_on_write
                            ((CowData<MeshDataTool::Edge> *)(this + 0x1a0));
                  Vector<int>::push_back
                            ((Vector<int> *)(lVar20 * 0x30 + *(long *)(this + 0x1a0) + 8),
                             (int)local_240);
                  plVar15 = local_170 + uVar22;
                  uVar22 = uVar22 + 1;
                  Vector<int>::push_back((Vector<int> *)(*plVar15 + 0x78),(int)local_240);
                } while (uVar22 != 4);
                local_e8 = local_148;
                local_e0 = local_140;
                local_dc = (undefined4)local_13c._0_8_;
                uStack_d8 = SUB84(local_13c._0_8_,4);
                uStack_d4 = local_13c[2];
                Variant::Variant((Variant *)&iStack_d0,(Variant *)local_130);
                if (*(long *)(this + 0x1b0) == 0) {
                  lVar20 = 1;
                }
                else {
                  lVar20 = *(long *)(*(long *)(this + 0x1b0) + -8) + 1;
                }
                iVar8 = CowData<MeshDataTool::Face>::resize<false>
                                  ((CowData<MeshDataTool::Face> *)(this + 0x1b0),lVar20);
                if (iVar8 == 0) {
                  if (*(long *)(this + 0x1b0) == 0) {
                    lVar29 = -1;
                    lVar20 = 0;
                  }
                  else {
                    lVar20 = *(long *)(*(long *)(this + 0x1b0) + -8);
                    lVar29 = lVar20 + -1;
                    if (-1 < lVar29) {
                      CowData<MeshDataTool::Face>::_copy_on_write
                                ((CowData<MeshDataTool::Face> *)(this + 0x1b0));
                      lVar20 = 0;
                      lVar29 = lVar29 * 0x30 + *(long *)(this + 0x1b0);
                      do {
                        *(undefined4 *)(lVar29 + lVar20) = *(undefined4 *)((long)&local_e8 + lVar20)
                        ;
                        lVar20 = lVar20 + 4;
                      } while (lVar20 != 0xc);
                      do {
                        *(undefined4 *)(lVar29 + lVar20) = *(undefined4 *)((long)&local_e8 + lVar20)
                        ;
                        lVar20 = lVar20 + 4;
                      } while (lVar20 != 0x18);
                      Variant::operator=((Variant *)(lVar29 + 0x18),(Variant *)&iStack_d0);
                      goto LAB_00106e46;
                    }
                  }
                  _err_print_index_error
                            ("set","./core/templates/cowdata.h",0xcf,lVar29,lVar20,"p_index",
                             "size()","",false,false);
                }
                else {
                  _err_print_error("push_back","./core/templates/vector.h",0x142,
                                   "Condition \"err\" is true. Returning: true",0,0);
                }
LAB_00106e46:
                if (Variant::needs_deinit[iStack_d0] != '\0') {
                  Variant::_clear_internal();
                }
                if (Variant::needs_deinit[local_130[0]] != '\0') {
                  Variant::_clear_internal();
                }
                iVar7 = iVar7 + 3;
                piVar12 = piVar12 + 3;
              } while (iVar7 < iVar27);
            }
            uVar11 = 0;
            HashMap<Vector2i,int,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,int>>>
            ::~HashMap((HashMap<Vector2i,int,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,int>>>
                        *)&local_1a8);
          }
          else {
            Array::operator[](iVar7);
            Variant::operator_cast_to_Vector((Variant *)&local_1a8);
            if (local_1a0._0_8_ == 0) {
              CowData<int>::_unref((CowData<int> *)local_1a0);
            }
            else {
              CowData<int>::_unref((CowData<int> *)&local_1b0);
              piVar10 = (int *)local_1a0._0_8_;
              auVar5._8_8_ = 0;
              auVar5._0_8_ = local_1a0._8_8_;
              local_1a0 = auVar5 << 0x40;
              local_1b0 = piVar10;
              CowData<int>::_unref((CowData<int> *)local_1a0);
LAB_00105ce0:
              if (piVar10 != (int *)0x0) goto LAB_00105ce9;
            }
LAB_0010632a:
            _err_print_error("create_from_surface","scene/resources/mesh_data_tool.cpp",0x46,
                             "Condition \"icount == 0\" is true. Returning: ERR_INVALID_PARAMETER",0
                             ,0);
LAB_00106292:
            uVar11 = 0x1f;
          }
          local_270 = (CowData<int> *)&local_1b0;
          CowData<int>::_unref(local_270);
        }
        plVar28 = local_1c0;
        if (local_1c0 != (long *)0x0) {
          LOCK();
          plVar15 = local_1c0 + -2;
          *plVar15 = *plVar15 + -1;
          UNLOCK();
          if (*plVar15 == 0) {
            local_1c0 = (long *)0x0;
            Memory::free_static(plVar28 + -2,false);
          }
        }
      }
      else {
        uVar11 = 0x1f;
        _err_print_error("create_from_surface","scene/resources/mesh_data_tool.cpp",0x2f,
                         "Condition \"arrays.is_empty()\" is true. Returning: ERR_INVALID_PARAMETER"
                         ,0,0);
      }
      Array::~Array(local_1d0);
      goto LAB_001062dd;
    }
    _err_print_error("create_from_surface","scene/resources/mesh_data_tool.cpp",0x2c,
                     "Condition \"p_mesh->surface_get_primitive_type(p_surface) != Mesh::PRIMITIVE_TRIANGLES\" is true. Returning: ERR_INVALID_PARAMETER"
                     ,0,0);
  }
  uVar11 = 0x1f;
LAB_001062dd:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11;
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
  return (uint)CONCAT71(0x11e4,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11e4,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* MeshDataTool::is_class_ptr(void*) const */

uint __thiscall MeshDataTool::is_class_ptr(MeshDataTool *this,void *param_1)

{
  return (uint)CONCAT71(0x11e4,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11e4,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11e4,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* MeshDataTool::_getv(StringName const&, Variant&) const */

undefined8 MeshDataTool::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* MeshDataTool::_setv(StringName const&, Variant const&) */

undefined8 MeshDataTool::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* MeshDataTool::_validate_propertyv(PropertyInfo&) const */

void MeshDataTool::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* MeshDataTool::_property_can_revertv(StringName const&) const */

undefined8 MeshDataTool::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* MeshDataTool::_property_get_revertv(StringName const&, Variant&) const */

undefined8 MeshDataTool::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* MeshDataTool::_notificationv(int, bool) */

void MeshDataTool::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MethodBindTRC<Ref<Material>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Ref<Material>>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTRC<Ref<Material>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Ref<Material>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Ref<Material> const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Ref<Material>const&>::_gen_argument_type
          (MethodBindT<Ref<Material>const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x18;
}



/* MethodBindT<Ref<Material> const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Ref<Material>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<int, int, int>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<int,int,int>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<int, int, int>::get_argument_meta(int) const */

char __thiscall
MethodBindTRC<int,int,int>::get_argument_meta(MethodBindTRC<int,int,int> *this,int param_1)

{
  return (param_1 < 2) * '\x03';
}



/* MethodBindTRC<Variant, int>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRC<Variant,int>::_gen_argument_type(MethodBindTRC<Variant,int> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindTRC<Variant, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<Variant,int>::get_argument_meta(MethodBindTRC<Variant,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindT<int, Variant const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<int,Variant_const&>::_gen_argument_type
          (MethodBindT<int,Variant_const&> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<int, Variant const&>::get_argument_meta(int) const */

byte __thiscall
MethodBindT<int,Variant_const&>::get_argument_meta
          (MethodBindT<int,Variant_const&> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTRC<Vector<float>, int>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<Vector<float>,int>::_gen_argument_type
          (MethodBindTRC<Vector<float>,int> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffe2) + 0x20;
}



/* MethodBindTRC<Vector<float>, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<Vector<float>,int>::get_argument_meta
          (MethodBindTRC<Vector<float>,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindT<int, Vector<float> const&>::_gen_argument_type(int) const */

int __thiscall
MethodBindT<int,Vector<float>const&>::_gen_argument_type
          (MethodBindT<int,Vector<float>const&> *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((uint)param_1 < 2) {
    iVar1 = (-(uint)(param_1 == 0) & 0xffffffe2) + 0x20;
  }
  return iVar1;
}



/* MethodBindT<int, Vector<float> const&>::get_argument_meta(int) const */

byte __thiscall
MethodBindT<int,Vector<float>const&>::get_argument_meta
          (MethodBindT<int,Vector<float>const&> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTRC<Vector<int>, int>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<Vector<int>,int>::_gen_argument_type(MethodBindTRC<Vector<int>,int> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffe4) + 0x1e;
}



/* MethodBindTRC<Vector<int>, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<Vector<int>,int>::get_argument_meta(MethodBindTRC<Vector<int>,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindT<int, Vector<int> const&>::_gen_argument_type(int) const */

int __thiscall
MethodBindT<int,Vector<int>const&>::_gen_argument_type
          (MethodBindT<int,Vector<int>const&> *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((uint)param_1 < 2) {
    iVar1 = (-(uint)(param_1 == 0) & 0xffffffe4) + 0x1e;
  }
  return iVar1;
}



/* MethodBindT<int, Vector<int> const&>::get_argument_meta(int) const */

byte __thiscall
MethodBindT<int,Vector<int>const&>::get_argument_meta
          (MethodBindT<int,Vector<int>const&> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTRC<Color, int>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<Color,int>::_gen_argument_type(MethodBindTRC<Color,int> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffee) + 0x14;
}



/* MethodBindTRC<Color, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<Color,int>::get_argument_meta(MethodBindTRC<Color,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindT<int, Color const&>::_gen_argument_type(int) const */

int __thiscall
MethodBindT<int,Color_const&>::_gen_argument_type(MethodBindT<int,Color_const&> *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((uint)param_1 < 2) {
    iVar1 = (-(uint)(param_1 == 0) & 0xffffffee) + 0x14;
  }
  return iVar1;
}



/* MethodBindT<int, Color const&>::get_argument_meta(int) const */

byte __thiscall
MethodBindT<int,Color_const&>::get_argument_meta(MethodBindT<int,Color_const&> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTRC<Vector2, int>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<Vector2,int>::_gen_argument_type(MethodBindTRC<Vector2,int> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xfffffffd) + 5;
}



/* MethodBindTRC<Vector2, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<Vector2,int>::get_argument_meta(MethodBindTRC<Vector2,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindT<int, Vector2 const&>::_gen_argument_type(int) const */

int __thiscall
MethodBindT<int,Vector2_const&>::_gen_argument_type
          (MethodBindT<int,Vector2_const&> *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((uint)param_1 < 2) {
    iVar1 = (-(uint)(param_1 == 0) & 0xfffffffd) + 5;
  }
  return iVar1;
}



/* MethodBindT<int, Vector2 const&>::get_argument_meta(int) const */

byte __thiscall
MethodBindT<int,Vector2_const&>::get_argument_meta
          (MethodBindT<int,Vector2_const&> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTRC<Plane, int>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<Plane,int>::_gen_argument_type(MethodBindTRC<Plane,int> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xfffffff4) + 0xe;
}



/* MethodBindTRC<Plane, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<Plane,int>::get_argument_meta(MethodBindTRC<Plane,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindT<int, Plane const&>::_gen_argument_type(int) const */

int __thiscall
MethodBindT<int,Plane_const&>::_gen_argument_type(MethodBindT<int,Plane_const&> *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((uint)param_1 < 2) {
    iVar1 = (-(uint)(param_1 == 0) & 0xfffffff4) + 0xe;
  }
  return iVar1;
}



/* MethodBindT<int, Plane const&>::get_argument_meta(int) const */

byte __thiscall
MethodBindT<int,Plane_const&>::get_argument_meta(MethodBindT<int,Plane_const&> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTRC<Vector3, int>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<Vector3,int>::_gen_argument_type(MethodBindTRC<Vector3,int> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xfffffff9) + 9;
}



/* MethodBindTRC<Vector3, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<Vector3,int>::get_argument_meta(MethodBindTRC<Vector3,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindT<int, Vector3 const&>::_gen_argument_type(int) const */

int __thiscall
MethodBindT<int,Vector3_const&>::_gen_argument_type
          (MethodBindT<int,Vector3_const&> *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((uint)param_1 < 2) {
    iVar1 = (-(uint)(param_1 == 0) & 0xfffffff9) + 9;
  }
  return iVar1;
}



/* MethodBindT<int, Vector3 const&>::get_argument_meta(int) const */

byte __thiscall
MethodBindT<int,Vector3_const&>::get_argument_meta
          (MethodBindT<int,Vector3_const&> *this,int param_1)

{
  return -(param_1 == 0) & 3;
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



/* MethodBindTRC<unsigned long>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<unsigned_long>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<unsigned long>::get_argument_meta(int) const */

int __thiscall
MethodBindTRC<unsigned_long>::get_argument_meta(MethodBindTRC<unsigned_long> *this,int param_1)

{
  return (param_1 >> 0x1f) * -8;
}



/* MethodBindTR<Error, Ref<ArrayMesh> const&, unsigned long>::_gen_argument_type(int) const */

char __thiscall
MethodBindTR<Error,Ref<ArrayMesh>const&,unsigned_long>::_gen_argument_type
          (MethodBindTR<Error,Ref<ArrayMesh>const&,unsigned_long> *this,int param_1)

{
  return (-(param_1 == 0) & 0x16U) + 2;
}



/* MethodBindTR<Error, Ref<ArrayMesh> const&, unsigned long>::get_argument_meta(int) const */

long __thiscall
MethodBindTR<Error,Ref<ArrayMesh>const&,unsigned_long>::get_argument_meta
          (MethodBindTR<Error,Ref<ArrayMesh>const&,unsigned_long> *this,int param_1)

{
  return (ulong)(param_1 == 1) << 3;
}



/* MethodBindTR<Error, Ref<ArrayMesh> const&, int>::_gen_argument_type(int) const */

char __thiscall
MethodBindTR<Error,Ref<ArrayMesh>const&,int>::_gen_argument_type
          (MethodBindTR<Error,Ref<ArrayMesh>const&,int> *this,int param_1)

{
  return (-(param_1 == 0) & 0x16U) + 2;
}



/* MethodBindTR<Error, Ref<ArrayMesh> const&, int>::get_argument_meta(int) const */

char __thiscall
MethodBindTR<Error,Ref<ArrayMesh>const&,int>::get_argument_meta
          (MethodBindTR<Error,Ref<ArrayMesh>const&,int> *this,int param_1)

{
  return (param_1 == 1) * '\x03';
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



/* MethodBindTR<Error, Ref<ArrayMesh> const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindTR<Error,Ref<ArrayMesh>const&>::_gen_argument_type
          (MethodBindTR<Error,Ref<ArrayMesh>const&> *this,int param_1)

{
  return (-(param_1 == 0) & 0x16U) + 2;
}



/* MethodBindTR<Error, Ref<ArrayMesh> const&>::get_argument_meta(int) const */

undefined8 MethodBindTR<Error,Ref<ArrayMesh>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Error, Ref<ArrayMesh> const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,Ref<ArrayMesh>const&>::~MethodBindTR
          (MethodBindTR<Error,Ref<ArrayMesh>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011db90;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Error, Ref<ArrayMesh> const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,Ref<ArrayMesh>const&>::~MethodBindTR
          (MethodBindTR<Error,Ref<ArrayMesh>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011db90;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011dbf0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011dbf0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Error, Ref<ArrayMesh> const&, int>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,Ref<ArrayMesh>const&,int>::~MethodBindTR
          (MethodBindTR<Error,Ref<ArrayMesh>const&,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011dc50;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Error, Ref<ArrayMesh> const&, int>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,Ref<ArrayMesh>const&,int>::~MethodBindTR
          (MethodBindTR<Error,Ref<ArrayMesh>const&,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011dc50;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Error, Ref<ArrayMesh> const&, unsigned long>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,Ref<ArrayMesh>const&,unsigned_long>::~MethodBindTR
          (MethodBindTR<Error,Ref<ArrayMesh>const&,unsigned_long> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011dcb0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Error, Ref<ArrayMesh> const&, unsigned long>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,Ref<ArrayMesh>const&,unsigned_long>::~MethodBindTR
          (MethodBindTR<Error,Ref<ArrayMesh>const&,unsigned_long> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011dcb0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<unsigned long>::~MethodBindTRC() */

void __thiscall MethodBindTRC<unsigned_long>::~MethodBindTRC(MethodBindTRC<unsigned_long> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011dd10;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<unsigned long>::~MethodBindTRC() */

void __thiscall MethodBindTRC<unsigned_long>::~MethodBindTRC(MethodBindTRC<unsigned_long> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011dd10;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011dd70;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011dd70;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, Vector3 const&>::~MethodBindT() */

void __thiscall MethodBindT<int,Vector3_const&>::~MethodBindT(MethodBindT<int,Vector3_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011ddd0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, Vector3 const&>::~MethodBindT() */

void __thiscall MethodBindT<int,Vector3_const&>::~MethodBindT(MethodBindT<int,Vector3_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011ddd0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, Plane const&>::~MethodBindT() */

void __thiscall MethodBindT<int,Plane_const&>::~MethodBindT(MethodBindT<int,Plane_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011de90;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, Plane const&>::~MethodBindT() */

void __thiscall MethodBindT<int,Plane_const&>::~MethodBindT(MethodBindT<int,Plane_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011de90;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Plane, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Plane,int>::~MethodBindTRC(MethodBindTRC<Plane,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011def0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Plane, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Plane,int>::~MethodBindTRC(MethodBindTRC<Plane,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011def0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, Vector2 const&>::~MethodBindT() */

void __thiscall MethodBindT<int,Vector2_const&>::~MethodBindT(MethodBindT<int,Vector2_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011df50;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, Vector2 const&>::~MethodBindT() */

void __thiscall MethodBindT<int,Vector2_const&>::~MethodBindT(MethodBindT<int,Vector2_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011df50;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Vector2, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector2,int>::~MethodBindTRC(MethodBindTRC<Vector2,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011dfb0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Vector2, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector2,int>::~MethodBindTRC(MethodBindTRC<Vector2,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011dfb0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, Color const&>::~MethodBindT() */

void __thiscall MethodBindT<int,Color_const&>::~MethodBindT(MethodBindT<int,Color_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e010;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, Color const&>::~MethodBindT() */

void __thiscall MethodBindT<int,Color_const&>::~MethodBindT(MethodBindT<int,Color_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e010;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Color, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Color,int>::~MethodBindTRC(MethodBindTRC<Color,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e070;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Color, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Color,int>::~MethodBindTRC(MethodBindTRC<Color,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e070;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, Vector<int> const&>::~MethodBindT() */

void __thiscall
MethodBindT<int,Vector<int>const&>::~MethodBindT(MethodBindT<int,Vector<int>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e0d0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, Vector<int> const&>::~MethodBindT() */

void __thiscall
MethodBindT<int,Vector<int>const&>::~MethodBindT(MethodBindT<int,Vector<int>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e0d0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, Vector<float> const&>::~MethodBindT() */

void __thiscall
MethodBindT<int,Vector<float>const&>::~MethodBindT(MethodBindT<int,Vector<float>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e190;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, Vector<float> const&>::~MethodBindT() */

void __thiscall
MethodBindT<int,Vector<float>const&>::~MethodBindT(MethodBindT<int,Vector<float>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e190;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Vector<float>, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Vector<float>,int>::~MethodBindTRC(MethodBindTRC<Vector<float>,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e1f0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Vector<float>, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Vector<float>,int>::~MethodBindTRC(MethodBindTRC<Vector<float>,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e1f0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Vector<int>, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector<int>,int>::~MethodBindTRC(MethodBindTRC<Vector<int>,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e130;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Vector<int>, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector<int>,int>::~MethodBindTRC(MethodBindTRC<Vector<int>,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e130;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int, int, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int,int,int>::~MethodBindTRC(MethodBindTRC<int,int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e310;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int, int, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int,int,int>::~MethodBindTRC(MethodBindTRC<int,int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e310;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, Variant const&>::~MethodBindT() */

void __thiscall MethodBindT<int,Variant_const&>::~MethodBindT(MethodBindT<int,Variant_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e250;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, Variant const&>::~MethodBindT() */

void __thiscall MethodBindT<int,Variant_const&>::~MethodBindT(MethodBindT<int,Variant_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e250;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Variant, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Variant,int>::~MethodBindTRC(MethodBindTRC<Variant,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e2b0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Variant, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Variant,int>::~MethodBindTRC(MethodBindTRC<Variant,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e2b0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Vector3, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector3,int>::~MethodBindTRC(MethodBindTRC<Vector3,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011de30;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Vector3, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector3,int>::~MethodBindTRC(MethodBindTRC<Vector3,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011de30;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Ref<Material> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Material>const&>::~MethodBindT(MethodBindT<Ref<Material>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e370;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<Material> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Material>const&>::~MethodBindT(MethodBindT<Ref<Material>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e370;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Ref<Material>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Material>>::~MethodBindTRC(MethodBindTRC<Ref<Material>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e3d0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Ref<Material>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Material>>::~MethodBindTRC(MethodBindTRC<Ref<Material>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e3d0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0011d8d0;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0011d8d0;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
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
LAB_00108953:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108953;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_001089be;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_001089be:
  return &_get_class_namev()::_class_name_static;
}



/* MeshDataTool::_get_class_namev() const */

undefined8 * MeshDataTool::_get_class_namev(void)

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
LAB_00108a43:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108a43;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"MeshDataTool");
      goto LAB_00108aae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"MeshDataTool");
LAB_00108aae:
  return &_get_class_namev()::_class_name_static;
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



/* Error CowData<Vector2>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<Vector2>::resize<false>(long param_1)

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



/* Error CowData<Vector3>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<Vector3>::resize<false>(long param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* MeshDataTool::_bind_compatibility_methods() [clone .cold] */

void MeshDataTool::_bind_compatibility_methods(void)

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



/* CowData<float>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<float>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<MeshDataTool::Vertex>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<MeshDataTool::Vertex>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* MeshDataTool::commit_to_surface(Ref<ArrayMesh> const&, unsigned long) [clone .cold] */

void MeshDataTool::commit_to_surface(Ref *param_1,ulong param_2)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00108b60(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<MeshDataTool::Edge>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<MeshDataTool::Edge>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<MeshDataTool::Face>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<MeshDataTool::Face>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* MeshDataTool::create_from_surface(Ref<ArrayMesh> const&, int) [clone .cold] */

void MeshDataTool::create_from_surface(Ref *param_1,int param_2)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00108b8a(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* MeshDataTool::get_class() const */

void MeshDataTool::get_class(void)

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
            if (lVar5 == 0) goto LAB_00108dbf;
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
LAB_00108dbf:
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
    if (cVar6 != '\0') goto LAB_00108e73;
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
              if (lVar5 == 0) goto LAB_00108f23;
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
LAB_00108f23:
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
      if (cVar6 != '\0') goto LAB_00108e73;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00108e73:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MeshDataTool::is_class(String const&) const */

undefined8 __thiscall MeshDataTool::is_class(MeshDataTool *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010904f;
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
LAB_0010904f:
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
    if (cVar5 != '\0') goto LAB_00109103;
  }
  cVar5 = String::operator==(param_1,"MeshDataTool");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00109103:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<unsigned long>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<unsigned_long>::_gen_argument_type_info(int param_1)

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
      goto joined_r0x0010929c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010929c:
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
      goto joined_r0x0010941c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010941c:
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



/* MethodBindTRC<Ref<Material>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Ref<Material>>::_gen_argument_type_info(int param_1)

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
  local_48 = "Material";
  local_40 = 8;
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
      goto LAB_00109520;
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
LAB_00109520:
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
LAB_00109908:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00109908;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00109926;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00109926:
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



/* MeshDataTool::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall MeshDataTool::_get_property_listv(MeshDataTool *this,List *param_1,bool param_2)

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
  local_78 = "MeshDataTool";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "MeshDataTool";
  local_98 = 0;
  local_70 = 0xc;
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
LAB_00109d08:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00109d08;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00109d25;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00109d25:
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
  StringName::StringName((StringName *)&local_78,"MeshDataTool",false);
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



/* Variant::TEMPNAMEPLACEHOLDERVALUE(Variant&&) */

void __thiscall Variant::operator=(Variant *this,Variant *param_1)

{
  undefined8 uVar1;
  
  if (this != param_1) {
    if (needs_deinit[*(int *)this] != '\0') {
      Variant::_clear_internal();
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



/* HashMap<Vector2i, int, HashMapHasherDefault, HashMapComparatorDefault<Vector2i>,
   DefaultTypedAllocator<HashMapElement<Vector2i, int> > >::~HashMap() */

void __thiscall
HashMap<Vector2i,int,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,int>>>
::~HashMap(HashMap<Vector2i,int,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,int>>>
           *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(this + 8);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar2 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar2) != 0) {
          *(int *)(*(long *)(this + 0x10) + lVar2) = 0;
          Memory::free_static(*(void **)((long)pvVar3 + lVar2 * 2),false);
          pvVar3 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
        }
        lVar2 = lVar2 + 4;
      } while (lVar2 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar3 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar3,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<Vector2i, int, HashMapHasherDefault, HashMapComparatorDefault<Vector2i>,
   DefaultTypedAllocator<HashMapElement<Vector2i, int> > >::operator[](Vector2i const&) */

undefined1 * __thiscall
HashMap<Vector2i,int,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,int>>>
::operator[](HashMap<Vector2i,int,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,int>>>
             *this,Vector2i *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  void *pvVar5;
  void *__s;
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
  char cVar39;
  uint uVar40;
  uint uVar41;
  ulong uVar42;
  undefined8 uVar43;
  void *__s_00;
  undefined1 (*pauVar44) [16];
  void *pvVar45;
  ulong uVar46;
  int iVar47;
  long lVar48;
  ulong uVar49;
  long lVar50;
  long lVar51;
  ulong uVar52;
  undefined8 uVar53;
  int iVar54;
  long lVar55;
  uint uVar56;
  int iVar57;
  undefined1 (*pauVar58) [16];
  uint uVar59;
  uint uVar60;
  long in_FS_OFFSET;
  uint local_b8;
  
  lVar50 = *(long *)(this + 8);
  lVar4 = *(long *)(in_FS_OFFSET + 0x28);
  uVar42 = (ulong)*(uint *)(this + 0x28);
  uVar41 = *(uint *)(hash_table_size_primes + uVar42 * 4);
  if (lVar50 == 0) {
LAB_0010aa68:
    uVar46 = (ulong)uVar41;
    uVar42 = uVar46 * 4;
    uVar49 = uVar46 * 8;
    uVar43 = Memory::alloc_static(uVar42,false);
    *(undefined8 *)(this + 0x10) = uVar43;
    pvVar45 = (void *)Memory::alloc_static(uVar49,false);
    *(void **)(this + 8) = pvVar45;
    if (uVar41 != 0) {
      pvVar5 = *(void **)(this + 0x10);
      if ((pvVar5 < (void *)((long)pvVar45 + uVar49)) && (pvVar45 < (void *)((long)pvVar5 + uVar42))
         ) {
        uVar42 = 0;
        do {
          *(undefined4 *)((long)pvVar5 + uVar42 * 4) = 0;
          *(undefined8 *)((long)pvVar45 + uVar42 * 8) = 0;
          uVar42 = uVar42 + 1;
        } while (uVar46 != uVar42);
LAB_0010a49c:
        iVar47 = *(int *)(this + 0x2c);
      }
      else {
        memset(pvVar5,0,uVar42);
        memset(pvVar45,0,uVar49);
        iVar47 = *(int *)(this + 0x2c);
      }
LAB_0010a4a5:
      if (iVar47 != 0) {
        uVar42 = (ulong)*(uint *)(this + 0x28);
        lVar55 = *(long *)(this + 0x10);
        iVar54 = *(int *)param_1;
        iVar57 = *(int *)(param_1 + 4);
        goto LAB_0010a4d2;
      }
      goto LAB_0010a60e;
    }
    iVar47 = *(int *)(this + 0x2c);
    if (pvVar45 != (void *)0x0) goto LAB_0010a4a5;
  }
  else {
    iVar47 = *(int *)(this + 0x2c);
    if (iVar47 != 0) {
      uVar49 = *(ulong *)(hash_table_size_primes_inv + uVar42 * 8);
      iVar54 = *(int *)param_1;
      iVar57 = *(int *)(param_1 + 4);
      uVar40 = (iVar54 * 0x16a88000 | (uint)(iVar54 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ 0x7f07c65
      ;
      uVar40 = (uVar40 << 0xd | uVar40 >> 0x13) * 5 + 0xe6546b64 ^
               (iVar57 * 0x16a88000 | (uint)(iVar57 * -0x3361d2af) >> 0x11) * 0x1b873593;
      uVar40 = (uVar40 << 0xd | uVar40 >> 0x13) * 5 + 0xe6546b64;
      uVar40 = (uVar40 >> 0x10 ^ uVar40) * -0x7a143595;
      uVar40 = (uVar40 ^ uVar40 >> 0xd) * -0x3d4d51cb;
      uVar59 = uVar40 ^ uVar40 >> 0x10;
      if (uVar40 == uVar40 >> 0x10) {
        uVar59 = 1;
        uVar46 = uVar49;
      }
      else {
        uVar46 = uVar59 * uVar49;
      }
      uVar52 = CONCAT44(0,uVar41);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar52;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar46;
      lVar48 = SUB168(auVar6 * auVar22,8);
      lVar55 = *(long *)(this + 0x10);
      uVar60 = SUB164(auVar6 * auVar22,8);
      uVar40 = *(uint *)(lVar55 + lVar48 * 4);
      uVar46 = (ulong)uVar40;
      if (uVar40 != 0) {
        uVar40 = 0;
        do {
          if (uVar59 == (uint)uVar46) {
            cVar39 = Vector2i::operator==
                               ((Vector2i *)(*(long *)(lVar50 + lVar48 * 8) + 0x10),param_1);
            if (cVar39 != '\0') {
              pauVar44 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar60 * 8);
              goto LAB_0010a9e8;
            }
            lVar50 = *(long *)(this + 8);
            lVar55 = *(long *)(this + 0x10);
          }
          uVar40 = uVar40 + 1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (uVar60 + 1) * uVar49;
          auVar23._8_8_ = 0;
          auVar23._0_8_ = uVar52;
          lVar48 = SUB168(auVar7 * auVar23,8);
          uVar56 = *(uint *)(lVar55 + lVar48 * 4);
          uVar46 = (ulong)uVar56;
          uVar60 = SUB164(auVar7 * auVar23,8);
        } while ((uVar56 != 0) &&
                (auVar8._8_8_ = 0, auVar8._0_8_ = uVar46 * uVar49, auVar24._8_8_ = 0,
                auVar24._0_8_ = uVar52, auVar9._8_8_ = 0,
                auVar9._0_8_ = ((uVar60 + uVar41) - SUB164(auVar8 * auVar24,8)) * uVar49,
                auVar25._8_8_ = 0, auVar25._0_8_ = uVar52, uVar40 <= SUB164(auVar9 * auVar25,8)));
        uVar41 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        if (lVar50 == 0) goto LAB_0010aa68;
        goto LAB_0010a49c;
      }
LAB_0010a4d2:
      uVar59 = *(uint *)(hash_table_size_primes + uVar42 * 4);
      uVar42 = *(ulong *)(hash_table_size_primes_inv + uVar42 * 8);
      uVar40 = (iVar54 * 0x16a88000 | (uint)(iVar54 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ 0x7f07c65
      ;
      uVar40 = (iVar57 * 0x16a88000 | (uint)(iVar57 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
               (uVar40 << 0xd | uVar40 >> 0x13) * 5 + 0xe6546b64;
      uVar40 = (uVar40 << 0xd | uVar40 >> 0x13) * 5 + 0xe6546b64;
      uVar40 = (uVar40 >> 0x10 ^ uVar40) * -0x7a143595;
      uVar40 = (uVar40 ^ uVar40 >> 0xd) * -0x3d4d51cb;
      uVar60 = uVar40 ^ uVar40 >> 0x10;
      if (uVar40 == uVar40 >> 0x10) {
        uVar60 = 1;
        uVar49 = uVar42;
      }
      else {
        uVar49 = uVar60 * uVar42;
      }
      uVar46 = CONCAT44(0,uVar59);
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar46;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar49;
      lVar50 = SUB168(auVar10 * auVar26,8);
      uVar40 = *(uint *)(lVar55 + lVar50 * 4);
      uVar49 = (ulong)uVar40;
      uVar56 = SUB164(auVar10 * auVar26,8);
      if (uVar40 != 0) {
        uVar40 = 0;
        do {
          if (uVar60 == (uint)uVar49) {
            cVar39 = Vector2i::operator==
                               ((Vector2i *)(*(long *)(*(long *)(this + 8) + lVar50 * 8) + 0x10),
                                param_1);
            if (cVar39 != '\0') {
              pauVar44 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar56 * 8);
              *(undefined4 *)(pauVar44[1] + 8) = 0;
              goto LAB_0010a9e8;
            }
            lVar55 = *(long *)(this + 0x10);
          }
          uVar40 = uVar40 + 1;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (uVar56 + 1) * uVar42;
          auVar27._8_8_ = 0;
          auVar27._0_8_ = uVar46;
          lVar50 = SUB168(auVar11 * auVar27,8);
          uVar3 = *(uint *)(lVar55 + lVar50 * 4);
          uVar49 = (ulong)uVar3;
          uVar56 = SUB164(auVar11 * auVar27,8);
        } while ((uVar3 != 0) &&
                (auVar12._8_8_ = 0, auVar12._0_8_ = uVar49 * uVar42, auVar28._8_8_ = 0,
                auVar28._0_8_ = uVar46, auVar13._8_8_ = 0,
                auVar13._0_8_ = ((uVar59 + uVar56) - SUB164(auVar12 * auVar28,8)) * uVar42,
                auVar29._8_8_ = 0, auVar29._0_8_ = uVar46, uVar40 <= SUB164(auVar13 * auVar29,8)));
        iVar47 = *(int *)(this + 0x2c);
      }
    }
LAB_0010a60e:
    uVar46 = (ulong)uVar41;
  }
  if ((float)uVar46 * __LC50 < (float)(iVar47 + 1)) {
    uVar41 = *(uint *)(this + 0x28);
    if (uVar41 == 0x1c) {
      pauVar44 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010a9e8;
    }
    uVar42 = (ulong)(uVar41 + 1);
    uVar40 = *(uint *)(hash_table_size_primes + (ulong)uVar41 * 4);
    *(undefined4 *)(this + 0x2c) = 0;
    if (uVar41 + 1 < 2) {
      uVar42 = 2;
    }
    uVar41 = *(uint *)(hash_table_size_primes + uVar42 * 4);
    *(int *)(this + 0x28) = (int)uVar42;
    pvVar45 = *(void **)(this + 8);
    uVar46 = (ulong)uVar41;
    uVar42 = uVar46 * 4;
    pvVar5 = *(void **)(this + 0x10);
    uVar49 = uVar46 * 8;
    uVar43 = Memory::alloc_static(uVar42,false);
    *(undefined8 *)(this + 0x10) = uVar43;
    __s_00 = (void *)Memory::alloc_static(uVar49,false);
    *(void **)(this + 8) = __s_00;
    if (uVar41 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar49)) && (__s_00 < (void *)((long)__s + uVar42))) {
        uVar42 = 0;
        do {
          *(undefined4 *)((long)__s + uVar42 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar42 * 8) = 0;
          uVar42 = uVar42 + 1;
        } while (uVar46 != uVar42);
      }
      else {
        memset(__s,0,uVar42);
        memset(__s_00,0,uVar49);
      }
    }
    uVar42 = 0;
    if (uVar40 != 0) {
      do {
        uVar41 = *(uint *)((long)pvVar5 + uVar42 * 4);
        if (uVar41 != 0) {
          uVar56 = 0;
          lVar50 = *(long *)(this + 0x10);
          uVar59 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar49 = CONCAT44(0,uVar59);
          lVar55 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar14._8_8_ = 0;
          auVar14._0_8_ = (ulong)uVar41 * lVar55;
          auVar30._8_8_ = 0;
          auVar30._0_8_ = uVar49;
          lVar48 = SUB168(auVar14 * auVar30,8);
          puVar1 = (uint *)(lVar50 + lVar48 * 4);
          iVar47 = SUB164(auVar14 * auVar30,8);
          uVar60 = *puVar1;
          uVar43 = *(undefined8 *)((long)pvVar45 + uVar42 * 8);
          while (uVar60 != 0) {
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)uVar60 * lVar55;
            auVar31._8_8_ = 0;
            auVar31._0_8_ = uVar49;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = (ulong)((uVar59 + iVar47) - SUB164(auVar15 * auVar31,8)) * lVar55;
            auVar32._8_8_ = 0;
            auVar32._0_8_ = uVar49;
            local_b8 = SUB164(auVar16 * auVar32,8);
            uVar53 = uVar43;
            if (local_b8 < uVar56) {
              *puVar1 = uVar41;
              puVar2 = (undefined8 *)((long)__s_00 + lVar48 * 8);
              uVar53 = *puVar2;
              *puVar2 = uVar43;
              uVar41 = uVar60;
              uVar56 = local_b8;
            }
            uVar56 = uVar56 + 1;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = (ulong)(iVar47 + 1) * lVar55;
            auVar33._8_8_ = 0;
            auVar33._0_8_ = uVar49;
            lVar48 = SUB168(auVar17 * auVar33,8);
            puVar1 = (uint *)(lVar50 + lVar48 * 4);
            iVar47 = SUB164(auVar17 * auVar33,8);
            uVar43 = uVar53;
            uVar60 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar48 * 8) = uVar43;
          *puVar1 = uVar41;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar42 = uVar42 + 1;
      } while (uVar42 != uVar40);
      Memory::free_static(pvVar45,false);
      Memory::free_static(pvVar5,false);
    }
  }
  uVar43 = *(undefined8 *)param_1;
  pauVar44 = (undefined1 (*) [16])operator_new(0x20,"");
  *pauVar44 = (undefined1  [16])0x0;
  *(undefined4 *)(pauVar44[1] + 8) = 0;
  *(undefined8 *)pauVar44[1] = uVar43;
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar44;
  }
  else {
    *puVar2 = pauVar44;
    *(undefined8 **)(*pauVar44 + 8) = puVar2;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar44;
  uVar41 = (*(int *)param_1 * 0x16a88000 | (uint)(*(int *)param_1 * -0x3361d2af) >> 0x11) *
           0x1b873593 ^ 0x7f07c65;
  uVar41 = (uVar41 << 0xd | uVar41 >> 0x13) * 5 + 0xe6546b64 ^
           (*(int *)(param_1 + 4) * 0x16a88000 | (uint)(*(int *)(param_1 + 4) * -0x3361d2af) >> 0x11
           ) * 0x1b873593;
  uVar41 = (uVar41 << 0xd | uVar41 >> 0x13) * 5 + 0xe6546b64;
  uVar41 = (uVar41 >> 0x10 ^ uVar41) * -0x7a143595;
  uVar40 = (uVar41 ^ uVar41 >> 0xd) * -0x3d4d51cb;
  uVar41 = uVar40 ^ uVar40 >> 0x10;
  if (uVar40 == uVar40 >> 0x10) {
    uVar42 = 1;
    uVar41 = 1;
  }
  else {
    uVar42 = (ulong)uVar41;
  }
  uVar60 = 0;
  lVar50 = *(long *)(this + 0x10);
  lVar55 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar49 = CONCAT44(0,uVar40);
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar42 * lVar55;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = uVar49;
  lVar51 = SUB168(auVar18 * auVar34,8);
  lVar48 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar50 + lVar51 * 4);
  iVar47 = SUB164(auVar18 * auVar34,8);
  uVar59 = *puVar1;
  pauVar38 = pauVar44;
  while (uVar59 != 0) {
    auVar19._8_8_ = 0;
    auVar19._0_8_ = (ulong)uVar59 * lVar55;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar49;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = (ulong)((uVar40 + iVar47) - SUB164(auVar19 * auVar35,8)) * lVar55;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = uVar49;
    local_b8 = SUB164(auVar20 * auVar36,8);
    pauVar58 = pauVar38;
    if (local_b8 < uVar60) {
      *puVar1 = uVar41;
      puVar2 = (undefined8 *)(lVar48 + lVar51 * 8);
      pauVar58 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar38;
      uVar41 = uVar59;
      uVar60 = local_b8;
    }
    uVar60 = uVar60 + 1;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = (ulong)(iVar47 + 1) * lVar55;
    auVar37._8_8_ = 0;
    auVar37._0_8_ = uVar49;
    lVar51 = SUB168(auVar21 * auVar37,8);
    puVar1 = (uint *)(lVar50 + lVar51 * 4);
    iVar47 = SUB164(auVar21 * auVar37,8);
    pauVar38 = pauVar58;
    uVar59 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar48 + lVar51 * 8) = pauVar38;
  *puVar1 = uVar41;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0010a9e8:
  if (lVar4 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar44[1] + 8;
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
  String::split(local_58,SUB81(param_1,0),0x10abdd);
  if ((local_50 != (long *)0x0) && (2 < local_50[-1])) {
    local_60 = 0;
    local_48 = &_LC57;
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
        goto LAB_0010acad;
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
  local_48 = &_LC57;
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
LAB_0010acad:
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



/* MethodBindT<Ref<Material> const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Ref<Material>const&>::_gen_argument_type_info(int param_1)

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
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  int local_50;
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
  if (in_EDX != 0) goto LAB_0010ae79;
  local_78 = 0;
  local_68 = "Material";
  local_80 = 0;
  local_60._0_8_ = 8;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (char *)CONCAT44(local_68._4_4_,0x18);
  local_50 = 0x11;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0010b04d:
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
    if (local_50 == 0x11) goto LAB_0010b04d;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
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
  puVar6[6] = local_50;
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
LAB_0010ae79:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar6;
}



/* MethodBind* create_method_bind<MeshDataTool, Error, Ref<ArrayMesh> const&>(Error
   (MeshDataTool::*)(Ref<ArrayMesh> const&)) */

MethodBind *
create_method_bind<MeshDataTool,Error,Ref<ArrayMesh>const&>(_func_Error_Ref_ptr *param_1)

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
  *(_func_Error_Ref_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011db90;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "MeshDataTool";
  local_30 = 0xc;
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



/* HashMap<Vector2i, int, HashMapHasherDefault, HashMapComparatorDefault<Vector2i>,
   DefaultTypedAllocator<HashMapElement<Vector2i, int> > >::_lookup_pos(Vector2i const&, unsigned
   int&) const */

undefined8 __thiscall
HashMap<Vector2i,int,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,int>>>
::_lookup_pos(HashMap<Vector2i,int,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,int>>>
              *this,Vector2i *param_1,uint *param_2)

{
  uint uVar1;
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
  undefined8 uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  
  if ((*(long *)(this + 8) != 0) && (*(int *)(this + 0x2c) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar2 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar11 = (*(int *)param_1 * 0x16a88000 | (uint)(*(int *)param_1 * -0x3361d2af) >> 0x11) *
             0x1b873593 ^ 0x7f07c65;
    uVar11 = (uVar11 << 0xd | uVar11 >> 0x13) * 5 + 0xe6546b64 ^
             (*(int *)(param_1 + 4) * 0x16a88000 |
             (uint)(*(int *)(param_1 + 4) * -0x3361d2af) >> 0x11) * 0x1b873593;
    uVar11 = (uVar11 << 0xd | uVar11 >> 0x13) * 5 + 0xe6546b64;
    uVar11 = (uVar11 >> 0x10 ^ uVar11) * -0x7a143595;
    uVar11 = (uVar11 ^ uVar11 >> 0xd) * -0x3d4d51cb;
    uVar17 = uVar11 ^ uVar11 >> 0x10;
    if (uVar11 == uVar11 >> 0x10) {
      uVar17 = 1;
      uVar14 = uVar2;
    }
    else {
      uVar14 = uVar17 * uVar2;
    }
    uVar16 = CONCAT44(0,uVar1);
    lVar18 = *(long *)(this + 0x10);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar16;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar14;
    lVar15 = SUB168(auVar3 * auVar7,8);
    uVar11 = *(uint *)(lVar18 + lVar15 * 4);
    uVar13 = SUB164(auVar3 * auVar7,8);
    if (uVar11 != 0) {
      uVar19 = 0;
      do {
        if (uVar17 == uVar11) {
          uVar12 = Vector2i::operator==
                             ((Vector2i *)(*(long *)(*(long *)(this + 8) + lVar15 * 8) + 0x10),
                              param_1);
          if ((char)uVar12 != '\0') {
            *param_2 = uVar13;
            return uVar12;
          }
          lVar18 = *(long *)(this + 0x10);
        }
        uVar19 = uVar19 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (uVar13 + 1) * uVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar16;
        lVar15 = SUB168(auVar4 * auVar8,8);
        uVar11 = *(uint *)(lVar18 + lVar15 * 4);
        uVar13 = SUB164(auVar4 * auVar8,8);
      } while ((uVar11 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = uVar11 * uVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar16, auVar6._8_8_ = 0,
              auVar6._0_8_ = ((uVar1 + uVar13) - SUB164(auVar5 * auVar9,8)) * uVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar16, uVar19 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
}



/* Ref<ArrayMesh>::unref() */

void __thiscall Ref<ArrayMesh>::unref(Ref<ArrayMesh> *this)

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



/* MethodBind* create_method_bind<MeshDataTool>(void (MeshDataTool::*)()) */

MethodBind * create_method_bind<MeshDataTool>(_func_void *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0011dbf0;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "MeshDataTool";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<MeshDataTool, Error, Ref<ArrayMesh> const&, int>(Error
   (MeshDataTool::*)(Ref<ArrayMesh> const&, int)) */

MethodBind *
create_method_bind<MeshDataTool,Error,Ref<ArrayMesh>const&,int>(_func_Error_Ref_ptr_int *param_1)

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
  *(_func_Error_Ref_ptr_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011dc50;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "MeshDataTool";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<MeshDataTool, Error, Ref<ArrayMesh> const&, unsigned long>(Error
   (MeshDataTool::*)(Ref<ArrayMesh> const&, unsigned long)) */

MethodBind *
create_method_bind<MeshDataTool,Error,Ref<ArrayMesh>const&,unsigned_long>
          (_func_Error_Ref_ptr_ulong *param_1)

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
  *(_func_Error_Ref_ptr_ulong **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011dcb0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "MeshDataTool";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<MeshDataTool, unsigned long>(unsigned long (MeshDataTool::*)()
   const) */

MethodBind * create_method_bind<MeshDataTool,unsigned_long>(_func_ulong *param_1)

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
  *(_func_ulong **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011dd10;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "MeshDataTool";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<MeshDataTool, int>(int (MeshDataTool::*)() const) */

MethodBind * create_method_bind<MeshDataTool,int>(_func_int *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0011dd70;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "MeshDataTool";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<MeshDataTool, int, Vector3 const&>(void (MeshDataTool::*)(int,
   Vector3 const&)) */

MethodBind *
create_method_bind<MeshDataTool,int,Vector3_const&>(_func_void_int_Vector3_ptr *param_1)

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
  *(_func_void_int_Vector3_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011ddd0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "MeshDataTool";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<MeshDataTool, Vector3, int>(Vector3 (MeshDataTool::*)(int) const)
    */

MethodBind * create_method_bind<MeshDataTool,Vector3,int>(_func_Vector3_int *param_1)

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
  *(_func_Vector3_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011de30;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "MeshDataTool";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<MeshDataTool, int, Plane const&>(void (MeshDataTool::*)(int, Plane
   const&)) */

MethodBind * create_method_bind<MeshDataTool,int,Plane_const&>(_func_void_int_Plane_ptr *param_1)

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
  *(_func_void_int_Plane_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011de90;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "MeshDataTool";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<MeshDataTool, Plane, int>(Plane (MeshDataTool::*)(int) const) */

MethodBind * create_method_bind<MeshDataTool,Plane,int>(_func_Plane_int *param_1)

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
  *(_func_Plane_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011def0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "MeshDataTool";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<MeshDataTool, int, Vector2 const&>(void (MeshDataTool::*)(int,
   Vector2 const&)) */

MethodBind *
create_method_bind<MeshDataTool,int,Vector2_const&>(_func_void_int_Vector2_ptr *param_1)

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
  *(_func_void_int_Vector2_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011df50;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "MeshDataTool";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<MeshDataTool, Vector2, int>(Vector2 (MeshDataTool::*)(int) const)
    */

MethodBind * create_method_bind<MeshDataTool,Vector2,int>(_func_Vector2_int *param_1)

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
  *(_func_Vector2_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011dfb0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "MeshDataTool";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<MeshDataTool, int, Color const&>(void (MeshDataTool::*)(int, Color
   const&)) */

MethodBind * create_method_bind<MeshDataTool,int,Color_const&>(_func_void_int_Color_ptr *param_1)

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
  *(_func_void_int_Color_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011e010;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "MeshDataTool";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<MeshDataTool, Color, int>(Color (MeshDataTool::*)(int) const) */

MethodBind * create_method_bind<MeshDataTool,Color,int>(_func_Color_int *param_1)

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
  *(_func_Color_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011e070;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "MeshDataTool";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<MeshDataTool, int, Vector<int> const&>(void (MeshDataTool::*)(int,
   Vector<int> const&)) */

MethodBind *
create_method_bind<MeshDataTool,int,Vector<int>const&>(_func_void_int_Vector_ptr *param_1)

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
  *(_func_void_int_Vector_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011e0d0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "MeshDataTool";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<MeshDataTool, Vector<int>, int>(Vector<int> (MeshDataTool::*)(int)
   const) */

MethodBind * create_method_bind<MeshDataTool,Vector<int>,int>(_func_Vector_int *param_1)

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
  *(_func_Vector_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011e130;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "MeshDataTool";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<MeshDataTool, int, Vector<float> const&>(void
   (MeshDataTool::*)(int, Vector<float> const&)) */

MethodBind *
create_method_bind<MeshDataTool,int,Vector<float>const&>(_func_void_int_Vector_ptr *param_1)

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
  *(_func_void_int_Vector_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011e190;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "MeshDataTool";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<MeshDataTool, Vector<float>, int>(Vector<float>
   (MeshDataTool::*)(int) const) */

MethodBind * create_method_bind<MeshDataTool,Vector<float>,int>(_func_Vector_int *param_1)

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
  *(_func_Vector_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011e1f0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "MeshDataTool";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<MeshDataTool, int, Variant const&>(void (MeshDataTool::*)(int,
   Variant const&)) */

MethodBind *
create_method_bind<MeshDataTool,int,Variant_const&>(_func_void_int_Variant_ptr *param_1)

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
  *(_func_void_int_Variant_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011e250;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "MeshDataTool";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<MeshDataTool, Variant, int>(Variant (MeshDataTool::*)(int) const)
    */

MethodBind * create_method_bind<MeshDataTool,Variant,int>(_func_Variant_int *param_1)

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
  *(_func_Variant_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011e2b0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "MeshDataTool";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<MeshDataTool, int, int, int>(int (MeshDataTool::*)(int, int)
   const) */

MethodBind * create_method_bind<MeshDataTool,int,int,int>(_func_int_int_int *param_1)

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
  *(_func_int_int_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011e310;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "MeshDataTool";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<MeshDataTool, Ref<Material> const&>(void
   (MeshDataTool::*)(Ref<Material> const&)) */

MethodBind * create_method_bind<MeshDataTool,Ref<Material>const&>(_func_void_Ref_ptr *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0011e370;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "MeshDataTool";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<MeshDataTool, Ref<Material>>(Ref<Material> (MeshDataTool::*)()
   const) */

MethodBind * create_method_bind<MeshDataTool,Ref<Material>>(_func_Ref *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0011e3d0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "MeshDataTool";
  local_30 = 0xc;
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



/* MeshDataTool::_initialize_classv() */

void MeshDataTool::_initialize_classv(void)

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
    local_48 = "MeshDataTool";
    local_60 = 0;
    local_40 = 0xc;
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



/* CowData<Vector3>::_unref() */

void __thiscall CowData<Vector3>::_unref(CowData<Vector3> *this)

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



/* CowData<Vector2>::_unref() */

void __thiscall CowData<Vector2>::_unref(CowData<Vector2> *this)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<int>::resize<false>(long) */

undefined8 __thiscall CowData<int>::resize<false>(CowData<int> *this,long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
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
    lVar2 = 0;
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
    lVar2 = lVar6 * 4;
    if (lVar2 != 0) {
      uVar3 = lVar2 - 1U | lVar2 - 1U >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = uVar3 | uVar3 >> 0x10;
      lVar2 = (uVar3 | uVar3 >> 0x20) + 1;
    }
  }
  if (param_1 * 4 != 0) {
    uVar3 = param_1 * 4 - 1;
    uVar3 = uVar3 | uVar3 >> 1;
    uVar3 = uVar3 | uVar3 >> 2;
    uVar3 = uVar3 | uVar3 >> 4;
    uVar3 = uVar3 | uVar3 >> 8;
    uVar3 = uVar3 | uVar3 >> 0x10;
    uVar3 = uVar3 | uVar3 >> 0x20;
    if (uVar3 != 0xffffffffffffffff) {
      if (lVar6 < param_1) {
        if (uVar3 + 1 == lVar2) {
          puVar4 = *(undefined8 **)this;
          if (puVar4 == (undefined8 *)0x0) goto LAB_0010d301;
        }
        else {
          if (lVar6 == 0) {
            puVar4 = (undefined8 *)Memory::alloc_static(uVar3 + 0x11,false);
            if (puVar4 == (undefined8 *)0x0) {
              _err_print_error("resize","./core/templates/cowdata.h",0x171,
                               "Parameter \"mem_new\" is null.",0,0);
              return 6;
            }
            *puVar4 = 1;
            puVar4[1] = 0;
          }
          else {
            puVar4 = (undefined8 *)
                     Memory::realloc_static((void *)(*(long *)this + -0x10),uVar3 + 0x11,false);
            if (puVar4 == (undefined8 *)0x0) goto LAB_0010d3c0;
            *puVar4 = 1;
          }
          puVar4 = puVar4 + 2;
          *(undefined8 **)this = puVar4;
        }
        puVar4[-1] = param_1;
      }
      else {
        puVar4 = *(undefined8 **)this;
        if (uVar3 + 1 == lVar2) {
          if (puVar4 == (undefined8 *)0x0) {
LAB_0010d301:
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        else {
          puVar5 = (undefined8 *)Memory::realloc_static(puVar4 + -2,uVar3 + 0x11,false);
          if (puVar5 == (undefined8 *)0x0) {
LAB_0010d3c0:
            _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                             "Parameter \"mem_new\" is null.",0,0);
            return 6;
          }
          puVar4 = puVar5 + 2;
          *puVar5 = 1;
          *(undefined8 **)this = puVar4;
        }
        puVar4[-1] = param_1;
      }
      return 0;
    }
  }
  _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                   "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                   ,0,0);
  return 6;
}



/* CowData<float>::_unref() */

void __thiscall CowData<float>::_unref(CowData<float> *this)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<float>::resize<false>(long) */

undefined8 __thiscall CowData<float>::resize<false>(CowData<float> *this,long param_1)

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
    lVar3 = lVar7 * 4;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 4 != 0) {
    uVar4 = param_1 * 4 - 1;
    uVar4 = uVar4 | uVar4 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = uVar4 | uVar4 >> 0x20;
    if (uVar4 != 0xffffffffffffffff) {
      if (lVar7 < param_1) {
        if (uVar4 + 1 == lVar3) {
          puVar5 = *(undefined8 **)this;
          if (puVar5 == (undefined8 *)0x0) goto LAB_0010d5e9;
        }
        else {
          if (lVar7 == 0) {
            puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
            if (puVar5 == (undefined8 *)0x0) {
              _err_print_error("resize","./core/templates/cowdata.h",0x171,
                               "Parameter \"mem_new\" is null.",0,0);
              return 6;
            }
            *puVar5 = 1;
            puVar5[1] = 0;
          }
          else {
            puVar5 = (undefined8 *)
                     Memory::realloc_static((void *)(*(long *)this + -0x10),uVar4 + 0x11,false);
            if (puVar5 == (undefined8 *)0x0) goto LAB_0010d6d0;
            *puVar5 = 1;
          }
          puVar5 = puVar5 + 2;
          *(undefined8 **)this = puVar5;
        }
        puVar5[-1] = param_1;
      }
      else {
        puVar5 = *(undefined8 **)this;
        if (uVar4 + 1 == lVar3) {
          if (puVar5 == (undefined8 *)0x0) {
LAB_0010d5e9:
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
        else {
          puVar6 = (undefined8 *)Memory::realloc_static(puVar5 + -2,uVar4 + 0x11,false);
          if (puVar6 == (undefined8 *)0x0) {
LAB_0010d6d0:
            _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                             "Parameter \"mem_new\" is null.",0,0);
            return 6;
          }
          puVar5 = puVar6 + 2;
          *puVar6 = 1;
          *(undefined8 **)this = puVar5;
        }
        puVar5[-1] = param_1;
      }
      return 0;
    }
  }
  _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                   "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                   ,0,0);
  return 6;
}



/* CowData<Color>::_unref() */

void __thiscall CowData<Color>::_unref(CowData<Color> *this)

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



/* CowData<MeshDataTool::Vertex>::_unref() */

void __thiscall CowData<MeshDataTool::Vertex>::_unref(CowData<MeshDataTool::Vertex> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  int *piVar6;
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
        piVar6 = (int *)(lVar2 + 0x88);
        lVar7 = 0;
        do {
          if (Variant::needs_deinit[*piVar6] != '\0') {
            Variant::_clear_internal();
          }
          if (*(long *)(piVar6 + -2) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(piVar6 + -2) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(piVar6 + -2);
              piVar6[-2] = 0;
              piVar6[-1] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (*(long *)(piVar6 + -6) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(piVar6 + -6) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(piVar6 + -6);
              piVar6[-6] = 0;
              piVar6[-5] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (*(long *)(piVar6 + -10) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(piVar6 + -10) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(piVar6 + -10);
              piVar6[-10] = 0;
              piVar6[-9] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (*(long *)(piVar6 + -0xe) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(piVar6 + -0xe) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(piVar6 + -0xe);
              piVar6[-0xe] = 0;
              piVar6[-0xd] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          piVar6 = piVar6 + 0x28;
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



/* CowData<MeshDataTool::Vertex>::_realloc(long) */

undefined8 __thiscall
CowData<MeshDataTool::Vertex>::_realloc(CowData<MeshDataTool::Vertex> *this,long param_1)

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



/* CowData<MeshDataTool::Edge>::_unref() */

void __thiscall CowData<MeshDataTool::Edge>::_unref(CowData<MeshDataTool::Edge> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  int *piVar6;
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
        piVar6 = (int *)(lVar2 + 0x18);
        lVar7 = 0;
        do {
          if (Variant::needs_deinit[*piVar6] != '\0') {
            Variant::_clear_internal();
          }
          if (*(long *)(piVar6 + -2) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(piVar6 + -2) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(piVar6 + -2);
              piVar6[-2] = 0;
              piVar6[-1] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          piVar6 = piVar6 + 0xc;
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



/* CowData<MeshDataTool::Face>::_unref() */

void __thiscall CowData<MeshDataTool::Face>::_unref(CowData<MeshDataTool::Face> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  int *piVar5;
  long lVar6;
  
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
        piVar5 = (int *)(lVar2 + 0x18);
        lVar6 = 0;
        do {
          if (Variant::needs_deinit[*piVar5] != '\0') {
            Variant::_clear_internal();
          }
          lVar6 = lVar6 + 1;
          piVar5 = piVar5 + 0xc;
        } while (lVar3 != lVar6);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* MeshDataTool::~MeshDataTool() */

void __thiscall MeshDataTool::~MeshDataTool(MeshDataTool *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0011da30;
  if (*(long *)(this + 0x1b8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x1b8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  CowData<MeshDataTool::Face>::_unref((CowData<MeshDataTool::Face> *)(this + 0x1b0));
  CowData<MeshDataTool::Edge>::_unref((CowData<MeshDataTool::Edge> *)(this + 0x1a0));
  CowData<MeshDataTool::Vertex>::_unref((CowData<MeshDataTool::Vertex> *)(this + 400));
  *(undefined ***)this = &PTR__initialize_classv_0011d8d0;
  Object::~Object((Object *)this);
  return;
}



/* MeshDataTool::~MeshDataTool() */

void __thiscall MeshDataTool::~MeshDataTool(MeshDataTool *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0011da30;
  if (*(long *)(this + 0x1b8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x1b8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  CowData<MeshDataTool::Face>::_unref((CowData<MeshDataTool::Face> *)(this + 0x1b0));
  CowData<MeshDataTool::Edge>::_unref((CowData<MeshDataTool::Edge> *)(this + 0x1a0));
  CowData<MeshDataTool::Vertex>::_unref((CowData<MeshDataTool::Vertex> *)(this + 400));
  *(undefined ***)this = &PTR__initialize_classv_0011d8d0;
  Object::~Object((Object *)this);
  operator_delete(this,0x1c0);
  return;
}



/* CowData<MeshDataTool::Edge>::_realloc(long) */

undefined8 __thiscall
CowData<MeshDataTool::Edge>::_realloc(CowData<MeshDataTool::Edge> *this,long param_1)

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
/* Error CowData<MeshDataTool::Edge>::resize<false>(long) */

undefined8 __thiscall
CowData<MeshDataTool::Edge>::resize<false>(CowData<MeshDataTool::Edge> *this,long param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  
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
    lVar9 = 0;
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
    lVar9 = lVar6 * 0x30;
    if (lVar9 != 0) {
      uVar10 = lVar9 - 1U | lVar9 - 1U >> 1;
      uVar10 = uVar10 | uVar10 >> 2;
      uVar10 = uVar10 | uVar10 >> 4;
      uVar10 = uVar10 | uVar10 >> 8;
      uVar10 = uVar10 | uVar10 >> 0x10;
      lVar9 = (uVar10 | uVar10 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x30 == 0) {
LAB_0010e030:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar10 = param_1 * 0x30 - 1;
  uVar10 = uVar10 >> 1 | uVar10;
  uVar10 = uVar10 | uVar10 >> 2;
  uVar10 = uVar10 | uVar10 >> 4;
  uVar10 = uVar10 | uVar10 >> 8;
  uVar10 = uVar10 | uVar10 >> 0x10;
  uVar10 = uVar10 | uVar10 >> 0x20;
  lVar4 = uVar10 + 1;
  if (lVar4 == 0) goto LAB_0010e030;
  uVar11 = param_1;
  if (param_1 <= lVar6) {
    while (lVar6 = *(long *)this, lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar11) {
        if (lVar4 != lVar9) {
          uVar7 = _realloc(this,lVar4);
          if ((int)uVar7 != 0) {
            return uVar7;
          }
          lVar6 = *(long *)this;
          if (lVar6 == 0) goto LAB_0010df5f;
        }
        *(long *)(lVar6 + -8) = param_1;
        return 0;
      }
      lVar6 = lVar6 + uVar11 * 0x30;
      if (Variant::needs_deinit[*(int *)(lVar6 + 0x18)] != '\0') {
        Variant::_clear_internal();
      }
      if (*(long *)(lVar6 + 0x10) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(lVar6 + 0x10) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *(long *)(lVar6 + 0x10);
          *(undefined8 *)(lVar6 + 0x10) = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      uVar11 = uVar11 + 1;
    }
    goto LAB_0010e086;
  }
  if (lVar4 == lVar9) {
LAB_0010df85:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
LAB_0010e086:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar8[-1];
    if (param_1 <= lVar6) goto LAB_0010dead;
  }
  else {
    if (lVar6 != 0) {
      uVar7 = _realloc(this,lVar4);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      goto LAB_0010df85;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar10 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar6 = 0;
  }
  puVar8 = puVar8 + lVar6 * 6;
  lVar6 = lVar6 + 1;
  *puVar8 = 0;
  puVar8[2] = 0;
  lVar9 = lVar6 * 0x30;
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined1 (*) [16])(puVar8 + 4) = (undefined1  [16])0x0;
  if (lVar6 < param_1) {
    do {
      lVar6 = lVar6 + 1;
      puVar8 = (undefined8 *)(*(long *)this + lVar9);
      lVar9 = lVar9 + 0x30;
      *puVar8 = 0;
      puVar8[2] = 0;
      *(undefined4 *)(puVar8 + 3) = 0;
      *(undefined1 (*) [16])(puVar8 + 4) = (undefined1  [16])0x0;
    } while (param_1 != lVar6);
  }
  puVar8 = *(undefined8 **)this;
  if (puVar8 == (undefined8 *)0x0) {
LAB_0010df5f:
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
LAB_0010dead:
  puVar8[-1] = param_1;
  return 0;
}



/* CowData<MeshDataTool::Face>::_realloc(long) */

undefined8 __thiscall
CowData<MeshDataTool::Face>::_realloc(CowData<MeshDataTool::Face> *this,long param_1)

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
/* Error CowData<MeshDataTool::Face>::resize<false>(long) */

undefined8 __thiscall
CowData<MeshDataTool::Face>::resize<false>(CowData<MeshDataTool::Face> *this,long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
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
    lVar5 = 0;
    lVar6 = 0;
  }
  else {
    lVar5 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar5) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar6 = lVar5 * 0x30;
    if (lVar6 != 0) {
      uVar7 = lVar6 - 1U | lVar6 - 1U >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = uVar7 | uVar7 >> 0x10;
      lVar6 = (uVar7 | uVar7 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x30 == 0) {
LAB_0010e400:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar7 = param_1 * 0x30 - 1;
  uVar7 = uVar7 >> 1 | uVar7;
  uVar7 = uVar7 | uVar7 >> 2;
  uVar7 = uVar7 | uVar7 >> 4;
  uVar7 = uVar7 | uVar7 >> 8;
  uVar7 = uVar7 | uVar7 >> 0x10;
  uVar7 = uVar7 | uVar7 >> 0x20;
  lVar8 = uVar7 + 1;
  if (lVar8 == 0) goto LAB_0010e400;
  if (param_1 <= lVar5) {
    puVar3 = *(undefined8 **)this;
    uVar7 = param_1;
    while (puVar3 != (undefined8 *)0x0) {
      if ((ulong)puVar3[-1] <= uVar7) {
        if (lVar8 == lVar6) goto LAB_0010e34d;
        uVar4 = _realloc(this,lVar8);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        goto LAB_0010e340;
      }
      if (Variant::needs_deinit[*(int *)(puVar3 + uVar7 * 6 + 3)] != '\0') {
        Variant::_clear_internal();
        puVar3 = *(undefined8 **)this;
      }
      uVar7 = uVar7 + 1;
    }
    goto LAB_0010e462;
  }
  if (lVar8 == lVar6) {
LAB_0010e36b:
    puVar3 = *(undefined8 **)this;
    if (puVar3 == (undefined8 *)0x0) {
LAB_0010e462:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar5 = puVar3[-1];
    if (param_1 <= lVar5) goto LAB_0010e34d;
  }
  else {
    if (lVar5 != 0) {
      uVar4 = _realloc(this,lVar8);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0010e36b;
    }
    puVar2 = (undefined8 *)Memory::alloc_static(uVar7 + 0x11,false);
    if (puVar2 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar3 = puVar2 + 2;
    *puVar2 = 1;
    puVar2[1] = 0;
    *(undefined8 **)this = puVar3;
    lVar5 = 0;
  }
  puVar3 = puVar3 + lVar5 * 6;
  *puVar3 = 0;
  *(undefined4 *)(puVar3 + 1) = 0;
  *(undefined8 *)((long)puVar3 + 0xc) = 0;
  *(undefined4 *)((long)puVar3 + 0x14) = 0;
  *(undefined4 *)(puVar3 + 3) = 0;
  *(undefined1 (*) [16])(puVar3 + 4) = (undefined1  [16])0x0;
  lVar5 = lVar5 + 1;
  lVar6 = lVar5 * 0x30;
  if (lVar5 < param_1) {
    do {
      lVar5 = lVar5 + 1;
      puVar3 = (undefined8 *)(*(long *)this + lVar6);
      lVar6 = lVar6 + 0x30;
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined8 *)((long)puVar3 + 0xc) = 0;
      *(undefined4 *)((long)puVar3 + 0x14) = 0;
      *(undefined4 *)(puVar3 + 3) = 0;
      *(undefined1 (*) [16])(puVar3 + 4) = (undefined1  [16])0x0;
    } while (param_1 != lVar5);
  }
LAB_0010e340:
  puVar3 = *(undefined8 **)this;
  if (puVar3 == (undefined8 *)0x0) {
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
LAB_0010e34d:
  puVar3[-1] = param_1;
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x0010e5f8) */
/* WARNING: Removing unreachable block (ram,0x0010e78d) */
/* WARNING: Removing unreachable block (ram,0x0010e799) */
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



/* MethodBindTRC<Ref<Material>>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Ref<Material>>::call
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
      local_58 = (Object *)0x10e7e8;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC128,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e9e0;
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
      Variant::Variant((Variant *)local_48,local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
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
LAB_0010e9e0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, int, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<int,int,int>::validated_call
          (MethodBindTRC<int,int,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  int iVar1;
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
      goto LAB_0010ec91;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8),
                    *(undefined4 *)(param_2[1] + 8));
  *(long *)(param_3 + 8) = (long)iVar1;
LAB_0010ec91:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, int, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<int,int,int>::ptrcall
          (MethodBindTRC<int,int,int> *this,Object *param_1,void **param_2,void *param_3)

{
  int iVar1;
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
      goto LAB_0010ee6e;
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
                    /* WARNING: Load size is inaccurate */
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),**param_2,*param_2[1]);
  *(long *)param_3 = (long)iVar1;
LAB_0010ee6e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Variant, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Variant,int>::validated_call
          (MethodBindTRC<Variant,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f06c;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)((Variant *)local_48,param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  Variant::operator=(param_3,(Variant *)local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_0010f06c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Variant, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Variant,int>::ptrcall
          (MethodBindTRC<Variant,int> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f27b;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar1)((Variant *)local_48,param_1 + *(long *)(this + 0x60),**param_2);
  Variant::operator=((Variant *)param_3,(Variant *)local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_0010f27b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Variant const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int,Variant_const&>::validated_call
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
      goto LAB_0010f5f9;
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
                    /* WARNING: Could not recover jumptable at 0x0010f483. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8),*(undefined8 *)(param_3 + 8));
    return;
  }
LAB_0010f5f9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Variant const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int,Variant_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0010f7d9;
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
                    /* WARNING: Could not recover jumptable at 0x0010f662. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               *(undefined8 *)((long)param_3 + 8));
    return;
  }
LAB_0010f7d9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<float>, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Vector<float>,int>::validated_call
          (MethodBindTRC<Vector<float>,int> *this,Object *param_1,Variant **param_2,Variant *param_3
          )

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
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f87f;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  if (*(long *)(*(long *)(param_3 + 8) + 0x18) != local_40[0]) {
    CowData<float>::_ref((CowData<float> *)(*(long *)(param_3 + 8) + 0x18),(CowData *)local_40);
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
LAB_0010f87f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<float>, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Vector<float>,int>::ptrcall
          (MethodBindTRC<Vector<float>,int> *this,Object *param_1,void **param_2,void *param_3)

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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010fa9a;
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
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),**param_2);
  if (*(long *)((long)param_3 + 8) != local_40[0]) {
    CowData<float>::_ref((CowData<float> *)((long)param_3 + 8),(CowData *)local_40);
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
LAB_0010fa9a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Vector<float> const&>::validated_call(Object*, Variant const**, Variant*) const
    */

void MethodBindT<int,Vector<float>const&>::validated_call
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
      goto LAB_0010fddf;
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
                    /* WARNING: Could not recover jumptable at 0x0010fc8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8),*(long *)(*(long *)(param_3 + 8) + 8) + 0x10);
    return;
  }
LAB_0010fddf:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Vector<float> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int,Vector<float>const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0010ffc9;
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
                    /* WARNING: Could not recover jumptable at 0x0010fe52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               *(undefined8 *)((long)param_3 + 8));
    return;
  }
LAB_0010ffc9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<int>, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Vector<int>,int>::validated_call
          (MethodBindTRC<Vector<int>,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011006f;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  if (*(long *)(*(long *)(param_3 + 8) + 0x18) != local_40[0]) {
    CowData<int>::_ref((CowData<int> *)(*(long *)(param_3 + 8) + 0x18),(CowData *)local_40);
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
LAB_0011006f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<int>, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Vector<int>,int>::ptrcall
          (MethodBindTRC<Vector<int>,int> *this,Object *param_1,void **param_2,void *param_3)

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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011028a;
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
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),**param_2);
  if (*(long *)((long)param_3 + 8) != local_40[0]) {
    CowData<int>::_ref((CowData<int> *)((long)param_3 + 8),(CowData *)local_40);
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
LAB_0011028a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Vector<int> const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int,Vector<int>const&>::validated_call
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
      goto LAB_001105cf;
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
                    /* WARNING: Could not recover jumptable at 0x0011047d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8),*(long *)(*(long *)(param_3 + 8) + 8) + 0x10);
    return;
  }
LAB_001105cf:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Vector<int> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int,Vector<int>const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_001107b9;
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
                    /* WARNING: Could not recover jumptable at 0x00110642. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               *(undefined8 *)((long)param_3 + 8));
    return;
  }
LAB_001107b9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Color, int>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindTRC<Color,int>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_00110811;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(param_1 + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  uVar3 = (*pcVar1)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
                    *(undefined4 *)(*(long *)param_3 + 8));
  *(undefined8 *)(in_RCX + 8) = uVar3;
  *(undefined8 *)(in_RCX + 0x10) = in_XMM1_Qa;
LAB_00110811:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Color, int>::ptrcall(Object*, void const**, void*) const */

void MethodBindTRC<Color,int>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_001109ef;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  uVar3 = (*pcVar1)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
  *in_RCX = uVar3;
  in_RCX[1] = in_XMM1_Qa;
LAB_001109ef:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Color const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int,Color_const&>::validated_call
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
      goto LAB_00110d3f;
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
                    /* WARNING: Could not recover jumptable at 0x00110be9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8),*(long *)(param_3 + 8) + 8);
    return;
  }
LAB_00110d3f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Color const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int,Color_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00110f29;
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
                    /* WARNING: Could not recover jumptable at 0x00110db2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               *(undefined8 *)((long)param_3 + 8));
    return;
  }
LAB_00110f29:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Vector2,int>::validated_call
          (MethodBindTRC<Vector2,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_00110f7a;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar1)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  *(undefined8 *)(param_3 + 8) = uVar3;
LAB_00110f7a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Vector2,int>::ptrcall
          (MethodBindTRC<Vector2,int> *this,Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00111159;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  uVar3 = (*pcVar1)(param_1 + *(long *)(this + 0x60),**param_2);
  *(undefined8 *)param_3 = uVar3;
LAB_00111159:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Vector2 const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int,Vector2_const&>::validated_call
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
      goto LAB_001114af;
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
                    /* WARNING: Could not recover jumptable at 0x00111359. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8),*(long *)(param_3 + 8) + 8);
    return;
  }
LAB_001114af:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Vector2 const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int,Vector2_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00111699;
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
                    /* WARNING: Could not recover jumptable at 0x00111522. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               *(undefined8 *)((long)param_3 + 8));
    return;
  }
LAB_00111699:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Plane, int>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindTRC<Plane,int>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  Variant *pVVar2;
  long in_RCX;
  long in_FS_OFFSET;
  undefined8 in_XMM1_Qa;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar2 = param_2[0x23];
      if (pVVar2 == (Variant *)0x0) {
        pVVar2 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar2 = param_2[1] + 0x20;
    }
    if (local_58 == *(char **)pVVar2) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001116fb;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(param_1 + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  local_48 = (*pcVar1)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
                       *(undefined4 *)(*(long *)param_3 + 8));
  *(undefined8 *)(in_RCX + 8) = local_48;
  *(undefined8 *)(in_RCX + 0x10) = in_XMM1_Qa;
LAB_001116fb:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Plane, int>::ptrcall(Object*, void const**, void*) const */

void MethodBindTRC<Plane,int>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined8 *in_RCX;
  long in_FS_OFFSET;
  undefined8 in_XMM1_Qa;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_58 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001118e9;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  local_48 = (*pcVar1)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
  *in_RCX = local_48;
  in_RCX[1] = in_XMM1_Qa;
LAB_001118e9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Plane const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int,Plane_const&>::validated_call
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
      goto LAB_00111c3f;
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
                    /* WARNING: Could not recover jumptable at 0x00111ae9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8),*(long *)(param_3 + 8) + 8);
    return;
  }
LAB_00111c3f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Plane const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int,Plane_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00111e29;
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
                    /* WARNING: Could not recover jumptable at 0x00111cb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               *(undefined8 *)((long)param_3 + 8));
    return;
  }
LAB_00111e29:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector3, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Vector3,int>::validated_call
          (MethodBindTRC<Vector3,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined1 auVar3 [12];
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00111e81;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  auVar3 = (*pcVar1)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  *(undefined1 (*) [12])(param_3 + 8) = auVar3;
LAB_00111e81:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector3, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Vector3,int>::ptrcall
          (MethodBindTRC<Vector3,int> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined1 auVar3 [12];
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011205f;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  auVar3 = (*pcVar1)(param_1 + *(long *)(this + 0x60),**param_2);
  *(undefined1 (*) [12])param_3 = auVar3;
LAB_0011205f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Vector3 const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int,Vector3_const&>::validated_call
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
      goto LAB_001123af;
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
                    /* WARNING: Could not recover jumptable at 0x00112259. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8),*(long *)(param_3 + 8) + 8);
    return;
  }
LAB_001123af:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Vector3 const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int,Vector3_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00112599;
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
                    /* WARNING: Could not recover jumptable at 0x00112422. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               *(undefined8 *)((long)param_3 + 8));
    return;
  }
LAB_00112599:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC128,"./core/object/method_bind.h",0x267,
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
      goto LAB_00112660;
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
LAB_00112660:
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
      goto LAB_001128c4;
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
LAB_001128c4:
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
      goto LAB_00112a73;
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
LAB_00112a73:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<unsigned long>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<unsigned_long>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  ulong uVar4;
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
      _err_print_error(&_LC128,"./core/object/method_bind.h",0x267,
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
      goto LAB_00112ca0;
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
      uVar4 = (*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,uVar4);
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
LAB_00112ca0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<unsigned long>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<unsigned_long>::validated_call
          (MethodBindTRC<unsigned_long> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_00112f02;
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
LAB_00112f02:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<unsigned long>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<unsigned_long>::ptrcall
          (MethodBindTRC<unsigned_long> *this,Object *param_1,void **param_2,void *param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar3;
  
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
      goto LAB_001130b1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)param_3 = uVar2;
LAB_001130b1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
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
      _err_print_error(&_LC128,"./core/object/method_bind.h",0x154,
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
      goto LAB_00113360;
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
LAB_00113360:
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
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar3;
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
      pVVar3 = param_2[0x23];
      if (pVVar3 == (Variant *)0x0) {
        pVVar3 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar3 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar3) {
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
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
      goto LAB_00113738;
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
                    /* WARNING: Could not recover jumptable at 0x001135c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00113738:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  char *pcVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
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
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar2 = (long *)(local_48 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00113912;
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
                    /* WARNING: Could not recover jumptable at 0x00113796. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00113912:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Material>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Ref<Material>>::ptrcall
          (MethodBindTRC<Ref<Material>> *this,Object *param_1,void **param_2,void *param_3)

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
      local_48 = (Object *)0x10e7e8;
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
      goto LAB_001139d6;
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
    if (pOVar5 == (Object *)0x0) goto LAB_001139d6;
    *(undefined8 *)param_3 = 0;
    goto LAB_00113a19;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_00113a19;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_00113a19:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_001139d6;
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
LAB_001139d6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Material> const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Ref<Material>const&>::validated_call
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
      local_58 = (Object *)0x10e7e8;
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
      goto LAB_00113cd8;
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
  Variant::Variant((Variant *)local_48,*(Object **)(*(long *)param_3 + 0x10));
  local_58 = (Object *)0x0;
  pOVar4 = (Object *)Variant::get_validated_object();
  pOVar2 = local_58;
  if (pOVar4 != local_58) {
    if (pOVar4 == (Object *)0x0) {
      if (local_58 != (Object *)0x0) {
        local_58 = (Object *)0x0;
LAB_00113c96:
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
        local_58 = pOVar4;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_58 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_00113c96;
      }
    }
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
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
LAB_00113cd8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Material> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<Material>const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      local_48 = (Object *)0x10e7e8;
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
      goto LAB_00113f9c;
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
LAB_00113f78:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_00113f78;
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
LAB_00113f9c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, Ref<ArrayMesh> const&>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTR<Error,Ref<ArrayMesh>const&>::validated_call
          (MethodBindTR<Error,Ref<ArrayMesh>const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  uint uVar4;
  Object *pOVar5;
  long *plVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar6 = *(long **)(param_1 + 0x118);
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar6 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_68 == (Object *)*plVar6) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x10e7e8;
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00114257;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar7 = *(code **)(this + 0x58);
  lVar1 = *(long *)(this + 0x60);
  if (((ulong)pcVar7 & 1) != 0) {
    pcVar7 = *(code **)(pcVar7 + *(long *)(param_1 + lVar1) + -1);
  }
  Variant::Variant((Variant *)local_58,*(Object **)(*param_2 + 0x10));
  local_68 = (Object *)0x0;
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar2 = local_68;
  if (pOVar5 != local_68) {
    if (pOVar5 == (Object *)0x0) {
      if (local_68 != (Object *)0x0) {
        local_68 = (Object *)0x0;
LAB_0011420f:
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
      pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&ArrayMesh::typeinfo,0);
      if (pOVar2 != pOVar5) {
        local_68 = pOVar5;
        if (pOVar5 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_68 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_0011420f;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  uVar4 = (*pcVar7)(param_1 + lVar1);
  *(ulong *)(param_3 + 8) = (ulong)uVar4;
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
LAB_00114257:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, Ref<ArrayMesh> const&, int>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTR<Error,Ref<ArrayMesh>const&,int>::validated_call
          (MethodBindTR<Error,Ref<ArrayMesh>const&,int> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  undefined4 uVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  uint uVar5;
  Object *pOVar6;
  long *plVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar7 = *(long **)(param_1 + 0x118);
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar7 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_68 == (Object *)*plVar7) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x10e7e8;
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_001145a6;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar8 = *(code **)(this + 0x58);
  lVar2 = *(long *)(this + 0x60);
  if (((ulong)pcVar8 & 1) != 0) {
    pcVar8 = *(code **)(pcVar8 + *(long *)(param_1 + lVar2) + -1);
  }
  uVar1 = *(undefined4 *)(param_2[1] + 8);
  Variant::Variant((Variant *)local_58,*(Object **)(*param_2 + 0x10));
  local_68 = (Object *)0x0;
  pOVar6 = (Object *)Variant::get_validated_object();
  pOVar3 = local_68;
  if (pOVar6 != local_68) {
    if (pOVar6 == (Object *)0x0) {
      if (local_68 != (Object *)0x0) {
        local_68 = (Object *)0x0;
LAB_0011455a:
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          cVar4 = predelete_handler(pOVar3);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
      }
    }
    else {
      pOVar6 = (Object *)__dynamic_cast(pOVar6,&Object::typeinfo,&ArrayMesh::typeinfo,0);
      if (pOVar3 != pOVar6) {
        local_68 = pOVar6;
        if (pOVar6 != (Object *)0x0) {
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            local_68 = (Object *)0x0;
          }
        }
        if (pOVar3 != (Object *)0x0) goto LAB_0011455a;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  uVar5 = (*pcVar8)(param_1 + lVar2,(StringName *)&local_68,uVar1);
  *(ulong *)(param_3 + 8) = (ulong)uVar5;
  if (local_68 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_68;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_68);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
LAB_001145a6:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, Ref<ArrayMesh> const&, unsigned long>::validated_call(Object*, Variant
   const**, Variant*) const */

void __thiscall
MethodBindTR<Error,Ref<ArrayMesh>const&,unsigned_long>::validated_call
          (MethodBindTR<Error,Ref<ArrayMesh>const&,unsigned_long> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  long lVar1;
  undefined8 uVar2;
  Object *pOVar3;
  char cVar4;
  uint uVar5;
  Object *pOVar6;
  long *plVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar7 = *(long **)(param_1 + 0x118);
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar7 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_68 == (Object *)*plVar7) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x10e7e8;
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_001148f9;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar8 = *(code **)(this + 0x58);
  lVar1 = *(long *)(this + 0x60);
  if (((ulong)pcVar8 & 1) != 0) {
    pcVar8 = *(code **)(pcVar8 + *(long *)(param_1 + lVar1) + -1);
  }
  uVar2 = *(undefined8 *)(param_2[1] + 8);
  Variant::Variant((Variant *)local_58,*(Object **)(*param_2 + 0x10));
  local_68 = (Object *)0x0;
  pOVar6 = (Object *)Variant::get_validated_object();
  pOVar3 = local_68;
  if (pOVar6 != local_68) {
    if (pOVar6 == (Object *)0x0) {
      if (local_68 != (Object *)0x0) {
        local_68 = (Object *)0x0;
LAB_001148ac:
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          cVar4 = predelete_handler(pOVar3);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
      }
    }
    else {
      pOVar6 = (Object *)__dynamic_cast(pOVar6,&Object::typeinfo,&ArrayMesh::typeinfo,0);
      if (pOVar3 != pOVar6) {
        local_68 = pOVar6;
        if (pOVar6 != (Object *)0x0) {
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            local_68 = (Object *)0x0;
          }
        }
        if (pOVar3 != (Object *)0x0) goto LAB_001148ac;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  uVar5 = (*pcVar8)(param_1 + lVar1,(StringName *)&local_68,uVar2);
  *(ulong *)(param_3 + 8) = (ulong)uVar5;
  if (local_68 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_68;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_68);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
LAB_001148f9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, Ref<ArrayMesh> const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Error,Ref<ArrayMesh>const&>::ptrcall
          (MethodBindTR<Error,Ref<ArrayMesh>const&> *this,Object *param_1,void **param_2,
          void *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  uint uVar4;
  long *plVar5;
  code *pcVar6;
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
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x10e7e8;
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_00114bc5;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(this + 0x58);
  lVar1 = *(long *)(this + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)(param_1 + lVar1) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  if (((long *)*param_2 == (long *)0x0) || (local_48 = **param_2, local_48 == (Object *)0x0)) {
LAB_00114b9b:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_00114b9b;
  }
  uVar4 = (*pcVar6)(param_1 + lVar1);
  *(ulong *)param_3 = (ulong)uVar4;
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
LAB_00114bc5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, Ref<ArrayMesh> const&, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Error,Ref<ArrayMesh>const&,int>::ptrcall
          (MethodBindTR<Error,Ref<ArrayMesh>const&,int> *this,Object *param_1,void **param_2,
          void *param_3)

{
  undefined4 uVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  uint uVar5;
  long *plVar6;
  code *pcVar7;
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
      plVar6 = *(long **)(param_1 + 0x118);
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar6 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Object *)*plVar6) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x10e7e8;
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_00114e1e;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar7 = *(code **)(this + 0x58);
  lVar2 = *(long *)(this + 0x60);
  if (((ulong)pcVar7 & 1) != 0) {
    pcVar7 = *(code **)(pcVar7 + *(long *)(param_1 + lVar2) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  uVar1 = *param_2[1];
                    /* WARNING: Load size is inaccurate */
  if (((long *)*param_2 == (long *)0x0) || (local_48 = **param_2, local_48 == (Object *)0x0)) {
LAB_00114df1:
    local_48 = (Object *)0x0;
  }
  else {
    cVar4 = RefCounted::init_ref();
    if (cVar4 == '\0') goto LAB_00114df1;
  }
  uVar5 = (*pcVar7)(param_1 + lVar2,(StringName *)&local_48,uVar1);
  *(ulong *)param_3 = (ulong)uVar5;
  if (local_48 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_48;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_48);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
LAB_00114e1e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, Ref<ArrayMesh> const&, unsigned long>::ptrcall(Object*, void const**, void*)
   const */

void __thiscall
MethodBindTR<Error,Ref<ArrayMesh>const&,unsigned_long>::ptrcall
          (MethodBindTR<Error,Ref<ArrayMesh>const&,unsigned_long> *this,Object *param_1,
          void **param_2,void *param_3)

{
  long lVar1;
  undefined8 uVar2;
  Object *pOVar3;
  char cVar4;
  uint uVar5;
  long *plVar6;
  code *pcVar7;
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
      plVar6 = *(long **)(param_1 + 0x118);
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar6 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Object *)*plVar6) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x10e7e8;
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_00115070;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar7 = *(code **)(this + 0x58);
  lVar1 = *(long *)(this + 0x60);
  if (((ulong)pcVar7 & 1) != 0) {
    pcVar7 = *(code **)(pcVar7 + *(long *)(param_1 + lVar1) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  uVar2 = *param_2[1];
                    /* WARNING: Load size is inaccurate */
  if (((long *)*param_2 == (long *)0x0) || (local_48 = **param_2, local_48 == (Object *)0x0)) {
LAB_00115042:
    local_48 = (Object *)0x0;
  }
  else {
    cVar4 = RefCounted::init_ref();
    if (cVar4 == '\0') goto LAB_00115042;
  }
  uVar5 = (*pcVar7)(param_1 + lVar1,(StringName *)&local_48,uVar2);
  *(ulong *)param_3 = (ulong)uVar5;
  if (local_48 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_48;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_48);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
LAB_00115070:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Material> const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<Ref<Material>const&>::call
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
      local_48 = (Object *)0x10e7e8;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC128,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001153c0;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar7 = 3;
LAB_001153b5:
    *in_R9 = uVar7;
    in_R9[2] = 1;
    goto LAB_001153c0;
  }
  pVVar12 = param_2[5];
  if (pVVar12 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_00115410;
LAB_00115400:
    pVVar12 = *(Variant **)param_4;
  }
  else {
    lVar2 = *(long *)(pVVar12 + -8);
    if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00115410:
      uVar7 = 4;
      goto LAB_001153b5;
    }
    if (in_R8D == 1) goto LAB_00115400;
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
  cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar12);
  uVar4 = _LC133;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  local_48 = (Object *)0x0;
  pOVar8 = (Object *)Variant::get_validated_object();
  pOVar5 = local_48;
  if (pOVar8 != local_48) {
    if (pOVar8 == (Object *)0x0) {
      if (local_48 != (Object *)0x0) {
        local_48 = (Object *)0x0;
LAB_0011552d:
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
      pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&Material::typeinfo,0);
      if (pOVar5 != pOVar8) {
        local_48 = pOVar8;
        if (pOVar8 != (Object *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_48 = (Object *)0x0;
          }
        }
        if (pOVar5 != (Object *)0x0) goto LAB_0011552d;
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
LAB_001153c0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Plane, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Plane,int>::call
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
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
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
      _err_print_error(&_LC128,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00115798;
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
      if (in_R8D != 1) goto LAB_001157e0;
LAB_001157d0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001157e0:
        uVar7 = 4;
        goto LAB_0011578d;
      }
      if (in_R8D == 1) goto LAB_001157d0;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,2);
    uVar4 = _LC134;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar11);
    local_58[0] = (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),iVar6);
    Variant::Variant((Variant *)local_48,(Plane *)local_58);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar7 = 3;
LAB_0011578d:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00115798:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<Vector2, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Vector2,int>::call
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
      _err_print_error(&_LC128,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00115b20;
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
      if (in_R8D != 1) goto LAB_00115b60;
LAB_00115b50:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00115b60:
        uVar7 = 4;
        goto LAB_00115b15;
      }
      if (in_R8D == 1) goto LAB_00115b50;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,2);
    uVar4 = _LC134;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar11);
    local_50 = (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),iVar6);
    Variant::Variant((Variant *)local_48,(Vector2 *)&local_50);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar7 = 3;
LAB_00115b15:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00115b20:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Color, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Color,int>::call
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
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
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
      _err_print_error(&_LC128,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00115ea8;
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
      if (in_R8D != 1) goto LAB_00115ef0;
LAB_00115ee0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00115ef0:
        uVar7 = 4;
        goto LAB_00115e9d;
      }
      if (in_R8D == 1) goto LAB_00115ee0;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,2);
    uVar4 = _LC134;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar11);
    local_58[0] = (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),iVar6);
    Variant::Variant((Variant *)local_48,(Color *)local_58);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar7 = 3;
LAB_00115e9d:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00115ea8:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<Vector<float>, int>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<Vector<float>,int>::call
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
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
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
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_58 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC128,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00116240;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00116280;
LAB_00116270:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00116280:
        uVar7 = 4;
        goto LAB_00116235;
      }
      if (in_R8D == 1) goto LAB_00116270;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,2);
    uVar4 = _LC134;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar11);
    (*(code *)pVVar12)((Vector *)&local_58,(Variant *)((long)plVar10 + (long)pVVar1),iVar6);
    Variant::Variant((Variant *)local_48,(Vector *)&local_58);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
    CowData<float>::_unref((CowData<float> *)&local_50);
  }
  else {
    uVar7 = 3;
LAB_00116235:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00116240:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<int>, int>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindTRC<Vector<int>,int>::call
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
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
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
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_58 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC128,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001165d0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00116610;
LAB_00116600:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00116610:
        uVar7 = 4;
        goto LAB_001165c5;
      }
      if (in_R8D == 1) goto LAB_00116600;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,2);
    uVar4 = _LC134;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar11);
    (*(code *)pVVar12)((Vector *)&local_58,(Variant *)((long)plVar10 + (long)pVVar1),iVar6);
    Variant::Variant((Variant *)local_48,(Vector *)&local_58);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
    CowData<int>::_unref((CowData<int> *)&local_50);
  }
  else {
    uVar7 = 3;
LAB_001165c5:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_001165d0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Variant, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Variant,int>::call
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
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
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
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_58 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC128,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00116940;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00116980;
LAB_00116970:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00116980:
        uVar7 = 4;
        goto LAB_00116935;
      }
      if (in_R8D == 1) goto LAB_00116970;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,2);
    uVar4 = _LC134;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar11);
    (*(code *)pVVar12)(local_48,(Variant *)((long)plVar10 + (long)pVVar1),iVar6);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar7 = 3;
LAB_00116935:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00116940:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector3, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Vector3,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auVar4 [12];
  undefined8 uVar5;
  char cVar6;
  int iVar7;
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
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined1 local_54 [12];
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_68 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC128,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      auVar4._8_4_ = local_54._8_4_;
      auVar4._0_8_ = local_54._0_8_;
      if ((StringName::configured != '\0') && (local_54 = auVar4, local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00116cc8;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar12 = param_2[5];
    if (pVVar12 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00116d10;
LAB_00116d00:
      pVVar12 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00116d10:
        uVar8 = 4;
        goto LAB_00116cbd;
      }
      if (in_R8D == 1) goto LAB_00116d00;
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
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar12,2);
    uVar5 = _LC134;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar5;
    }
    iVar7 = Variant::operator_cast_to_int(pVVar12);
    local_54 = (*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),iVar7);
    Variant::Variant((Variant *)local_48,(Vector3 *)local_54);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar8 = 3;
LAB_00116cbd:
    *in_R9 = uVar8;
    in_R9[2] = 1;
  }
LAB_00116cc8:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<Error, Ref<ArrayMesh> const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Error,Ref<ArrayMesh>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  Object *pOVar9;
  long *plVar10;
  long lVar11;
  undefined4 in_register_00000014;
  long *plVar12;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar13;
  Variant *pVVar14;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar12 != (long *)0x0) && (plVar12[1] != 0)) && (*(char *)(plVar12[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar12[1] == 0) {
      plVar10 = (long *)plVar12[0x23];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
      }
    }
    else {
      plVar10 = (long *)(plVar12[1] + 0x20);
    }
    if (local_58 == (Object *)*plVar10) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x10e7e8;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC128,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001170e8;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar14 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar8 = 3;
LAB_001170dd:
    *in_R9 = uVar8;
    in_R9[2] = 1;
    goto LAB_001170e8;
  }
  pVVar13 = param_2[5];
  if (pVVar13 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_00117130;
LAB_00117120:
    pVVar13 = *(Variant **)param_4;
  }
  else {
    lVar2 = *(long *)(pVVar13 + -8);
    if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00117130:
      uVar8 = 4;
      goto LAB_001170dd;
    }
    if (in_R8D == 1) goto LAB_00117120;
    lVar11 = (long)((int)lVar2 + -1);
    if (lVar2 <= lVar11) {
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar2,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pVVar13 = pVVar13 + lVar11 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar14 & 1) != 0) {
    pVVar14 = *(Variant **)(pVVar14 + *(long *)((long)plVar12 + (long)pVVar1) + -1);
  }
  cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar13);
  uVar4 = _LC133;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  local_58 = (Object *)0x0;
  pOVar9 = (Object *)Variant::get_validated_object();
  pOVar5 = local_58;
  if (pOVar9 != local_58) {
    if (pOVar9 == (Object *)0x0) {
      if (local_58 != (Object *)0x0) {
        local_58 = (Object *)0x0;
LAB_0011724d:
        cVar6 = RefCounted::unreference();
        if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar5), cVar6 != '\0')) {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
      }
    }
    else {
      pOVar9 = (Object *)__dynamic_cast(pOVar9,&Object::typeinfo,&ArrayMesh::typeinfo,0);
      if (pOVar5 != pOVar9) {
        local_58 = pOVar9;
        if ((pOVar9 != (Object *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
          local_58 = (Object *)0x0;
        }
        if (pOVar5 != (Object *)0x0) goto LAB_0011724d;
      }
    }
  }
  iVar7 = (*(code *)pVVar14)((Variant *)((long)plVar12 + (long)pVVar1),&local_58);
  Variant::Variant((Variant *)local_48,iVar7);
  if (Variant::needs_deinit[*(int *)param_1] != '\0') {
    Variant::_clear_internal();
  }
  *(undefined4 *)param_1 = local_48[0];
  *(undefined8 *)(param_1 + 8) = local_40;
  *(undefined8 *)(param_1 + 0x10) = uStack_38;
  if (((local_58 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar5 = local_58, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_58), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
    Memory::free_static(pOVar5,false);
  }
LAB_001170e8:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<Error, Ref<ArrayMesh> const&, int>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Error,Ref<ArrayMesh>const&,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  Object *pOVar9;
  long *plVar10;
  long lVar11;
  undefined4 in_register_00000014;
  long *plVar12;
  Variant *pVVar13;
  int iVar14;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar15;
  Variant *pVVar16;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  Object *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar12 != (long *)0x0) && (plVar12[1] != 0)) && (*(char *)(plVar12[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar12[1] == 0) {
      plVar10 = (long *)plVar12[0x23];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
      }
    }
    else {
      plVar10 = (long *)(plVar12[1] + 0x20);
    }
    if (local_68 == (Object *)*plVar10) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x10e7e8;
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC128,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0);
      pOVar5 = local_68;
      if (local_68 != (Object *)0x0) {
        LOCK();
        pOVar9 = local_68 + -0x10;
        *(long *)pOVar9 = *(long *)pOVar9 + -1;
        UNLOCK();
        if (*(long *)pOVar9 == 0) {
          local_68 = (Object *)0x0;
          Memory::free_static(pOVar5 + -0x10,false);
        }
      }
      lVar2 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar12 = (long *)(local_70 + -0x10);
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_001175b0;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar15 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (2 < in_R8D) {
    uVar8 = 3;
LAB_001175a5:
    *in_R9 = uVar8;
    in_R9[2] = 2;
    goto LAB_001175b0;
  }
  pVVar16 = param_2[5];
  iVar7 = 2 - in_R8D;
  if (pVVar16 == (Variant *)0x0) {
    if (iVar7 != 0) goto LAB_001175e0;
    pVVar13 = *(Variant **)param_4;
LAB_001175fd:
    pVVar16 = *(Variant **)(param_4 + 8);
  }
  else {
    lVar2 = *(long *)(pVVar16 + -8);
    iVar14 = (int)lVar2;
    if (iVar14 < iVar7) {
LAB_001175e0:
      uVar8 = 4;
      goto LAB_001175a5;
    }
    if (in_R8D == 0) {
      lVar11 = (long)(iVar14 + -2);
      if (lVar2 <= lVar11) goto LAB_00117720;
      pVVar13 = pVVar16 + lVar11 * 0x18;
    }
    else {
      pVVar13 = *(Variant **)param_4;
      if (in_R8D == 2) goto LAB_001175fd;
    }
    lVar11 = (long)(int)((in_R8D ^ 1) + (iVar14 - iVar7));
    if (lVar2 <= lVar11) {
LAB_00117720:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar2,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pVVar16 = pVVar16 + lVar11 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar15 & 1) != 0) {
    pVVar15 = *(Variant **)(pVVar15 + *(long *)((long)plVar12 + (long)pVVar1) + -1);
  }
  cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar16,2);
  uVar4 = _LC135;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  iVar7 = Variant::operator_cast_to_int(pVVar16);
  cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar13);
  uVar4 = _LC133;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  local_68 = (Object *)0x0;
  pOVar9 = (Object *)Variant::get_validated_object();
  pOVar5 = local_68;
  if (pOVar9 != local_68) {
    if (pOVar9 == (Object *)0x0) {
      if (local_68 != (Object *)0x0) {
        local_68 = (Object *)0x0;
LAB_00117515:
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
      pOVar9 = (Object *)__dynamic_cast(pOVar9,&Object::typeinfo,&ArrayMesh::typeinfo,0);
      if (pOVar5 != pOVar9) {
        local_68 = pOVar9;
        if (pOVar9 != (Object *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_68 = (Object *)0x0;
          }
        }
        if (pOVar5 != (Object *)0x0) goto LAB_00117515;
      }
    }
  }
  iVar7 = (*(code *)pVVar15)((Variant *)((long)plVar12 + (long)pVVar1),&local_68,iVar7);
  Variant::Variant((Variant *)local_58,iVar7);
  if (Variant::needs_deinit[*(int *)param_1] != '\0') {
    Variant::_clear_internal();
  }
  *(undefined4 *)param_1 = local_58[0];
  *(undefined8 *)(param_1 + 8) = local_50;
  *(undefined8 *)(param_1 + 0x10) = uStack_48;
  if (local_68 != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    pOVar5 = local_68;
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(local_68);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
LAB_001175b0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, Ref<ArrayMesh> const&, unsigned long>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Error,Ref<ArrayMesh>const&,unsigned_long>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  ulong uVar9;
  Object *pOVar10;
  long *plVar11;
  long lVar12;
  undefined4 in_register_00000014;
  long *plVar13;
  Variant *pVVar14;
  int iVar15;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar16;
  Variant *pVVar17;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  Object *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar13 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar13 != (long *)0x0) && (plVar13[1] != 0)) && (*(char *)(plVar13[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar13[1] == 0) {
      plVar11 = (long *)plVar13[0x23];
      if (plVar11 == (long *)0x0) {
        plVar11 = (long *)(**(code **)(*plVar13 + 0x40))(plVar13);
      }
    }
    else {
      plVar11 = (long *)(plVar13[1] + 0x20);
    }
    if (local_68 == (Object *)*plVar11) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x10e7e8;
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC128,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0);
      pOVar5 = local_68;
      if (local_68 != (Object *)0x0) {
        LOCK();
        pOVar10 = local_68 + -0x10;
        *(long *)pOVar10 = *(long *)pOVar10 + -1;
        UNLOCK();
        if (*(long *)pOVar10 == 0) {
          local_68 = (Object *)0x0;
          Memory::free_static(pOVar5 + -0x10,false);
        }
      }
      lVar2 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar13 = (long *)(local_70 + -0x10);
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00117ae0;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar16 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (2 < in_R8D) {
    uVar8 = 3;
LAB_00117ad5:
    *in_R9 = uVar8;
    in_R9[2] = 2;
    goto LAB_00117ae0;
  }
  pVVar17 = param_2[5];
  iVar7 = 2 - in_R8D;
  if (pVVar17 == (Variant *)0x0) {
    if (iVar7 != 0) goto LAB_00117b10;
    pVVar14 = *(Variant **)param_4;
LAB_00117b2d:
    pVVar17 = *(Variant **)(param_4 + 8);
  }
  else {
    lVar2 = *(long *)(pVVar17 + -8);
    iVar15 = (int)lVar2;
    if (iVar15 < iVar7) {
LAB_00117b10:
      uVar8 = 4;
      goto LAB_00117ad5;
    }
    if (in_R8D == 0) {
      lVar12 = (long)(iVar15 + -2);
      if (lVar2 <= lVar12) goto LAB_00117c50;
      pVVar14 = pVVar17 + lVar12 * 0x18;
    }
    else {
      pVVar14 = *(Variant **)param_4;
      if (in_R8D == 2) goto LAB_00117b2d;
    }
    lVar12 = (long)(int)((in_R8D ^ 1) + (iVar15 - iVar7));
    if (lVar2 <= lVar12) {
LAB_00117c50:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar12,lVar2,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pVVar17 = pVVar17 + lVar12 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar16 & 1) != 0) {
    pVVar16 = *(Variant **)(pVVar16 + *(long *)((long)plVar13 + (long)pVVar1) + -1);
  }
  cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar17,2);
  uVar4 = _LC135;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  uVar9 = Variant::operator_cast_to_unsigned_long(pVVar17);
  cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar14);
  uVar4 = _LC133;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  local_68 = (Object *)0x0;
  pOVar10 = (Object *)Variant::get_validated_object();
  pOVar5 = local_68;
  if (pOVar10 != local_68) {
    if (pOVar10 == (Object *)0x0) {
      if (local_68 != (Object *)0x0) {
        local_68 = (Object *)0x0;
LAB_00117a45:
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
      pOVar10 = (Object *)__dynamic_cast(pOVar10,&Object::typeinfo,&ArrayMesh::typeinfo,0);
      if (pOVar5 != pOVar10) {
        local_68 = pOVar10;
        if (pOVar10 != (Object *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_68 = (Object *)0x0;
          }
        }
        if (pOVar5 != (Object *)0x0) goto LAB_00117a45;
      }
    }
  }
  iVar7 = (*(code *)pVVar16)((Variant *)((long)plVar13 + (long)pVVar1),&local_68,uVar9);
  Variant::Variant((Variant *)local_58,iVar7);
  if (Variant::needs_deinit[*(int *)param_1] != '\0') {
    Variant::_clear_internal();
  }
  *(undefined4 *)param_1 = local_58[0];
  *(undefined8 *)(param_1 + 8) = local_50;
  *(undefined8 *)(param_1 + 0x10) = uStack_48;
  if (local_68 != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    pOVar5 = local_68;
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(local_68);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
LAB_00117ae0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Material>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Ref<Material>>::validated_call
          (MethodBindTRC<Ref<Material>> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      local_48 = (Variant **)0x10e7e8;
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
      goto LAB_00117e66;
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
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(Variant ***)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
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
LAB_00117e66:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_retc_dv<__UnexistingClass, int, int, int>(__UnexistingClass*, int
   (__UnexistingClass::*)(int, int) const, Variant const**, int, Variant&, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_retc_dv<__UnexistingClass,int,int,int>
               (__UnexistingClass *param_1,_func_int_int_int *param_2,Variant **param_3,int param_4,
               Variant *param_5,CallError *param_6,Vector *param_7)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long *plVar7;
  long lVar8;
  Variant *this;
  uint uVar9;
  int iVar10;
  int iVar11;
  Variant *this_00;
  long in_FS_OFFSET;
  long in_stack_00000010;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar7 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = (uint)param_5;
  if (uVar9 < 3) {
    lVar1 = *(long *)(in_stack_00000010 + 8);
    iVar10 = 2 - uVar9;
    if (lVar1 == 0) {
      if (iVar10 != 0) goto LAB_00118188;
      this = (Variant *)*plVar7;
LAB_001181dd:
      this_00 = (Variant *)plVar7[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar11 = (int)lVar2;
      if (iVar11 < iVar10) {
LAB_00118188:
        uVar6 = 4;
        goto LAB_0011818d;
      }
      if (uVar9 == 0) {
        lVar8 = (long)(iVar11 + -2);
        if (lVar2 <= lVar8) goto LAB_001181f8;
        this = (Variant *)(lVar1 + lVar8 * 0x18);
      }
      else {
        this = (Variant *)*plVar7;
        if (uVar9 == 2) goto LAB_001181dd;
      }
      lVar8 = (long)(int)((iVar11 - iVar10) + (uVar9 ^ 1));
      if (lVar2 <= lVar8) {
LAB_001181f8:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar8 * 0x18);
    }
    *(undefined4 *)param_7 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_int_int_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,2);
    uVar4 = _LC135;
    if (cVar5 == '\0') {
      *(undefined4 *)param_7 = 2;
      *(undefined8 *)(param_7 + 4) = uVar4;
    }
    Variant::operator_cast_to_int(this_00);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar4 = _LC134;
    if (cVar5 == '\0') {
      *(undefined4 *)param_7 = 2;
      *(undefined8 *)(param_7 + 4) = uVar4;
    }
    iVar10 = Variant::operator_cast_to_int(this);
    iVar10 = (*param_2)((int)(param_1 + (long)param_3),iVar10);
    Variant::Variant((Variant *)local_58,iVar10);
    if (Variant::needs_deinit[*(int *)param_6] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_6 = local_58[0];
    *(undefined8 *)(param_6 + 8) = local_50;
    *(undefined8 *)(param_6 + 0x10) = uStack_48;
  }
  else {
    uVar6 = 3;
LAB_0011818d:
    *(undefined4 *)param_7 = uVar6;
    *(undefined4 *)(param_7 + 8) = 2;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, int, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<int,int,int>::call
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
      _err_print_error(&_LC128,"./core/object/method_bind.h",0x267,
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
      goto LAB_001182b6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_retc_dv<__UnexistingClass,int,int,int>
            (p_Var4,(_func_int_int_int *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             (CallError *)param_1,in_R9);
LAB_001182b6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int, Variant const&>(__UnexistingClass*, void
   (__UnexistingClass::*)(int, Variant const&), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,int,Variant_const&>
               (__UnexistingClass *param_1,_func_void_int_Variant_ptr *param_2,Variant **param_3,
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
  Variant *pVVar12;
  long in_FS_OFFSET;
  long in_stack_00000008;
  int local_58 [6];
  long local_40;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = (uint)param_5;
  if (uVar10 < 3) {
    lVar1 = *(long *)(in_stack_00000008 + 8);
    iVar6 = 2 - uVar10;
    if (lVar1 == 0) {
      if (iVar6 != 0) goto LAB_001185f8;
      this = (Variant *)*plVar8;
LAB_0011864d:
      pVVar12 = (Variant *)plVar8[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar11 = (int)lVar2;
      if (iVar11 < iVar6) {
LAB_001185f8:
        uVar7 = 4;
        goto LAB_001185fd;
      }
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar2 <= lVar9) goto LAB_00118668;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_0011864d;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar9) {
LAB_00118668:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar12 = (Variant *)(lVar1 + lVar9 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_int_Variant_ptr **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar12,0);
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = 1;
    }
    Variant::Variant((Variant *)local_58,pVVar12);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar4 = _LC134;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(this);
    (*param_2)((int)(param_1 + (long)param_3),(Variant *)iVar6);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  else {
    uVar7 = 3;
LAB_001185fd:
    *(undefined4 *)param_6 = uVar7;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Variant const&>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<int,Variant_const&>::call
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
      _err_print_error(&_LC128,"./core/object/method_bind.h",0x154,
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
      goto LAB_00118706;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int,Variant_const&>
            (p_Var4,(_func_void_int_Variant_ptr *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4
             ,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00118706:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int, Vector<float> const&>(__UnexistingClass*,
   void (__UnexistingClass::*)(int, Vector<float> const&), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,int,Vector<float>const&>
               (__UnexistingClass *param_1,_func_void_int_Vector_ptr *param_2,Variant **param_3,
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
  undefined4 *puVar12;
  long in_FS_OFFSET;
  long in_stack_00000008;
  Variant aVStack_58 [8];
  long local_50;
  long local_40;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = (uint)param_5;
  if (uVar10 < 3) {
    lVar1 = *(long *)(in_stack_00000008 + 8);
    iVar6 = 2 - uVar10;
    if (lVar1 == 0) {
      if (iVar6 != 0) goto LAB_00118a78;
      this = (Variant *)*plVar8;
LAB_00118acd:
      puVar12 = (undefined4 *)plVar8[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar11 = (int)lVar2;
      if (iVar11 < iVar6) {
LAB_00118a78:
        uVar7 = 4;
        goto LAB_00118a7d;
      }
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar2 <= lVar9) goto LAB_00118ae8;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_00118acd;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar9) {
LAB_00118ae8:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      puVar12 = (undefined4 *)(lVar1 + lVar9 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_int_Vector_ptr **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*puVar12,0x20);
    uVar4 = _LC137;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_Vector(aVStack_58);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar4 = _LC134;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(this);
    (*param_2)((int)(param_1 + (long)param_3),(Vector *)iVar6);
    lVar1 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar8 = (long *)(local_50 + -0x10);
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar1 + -0x10),false);
      }
    }
  }
  else {
    uVar7 = 3;
LAB_00118a7d:
    *(undefined4 *)param_6 = uVar7;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Vector<float> const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<int,Vector<float>const&>::call
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
      _err_print_error(&_LC128,"./core/object/method_bind.h",0x154,
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
      goto LAB_00118b86;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int,Vector<float>const&>
            (p_Var4,(_func_void_int_Vector_ptr *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00118b86:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int, Vector<int> const&>(__UnexistingClass*,
   void (__UnexistingClass::*)(int, Vector<int> const&), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,int,Vector<int>const&>
               (__UnexistingClass *param_1,_func_void_int_Vector_ptr *param_2,Variant **param_3,
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
  undefined4 *puVar12;
  long in_FS_OFFSET;
  long in_stack_00000008;
  Variant aVStack_58 [8];
  long local_50;
  long local_40;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = (uint)param_5;
  if (uVar10 < 3) {
    lVar1 = *(long *)(in_stack_00000008 + 8);
    iVar6 = 2 - uVar10;
    if (lVar1 == 0) {
      if (iVar6 != 0) goto LAB_00118ef8;
      this = (Variant *)*plVar8;
LAB_00118f4d:
      puVar12 = (undefined4 *)plVar8[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar11 = (int)lVar2;
      if (iVar11 < iVar6) {
LAB_00118ef8:
        uVar7 = 4;
        goto LAB_00118efd;
      }
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar2 <= lVar9) goto LAB_00118f68;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_00118f4d;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar9) {
LAB_00118f68:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      puVar12 = (undefined4 *)(lVar1 + lVar9 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_int_Vector_ptr **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*puVar12,0x1e);
    uVar4 = _LC138;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_Vector(aVStack_58);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar4 = _LC134;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(this);
    (*param_2)((int)(param_1 + (long)param_3),(Vector *)iVar6);
    lVar1 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar8 = (long *)(local_50 + -0x10);
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar1 + -0x10),false);
      }
    }
  }
  else {
    uVar7 = 3;
LAB_00118efd:
    *(undefined4 *)param_6 = uVar7;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Vector<int> const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<int,Vector<int>const&>::call
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
      _err_print_error(&_LC128,"./core/object/method_bind.h",0x154,
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
      goto LAB_00119006;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int,Vector<int>const&>
            (p_Var4,(_func_void_int_Vector_ptr *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00119006:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int, Color const&>(__UnexistingClass*, void
   (__UnexistingClass::*)(int, Color const&), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,int,Color_const&>
               (__UnexistingClass *param_1,_func_void_int_Color_ptr *param_2,Variant **param_3,
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
  long in_stack_00000008;
  
  plVar9 = (long *)CONCAT44(in_register_0000000c,param_4);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = (uint)param_5;
  if (uVar11 < 3) {
    lVar2 = *(long *)(in_stack_00000008 + 8);
    iVar7 = 2 - uVar11;
    if (lVar2 == 0) {
      if (iVar7 != 0) goto LAB_00119350;
      this = (Variant *)*plVar9;
LAB_0011939d:
      this_00 = (Variant *)plVar9[1];
    }
    else {
      lVar3 = *(long *)(lVar2 + -8);
      iVar12 = (int)lVar3;
      if (iVar12 < iVar7) {
LAB_00119350:
        uVar8 = 4;
        goto LAB_00119355;
      }
      if (uVar11 == 0) {
        lVar10 = (long)(iVar12 + -2);
        if (lVar3 <= lVar10) goto LAB_001193b8;
        this = (Variant *)(lVar2 + lVar10 * 0x18);
      }
      else {
        this = (Variant *)*plVar9;
        if (uVar11 == 2) goto LAB_0011939d;
      }
      lVar10 = (long)(int)((uVar11 ^ 1) + (iVar12 - iVar7));
      if (lVar3 <= lVar10) {
LAB_001193b8:
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
      param_2 = *(_func_void_int_Color_ptr **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)this_00,0x14);
    uVar5 = _LC139;
    if (cVar6 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar5;
    }
    Variant::operator_cast_to_Color(this_00);
    cVar6 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar5 = _LC134;
    if (cVar6 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar5;
    }
    iVar7 = Variant::operator_cast_to_int(this);
    (*param_2)((int)(param_1 + (long)param_3),(Color *)iVar7);
  }
  else {
    uVar8 = 3;
LAB_00119355:
    *(undefined4 *)param_6 = uVar8;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Color const&>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<int,Color_const&>::call
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
      _err_print_error(&_LC128,"./core/object/method_bind.h",0x154,
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
      goto LAB_00119456;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int,Color_const&>
            (p_Var4,(_func_void_int_Color_ptr *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00119456:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int, Vector2 const&>(__UnexistingClass*, void
   (__UnexistingClass::*)(int, Vector2 const&), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,int,Vector2_const&>
               (__UnexistingClass *param_1,_func_void_int_Vector2_ptr *param_2,Variant **param_3,
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
  long in_stack_00000008;
  
  plVar9 = (long *)CONCAT44(in_register_0000000c,param_4);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = (uint)param_5;
  if (uVar11 < 3) {
    lVar2 = *(long *)(in_stack_00000008 + 8);
    iVar7 = 2 - uVar11;
    if (lVar2 == 0) {
      if (iVar7 != 0) goto LAB_00119798;
      this = (Variant *)*plVar9;
LAB_001197ed:
      this_00 = (Variant *)plVar9[1];
    }
    else {
      lVar3 = *(long *)(lVar2 + -8);
      iVar12 = (int)lVar3;
      if (iVar12 < iVar7) {
LAB_00119798:
        uVar8 = 4;
        goto LAB_0011979d;
      }
      if (uVar11 == 0) {
        lVar10 = (long)(iVar12 + -2);
        if (lVar3 <= lVar10) goto LAB_00119808;
        this = (Variant *)(lVar2 + lVar10 * 0x18);
      }
      else {
        this = (Variant *)*plVar9;
        if (uVar11 == 2) goto LAB_001197ed;
      }
      lVar10 = (long)(int)((uVar11 ^ 1) + (iVar12 - iVar7));
      if (lVar3 <= lVar10) {
LAB_00119808:
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
      param_2 = *(_func_void_int_Vector2_ptr **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)this_00,5);
    uVar5 = _LC140;
    if (cVar6 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar5;
    }
    Variant::operator_cast_to_Vector2(this_00);
    cVar6 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar5 = _LC134;
    if (cVar6 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar5;
    }
    iVar7 = Variant::operator_cast_to_int(this);
    (*param_2)((int)(param_1 + (long)param_3),(Vector2 *)iVar7);
  }
  else {
    uVar8 = 3;
LAB_0011979d:
    *(undefined4 *)param_6 = uVar8;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Vector2 const&>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<int,Vector2_const&>::call
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
      _err_print_error(&_LC128,"./core/object/method_bind.h",0x154,
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
      goto LAB_001198a6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int,Vector2_const&>
            (p_Var4,(_func_void_int_Vector2_ptr *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4
             ,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_001198a6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int, Plane const&>(__UnexistingClass*, void
   (__UnexistingClass::*)(int, Plane const&), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,int,Plane_const&>
               (__UnexistingClass *param_1,_func_void_int_Plane_ptr *param_2,Variant **param_3,
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
  long in_stack_00000008;
  
  plVar9 = (long *)CONCAT44(in_register_0000000c,param_4);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = (uint)param_5;
  if (uVar11 < 3) {
    lVar2 = *(long *)(in_stack_00000008 + 8);
    iVar7 = 2 - uVar11;
    if (lVar2 == 0) {
      if (iVar7 != 0) goto LAB_00119c08;
      this = (Variant *)*plVar9;
LAB_00119c5d:
      this_00 = (Variant *)plVar9[1];
    }
    else {
      lVar3 = *(long *)(lVar2 + -8);
      iVar12 = (int)lVar3;
      if (iVar12 < iVar7) {
LAB_00119c08:
        uVar8 = 4;
        goto LAB_00119c0d;
      }
      if (uVar11 == 0) {
        lVar10 = (long)(iVar12 + -2);
        if (lVar3 <= lVar10) goto LAB_00119c78;
        this = (Variant *)(lVar2 + lVar10 * 0x18);
      }
      else {
        this = (Variant *)*plVar9;
        if (uVar11 == 2) goto LAB_00119c5d;
      }
      lVar10 = (long)(int)((uVar11 ^ 1) + (iVar12 - iVar7));
      if (lVar3 <= lVar10) {
LAB_00119c78:
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
      param_2 = *(_func_void_int_Plane_ptr **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)this_00,0xe);
    uVar5 = _LC141;
    if (cVar6 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar5;
    }
    Variant::operator_cast_to_Plane(this_00);
    cVar6 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar5 = _LC134;
    if (cVar6 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar5;
    }
    iVar7 = Variant::operator_cast_to_int(this);
    (*param_2)((int)(param_1 + (long)param_3),(Plane *)iVar7);
  }
  else {
    uVar8 = 3;
LAB_00119c0d:
    *(undefined4 *)param_6 = uVar8;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Plane const&>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<int,Plane_const&>::call
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
      _err_print_error(&_LC128,"./core/object/method_bind.h",0x154,
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
      goto LAB_00119d16;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int,Plane_const&>
            (p_Var4,(_func_void_int_Plane_ptr *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00119d16:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int, Vector3 const&>(__UnexistingClass*, void
   (__UnexistingClass::*)(int, Vector3 const&), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,int,Vector3_const&>
               (__UnexistingClass *param_1,_func_void_int_Vector3_ptr *param_2,Variant **param_3,
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
  uint uVar11;
  int iVar12;
  Variant *this;
  Variant *this_00;
  long in_FS_OFFSET;
  long in_stack_00000008;
  
  plVar9 = (long *)CONCAT44(in_register_0000000c,param_4);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = (uint)param_5;
  if (uVar11 < 3) {
    lVar2 = *(long *)(in_stack_00000008 + 8);
    iVar7 = 2 - uVar11;
    if (lVar2 == 0) {
      if (iVar7 != 0) goto LAB_0011a088;
      this = (Variant *)*plVar9;
LAB_0011a0dd:
      this_00 = (Variant *)plVar9[1];
    }
    else {
      lVar3 = *(long *)(lVar2 + -8);
      iVar12 = (int)lVar3;
      if (iVar12 < iVar7) {
LAB_0011a088:
        uVar8 = 4;
        goto LAB_0011a08d;
      }
      if (uVar11 == 0) {
        lVar10 = (long)(iVar12 + -2);
        if (lVar3 <= lVar10) goto LAB_0011a0f8;
        this = (Variant *)(lVar2 + lVar10 * 0x18);
      }
      else {
        this = (Variant *)*plVar9;
        if (uVar11 == 2) goto LAB_0011a0dd;
      }
      lVar10 = (long)(int)((uVar11 ^ 1) + (iVar12 - iVar7));
      if (lVar3 <= lVar10) {
LAB_0011a0f8:
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
      param_2 = *(_func_void_int_Vector3_ptr **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)this_00,9);
    uVar5 = _LC142;
    if (cVar6 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar5;
    }
    Variant::operator_cast_to_Vector3(this_00);
    cVar6 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar5 = _LC134;
    if (cVar6 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar5;
    }
    iVar7 = Variant::operator_cast_to_int(this);
    (*param_2)((int)(param_1 + (long)param_3),(Vector3 *)iVar7);
  }
  else {
    uVar8 = 3;
LAB_0011a08d:
    *(undefined4 *)param_6 = uVar8;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Vector3 const&>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<int,Vector3_const&>::call
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
      _err_print_error(&_LC128,"./core/object/method_bind.h",0x154,
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
      goto LAB_0011a196;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int,Vector3_const&>
            (p_Var4,(_func_void_int_Vector3_ptr *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4
             ,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011a196:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  if (iVar7 != param_1) goto LAB_0011a3d7;
  local_78 = 0;
  local_68 = &_LC3;
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
LAB_0011a4d0:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0011a4d0;
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
LAB_0011a3d7:
  *param_2 = iVar7 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTRC<Plane, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Plane,int>::_gen_argument_type_info(int param_1)

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
    call_get_argument_type_info_helper<int>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_0011a6d5;
  }
  local_70 = 0;
  local_68 = &_LC3;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 0xe;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_0011a7e7:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_0011a7e7;
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
LAB_0011a6d5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Vector2,int>::_gen_argument_type_info(int param_1)

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
    call_get_argument_type_info_helper<int>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_0011a8d5;
  }
  local_70 = 0;
  local_68 = &_LC3;
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
LAB_0011a9e7:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_0011a9e7;
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
LAB_0011a8d5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Color, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Color,int>::_gen_argument_type_info(int param_1)

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
    call_get_argument_type_info_helper<int>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_0011aad5;
  }
  local_70 = 0;
  local_68 = &_LC3;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 0x14;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_0011abe7:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_0011abe7;
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
LAB_0011aad5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<float>, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Vector<float>,int>::_gen_argument_type_info(int param_1)

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
    call_get_argument_type_info_helper<int>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_0011acd5;
  }
  local_70 = 0;
  local_68 = &_LC3;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 0x20;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_0011ade7:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_0011ade7;
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
LAB_0011acd5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<int>, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Vector<int>,int>::_gen_argument_type_info(int param_1)

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
    call_get_argument_type_info_helper<int>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_0011aed5;
  }
  local_70 = 0;
  local_68 = &_LC3;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 0x1e;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_0011afe7:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_0011afe7;
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
LAB_0011aed5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Variant, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Variant,int>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  int local_5c;
  long local_58;
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  long local_20;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  if (in_EDX == 0) {
    local_40 = 0;
    local_38 = 0;
    local_30 = 6;
    local_5c = 0;
    local_50 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<int>(0,&local_5c,(PropertyInfo *)&local_58);
    *puVar1 = (undefined4)local_58;
    *(undefined8 *)(puVar1 + 2) = local_50._0_8_;
    *(undefined8 *)(puVar1 + 4) = local_50._8_8_;
    puVar1[6] = (undefined4)local_40;
    *(undefined8 *)(puVar1 + 8) = local_38;
    puVar1[10] = local_30;
  }
  else {
    *puVar1 = 0;
    puVar1[6] = 0;
    *(undefined8 *)(puVar1 + 8) = 0;
    puVar1[10] = 0x20006;
    *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
    StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_58);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector3, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Vector3,int>::_gen_argument_type_info(int param_1)

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
    call_get_argument_type_info_helper<int>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_0011b1e5;
  }
  local_70 = 0;
  local_68 = &_LC3;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 9;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_0011b2f7:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_0011b2f7;
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
LAB_0011b1e5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, int, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<int,int,int>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
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
    uVar5 = local_60._0_8_;
    uVar6 = local_60._8_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *puVar7 = local_68._0_4_;
    *(undefined8 *)(puVar7 + 2) = uVar5;
    *(undefined8 *)(puVar7 + 4) = uVar6;
    puVar7[6] = (undefined4)local_50;
    *(undefined8 *)(puVar7 + 8) = local_48;
    puVar7[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_0011b4c4;
  }
  local_70 = 0;
  local_68 = &_LC3;
  local_78 = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_60._0_8_;
  local_60 = auVar3 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar7 = 2;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar7[10] = 6;
LAB_0011b4f7:
    StringName::operator=((StringName *)(puVar7 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 8),(CowData *)&local_78);
    puVar7[10] = 6;
    if (puVar7[6] != 0x11) goto LAB_0011b4f7;
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
  lVar4 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_0011b4c4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Variant const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<int,Variant_const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long lVar5;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar6;
  long in_FS_OFFSET;
  int local_74;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  undefined8 local_40;
  long local_38;
  undefined4 local_30;
  long local_20;
  
  pPVar6 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar6 = 0;
  *(undefined4 *)(pPVar6 + 0x18) = 0;
  *(undefined8 *)(pPVar6 + 0x20) = 0;
  *(undefined4 *)(pPVar6 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar6 + 8) = (undefined1  [16])0x0;
  local_74 = 0;
  call_get_argument_type_info_helper<int>(in_EDX,&local_74,pPVar6);
  if (in_EDX == local_74) {
    local_60 = 0;
    local_50 = (undefined1  [16])0x0;
    local_68 = 0;
    local_70 = 0;
    local_58 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0x20006;
    StringName::operator=((StringName *)(local_50 + 8),(StringName *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)pPVar6 = (undefined4)local_58;
    if (*(long *)(pPVar6 + 8) != local_50._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar6 + 8));
      uVar4 = local_50._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_50._8_8_;
      local_50 = auVar2 << 0x40;
      *(undefined8 *)(pPVar6 + 8) = uVar4;
    }
    if (*(long *)(pPVar6 + 0x10) != local_50._8_8_) {
      StringName::unref();
      uVar4 = local_50._8_8_;
      local_50._8_8_ = 0;
      *(undefined8 *)(pPVar6 + 0x10) = uVar4;
    }
    lVar5 = local_38;
    *(undefined4 *)(pPVar6 + 0x18) = (undefined4)local_40;
    if (*(long *)(pPVar6 + 0x20) == local_38) {
      *(undefined4 *)(pPVar6 + 0x28) = local_30;
      if (local_38 != 0) {
        LOCK();
        plVar1 = (long *)(local_38 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_38 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
    }
    else {
      CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar6 + 0x20));
      *(long *)(pPVar6 + 0x20) = local_38;
      *(undefined4 *)(pPVar6 + 0x28) = local_30;
    }
    if ((StringName::configured != '\0') && (local_50._8_8_ != 0)) {
      StringName::unref();
    }
    uVar4 = local_50._0_8_;
    if (local_50._0_8_ != 0) {
      LOCK();
      plVar1 = (long *)(local_50._0_8_ + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = local_50._8_8_;
        local_50 = auVar3 << 0x40;
        Memory::free_static((void *)(uVar4 + -0x10),false);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Vector<float> const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<int,Vector<float>const&>::_gen_argument_type_info(int param_1)

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
  call_get_argument_type_info_helper<int>(in_EDX,&local_8c,pPVar7);
  if (in_EDX != local_8c) goto LAB_0011b7f4;
  local_78 = 0;
  local_68 = &_LC3;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x20);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0011b8f0:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0011b8f0;
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
LAB_0011b7f4:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar7;
}



/* MethodBindT<int, Vector<int> const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<int,Vector<int>const&>::_gen_argument_type_info(int param_1)

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
  call_get_argument_type_info_helper<int>(in_EDX,&local_8c,pPVar7);
  if (in_EDX != local_8c) goto LAB_0011bac4;
  local_78 = 0;
  local_68 = &_LC3;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x1e);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0011bbc0:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0011bbc0;
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
LAB_0011bac4:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar7;
}



/* MethodBindT<int, Color const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<int,Color_const&>::_gen_argument_type_info(int param_1)

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
  call_get_argument_type_info_helper<int>(in_EDX,&local_8c,pPVar7);
  if (in_EDX != local_8c) goto LAB_0011bd94;
  local_78 = 0;
  local_68 = &_LC3;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x14);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0011be90:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0011be90;
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
LAB_0011bd94:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar7;
}



/* MethodBindT<int, Vector2 const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<int,Vector2_const&>::_gen_argument_type_info(int param_1)

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
  call_get_argument_type_info_helper<int>(in_EDX,&local_8c,pPVar7);
  if (in_EDX != local_8c) goto LAB_0011c064;
  local_78 = 0;
  local_68 = &_LC3;
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
LAB_0011c160:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0011c160;
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
LAB_0011c064:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar7;
}



/* MethodBindT<int, Plane const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<int,Plane_const&>::_gen_argument_type_info(int param_1)

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
  call_get_argument_type_info_helper<int>(in_EDX,&local_8c,pPVar7);
  if (in_EDX != local_8c) goto LAB_0011c334;
  local_78 = 0;
  local_68 = &_LC3;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0xe);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0011c430:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0011c430;
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
LAB_0011c334:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar7;
}



/* MethodBindT<int, Vector3 const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<int,Vector3_const&>::_gen_argument_type_info(int param_1)

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
  call_get_argument_type_info_helper<int>(in_EDX,&local_8c,pPVar7);
  if (in_EDX != local_8c) goto LAB_0011c604;
  local_78 = 0;
  local_68 = &_LC3;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,9);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0011c700:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0011c700;
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
LAB_0011c604:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar7;
}



/* void call_get_argument_type_info_helper<Ref<ArrayMesh> const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Ref<ArrayMesh>const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = *param_2;
  if (iVar6 != param_1) goto LAB_0011c8a7;
  local_78 = 0;
  local_68 = "ArrayMesh";
  local_80 = 0;
  local_60._0_8_ = 9;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (char *)CONCAT44(local_68._4_4_,0x18);
  local_50 = 0x11;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0011ca7d:
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
    if (local_50 == 0x11) goto LAB_0011ca7d;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_68._0_4_;
  if (*(long *)(param_3 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar4 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar4;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar4 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar4;
  }
  lVar5 = local_48;
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
        Memory::free_static((void *)(lVar5 + -0x10),false);
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
  iVar6 = *param_2;
LAB_0011c8a7:
  *param_2 = iVar6 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTR<Error, Ref<ArrayMesh> const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Error,Ref<ArrayMesh>const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  ulong uVar2;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  ulong local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (char *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<Ref<ArrayMesh>const&>
              (0,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar3 = local_68._0_4_;
    *(undefined8 *)(puVar3 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar3 + 4) = local_60._8_8_;
    puVar3[6] = (undefined4)local_50;
    *(undefined8 *)(puVar3 + 8) = local_48;
    puVar3[10] = local_40;
  }
  else {
    local_78 = 0;
    local_68 = "Error";
    local_60._8_8_ = local_60._0_8_;
    local_60._0_8_ = 5;
    String::parse_latin1((StrRange *)&local_78);
    godot::details::enum_qualified_name_to_class_info_name((details *)&local_70,(String *)&local_78)
    ;
    StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
    *puVar3 = 2;
    puVar3[6] = 0;
    *(undefined8 *)(puVar3 + 8) = 0;
    puVar3[10] = 0x10006;
    *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
    local_80 = 0;
    StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
    uVar2 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(uVar2 - 0x10),false);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        goto LAB_0011cbc5;
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  }
LAB_0011cbc5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, Ref<ArrayMesh> const&, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Error,Ref<ArrayMesh>const&,int>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_60 = (undefined1  [16])0x0;
    local_68 = (char *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    call_get_argument_type_info_helper<Ref<ArrayMesh>const&>
              (in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<int>(in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar5 = local_60._0_8_;
    uVar6 = local_60._8_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *puVar7 = local_68._0_4_;
    *(undefined8 *)(puVar7 + 2) = uVar5;
    *(undefined8 *)(puVar7 + 4) = uVar6;
    puVar7[6] = (undefined4)local_50;
    *(undefined8 *)(puVar7 + 8) = local_48;
    puVar7[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  }
  else {
    local_78 = 0;
    local_68 = "Error";
    local_60._8_8_ = local_60._0_8_;
    local_60._0_8_ = 5;
    String::parse_latin1((StrRange *)&local_78);
    godot::details::enum_qualified_name_to_class_info_name((details *)&local_70,(String *)&local_78)
    ;
    StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
    *puVar7 = 2;
    puVar7[6] = 0;
    *(undefined8 *)(puVar7 + 8) = 0;
    puVar7[10] = 0x10006;
    *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
    StringName::operator=((StringName *)(puVar7 + 4),(StringName *)&local_68);
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
    uVar4 = local_70;
    lVar3 = local_78;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(uVar4 - 0x10),false);
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
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



/* MethodBindTR<Error, Ref<ArrayMesh> const&, unsigned long>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTR<Error,Ref<ArrayMesh>const&,unsigned_long>::_gen_argument_type_info(int param_1)

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
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  char *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar6 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (1 < in_EDX) {
    local_a0 = 0;
    local_68 = "Error";
    local_60._0_8_ = 5;
    String::parse_latin1((StrRange *)&local_a0);
    godot::details::enum_qualified_name_to_class_info_name((details *)&local_98,(String *)&local_a0)
    ;
    StringName::StringName((StringName *)&local_68,(String *)&local_98,false);
    *puVar6 = 2;
    puVar6[6] = 0;
    *(undefined8 *)(puVar6 + 8) = 0;
    puVar6[10] = 0x10006;
    *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
    local_a8 = 0;
    local_b0 = 0;
    StringName::operator=((StringName *)(puVar6 + 4),(StringName *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    goto LAB_0011d001;
  }
  local_98 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 6;
  local_bc = 0;
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  call_get_argument_type_info_helper<Ref<ArrayMesh>const&>
            (in_EDX,(int *)&local_bc,(PropertyInfo *)&local_98);
  if (in_EDX == local_bc) {
    local_a8 = 0;
    local_b0 = 0;
    local_68 = "";
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    String::parse_latin1((StrRange *)&local_b0);
    local_b8 = 0;
    local_68 = (char *)CONCAT44(local_68._4_4_,2);
    local_50 = 0;
    local_48 = 0;
    local_60 = (undefined1  [16])0x0;
    if (local_b0 == 0) {
LAB_0011d19b:
      local_40 = 6;
      StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_a8);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_b0);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0011d19b;
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
LAB_0011d001:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar6;
}



/* WARNING: Control flow encountered bad instruction data */
/* MeshDataTool::~MeshDataTool() */

void __thiscall MeshDataTool::~MeshDataTool(MeshDataTool *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<Vector2i, int, HashMapHasherDefault, HashMapComparatorDefault<Vector2i>,
   DefaultTypedAllocator<HashMapElement<Vector2i, int> > >::~HashMap() */

void __thiscall
HashMap<Vector2i,int,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,int>>>
::~HashMap(HashMap<Vector2i,int,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,int>>>
           *this)

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
/* MethodBindTRC<Ref<Material>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Material>>::~MethodBindTRC(MethodBindTRC<Ref<Material>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<Material> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Material>const&>::~MethodBindT(MethodBindT<Ref<Material>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Vector3, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector3,int>::~MethodBindTRC(MethodBindTRC<Vector3,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Variant, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Variant,int>::~MethodBindTRC(MethodBindTRC<Variant,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int, Variant const&>::~MethodBindT() */

void __thiscall MethodBindT<int,Variant_const&>::~MethodBindT(MethodBindT<int,Variant_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<int, int, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int,int,int>::~MethodBindTRC(MethodBindTRC<int,int,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Vector<int>, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector<int>,int>::~MethodBindTRC(MethodBindTRC<Vector<int>,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Vector<float>, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Vector<float>,int>::~MethodBindTRC(MethodBindTRC<Vector<float>,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int, Vector<float> const&>::~MethodBindT() */

void __thiscall
MethodBindT<int,Vector<float>const&>::~MethodBindT(MethodBindT<int,Vector<float>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int, Vector<int> const&>::~MethodBindT() */

void __thiscall
MethodBindT<int,Vector<int>const&>::~MethodBindT(MethodBindT<int,Vector<int>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Color, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Color,int>::~MethodBindTRC(MethodBindTRC<Color,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int, Color const&>::~MethodBindT() */

void __thiscall MethodBindT<int,Color_const&>::~MethodBindT(MethodBindT<int,Color_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Vector2, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector2,int>::~MethodBindTRC(MethodBindTRC<Vector2,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int, Vector2 const&>::~MethodBindT() */

void __thiscall MethodBindT<int,Vector2_const&>::~MethodBindT(MethodBindT<int,Vector2_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Plane, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Plane,int>::~MethodBindTRC(MethodBindTRC<Plane,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int, Plane const&>::~MethodBindT() */

void __thiscall MethodBindT<int,Plane_const&>::~MethodBindT(MethodBindT<int,Plane_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int, Vector3 const&>::~MethodBindT() */

void __thiscall MethodBindT<int,Vector3_const&>::~MethodBindT(MethodBindT<int,Vector3_const&> *this)

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
/* MethodBindTRC<unsigned long>::~MethodBindTRC() */

void __thiscall MethodBindTRC<unsigned_long>::~MethodBindTRC(MethodBindTRC<unsigned_long> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Error, Ref<ArrayMesh> const&, unsigned long>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,Ref<ArrayMesh>const&,unsigned_long>::~MethodBindTR
          (MethodBindTR<Error,Ref<ArrayMesh>const&,unsigned_long> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Error, Ref<ArrayMesh> const&, int>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,Ref<ArrayMesh>const&,int>::~MethodBindTR
          (MethodBindTR<Error,Ref<ArrayMesh>const&,int> *this)

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
/* MethodBindTR<Error, Ref<ArrayMesh> const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,Ref<ArrayMesh>const&>::~MethodBindTR
          (MethodBindTR<Error,Ref<ArrayMesh>const&> *this)

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


