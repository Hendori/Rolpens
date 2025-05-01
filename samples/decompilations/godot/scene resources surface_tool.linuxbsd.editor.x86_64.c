
/* SurfaceTool::set_smooth_group(unsigned int) */

void __thiscall SurfaceTool::set_smooth_group(SurfaceTool *this,uint param_1)

{
  *(uint *)(this + 0x218) = param_1;
  return;
}



/* SurfaceTool::mikktGetNumFaces(SMikkTSpaceContext const*) */

ulong SurfaceTool::mikktGetNumFaces(SMikkTSpaceContext *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(undefined8 **)(param_1 + 8))[1];
  if (uVar1 == 0) {
    uVar1 = *(uint *)**(undefined8 **)(param_1 + 8);
  }
  return (ulong)uVar1 / 3;
}



/* SurfaceTool::mikktGetNumVerticesOfFace(SMikkTSpaceContext const*, int) */

undefined8 SurfaceTool::mikktGetNumVerticesOfFace(SMikkTSpaceContext *param_1,int param_2)

{
  return 3;
}



/* SurfaceTool::get_skin_weight_count() const */

undefined4 __thiscall SurfaceTool::get_skin_weight_count(SurfaceTool *this)

{
  return *(undefined4 *)(this + 0x21c);
}



/* SurfaceTool::get_primitive_type() const */

undefined4 __thiscall SurfaceTool::get_primitive_type(SurfaceTool *this)

{
  return *(undefined4 *)(this + 0x180);
}



/* SurfaceTool::set_color(Color) */

void SurfaceTool::set_color(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (*(char *)(param_3 + 0x17c) == '\0') {
    _err_print_error("set_color","scene/resources/surface_tool.cpp",0x129,
                     "Condition \"!begun\" is true.",0,0);
    return;
  }
  if ((*(char *)(param_3 + 0x17d) == '\0') && ((*(ulong *)(param_3 + 0x188) & 8) == 0)) {
    _err_print_error("set_color","scene/resources/surface_tool.cpp",299,
                     "Condition \"!first && !(format & Mesh::ARRAY_FORMAT_COLOR)\" is true.",0,0);
    return;
  }
  *(undefined8 *)(param_3 + 0x1b8) = param_1;
  *(ulong *)(param_3 + 0x188) = *(ulong *)(param_3 + 0x188) | 8;
  *(undefined8 *)(param_3 + 0x1c0) = param_2;
  return;
}



/* SurfaceTool::set_normal(Vector3 const&) */

void __thiscall SurfaceTool::set_normal(SurfaceTool *this,Vector3 *param_1)

{
  if (this[0x17c] == (SurfaceTool)0x0) {
    _err_print_error("set_normal","scene/resources/surface_tool.cpp",0x132,
                     "Condition \"!begun\" is true.",0,0);
    return;
  }
  if ((this[0x17d] == (SurfaceTool)0x0) && ((*(ulong *)(this + 0x188) & 2) == 0)) {
    _err_print_error("set_normal","scene/resources/surface_tool.cpp",0x134,
                     "Condition \"!first && !(format & Mesh::ARRAY_FORMAT_NORMAL)\" is true.",0,0);
    return;
  }
  *(ulong *)(this + 0x188) = *(ulong *)(this + 0x188) | 2;
  *(undefined8 *)(this + 0x1c8) = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x1d0) = *(undefined4 *)(param_1 + 8);
  return;
}



/* SurfaceTool::set_tangent(Plane const&) */

void __thiscall SurfaceTool::set_tangent(SurfaceTool *this,Plane *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (this[0x17c] == (SurfaceTool)0x0) {
    _err_print_error("set_tangent","scene/resources/surface_tool.cpp",0x13b,
                     "Condition \"!begun\" is true.",0,0);
    return;
  }
  if ((this[0x17d] == (SurfaceTool)0x0) && ((*(ulong *)(this + 0x188) & 4) == 0)) {
    _err_print_error("set_tangent","scene/resources/surface_tool.cpp",0x13c,
                     "Condition \"!first && !(format & Mesh::ARRAY_FORMAT_TANGENT)\" is true.",0,0);
    return;
  }
  uVar1 = *(undefined8 *)param_1;
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(ulong *)(this + 0x188) = *(ulong *)(this + 0x188) | 4;
  *(undefined8 *)(this + 0x208) = uVar1;
  *(undefined8 *)(this + 0x210) = uVar2;
  return;
}



/* SurfaceTool::set_uv(Vector2 const&) */

void __thiscall SurfaceTool::set_uv(SurfaceTool *this,Vector2 *param_1)

{
  if (this[0x17c] == (SurfaceTool)0x0) {
    _err_print_error("set_uv","scene/resources/surface_tool.cpp",0x143,
                     "Condition \"!begun\" is true.",0,0);
    return;
  }
  if ((this[0x17d] == (SurfaceTool)0x0) && ((*(ulong *)(this + 0x188) & 0x10) == 0)) {
    _err_print_error("set_uv","scene/resources/surface_tool.cpp",0x144,
                     "Condition \"!first && !(format & Mesh::ARRAY_FORMAT_TEX_UV)\" is true.",0,0);
    return;
  }
  *(ulong *)(this + 0x188) = *(ulong *)(this + 0x188) | 0x10;
  *(undefined8 *)(this + 0x1d4) = *(undefined8 *)param_1;
  return;
}



/* SurfaceTool::set_uv2(Vector2 const&) */

void __thiscall SurfaceTool::set_uv2(SurfaceTool *this,Vector2 *param_1)

{
  if (this[0x17c] == (SurfaceTool)0x0) {
    _err_print_error("set_uv2","scene/resources/surface_tool.cpp",0x14b,
                     "Condition \"!begun\" is true.",0,0);
    return;
  }
  if ((this[0x17d] == (SurfaceTool)0x0) && ((*(ulong *)(this + 0x188) & 0x20) == 0)) {
    _err_print_error("set_uv2","scene/resources/surface_tool.cpp",0x14c,
                     "Condition \"!first && !(format & Mesh::ARRAY_FORMAT_TEX_UV2)\" is true.",0,0);
    return;
  }
  *(ulong *)(this + 0x188) = *(ulong *)(this + 0x188) | 0x20;
  *(undefined8 *)(this + 0x1dc) = *(undefined8 *)param_1;
  return;
}



/* SurfaceTool::set_custom(int, Color const&) */

void __thiscall SurfaceTool::set_custom(SurfaceTool *this,int param_1,Color *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (3 < (uint)param_1) {
    _err_print_index_error
              ("set_custom","scene/resources/surface_tool.cpp",0x153,(long)param_1,4,
               "p_channel_index","RenderingServer::ARRAY_CUSTOM_COUNT","",false,false);
    return;
  }
  if (this[0x17c] != (SurfaceTool)0x0) {
    lVar2 = (long)param_1;
    if (*(int *)(this + lVar2 * 4 + 0x260) == 8) {
      _err_print_error("set_custom","scene/resources/surface_tool.cpp",0x155,
                       "Condition \"last_custom_format[p_channel_index] == CUSTOM_MAX\" is true.",0,
                       0);
      return;
    }
    if (this[0x17d] == (SurfaceTool)0x0) {
      if ((*(ulong *)(this + 0x188) & (ulong)(uint)(&custom_mask)[lVar2]) == 0) {
        _err_print_error("set_custom","scene/resources/surface_tool.cpp",0x157,
                         "Condition \"!first && !(format & mask[p_channel_index])\" is true.",0,0);
        return;
      }
    }
    else {
      *(ulong *)(this + 0x188) = *(ulong *)(this + 0x188) | (ulong)(uint)(&custom_mask)[lVar2];
    }
    uVar1 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(this + lVar2 * 0x10 + 0x220) = *(undefined8 *)param_2;
    *(undefined8 *)(this + lVar2 * 0x10 + 0x220 + 8) = uVar1;
    return;
  }
  _err_print_error("set_custom","scene/resources/surface_tool.cpp",0x154,
                   "Condition \"!begun\" is true.",0,0);
  return;
}



/* SurfaceTool::set_custom_format(int, SurfaceTool::CustomFormat) */

void __thiscall SurfaceTool::set_custom_format(SurfaceTool *this,uint param_1,uint param_3)

{
  if (3 < param_1) {
    _err_print_index_error
              ("set_custom_format","scene/resources/surface_tool.cpp",0x4fb,(long)(int)param_1,4,
               "p_channel_index","RenderingServer::ARRAY_CUSTOM_COUNT","",false,false);
    return;
  }
  if (this[0x17c] != (SurfaceTool)0x0) {
    if (param_3 < 9) {
      *(uint *)(this + (long)(int)param_1 * 4 + 0x260) = param_3;
    }
    else {
      _err_print_index_error
                ("set_custom_format","scene/resources/surface_tool.cpp",0x4fd,(ulong)param_3,9,
                 "p_format","CUSTOM_MAX + 1","",false,false);
    }
    return;
  }
  _err_print_error("set_custom_format","scene/resources/surface_tool.cpp",0x4fc,
                   "Condition \"!begun\" is true.",0,0);
  return;
}



/* SurfaceTool::add_index(int) */

void __thiscall SurfaceTool::add_index(SurfaceTool *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  void *pvVar3;
  ulong uVar4;
  
  if (this[0x17c] == (SurfaceTool)0x0) {
    _err_print_error("add_index","scene/resources/surface_tool.cpp",0x19b,
                     "Condition \"!begun\" is true.",0,0);
    return;
  }
  if (-1 < param_1) {
    uVar1 = *(uint *)(this + 0x1a8);
    *(ulong *)(this + 0x188) = *(ulong *)(this + 0x188) | 0x1000;
    pvVar3 = *(void **)(this + 0x1b0);
    if (uVar1 == *(uint *)(this + 0x1ac)) {
      uVar4 = (ulong)(uVar1 * 2);
      if (uVar1 * 2 == 0) {
        uVar4 = 1;
      }
      *(int *)(this + 0x1ac) = (int)uVar4;
      pvVar3 = (void *)Memory::realloc_static(pvVar3,uVar4 * 4,false);
      *(void **)(this + 0x1b0) = pvVar3;
      if (pvVar3 == (void *)0x0) {
        _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar1 = *(uint *)(this + 0x1a8);
    }
    *(uint *)(this + 0x1a8) = uVar1 + 1;
    *(int *)((long)pvVar3 + (ulong)uVar1 * 4) = param_1;
    return;
  }
  _err_print_error("add_index","scene/resources/surface_tool.cpp",0x19c,
                   "Condition \"p_index < 0\" is true.",0,0);
  return;
}



/* SurfaceTool::mikktGetPosition(SMikkTSpaceContext const*, float*, int, int) */

void SurfaceTool::mikktGetPosition
               (SMikkTSpaceContext *param_1,float *param_2,int param_3,int param_4)

{
  float fVar1;
  uint uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  uint uVar5;
  long lVar7;
  ulong uVar6;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  uVar5 = param_3 * 3 + param_4;
  uVar6 = (ulong)uVar5;
  uVar2 = *(uint *)puVar3[1];
  if (uVar2 == 0) {
    uVar2 = *(uint *)*puVar3;
    if (uVar5 < uVar2) {
      lVar7 = uVar6 * 0xb8 + *(long *)((uint *)*puVar3 + 2);
      fVar1 = *(float *)(lVar7 + 0x90);
      *(undefined8 *)param_2 = *(undefined8 *)(lVar7 + 0x88);
      param_2[2] = fVar1;
      return;
    }
  }
  else if (uVar5 < uVar2) {
    uVar2 = *(uint *)(*(long *)((uint *)puVar3[1] + 2) + uVar6 * 4);
    if (uVar2 < *(uint *)*puVar3) {
      lVar7 = (ulong)uVar2 * 0xb8 + *(long *)((uint *)*puVar3 + 2);
      fVar1 = *(float *)(lVar7 + 0x90);
      *(undefined8 *)param_2 = *(undefined8 *)(lVar7 + 0x88);
      param_2[2] = fVar1;
      return;
    }
    param_2[0] = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    return;
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar6,(ulong)uVar2,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* SurfaceTool::mikktGetNormal(SMikkTSpaceContext const*, float*, int, int) */

void SurfaceTool::mikktGetNormal(SMikkTSpaceContext *param_1,float *param_2,int param_3,int param_4)

{
  float fVar1;
  uint uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  uint uVar5;
  long lVar7;
  ulong uVar6;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  uVar5 = param_3 * 3 + param_4;
  uVar6 = (ulong)uVar5;
  uVar2 = *(uint *)puVar3[1];
  if (uVar2 == 0) {
    uVar2 = *(uint *)*puVar3;
    if (uVar5 < uVar2) {
      lVar7 = uVar6 * 0xb8 + *(long *)((uint *)*puVar3 + 2);
      fVar1 = *(float *)(lVar7 + 0x1c);
      *(undefined8 *)param_2 = *(undefined8 *)(lVar7 + 0x14);
      param_2[2] = fVar1;
      return;
    }
  }
  else if (uVar5 < uVar2) {
    uVar2 = *(uint *)(*(long *)((uint *)puVar3[1] + 2) + uVar6 * 4);
    if (uVar2 < *(uint *)*puVar3) {
      lVar7 = (ulong)uVar2 * 0xb8 + *(long *)((uint *)*puVar3 + 2);
      fVar1 = *(float *)(lVar7 + 0x1c);
      *(undefined8 *)param_2 = *(undefined8 *)(lVar7 + 0x14);
      param_2[2] = fVar1;
      return;
    }
    param_2[0] = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    return;
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar6,(ulong)uVar2,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* SurfaceTool::mikktGetTexCoord(SMikkTSpaceContext const*, float*, int, int) */

void SurfaceTool::mikktGetTexCoord
               (SMikkTSpaceContext *param_1,float *param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  uint uVar4;
  undefined8 uVar6;
  ulong uVar5;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  uVar4 = param_3 * 3 + param_4;
  uVar5 = (ulong)uVar4;
  uVar1 = *(uint *)puVar2[1];
  if (uVar1 == 0) {
    uVar1 = *(uint *)*puVar2;
    if (uVar1 <= uVar4) goto LAB_00100908;
    uVar6 = *(undefined8 *)(uVar5 * 0xb8 + *(long *)((uint *)*puVar2 + 2) + 0x38);
  }
  else {
    if (uVar1 <= uVar4) {
LAB_00100908:
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,uVar5,(ulong)uVar1,"p_index",
                 "count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar1 = *(uint *)(*(long *)((uint *)puVar2[1] + 2) + uVar5 * 4);
    uVar6 = 0;
    if (uVar1 < *(uint *)*puVar2) {
      *(undefined8 *)param_2 =
           *(undefined8 *)((ulong)uVar1 * 0xb8 + *(long *)((uint *)*puVar2 + 2) + 0x38);
      return;
    }
  }
  *(undefined8 *)param_2 = uVar6;
  return;
}



/* SurfaceTool::mikktSetTSpaceDefault(SMikkTSpaceContext const*, float const*, float const*, float,
   float, int, int, int) */

float SurfaceTool::mikktSetTSpaceDefault
                (SMikkTSpaceContext *param_1,float *param_2,float *param_3,float param_4,
                float param_5,int param_6,int param_7,int param_8)

{
  float fVar1;
  uint uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  uint uVar9;
  
  uVar5 = _LC31;
  puVar3 = *(undefined8 **)(param_1 + 8);
  uVar9 = param_8 + param_7 * 3;
  uVar6 = (ulong)uVar9;
  uVar2 = *(uint *)puVar3[1];
  if (uVar2 == 0) {
    puVar8 = (uint *)*puVar3;
    uVar2 = *puVar8;
    if (uVar2 <= uVar9) goto LAB_00100a09;
  }
  else {
    if (uVar2 <= uVar9) {
LAB_00100a09:
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)uVar9,(ulong)uVar2,
                 "p_index","count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    puVar8 = (uint *)*puVar3;
    uVar2 = *(uint *)(*(long *)((uint *)puVar3[1] + 2) + uVar6 * 4);
    uVar6 = (ulong)uVar2;
    if (*puVar8 <= uVar2) {
      return param_4;
    }
  }
  lVar7 = uVar6 * 0xb8 + *(long *)(puVar8 + 2);
  if (lVar7 != 0) {
    fVar1 = *param_2;
    *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)(param_2 + 1);
    *(float *)(lVar7 + 0x2c) = fVar1;
    fVar1 = *param_3;
    param_4 = (float)((uint)param_3[2] ^ uVar5);
    *(uint *)(lVar7 + 0x24) = (uint)param_3[1] ^ uVar5;
    *(uint *)(lVar7 + 0x20) = (uint)fVar1 ^ uVar5;
    *(float *)(lVar7 + 0x28) = param_4;
  }
  return param_4;
}



/* SurfaceTool::set_skin_weight_count(SurfaceTool::SkinWeightCount) */

void __thiscall SurfaceTool::set_skin_weight_count(SurfaceTool *this,undefined4 param_2)

{
  if (this[0x17c] == (SurfaceTool)0x0) {
    *(undefined4 *)(this + 0x21c) = param_2;
    return;
  }
  _err_print_error("set_skin_weight_count","scene/resources/surface_tool.cpp",0x4f3,
                   "Condition \"begun\" is true.",0,0);
  return;
}



/* SurfaceTool::get_custom_format(int) const */

undefined4 __thiscall SurfaceTool::get_custom_format(SurfaceTool *this,int param_1)

{
  if ((uint)param_1 < 4) {
    return *(undefined4 *)(this + (long)param_1 * 4 + 0x260);
  }
  _err_print_index_error
            ("get_custom_format","scene/resources/surface_tool.cpp",0x505,(long)param_1,4,
             "p_channel_index","RenderingServer::ARRAY_CUSTOM_COUNT","",false,false);
  return 8;
}



/* SurfaceTool::get_aabb() const */

void SurfaceTool::get_aabb(void)

{
  uint uVar1;
  long in_RSI;
  undefined8 *in_RDI;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if (*(int *)(in_RSI + 0x198) == 0) {
    _err_print_error("get_aabb","scene/resources/surface_tool.cpp",0x514,
                     "Condition \"vertex_array.is_empty()\" is true. Returning: AABB()",0,0);
    *in_RDI = 0;
    *(undefined4 *)(in_RDI + 1) = 0;
    *(undefined8 *)((long)in_RDI + 0xc) = 0;
    *(undefined4 *)((long)in_RDI + 0x14) = 0;
  }
  else {
    lVar3 = 0;
    uVar1 = 0;
    fVar4 = 0.0;
    fVar6 = 0.0;
    fVar9 = 0.0;
    fVar12 = 0.0;
    fVar10 = fVar9;
    fVar5 = 0.0;
    do {
      if (uVar1 == 0) {
        lVar2 = *(long *)(in_RSI + 0x1a0);
        fVar7 = *(float *)(lVar2 + 0x88);
        fVar8 = *(float *)(lVar2 + 0x8c);
        fVar9 = *(float *)(lVar2 + 0x90);
      }
      else {
        lVar2 = *(long *)(in_RSI + 0x1a0) + lVar3;
        if (((fVar12 < 0.0) || (fVar4 < 0.0)) || (fVar6 < 0.0)) {
          _err_print_error("expand_to","./core/math/aabb.h",0x158,
                           "AABB size is negative, this is not supported. Use AABB.abs() to get an AABB with a positive size."
                           ,0,0);
        }
        fVar11 = *(float *)(lVar2 + 0x88);
        fVar8 = *(float *)(lVar2 + 0x8c);
        fVar7 = fVar11;
        if (fVar5 <= fVar11) {
          fVar7 = fVar5;
        }
        if (fVar11 <= fVar12 + fVar5) {
          fVar11 = fVar12 + fVar5;
        }
        fVar5 = fVar8;
        if (fVar8 <= fVar4 + fVar10) {
          fVar5 = fVar4 + fVar10;
        }
        if (fVar10 <= fVar8) {
          fVar8 = fVar10;
        }
        fVar12 = fVar11 - fVar7;
        fVar10 = *(float *)(lVar2 + 0x90);
        fVar4 = fVar5 - fVar8;
        fVar5 = fVar10;
        if (fVar10 <= fVar6 + fVar9) {
          fVar5 = fVar6 + fVar9;
        }
        if (fVar9 <= fVar10) {
          fVar10 = fVar9;
        }
        fVar9 = fVar10;
        fVar6 = fVar5 - fVar9;
      }
      uVar1 = uVar1 + 1;
      lVar3 = lVar3 + 0xb8;
      fVar10 = fVar8;
      fVar5 = fVar7;
    } while (uVar1 < *(uint *)(in_RSI + 0x198));
    in_RDI[2] = CONCAT44(fVar6,fVar4);
    *in_RDI = CONCAT44(fVar8,fVar7);
    in_RDI[1] = CONCAT44(fVar12,fVar9);
  }
  return;
}



/* SurfaceTool::generate_tangents() */

void __thiscall SurfaceTool::generate_tangents(SurfaceTool *this)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  code **local_68;
  SurfaceTool **local_60;
  SurfaceTool *local_58;
  SurfaceTool *local_50;
  code *local_48;
  code *pcStack_40;
  code *local_38;
  code *pcStack_30;
  code *local_28;
  undefined8 local_20;
  code *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(ulong *)(this + 0x188) & 0x10) == 0) {
    _err_print_error("generate_tangents","scene/resources/surface_tool.cpp",0x486,
                     "Condition \"!(format & Mesh::ARRAY_FORMAT_TEX_UV)\" is true.",
                     "UVs are required to generate tangents.",0,0);
  }
  else {
    if ((*(ulong *)(this + 0x188) & 2) == 0) {
      if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
        _err_print_error("generate_tangents","scene/resources/surface_tool.cpp",0x487,
                         "Condition \"!(format & Mesh::ARRAY_FORMAT_NORMAL)\" is true.",0,0);
        return;
      }
      goto LAB_00100f1a;
    }
    local_20 = 0;
    local_28 = mikktGetTexCoord;
    local_18 = mikktSetTSpaceDefault;
    local_68 = &local_48;
    local_58 = this + 0x198;
    lVar2 = *(long *)(this + 0x1a0);
    local_48 = mikktGetNumFaces;
    pcStack_40 = mikktGetNumVerticesOfFace;
    lVar3 = (ulong)*(uint *)(this + 0x198) * 0xb8 + lVar2;
    local_38 = mikktGetPosition;
    pcStack_30 = mikktGetNormal;
    for (; lVar3 != lVar2; lVar2 = lVar2 + 0xb8) {
      *(undefined8 *)(lVar2 + 0x20) = 0;
      *(undefined4 *)(lVar2 + 0x28) = 0;
      *(undefined8 *)(lVar2 + 0x2c) = 0;
      *(undefined4 *)(lVar2 + 0x34) = 0;
    }
    local_50 = this + 0x1a8;
    local_60 = &local_58;
    iVar1 = genTangSpaceDefault(&local_68);
    if (iVar1 == 0) {
      _err_print_error("generate_tangents","scene/resources/surface_tool.cpp",0x4a0,
                       "Condition \"!res\" is true.",0,0);
    }
    else {
      *(ulong *)(this + 0x188) = *(ulong *)(this + 0x188) | 4;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100f1a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SurfaceTool::set_material(Ref<Material> const&) */

void __thiscall SurfaceTool::set_material(SurfaceTool *this,Ref *param_1)

{
  Object *pOVar1;
  Object *pOVar2;
  char cVar3;
  
  pOVar1 = *(Object **)param_1;
  pOVar2 = *(Object **)(this + 400);
  if (pOVar1 != pOVar2) {
    *(Object **)(this + 400) = pOVar1;
    if (pOVar1 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(this + 400) = 0;
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



/* SortArray<SurfaceTool::WeightSort, _DefaultComparator<SurfaceTool::WeightSort>,
   true>::introsort(long, long, SurfaceTool::WeightSort*, long) const [clone .isra.0] */

void SortArray<SurfaceTool::WeightSort,_DefaultComparator<SurfaceTool::WeightSort>,true>::introsort
               (long param_1,long param_2,WeightSort *param_3,long param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  WeightSort *pWVar9;
  long lVar10;
  WeightSort *pWVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  WeightSort *pWVar15;
  WeightSort *pWVar16;
  float fVar17;
  long local_58;
  
  lVar8 = param_2 - param_1;
  if (lVar8 < 0x11) {
    return;
  }
  if (param_4 != 0) {
    lVar12 = param_2;
    local_58 = param_4;
LAB_00101004:
    local_58 = local_58 + -1;
    fVar1 = *(float *)(param_3 + lVar12 * 8 + -4);
    fVar2 = *(float *)(param_3 + param_1 * 8 + 4);
    fVar3 = *(float *)(param_3 + ((lVar8 >> 1) + param_1) * 8 + 4);
    if (fVar3 <= fVar2) {
      fVar17 = fVar2;
      if ((fVar1 <= fVar2) && (fVar17 = fVar1, fVar1 <= fVar3)) {
        fVar17 = fVar3;
      }
    }
    else {
      fVar17 = fVar3;
      if ((fVar1 <= fVar3) && (fVar17 = fVar1, fVar1 <= fVar2)) {
        fVar17 = fVar2;
      }
    }
    lVar8 = lVar12;
    param_2 = param_1;
    do {
      if (*(float *)(param_3 + param_2 * 8 + 4) <= fVar17 &&
          fVar17 != *(float *)(param_3 + param_2 * 8 + 4)) {
        if (lVar12 + -1 == param_2) {
          _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                           "bad comparison function; sorting will be broken",0,0);
          goto LAB_00101072;
        }
      }
      else {
LAB_00101072:
        lVar8 = lVar8 + -1;
        pWVar15 = param_3 + lVar8 * 8;
        if (fVar17 < *(float *)(pWVar15 + 4)) {
          pWVar11 = param_3 + lVar8 * 8 + -8;
          while (param_1 != lVar8) {
            lVar8 = lVar8 + -1;
            pWVar15 = pWVar11;
            if (*(float *)(pWVar11 + 4) <= fVar17) goto LAB_001010eb;
            pWVar11 = pWVar11 + -8;
          }
          _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                           "bad comparison function; sorting will be broken",0,0);
        }
LAB_001010eb:
        if (lVar8 <= param_2) goto LAB_00101118;
        uVar5 = *(undefined4 *)(param_3 + param_2 * 8);
        uVar4 = *(undefined4 *)(param_3 + param_2 * 8 + 4);
        *(undefined8 *)(param_3 + param_2 * 8) = *(undefined8 *)pWVar15;
        *(undefined4 *)pWVar15 = uVar5;
        *(undefined4 *)(pWVar15 + 4) = uVar4;
      }
      param_2 = param_2 + 1;
    } while( true );
  }
LAB_001011cf:
  lVar14 = lVar8 + -2 >> 1;
  lVar12 = lVar14 * 2 + 2;
  pWVar15 = param_3 + (lVar14 + param_1) * 8;
  do {
    uVar4 = *(undefined4 *)pWVar15;
    fVar1 = *(float *)(pWVar15 + 4);
    lVar6 = lVar12;
    lVar13 = lVar14;
    if (lVar12 < lVar8) {
      do {
        pWVar16 = param_3 + (param_1 + lVar6) * 8;
        fVar2 = *(float *)(param_3 + (param_1 + lVar6 + -1) * 8 + 4);
        lVar7 = lVar6 + -1;
        lVar10 = lVar6;
        pWVar11 = param_3 + (param_1 + lVar6 + -1) * 8;
        if (fVar2 < *(float *)(pWVar16 + 4) || fVar2 == *(float *)(pWVar16 + 4)) {
          lVar10 = lVar6 + 1;
          lVar7 = lVar6;
          pWVar11 = pWVar16;
        }
        lVar6 = lVar10 * 2;
        *(undefined8 *)(param_3 + (param_1 + lVar13) * 8) = *(undefined8 *)pWVar11;
        lVar13 = lVar7;
      } while (lVar8 != lVar6 && SBORROW8(lVar8,lVar6) == lVar8 + lVar10 * -2 < 0);
      pWVar16 = pWVar11;
      if (lVar8 == lVar6) {
LAB_001013c1:
        lVar7 = lVar6 + -1;
        pWVar11 = param_3 + (param_1 + lVar7) * 8;
        *(undefined8 *)pWVar16 = *(undefined8 *)pWVar11;
      }
      lVar6 = lVar7 + -1;
      if (lVar7 <= lVar14) goto LAB_0010140d;
      do {
        lVar13 = lVar6 >> 1;
        pWVar11 = param_3 + (param_1 + lVar13) * 8;
        pWVar16 = param_3 + (lVar7 + param_1) * 8;
        if (fVar1 < *(float *)(pWVar11 + 4) || fVar1 == *(float *)(pWVar11 + 4)) {
          *(undefined4 *)pWVar16 = uVar4;
          *(float *)(pWVar16 + 4) = fVar1;
          goto joined_r0x001012c7;
        }
        *(undefined8 *)pWVar16 = *(undefined8 *)pWVar11;
        lVar6 = (lVar13 + -1) - (lVar13 + -1 >> 0x3f);
        lVar7 = lVar13;
      } while (lVar14 < lVar13);
      *(undefined4 *)pWVar11 = uVar4;
      *(float *)(pWVar11 + 4) = fVar1;
joined_r0x001012c7:
      if (lVar14 == 0) goto LAB_001012c9;
    }
    else {
      pWVar16 = pWVar15;
      pWVar11 = pWVar15;
      if (lVar12 == lVar8) goto LAB_001013c1;
LAB_0010140d:
      *(undefined4 *)pWVar11 = uVar4;
      *(float *)(pWVar11 + 4) = fVar1;
    }
    lVar14 = lVar14 + -1;
    pWVar15 = pWVar15 + -8;
    lVar12 = lVar12 + -2;
  } while( true );
LAB_00101118:
  introsort(param_2,lVar12,param_3,local_58);
  lVar8 = param_2 - param_1;
  if (lVar8 < 0x11) {
    return;
  }
  lVar12 = param_2;
  if (local_58 == 0) goto LAB_001011cf;
  goto LAB_00101004;
LAB_001012c9:
  pWVar11 = param_3 + param_1 * 8;
  pWVar15 = param_3 + param_2 * 8 + -8;
  lVar8 = (param_2 + -1) - param_1;
LAB_001012e0:
  do {
    uVar4 = *(undefined4 *)pWVar15;
    fVar1 = *(float *)(pWVar15 + 4);
    *(undefined8 *)pWVar15 = *(undefined8 *)pWVar11;
    if (lVar8 < 3) {
      if (lVar8 != 2) {
        *(undefined4 *)pWVar11 = uVar4;
        *(float *)(pWVar11 + 4) = fVar1;
        return;
      }
      lVar12 = param_1 + 1;
      lVar14 = 0;
      lVar8 = 1;
      *(undefined8 *)pWVar11 = *(undefined8 *)(param_3 + lVar12 * 8);
LAB_00101399:
      while( true ) {
        pWVar9 = param_3 + lVar12 * 8;
        pWVar16 = param_3 + (param_1 + lVar14) * 8;
        if (fVar1 < *(float *)(pWVar16 + 4) || fVar1 == *(float *)(pWVar16 + 4)) break;
        *(undefined8 *)pWVar9 = *(undefined8 *)pWVar16;
        if (lVar14 == 0) {
          pWVar15 = pWVar15 + -8;
          *(undefined4 *)pWVar16 = uVar4;
          *(float *)(pWVar16 + 4) = fVar1;
          goto LAB_001012e0;
        }
        lVar12 = param_1 + lVar14;
        lVar14 = (lVar14 + -1) / 2;
      }
    }
    else {
      lVar12 = 2;
      lVar14 = 0;
      do {
        pWVar16 = param_3 + (param_1 + lVar12) * 8;
        fVar2 = *(float *)(param_3 + (param_1 + lVar12 + -1) * 8 + 4);
        lVar6 = lVar12 + -1;
        pWVar9 = param_3 + (param_1 + lVar12 + -1) * 8;
        lVar13 = lVar12;
        if (fVar2 < *(float *)(pWVar16 + 4) || fVar2 == *(float *)(pWVar16 + 4)) {
          lVar13 = lVar12 + 1;
          lVar6 = lVar12;
          pWVar9 = pWVar16;
        }
        lVar12 = lVar13 * 2;
        *(undefined8 *)(param_3 + (lVar14 + param_1) * 8) = *(undefined8 *)pWVar9;
        lVar14 = lVar6;
      } while (lVar8 != lVar12 && SBORROW8(lVar8,lVar12) == lVar8 + lVar13 * -2 < 0);
      if (lVar8 == lVar12) {
        lVar12 = param_1 + lVar8 + -1;
        lVar14 = lVar8 + -2 >> 1;
        *(undefined8 *)pWVar9 = *(undefined8 *)(param_3 + lVar12 * 8);
        lVar8 = lVar8 + -1;
        goto LAB_00101399;
      }
      lVar12 = param_1 + lVar6;
      lVar8 = lVar8 + -1;
      lVar14 = (lVar6 + -1) / 2;
      if (0 < lVar6) goto LAB_00101399;
    }
    *(undefined4 *)pWVar9 = uVar4;
    pWVar15 = pWVar15 + -8;
    *(float *)(pWVar9 + 4) = fVar1;
  } while( true );
}



/* CowData<SurfaceTool::WeightSort>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<SurfaceTool::WeightSort>::_copy_on_write(CowData<SurfaceTool::WeightSort> *this)

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



/* SurfaceTool::optimize_indices_for_cache() */

void __thiscall SurfaceTool::optimize_indices_for_cache(SurfaceTool *this)

{
  int iVar1;
  void *__s;
  code *pcVar2;
  uint uVar3;
  void *pvVar4;
  long lVar5;
  char *pcVar6;
  size_t __n;
  undefined8 uVar7;
  
  if (optimize_vertex_cache_func == (code *)0x0) {
    _err_print_error("optimize_indices_for_cache","scene/resources/surface_tool.cpp",0x509,
                     "Parameter \"optimize_vertex_cache_func\" is null.",0,0);
    return;
  }
  iVar1 = *(int *)(this + 0x1a8);
  if (iVar1 == 0) {
    uVar7 = 0x50a;
    pcVar6 = "Condition \"index_array.is_empty()\" is true.";
  }
  else if (*(int *)(this + 0x180) == 3) {
    if ((uint)(iVar1 * -0x55555555) < 0x55555556) {
      uVar3 = iVar1 - 1U | iVar1 - 1U >> 1;
      uVar3 = uVar3 >> 2 | uVar3;
      uVar3 = uVar3 >> 4 | uVar3;
      uVar3 = uVar3 | uVar3 >> 8;
      pvVar4 = (void *)Memory::realloc_static
                                 ((void *)0x0,(ulong)((uVar3 | uVar3 >> 0x10) + 1) << 2,false);
      if (pvVar4 != (void *)0x0) {
        __s = *(void **)(this + 0x1b0);
        if (*(int *)(this + 0x1a8) == 0) {
          __n = 0;
        }
        else {
          lVar5 = 0;
          do {
            *(undefined4 *)((long)pvVar4 + lVar5 * 4) = *(undefined4 *)((long)__s + lVar5 * 4);
            lVar5 = lVar5 + 1;
          } while ((uint)lVar5 < *(uint *)(this + 0x1a8));
          __n = (ulong)*(uint *)(this + 0x1a8) << 2;
        }
        memset(__s,0,__n);
        (*optimize_vertex_cache_func)
                  (*(undefined8 *)(this + 0x1b0),pvVar4,iVar1,*(undefined4 *)(this + 0x198));
        Memory::free_static(pvVar4,false);
        return;
      }
      _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar7 = 0x50c;
    pcVar6 = "Condition \"index_array.size() % 3 != 0\" is true.";
  }
  else {
    uVar7 = 0x50b;
    pcVar6 = "Condition \"primitive != Mesh::PRIMITIVE_TRIANGLES\" is true.";
  }
  _err_print_error("optimize_indices_for_cache","scene/resources/surface_tool.cpp",uVar7,pcVar6,0,0)
  ;
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



/* SurfaceTool::set_bones(Vector<int> const&) */

void __thiscall SurfaceTool::set_bones(SurfaceTool *this,Vector *param_1)

{
  ulong uVar1;
  
  if (this[0x17c] == (SurfaceTool)0x0) {
    _err_print_error("set_bones","scene/resources/surface_tool.cpp",0x160,
                     "Condition \"!begun\" is true.",0,0);
    return;
  }
  uVar1 = *(ulong *)(this + 0x188);
  if ((this[0x17d] == (SurfaceTool)0x0) && ((uVar1 & 0x400) == 0)) {
    _err_print_error("set_bones","scene/resources/surface_tool.cpp",0x161,
                     "Condition \"!first && !(format & Mesh::ARRAY_FORMAT_BONES)\" is true.",0,0);
    return;
  }
  *(ulong *)(this + 0x188) = uVar1 | 0x400;
  if (*(int *)(this + 0x21c) == 1) {
    *(ulong *)(this + 0x188) = uVar1 | 0x8000400;
  }
  if (*(long *)(this + 0x1f0) != *(long *)(param_1 + 8)) {
    CowData<int>::_ref((CowData<int> *)(this + 0x1f0),(CowData *)(param_1 + 8));
    return;
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



/* SurfaceTool::set_weights(Vector<float> const&) */

void __thiscall SurfaceTool::set_weights(SurfaceTool *this,Vector *param_1)

{
  ulong uVar1;
  
  if (this[0x17c] == (SurfaceTool)0x0) {
    _err_print_error("set_weights","scene/resources/surface_tool.cpp",0x16b,
                     "Condition \"!begun\" is true.",0,0);
    return;
  }
  uVar1 = *(ulong *)(this + 0x188);
  if ((this[0x17d] == (SurfaceTool)0x0) && ((uVar1 & 0x800) == 0)) {
    _err_print_error("set_weights","scene/resources/surface_tool.cpp",0x16c,
                     "Condition \"!first && !(format & Mesh::ARRAY_FORMAT_WEIGHTS)\" is true.",0,0);
    return;
  }
  *(ulong *)(this + 0x188) = uVar1 | 0x800;
  if (*(int *)(this + 0x21c) == 1) {
    *(ulong *)(this + 0x188) = uVar1 | 0x8000800;
  }
  if (*(long *)(this + 0x200) != *(long *)(param_1 + 8)) {
    CowData<float>::_ref((CowData<float> *)(this + 0x200),(CowData *)(param_1 + 8));
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



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<unsigned_char>::_copy_on_write(CowData<unsigned_char> *this)

{
  long *plVar1;
  size_t __n;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  __n = *(size_t *)(*(long *)this + -8);
  uVar5 = 0x10;
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
    puVar4[1] = __n;
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
/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  
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
LAB_00101ce6:
    lVar7 = 0;
    lVar4 = 0;
  }
  else {
    lVar7 = *(long *)(lVar4 + -8);
    if (param_1 == lVar7) {
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
    if (lVar7 == 0) goto LAB_00101ce6;
    uVar3 = lVar7 - 1U | lVar7 - 1U >> 1;
    uVar3 = uVar3 | uVar3 >> 2;
    uVar3 = uVar3 | uVar3 >> 4;
    uVar3 = uVar3 | uVar3 >> 8;
    uVar3 = uVar3 | uVar3 >> 0x10;
    lVar4 = (uVar3 | uVar3 >> 0x20) + 1;
  }
  uVar3 = param_1 - 1U | param_1 - 1U >> 1;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 | uVar3 >> 0x10;
  uVar3 = uVar3 | uVar3 >> 0x20;
  if (param_1 <= lVar7) {
    puVar5 = *(undefined8 **)this;
    if (uVar3 + 1 == lVar4) {
      if (puVar5 == (undefined8 *)0x0) {
        _DAT_00000000 = 0;
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    else {
      puVar6 = (undefined8 *)Memory::realloc_static(puVar5 + -2,uVar3 + 0x11,false);
      if (puVar6 == (undefined8 *)0x0) {
LAB_00101d40:
        _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                         "Parameter \"mem_new\" is null.",0,0);
        return;
      }
      puVar5 = puVar6 + 2;
      *puVar6 = 1;
      *(undefined8 **)this = puVar5;
    }
    puVar5[-1] = param_1;
    return;
  }
  if (uVar3 + 1 == lVar4) {
    puVar5 = *(undefined8 **)this;
    if (puVar5 == (undefined8 *)0x0) {
      FUN_00110544();
      return;
    }
  }
  else {
    if (lVar7 == 0) {
      puVar5 = (undefined8 *)Memory::alloc_static(uVar3 + 0x11,false);
      if (puVar5 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
        return;
      }
      *puVar5 = 1;
      puVar5[1] = 0;
    }
    else {
      puVar5 = (undefined8 *)
               Memory::realloc_static((void *)(*(long *)this + -0x10),uVar3 + 0x11,false);
      if (puVar5 == (undefined8 *)0x0) goto LAB_00101d40;
      *puVar5 = 1;
    }
    puVar5 = puVar5 + 2;
    *(undefined8 **)this = puVar5;
  }
  puVar5[-1] = param_1;
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



/* SurfaceTool::Vertex::TEMPNAMEPLACEHOLDERVALUE(SurfaceTool::Vertex const&) const */

ulong __thiscall SurfaceTool::Vertex::operator==(Vertex *this,Vertex *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  if (((((*(float *)(param_1 + 0x88) == *(float *)(this + 0x88)) &&
        (*(float *)(param_1 + 0x8c) == *(float *)(this + 0x8c))) &&
       (*(float *)(param_1 + 0x90) == *(float *)(this + 0x90))) &&
      (((*(float *)(param_1 + 0x38) == *(float *)(this + 0x38) &&
        (*(float *)(param_1 + 0x3c) == *(float *)(this + 0x3c))) &&
       ((*(float *)(this + 0x40) == *(float *)(param_1 + 0x40) &&
        ((*(float *)(this + 0x44) == *(float *)(param_1 + 0x44) &&
         (*(float *)(this + 0x14) == *(float *)(param_1 + 0x14))))))))) &&
     ((*(float *)(this + 0x18) == *(float *)(param_1 + 0x18) &&
      (((((*(float *)(this + 0x1c) == *(float *)(param_1 + 0x1c) &&
          (*(float *)(this + 0x20) == *(float *)(param_1 + 0x20))) &&
         (*(float *)(this + 0x24) == *(float *)(param_1 + 0x24))) &&
        ((*(float *)(this + 0x28) == *(float *)(param_1 + 0x28) &&
         (*(float *)(this + 0x2c) == *(float *)(param_1 + 0x2c))))) &&
       ((*(float *)(this + 0x30) == *(float *)(param_1 + 0x30) &&
        (*(float *)(this + 0x34) == *(float *)(param_1 + 0x34))))))))) {
    uVar5 = Color::operator!=((Color *)(this + 4),param_1 + 4);
    uVar9 = uVar5 & 0xffffffff;
    if ((char)uVar5 == '\0') {
      lVar10 = *(long *)(this + 0xa0);
      if (lVar10 == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = *(long *)(lVar10 + -8);
      }
      lVar1 = *(long *)(param_1 + 0xa0);
      if (lVar1 == 0) {
        if (lVar7 != 0) {
          return uVar9;
        }
      }
      else {
        lVar6 = 0;
        if (*(long *)(lVar1 + -8) != lVar7) {
          return uVar9;
        }
        while (lVar6 < lVar7) {
          lVar2 = lVar6 * 4;
          lVar6 = lVar6 + 1;
          if (*(int *)(lVar10 + lVar2) != *(int *)(lVar1 + -4 + lVar6 * 4)) {
            return uVar9;
          }
        }
      }
      lVar10 = *(long *)(this + 0xb0);
      if (lVar10 != 0) {
        lVar7 = 0;
        while (lVar7 < *(long *)(lVar10 + -8)) {
          lVar2 = *(long *)(param_1 + 0xb0);
          lVar1 = lVar7 * 4;
          lVar6 = lVar7 * 4;
          if (lVar2 == 0) {
            lVar8 = 0;
LAB_001020b9:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar8,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          lVar8 = *(long *)(lVar2 + -8);
          if (lVar8 <= lVar7) goto LAB_001020b9;
          lVar7 = lVar7 + 1;
          if (*(float *)(lVar10 + lVar1) != *(float *)(lVar2 + lVar6)) {
            return uVar9;
          }
        }
      }
      lVar10 = 0x48;
      do {
        cVar4 = Color::operator!=((Color *)(this + lVar10),param_1 + lVar10);
        if (cVar4 != '\0') {
          return uVar9;
        }
        lVar10 = lVar10 + 0x10;
      } while (lVar10 != 0x88);
      return CONCAT71((int7)(uVar9 >> 8),*(int *)this == *(int *)param_1);
    }
  }
  return 0;
}



/* SurfaceTool::SmoothGroupVertex::TEMPNAMEPLACEHOLDERVALUE(SurfaceTool::SmoothGroupVertex const&)
   const */

undefined4 __thiscall
SurfaceTool::SmoothGroupVertex::operator==(SmoothGroupVertex *this,SmoothGroupVertex *param_1)

{
  if (((*(float *)this == *(float *)param_1) && (*(float *)(this + 4) == *(float *)(param_1 + 4)))
     && (*(float *)(this + 8) == *(float *)(param_1 + 8))) {
    return CONCAT31((int3)((uint)*(int *)(param_1 + 0xc) >> 8),
                    *(int *)(this + 0xc) == *(int *)(param_1 + 0xc));
  }
  return 0;
}



/* SurfaceTool::get_material() const */

void SurfaceTool::get_material(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 400) != 0) {
    *in_RDI = *(long *)(in_RSI + 400);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SurfaceTool::SurfaceTool() */

void __thiscall SurfaceTool::SurfaceTool(SurfaceTool *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  RefCounted::RefCounted((RefCounted *)this);
  uVar2 = _UNK_00129588;
  uVar1 = __LC71;
  *(undefined4 *)(this + 0x180) = 1;
  *(undefined ***)this = &PTR__initialize_classv_00128998;
  *(undefined8 *)(this + 0x1b8) = uVar1;
  *(undefined8 *)(this + 0x1c0) = uVar2;
  *(undefined8 *)(this + 0x220) = uVar1;
  *(undefined8 *)(this + 0x228) = uVar2;
  *(undefined8 *)(this + 0x230) = uVar1;
  *(undefined8 *)(this + 0x238) = uVar2;
  *(undefined8 *)(this + 0x240) = uVar1;
  *(undefined8 *)(this + 0x248) = uVar2;
  *(undefined8 *)(this + 0x250) = uVar1;
  *(undefined8 *)(this + 600) = uVar2;
  uVar2 = _UNK_00129598;
  uVar1 = __LC72;
  *(undefined2 *)(this + 0x17c) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined4 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1d4) = 0;
  *(undefined8 *)(this + 0x1dc) = 0;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined4 *)(this + 0x210) = 0;
  *(undefined4 *)(this + 0x214) = 0;
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined8 *)(this + 0x260) = uVar1;
  *(undefined8 *)(this + 0x268) = uVar2;
  return;
}



/* SurfaceTool::deindex() */

void __thiscall SurfaceTool::deindex(SurfaceTool *this)

{
  long *plVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  void *pvVar9;
  CowData<float> *pCVar10;
  uint *puVar11;
  undefined4 *puVar12;
  long lVar13;
  uint uVar14;
  CowData<float> *this_00;
  long in_FS_OFFSET;
  uint local_108 [2];
  void *local_100;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined8 uStack_ec;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  long local_58 [2];
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0x1a8) != 0) {
    local_108[0] = 0;
    local_108[1] = 0;
    local_100 = (void *)0x0;
    LocalVector<SurfaceTool::Vertex,unsigned_int,false,false>::resize
              ((LocalVector<SurfaceTool::Vertex,unsigned_int,false,false> *)local_108,
               *(uint *)(this + 0x198));
    pvVar9 = local_100;
    if (*(int *)(this + 0x198) != 0) {
      this_00 = (CowData<float> *)((long)local_100 + 0xb0);
      uVar14 = 0;
      lVar13 = -0xb0 - (long)local_100;
      do {
        pCVar10 = this_00 + *(long *)(this + 0x1a0) + lVar13;
        uVar6 = *(undefined8 *)(pCVar10 + 4);
        uVar7 = *(undefined8 *)(pCVar10 + 0xc);
        *(undefined4 *)(this_00 + -0xb0) = *(undefined4 *)pCVar10;
        uVar4 = *(undefined8 *)(pCVar10 + 0x14);
        *(undefined8 *)(this_00 + -0xac) = uVar6;
        *(undefined8 *)(this_00 + -0xa4) = uVar7;
        uVar6 = *(undefined8 *)(pCVar10 + 0x48);
        uVar7 = *(undefined8 *)(pCVar10 + 0x50);
        *(undefined8 *)(this_00 + -0x9c) = uVar4;
        *(undefined4 *)(this_00 + -0x94) = *(undefined4 *)(pCVar10 + 0x1c);
        *(undefined8 *)(this_00 + -0x90) = *(undefined8 *)(pCVar10 + 0x20);
        *(undefined4 *)(this_00 + -0x88) = *(undefined4 *)(pCVar10 + 0x28);
        *(undefined8 *)(this_00 + -0x84) = *(undefined8 *)(pCVar10 + 0x2c);
        *(undefined4 *)(this_00 + -0x7c) = *(undefined4 *)(pCVar10 + 0x34);
        *(undefined8 *)(this_00 + -0x78) = *(undefined8 *)(pCVar10 + 0x38);
        uVar4 = *(undefined8 *)(pCVar10 + 0x40);
        *(undefined8 *)(this_00 + -0x68) = uVar6;
        *(undefined8 *)(this_00 + -0x60) = uVar7;
        uVar6 = *(undefined8 *)(pCVar10 + 0x58);
        uVar7 = *(undefined8 *)(pCVar10 + 0x60);
        *(undefined8 *)(this_00 + -0x70) = uVar4;
        uVar4 = *(undefined8 *)(pCVar10 + 0x88);
        *(undefined8 *)(this_00 + -0x58) = uVar6;
        *(undefined8 *)(this_00 + -0x50) = uVar7;
        uVar6 = *(undefined8 *)(pCVar10 + 0x70);
        *(undefined8 *)(this_00 + -0x48) = *(undefined8 *)(pCVar10 + 0x68);
        *(undefined8 *)(this_00 + -0x40) = uVar6;
        uVar6 = *(undefined8 *)(pCVar10 + 0x78);
        uVar7 = *(undefined8 *)(pCVar10 + 0x80);
        *(undefined8 *)(this_00 + -0x28) = uVar4;
        uVar3 = *(undefined4 *)(pCVar10 + 0x90);
        *(undefined8 *)(this_00 + -0x38) = uVar6;
        *(undefined8 *)(this_00 + -0x30) = uVar7;
        *(undefined4 *)(this_00 + -0x20) = uVar3;
        if (*(long *)(this_00 + -0x10) != *(long *)(pCVar10 + 0xa0)) {
          CowData<int>::_ref((CowData<int> *)(this_00 + -0x10),(CowData *)(pCVar10 + 0xa0));
        }
        if (*(long *)this_00 != *(long *)(pCVar10 + 0xb0)) {
          CowData<float>::_ref(this_00,(CowData *)(pCVar10 + 0xb0));
        }
        uVar14 = uVar14 + 1;
        this_00 = this_00 + 0xb8;
      } while (uVar14 < *(uint *)(this + 0x198));
    }
    LocalVector<SurfaceTool::Vertex,unsigned_int,false,false>::resize
              ((LocalVector<SurfaceTool::Vertex,unsigned_int,false,false> *)(this + 0x198),0);
    uVar14 = *(uint *)(this + 0x1a8);
    puVar11 = *(uint **)(this + 0x1b0);
    puVar2 = puVar11 + uVar14;
    if (puVar2 != puVar11) {
      do {
        while( true ) {
          if (local_108[0] <= *puVar11) {
            _err_print_error("deindex","scene/resources/surface_tool.cpp",0x310,
                             "Condition \"uint32_t(index) >= old_vertex_array.size()\" is true.",0,0
                            );
            if (pvVar9 == (void *)0x0) goto LAB_00102332;
            goto LAB_001027fb;
          }
          puVar12 = (undefined4 *)((long)pvVar9 + (ulong)*puVar11 * 0xb8);
          local_f8 = *puVar12;
          local_f4 = *(undefined8 *)(puVar12 + 1);
          uStack_ec = *(undefined8 *)(puVar12 + 3);
          local_b0 = *(undefined8 *)(puVar12 + 0x12);
          uStack_a8 = *(undefined8 *)(puVar12 + 0x14);
          local_a0 = *(undefined8 *)(puVar12 + 0x16);
          uStack_98 = *(undefined8 *)(puVar12 + 0x18);
          local_e4 = *(undefined8 *)(puVar12 + 5);
          local_90 = *(undefined8 *)(puVar12 + 0x1a);
          uStack_88 = *(undefined8 *)(puVar12 + 0x1c);
          local_dc = puVar12[7];
          local_80 = *(undefined8 *)(puVar12 + 0x1e);
          uStack_78 = *(undefined8 *)(puVar12 + 0x20);
          local_d8 = *(undefined8 *)(puVar12 + 8);
          local_d0 = puVar12[10];
          local_cc = *(undefined8 *)(puVar12 + 0xb);
          local_c4 = puVar12[0xd];
          local_c0 = *(undefined8 *)(puVar12 + 0xe);
          local_b8 = *(undefined8 *)(puVar12 + 0x10);
          local_70 = *(undefined8 *)(puVar12 + 0x22);
          local_68 = puVar12[0x24];
          local_58[0] = 0;
          if (*(long *)(puVar12 + 0x28) != 0) {
            CowData<int>::_ref((CowData<int> *)local_58,(CowData *)(puVar12 + 0x28));
          }
          local_48 = 0;
          if (*(long *)(puVar12 + 0x2c) != 0) {
            CowData<float>::_ref((CowData<float> *)&local_48,(CowData *)(puVar12 + 0x2c));
          }
          uVar14 = *(uint *)(this + 0x198);
          pvVar9 = *(void **)(this + 0x1a0);
          if (uVar14 == *(uint *)(this + 0x19c)) {
            uVar8 = (ulong)(uVar14 * 2);
            if (uVar14 * 2 == 0) {
              uVar8 = 1;
            }
            *(int *)(this + 0x19c) = (int)uVar8;
            pvVar9 = (void *)Memory::realloc_static(pvVar9,uVar8 * 0xb8,false);
            *(void **)(this + 0x1a0) = pvVar9;
            if (pvVar9 == (void *)0x0) {
              _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                               "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            uVar14 = *(uint *)(this + 0x198);
          }
          lVar13 = local_58[0];
          *(uint *)(this + 0x198) = uVar14 + 1;
          puVar12 = (undefined4 *)((long)pvVar9 + (ulong)uVar14 * 0xb8);
          *(undefined8 *)(puVar12 + 1) = local_f4;
          *(undefined8 *)(puVar12 + 3) = uStack_ec;
          *puVar12 = local_f8;
          *(undefined8 *)(puVar12 + 0x12) = local_b0;
          *(undefined8 *)(puVar12 + 0x14) = uStack_a8;
          *(undefined8 *)(puVar12 + 5) = local_e4;
          *(undefined8 *)(puVar12 + 0x16) = local_a0;
          *(undefined8 *)(puVar12 + 0x18) = uStack_98;
          puVar12[7] = local_dc;
          *(undefined8 *)(puVar12 + 0x1a) = local_90;
          *(undefined8 *)(puVar12 + 0x1c) = uStack_88;
          *(undefined8 *)(puVar12 + 8) = local_d8;
          *(undefined8 *)(puVar12 + 0x1e) = local_80;
          *(undefined8 *)(puVar12 + 0x20) = uStack_78;
          puVar12[10] = local_d0;
          *(undefined8 *)(puVar12 + 0xb) = local_cc;
          puVar12[0xd] = local_c4;
          *(undefined8 *)(puVar12 + 0xe) = local_c0;
          *(undefined8 *)(puVar12 + 0x10) = local_b8;
          *(undefined8 *)(puVar12 + 0x22) = local_70;
          puVar12[0x24] = local_68;
          *(undefined8 *)(puVar12 + 0x28) = 0;
          if (local_58[0] == 0) break;
          CowData<int>::_ref((CowData<int> *)(puVar12 + 0x28),(CowData *)local_58);
          *(undefined8 *)(puVar12 + 0x2c) = 0;
          if (local_48 != 0) goto LAB_0010251a;
LAB_00102557:
          LOCK();
          plVar1 = (long *)(lVar13 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_58[0] + -0x10),false);
          }
LAB_00102572:
          puVar11 = puVar11 + 1;
          pvVar9 = local_100;
          if (puVar2 == puVar11) goto LAB_001027d3;
        }
        *(undefined8 *)(puVar12 + 0x2c) = 0;
        if (local_48 != 0) {
LAB_0010251a:
          lVar13 = local_48;
          CowData<float>::_ref((CowData<float> *)(puVar12 + 0x2c),(CowData *)&local_48);
          LOCK();
          plVar1 = (long *)(lVar13 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_48 + -0x10),false);
          }
          lVar13 = local_58[0];
          if (local_58[0] != 0) goto LAB_00102557;
          goto LAB_00102572;
        }
        puVar11 = puVar11 + 1;
        pvVar9 = local_100;
      } while (puVar2 != puVar11);
LAB_001027d3:
      uVar14 = *(uint *)(this + 0x1a8);
      pvVar9 = local_100;
    }
    *(ulong *)(this + 0x188) = *(ulong *)(this + 0x188) & 0xffffffffffffefff;
    if (uVar14 != 0) {
      *(undefined4 *)(this + 0x1a8) = 0;
    }
    if (pvVar9 != (void *)0x0) {
LAB_001027fb:
      LocalVector<SurfaceTool::Vertex,unsigned_int,false,false>::resize
                ((LocalVector<SurfaceTool::Vertex,unsigned_int,false,false> *)local_108,0);
      if (local_100 != (void *)0x0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(local_100,false);
          return;
        }
        goto LAB_001028ef;
      }
    }
  }
LAB_00102332:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001028ef:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Vector3>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector3>::_copy_on_write(CowData<Vector3> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  size_t __n;
  ulong uVar4;
  
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
  __n = lVar1 * 0xc;
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
LAB_00102b72:
          puVar8[-1] = param_1;
          return;
        }
        puVar3 = (undefined8 *)Memory::realloc_static(puVar8 + -2,uVar6 + 0x11,false);
        if (puVar3 != (undefined8 *)0x0) {
          puVar8 = puVar3 + 2;
          *puVar3 = 1;
          *(undefined8 **)this = puVar8;
          goto LAB_00102b72;
        }
LAB_00102cd0:
        pcVar4 = "Parameter \"mem_new\" is null.";
        uVar7 = 0x1a9;
        pcVar9 = "_realloc";
        goto LAB_00102cb8;
      }
      if (uVar6 + 1 == lVar5) {
        puVar8 = *(undefined8 **)this;
        if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        lVar5 = puVar8[-1];
LAB_00102be1:
        if (param_1 <= lVar5) goto LAB_00102b47;
      }
      else {
        if (lVar10 != 0) {
          puVar3 = (undefined8 *)
                   Memory::realloc_static((void *)(*(long *)this + -0x10),uVar6 + 0x11,false);
          if (puVar3 == (undefined8 *)0x0) goto LAB_00102cd0;
          puVar8 = puVar3 + 2;
          *puVar3 = 1;
          *(undefined8 **)this = puVar8;
          lVar5 = puVar3[1];
          goto LAB_00102be1;
        }
        puVar3 = (undefined8 *)Memory::alloc_static(uVar6 + 0x11,false);
        if (puVar3 == (undefined8 *)0x0) {
          pcVar4 = "Parameter \"mem_new\" is null.";
          uVar7 = 0x171;
          pcVar9 = "resize";
          goto LAB_00102cb8;
        }
        puVar8 = puVar3 + 2;
        *puVar3 = 1;
        puVar3[1] = 0;
        *(undefined8 **)this = puVar8;
        lVar5 = 0;
      }
      memset((void *)((long)puVar8 + lVar5 * 0xc),0,(param_1 - lVar5) * 0xc);
LAB_00102b47:
      puVar8[-1] = param_1;
      return;
    }
  }
  pcVar4 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
  uVar7 = 0x16a;
  pcVar9 = "resize";
LAB_00102cb8:
  _err_print_error(pcVar9,"./core/templates/cowdata.h",uVar7,pcVar4,0,0);
  return;
}



/* SurfaceTool::_bind_methods() */

void SurfaceTool::_bind_methods(void)

{
  Variant *pVVar1;
  long *plVar2;
  char cVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined *puVar7;
  long lVar8;
  MethodBind *pMVar9;
  uint uVar10;
  Variant *pVVar11;
  long in_FS_OFFSET;
  undefined8 local_340;
  long local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  long local_310;
  long local_308;
  undefined8 local_300;
  long local_2f8;
  undefined8 local_2f0;
  char *local_2e8;
  undefined8 local_2e0;
  long local_2d8;
  CowData<char32_t> local_2c8 [16];
  char *local_2b8;
  undefined8 local_2b0;
  undefined *local_2a8;
  char *pcStack_2a0;
  undefined8 local_298;
  char *local_288;
  char *pcStack_280;
  undefined8 local_278;
  char *local_268;
  char *pcStack_260;
  undefined8 local_258;
  char *local_248;
  char *pcStack_240;
  undefined8 local_238;
  char *local_228;
  char *pcStack_220;
  undefined8 local_218;
  char *local_208;
  char *pcStack_200;
  undefined8 local_1f8;
  char *local_1e8;
  char *pcStack_1e0;
  char *local_1d8;
  undefined8 local_1d0;
  char *local_1c8;
  char *pcStack_1c0;
  char *local_1b8;
  undefined8 local_1b0;
  char *local_1a8;
  undefined *puStack_1a0;
  char *local_198;
  undefined *puStack_190;
  char *local_188;
  char *pcStack_180;
  undefined8 local_178;
  Variant *local_168;
  undefined1 auStack_160 [16];
  Variant *pVStack_150;
  Variant *local_148;
  char **ppcStack_140;
  Variant local_128 [24];
  Variant local_110 [24];
  undefined8 local_f8;
  undefined1 local_f0 [16];
  Variant local_e0 [8];
  Variant *local_d8;
  undefined1 auStack_d0 [16];
  undefined8 local_c0;
  undefined1 local_b8 [16];
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  puVar7 = PTR__LC101_001295a0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_2b8 = "count";
  local_168 = (Variant *)&local_2b8;
  local_2b0 = 0;
  uVar10 = (uint)(Variant *)&local_168;
  D_METHODP((char *)&local_2e8,(char ***)"set_skin_weight_count",uVar10);
  auStack_160 = (undefined1  [16])0x0;
  local_168 = (Variant *)0x0;
  pMVar9 = create_method_bind<SurfaceTool,SurfaceTool::SkinWeightCount>(set_skin_weight_count);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_2e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_168] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_2e8);
  D_METHODP((char *)&local_2e8,(char ***)"get_skin_weight_count",0);
  auStack_160 = (undefined1  [16])0x0;
  local_168 = (Variant *)0x0;
  pMVar9 = create_method_bind<SurfaceTool,SurfaceTool::SkinWeightCount>(get_skin_weight_count);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_2e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_168] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_2e8);
  local_278 = 0;
  local_288 = puVar7;
  pcStack_280 = "format";
  auStack_160._0_8_ = &pcStack_280;
  local_168 = (Variant *)&local_288;
  D_METHODP((char *)&local_2e8,(char ***)"set_custom_format",uVar10);
  auStack_160 = (undefined1  [16])0x0;
  local_168 = (Variant *)0x0;
  pMVar9 = create_method_bind<SurfaceTool,int,SurfaceTool::CustomFormat>(set_custom_format);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_2e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_168] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_2e8);
  pcStack_280 = (char *)0x0;
  local_288 = "channel_index";
  local_168 = (Variant *)&local_288;
  D_METHODP((char *)&local_2e8,(char ***)"get_custom_format",uVar10);
  auStack_160 = (undefined1  [16])0x0;
  local_168 = (Variant *)0x0;
  pMVar9 = create_method_bind<SurfaceTool,SurfaceTool::CustomFormat,int>(get_custom_format);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_2e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_168] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_2e8);
  pcStack_280 = (char *)0x0;
  local_288 = "primitive";
  local_168 = (Variant *)&local_288;
  D_METHODP((char *)&local_2e8,(char ***)"begin",uVar10);
  auStack_160 = (undefined1  [16])0x0;
  local_168 = (Variant *)0x0;
  pMVar9 = create_method_bind<SurfaceTool,Mesh::PrimitiveType>(begin);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_2e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_168] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_2e8);
  pcStack_280 = (char *)0x0;
  local_288 = "vertex";
  local_168 = (Variant *)&local_288;
  D_METHODP((char *)&local_2e8,(char ***)"add_vertex",uVar10);
  auStack_160 = (undefined1  [16])0x0;
  local_168 = (Variant *)0x0;
  pMVar9 = create_method_bind<SurfaceTool,Vector3_const&>(add_vertex);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_2e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_168] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_2e8);
  pcStack_280 = (char *)0x0;
  local_288 = "color";
  local_168 = (Variant *)&local_288;
  D_METHODP((char *)&local_2e8,(char ***)"set_color",uVar10);
  auStack_160 = (undefined1  [16])0x0;
  local_168 = (Variant *)0x0;
  pMVar9 = create_method_bind<SurfaceTool,Color>(set_color);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_2e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_168] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_2e8);
  pcStack_280 = (char *)0x0;
  local_288 = "normal";
  local_168 = (Variant *)&local_288;
  D_METHODP((char *)&local_2e8,(char ***)"set_normal",uVar10);
  auStack_160 = (undefined1  [16])0x0;
  local_168 = (Variant *)0x0;
  pMVar9 = create_method_bind<SurfaceTool,Vector3_const&>(set_normal);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_2e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_168] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_2e8);
  pcStack_280 = (char *)0x0;
  local_288 = "tangent";
  local_168 = (Variant *)&local_288;
  D_METHODP((char *)&local_2e8,(char ***)"set_tangent",uVar10);
  auStack_160 = (undefined1  [16])0x0;
  local_168 = (Variant *)0x0;
  pMVar9 = create_method_bind<SurfaceTool,Plane_const&>(set_tangent);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_2e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_168] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_2e8);
  pcStack_280 = (char *)0x0;
  local_288 = "uv";
  local_168 = (Variant *)&local_288;
  D_METHODP((char *)&local_2e8,(char ***)"set_uv",uVar10);
  auStack_160 = (undefined1  [16])0x0;
  local_168 = (Variant *)0x0;
  pMVar9 = create_method_bind<SurfaceTool,Vector2_const&>(set_uv);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_2e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_168] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_2e8);
  pcStack_280 = (char *)0x0;
  local_288 = "uv2";
  local_168 = (Variant *)&local_288;
  D_METHODP((char *)&local_2e8,(char ***)"set_uv2",uVar10);
  auStack_160 = (undefined1  [16])0x0;
  local_168 = (Variant *)0x0;
  pMVar9 = create_method_bind<SurfaceTool,Vector2_const&>(set_uv2);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_2e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_168] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_2e8);
  pcStack_280 = (char *)0x0;
  local_288 = "bones";
  local_168 = (Variant *)&local_288;
  D_METHODP((char *)&local_2e8,(char ***)"set_bones",uVar10);
  auStack_160 = (undefined1  [16])0x0;
  local_168 = (Variant *)0x0;
  pMVar9 = create_method_bind<SurfaceTool,Vector<int>const&>(set_bones);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_2e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_168] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_2e8);
  pcStack_280 = (char *)0x0;
  local_288 = "weights";
  local_168 = (Variant *)&local_288;
  D_METHODP((char *)&local_2e8,(char ***)"set_weights",uVar10);
  auStack_160 = (undefined1  [16])0x0;
  local_168 = (Variant *)0x0;
  pMVar9 = create_method_bind<SurfaceTool,Vector<float>const&>(set_weights);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_2e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_168] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_2e8);
  local_298 = 0;
  local_2a8 = puVar7;
  pcStack_2a0 = "custom_color";
  auStack_160._0_8_ = &pcStack_2a0;
  local_168 = (Variant *)&local_2a8;
  D_METHODP((char *)&local_2e8,(char ***)"set_custom",uVar10);
  auStack_160 = (undefined1  [16])0x0;
  local_168 = (Variant *)0x0;
  pMVar9 = create_method_bind<SurfaceTool,int,Color_const&>(set_custom);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_2e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_168] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_2e8);
  pcStack_280 = (char *)0x0;
  local_288 = "index";
  local_168 = (Variant *)&local_288;
  D_METHODP((char *)&local_2e8,(char ***)"set_smooth_group",uVar10);
  auStack_160 = (undefined1  [16])0x0;
  local_168 = (Variant *)0x0;
  pMVar9 = create_method_bind<SurfaceTool,unsigned_int>(set_smooth_group);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_2e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_168] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_2e8);
  Array::Array((Array *)&local_330);
  local_168 = (Variant *)0x0;
  local_2e8 = (char *)0x0;
  auStack_160 = (undefined1  [16])0x0;
  Array::set_typed((uint)(Array *)&local_330,(StringName *)0xe,(Variant *)&local_2e8);
  if ((StringName::configured != '\0') && (local_2e8 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_168] != '\0') {
    Variant::_clear_internal();
  }
  local_1a8 = "vertices";
  puStack_1a0 = &_LC96;
  local_198 = "colors";
  puStack_190 = &_LC98;
  local_188 = "normals";
  pcStack_180 = "tangents";
  local_2f0 = 0;
  local_300 = 0;
  local_310 = 0;
  local_320 = 0;
  local_178 = 0;
  local_168 = (Variant *)&local_1a8;
  pVStack_150 = (Variant *)&puStack_190;
  local_148 = (Variant *)&local_188;
  ppcStack_140 = &pcStack_180;
  auStack_160._0_8_ = &puStack_1a0;
  auStack_160._8_8_ = &local_198;
  D_METHODP((char *)&local_2e8,(char ***)"add_triangle_fan",uVar10);
  Variant::Variant((Variant *)&local_d8,(Vector *)&local_328);
  Variant::Variant((Variant *)&local_c0,(Vector *)&local_318);
  Variant::Variant(local_a8,(Vector *)&local_308);
  Variant::Variant(local_90,(Vector *)&local_2f8);
  Variant::Variant(local_78,(Array *)&local_330);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  auStack_160._8_8_ = local_a8;
  auStack_160._0_8_ = (Variant *)&local_c0;
  local_168 = (Variant *)&local_d8;
  pVStack_150 = local_90;
  local_148 = local_78;
  pMVar9 = create_method_bind<SurfaceTool,Vector<Vector3>const&,Vector<Vector2>const&,Vector<Color>const&,Vector<Vector2>const&,Vector<Vector3>const&,TypedArray<Plane>const&>
                     (_add_triangle_fan);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_2e8,&local_168,5);
  pVVar11 = local_48;
  do {
    pVVar1 = pVVar11 + -0x18;
    pVVar11 = pVVar11 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar11 != (Variant *)&local_d8);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_2e8);
  CowData<Vector2>::_unref((CowData<Vector2> *)&local_320);
  lVar8 = local_310;
  if (local_310 != 0) {
    LOCK();
    plVar2 = (long *)(local_310 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_310 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  CowData<Vector2>::_unref((CowData<Vector2> *)&local_300);
  CowData<Vector3>::_unref((CowData<Vector3> *)&local_2f0);
  Array::~Array((Array *)&local_330);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = auStack_160._8_8_;
  auStack_160 = auVar4 << 0x40;
  local_168 = (Variant *)0x10e8e6;
  uVar10 = (uint)(Variant *)&local_d8;
  local_d8 = (Variant *)&local_168;
  D_METHODP((char *)&local_2e8,(char ***)"add_index",uVar10);
  auStack_d0 = (undefined1  [16])0x0;
  local_d8 = (Variant *)0x0;
  pMVar9 = create_method_bind<SurfaceTool,int>(add_index);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_2e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_d8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_2e8);
  D_METHODP((char *)&local_2e8,(char ***)"index",0);
  auStack_d0 = (undefined1  [16])0x0;
  local_d8 = (Variant *)0x0;
  pMVar9 = create_method_bind<SurfaceTool>(index);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_2e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_d8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_2e8);
  D_METHODP((char *)&local_2e8,(char ***)"deindex",0);
  auStack_d0 = (undefined1  [16])0x0;
  local_d8 = (Variant *)0x0;
  pMVar9 = create_method_bind<SurfaceTool>(deindex);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_2e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_d8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_2e8);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = auStack_160._8_8_;
  auStack_160 = auVar5 << 0x40;
  local_168 = (Variant *)&_LC119;
  local_d8 = (Variant *)&local_168;
  D_METHODP((char *)&local_2e8,(char ***)"generate_normals",uVar10);
  Variant::Variant((Variant *)&local_d8,false);
  local_b8 = (undefined1  [16])0x0;
  local_c0 = 0;
  local_168 = (Variant *)&local_d8;
  pMVar9 = create_method_bind<SurfaceTool,bool>(generate_normals);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_2e8,&local_168,1);
  if (Variant::needs_deinit[(int)local_c0] == '\0') {
    cVar3 = Variant::needs_deinit[(int)local_d8];
  }
  else {
    Variant::_clear_internal();
    cVar3 = Variant::needs_deinit[(int)local_d8];
  }
  if (cVar3 != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_2e8);
  D_METHODP((char *)&local_2e8,(char ***)"generate_tangents",0);
  auStack_d0 = (undefined1  [16])0x0;
  local_d8 = (Variant *)0x0;
  pMVar9 = create_method_bind<SurfaceTool>(generate_tangents);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_2e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_d8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_2e8);
  D_METHODP((char *)&local_2e8,(char ***)"optimize_indices_for_cache",0);
  auStack_d0 = (undefined1  [16])0x0;
  local_d8 = (Variant *)0x0;
  pMVar9 = create_method_bind<SurfaceTool>(optimize_indices_for_cache);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_2e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_d8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_2e8);
  D_METHODP((char *)&local_2e8,(char ***)"get_aabb",0);
  auStack_d0 = (undefined1  [16])0x0;
  local_d8 = (Variant *)0x0;
  pMVar9 = create_method_bind<SurfaceTool,AABB>(get_aabb);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_2e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_d8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_2e8);
  local_1f8 = 0;
  auStack_d0._0_8_ = &pcStack_200;
  local_208 = "nd_threshold";
  pcStack_200 = "target_index_count";
  local_d8 = (Variant *)&local_208;
  D_METHODP((char *)&local_2e8,(char ***)"generate_lod",uVar10);
  Variant::Variant((Variant *)&local_d8,3);
  local_b8 = (undefined1  [16])0x0;
  local_c0 = 0;
  local_168 = (Variant *)&local_d8;
  pMVar9 = create_method_bind<SurfaceTool,Vector<int>,float,int>(generate_lod);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_2e8,&local_168,1);
  if (Variant::needs_deinit[(int)local_c0] == '\0') {
    cVar3 = Variant::needs_deinit[(int)local_d8];
  }
  else {
    Variant::_clear_internal();
    cVar3 = Variant::needs_deinit[(int)local_d8];
  }
  if (cVar3 != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_2e8);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = auStack_160._8_8_;
  auStack_160 = auVar6 << 0x40;
  local_168 = (Variant *)0x10e931;
  local_d8 = (Variant *)&local_168;
  D_METHODP((char *)&local_2e8,(char ***)"set_material",uVar10);
  auStack_d0 = (undefined1  [16])0x0;
  local_d8 = (Variant *)0x0;
  pMVar9 = create_method_bind<SurfaceTool,Ref<Material>const&>(set_material);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_2e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_d8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_2e8);
  D_METHODP((char *)&local_2e8,(char ***)"get_primitive_type",0);
  auStack_d0 = (undefined1  [16])0x0;
  local_d8 = (Variant *)0x0;
  pMVar9 = create_method_bind<SurfaceTool,Mesh::PrimitiveType>(get_primitive_type);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_2e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_d8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_2e8);
  D_METHODP((char *)&local_2e8,(char ***)"clear",0);
  auStack_d0 = (undefined1  [16])0x0;
  local_d8 = (Variant *)0x0;
  pMVar9 = create_method_bind<SurfaceTool>(clear);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_2e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_d8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_2e8);
  local_218 = 0;
  local_228 = "existing";
  pcStack_220 = "surface";
  auStack_d0._0_8_ = &pcStack_220;
  local_d8 = (Variant *)&local_228;
  D_METHODP((char *)&local_2e8,(char ***)"create_from",uVar10);
  auStack_d0 = (undefined1  [16])0x0;
  local_d8 = (Variant *)0x0;
  pMVar9 = create_method_bind<SurfaceTool,Ref<Mesh>const&,int>(create_from);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_2e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_d8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_2e8);
  local_238 = 0;
  auStack_d0._0_8_ = &pcStack_240;
  local_248 = "arrays";
  pcStack_240 = "primitive_type";
  local_d8 = (Variant *)&local_248;
  D_METHODP((char *)&local_2e8,(char ***)"create_from_arrays",uVar10);
  Variant::Variant((Variant *)&local_d8,3);
  local_b8 = (undefined1  [16])0x0;
  local_c0 = 0;
  local_168 = (Variant *)&local_d8;
  pMVar9 = create_method_bind<SurfaceTool,Array_const&,Mesh::PrimitiveType>(create_from_arrays);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_2e8,&local_168,1);
  if (Variant::needs_deinit[(int)local_c0] == '\0') {
    cVar3 = Variant::needs_deinit[(int)local_d8];
  }
  else {
    Variant::_clear_internal();
    cVar3 = Variant::needs_deinit[(int)local_d8];
  }
  if (cVar3 != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_2e8);
  local_1b8 = "blend_shape";
  local_1c8 = "existing";
  pcStack_1c0 = "surface";
  auStack_d0._8_8_ = &local_1b8;
  auStack_d0._0_8_ = &pcStack_1c0;
  local_1b0 = 0;
  local_d8 = (Variant *)&local_1c8;
  D_METHODP((char *)&local_2e8,(char ***)"create_from_blend_shape",uVar10);
  auStack_d0 = (undefined1  [16])0x0;
  local_d8 = (Variant *)0x0;
  pMVar9 = create_method_bind<SurfaceTool,Ref<Mesh>const&,int,String_const&>
                     (create_from_blend_shape);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_2e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_d8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_2e8);
  local_1d8 = "transform";
  local_1e8 = "existing";
  pcStack_1e0 = "surface";
  auStack_d0._8_8_ = &local_1d8;
  auStack_d0._0_8_ = &pcStack_1e0;
  local_1d0 = 0;
  local_d8 = (Variant *)&local_1e8;
  D_METHODP((char *)&local_2e8,(char ***)"append_from",uVar10);
  auStack_d0 = (undefined1  [16])0x0;
  local_d8 = (Variant *)0x0;
  pMVar9 = create_method_bind<SurfaceTool,Ref<Mesh>const&,int,Transform3D_const&>(append_from);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_2e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_d8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_2e8);
  auStack_160 = (undefined1  [16])0x0;
  local_268 = "existing";
  pcStack_260 = "flags";
  local_168 = (Variant *)0x0;
  local_258 = 0;
  local_d8 = (Variant *)&local_268;
  auStack_d0._0_8_ = &pcStack_260;
  D_METHODP((char *)&local_2e8,(char ***)"commit",uVar10);
  Variant::Variant(local_128,(Variant *)&local_168);
  Variant::Variant(local_110,0);
  local_f0 = (undefined1  [16])0x0;
  local_f8 = 0;
  auStack_d0._0_8_ = local_110;
  local_d8 = local_128;
  pMVar9 = create_method_bind<SurfaceTool,Ref<ArrayMesh>,Ref<ArrayMesh>const&,unsigned_long>(commit)
  ;
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_2e8,&local_d8,2);
  pVVar11 = local_e0;
  do {
    pVVar1 = pVVar11 + -0x18;
    pVVar11 = pVVar11 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar11 != local_128);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_2e8);
  if (Variant::needs_deinit[(int)local_168] != '\0') {
    Variant::_clear_internal();
  }
  D_METHODP((char *)&local_2e8,(char ***)"commit_to_arrays",0);
  auStack_d0 = (undefined1  [16])0x0;
  local_d8 = (Variant *)0x0;
  pMVar9 = create_method_bind<SurfaceTool,Array>(commit_to_arrays);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_2e8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_d8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_2e8);
  StringName::StringName((StringName *)&local_338,"CUSTOM_RGBA8_UNORM",false);
  local_2e8 = "CUSTOM_RGBA8_UNORM";
  local_340 = 0;
  local_2e0 = 0x12;
  String::parse_latin1((StrRange *)&local_340);
  local_2e8 = "SurfaceTool::CustomFormat";
  local_318 = 0;
  local_2e0 = 0x19;
  String::parse_latin1((StrRange *)&local_318);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_308,(String *)&local_318)
  ;
  StringName::StringName((StringName *)&local_2f8,(String *)&local_308,false);
  local_328 = 0;
  local_330 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_2e8,2,(Array *)&local_330,0,(Vector *)&local_328,0x10006,
             (StringName *)&local_2f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_330);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_328);
  if ((StringName::configured != '\0') && (local_2f8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_308);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_318);
  local_2f8 = local_2d8;
  local_2d8 = 0;
  CowData<char32_t>::_unref(local_2c8);
  if ((StringName::configured != '\0') && (local_2d8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2e0);
  local_308 = 0;
  local_2e8 = "SurfaceTool";
  local_2e0 = 0xb;
  String::parse_latin1((StrRange *)&local_308);
  StringName::StringName((StringName *)&local_2e8,(String *)&local_308,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_2e8,(StringName *)&local_2f8,(StringName *)&local_338,0,false);
  if ((StringName::configured != '\0') && (local_2e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_308);
  if ((StringName::configured != '\0') && (local_2f8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_340);
  if ((StringName::configured != '\0') && (local_338 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_338,"CUSTOM_RGBA8_SNORM",false);
  local_2e8 = "CUSTOM_RGBA8_SNORM";
  local_340 = 0;
  local_2e0 = 0x12;
  String::parse_latin1((StrRange *)&local_340);
  local_2e8 = "SurfaceTool::CustomFormat";
  local_318 = 0;
  local_2e0 = 0x19;
  String::parse_latin1((StrRange *)&local_318);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_308,(String *)&local_318)
  ;
  StringName::StringName((StringName *)&local_2f8,(String *)&local_308,false);
  local_328 = 0;
  local_330 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_2e8,2,(Array *)&local_330,0,(Vector *)&local_328,0x10006,
             (StringName *)&local_2f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_330);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_328);
  if ((StringName::configured != '\0') && (local_2f8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_308);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_318);
  local_2f8 = local_2d8;
  local_2d8 = 0;
  CowData<char32_t>::_unref(local_2c8);
  if ((StringName::configured != '\0') && (local_2d8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2e0);
  local_308 = 0;
  local_2e8 = "SurfaceTool";
  local_2e0 = 0xb;
  String::parse_latin1((StrRange *)&local_308);
  StringName::StringName((StringName *)&local_2e8,(String *)&local_308,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_2e8,(StringName *)&local_2f8,(StringName *)&local_338,1,false);
  if ((StringName::configured != '\0') && (local_2e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_308);
  if ((StringName::configured != '\0') && (local_2f8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_340);
  if ((StringName::configured != '\0') && (local_338 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_338,"CUSTOM_RG_HALF",false);
  local_2e8 = "CUSTOM_RG_HALF";
  local_340 = 0;
  local_2e0 = 0xe;
  String::parse_latin1((StrRange *)&local_340);
  local_2e8 = "SurfaceTool::CustomFormat";
  local_318 = 0;
  local_2e0 = 0x19;
  String::parse_latin1((StrRange *)&local_318);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_308,(String *)&local_318)
  ;
  StringName::StringName((StringName *)&local_2f8,(String *)&local_308,false);
  local_328 = 0;
  local_330 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_2e8,2,(Array *)&local_330,0,(Vector *)&local_328,0x10006,
             (StringName *)&local_2f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_330);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_328);
  if ((StringName::configured != '\0') && (local_2f8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_308);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_318);
  local_2f8 = local_2d8;
  local_2d8 = 0;
  CowData<char32_t>::_unref(local_2c8);
  if ((StringName::configured != '\0') && (local_2d8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2e0);
  local_308 = 0;
  local_2e8 = "SurfaceTool";
  local_2e0 = 0xb;
  String::parse_latin1((StrRange *)&local_308);
  StringName::StringName((StringName *)&local_2e8,(String *)&local_308,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_2e8,(StringName *)&local_2f8,(StringName *)&local_338,2,false);
  if ((StringName::configured != '\0') && (local_2e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_308);
  if ((StringName::configured != '\0') && (local_2f8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_340);
  if ((StringName::configured != '\0') && (local_338 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_338,"CUSTOM_RGBA_HALF",false);
  local_2e8 = "CUSTOM_RGBA_HALF";
  local_340 = 0;
  local_2e0 = 0x10;
  String::parse_latin1((StrRange *)&local_340);
  local_2e8 = "SurfaceTool::CustomFormat";
  local_318 = 0;
  local_2e0 = 0x19;
  String::parse_latin1((StrRange *)&local_318);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_308,(String *)&local_318)
  ;
  StringName::StringName((StringName *)&local_2f8,(String *)&local_308,false);
  local_328 = 0;
  local_330 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_2e8,2,(Array *)&local_330,0,(Vector *)&local_328,0x10006,
             (StringName *)&local_2f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_330);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_328);
  if ((StringName::configured != '\0') && (local_2f8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_308);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_318);
  local_2f8 = local_2d8;
  local_2d8 = 0;
  CowData<char32_t>::_unref(local_2c8);
  if ((StringName::configured != '\0') && (local_2d8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2e0);
  local_308 = 0;
  local_2e8 = "SurfaceTool";
  local_2e0 = 0xb;
  String::parse_latin1((StrRange *)&local_308);
  StringName::StringName((StringName *)&local_2e8,(String *)&local_308,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_2e8,(StringName *)&local_2f8,(StringName *)&local_338,3,false);
  if ((StringName::configured != '\0') && (local_2e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_308);
  if ((StringName::configured != '\0') && (local_2f8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_340);
  if ((StringName::configured != '\0') && (local_338 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_338,"CUSTOM_R_FLOAT",false);
  local_2e8 = "CUSTOM_R_FLOAT";
  local_340 = 0;
  local_2e0 = 0xe;
  String::parse_latin1((StrRange *)&local_340);
  local_2e8 = "SurfaceTool::CustomFormat";
  local_318 = 0;
  local_2e0 = 0x19;
  String::parse_latin1((StrRange *)&local_318);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_308,(String *)&local_318)
  ;
  StringName::StringName((StringName *)&local_2f8,(String *)&local_308,false);
  local_328 = 0;
  local_330 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_2e8,2,(Array *)&local_330,0,(Vector *)&local_328,0x10006,
             (StringName *)&local_2f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_330);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_328);
  if ((StringName::configured != '\0') && (local_2f8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_308);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_318);
  local_2f8 = local_2d8;
  local_2d8 = 0;
  CowData<char32_t>::_unref(local_2c8);
  if ((StringName::configured != '\0') && (local_2d8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2e0);
  local_308 = 0;
  local_2e8 = "SurfaceTool";
  local_2e0 = 0xb;
  String::parse_latin1((StrRange *)&local_308);
  StringName::StringName((StringName *)&local_2e8,(String *)&local_308,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_2e8,(StringName *)&local_2f8,(StringName *)&local_338,4,false);
  if ((StringName::configured != '\0') && (local_2e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_308);
  if ((StringName::configured != '\0') && (local_2f8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_340);
  if ((StringName::configured != '\0') && (local_338 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_338,"CUSTOM_RG_FLOAT",false);
  local_2e8 = "CUSTOM_RG_FLOAT";
  local_340 = 0;
  local_2e0 = 0xf;
  String::parse_latin1((StrRange *)&local_340);
  local_2e8 = "SurfaceTool::CustomFormat";
  local_318 = 0;
  local_2e0 = 0x19;
  String::parse_latin1((StrRange *)&local_318);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_308,(String *)&local_318)
  ;
  StringName::StringName((StringName *)&local_2f8,(String *)&local_308,false);
  local_328 = 0;
  local_330 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_2e8,2,(Array *)&local_330,0,(Vector *)&local_328,0x10006,
             (StringName *)&local_2f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_330);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_328);
  if ((StringName::configured != '\0') && (local_2f8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_308);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_318);
  local_2f8 = local_2d8;
  local_2d8 = 0;
  CowData<char32_t>::_unref(local_2c8);
  if ((StringName::configured != '\0') && (local_2d8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2e0);
  local_308 = 0;
  local_2e8 = "SurfaceTool";
  local_2e0 = 0xb;
  String::parse_latin1((StrRange *)&local_308);
  StringName::StringName((StringName *)&local_2e8,(String *)&local_308,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_2e8,(StringName *)&local_2f8,(StringName *)&local_338,5,false);
  if ((StringName::configured != '\0') && (local_2e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_308);
  if ((StringName::configured != '\0') && (local_2f8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_340);
  if ((StringName::configured != '\0') && (local_338 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_338,"CUSTOM_RGB_FLOAT",false);
  local_2e8 = "CUSTOM_RGB_FLOAT";
  local_340 = 0;
  local_2e0 = 0x10;
  String::parse_latin1((StrRange *)&local_340);
  local_2e8 = "SurfaceTool::CustomFormat";
  local_318 = 0;
  local_2e0 = 0x19;
  String::parse_latin1((StrRange *)&local_318);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_308,(String *)&local_318)
  ;
  StringName::StringName((StringName *)&local_2f8,(String *)&local_308,false);
  local_328 = 0;
  local_330 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_2e8,2,(Array *)&local_330,0,(Vector *)&local_328,0x10006,
             (StringName *)&local_2f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_330);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_328);
  if ((StringName::configured != '\0') && (local_2f8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_308);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_318);
  local_2f8 = local_2d8;
  local_2d8 = 0;
  CowData<char32_t>::_unref(local_2c8);
  if ((StringName::configured != '\0') && (local_2d8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2e0);
  local_308 = 0;
  local_2e8 = "SurfaceTool";
  local_2e0 = 0xb;
  String::parse_latin1((StrRange *)&local_308);
  StringName::StringName((StringName *)&local_2e8,(String *)&local_308,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_2e8,(StringName *)&local_2f8,(StringName *)&local_338,6,false);
  if ((StringName::configured != '\0') && (local_2e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_308);
  if ((StringName::configured != '\0') && (local_2f8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_340);
  if ((StringName::configured != '\0') && (local_338 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_338,"CUSTOM_RGBA_FLOAT",false);
  local_2e8 = "CUSTOM_RGBA_FLOAT";
  local_340 = 0;
  local_2e0 = 0x11;
  String::parse_latin1((StrRange *)&local_340);
  local_2e8 = "SurfaceTool::CustomFormat";
  local_318 = 0;
  local_2e0 = 0x19;
  String::parse_latin1((StrRange *)&local_318);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_308,(String *)&local_318)
  ;
  StringName::StringName((StringName *)&local_2f8,(String *)&local_308,false);
  local_328 = 0;
  local_330 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_2e8,2,(Array *)&local_330,0,(Vector *)&local_328,0x10006,
             (StringName *)&local_2f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_330);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_328);
  if ((StringName::configured != '\0') && (local_2f8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_308);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_318);
  local_2f8 = local_2d8;
  local_2d8 = 0;
  CowData<char32_t>::_unref(local_2c8);
  if ((StringName::configured != '\0') && (local_2d8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2e0);
  local_308 = 0;
  local_2e8 = "SurfaceTool";
  local_2e0 = 0xb;
  String::parse_latin1((StrRange *)&local_308);
  StringName::StringName((StringName *)&local_2e8,(String *)&local_308,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_2e8,(StringName *)&local_2f8,(StringName *)&local_338,7,false);
  if ((StringName::configured != '\0') && (local_2e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_308);
  if ((StringName::configured != '\0') && (local_2f8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_340);
  if ((StringName::configured != '\0') && (local_338 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_338,"CUSTOM_MAX",false);
  local_2e8 = "CUSTOM_MAX";
  local_340 = 0;
  local_2e0 = 10;
  String::parse_latin1((StrRange *)&local_340);
  local_2e8 = "SurfaceTool::CustomFormat";
  local_318 = 0;
  local_2e0 = 0x19;
  String::parse_latin1((StrRange *)&local_318);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_308,(String *)&local_318)
  ;
  StringName::StringName((StringName *)&local_2f8,(String *)&local_308,false);
  local_328 = 0;
  local_330 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_2e8,2,(Array *)&local_330,0,(Vector *)&local_328,0x10006,
             (StringName *)&local_2f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_330);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_328);
  if ((StringName::configured != '\0') && (local_2f8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_308);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_318);
  local_2f8 = local_2d8;
  local_2d8 = 0;
  CowData<char32_t>::_unref(local_2c8);
  if ((StringName::configured != '\0') && (local_2d8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2e0);
  local_308 = 0;
  local_2e8 = "SurfaceTool";
  local_2e0 = 0xb;
  String::parse_latin1((StrRange *)&local_308);
  StringName::StringName((StringName *)&local_2e8,(String *)&local_308,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_2e8,(StringName *)&local_2f8,(StringName *)&local_338,8,false);
  if ((StringName::configured != '\0') && (local_2e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_308);
  if ((StringName::configured != '\0') && (local_2f8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_340);
  if ((StringName::configured != '\0') && (local_338 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2f8,"SKIN_4_WEIGHTS",false);
  local_318 = 0;
  local_2e8 = "SKIN_4_WEIGHTS";
  local_2e0 = 0xe;
  String::parse_latin1((StrRange *)&local_318);
  GetTypeInfo<SurfaceTool::SkinWeightCount,void>::get_class_info
            ((GetTypeInfo<SurfaceTool::SkinWeightCount,void> *)&local_2e8);
  local_308 = local_2d8;
  local_2d8 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_2e8);
  local_328 = 0;
  local_2e8 = "SurfaceTool";
  local_2e0 = 0xb;
  String::parse_latin1((StrRange *)&local_328);
  StringName::StringName((StringName *)&local_2e8,(String *)&local_328,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_2e8,(StringName *)&local_308,(StringName *)&local_2f8,0,false);
  if ((StringName::configured != '\0') && (local_2e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_328);
  if ((StringName::configured != '\0') && (local_308 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_318);
  if ((StringName::configured != '\0') && (local_2f8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_2f8,"SKIN_8_WEIGHTS",false);
  local_318 = 0;
  local_2e8 = "SKIN_8_WEIGHTS";
  local_2e0 = 0xe;
  String::parse_latin1((StrRange *)&local_318);
  GetTypeInfo<SurfaceTool::SkinWeightCount,void>::get_class_info
            ((GetTypeInfo<SurfaceTool::SkinWeightCount,void> *)&local_2e8);
  local_308 = local_2d8;
  local_2d8 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_2e8);
  local_2e8 = "SurfaceTool";
  local_328 = 0;
  local_2e0 = 0xb;
  String::parse_latin1((StrRange *)&local_328);
  StringName::StringName((StringName *)&local_2e8,(String *)&local_328,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_2e8,(StringName *)&local_308,(StringName *)&local_2f8,1,false);
  if ((StringName::configured != '\0') && (local_2e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_328);
  if ((StringName::configured != '\0') && (local_308 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_318);
  if ((StringName::configured != '\0') && (local_2f8 != 0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
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



/* SurfaceTool::generate_lod(float, int) */

long SurfaceTool::generate_lod(float param_1,int param_2)

{
  undefined4 *puVar1;
  CowData<int> *this;
  undefined4 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  undefined4 *puVar8;
  ulong uVar9;
  uint in_EDX;
  uint uVar10;
  long in_RSI;
  ulong uVar11;
  undefined4 in_register_0000003c;
  long lVar12;
  int iVar13;
  long in_FS_OFFSET;
  bool bVar14;
  undefined1 local_44 [4];
  long local_40;
  
  lVar12 = CONCAT44(in_register_0000003c,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (generate_lod(float,int)::warning_shown == '\0') {
    _err_print_error("generate_lod","scene/resources/surface_tool.cpp",0x522,
                     "This method has been deprecated and will be removed in the future.",
                     "The \"SurfaceTool.generate_lod()\" method is deprecated. Consider using \"ImporterMesh.generate_lods()\" instead."
                     ,0,1);
    LOCK();
    generate_lod(float,int)::warning_shown = '\x01';
    UNLOCK();
  }
  bVar14 = simplify_func == (code *)0x0;
  *(undefined8 *)(lVar12 + 8) = 0;
  if (bVar14) {
    _err_print_error("generate_lod","scene/resources/surface_tool.cpp",0x526,
                     "Parameter \"simplify_func\" is null.",0,0);
  }
  else if ((int)in_EDX < 0) {
    _err_print_error("generate_lod","scene/resources/surface_tool.cpp",0x527,
                     "Condition \"p_target_index_count < 0\" is true. Returning: lod",0,0);
  }
  else if (*(int *)(in_RSI + 0x198) == 0) {
    _err_print_error("generate_lod","scene/resources/surface_tool.cpp",0x528,
                     "Condition \"vertex_array.is_empty()\" is true. Returning: lod",0,0);
  }
  else {
    uVar6 = *(uint *)(in_RSI + 0x1a8);
    if (uVar6 == 0) {
      _err_print_error("generate_lod","scene/resources/surface_tool.cpp",0x529,
                       "Condition \"index_array.is_empty()\" is true. Returning: lod",0,0);
    }
    else if (uVar6 % 3 == 0) {
      if (uVar6 < in_EDX) {
        _err_print_error("generate_lod","scene/resources/surface_tool.cpp",0x52b,
                         "Condition \"index_array.size() < (unsigned int)p_target_index_count\" is true. Returning: lod"
                         ,0,0);
      }
      else {
        this = (CowData<int> *)(lVar12 + 8);
        CowData<int>::resize<false>(this,(ulong)uVar6);
        if (*(int *)(in_RSI + 0x198) == 0) {
          iVar13 = 0;
          pvVar7 = (void *)0x0;
        }
        else {
          uVar6 = *(int *)(in_RSI + 0x198) * 3;
          uVar5 = uVar6 - 1 >> 1 | uVar6 - 1;
          uVar5 = uVar5 | uVar5 >> 2;
          uVar5 = uVar5 >> 4 | uVar5;
          uVar5 = uVar5 >> 8 | uVar5;
          pvVar7 = (void *)Memory::realloc_static
                                     ((void *)0x0,(ulong)((uVar5 | uVar5 >> 0x10) + 1) << 2,false);
          if (pvVar7 == (void *)0x0) {
            _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                             "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          iVar13 = *(int *)(in_RSI + 0x198);
          if (iVar13 == 0) {
            iVar13 = 0;
          }
          else {
            uVar9 = 1;
            uVar10 = 2;
            puVar8 = (undefined4 *)(*(long *)(in_RSI + 0x1a0) + 0x88);
            uVar5 = 0;
            do {
              if (uVar6 <= uVar5) {
                uVar9 = (ulong)uVar5;
LAB_001062aa:
                _err_print_index_error
                          ("operator[]","./core/templates/local_vector.h",0xb2,uVar9,(ulong)uVar6,
                           "p_index","count","",false,true);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar4 = (code *)invalidInstructionException();
                (*pcVar4)();
              }
              *(undefined4 *)((long)pvVar7 + (ulong)uVar5 * 4) = *puVar8;
              if (uVar6 <= (uint)uVar9) goto LAB_001062aa;
              *(undefined4 *)((long)pvVar7 + uVar9 * 4) = puVar8[1];
              puVar1 = puVar8 + 2;
              if (uVar6 <= uVar10) {
                uVar9 = (ulong)uVar10;
                goto LAB_001062aa;
              }
              uVar11 = (ulong)uVar10;
              uVar10 = uVar10 + 3;
              uVar5 = uVar5 + 3;
              puVar8 = puVar8 + 0x2e;
              *(undefined4 *)((long)pvVar7 + uVar11 * 4) = *puVar1;
              uVar9 = (ulong)((uint)uVar9 + 3);
            } while (iVar13 * 3 + 2U != uVar10);
          }
        }
        pcVar4 = simplify_func;
        uVar2 = *(undefined4 *)(in_RSI + 0x1a8);
        uVar3 = *(undefined8 *)(in_RSI + 0x1b0);
        CowData<int>::_copy_on_write(this);
        uVar6 = (*pcVar4)(param_1,*(undefined8 *)(lVar12 + 8),uVar3,uVar2,pvVar7,iVar13,0xc,
                          (long)(int)in_EDX,1,local_44);
        if (uVar6 == 0) {
          _err_print_error("generate_lod","scene/resources/surface_tool.cpp",0x539,
                           "Condition \"index_count == 0\" is true. Returning: lod",0,0);
        }
        else {
          CowData<int>::resize<false>(this,(ulong)uVar6);
        }
        if (pvVar7 != (void *)0x0) {
          Memory::free_static(pvVar7,false);
        }
      }
    }
    else {
      _err_print_error("generate_lod","scene/resources/surface_tool.cpp",0x52a,
                       "Condition \"index_array.size() % 3 != 0\" is true. Returning: lod",0,0);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar12;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SurfaceTool::create_vertex_array_from_arrays(Array const&, LocalVector<SurfaceTool::Vertex,
   unsigned int, false, false>&, unsigned long*) */

void SurfaceTool::create_vertex_array_from_arrays
               (Array *param_1,LocalVector *param_2,ulong *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  code *pcVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  void *pvVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  undefined4 *puVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  CowData<float> *this;
  uint *puVar23;
  undefined4 *puVar24;
  ulong uVar25;
  long in_FS_OFFSET;
  bool bVar26;
  float fVar27;
  undefined1 auVar28 [16];
  float fVar29;
  undefined8 uVar30;
  undefined1 auVar31 [16];
  int local_2bc;
  Variant local_288 [8];
  long local_280;
  Variant local_278 [8];
  long local_270;
  Variant local_268 [8];
  long local_260;
  Variant local_258 [8];
  long local_250;
  Variant local_248 [8];
  long local_240;
  Variant local_238 [8];
  long local_230;
  Variant local_228 [8];
  long local_220;
  Variant local_218 [8];
  long local_210;
  Variant local_208 [8];
  long local_200;
  undefined4 local_1f8 [2];
  undefined8 local_1f0 [4];
  undefined8 local_1d0;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b4;
  undefined8 uStack_1ac;
  float local_1a4;
  float fStack_1a0;
  float local_19c;
  undefined8 local_198;
  float local_190;
  undefined8 local_18c;
  float local_184;
  undefined8 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 local_130;
  undefined4 local_128;
  long local_118 [2];
  long local_108 [2];
  undefined4 local_f8;
  undefined8 local_f4;
  undefined8 uStack_ec;
  undefined8 local_e4;
  float local_dc;
  undefined8 local_d8;
  float local_d0;
  undefined8 local_cc;
  float local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  long local_58 [2];
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar8 = Array::size();
  if (iVar8 < 0xc) {
    iVar8 = Array::size();
    _err_print_index_error
              ("create_vertex_array_from_arrays","scene/resources/surface_tool.cpp",0x323,0xb,
               (long)iVar8,"RenderingServer::ARRAY_WEIGHTS","p_arrays.size()","",false,false);
    goto LAB_00106f4e;
  }
  LocalVector<SurfaceTool::Vertex,unsigned_int,false,false>::resize
            ((LocalVector<SurfaceTool::Vertex,unsigned_int,false,false> *)param_2,0);
  iVar8 = (int)param_1;
  Array::operator[](iVar8);
  Variant::operator_cast_to_Vector(local_288);
  Array::operator[](iVar8);
  Variant::operator_cast_to_Vector(local_278);
  Array::operator[](iVar8);
  Variant::operator_cast_to_Vector(local_268);
  Array::operator[](iVar8);
  Variant::operator_cast_to_Vector(local_258);
  Array::operator[](iVar8);
  Variant::operator_cast_to_Vector(local_248);
  Array::operator[](iVar8);
  Variant::operator_cast_to_Vector(local_238);
  Array::operator[](iVar8);
  Variant::operator_cast_to_Vector(local_228);
  Array::operator[](iVar8);
  Variant::operator_cast_to_Vector(local_218);
  local_1f0[0] = 0;
  local_1f0[2] = 0;
  local_1d0 = 0;
  local_1c0 = 0;
  if (local_280 == 0) {
LAB_00106eb0:
    if (param_3 != (ulong *)0x0) {
      *param_3 = 0;
    }
    puVar24 = &local_1b8;
    do {
      puVar17 = puVar24 + -4;
      CowData<float>::_unref((CowData<float> *)(puVar24 + -2));
      puVar24 = puVar17;
    } while (puVar17 != local_1f8);
  }
  else {
    iVar12 = (int)*(long *)(local_280 + -8);
    if (iVar12 == 0) goto LAB_00106eb0;
    if (local_270 == 0) {
      uVar25 = 1;
    }
    else {
      uVar25 = (-(ulong)(*(long *)(local_270 + -8) == 0) & 0xfffffffffffffffe) + 3;
    }
    if ((local_260 != 0) && (*(long *)(local_260 + -8) != 0)) {
      uVar25 = uVar25 | 4;
    }
    if ((local_250 != 0) && (*(long *)(local_250 + -8) != 0)) {
      uVar25 = uVar25 | 8;
    }
    if ((local_240 != 0) && (*(long *)(local_240 + -8) != 0)) {
      uVar25 = uVar25 | 0x10;
    }
    if ((local_230 != 0) && (*(long *)(local_230 + -8) != 0)) {
      uVar25 = uVar25 | 0x20;
    }
    if ((local_220 == 0) || (*(long *)(local_220 + -8) == 0)) {
      local_2bc = 0;
      if ((local_210 != 0) && (*(long *)(local_210 + -8) != 0)) {
        uVar25 = uVar25 | 0x800;
      }
    }
    else {
      local_2bc = 0;
      if ((local_210 != 0) && (*(long *)(local_210 + -8) != 0)) {
        local_2bc = (int)(*(long *)(local_220 + -8) / *(long *)(local_280 + -8));
        uVar16 = uVar25 | 0xc00;
        if (local_2bc == 8) {
          uVar16 = uVar25 | 0x8000c00;
        }
        uVar25 = uVar16 | 0x800;
      }
    }
    puVar24 = &custom_shift;
    iVar18 = 6;
    puVar23 = &custom_mask;
    this = (CowData<float> *)local_1f0;
    do {
      piVar10 = (int *)Array::operator[](iVar8);
      if (*piVar10 == 0x1d) {
        _err_print_error("create_vertex_array_from_arrays","scene/resources/surface_tool.cpp",0x35c,
                         "Condition \"p_arrays[RenderingServer::ARRAY_CUSTOM0 + i].get_type() == Variant::PACKED_BYTE_ARRAY\" is true. Continuing."
                         ,"Extracting Byte/Half formats is not supported",0,0);
      }
      else {
        piVar10 = (int *)Array::operator[](iVar8);
        if (*piVar10 == 0x20) {
          uVar25 = uVar25 | *puVar23;
          Array::operator[](iVar8);
          Variant::operator_cast_to_Vector(local_208);
          if (*(long *)this != local_200) {
            CowData<float>::_unref(this);
            lVar13 = local_200;
            local_200 = 0;
            *(long *)this = lVar13;
          }
          CowData<float>::_unref((CowData<float> *)&local_200);
          if (*(long *)this == 0) {
            if (local_280 == 0) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)invalidInstructionException();
              (*pcVar7)();
            }
          }
          else {
            if (local_280 == 0) goto LAB_00106ea4;
            iVar14 = (int)(*(long *)(*(long *)this + -8) / *(long *)(local_280 + -8));
            if (iVar14 == 1) {
              uVar25 = uVar25 | (long)(4 << ((byte)*puVar24 & 0x1f));
            }
            else if (iVar14 == 2) {
              uVar25 = uVar25 | (long)(5 << ((byte)*puVar24 & 0x1f));
            }
            else if (iVar14 == 3) {
              uVar25 = uVar25 | (long)(6 << ((byte)*puVar24 & 0x1f));
            }
            else if (iVar14 == 4) {
              uVar25 = uVar25 | (long)(7 << ((byte)*puVar24 & 0x1f));
            }
          }
        }
      }
      iVar18 = iVar18 + 1;
      puVar24 = puVar24 + 1;
      this = this + 0x10;
      puVar23 = puVar23 + 1;
    } while (iVar18 != 10);
    if (0 < iVar12) {
      iVar8 = 0;
      uVar16 = 0;
      do {
        local_1b8 = 0;
        local_1a4 = 0.0;
        fStack_1a0 = 0.0;
        local_19c = 0.0;
        local_198 = 0;
        local_190 = 0.0;
        local_18c = 0;
        local_184 = 0.0;
        local_180 = 0;
        local_178 = 0;
        local_118[0] = 0;
        local_108[0] = 0;
        local_1b4 = CONCAT44(_UNK_00129584,__LC71);
        uStack_1ac = CONCAT44(_UNK_0012958c,_UNK_00129588);
        local_170 = __LC71;
        uStack_16c = _UNK_00129584;
        uStack_168 = _UNK_00129588;
        uStack_164 = _UNK_0012958c;
        local_160 = __LC71;
        uStack_15c = _UNK_00129584;
        uStack_158 = _UNK_00129588;
        uStack_154 = _UNK_0012958c;
        local_150 = __LC71;
        uStack_14c = _UNK_00129584;
        uStack_148 = _UNK_00129588;
        uStack_144 = _UNK_0012958c;
        local_140 = __LC71;
        uStack_13c = _UNK_00129584;
        uStack_138 = _UNK_00129588;
        uStack_134 = _UNK_0012958c;
        uVar19 = uVar16;
        if (local_280 == 0) {
LAB_00107090:
          uVar22 = 0;
          uVar19 = uVar16;
LAB_00106e83:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,uVar19,uVar22,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
LAB_00106ea4:
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        uVar22 = *(ulong *)(local_280 + -8);
        if ((long)uVar22 <= (long)uVar16) goto LAB_00106e83;
        local_130 = *(undefined8 *)(local_280 + uVar16 * 0xc);
        local_128 = *(undefined4 *)(local_280 + 8 + uVar16 * 0xc);
        if ((uVar25 & 2) != 0) {
          if (local_270 == 0) goto LAB_00107090;
          uVar22 = *(ulong *)(local_270 + -8);
          if ((long)uVar22 <= (long)uVar16) goto LAB_00106e83;
          uVar30 = *(undefined8 *)(local_270 + uVar16 * 0xc);
          local_19c = *(float *)(local_270 + 8 + uVar16 * 0xc);
          local_1a4 = (float)uVar30;
          fStack_1a0 = (float)((ulong)uVar30 >> 0x20);
        }
        if ((uVar25 & 4) != 0) {
          uVar9 = (int)uVar16 * 4;
          uVar19 = (ulong)(int)(uVar9 + 2);
          if (local_260 == 0) {
            uVar22 = 0;
            goto LAB_00106e83;
          }
          uVar22 = *(ulong *)(local_260 + -8);
          if ((long)uVar22 <= (long)uVar19) goto LAB_00106e83;
          fVar27 = *(float *)(local_260 + (ulong)(uVar9 + 2) * 4);
          uVar19 = (ulong)(uVar9 + 1);
          if ((long)uVar22 <= (long)uVar19) goto LAB_00106e83;
          fVar3 = *(float *)(local_260 + uVar19 * 4);
          uVar19 = (ulong)uVar9;
          if ((long)uVar22 <= (long)uVar19) goto LAB_00106e83;
          fVar4 = *(float *)(local_260 + uVar19 * 4);
          uVar9 = uVar9 + 3;
          local_18c = CONCAT44(fVar3,fVar4);
          uVar19 = (long)(int)uVar9;
          local_184 = fVar27;
          if ((long)uVar22 <= (long)(int)uVar9) goto LAB_00106e83;
          fVar5 = *(float *)(local_260 + (ulong)uVar9 * 4);
          fVar29 = fVar3 * local_1a4 - fVar4 * fStack_1a0;
          auVar28._0_4_ = fVar27 * fStack_1a0 - local_19c * fVar3;
          auVar28._4_4_ = fVar4 * local_19c - local_1a4 * fVar27;
          auVar28._8_8_ = 0;
          fVar27 = auVar28._0_4_ * auVar28._0_4_ + auVar28._4_4_ * auVar28._4_4_ + fVar29 * fVar29;
          uVar30 = 0;
          local_190 = 0.0;
          if (fVar27 != 0.0) {
            fVar27 = SQRT(fVar27);
            local_190 = fVar29 / fVar27;
            auVar31._4_4_ = fVar27;
            auVar31._0_4_ = fVar27;
            auVar31._8_8_ = _LC191;
            auVar28 = divps(auVar28,auVar31);
            uVar30 = auVar28._0_8_;
          }
          local_190 = fVar5 * local_190;
          local_198 = CONCAT44((float)((ulong)uVar30 >> 0x20) * fVar5,(float)uVar30 * fVar5);
        }
        if ((uVar25 & 8) != 0) {
          if (local_250 == 0) goto LAB_00107090;
          uVar22 = *(ulong *)(local_250 + -8);
          uVar19 = uVar16;
          if ((long)uVar22 <= (long)uVar16) goto LAB_00106e83;
          puVar2 = (undefined8 *)(local_250 + uVar16 * 0x10);
          local_1b4 = *puVar2;
          uStack_1ac = puVar2[1];
        }
        if ((uVar25 & 0x10) != 0) {
          if (local_240 == 0) goto LAB_00107090;
          uVar22 = *(ulong *)(local_240 + -8);
          uVar19 = uVar16;
          if ((long)uVar22 <= (long)uVar16) goto LAB_00106e83;
          local_180 = *(undefined8 *)(local_240 + uVar16 * 8);
        }
        if ((uVar25 & 0x20) != 0) {
          if (local_230 == 0) goto LAB_00107090;
          uVar22 = *(ulong *)(local_230 + -8);
          uVar19 = uVar16;
          if ((long)uVar22 <= (long)uVar16) goto LAB_00106e83;
          local_178 = *(undefined8 *)(local_230 + uVar16 * 8);
        }
        if ((uVar25 & 0x400) != 0) {
          local_200 = 0;
          CowData<int>::resize<false>((CowData<int> *)&local_200,(long)local_2bc);
          if (0 < local_2bc) {
            lVar13 = 0;
            uVar19 = (ulong)iVar8;
            do {
              if (local_220 == 0) {
                uVar22 = 0;
                goto LAB_00106e83;
              }
              uVar22 = *(ulong *)(local_220 + -8);
              if ((long)uVar22 <= (long)uVar19) goto LAB_00106e83;
              uVar6 = *(undefined4 *)(local_220 + uVar19 * 4);
              if (local_200 == 0) {
                lVar21 = 0;
                goto LAB_0010735a;
              }
              lVar21 = *(long *)(local_200 + -8);
              if (lVar21 <= lVar13) goto LAB_0010735a;
              uVar19 = uVar19 + 1;
              CowData<int>::_copy_on_write((CowData<int> *)&local_200);
              *(undefined4 *)(local_200 + lVar13 * 4) = uVar6;
              lVar13 = lVar13 + 1;
            } while (local_2bc != lVar13);
          }
          if (local_200 != 0) {
            CowData<int>::_ref((CowData<int> *)local_118,(CowData *)&local_200);
          }
          CowData<int>::_unref((CowData<int> *)&local_200);
        }
        if ((uVar25 & 0x800) != 0) {
          local_200 = 0;
          CowData<float>::resize<false>((CowData<float> *)&local_200,(long)local_2bc);
          if (0 < local_2bc) {
            lVar13 = 0;
            uVar19 = (ulong)iVar8;
            do {
              if (local_210 == 0) {
                uVar22 = 0;
                goto LAB_00106e83;
              }
              uVar22 = *(ulong *)(local_210 + -8);
              if ((long)uVar22 <= (long)uVar19) goto LAB_00106e83;
              uVar6 = *(undefined4 *)(local_210 + uVar19 * 4);
              if (local_200 == 0) {
                lVar21 = 0;
LAB_0010735a:
                _err_print_index_error
                          ("operator[]","./core/templates/vector.h",0x38,lVar13,lVar21,"p_index",
                           "((Vector<T> *)(this))->_cowdata.size()","",false,true);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar7 = (code *)invalidInstructionException();
                (*pcVar7)();
              }
              lVar21 = *(long *)(local_200 + -8);
              if (lVar21 <= lVar13) goto LAB_0010735a;
              uVar19 = uVar19 + 1;
              CowData<float>::_copy_on_write((CowData<float> *)&local_200);
              *(undefined4 *)(local_200 + lVar13 * 4) = uVar6;
              lVar13 = lVar13 + 1;
            } while (local_2bc != lVar13);
          }
          if (local_200 != local_108[0]) {
            CowData<float>::_ref((CowData<float> *)local_108,(CowData *)&local_200);
          }
          CowData<float>::_unref((CowData<float> *)&local_200);
        }
        puVar23 = &custom_mask;
        lVar13 = 0;
        do {
          if ((*puVar23 & (uint)uVar25) != 0) {
            lVar21 = *(long *)((CowData<float> *)local_1f0 + lVar13);
            if (lVar21 == 0) {
              if (local_280 == 0) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)invalidInstructionException();
                (*pcVar7)();
              }
            }
            else {
              uVar22 = *(ulong *)(lVar21 + -8);
              if (local_280 == 0) goto LAB_00106ea4;
              iVar18 = (int)((long)uVar22 / *(long *)(local_280 + -8));
              if (0 < iVar18) {
                iVar14 = (int)uVar16 * iVar18;
                uVar20 = (ulong)iVar14;
                uVar19 = uVar20;
                if ((long)uVar22 <= (long)uVar20) goto LAB_00106e83;
                uVar15 = (long)(iVar14 + 1);
                while (*(undefined4 *)((long)&local_178 + uVar15 * 4 + lVar13 + uVar20 * -4 + 4) =
                            *(undefined4 *)(lVar21 + -4 + uVar15 * 4),
                      uVar15 != uVar20 + 1 + (ulong)(iVar18 - 1)) {
                  bVar26 = uVar22 == uVar15;
                  uVar19 = uVar22;
                  uVar15 = uVar15 + 1;
                  if (bVar26) goto LAB_00106e83;
                }
              }
            }
          }
          lVar13 = lVar13 + 0x10;
          puVar23 = puVar23 + 1;
        } while (lVar13 != 0x40);
        local_b0 = CONCAT44(uStack_16c,local_170);
        uStack_a8 = CONCAT44(uStack_164,uStack_168);
        local_a0 = CONCAT44(uStack_15c,local_160);
        uStack_98 = CONCAT44(uStack_154,uStack_158);
        local_90 = CONCAT44(uStack_14c,local_150);
        uStack_88 = CONCAT44(uStack_144,uStack_148);
        local_f8 = local_1b8;
        local_e4 = CONCAT44(fStack_1a0,local_1a4);
        local_f4 = local_1b4;
        uStack_ec = uStack_1ac;
        local_80 = CONCAT44(uStack_13c,local_140);
        uStack_78 = CONCAT44(uStack_134,uStack_138);
        local_dc = local_19c;
        local_d8 = local_198;
        local_d0 = local_190;
        local_cc = local_18c;
        local_c4 = local_184;
        local_c0 = local_180;
        local_b8 = local_178;
        local_70 = local_130;
        local_68 = local_128;
        local_58[0] = 0;
        if (local_118[0] != 0) {
          CowData<int>::_ref((CowData<int> *)local_58,(CowData *)local_118);
        }
        local_48 = 0;
        if (local_108[0] != 0) {
          CowData<float>::_ref((CowData<float> *)&local_48,(CowData *)local_108);
        }
        uVar9 = *(uint *)param_2;
        pvVar11 = *(void **)(param_2 + 8);
        if (uVar9 == *(uint *)(param_2 + 4)) {
          uVar19 = (ulong)(uVar9 * 2);
          if (uVar9 * 2 == 0) {
            uVar19 = 1;
          }
          *(int *)(param_2 + 4) = (int)uVar19;
          pvVar11 = (void *)Memory::realloc_static(pvVar11,uVar19 * 0xb8,false);
          *(void **)(param_2 + 8) = pvVar11;
          if (pvVar11 == (void *)0x0) {
            _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                             "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
          uVar9 = *(uint *)param_2;
        }
        *(uint *)param_2 = uVar9 + 1;
        puVar24 = (undefined4 *)((long)pvVar11 + (ulong)uVar9 * 0xb8);
        *(undefined8 *)(puVar24 + 1) = local_f4;
        *(undefined8 *)(puVar24 + 3) = uStack_ec;
        *puVar24 = local_f8;
        *(undefined8 *)(puVar24 + 0x12) = local_b0;
        *(undefined8 *)(puVar24 + 0x14) = uStack_a8;
        *(undefined8 *)(puVar24 + 5) = local_e4;
        *(undefined8 *)(puVar24 + 0x16) = local_a0;
        *(undefined8 *)(puVar24 + 0x18) = uStack_98;
        puVar24[7] = local_dc;
        *(undefined8 *)(puVar24 + 0x1a) = local_90;
        *(undefined8 *)(puVar24 + 0x1c) = uStack_88;
        *(undefined8 *)(puVar24 + 8) = local_d8;
        *(undefined8 *)(puVar24 + 0x1e) = local_80;
        *(undefined8 *)(puVar24 + 0x20) = uStack_78;
        puVar24[10] = local_d0;
        *(undefined8 *)(puVar24 + 0xb) = local_cc;
        puVar24[0xd] = local_c4;
        *(undefined8 *)(puVar24 + 0xe) = local_c0;
        *(undefined8 *)(puVar24 + 0x10) = local_b8;
        *(undefined8 *)(puVar24 + 0x22) = local_70;
        *(undefined8 *)(puVar24 + 0x28) = 0;
        puVar24[0x24] = local_68;
        if (local_58[0] != 0) {
          CowData<int>::_ref((CowData<int> *)(puVar24 + 0x28),(CowData *)local_58);
        }
        *(undefined8 *)(puVar24 + 0x2c) = 0;
        if (local_48 != 0) {
          CowData<float>::_ref((CowData<float> *)(puVar24 + 0x2c),(CowData *)&local_48);
        }
        CowData<float>::_unref((CowData<float> *)&local_48);
        CowData<int>::_unref((CowData<int> *)local_58);
        CowData<float>::_unref((CowData<float> *)local_108);
        CowData<int>::_unref((CowData<int> *)local_118);
        iVar8 = iVar8 + local_2bc;
        bVar26 = uVar16 != iVar12 - 1;
        uVar16 = uVar16 + 1;
      } while (bVar26);
    }
    if (param_3 != (ulong *)0x0) {
      *param_3 = uVar25;
    }
    puVar24 = &local_1b8;
    do {
      puVar17 = puVar24 + -4;
      CowData<float>::_unref((CowData<float> *)(puVar24 + -2));
      puVar24 = puVar17;
    } while (puVar17 != local_1f8);
  }
  CowData<float>::_unref((CowData<float> *)&local_210);
  CowData<int>::_unref((CowData<int> *)&local_220);
  CowData<Vector2>::_unref((CowData<Vector2> *)&local_230);
  CowData<Vector2>::_unref((CowData<Vector2> *)&local_240);
  lVar13 = local_250;
  if (local_250 != 0) {
    LOCK();
    plVar1 = (long *)(local_250 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_250 = 0;
      Memory::free_static((void *)(lVar13 + -0x10),false);
    }
  }
  CowData<float>::_unref((CowData<float> *)&local_260);
  CowData<Vector3>::_unref((CowData<Vector3> *)&local_270);
  CowData<Vector3>::_unref((CowData<Vector3> *)&local_280);
LAB_00106f4e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SurfaceTool::_create_list_from_arrays(Array, LocalVector<SurfaceTool::Vertex, unsigned int,
   false, false>*, LocalVector<int, unsigned int, false, false>*, unsigned long&) */

void __thiscall
SurfaceTool::_create_list_from_arrays
          (undefined8 param_1,Array *param_2,LocalVector *param_3,uint *param_4,ulong *param_5)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  ulong uVar7;
  void *pvVar8;
  undefined4 *puVar9;
  long in_FS_OFFSET;
  Variant aVStack_48 [8];
  undefined4 *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  create_vertex_array_from_arrays(param_2,param_3,param_5);
  if (*(int *)param_3 == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_create_list_from_arrays","scene/resources/surface_tool.cpp",0x3a7,
                       "Condition \"r_vertex->size() == 0\" is true.",0,0);
      return;
    }
    goto LAB_001076dd;
  }
  if (*param_4 != 0) {
    *param_4 = 0;
  }
  Array::operator[]((int)param_2);
  Variant::operator_cast_to_Vector(aVStack_48);
  if (local_40 != (undefined4 *)0x0) {
    iVar6 = (int)*(undefined8 *)(local_40 + -2);
    if ((iVar6 != 0) && (*param_5 = *param_5 | 0x1000, 0 < iVar6)) {
      pvVar8 = *(void **)(param_4 + 2);
      puVar2 = local_40 + (ulong)(iVar6 - 1) + 1;
      puVar9 = local_40;
      do {
        uVar3 = *puVar9;
        uVar4 = *param_4;
        if (uVar4 == param_4[1]) {
          uVar7 = (ulong)(uVar4 * 2);
          if (uVar4 * 2 == 0) {
            uVar7 = 1;
          }
          param_4[1] = (uint)uVar7;
          pvVar8 = (void *)Memory::realloc_static(pvVar8,uVar7 * 4,false);
          *(void **)(param_4 + 2) = pvVar8;
          if (pvVar8 == (void *)0x0) {
            _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                             "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          uVar4 = *param_4;
        }
        puVar9 = puVar9 + 1;
        *param_4 = uVar4 + 1;
        *(undefined4 *)((long)pvVar8 + (ulong)uVar4 * 4) = uVar3;
      } while (puVar2 != puVar9);
      if (local_40 == (undefined4 *)0x0) goto LAB_00107612;
    }
    puVar2 = local_40;
    LOCK();
    plVar1 = (long *)(local_40 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = (undefined4 *)0x0;
      Memory::free_static(puVar2 + -4,false);
    }
  }
LAB_00107612:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001076dd:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SurfaceTool::_create_list(Ref<Mesh> const&, int, LocalVector<SurfaceTool::Vertex, unsigned int,
   false, false>*, LocalVector<int, unsigned int, false, false>*, unsigned long&) */

void __thiscall
SurfaceTool::_create_list
          (SurfaceTool *this,Ref *param_1,int param_2,LocalVector *param_3,LocalVector *param_4,
          ulong *param_5)

{
  long *plVar1;
  int iVar2;
  undefined4 in_register_00000014;
  long in_FS_OFFSET;
  Array local_50 [8];
  Array local_48 [8];
  long local_40;
  
  plVar1 = *(long **)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar1 == (long *)0x0) {
    _err_print_error("_create_list","scene/resources/surface_tool.cpp",0x318,
                     "Condition \"p_existing.is_null()\" is true.",
                     "First argument in SurfaceTool::_create_list() must be a valid object of type Mesh"
                     ,0,0);
  }
  else {
    (**(code **)(*plVar1 + 0x1e0))(local_50,plVar1,CONCAT44(in_register_00000014,param_2));
    iVar2 = Array::size();
    if (iVar2 == 0xd) {
      Array::Array(local_48,local_50);
      _create_list_from_arrays(this,local_48,param_3,param_4,param_5);
      Array::~Array(local_48);
      Array::~Array(local_50);
    }
    else {
      _err_print_error("_create_list","scene/resources/surface_tool.cpp",0x31b,
                       "Condition \"arr.size() != RenderingServer::ARRAY_MAX\" is true.",0,0);
      Array::~Array(local_50);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SurfaceTool::append_from(Ref<Mesh> const&, int, Transform3D const&) */

void __thiscall
SurfaceTool::append_from(SurfaceTool *this,Ref *param_1,int param_2,Transform3D *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  long *plVar14;
  code *pcVar15;
  ulong uVar16;
  undefined4 *puVar17;
  int *piVar18;
  undefined4 uVar19;
  long lVar20;
  undefined4 *puVar21;
  void *pvVar22;
  ulong uVar23;
  undefined4 *puVar24;
  int *piVar25;
  ulong uVar26;
  long in_FS_OFFSET;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  ulong local_120;
  ulong local_118;
  undefined4 *local_110;
  ulong local_108;
  int *local_100;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined8 uStack_ec;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  long local_58 [2];
  long local_48;
  long local_40;
  
  plVar14 = *(long **)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar14 == (long *)0x0) {
    _err_print_error("append_from","scene/resources/surface_tool.cpp",0x3ff,
                     "Condition \"p_existing.is_null()\" is true.",
                     "First argument in SurfaceTool::append_from() must be a valid object of type Mesh"
                     ,0);
  }
  else {
    if (*(int *)(this + 0x198) == 0) {
      uVar19 = (**(code **)(*plVar14 + 0x200))(plVar14,param_2);
      *(undefined8 *)(this + 0x188) = 0;
      *(undefined4 *)(this + 0x180) = uVar19;
    }
    local_120 = 0;
    local_118 = 0;
    local_110 = (undefined4 *)0x0;
    local_108 = 0;
    local_100 = (int *)0x0;
    _create_list(this,param_1,param_2,(LocalVector *)&local_118,(LocalVector *)&local_108,&local_120
                );
    puVar17 = local_110;
    lVar20 = 0;
    uVar26 = *(ulong *)(this + 0x188) | local_120;
    *(ulong *)(this + 0x188) = uVar26;
    do {
      if ((*(uint *)((long)&custom_mask + lVar20) & (uint)uVar26) != 0) {
        *(uint *)(this + lVar20 + 0x260) =
             (uint)(uVar26 >> ((byte)*(undefined4 *)((long)&custom_shift + lVar20) & 0x3f)) & 7;
      }
      lVar20 = lVar20 + 4;
    } while (lVar20 != 0x10);
    iVar11 = *(int *)(this + 0x198);
    puVar1 = local_110 + (local_118 & 0xffffffff) * 0x2e;
    if (puVar1 != local_110) {
      uVar16 = local_120 & 4;
      uVar26 = local_120 & 2;
      puVar24 = local_110;
      do {
        while( true ) {
          fVar3 = (float)puVar24[0x24];
          fVar28 = (float)*(undefined8 *)(puVar24 + 0x22);
          fVar30 = (float)((ulong)*(undefined8 *)(puVar24 + 0x22) >> 0x20);
          fVar4 = *(float *)(param_3 + 0x10);
          uVar7 = *(undefined8 *)(param_3 + 8);
          uVar8 = *(undefined8 *)param_3;
          fVar5 = *(float *)(param_3 + 4);
          uVar9 = *(undefined8 *)(param_3 + 0x10);
          uVar10 = *(undefined8 *)(param_3 + 0x24);
          puVar24[0x24] =
               *(float *)(param_3 + 0x18) * fVar28 + *(float *)(param_3 + 0x1c) * fVar30 +
               *(float *)(param_3 + 0x20) * fVar3 + *(float *)(param_3 + 0x2c);
          *(ulong *)(puVar24 + 0x22) =
               CONCAT44(fVar4 * fVar30 + fVar28 * (float)((ulong)uVar7 >> 0x20) +
                        (float)((ulong)uVar9 >> 0x20) * fVar3 + (float)((ulong)uVar10 >> 0x20),
                        fVar5 * fVar30 + fVar28 * (float)uVar8 + (float)uVar7 * fVar3 +
                        (float)uVar10);
          if (uVar26 != 0) {
            fVar3 = (float)puVar24[7];
            fVar28 = (float)*(undefined8 *)(puVar24 + 5);
            fVar30 = (float)((ulong)*(undefined8 *)(puVar24 + 5) >> 0x20);
            fVar4 = *(float *)(param_3 + 0x10);
            uVar7 = *(undefined8 *)param_3;
            uVar8 = *(undefined8 *)(param_3 + 8);
            fVar5 = *(float *)(param_3 + 4);
            uVar9 = *(undefined8 *)(param_3 + 0x10);
            puVar24[7] = *(float *)(param_3 + 0x18) * fVar28 + *(float *)(param_3 + 0x1c) * fVar30 +
                         *(float *)(param_3 + 0x20) * fVar3;
            *(ulong *)(puVar24 + 5) =
                 CONCAT44(fVar4 * fVar30 + fVar28 * (float)((ulong)uVar8 >> 0x20) +
                          (float)((ulong)uVar9 >> 0x20) * fVar3,
                          fVar5 * fVar30 + fVar28 * (float)uVar7 + (float)uVar8 * fVar3);
          }
          if (uVar16 != 0) {
            fVar29 = (float)*(undefined8 *)(puVar24 + 0xc);
            fVar31 = (float)((ulong)*(undefined8 *)(puVar24 + 0xc) >> 0x20);
            fVar27 = (float)((ulong)*(undefined8 *)(puVar24 + 10) >> 0x20);
            fVar3 = *(float *)param_3;
            fVar4 = (float)puVar24[9];
            fVar5 = *(float *)(param_3 + 4);
            fVar28 = *(float *)(param_3 + 8);
            *(ulong *)(puVar24 + 0xc) =
                 CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0x18) >> 0x20) * fVar29 +
                          *(float *)(param_3 + 0x18) * fVar27 + *(float *)(param_3 + 0x20) * fVar31,
                          (float)*(undefined8 *)(param_3 + 0x10) * fVar29 +
                          *(float *)(param_3 + 0xc) * fVar27 + *(float *)(param_3 + 0x14) * fVar31);
            fVar30 = (float)puVar24[10];
            puVar24[0xb] = fVar27 * fVar3 + fVar5 * fVar29 + fVar31 * fVar28;
            fVar3 = (float)puVar24[8];
            fVar5 = *(float *)(param_3 + 0x10);
            fVar28 = *(float *)(param_3 + 4);
            fVar27 = *(float *)(param_3 + 0xc);
            fVar29 = *(float *)param_3;
            fVar31 = *(float *)(param_3 + 0x14);
            fVar6 = *(float *)(param_3 + 8);
            puVar24[10] = *(float *)(param_3 + 0x18) * fVar3 + *(float *)(param_3 + 0x1c) * fVar4 +
                          *(float *)(param_3 + 0x20) * fVar30;
            puVar24[9] = fVar27 * fVar3 + fVar5 * fVar4 + fVar31 * fVar30;
            puVar24[8] = fVar3 * fVar29 + fVar4 * fVar28 + fVar30 * fVar6;
          }
          local_f8 = *puVar24;
          local_f4 = *(undefined8 *)(puVar24 + 1);
          uStack_ec = *(undefined8 *)(puVar24 + 3);
          local_b0 = *(undefined8 *)(puVar24 + 0x12);
          uStack_a8 = *(undefined8 *)(puVar24 + 0x14);
          local_80 = *(undefined8 *)(puVar24 + 0x1e);
          uStack_78 = *(undefined8 *)(puVar24 + 0x20);
          local_e4 = *(undefined8 *)(puVar24 + 5);
          local_a0 = *(undefined8 *)(puVar24 + 0x16);
          uStack_98 = *(undefined8 *)(puVar24 + 0x18);
          local_dc = puVar24[7];
          local_90 = *(undefined8 *)(puVar24 + 0x1a);
          uStack_88 = *(undefined8 *)(puVar24 + 0x1c);
          local_d8 = *(undefined8 *)(puVar24 + 8);
          local_d0 = puVar24[10];
          local_cc = *(undefined8 *)(puVar24 + 0xb);
          local_c4 = puVar24[0xd];
          local_c0 = *(undefined8 *)(puVar24 + 0xe);
          local_b8 = *(undefined8 *)(puVar24 + 0x10);
          local_70 = *(undefined8 *)(puVar24 + 0x22);
          local_68 = puVar24[0x24];
          local_58[0] = 0;
          if (*(long *)(puVar24 + 0x28) != 0) {
            CowData<int>::_ref((CowData<int> *)local_58,(CowData *)(puVar24 + 0x28));
          }
          local_48 = 0;
          if (*(long *)(puVar24 + 0x2c) != 0) {
            CowData<float>::_ref((CowData<float> *)&local_48,(CowData *)(puVar24 + 0x2c));
          }
          uVar12 = *(uint *)(this + 0x198);
          pvVar22 = *(void **)(this + 0x1a0);
          if (uVar12 == *(uint *)(this + 0x19c)) {
            uVar23 = (ulong)(uVar12 * 2);
            if (uVar12 * 2 == 0) {
              uVar23 = 1;
            }
            *(int *)(this + 0x19c) = (int)uVar23;
            pvVar22 = (void *)Memory::realloc_static(pvVar22,uVar23 * 0xb8,false);
            *(void **)(this + 0x1a0) = pvVar22;
            if (pvVar22 == (void *)0x0) goto LAB_00108083;
            uVar12 = *(uint *)(this + 0x198);
          }
          lVar20 = local_58[0];
          *(uint *)(this + 0x198) = uVar12 + 1;
          puVar21 = (undefined4 *)((ulong)uVar12 * 0xb8 + (long)pvVar22);
          *puVar21 = local_f8;
          *(undefined8 *)(puVar21 + 1) = local_f4;
          *(undefined8 *)(puVar21 + 3) = uStack_ec;
          *(undefined8 *)(puVar21 + 5) = local_e4;
          *(undefined8 *)(puVar21 + 0x12) = local_b0;
          *(undefined8 *)(puVar21 + 0x14) = uStack_a8;
          puVar21[7] = local_dc;
          *(undefined8 *)(puVar21 + 0x16) = local_a0;
          *(undefined8 *)(puVar21 + 0x18) = uStack_98;
          *(undefined8 *)(puVar21 + 8) = local_d8;
          *(undefined8 *)(puVar21 + 0x1a) = local_90;
          *(undefined8 *)(puVar21 + 0x1c) = uStack_88;
          puVar21[10] = local_d0;
          *(undefined8 *)(puVar21 + 0x1e) = local_80;
          *(undefined8 *)(puVar21 + 0x20) = uStack_78;
          *(undefined8 *)(puVar21 + 0xb) = local_cc;
          puVar21[0xd] = local_c4;
          *(undefined8 *)(puVar21 + 0xe) = local_c0;
          *(undefined8 *)(puVar21 + 0x10) = local_b8;
          *(undefined8 *)(puVar21 + 0x22) = local_70;
          puVar21[0x24] = local_68;
          *(undefined8 *)(puVar21 + 0x28) = 0;
          if (local_58[0] == 0) break;
          CowData<int>::_ref((CowData<int> *)(puVar21 + 0x28),(CowData *)local_58);
          *(undefined8 *)(puVar21 + 0x2c) = 0;
          if (local_48 == 0) {
LAB_001079cf:
            LOCK();
            plVar14 = (long *)(lVar20 + -0x10);
            *plVar14 = *plVar14 + -1;
            UNLOCK();
            if (*plVar14 == 0) {
              Memory::free_static((void *)(local_58[0] + -0x10),false);
            }
          }
          else {
LAB_00107992:
            lVar20 = local_48;
            CowData<float>::_ref((CowData<float> *)(puVar21 + 0x2c),(CowData *)&local_48);
            LOCK();
            plVar14 = (long *)(lVar20 + -0x10);
            *plVar14 = *plVar14 + -1;
            UNLOCK();
            if (*plVar14 == 0) {
              Memory::free_static((void *)(local_48 + -0x10),false);
            }
            lVar20 = local_58[0];
            if (local_58[0] != 0) goto LAB_001079cf;
          }
          puVar24 = puVar24 + 0x2e;
          if (puVar1 == puVar24) goto LAB_00107e80;
        }
        *(undefined8 *)(puVar21 + 0x2c) = 0;
        if (local_48 != 0) goto LAB_00107992;
        puVar24 = puVar24 + 0x2e;
      } while (puVar1 != puVar24);
    }
LAB_00107e80:
    piVar18 = local_100;
    piVar2 = local_100 + (local_108 & 0xffffffff);
    if (piVar2 != local_100) {
      pvVar22 = *(void **)(this + 0x1b0);
      piVar25 = local_100;
      do {
        uVar12 = *(uint *)(this + 0x1a8);
        iVar13 = *piVar25;
        if (uVar12 == *(uint *)(this + 0x1ac)) {
          uVar26 = (ulong)(uVar12 * 2);
          if (uVar12 * 2 == 0) {
            uVar26 = 1;
          }
          *(int *)(this + 0x1ac) = (int)uVar26;
          pvVar22 = (void *)Memory::realloc_static(pvVar22,uVar26 * 4,false);
          *(void **)(this + 0x1b0) = pvVar22;
          if (pvVar22 == (void *)0x0) {
LAB_00108083:
            _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                             "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar15 = (code *)invalidInstructionException();
            (*pcVar15)();
          }
          uVar12 = *(uint *)(this + 0x1a8);
        }
        piVar25 = piVar25 + 1;
        *(uint *)(this + 0x1a8) = uVar12 + 1;
        *(int *)((long)pvVar22 + (ulong)uVar12 * 4) = iVar11 + iVar13;
      } while (piVar2 != piVar25);
    }
    if (0x55555555 < (uint)(*(int *)(this + 0x1a8) * -0x55555555)) {
      _err_print_error("append_from","scene/resources/surface_tool.cpp",0x426,
                       "SurfaceTool: Index array not a multiple of 3.",0,1);
    }
    if (piVar18 != (int *)0x0) {
      Memory::free_static(piVar18,false);
    }
    if ((puVar17 != (undefined4 *)0x0) &&
       (LocalVector<SurfaceTool::Vertex,unsigned_int,false,false>::resize
                  ((LocalVector<SurfaceTool::Vertex,unsigned_int,false,false> *)&local_118,0),
       local_110 != (undefined4 *)0x0)) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(local_110,false);
        return;
      }
      goto LAB_001080b9;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001080b9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SurfaceTool::clear() */

void __thiscall SurfaceTool::clear(SurfaceTool *this)

{
  Object *pOVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  
  this[0x17c] = (SurfaceTool)0x0;
  *(undefined4 *)(this + 0x180) = 1;
  *(undefined8 *)(this + 0x188) = 0;
  if ((*(long *)(this + 0x1f0) != 0) && (*(long *)(*(long *)(this + 0x1f0) + -8) != 0)) {
    CowData<int>::_unref((CowData<int> *)(this + 0x1f0));
  }
  if ((*(long *)(this + 0x200) != 0) && (*(long *)(*(long *)(this + 0x200) + -8) != 0)) {
    CowData<float>::_unref((CowData<float> *)(this + 0x200));
  }
  if (*(int *)(this + 0x1a8) != 0) {
    *(undefined4 *)(this + 0x1a8) = 0;
  }
  LocalVector<SurfaceTool::Vertex,unsigned_int,false,false>::resize
            ((LocalVector<SurfaceTool::Vertex,unsigned_int,false,false> *)(this + 0x198),0);
  if (*(long *)(this + 400) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar1 = *(Object **)(this + 400);
      cVar4 = predelete_handler(pOVar1);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  uVar3 = _UNK_00129598;
  uVar2 = __LC72;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined8 *)(this + 0x260) = uVar2;
  *(undefined8 *)(this + 0x268) = uVar3;
  return;
}



/* SurfaceTool::begin(Mesh::PrimitiveType) */

void __thiscall SurfaceTool::begin(SurfaceTool *this,undefined4 param_2)

{
  clear(this);
  *(undefined4 *)(this + 0x180) = param_2;
  *(undefined2 *)(this + 0x17c) = 0x101;
  return;
}



/* SurfaceTool::create_from(Ref<Mesh> const&, int) */

void __thiscall SurfaceTool::create_from(SurfaceTool *this,Ref *param_1,int param_2)

{
  Object *pOVar1;
  ulong uVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  Object *pOVar6;
  long in_FS_OFFSET;
  Object *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)param_1 == 0) {
    _err_print_error("create_from","scene/resources/surface_tool.cpp",0x3c8,
                     "Condition \"p_existing.is_null()\" is true.",
                     "First argument in SurfaceTool::create_from() must be a valid object of type Mesh"
                     ,0,0);
    goto LAB_00108305;
  }
  clear(this);
  uVar4 = (**(code **)(**(long **)param_1 + 0x200))(*(long **)param_1,param_2);
  *(undefined4 *)(this + 0x180) = uVar4;
  _create_list(this,param_1,param_2,(LocalVector *)(this + 0x198),(LocalVector *)(this + 0x1a8),
               (ulong *)(this + 0x188));
  (**(code **)(**(long **)param_1 + 0x210))(&local_28,*(long **)param_1,param_2);
  pOVar1 = *(Object **)(this + 400);
  pOVar6 = pOVar1;
  if (local_28 == pOVar1) {
LAB_001082b6:
    if (((pOVar6 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
       (cVar3 = predelete_handler(local_28), cVar3 != '\0')) {
      (**(code **)(*(long *)local_28 + 0x140))(local_28);
      Memory::free_static(local_28,false);
    }
  }
  else {
    *(Object **)(this + 400) = local_28;
    if (local_28 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(this + 400) = 0;
      }
      pOVar6 = local_28;
      if (pOVar1 != (Object *)0x0) {
        cVar3 = RefCounted::unreference();
        goto joined_r0x00108337;
      }
      goto LAB_001082b6;
    }
    if (pOVar1 != (Object *)0x0) {
      cVar3 = RefCounted::unreference();
joined_r0x00108337:
      pOVar6 = local_28;
      if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar1), pOVar6 = local_28, cVar3 != '\0'))
      {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        pOVar6 = local_28;
      }
      goto LAB_001082b6;
    }
  }
  uVar2 = *(ulong *)(this + 0x188);
  lVar5 = 0;
  do {
    if ((*(uint *)((long)&custom_mask + lVar5) & (uint)uVar2) != 0) {
      *(uint *)(this + lVar5 + 0x260) =
           (uint)(uVar2 >> ((byte)*(undefined4 *)((long)&custom_shift + lVar5) & 0x3f)) & 7;
    }
    lVar5 = lVar5 + 4;
  } while (lVar5 != 0x10);
LAB_00108305:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SurfaceTool::create_from_arrays(Array const&, Mesh::PrimitiveType) */

void __thiscall SurfaceTool::create_from_arrays(SurfaceTool *this,Array *param_1,undefined4 param_3)

{
  ulong uVar1;
  long lVar2;
  long in_FS_OFFSET;
  Array aAStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  clear(this);
  *(undefined4 *)(this + 0x180) = param_3;
  Array::Array(aAStack_28,param_1);
  _create_list_from_arrays(this,aAStack_28,this + 0x198,this + 0x1a8,this + 0x188);
  Array::~Array(aAStack_28);
  uVar1 = *(ulong *)(this + 0x188);
  lVar2 = 0;
  do {
    if ((*(uint *)((long)&custom_mask + lVar2) & (uint)uVar1) != 0) {
      *(uint *)(this + lVar2 + 0x260) =
           (uint)(uVar1 >> ((byte)*(undefined4 *)((long)&custom_shift + lVar2) & 0x3f)) & 7;
    }
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x10);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SurfaceTool::create_from_triangle_arrays(Array const&) */

void __thiscall SurfaceTool::create_from_triangle_arrays(SurfaceTool *this,Array *param_1)

{
  create_from_arrays(this,param_1,3);
  return;
}



/* SurfaceTool::create_from_blend_shape(Ref<Mesh> const&, int, String const&) */

void __thiscall
SurfaceTool::create_from_blend_shape(SurfaceTool *this,Ref *param_1,int param_2,String *param_3)

{
  long *plVar1;
  Object *pOVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  Variant *pVVar6;
  Variant *pVVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  Object *pOVar12;
  long in_FS_OFFSET;
  bool bVar13;
  Array local_78 [8];
  Array local_70 [8];
  long local_68;
  long local_60;
  Object *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)param_1 == 0) {
    _err_print_error("create_from_blend_shape","scene/resources/surface_tool.cpp",0x3d7,
                     "Condition \"p_existing.is_null()\" is true.",
                     "First argument in SurfaceTool::create_from_blend_shape() must be a valid object of type Mesh"
                     ,0,0);
  }
  else {
    clear(this);
    uVar4 = (**(code **)(**(long **)param_1 + 0x200))(*(long **)param_1,param_2);
    plVar1 = *(long **)param_1;
    *(undefined4 *)(this + 0x180) = uVar4;
    (**(code **)(*plVar1 + 0x1e8))((Array *)&local_58,plVar1,param_2);
    Array::Array(local_78,(Array *)&local_58);
    Array::~Array((Array *)&local_58);
    Array::Array(local_70);
    for (iVar11 = 0; iVar5 = (**(code **)(**(long **)param_1 + 0x218))(), iVar11 < iVar5;
        iVar11 = iVar11 + 1) {
      (**(code **)(**(long **)param_1 + 0x220))((Array *)&local_60,*(long **)param_1,iVar11);
      if (local_60 != 0) {
        pOVar2 = *(Object **)(local_60 + 8);
        local_68 = 0;
        if (pOVar2 == (Object *)0x0) {
          if (*(long *)(local_60 + 0x10) != 0) {
            plVar1 = (long *)(*(long *)(local_60 + 0x10) + -0x10);
            do {
              lVar10 = *plVar1;
              if (lVar10 == 0) goto LAB_001085a8;
              LOCK();
              lVar9 = *plVar1;
              bVar13 = lVar10 == lVar9;
              if (bVar13) {
                *plVar1 = lVar10 + 1;
                lVar9 = lVar10;
              }
              UNLOCK();
            } while (!bVar13);
            if (lVar9 != -1) {
              local_68 = *(long *)(local_60 + 0x10);
            }
            goto LAB_001085a8;
          }
          if (StringName::configured != '\0') goto LAB_001085b9;
        }
        else {
          local_50 = strlen((char *)pOVar2);
          local_58 = pOVar2;
          String::parse_latin1((StrRange *)&local_68);
LAB_001085a8:
          if ((StringName::configured != '\0') && (local_60 != 0)) {
LAB_001085b9:
            StringName::unref();
          }
        }
        cVar3 = String::operator==((String *)&local_68,param_3);
        if (cVar3 == '\0') goto LAB_001085d5;
LAB_0010865a:
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        iVar5 = Array::size();
        if (iVar11 < iVar5) {
          Array::operator[]((int)local_78);
          Variant::operator_cast_to_Array((Variant *)&local_68);
          iVar11 = Array::size();
          if (iVar11 == 0xd) {
            (**(code **)(**(long **)param_1 + 0x1e0))((Array *)&local_60,*(long **)param_1,param_2);
            iVar11 = Array::size();
            if (iVar11 == 0xd) {
              iVar11 = (int)(CowData<char32_t> *)&local_68;
              pVVar6 = (Variant *)Array::operator[](iVar11);
              iVar5 = (int)(Array *)&local_60;
              pVVar7 = (Variant *)Array::operator[](iVar5);
              Variant::operator=(pVVar7,pVVar6);
              pVVar6 = (Variant *)Array::operator[](iVar11);
              pVVar7 = (Variant *)Array::operator[](iVar5);
              Variant::operator=(pVVar7,pVVar6);
              pVVar6 = (Variant *)Array::operator[](iVar11);
              pVVar7 = (Variant *)Array::operator[](iVar5);
              Variant::operator=(pVVar7,pVVar6);
              Array::Array((Array *)&local_58,(Array *)&local_60);
              _create_list_from_arrays
                        (this,(Array *)&local_58,this + 0x198,this + 0x1a8,this + 0x188);
              Array::~Array((Array *)&local_58);
              (**(code **)(**(long **)param_1 + 0x210))
                        ((Array *)&local_58,*(long **)param_1,param_2);
              pOVar2 = *(Object **)(this + 400);
              pOVar12 = pOVar2;
              if (local_58 == pOVar2) {
LAB_001087c9:
                if (((pOVar12 != (Object *)0x0) &&
                    (cVar3 = RefCounted::unreference(), pOVar2 = local_58, cVar3 != '\0')) &&
                   (cVar3 = predelete_handler(local_58), cVar3 != '\0')) {
                  (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                  Memory::free_static(pOVar2,false);
                }
              }
              else {
                *(Object **)(this + 400) = local_58;
                if (local_58 != (Object *)0x0) {
                  cVar3 = RefCounted::reference();
                  if (cVar3 == '\0') {
                    *(undefined8 *)(this + 400) = 0;
                  }
                  pOVar12 = local_58;
                  if (pOVar2 != (Object *)0x0) {
                    cVar3 = RefCounted::unreference();
                    goto joined_r0x00108923;
                  }
                  goto LAB_001087c9;
                }
                if (pOVar2 != (Object *)0x0) {
                  cVar3 = RefCounted::unreference();
joined_r0x00108923:
                  pOVar12 = local_58;
                  if ((cVar3 != '\0') &&
                     (cVar3 = predelete_handler(pOVar2), pOVar12 = local_58, cVar3 != '\0')) {
                    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                    Memory::free_static(pOVar2,false);
                    pOVar12 = local_58;
                  }
                  goto LAB_001087c9;
                }
              }
              uVar8 = (**(code **)(**(long **)param_1 + 0x1f8))(*(long **)param_1,param_2);
              lVar10 = 0;
              *(ulong *)(this + 0x188) = uVar8;
              do {
                if ((*(uint *)((long)&custom_mask + lVar10) & (uint)uVar8) != 0) {
                  *(uint *)(this + lVar10 + 0x260) =
                       (uint)(uVar8 >> ((byte)*(undefined4 *)((long)&custom_shift + lVar10) & 0x3f))
                       & 7;
                }
                lVar10 = lVar10 + 4;
              } while (lVar10 != 0x10);
              Array::~Array((Array *)&local_60);
            }
            else {
              _err_print_error("create_from_blend_shape","scene/resources/surface_tool.cpp",0x3eb,
                               "Condition \"source_mesh_arrays.size() != RenderingServer::ARRAY_MAX\" is true."
                               ,0,0);
              Array::~Array((Array *)&local_60);
            }
          }
          else {
            _err_print_error("create_from_blend_shape","scene/resources/surface_tool.cpp",1000,
                             "Condition \"blendshape_mesh_arrays.size() != RenderingServer::ARRAY_MAX\" is true."
                             ,0,0);
          }
          Array::~Array((Array *)&local_68);
        }
        else {
          _err_print_error("create_from_blend_shape","scene/resources/surface_tool.cpp",0x3e6,
                           "Condition \"shape_idx >= arr.size()\" is true.",0,0);
        }
        goto LAB_0010883c;
      }
      local_68 = 0;
      cVar3 = String::operator==((String *)&local_68,param_3);
      if (cVar3 != '\0') goto LAB_0010865a;
LAB_001085d5:
      lVar10 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
    }
    _err_print_error("create_from_blend_shape","scene/resources/surface_tool.cpp",0x3e5,
                     "Condition \"shape_idx == -1\" is true.",0,0);
LAB_0010883c:
    Array::~Array(local_70);
    Array::~Array(local_78);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SurfaceTool::strip_mesh_arrays(Vector<Vector3>&, Vector<int>&) */

void SurfaceTool::strip_mesh_arrays(Vector *param_1,Vector *param_2)

{
  CowData<int> *this;
  undefined8 *__dest;
  ulong *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  void *__s;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  long *plVar18;
  size_t __n;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int *piVar24;
  code *pcVar25;
  long lVar26;
  undefined8 uVar27;
  int iVar28;
  long lVar29;
  ulong __n_00;
  undefined8 uVar30;
  int *piVar31;
  long in_FS_OFFSET;
  void *local_a8;
  undefined8 *local_80;
  int local_78;
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((generate_remap_func == (code *)0x0) || (remap_vertex_func == (code *)0x0)) ||
     (remap_index_func == (code *)0x0)) {
    _err_print_error("strip_mesh_arrays","scene/resources/surface_tool.cpp",0x2f,
                     "Condition \"!generate_remap_func || !remap_vertex_func || !remap_index_func\" is true."
                     ,"Meshoptimizer library is not initialized.",0,0);
  }
  else {
    lVar26 = *(long *)(param_1 + 8);
    pcVar25 = generate_remap_func;
    if (lVar26 == 0) {
      lVar29 = *(long *)(param_2 + 8);
      if (lVar29 == 0) {
LAB_00109471:
        local_80 = (undefined8 *)0x0;
        uVar30 = 0;
        uVar27 = 0;
      }
      else {
        local_80 = (undefined8 *)0x0;
        uVar30 = *(undefined8 *)(lVar29 + -8);
        uVar27 = 0;
      }
    }
    else {
      lVar29 = *(long *)(lVar26 + -8);
      if (lVar29 < 0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x157,
                         "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
        goto LAB_00109299;
      }
      if (lVar29 == 0) {
        lVar29 = *(long *)(param_2 + 8);
        if (lVar29 == 0) goto LAB_00109471;
        local_80 = (undefined8 *)0x0;
        uVar30 = *(undefined8 *)(lVar29 + -8);
        uVar27 = 0;
        goto LAB_00108b9e;
      }
      if ((lVar29 * 4 == 0) ||
         (uVar11 = lVar29 * 4 - 1, uVar11 = uVar11 | uVar11 >> 1, uVar11 = uVar11 | uVar11 >> 2,
         uVar11 = uVar11 | uVar11 >> 4, uVar11 = uVar11 | uVar11 >> 8,
         uVar11 = uVar11 | uVar11 >> 0x10, uVar11 = uVar11 | uVar11 >> 0x20,
         uVar11 == 0xffffffffffffffff)) {
        _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                         "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                         ,0,0);
LAB_00109299:
        local_80 = (undefined8 *)0x0;
      }
      else {
        puVar12 = (undefined8 *)Memory::alloc_static(uVar11 + 0x11,false);
        if (puVar12 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
          goto LAB_00109299;
        }
        local_80 = puVar12 + 2;
        *puVar12 = 1;
        puVar12[1] = lVar29;
      }
      pcVar25 = generate_remap_func;
      lVar26 = *(long *)(param_1 + 8);
      if (lVar26 == 0) {
        uVar27 = 0;
      }
      else {
        uVar27 = *(undefined8 *)(lVar26 + -8);
      }
      lVar29 = *(long *)(param_2 + 8);
      if (lVar29 == 0) {
        uVar30 = 0;
      }
      else {
        uVar30 = *(undefined8 *)(lVar29 + -8);
      }
      if ((local_80 != (undefined8 *)0x0) && (plVar18 = local_80 + -2, 1 < (ulong)local_80[-2])) {
        uVar11 = 0x10;
        lVar7 = local_80[-1];
        __n = lVar7 * 4;
        if (__n != 0) {
          uVar11 = __n - 1 | __n - 1 >> 1;
          uVar11 = uVar11 | uVar11 >> 2;
          uVar11 = uVar11 | uVar11 >> 4;
          uVar11 = uVar11 | uVar11 >> 8;
          uVar11 = uVar11 | uVar11 >> 0x10;
          uVar11 = (uVar11 | uVar11 >> 0x20) + 0x11;
        }
        puVar12 = (undefined8 *)Memory::alloc_static(uVar11,false);
        if (puVar12 == (undefined8 *)0x0) {
          _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                           "Parameter \"mem_new\" is null.",0,0);
        }
        else {
          __dest = puVar12 + 2;
          *puVar12 = 1;
          puVar12[1] = lVar7;
          memcpy(__dest,local_80,__n);
          LOCK();
          *plVar18 = *plVar18 + -1;
          UNLOCK();
          local_80 = __dest;
          if (*plVar18 == 0) {
            Memory::free_static(plVar18,false);
          }
        }
      }
    }
LAB_00108b9e:
    uVar11 = (*pcVar25)(local_80,lVar29,uVar30,lVar26,uVar27,0xc);
    pcVar25 = remap_vertex_func;
    lVar26 = *(long *)(param_1 + 8);
    if (lVar26 == 0) {
      uVar27 = 0;
    }
    else {
      uVar27 = *(undefined8 *)(lVar26 + -8);
    }
    CowData<Vector3>::_copy_on_write((CowData<Vector3> *)(param_1 + 8));
    (*pcVar25)(*(undefined8 *)(param_1 + 8),lVar26,uVar27,0xc,local_80);
    CowData<Vector3>::resize<false>((CowData<Vector3> *)(param_1 + 8),uVar11 & 0xffffffff);
    pcVar25 = remap_index_func;
    lVar26 = *(long *)(param_2 + 8);
    if (lVar26 == 0) {
      uVar27 = 0;
    }
    else {
      uVar27 = *(undefined8 *)(lVar26 + -8);
    }
    this = (CowData<int> *)(param_2 + 8);
    CowData<int>::_copy_on_write(this);
    (*pcVar25)(*(undefined8 *)(param_2 + 8),lVar26,uVar27,local_80);
    local_48 = 0xf;
    local_58 = (undefined1  [16])0x0;
    CowData<int>::_copy_on_write(this);
    piVar5 = *(int **)(param_2 + 8);
    if (piVar5 == (int *)0x0) {
      CowData<int>::resize<false>(this,0);
    }
    else {
      lVar26 = 0;
      local_78 = 0;
      local_a8 = (void *)0x0;
      piVar24 = piVar5;
      piVar31 = piVar5;
      do {
        if (*(long *)(piVar24 + -2) / 3 <= lVar26) break;
        iVar13 = *piVar31;
        iVar20 = piVar31[1];
        if (((iVar13 != iVar20) && (iVar22 = piVar31[2], iVar13 != iVar22)) && (iVar20 != iVar22)) {
          uVar14 = (uint)local_48;
          if (local_a8 != (void *)0x0) {
            iVar8 = iVar13;
            iVar21 = iVar20;
            if (iVar13 <= iVar20) {
              iVar8 = iVar20;
              iVar21 = iVar13;
            }
            iVar23 = iVar22;
            iVar9 = iVar21;
            if ((iVar22 < iVar8) &&
               (iVar23 = iVar8, iVar8 = iVar21, iVar9 = iVar22, iVar21 <= iVar22)) {
              iVar8 = iVar22;
              iVar9 = iVar21;
            }
            uVar17 = iVar8 * 0x127409f ^ iVar9 * 0x466f45d ^ iVar23 * 0x4f9ffb7;
            if (uVar17 == 0) {
              uVar17 = 1;
            }
            uVar10 = uVar17 & (uint)local_48;
            uVar11 = *(ulong *)(local_58._8_8_ + (ulong)uVar10 * 8);
            if (uVar17 == (uint)uVar11) {
              piVar6 = *(int **)((long)local_a8 + (uVar11 >> 0x20) * 0x10);
              iVar21 = *piVar6;
              iVar3 = piVar6[1];
              iVar4 = piVar6[2];
              iVar16 = iVar21;
              if (iVar21 <= iVar3) {
                iVar16 = iVar3;
                iVar3 = iVar21;
              }
              iVar21 = iVar3;
              iVar19 = iVar4;
              if ((iVar4 < iVar16) && (iVar19 = iVar16, iVar16 = iVar4, iVar4 < iVar3)) {
                iVar21 = iVar4;
                iVar16 = iVar3;
              }
              if ((iVar21 == iVar9 && iVar16 == iVar8) && (iVar19 == iVar23)) goto LAB_00108e10;
            }
            if (uVar11 != 0) {
              uVar15 = 1;
              while( true ) {
                uVar10 = uVar10 + 1 & (uint)local_48;
                uVar11 = *(ulong *)(local_58._8_8_ + (ulong)uVar10 * 8);
                if (uVar17 == (uint)uVar11) {
                  piVar6 = *(int **)((long)local_a8 + (uVar11 >> 0x20) * 0x10);
                  iVar21 = *piVar6;
                  iVar3 = piVar6[1];
                  iVar4 = piVar6[2];
                  iVar16 = iVar21;
                  if (iVar21 <= iVar3) {
                    iVar16 = iVar3;
                    iVar3 = iVar21;
                  }
                  iVar21 = iVar3;
                  iVar19 = iVar16;
                  iVar28 = iVar4;
                  if ((iVar4 < iVar16) && (iVar19 = iVar4, iVar28 = iVar16, iVar4 < iVar3)) {
                    iVar21 = iVar4;
                    iVar19 = iVar3;
                  }
                  if ((iVar21 == iVar9 && iVar19 == iVar8) && (iVar28 == iVar23)) goto LAB_00108e10;
                }
                if ((uVar11 == 0) ||
                   (((((uint)local_48 + 1) - ((uint)uVar11 & (uint)local_48)) + uVar10 &
                    (uint)local_48) < uVar15)) break;
                uVar15 = uVar15 + 1;
              }
            }
          }
          if (local_78 != (int)lVar26) {
            *(undefined8 *)(piVar5 + local_78 * 3) = *(undefined8 *)piVar31;
            (piVar5 + local_78 * 3)[2] = piVar31[2];
            iVar13 = *piVar31;
            iVar20 = piVar31[1];
            iVar22 = piVar31[2];
          }
          iVar8 = iVar13;
          if (iVar13 <= iVar20) {
            iVar8 = iVar20;
            iVar20 = iVar13;
          }
          iVar13 = iVar20;
          iVar21 = iVar8;
          iVar23 = iVar22;
          if ((iVar22 < iVar8) && (iVar21 = iVar22, iVar23 = iVar8, iVar22 < iVar20)) {
            iVar13 = iVar22;
            iVar21 = iVar20;
          }
          uVar17 = iVar13 * 0x466f45d ^ iVar21 * 0x127409f ^ iVar23 * 0x4f9ffb7;
          uVar11 = (ulong)uVar17;
          if (uVar17 == 0) {
            uVar11 = 1;
          }
          uVar17 = (uint)local_48 + 1 >> 2 ^ (uint)local_48;
          if (local_a8 == (void *)0x0) {
            __n_00 = (ulong)((uint)local_48 + 1) << 3;
            __s = (void *)Memory::alloc_static(__n_00,false);
            local_58._8_8_ = __s;
            local_58._0_8_ = Memory::alloc_static((ulong)(uVar17 + 1) << 4,false);
            memset(__s,0,__n_00);
          }
          if (uVar17 < local_48._4_4_) {
            AHashMap<int_const*,bool,SurfaceTool::TriangleHasher,SurfaceTool::TriangleHasher>::
            _resize_and_rehash((AHashMap<int_const*,bool,SurfaceTool::TriangleHasher,SurfaceTool::TriangleHasher>
                                *)local_58,uVar14 * 2);
            uVar14 = (uint)local_48;
          }
          local_a8 = (void *)local_58._0_8_;
          puVar12 = (undefined8 *)((ulong)local_48._4_4_ * 0x10 + local_58._0_8_);
          *puVar12 = piVar31;
          *(undefined1 *)(puVar12 + 1) = 1;
          uVar17 = (uint)uVar11 & uVar14;
          puVar1 = (ulong *)(local_58._8_8_ + (ulong)uVar17 * 8);
          if (*puVar1 == 0) {
            *puVar1 = (ulong)local_48._4_4_ << 0x20 | uVar11;
          }
          else {
            uVar10 = 1;
            uVar17 = uVar17 + 1 & uVar14;
            puVar2 = (uint *)(local_58._8_8_ + (ulong)uVar17 * 8);
            lVar29 = *(long *)puVar2;
            uVar27 = CONCAT44(local_48._4_4_,(uint)uVar11);
            while (lVar29 != 0) {
              uVar15 = (uVar14 + 1 + uVar17) - (*puVar2 & uVar14) & uVar14;
              uVar30 = uVar27;
              if (uVar15 < uVar10) {
                uVar30 = *(undefined8 *)puVar2;
                *(undefined8 *)puVar2 = uVar27;
                uVar10 = uVar15;
              }
              uVar10 = uVar10 + 1;
              uVar17 = uVar17 + 1 & uVar14;
              puVar2 = (uint *)(local_58._8_8_ + (ulong)uVar17 * 8);
              uVar27 = uVar30;
              lVar29 = *(long *)puVar2;
            }
            *(undefined8 *)puVar2 = uVar27;
          }
          local_78 = local_78 + 1;
          local_48 = CONCAT44(local_48._4_4_ + 1,(uint)local_48);
          piVar24 = *(int **)(param_2 + 8);
        }
LAB_00108e10:
        lVar26 = lVar26 + 1;
        piVar31 = piVar31 + 3;
      } while (piVar24 != (int *)0x0);
      CowData<int>::resize<false>(this,(long)(local_78 * 3));
      if (local_a8 != (void *)0x0) {
        Memory::free_static(local_a8,false);
        Memory::free_static((void *)local_58._8_8_,false);
      }
    }
    if (local_80 != (undefined8 *)0x0) {
      plVar18 = local_80 + -2;
      LOCK();
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (*plVar18 == 0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(plVar18,false);
          return;
        }
        goto LAB_0010948d;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010948d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SurfaceTool::add_vertex(Vector3 const&) */

void __thiscall SurfaceTool::add_vertex(SurfaceTool *this,Vector3 *param_1)

{
  WeightSort *pWVar1;
  undefined4 *puVar2;
  WeightSort *__dest;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  int iVar6;
  void *pvVar7;
  WeightSort *pWVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  WeightSort *pWVar18;
  long lVar19;
  long in_FS_OFFSET;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  float fVar23;
  undefined1 auVar24 [16];
  float fVar25;
  float fVar27;
  undefined8 uVar26;
  WeightSort *local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b4;
  undefined8 uStack_1ac;
  undefined8 local_1a4;
  undefined4 local_19c;
  undefined8 local_198;
  float local_190;
  undefined8 local_18c;
  undefined4 local_184;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined1 local_160 [16];
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined4 local_128;
  long local_118 [2];
  long local_108 [2];
  undefined4 local_f8;
  undefined8 local_f4;
  undefined8 uStack_ec;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d8;
  float local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  long local_58 [2];
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x17c] == (SurfaceTool)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("add_vertex","scene/resources/surface_tool.cpp",0xe3,
                       "Condition \"!begun\" is true.",0,0);
      return;
    }
    goto LAB_0010a6e3;
  }
  local_130 = *(undefined8 *)param_1;
  local_1b8 = 0;
  local_1b4 = *(undefined8 *)(this + 0x1b8);
  uStack_1ac = *(undefined8 *)(this + 0x1c0);
  local_198 = 0;
  local_128 = *(undefined4 *)(param_1 + 8);
  local_190 = 0.0;
  local_1a4 = *(undefined8 *)(this + 0x1c8);
  local_18c = 0;
  local_19c = *(undefined4 *)(this + 0x1d0);
  local_184 = 0;
  local_180 = *(undefined8 *)(this + 0x1d4);
  local_118[0] = 0;
  local_178 = *(undefined8 *)(this + 0x1dc);
  local_108[0] = 0;
  local_170 = __LC71;
  uStack_168 = _UNK_00129588;
  local_160._8_8_ = _UNK_00129588;
  local_160._0_8_ = __LC71;
  local_150 = __LC71;
  uStack_148 = _UNK_00129588;
  local_140 = __LC71;
  uStack_138 = _UNK_00129588;
  lVar15 = *(long *)(this + 0x200);
  if (*(long *)(this + 0x200) != 0) {
    CowData<float>::_ref((CowData<float> *)local_108,(CowData *)(this + 0x200));
    lVar15 = local_118[0];
  }
  if (*(long *)(this + 0x1f0) != lVar15) {
    CowData<int>::_ref((CowData<int> *)local_118,(CowData *)(this + 0x1f0));
    lVar15 = local_118[0];
  }
  lVar11 = local_108[0];
  local_18c = *(undefined8 *)(this + 0x208);
  local_184 = *(undefined4 *)(this + 0x210);
  fVar25 = (float)*(undefined8 *)(this + 0x210);
  fVar27 = (float)((ulong)*(undefined8 *)(this + 0x210) >> 0x20);
  fVar23 = *(float *)(this + 0x1c8) * *(float *)(this + 0x20c) -
           *(float *)(this + 0x1cc) * *(float *)(this + 0x208);
  fVar21 = (float)((ulong)*(undefined8 *)(this + 0x1d0) >> 0x20);
  fVar20 = (float)*(undefined8 *)(this + 0x1d0);
  auVar22._0_4_ = fVar25 * *(float *)(this + 0x1cc) - fVar20 * *(float *)(this + 0x20c);
  auVar22._4_4_ = fVar20 * *(float *)(this + 0x208) - fVar25 * *(float *)(this + 0x1c8);
  auVar22._8_4_ = fVar27 * 0.0 - fVar21 * 0.0;
  auVar22._12_4_ = fVar21 * 0.0 - fVar27 * 0.0;
  fVar20 = auVar22._0_4_ * auVar22._0_4_ + auVar22._4_4_ * auVar22._4_4_ + fVar23 * fVar23;
  local_190 = 0.0;
  uVar26 = 0;
  if (fVar20 != 0.0) {
    fVar20 = SQRT(fVar20);
    local_190 = fVar23 / fVar20;
    auVar24._4_4_ = fVar20;
    auVar24._0_4_ = fVar20;
    auVar24._8_8_ = _LC191;
    auVar22 = divps(auVar22,auVar24);
    uVar26 = auVar22._0_8_;
  }
  local_190 = local_190 * fVar27;
  local_1b8 = *(undefined4 *)(this + 0x218);
  local_160 = *(undefined1 (*) [16])(this + 0x230);
  local_150 = *(undefined8 *)(this + 0x240);
  uStack_148 = *(undefined8 *)(this + 0x248);
  local_140 = *(undefined8 *)(this + 0x250);
  uStack_138 = *(undefined8 *)(this + 600);
  iVar16 = (uint)(*(int *)(this + 0x21c) == 1) * 4 + 4;
  local_170 = *(undefined8 *)(this + 0x220);
  uStack_168 = *(undefined8 *)(this + 0x228);
  local_198 = CONCAT44((float)((ulong)uVar26 >> 0x20) * fVar27,(float)uVar26 * fVar27);
  if ((*(ulong *)(this + 0x188) & 0xc00) == 0) goto LAB_00109960;
  if (local_108[0] == 0) {
    if ((lVar15 != 0) && (*(long *)(lVar15 + -8) != 0)) goto LAB_00109c77;
    uVar13 = 0;
LAB_0010986c:
    do {
      if (local_108[0] == 0) {
        lVar15 = 1;
      }
      else {
        lVar15 = *(long *)(local_108[0] + -8) + 1;
      }
      iVar6 = CowData<float>::resize<false>((CowData<float> *)local_108,lVar15);
      if (iVar6 == 0) {
        if (local_108[0] == 0) {
          lVar11 = -1;
          lVar15 = 0;
LAB_00109d6a:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar11,lVar15,"p_index","size()","",
                     false,false);
        }
        else {
          lVar15 = *(long *)(local_108[0] + -8);
          lVar11 = lVar15 + -1;
          if (lVar11 < 0) goto LAB_00109d6a;
          CowData<float>::_copy_on_write((CowData<float> *)local_108);
          *(undefined4 *)(local_108[0] + lVar11 * 4) = 0;
        }
        if (local_118[0] != 0) goto LAB_001098eb;
LAB_00109d50:
        lVar15 = 1;
      }
      else {
        _err_print_error("push_back","./core/templates/vector.h",0x142,
                         "Condition \"err\" is true. Returning: true",0,0);
        if (local_118[0] == 0) goto LAB_00109d50;
LAB_001098eb:
        lVar15 = *(long *)(local_118[0] + -8) + 1;
      }
      iVar6 = CowData<int>::resize<false>((CowData<int> *)local_118,lVar15);
      if (iVar6 == 0) {
        if (local_118[0] == 0) {
          lVar11 = -1;
          lVar15 = 0;
        }
        else {
          lVar15 = *(long *)(local_118[0] + -8);
          lVar11 = lVar15 + -1;
          if (-1 < lVar11) {
            CowData<int>::_copy_on_write((CowData<int> *)local_118);
            *(undefined4 *)(local_118[0] + lVar11 * 4) = 0;
            goto LAB_0010993c;
          }
        }
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar11,lVar15,"p_index","size()","",false
                   ,false);
      }
      else {
        _err_print_error("push_back","./core/templates/vector.h",0x142,
                         "Condition \"err\" is true. Returning: true",0,0);
      }
LAB_0010993c:
      uVar14 = (int)uVar13 + 1;
      uVar13 = (ulong)uVar14;
      lVar15 = local_118[0];
    } while ((int)uVar14 < iVar16);
LAB_00109960:
    lVar11 = local_108[0];
    local_58[0] = 0;
    local_e4 = local_1a4;
    local_f4 = local_1b4;
    uStack_ec = uStack_1ac;
    local_dc = local_19c;
    local_b0 = local_170;
    uStack_a8 = uStack_168;
    local_d8 = local_198;
    local_a0 = local_160;
    local_d0 = local_190;
    local_90 = local_150;
    uStack_88 = uStack_148;
    local_cc = local_18c;
    local_80 = local_140;
    uStack_78 = uStack_138;
    local_c4 = local_184;
    local_c0 = local_180;
    local_b8 = local_178;
    local_70 = local_130;
    local_68 = local_128;
    local_f8 = local_1b8;
    if (lVar15 != 0) {
      CowData<int>::_ref((CowData<int> *)local_58,(CowData *)local_118);
    }
    local_48 = 0;
    if (lVar11 != 0) {
LAB_00109a7e:
      local_48 = 0;
      CowData<float>::_ref((CowData<float> *)&local_48,(CowData *)local_108);
    }
    uVar14 = *(uint *)(this + 0x198);
    pvVar7 = *(void **)(this + 0x1a0);
    if (uVar14 == *(uint *)(this + 0x19c)) {
      uVar9 = (ulong)(uVar14 * 2);
      if (uVar14 * 2 == 0) {
        uVar9 = 1;
      }
      *(int *)(this + 0x19c) = (int)uVar9;
      pvVar7 = (void *)Memory::realloc_static(pvVar7,uVar9 * 0xb8,false);
      *(void **)(this + 0x1a0) = pvVar7;
      if (pvVar7 == (void *)0x0) {
        _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      uVar14 = *(uint *)(this + 0x198);
    }
    *(uint *)(this + 0x198) = uVar14 + 1;
    puVar2 = (undefined4 *)((long)pvVar7 + (ulong)uVar14 * 0xb8);
    *puVar2 = local_f8;
    *(undefined8 *)(puVar2 + 1) = local_f4;
    *(undefined8 *)(puVar2 + 3) = uStack_ec;
    *(undefined8 *)(puVar2 + 5) = local_e4;
    *(undefined8 *)(puVar2 + 0x12) = local_b0;
    *(undefined8 *)(puVar2 + 0x14) = uStack_a8;
    puVar2[7] = local_dc;
    *(undefined8 *)(puVar2 + 0x16) = local_a0._0_8_;
    *(undefined8 *)(puVar2 + 0x18) = local_a0._8_8_;
    *(undefined8 *)(puVar2 + 8) = local_d8;
    *(undefined8 *)(puVar2 + 0x1a) = local_90;
    *(undefined8 *)(puVar2 + 0x1c) = uStack_88;
    puVar2[10] = local_d0;
    *(undefined8 *)(puVar2 + 0x1e) = local_80;
    *(undefined8 *)(puVar2 + 0x20) = uStack_78;
    *(undefined8 *)(puVar2 + 0xb) = local_cc;
    puVar2[0xd] = local_c4;
    *(undefined8 *)(puVar2 + 0xe) = local_c0;
    *(undefined8 *)(puVar2 + 0x10) = local_b8;
    *(undefined8 *)(puVar2 + 0x22) = local_70;
    puVar2[0x24] = local_68;
    *(undefined8 *)(puVar2 + 0x28) = 0;
    if (local_58[0] != 0) {
      CowData<int>::_ref((CowData<int> *)(puVar2 + 0x28),(CowData *)local_58);
    }
    *(undefined8 *)(puVar2 + 0x2c) = 0;
    if (local_48 != 0) {
      CowData<float>::_ref((CowData<float> *)(puVar2 + 0x2c),(CowData *)&local_48);
    }
    CowData<float>::_unref((CowData<float> *)&local_48);
    CowData<int>::_unref((CowData<int> *)local_58);
    *(ulong *)(this + 0x188) = *(ulong *)(this + 0x188) | 1;
    this[0x17d] = (SurfaceTool)0x0;
    CowData<float>::_unref((CowData<float> *)local_108);
    CowData<int>::_unref((CowData<int> *)local_118);
  }
  else {
    uVar9 = *(ulong *)(local_108[0] + -8);
    uVar13 = (ulong)iVar16;
    if (uVar13 == uVar9) {
      if ((lVar15 != 0) && (uVar13 == *(ulong *)(lVar15 + -8))) {
        local_e4 = local_1a4;
        local_58[0] = 0;
        local_dc = local_19c;
        local_f4 = local_1b4;
        uStack_ec = uStack_1ac;
        local_d8 = local_198;
        local_c0 = local_180;
        local_b8 = local_178;
        local_70 = local_130;
        local_68 = local_128;
        local_f8 = local_1b8;
        local_d0 = local_190;
        local_cc = local_18c;
        local_c4 = local_184;
        local_b0 = local_170;
        uStack_a8 = uStack_168;
        local_a0 = local_160;
        local_90 = local_150;
        uStack_88 = uStack_148;
        local_80 = local_140;
        uStack_78 = uStack_138;
        CowData<int>::_ref((CowData<int> *)local_58,(CowData *)local_118);
        goto LAB_00109a7e;
      }
    }
    else if (lVar15 == 0) {
      uVar13 = 0;
      if (uVar9 == 0) goto LAB_0010986c;
    }
    else if (uVar9 == *(ulong *)(lVar15 + -8)) {
      if ((long)uVar9 < (long)uVar13) {
        uVar13 = uVar9 & 0xffffffff;
        if ((int)uVar9 < iVar16) goto LAB_0010986c;
      }
      else {
        local_1c0 = (WeightSort *)0x0;
        for (uVar17 = 0; (long)uVar17 < (long)uVar9; uVar17 = uVar17 + 1) {
          lVar12 = *(long *)(lVar15 + -8);
          if (lVar12 <= (long)uVar17) goto LAB_00109e7b;
          uVar3 = *(undefined4 *)(lVar11 + uVar17 * 4);
          uVar4 = *(undefined4 *)(lVar15 + uVar17 * 4);
          if (local_1c0 == (WeightSort *)0x0) {
            lVar12 = 1;
          }
          else {
            lVar12 = *(long *)(local_1c0 + -8) + 1;
          }
          iVar16 = CowData<SurfaceTool::WeightSort>::resize<false>
                             ((CowData<SurfaceTool::WeightSort> *)&local_1c0,lVar12);
          if (iVar16 == 0) {
            if (local_1c0 == (WeightSort *)0x0) {
              lVar19 = -1;
              lVar12 = 0;
            }
            else {
              lVar12 = *(long *)(local_1c0 + -8);
              lVar19 = lVar12 + -1;
              if (-1 < lVar19) {
                CowData<SurfaceTool::WeightSort>::_copy_on_write
                          ((CowData<SurfaceTool::WeightSort> *)&local_1c0);
                *(undefined4 *)(local_1c0 + lVar19 * 8) = uVar4;
                *(undefined4 *)(local_1c0 + lVar19 * 8 + 4) = uVar3;
                goto LAB_001097dc;
              }
            }
            _err_print_index_error
                      ("set","./core/templates/cowdata.h",0xcf,lVar19,lVar12,"p_index","size()","",
                       false,false);
          }
          else {
            _err_print_error("push_back","./core/templates/vector.h",0x142,
                             "Condition \"err\" is true. Returning: true",0,0);
          }
LAB_001097dc:
          uVar9 = *(ulong *)(lVar11 + -8);
        }
        if ((local_1c0 == (WeightSort *)0x0) || (lVar15 = *(long *)(local_1c0 + -8), lVar15 == 0)) {
          CowData<SurfaceTool::WeightSort>::resize<false>
                    ((CowData<SurfaceTool::WeightSort> *)&local_1c0,uVar13);
        }
        else {
          CowData<SurfaceTool::WeightSort>::_copy_on_write
                    ((CowData<SurfaceTool::WeightSort> *)&local_1c0);
          pWVar1 = local_1c0;
          if (lVar15 == 1) {
            SortArray<SurfaceTool::WeightSort,_DefaultComparator<SurfaceTool::WeightSort>,true>::
            introsort(0,1,local_1c0,0);
            CowData<SurfaceTool::WeightSort>::resize<false>
                      ((CowData<SurfaceTool::WeightSort> *)&local_1c0,uVar13);
          }
          else {
            lVar12 = 0;
            lVar11 = lVar15;
            do {
              lVar11 = lVar11 >> 1;
              lVar12 = lVar12 + 1;
            } while (lVar11 != 1);
            SortArray<SurfaceTool::WeightSort,_DefaultComparator<SurfaceTool::WeightSort>,true>::
            introsort(0,lVar15,local_1c0,lVar12 * 2);
            __dest = pWVar1 + 8;
            if (lVar15 < 0x11) {
              lVar11 = 1;
              pWVar18 = __dest;
              do {
                fVar20 = *(float *)(pWVar18 + 4);
                uVar3 = *(undefined4 *)pWVar18;
                if (fVar20 < *(float *)(pWVar1 + 4)) {
                  memmove(__dest,pWVar1,lVar11 * 8);
                  *(undefined4 *)pWVar1 = uVar3;
                  *(float *)(pWVar1 + 4) = fVar20;
                }
                else {
                  lVar12 = lVar11 + -1;
                  pWVar8 = pWVar18;
                  if (fVar20 < *(float *)(pWVar18 + -4)) {
                    do {
                      lVar19 = lVar12;
                      if (lVar19 == 0) {
                        _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",
                                         0xff,"bad comparison function; sorting will be broken",0,0)
                        ;
                        pWVar8 = __dest;
                        goto LAB_0010a54e;
                      }
                      *(undefined8 *)(pWVar1 + lVar19 * 8 + 8) =
                           *(undefined8 *)(pWVar1 + lVar19 * 8);
                      lVar12 = lVar19 + -1;
                    } while (fVar20 < *(float *)(pWVar1 + (lVar19 + -1) * 8 + 4));
                    pWVar8 = pWVar1 + lVar19 * 8;
                  }
LAB_0010a54e:
                  *(undefined4 *)pWVar8 = uVar3;
                  *(float *)(pWVar8 + 4) = fVar20;
                }
                lVar11 = lVar11 + 1;
                pWVar18 = pWVar18 + 8;
              } while (lVar15 != lVar11);
            }
            else {
              lVar11 = 1;
              pWVar18 = __dest;
              do {
                fVar20 = *(float *)(pWVar18 + 4);
                uVar3 = *(undefined4 *)pWVar18;
                if (fVar20 < *(float *)(pWVar1 + 4)) {
                  memmove(__dest,pWVar1,lVar11 * 8);
                  *(undefined4 *)pWVar1 = uVar3;
                  *(float *)(pWVar1 + 4) = fVar20;
                }
                else {
                  lVar12 = lVar11 + -1;
                  pWVar8 = pWVar18;
                  if (fVar20 < *(float *)(pWVar18 + -4)) {
                    do {
                      lVar19 = lVar12;
                      if (lVar19 == 0) {
                        _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",
                                         0xff,"bad comparison function; sorting will be broken",0,0)
                        ;
                        pWVar8 = __dest;
                        goto LAB_0010a1f4;
                      }
                      *(undefined8 *)(pWVar1 + lVar19 * 8 + 8) =
                           *(undefined8 *)(pWVar1 + lVar19 * 8);
                      lVar12 = lVar19 + -1;
                    } while (fVar20 < *(float *)(pWVar1 + (lVar19 + -1) * 8 + 4));
                    pWVar8 = pWVar1 + lVar19 * 8;
                  }
LAB_0010a1f4:
                  *(undefined4 *)pWVar8 = uVar3;
                  *(float *)(pWVar8 + 4) = fVar20;
                }
                lVar11 = lVar11 + 1;
                pWVar18 = pWVar18 + 8;
              } while (lVar11 != 0x10);
              pWVar18 = pWVar1 + 0x80;
              lVar12 = -0x80;
              lVar11 = 0x10;
              do {
                uVar3 = *(undefined4 *)pWVar18;
                fVar20 = *(float *)(pWVar18 + 4);
                pWVar8 = pWVar18;
                lVar19 = lVar11 + -1;
                if (fVar20 < *(float *)(pWVar18 + -4)) {
                  do {
                    *(undefined8 *)(pWVar1 + lVar19 * 8 + 8) =
                         *(undefined8 *)(pWVar18 + lVar19 * 8 + lVar12);
                    lVar10 = lVar19 + -1;
                    if (*(float *)(pWVar1 + lVar10 * 8 + 4) <= fVar20) {
                      pWVar8 = pWVar1 + lVar19 * 8;
                      goto LAB_0010a612;
                    }
                    lVar19 = lVar10;
                  } while (lVar10 != 0);
                  _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                                   "bad comparison function; sorting will be broken",0,0);
                  pWVar8 = __dest;
                }
LAB_0010a612:
                lVar11 = lVar11 + 1;
                *(undefined4 *)pWVar8 = uVar3;
                pWVar18 = pWVar18 + 8;
                lVar12 = lVar12 + -8;
                *(float *)(pWVar8 + 4) = fVar20;
              } while (lVar15 != lVar11);
            }
            CowData<SurfaceTool::WeightSort>::resize<false>
                      ((CowData<SurfaceTool::WeightSort> *)&local_1c0,uVar13);
          }
        }
        pWVar1 = local_1c0;
        if (local_1c0 == (WeightSort *)0x0) {
          uVar17 = 0;
          lVar12 = 0;
LAB_00109e7b:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,uVar17,lVar12,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        lVar12 = *(long *)(local_1c0 + -8);
        fVar20 = 0.0;
        uVar17 = 0;
        do {
          if (lVar12 <= (long)uVar17) goto LAB_00109e7b;
          fVar20 = fVar20 + *(float *)(local_1c0 + uVar17 * 8 + 4);
          uVar17 = uVar17 + 1;
        } while (uVar17 != uVar13);
        lVar15 = 0;
        uVar17 = 0;
        CowData<float>::resize<false>((CowData<float> *)local_108,uVar13);
        CowData<int>::resize<false>((CowData<int> *)local_118,uVar13);
        do {
          if (fVar20 <= 0.0) {
            if (local_108[0] != 0) {
              lVar11 = *(long *)(local_108[0] + -8);
              if (lVar11 <= (long)uVar17) goto LAB_0010a42b;
              CowData<float>::_copy_on_write((CowData<float> *)local_108);
              *(undefined4 *)(local_108[0] + lVar15) = 0;
              goto LAB_0010a339;
            }
LAB_0010a428:
            lVar11 = 0;
LAB_0010a42b:
            _err_print_index_error
                      ("operator[]","./core/templates/vector.h",0x38,uVar17,lVar11,"p_index",
                       "((Vector<T> *)(this))->_cowdata.size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          lVar12 = *(long *)(pWVar1 + -8);
          if (lVar12 <= (long)uVar17) goto LAB_00109e7b;
          fVar21 = *(float *)(pWVar1 + uVar17 * 8 + 4);
          if (local_108[0] == 0) goto LAB_0010a428;
          lVar11 = *(long *)(local_108[0] + -8);
          if (lVar11 <= (long)uVar17) goto LAB_0010a42b;
          CowData<float>::_copy_on_write((CowData<float> *)local_108);
          *(float *)(local_108[0] + lVar15) = fVar21 / fVar20;
LAB_0010a339:
          lVar12 = *(long *)(pWVar1 + -8);
          if (lVar12 <= (long)uVar17) goto LAB_00109e7b;
          uVar3 = *(undefined4 *)(pWVar1 + uVar17 * 8);
          if (local_118[0] == 0) goto LAB_0010a428;
          lVar11 = *(long *)(local_118[0] + -8);
          if (lVar11 <= (long)uVar17) goto LAB_0010a42b;
          uVar17 = uVar17 + 1;
          CowData<int>::_copy_on_write((CowData<int> *)local_118);
          *(undefined4 *)(local_118[0] + lVar15) = uVar3;
          lVar15 = lVar15 + 4;
        } while (uVar13 != uVar17);
        LOCK();
        pWVar1 = pWVar1 + -0x10;
        *(long *)pWVar1 = *(long *)pWVar1 + -1;
        UNLOCK();
        lVar15 = local_118[0];
        if (*(long *)pWVar1 == 0) {
          Memory::free_static(local_1c0 + -0x10,false);
          lVar15 = local_118[0];
        }
      }
      goto LAB_00109960;
    }
LAB_00109c77:
    _err_print_error("add_vertex","scene/resources/surface_tool.cpp",0xf9,
                     "Condition \"vtx.weights.size() != vtx.bones.size()\" is true.",0,0);
    CowData<float>::_unref((CowData<float> *)local_108);
    CowData<int>::_unref((CowData<int> *)local_118);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010a6e3:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SurfaceTool::add_triangle_fan(Vector<Vector3> const&, Vector<Vector2> const&, Vector<Color>
   const&, Vector<Vector2> const&, Vector<Vector3> const&, Vector<Plane> const&) */

void __thiscall
SurfaceTool::add_triangle_fan
          (SurfaceTool *this,Vector *param_1,Vector *param_2,Vector *param_3,Vector *param_4,
          Vector *param_5,Vector *param_6)

{
  Vector2 *pVVar1;
  Plane *pPVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
  long lVar9;
  Vector3 *pVVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  if (this[0x17c] == (SurfaceTool)0x0) {
    uVar8 = 0x17e;
    pcVar7 = "Condition \"!begun\" is true.";
  }
  else if (*(int *)(this + 0x180) == 3) {
    if ((*(long *)(param_1 + 8) != 0) &&
       (lVar11 = *(long *)(*(long *)(param_1 + 8) + -8), 2 < lVar11)) {
      lVar12 = 0;
      lVar9 = 2;
      lVar13 = 0x18;
      if (0 < lVar11 + -2) {
        do {
          puVar5 = *(undefined8 **)(param_3 + 8);
          if ((puVar5 != (undefined8 *)0x0) && (0 < (long)puVar5[-1])) {
            set_color(*puVar5,puVar5[1],this);
          }
          pVVar1 = *(Vector2 **)(param_2 + 8);
          if ((pVVar1 != (Vector2 *)0x0) && (0 < *(long *)(pVVar1 + -8))) {
            set_uv(this,pVVar1);
          }
          pVVar1 = *(Vector2 **)(param_4 + 8);
          if ((pVVar1 != (Vector2 *)0x0) && (0 < *(long *)(pVVar1 + -8))) {
            set_uv2(this,pVVar1);
          }
          pVVar10 = *(Vector3 **)(param_5 + 8);
          if ((pVVar10 != (Vector3 *)0x0) && (0 < *(long *)(pVVar10 + -8))) {
            set_normal(this,pVVar10);
          }
          pPVar2 = *(Plane **)(param_6 + 8);
          if ((pPVar2 != (Plane *)0x0) && (0 < *(long *)(pPVar2 + -8))) {
            set_tangent(this,pPVar2);
          }
          pVVar10 = *(Vector3 **)(param_1 + 8);
          if (pVVar10 == (Vector3 *)0x0) {
            lVar11 = 0;
LAB_0010aa4b:
            lVar6 = 0;
LAB_0010aa68:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar11,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          lVar11 = *(long *)(pVVar10 + -8);
          if (lVar11 < 1) goto LAB_0010aa4b;
          add_vertex(this,pVVar10);
          lVar12 = lVar12 + 1;
          lVar11 = *(long *)(param_3 + 8);
          if ((lVar11 != 0) && (lVar12 < *(long *)(lVar11 + -8))) {
            puVar5 = (undefined8 *)(lVar11 + lVar12 * 0x10);
            set_color(*puVar5,puVar5[1],this);
          }
          lVar11 = *(long *)(param_2 + 8);
          if ((lVar11 != 0) && (lVar12 < *(long *)(lVar11 + -8))) {
            set_uv(this,(Vector2 *)(lVar11 + lVar12 * 8));
          }
          lVar11 = *(long *)(param_4 + 8);
          if ((lVar11 != 0) && (lVar12 < *(long *)(lVar11 + -8))) {
            set_uv2(this,(Vector2 *)(lVar11 + lVar12 * 8));
          }
          lVar11 = *(long *)(param_5 + 8);
          if ((lVar11 != 0) && (lVar12 < *(long *)(lVar11 + -8))) {
            set_normal(this,(Vector3 *)(lVar11 + -0xc + lVar13));
          }
          lVar11 = *(long *)(param_6 + 8);
          if ((lVar11 != 0) && (lVar12 < *(long *)(lVar11 + -8))) {
            set_tangent(this,(Plane *)(lVar11 + lVar12 * 0x10));
          }
          lVar3 = *(long *)(param_1 + 8);
          lVar6 = lVar12;
          if (lVar3 == 0) {
            lVar11 = 0;
            goto LAB_0010aa68;
          }
          lVar11 = *(long *)(lVar3 + -8);
          if (lVar11 <= lVar12) goto LAB_0010aa68;
          add_vertex(this,(Vector3 *)(lVar3 + -0xc + lVar13));
          lVar11 = *(long *)(param_3 + 8);
          if ((lVar11 != 0) && (lVar9 < *(long *)(lVar11 + -8))) {
            puVar5 = (undefined8 *)(lVar11 + lVar9 * 0x10);
            set_color(*puVar5,puVar5[1],this);
          }
          lVar11 = *(long *)(param_2 + 8);
          if ((lVar11 != 0) && (lVar9 < *(long *)(lVar11 + -8))) {
            set_uv(this,(Vector2 *)(lVar11 + lVar9 * 8));
          }
          lVar11 = *(long *)(param_4 + 8);
          if ((lVar11 != 0) && (lVar9 < *(long *)(lVar11 + -8))) {
            set_uv2(this,(Vector2 *)(lVar11 + lVar9 * 8));
          }
          lVar11 = *(long *)(param_5 + 8);
          if ((lVar11 != 0) && (lVar9 < *(long *)(lVar11 + -8))) {
            set_normal(this,(Vector3 *)(lVar11 + lVar13));
          }
          lVar11 = *(long *)(param_6 + 8);
          if ((lVar11 != 0) && (lVar9 < *(long *)(lVar11 + -8))) {
            set_tangent(this,(Plane *)(lVar11 + lVar9 * 0x10));
          }
          lVar3 = *(long *)(param_1 + 8);
          lVar6 = lVar9;
          if (lVar3 == 0) {
            lVar11 = 0;
            goto LAB_0010aa68;
          }
          lVar11 = *(long *)(lVar3 + -8);
          if (lVar11 <= lVar9) goto LAB_0010aa68;
          pVVar10 = (Vector3 *)(lVar3 + lVar13);
          lVar13 = lVar13 + 0xc;
          lVar9 = lVar9 + 1;
          add_vertex(this,pVVar10);
        } while ((*(long *)(param_1 + 8) != 0) &&
                (lVar12 < *(long *)(*(long *)(param_1 + 8) + -8) + -2));
      }
      return;
    }
    uVar8 = 0x180;
    pcVar7 = "Condition \"p_vertices.size() < 3\" is true.";
  }
  else {
    uVar8 = 0x17f;
    pcVar7 = "Condition \"primitive != Mesh::PRIMITIVE_TRIANGLES\" is true.";
  }
  _err_print_error("add_triangle_fan","scene/resources/surface_tool.cpp",uVar8,pcVar7,0,0);
  return;
}



/* SurfaceTool::_add_triangle_fan(Vector<Vector3> const&, Vector<Vector2> const&, Vector<Color>
   const&, Vector<Vector2> const&, Vector<Vector3> const&, TypedArray<Plane> const&) */

void __thiscall
SurfaceTool::_add_triangle_fan
          (SurfaceTool *this,Vector *param_1,Vector *param_2,Vector *param_3,Vector *param_4,
          Vector *param_5,TypedArray *param_6)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  Variant local_68 [8];
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,(Array *)param_6);
  Variant::operator_cast_to_Vector(local_68);
  add_triangle_fan(this,param_1,param_2,param_3,param_4,param_5,(Vector *)local_68);
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
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SurfaceTool::commit_to_arrays() */

Array * SurfaceTool::commit_to_arrays(void)

{
  undefined8 *puVar1;
  float fVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 *puVar18;
  undefined8 uVar19;
  double dVar20;
  ulong uVar21;
  ulong uVar22;
  undefined1 uVar23;
  ushort uVar24;
  int iVar25;
  int iVar26;
  float *pfVar27;
  float *pfVar28;
  float *pfVar29;
  undefined8 *puVar30;
  undefined1 (*pauVar31) [16];
  undefined1 (*pauVar32) [16];
  undefined1 (*pauVar33) [16];
  long lVar34;
  undefined4 *puVar35;
  undefined4 *puVar36;
  undefined1 (*pauVar37) [16];
  Variant *pVVar38;
  long lVar39;
  ulong uVar40;
  uint uVar41;
  long lVar42;
  ulong *puVar43;
  size_t sVar44;
  int iVar45;
  int iVar46;
  long in_RSI;
  int iVar47;
  Array *in_RDI;
  uint uVar48;
  ulong uVar49;
  ulong uVar50;
  uint uVar51;
  long lVar52;
  long in_FS_OFFSET;
  uint uVar53;
  undefined1 auVar54 [16];
  undefined1 auVar58 [16];
  int iVar62;
  int iVar64;
  undefined1 auVar65 [16];
  undefined2 uVar66;
  int iVar67;
  undefined1 auVar68 [16];
  int iVar69;
  undefined2 uVar83;
  int iVar84;
  undefined2 uVar86;
  uint uVar85;
  undefined1 auVar70 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar79 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  int iVar89;
  int iVar98;
  undefined1 auVar91 [16];
  undefined1 auVar94 [16];
  int iVar99;
  int iVar101;
  undefined1 auVar100 [16];
  uint uVar102;
  undefined2 uVar106;
  undefined1 auVar103 [16];
  undefined1 auVar107 [16];
  undefined8 local_80;
  Vector local_78 [8];
  undefined4 *local_70;
  char *local_68;
  undefined1 (*local_60) [16];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  undefined1 auVar56 [16];
  undefined1 auVar55 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar57 [16];
  undefined1 auVar61 [16];
  undefined1 auVar63 [12];
  undefined1 auVar76 [16];
  undefined1 auVar80 [16];
  undefined1 auVar71 [16];
  undefined1 auVar77 [16];
  undefined1 auVar81 [16];
  undefined1 auVar72 [16];
  undefined1 auVar78 [16];
  undefined1 auVar82 [16];
  undefined1 auVar90 [12];
  undefined1 auVar95 [16];
  undefined1 auVar92 [16];
  undefined1 auVar96 [16];
  undefined1 auVar93 [16];
  undefined1 auVar97 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  
  lVar52 = -0x60;
  uVar50 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = *(int *)(in_RSI + 0x198);
  Array::Array(in_RDI);
  iVar47 = (int)in_RDI;
  Array::resize(iVar47);
  do {
    if ((*(ulong *)(in_RSI + 0x188) >> (uVar50 & 0x3f) & 1) == 0) goto switchD_0010aeb3_default;
    switch(uVar50 & 0xffffffff) {
    default:
      local_60 = (undefined1 (*) [16])0x0;
      CowData<Vector3>::resize<false>((CowData<Vector3> *)&local_60,(long)iVar5);
      CowData<Vector3>::_copy_on_write((CowData<Vector3> *)&local_60);
      if (*(uint *)(in_RSI + 0x198) != 0) {
        pauVar31 = (undefined1 (*) [16])((long)*local_60 + (ulong)*(uint *)(in_RSI + 0x198) * 0xc);
        pauVar37 = local_60;
        puVar30 = (undefined8 *)(*(long *)(in_RSI + 0x1a0) + 0x88);
        do {
          while (uVar50 != 1) {
            pauVar32 = (undefined1 (*) [16])((long)*pauVar37 + 0xc);
            *(undefined8 *)*pauVar37 = *puVar30;
            *(undefined4 *)((long)*pauVar37 + 8) = *(undefined4 *)(puVar30 + 1);
            pauVar37 = pauVar32;
            puVar30 = puVar30 + 0x17;
            if (pauVar31 == pauVar32) goto LAB_0010b890;
          }
          pauVar32 = (undefined1 (*) [16])((long)*pauVar37 + 0xc);
          *(undefined8 *)*pauVar37 = *(undefined8 *)((long)puVar30 + -0x74);
          *(undefined4 *)((long)*pauVar37 + 8) = *(undefined4 *)((long)puVar30 + -0x6c);
          pauVar37 = pauVar32;
          puVar30 = puVar30 + 0x17;
        } while (pauVar31 != pauVar32);
      }
LAB_0010b890:
      Variant::Variant((Variant *)local_58,(Vector *)&local_68);
      pVVar38 = (Variant *)Array::operator[](iVar47);
      if (pVVar38 == (Variant *)local_58) {
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      else {
        if (Variant::needs_deinit[*(int *)pVVar38] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar38 = 0;
        *(int *)pVVar38 = local_58[0];
        auVar11._8_8_ = uStack_48;
        auVar11._0_8_ = local_50;
        *(undefined1 (*) [16])(pVVar38 + 8) = auVar11;
      }
      CowData<Vector3>::_unref((CowData<Vector3> *)&local_60);
      break;
    case 2:
      local_60 = (undefined1 (*) [16])0x0;
      CowData<float>::resize<false>((CowData<float> *)&local_60,(long)(iVar5 * 4));
      CowData<float>::_copy_on_write((CowData<float> *)&local_60);
      uVar85 = _LC192;
      uVar48 = (uint)_LC191;
      uVar51 = *(uint *)(in_RSI + 0x198);
      if (uVar51 != 0) {
        uVar41 = 0;
        pfVar27 = (float *)(*(long *)(in_RSI + 0x1a0) + 0x14);
        pfVar28 = pfVar27;
        do {
          pfVar29 = pfVar28 + 0x2e;
          *(float *)((long)*local_60 + (ulong)uVar41 * 4) = pfVar28[6];
          *(float *)((long)*local_60 + (ulong)(uVar41 + 1) * 4) = pfVar28[7];
          fVar2 = pfVar28[8];
          *(float *)((long)*local_60 + (ulong)(uVar41 + 2) * 4) = fVar2;
          uVar102 = uVar41 + 3;
          uVar41 = uVar41 + 4;
          uVar53 = -(uint)((pfVar28[2] * pfVar28[6] - *pfVar28 * fVar2) * pfVar28[4] +
                           (fVar2 * pfVar28[1] - pfVar28[2] * pfVar28[7]) * pfVar28[3] +
                           (pfVar28[7] * *pfVar28 - pfVar28[6] * pfVar28[1]) * pfVar28[5] < 0.0);
          *(uint *)((long)*local_60 + (ulong)uVar102 * 4) = ~uVar53 & uVar48 | uVar85 & uVar53;
          pfVar28 = pfVar29;
        } while (pfVar29 != pfVar27 + (ulong)uVar51 * 0x2e);
      }
      Variant::Variant((Variant *)local_58,(Vector *)&local_68);
      pVVar38 = (Variant *)Array::operator[](iVar47);
      if (pVVar38 == (Variant *)local_58) {
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      else {
        if (Variant::needs_deinit[*(int *)pVVar38] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar38 = 0;
        *(int *)pVVar38 = local_58[0];
        auVar8._8_8_ = uStack_48;
        auVar8._0_8_ = local_50;
        *(undefined1 (*) [16])(pVVar38 + 8) = auVar8;
      }
      goto LAB_0010ae6f;
    case 3:
      local_60 = (undefined1 (*) [16])0x0;
      lVar34 = (long)iVar5;
      if (lVar34 < 0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x157,
                         "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
LAB_0010c259:
        if (local_60 != (undefined1 (*) [16])0x0) goto LAB_0010b114;
LAB_0010c267:
        pauVar31 = (undefined1 (*) [16])0x0;
      }
      else {
        if (lVar34 == 0) goto LAB_0010c267;
        uVar40 = lVar34 * 0x10 - 1;
        uVar40 = uVar40 | uVar40 >> 1;
        uVar40 = uVar40 | uVar40 >> 2;
        uVar40 = uVar40 | uVar40 >> 4;
        uVar40 = uVar40 | uVar40 >> 8;
        uVar40 = uVar40 | uVar40 >> 0x10;
        pauVar31 = (undefined1 (*) [16])Memory::alloc_static((uVar40 | uVar40 >> 0x20) + 0x11,false)
        ;
        if (pauVar31 == (undefined1 (*) [16])0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
          goto LAB_0010c259;
        }
        local_60 = pauVar31 + 1;
        *(undefined8 *)*pauVar31 = 1;
        uVar19 = _UNK_00129588;
        uVar6 = __LC71;
        pauVar37 = pauVar31;
        if ((lVar34 * 0x10 & 0x10U) == 0) goto LAB_0010b100;
        *(undefined8 *)pauVar31[1] = __LC71;
        *(undefined8 *)((long)pauVar31[1] + 8) = uVar19;
        pauVar37 = local_60;
        while (pauVar37 != pauVar31 + lVar34) {
LAB_0010b100:
          *(undefined8 *)pauVar37[1] = uVar6;
          *(undefined8 *)((long)pauVar37[1] + 8) = uVar19;
          *(undefined8 *)pauVar37[2] = uVar6;
          *(undefined8 *)((long)pauVar37[2] + 8) = uVar19;
          pauVar37 = pauVar37 + 2;
        }
        *(long *)((long)*pauVar31 + 8) = lVar34;
LAB_0010b114:
        pauVar31 = local_60;
        if (1 < *(ulong *)local_60[-1]) {
          if (local_60 == (undefined1 (*) [16])0x0) {
SurfaceTool_commit_to_arrays:
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
          lVar34 = *(long *)((long)local_60[-1] + 8);
          uVar40 = 0x10;
          sVar44 = lVar34 * 0x10;
          if (sVar44 != 0) {
            uVar40 = sVar44 - 1 | sVar44 - 1 >> 1;
            uVar40 = uVar40 | uVar40 >> 2;
            uVar40 = uVar40 | uVar40 >> 4;
            uVar40 = uVar40 | uVar40 >> 8;
            uVar40 = uVar40 | uVar40 >> 0x10;
            uVar40 = (uVar40 | uVar40 >> 0x20) + 0x11;
          }
          puVar30 = (undefined8 *)Memory::alloc_static(uVar40,false);
          pauVar37 = local_60;
          if (puVar30 == (undefined8 *)0x0) {
            _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                             "Parameter \"mem_new\" is null.",0,0);
            pauVar31 = local_60;
          }
          else {
            pauVar31 = (undefined1 (*) [16])(puVar30 + 2);
            *puVar30 = 1;
            puVar30[1] = lVar34;
            memcpy(pauVar31,local_60,sVar44);
            pauVar32 = local_60;
            LOCK();
            pauVar37 = pauVar37 + -1;
            *(long *)*pauVar37 = *(long *)*pauVar37 + -1;
            UNLOCK();
            local_60 = pauVar31;
            if (*(long *)*pauVar37 == 0) {
              local_60 = (undefined1 (*) [16])0x0;
              Memory::free_static(pauVar32 + -1,false);
              local_60 = pauVar31;
            }
          }
        }
      }
      uVar51 = *(uint *)(in_RSI + 0x198);
      if (uVar51 != 0) {
        pauVar37 = (undefined1 (*) [16])(*(long *)(in_RSI + 0x1a0) + 4);
        pauVar32 = pauVar31;
        do {
          auVar88 = *pauVar37;
          pauVar33 = pauVar32 + 1;
          pauVar37 = (undefined1 (*) [16])(pauVar37[0xb] + 8);
          *pauVar32 = auVar88;
          pauVar32 = pauVar33;
        } while (pauVar31 + uVar51 != pauVar33);
      }
      Variant::Variant((Variant *)local_58,(Vector *)&local_68);
      pVVar38 = (Variant *)Array::operator[](iVar47);
      if (pVVar38 == (Variant *)local_58) {
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      else {
        if (Variant::needs_deinit[*(int *)pVVar38] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar38 = 0;
        *(int *)pVVar38 = local_58[0];
        auVar10._8_8_ = uStack_48;
        auVar10._0_8_ = local_50;
        *(undefined1 (*) [16])(pVVar38 + 8) = auVar10;
      }
      pauVar31 = local_60;
      if (local_60 != (undefined1 (*) [16])0x0) {
        LOCK();
        pauVar37 = local_60 + -1;
        *(long *)*pauVar37 = *(long *)*pauVar37 + -1;
        UNLOCK();
        if (*(long *)*pauVar37 == 0) {
          local_60 = (undefined1 (*) [16])0x0;
          Memory::free_static(pauVar31 + -1,false);
          break;
        }
      }
      goto switchD_0010aeb3_default;
    case 4:
    case 5:
      local_60 = (undefined1 (*) [16])0x0;
      lVar34 = (long)iVar5;
      if (lVar34 < 0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x157,
                         "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
LAB_0010c290:
        pauVar31 = local_60;
        if (local_60 != (undefined1 (*) [16])0x0) goto LAB_0010af6a;
LAB_0010c29e:
        pauVar37 = (undefined1 (*) [16])0x0;
      }
      else {
        if (lVar34 == 0) goto LAB_0010c29e;
        uVar40 = lVar34 * 8 - 1;
        uVar40 = uVar40 | uVar40 >> 1;
        uVar40 = uVar40 | uVar40 >> 2;
        uVar40 = uVar40 | uVar40 >> 4;
        uVar40 = uVar40 | uVar40 >> 8;
        uVar40 = uVar40 | uVar40 >> 0x10;
        puVar30 = (undefined8 *)Memory::alloc_static((uVar40 | uVar40 >> 0x20) + 0x11,false);
        if (puVar30 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
          goto LAB_0010c290;
        }
        local_60 = (undefined1 (*) [16])(puVar30 + 2);
        *puVar30 = 1;
        pauVar31 = (undefined1 (*) [16])memset(local_60,0,lVar34 * 8);
        puVar30[1] = lVar34;
LAB_0010af6a:
        pauVar37 = local_60;
        if (1 < *(ulong *)pauVar31[-1]) {
          if (local_60 == (undefined1 (*) [16])0x0) goto SurfaceTool_commit_to_arrays;
          lVar34 = *(long *)((long)local_60[-1] + 8);
          uVar40 = 0x10;
          sVar44 = lVar34 * 8;
          if (sVar44 != 0) {
            uVar40 = sVar44 - 1 | sVar44 - 1 >> 1;
            uVar40 = uVar40 | uVar40 >> 2;
            uVar40 = uVar40 | uVar40 >> 4;
            uVar40 = uVar40 | uVar40 >> 8;
            uVar40 = uVar40 | uVar40 >> 0x10;
            uVar40 = (uVar40 | uVar40 >> 0x20) + 0x11;
          }
          puVar30 = (undefined8 *)Memory::alloc_static(uVar40,false);
          pauVar31 = local_60;
          if (puVar30 == (undefined8 *)0x0) {
            _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                             "Parameter \"mem_new\" is null.",0,0);
            pauVar37 = local_60;
          }
          else {
            pauVar37 = (undefined1 (*) [16])(puVar30 + 2);
            *puVar30 = 1;
            puVar30[1] = lVar34;
            memcpy(pauVar37,local_60,sVar44);
            pauVar32 = local_60;
            LOCK();
            pauVar31 = pauVar31 + -1;
            *(long *)*pauVar31 = *(long *)*pauVar31 + -1;
            UNLOCK();
            local_60 = pauVar37;
            if (*(long *)*pauVar31 == 0) {
              local_60 = (undefined1 (*) [16])0x0;
              Memory::free_static(pauVar32 + -1,false);
              local_60 = pauVar37;
            }
          }
        }
      }
      uVar51 = *(uint *)(in_RSI + 0x198);
      if (uVar51 != 0) {
        puVar30 = (undefined8 *)(*(long *)(in_RSI + 0x1a0) + 0x40);
        pauVar31 = pauVar37;
        do {
          while (uVar50 != 5) {
            puVar1 = puVar30 + -1;
            puVar18 = (undefined8 *)*pauVar31;
            puVar30 = puVar30 + 0x17;
            *(undefined8 *)*pauVar31 = *puVar1;
            pauVar31 = (undefined1 (*) [16])(puVar18 + 1);
            if ((undefined1 (*) [16])(puVar18 + 1) ==
                (undefined1 (*) [16])((long)*pauVar37 + (ulong)uVar51 * 8)) goto LAB_0010afd8;
          }
          uVar6 = *puVar30;
          puVar1 = (undefined8 *)*pauVar31;
          puVar30 = puVar30 + 0x17;
          *(undefined8 *)*pauVar31 = uVar6;
          pauVar31 = (undefined1 (*) [16])(puVar1 + 1);
        } while ((undefined1 (*) [16])(puVar1 + 1) !=
                 (undefined1 (*) [16])((long)*pauVar37 + (ulong)uVar51 * 8));
      }
LAB_0010afd8:
      Variant::Variant((Variant *)local_58,(Vector *)&local_68);
      pVVar38 = (Variant *)Array::operator[](iVar47);
      if (pVVar38 == (Variant *)local_58) {
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      else {
        if (Variant::needs_deinit[*(int *)pVVar38] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar38 = 0;
        *(int *)pVVar38 = local_58[0];
        auVar9._8_8_ = uStack_48;
        auVar9._0_8_ = local_50;
        *(undefined1 (*) [16])(pVVar38 + 8) = auVar9;
      }
      CowData<Vector2>::_unref((CowData<Vector2> *)&local_60);
      break;
    case 6:
    case 7:
    case 8:
    case 9:
      uVar51 = *(uint *)(in_RSI + 0x248 + uVar50 * 4);
      uVar40 = (ulong)uVar51;
      uVar48 = (int)uVar50 - 6;
      switch(uVar51) {
      case 0:
        local_60 = (undefined1 (*) [16])0x0;
        CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_60,(long)(iVar5 * 4))
        ;
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_60);
        dVar20 = _LC193;
        if (*(int *)(in_RSI + 0x198) != 0) {
          lVar34 = 0;
          uVar49 = uVar40;
          do {
            iVar46 = (int)uVar40;
            lVar42 = (ulong)uVar48 * 0x10 + lVar34 + *(long *)(in_RSI + 0x1a0);
            iVar25 = (int)((double)*(float *)(lVar42 + 0x48) * dVar20);
            if (0xff < iVar25) {
              iVar25 = 0xff;
            }
            uVar23 = (char)iVar25;
            if (iVar25 < 0) {
              uVar23 = 0;
            }
            *(undefined1 *)((long)*local_60 + uVar40) = uVar23;
            iVar25 = (int)((double)*(float *)(lVar42 + 0x4c) * dVar20);
            if (0xff < iVar25) {
              iVar25 = 0xff;
            }
            uVar23 = (char)iVar25;
            if (iVar25 < 0) {
              uVar23 = 0;
            }
            *(undefined1 *)((long)*local_60 + (ulong)(iVar46 + 1)) = uVar23;
            iVar25 = (int)((double)*(float *)(lVar42 + 0x50) * dVar20);
            if (0xff < iVar25) {
              iVar25 = 0xff;
            }
            uVar23 = (undefined1)iVar25;
            if (iVar25 < 0) {
              uVar23 = 0;
            }
            *(undefined1 *)((long)*local_60 + (ulong)(iVar46 + 2)) = uVar23;
            iVar25 = (int)((double)*(float *)(lVar42 + 0x54) * dVar20);
            if (0xff < iVar25) {
              iVar25 = 0xff;
            }
            uVar23 = (char)iVar25;
            if (iVar25 < 0) {
              uVar23 = 0;
            }
            uVar51 = (int)uVar49 + 1;
            uVar49 = (ulong)uVar51;
            lVar34 = lVar34 + 0xb8;
            uVar40 = (ulong)(iVar46 + 4);
            *(undefined1 *)((long)*local_60 + (ulong)(iVar46 + 3)) = uVar23;
          } while (uVar51 < *(uint *)(in_RSI + 0x198));
        }
        break;
      case 1:
        local_60 = (undefined1 (*) [16])0x0;
        CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_60,(long)(iVar5 * 4))
        ;
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_60);
        dVar20 = _LC194;
        if (*(int *)(in_RSI + 0x198) != 0) {
          uVar51 = 0;
          lVar34 = 0;
          uVar85 = 0;
          do {
            lVar42 = (ulong)uVar48 * 0x10 + lVar34 + *(long *)(in_RSI + 0x1a0);
            iVar25 = (int)((double)*(float *)(lVar42 + 0x48) * dVar20);
            if (0x7f < iVar25) {
              iVar25 = 0x7f;
            }
            uVar23 = (undefined1)iVar25;
            if (iVar25 < -0x80) {
              uVar23 = 0x80;
            }
            *(undefined1 *)((long)*local_60 + (ulong)uVar51) = uVar23;
            iVar25 = (int)((double)*(float *)(lVar42 + 0x4c) * dVar20);
            if (0x7f < iVar25) {
              iVar25 = 0x7f;
            }
            uVar23 = (undefined1)iVar25;
            if (iVar25 < -0x80) {
              uVar23 = 0x80;
            }
            *(undefined1 *)((long)*local_60 + (ulong)(uVar51 + 1)) = uVar23;
            iVar25 = (int)((double)*(float *)(lVar42 + 0x50) * dVar20);
            if (0x7f < iVar25) {
              iVar25 = 0x7f;
            }
            uVar23 = (undefined1)iVar25;
            if (iVar25 < -0x80) {
              uVar23 = 0x80;
            }
            *(undefined1 *)((long)*local_60 + (ulong)(uVar51 + 2)) = uVar23;
            uVar41 = uVar51 + 3;
            iVar25 = (int)((double)*(float *)(lVar42 + 0x54) * dVar20);
            if (0x7f < iVar25) {
              iVar25 = 0x7f;
            }
            uVar23 = (undefined1)iVar25;
            if (iVar25 < -0x80) {
              uVar23 = 0x80;
            }
            uVar85 = uVar85 + 1;
            lVar34 = lVar34 + 0xb8;
            uVar51 = uVar51 + 4;
            *(undefined1 *)((long)*local_60 + (ulong)uVar41) = uVar23;
          } while (uVar85 < *(uint *)(in_RSI + 0x198));
        }
        break;
      case 2:
        local_60 = (undefined1 (*) [16])0x0;
        CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_60,(long)(iVar5 * 4))
        ;
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_60);
        uVar51 = *(uint *)(in_RSI + 0x198);
        if (uVar51 != 0) {
          lVar42 = *(long *)(in_RSI + 0x1a0);
          uVar48 = 0;
          lVar34 = lVar42 + lVar52;
          do {
            uVar85 = *(uint *)(lVar34 + 0x48);
            uVar41 = uVar85 & 0x7f800000;
            if (uVar41 < 0x47800000) {
              uVar24 = 0;
              if (0x38000000 < uVar41) {
                uVar24 = (ushort)(uVar41 + 0xc8000000 >> 0xd) |
                         (ushort)((uVar85 >> 0x1f) << 0xf) | (ushort)((uVar85 & 0x7fffff) >> 0xd);
              }
            }
            else {
              if ((uVar41 != 0x7f800000) || (uVar24 = 0x3ff, (uVar85 & 0x7fffff) == 0)) {
                uVar24 = 0;
              }
              uVar24 = (ushort)((uVar85 >> 0x1f) << 0xf) | uVar24 | 0x7c00;
            }
            *(ushort *)((long)*local_60 + (ulong)uVar48 * 2) = uVar24;
            uVar85 = *(uint *)(lVar34 + 0x4c);
            uVar41 = uVar85 & 0x7f800000;
            if (uVar41 < 0x47800000) {
              uVar24 = 0;
              if (0x38000000 < uVar41) {
                uVar24 = (ushort)(uVar41 + 0xc8000000 >> 0xd) |
                         (ushort)((uVar85 >> 0x1f) << 0xf) | (ushort)((uVar85 & 0x7fffff) >> 0xd);
              }
            }
            else {
              if ((uVar41 != 0x7f800000) || (uVar24 = 0x3ff, (uVar85 & 0x7fffff) == 0)) {
                uVar24 = 0;
              }
              uVar24 = (ushort)((uVar85 >> 0x1f) << 0xf) | uVar24 | 0x7c00;
            }
            lVar34 = lVar34 + 0xb8;
            *(ushort *)((long)*local_60 + (ulong)(uVar48 + 1) * 2) = uVar24;
            uVar48 = uVar48 + 2;
          } while (lVar42 + (ulong)uVar51 * 0xb8 + lVar52 != lVar34);
        }
        break;
      case 3:
        local_60 = (undefined1 (*) [16])0x0;
        CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_60,(long)(iVar5 * 8))
        ;
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_60);
        uVar19 = _LC207;
        uVar6 = _LC206;
        uVar22 = _LC202;
        uVar21 = _LC201;
        iVar45 = _LC199._4_4_;
        iVar46 = (int)_LC199;
        uVar49 = _LC196;
        uVar40 = _LC195;
        iVar25 = *(int *)(in_RSI + 0x198);
        if (iVar25 != 0) {
          puVar43 = (ulong *)(*(long *)(in_RSI + 0x1a0) + 0x48 + lVar52);
          iVar26 = 0;
          do {
            uVar3 = *puVar43;
            uVar4 = puVar43[1];
            uVar51 = iVar26 * 4;
            iVar26 = iVar26 + 1;
            puVar43 = puVar43 + 0x17;
            auVar65._0_2_ = (ushort)(uVar3 >> 0x10) >> 0xf;
            iVar62 = (int)(uVar3 & uVar49);
            iVar64 = (int)((uVar3 & uVar49) >> 0x20);
            auVar65._6_2_ = (ushort)(uVar4 >> 0x3f);
            auVar65._4_2_ = (ushort)(uVar4 >> 0x10) >> 0xf;
            auVar65._2_2_ = (ushort)(uVar3 >> 0x3f);
            auVar65._8_8_ = 0;
            uVar3 = uVar3 & uVar40;
            auVar65 = psllw(auVar65,0xf);
            uVar12 = uVar4 & uVar40;
            iVar84 = (int)uVar6;
            iVar67 = (int)((ulong)uVar6 >> 0x20);
            iVar99 = (int)(uVar4 & uVar49);
            iVar101 = (int)((uVar4 & uVar49) >> 0x20);
            iVar89 = -(uint)(iVar62 - (int)_LC198 <= iVar84);
            iVar98 = -(uint)(iVar64 - _LC198._4_4_ <= iVar67);
            auVar90._0_8_ = CONCAT44(iVar98,iVar89);
            auVar90._8_4_ = 0xffffffff;
            iVar69 = -(uint)(iVar99 - (int)_LC198 <= iVar84);
            iVar84 = -(uint)(iVar101 - _LC198._4_4_ <= iVar67);
            uVar86 = (undefined2)((uint)iVar84 >> 0x10);
            uVar106 = (undefined2)((uint)iVar98 >> 0x10);
            uVar83 = (undefined2)iVar84;
            uVar66 = (undefined2)((uint)iVar69 >> 0x10);
            auVar93._12_2_ = uVar106;
            auVar93._0_12_ = auVar90;
            auVar93._14_2_ = uVar86;
            auVar92._12_4_ = auVar93._12_4_;
            auVar92._10_2_ = uVar83;
            auVar92._0_10_ = auVar90._0_10_;
            auVar91._10_6_ = auVar92._10_6_;
            auVar91._8_2_ = (short)iVar98;
            auVar91._0_8_ = auVar90._0_8_;
            auVar13._2_8_ = auVar91._8_8_;
            auVar13._0_2_ = uVar66;
            auVar13._10_6_ = 0;
            auVar88._12_4_ = 0;
            auVar88._0_12_ = SUB1612(auVar13 << 0x30,4);
            auVar88 = auVar88 << 0x20;
            auVar68._0_4_ = -(uint)(iVar99 == (int)uVar49);
            iVar84 = (int)(uVar49 >> 0x20);
            auVar68._4_4_ = -(uint)(iVar101 == iVar84);
            auVar68._8_4_ = 0xffffffff;
            auVar68._12_4_ = 0xffffffff;
            uVar48 = iVar99 + iVar46;
            uVar85 = iVar101 + iVar45;
            auVar97._0_12_ = auVar88._0_12_;
            auVar97._12_2_ = uVar66;
            auVar97._14_2_ = uVar86;
            auVar96._12_4_ = auVar97._12_4_;
            auVar96._0_10_ = auVar88._0_10_;
            auVar96._10_2_ = uVar106;
            auVar95._10_6_ = auVar96._10_6_;
            auVar95._0_8_ = auVar88._0_8_;
            auVar95._8_2_ = (short)((uint)iVar89 >> 0x10);
            auVar94._8_8_ = auVar95._8_8_;
            auVar94._6_2_ = uVar83;
            auVar94._4_2_ = (short)iVar69;
            auVar94._2_2_ = (short)iVar98;
            auVar94._0_2_ = (short)iVar89;
            uVar102 = iVar62 + iVar46;
            uVar53 = iVar64 + iVar45;
            auVar107._0_4_ = -(uint)(iVar62 == (int)uVar49);
            auVar107._4_4_ = -(uint)(iVar64 == iVar84);
            auVar107._8_4_ = 0xffffffff;
            auVar107._12_4_ = 0xffffffff;
            uVar66 = (undefined2)(uVar85 >> 0xd);
            uVar83 = (undefined2)(uVar53 >> 0xd);
            uVar24 = (ushort)(uVar48 >> 0x1d);
            auVar103._0_2_ = (undefined2)(uVar102 >> 0xd);
            auVar14._12_4_ = 0;
            auVar14._0_12_ = SUB1612(ZEXT616(CONCAT42(CONCAT22(uVar66,uVar83),uVar24)) << 0x30,4);
            uVar41 = (uint)(uVar3 >> 0x20);
            auVar105._0_12_ = SUB1612(auVar14 << 0x20,0);
            auVar105._12_2_ = uVar24;
            auVar105._14_2_ = (ushort)(uVar85 >> 0x1d);
            auVar104._12_4_ = auVar105._12_4_;
            auVar104._0_10_ = SUB1610(auVar14 << 0x20,0);
            auVar104._10_2_ = (ushort)(uVar53 >> 0x1d);
            auVar103._10_6_ = auVar104._10_6_;
            auVar103._8_2_ = (ushort)(uVar102 >> 0x1d);
            auVar103._6_2_ = uVar66;
            auVar103._4_2_ = (short)(uVar48 >> 0xd);
            auVar103._2_2_ = uVar83;
            uVar48 = (uint)(uVar12 >> 0x20);
            uVar83 = (undefined2)(uVar48 >> 0xd);
            uVar66 = (undefined2)(uVar41 >> 0xd);
            uVar24 = (ushort)(uVar12 >> 0x10) >> 0xd;
            auVar15._12_4_ = 0;
            auVar15._0_12_ = SUB1612(ZEXT616(CONCAT42(CONCAT22(uVar83,uVar66),uVar24)) << 0x30,4);
            auVar72._0_12_ = SUB1612(auVar15 << 0x20,0);
            auVar72._12_2_ = uVar24;
            auVar72._14_2_ = (ushort)(uVar12 >> 0x3d);
            auVar71._12_4_ = auVar72._12_4_;
            auVar71._0_10_ = SUB1610(auVar15 << 0x20,0);
            auVar71._10_2_ = (ushort)(uVar3 >> 0x3d);
            auVar70._10_6_ = auVar71._10_6_;
            auVar70._8_2_ = (ushort)(uVar3 >> 0x10) >> 0xd;
            auVar70._6_2_ = uVar83;
            auVar70._4_2_ = (short)((uint)uVar12 >> 0xd);
            auVar70._2_2_ = uVar66;
            auVar70._0_2_ = (short)((uint)uVar3 >> 0xd);
            auVar87._0_4_ = -(uint)((uint)uVar12 != 0);
            auVar87._4_4_ = -(uint)(uVar48 != 0);
            auVar87._8_8_ = 0;
            iVar84 = (int)uVar19;
            iVar62 = -(uint)(iVar84 < iVar62 - (int)_LC198);
            iVar67 = (int)((ulong)uVar19 >> 0x20);
            iVar64 = -(uint)(iVar67 < iVar64 - _LC198._4_4_);
            auVar63._0_8_ = CONCAT44(iVar64,iVar62);
            auVar63._8_4_ = 0;
            auVar74._12_4_ = 0;
            auVar74._0_12_ = auVar63;
            auVar100._0_4_ = -(uint)(iVar84 < iVar99 - (int)_LC198);
            auVar100._4_4_ = -(uint)(iVar67 < iVar101 - _LC198._4_4_);
            auVar100._8_8_ = 0;
            auVar88 = auVar87 & auVar68 & auVar100;
            uVar86 = (undefined2)((uint)auVar100._4_4_ >> 0x10);
            uVar66 = (undefined2)((uint)iVar64 >> 0x10);
            auVar56._8_2_ = 0;
            auVar56._0_8_ = auVar63._0_8_;
            uVar83 = (undefined2)((uint)auVar100._0_4_ >> 0x10);
            auVar73._0_4_ = -(uint)((uint)uVar3 != 0);
            auVar73._4_4_ = -(uint)(uVar41 != 0);
            auVar73._8_8_ = 0;
            auVar74 = auVar73 & auVar107 & auVar74;
            auVar78._0_12_ = auVar74._0_12_;
            auVar78._12_2_ = auVar74._6_2_;
            auVar78._14_2_ = auVar88._6_2_;
            auVar77._12_4_ = auVar78._12_4_;
            auVar77._0_10_ = auVar74._0_10_;
            auVar77._10_2_ = auVar88._4_2_;
            auVar76._10_6_ = auVar77._10_6_;
            auVar76._0_8_ = auVar74._0_8_;
            auVar76._8_2_ = auVar74._4_2_;
            auVar16._2_8_ = auVar76._8_8_;
            auVar16._0_2_ = auVar88._2_2_;
            auVar16._10_6_ = 0;
            auVar79._0_2_ = auVar74._0_2_;
            auVar75._12_4_ = 0;
            auVar75._0_12_ = SUB1612(auVar16 << 0x30,4);
            auVar75 = auVar75 << 0x20;
            auVar82._0_12_ = auVar75._0_12_;
            auVar82._12_2_ = auVar88._2_2_;
            auVar82._14_2_ = auVar88._6_2_;
            auVar81._12_4_ = auVar82._12_4_;
            auVar81._0_10_ = auVar75._0_10_;
            auVar81._10_2_ = auVar74._6_2_;
            auVar80._10_6_ = auVar81._10_6_;
            auVar80._0_8_ = auVar75._0_8_;
            auVar80._8_2_ = auVar74._2_2_;
            auVar79._8_8_ = auVar80._8_8_;
            auVar79._6_2_ = auVar88._4_2_;
            auVar79._4_2_ = auVar88._0_2_;
            auVar79._2_2_ = auVar74._4_2_;
            auVar57._12_2_ = uVar66;
            auVar57._0_12_ = auVar63;
            auVar57._14_2_ = uVar86;
            auVar56._12_4_ = auVar57._12_4_;
            auVar56._10_2_ = (short)auVar100._4_4_;
            auVar55._10_6_ = auVar56._10_6_;
            auVar55._8_2_ = (short)iVar64;
            auVar55._0_8_ = auVar63._0_8_;
            auVar17._2_8_ = auVar55._8_8_;
            auVar17._0_2_ = uVar83;
            auVar17._10_6_ = 0;
            auVar54._12_4_ = 0;
            auVar54._0_12_ = SUB1612(auVar17 << 0x30,4);
            auVar54 = auVar54 << 0x20;
            auVar61._0_12_ = auVar54._0_12_;
            auVar61._12_2_ = uVar83;
            auVar61._14_2_ = uVar86;
            auVar60._12_4_ = auVar61._12_4_;
            auVar60._0_10_ = auVar54._0_10_;
            auVar60._10_2_ = uVar66;
            auVar59._10_6_ = auVar60._10_6_;
            auVar59._0_8_ = auVar54._0_8_;
            auVar59._8_2_ = (short)((uint)iVar62 >> 0x10);
            auVar58._8_8_ = auVar59._8_8_;
            auVar58._6_2_ = (short)auVar100._4_4_;
            auVar58._4_2_ = (short)auVar100._0_4_;
            auVar58._2_2_ = (short)iVar64;
            auVar58._0_2_ = (short)iVar62;
            *(ulong *)((long)*local_60 + (ulong)uVar51 * 2) =
                 ~auVar58._0_8_ & ~auVar94._0_8_ & (auVar103._0_8_ | auVar70._0_8_ | auVar65._0_8_)
                 | (auVar65._0_8_ | uVar22 | auVar79._0_8_ & uVar21) & auVar58._0_8_;
          } while (iVar26 != iVar25);
        }
        break;
      case 4:
        local_60 = (undefined1 (*) [16])0x0;
        CowData<float>::resize<false>((CowData<float> *)&local_60,(long)iVar5);
        CowData<float>::_copy_on_write((CowData<float> *)&local_60);
        uVar51 = *(uint *)(in_RSI + 0x198);
        if (uVar51 != 0) {
          lVar34 = *(long *)(in_RSI + 0x1a0) + lVar52;
          pauVar31 = local_60;
          do {
            puVar36 = (undefined4 *)(lVar34 + 0x48);
            pauVar37 = (undefined1 (*) [16])((long)*pauVar31 + 4);
            lVar34 = lVar34 + 0xb8;
            *(undefined4 *)*pauVar31 = *puVar36;
            pauVar31 = pauVar37;
          } while (pauVar37 != (undefined1 (*) [16])((long)*local_60 + (ulong)uVar51 * 4));
        }
        goto LAB_0010b99c;
      case 5:
        local_60 = (undefined1 (*) [16])0x0;
        CowData<float>::resize<false>((CowData<float> *)&local_60,(long)(iVar5 * 2));
        CowData<float>::_copy_on_write((CowData<float> *)&local_60);
        uVar51 = *(uint *)(in_RSI + 0x198);
        if (uVar51 != 0) {
          lVar34 = *(long *)(in_RSI + 0x1a0);
          uVar48 = 0;
          lVar42 = lVar34 + lVar52;
          do {
            lVar39 = lVar42 + 0xb8;
            *(undefined4 *)((long)*local_60 + (ulong)uVar48 * 4) = *(undefined4 *)(lVar42 + 0x48);
            uVar85 = uVar48 + 1;
            uVar48 = uVar48 + 2;
            *(undefined4 *)((long)*local_60 + (ulong)uVar85 * 4) = *(undefined4 *)(lVar42 + 0x4c);
            lVar42 = lVar39;
          } while (lVar39 != lVar34 + (ulong)uVar51 * 0xb8 + lVar52);
        }
        goto LAB_0010b99c;
      case 6:
        local_60 = (undefined1 (*) [16])0x0;
        CowData<float>::resize<false>((CowData<float> *)&local_60,(long)(iVar5 * 3));
        CowData<float>::_copy_on_write((CowData<float> *)&local_60);
        iVar25 = *(int *)(in_RSI + 0x198);
        if (iVar25 != 0) {
          uVar51 = 1;
          lVar34 = *(long *)(in_RSI + 0x1a0) + lVar52;
          do {
            *(undefined4 *)((long)*local_60 + (ulong)(uVar51 - 1) * 4) =
                 *(undefined4 *)(lVar34 + 0x48);
            *(undefined4 *)((long)*local_60 + (ulong)uVar51 * 4) = *(undefined4 *)(lVar34 + 0x4c);
            uVar48 = uVar51 + 1;
            uVar51 = uVar51 + 3;
            *(undefined4 *)((long)*local_60 + (ulong)uVar48 * 4) = *(undefined4 *)(lVar34 + 0x50);
            lVar34 = lVar34 + 0xb8;
          } while (iVar25 * 3 + 1U != uVar51);
        }
        goto LAB_0010b99c;
      case 7:
        local_60 = (undefined1 (*) [16])0x0;
        CowData<float>::resize<false>((CowData<float> *)&local_60,(long)(iVar5 * 4));
        CowData<float>::_copy_on_write((CowData<float> *)&local_60);
        uVar51 = *(uint *)(in_RSI + 0x198);
        if (uVar51 != 0) {
          lVar34 = *(long *)(in_RSI + 0x1a0);
          uVar48 = 0;
          lVar42 = lVar34 + lVar52;
          do {
            lVar39 = lVar42 + 0xb8;
            *(undefined4 *)((long)*local_60 + (ulong)uVar48 * 4) = *(undefined4 *)(lVar42 + 0x48);
            *(undefined4 *)((long)*local_60 + (ulong)(uVar48 + 1) * 4) =
                 *(undefined4 *)(lVar42 + 0x4c);
            *(undefined4 *)((long)*local_60 + (ulong)(uVar48 + 2) * 4) =
                 *(undefined4 *)(lVar42 + 0x50);
            uVar85 = uVar48 + 3;
            uVar48 = uVar48 + 4;
            *(undefined4 *)((long)*local_60 + (ulong)uVar85 * 4) = *(undefined4 *)(lVar42 + 0x54);
            lVar42 = lVar39;
          } while (lVar34 + (ulong)uVar51 * 0xb8 + lVar52 != lVar39);
        }
LAB_0010b99c:
        Variant::Variant((Variant *)local_58,(Vector *)&local_68);
        pVVar38 = (Variant *)Array::operator[](iVar47);
        Variant::operator=(pVVar38,(Variant *)local_58);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
LAB_0010ae6f:
        CowData<float>::_unref((CowData<float> *)&local_60);
switchD_0010aeb3_default:
        goto joined_r0x0010b1fd;
      default:
        goto switchD_0010aeb3_default;
      }
      Variant::Variant((Variant *)local_58,(Vector *)&local_68);
      pVVar38 = (Variant *)Array::operator[](iVar47);
      Variant::operator=(pVVar38,(Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_60);
      break;
    case 10:
      local_70 = (undefined4 *)0x0;
      iVar25 = (uint)(*(int *)(in_RSI + 0x21c) == 1) * 4;
      iVar46 = iVar25 + 4;
      CowData<int>::resize<false>((CowData<int> *)&local_70,(long)(iVar5 * iVar46));
      CowData<int>::_copy_on_write((CowData<int> *)&local_70);
      if ((local_70 != (undefined4 *)0x0) && (uVar40 = *(ulong *)(local_70 + -2), 0 < (long)uVar40))
      {
        puVar36 = local_70;
        if ((uVar40 & 1) != 0) {
          puVar36 = local_70 + 1;
          *local_70 = 0;
          if (puVar36 == local_70 + uVar40) goto LAB_0010b516;
        }
        do {
          *puVar36 = 0;
          puVar35 = puVar36 + 2;
          puVar36[1] = 0;
          puVar36 = puVar35;
        } while (puVar35 != local_70 + uVar40);
      }
LAB_0010b516:
      iVar45 = 0;
      CowData<int>::_copy_on_write((CowData<int> *)&local_70);
      puVar36 = local_70;
      lVar34 = 0;
      uVar51 = 0;
      if (*(int *)(in_RSI + 0x198) != 0) {
        do {
          lVar42 = *(long *)(*(long *)(in_RSI + 0x1a0) + 0xa0 + lVar34);
          if (lVar42 == 0) {
            lVar39 = 0;
LAB_0010b580:
            if (commit_to_arrays()::first_print != '\0') {
              local_68 = "Invalid bones size %d vs count %d";
              local_80 = 0;
              local_60 = (undefined1 (*) [16])0x21;
              String::parse_latin1((StrRange *)&local_80);
              vformat<long,int>((String *)&local_68,(long)&local_80,(int)lVar39);
              _err_print_error("commit_to_arrays","scene/resources/surface_tool.cpp",0x290,
                               (String *)&local_68);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
              commit_to_arrays()::first_print = '\0';
            }
          }
          else {
            lVar39 = *(long *)(lVar42 + -8);
            if (iVar46 != lVar39) goto LAB_0010b580;
            uVar40 = 0;
            while (puVar36[(uint)(iVar45 + (int)uVar40)] = *(undefined4 *)(lVar42 + uVar40 * 4),
                  iVar25 + 3 != uVar40) {
              uVar40 = uVar40 + 1;
              if (lVar39 <= (long)uVar40) {
LAB_0010b64c:
                _err_print_index_error
                          ("get","./core/templates/cowdata.h",0xdb,uVar40,4,"p_index","size()","",
                           false,true);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar7 = (code *)invalidInstructionException();
                (*pcVar7)();
              }
            }
          }
          uVar51 = uVar51 + 1;
          lVar34 = lVar34 + 0xb8;
          iVar45 = iVar45 + iVar46;
        } while (uVar51 < *(uint *)(in_RSI + 0x198));
      }
      Variant::Variant((Variant *)local_58,local_78);
      pVVar38 = (Variant *)Array::operator[](iVar47);
      Variant::operator=(pVVar38,(Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<int>::_unref((CowData<int> *)&local_70);
      break;
    case 0xb:
      local_70 = (undefined4 *)0x0;
      iVar25 = (uint)(*(int *)(in_RSI + 0x21c) == 1) * 4;
      iVar46 = iVar25 + 4;
      CowData<float>::resize<false>((CowData<float> *)&local_70,(long)(iVar5 * iVar46));
      CowData<float>::_copy_on_write((CowData<float> *)&local_70);
      if ((local_70 != (undefined4 *)0x0) && (uVar40 = *(ulong *)(local_70 + -2), 0 < (long)uVar40))
      {
        puVar36 = local_70;
        if ((uVar40 & 1) != 0) {
          puVar36 = local_70 + 1;
          *local_70 = 0;
          if (local_70 + uVar40 == puVar36) goto LAB_0010b386;
        }
        do {
          *puVar36 = 0;
          puVar35 = puVar36 + 2;
          puVar36[1] = 0;
          puVar36 = puVar35;
        } while (local_70 + uVar40 != puVar35);
      }
LAB_0010b386:
      iVar45 = 0;
      CowData<float>::_copy_on_write((CowData<float> *)&local_70);
      puVar36 = local_70;
      lVar34 = 0;
      uVar51 = 0;
      if (*(int *)(in_RSI + 0x198) != 0) {
        do {
          lVar42 = *(long *)(*(long *)(in_RSI + 0x1a0) + 0xb0 + lVar34);
          if (lVar42 == 0) {
            lVar39 = 0;
LAB_0010b3f0:
            if (commit_to_arrays()::first_print != '\0') {
              local_68 = "Invalid weight size %d vs count %d";
              local_80 = 0;
              local_60 = (undefined1 (*) [16])0x22;
              String::parse_latin1((StrRange *)&local_80);
              vformat<long,int>((String *)&local_68,(long)&local_80,(int)lVar39);
              _err_print_error("commit_to_arrays","scene/resources/surface_tool.cpp",0x2a8,
                               (String *)&local_68);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
              commit_to_arrays()::first_print = '\0';
            }
          }
          else {
            lVar39 = *(long *)(lVar42 + -8);
            if (iVar46 != lVar39) goto LAB_0010b3f0;
            uVar40 = 0;
            while (puVar36[(uint)(iVar45 + (int)uVar40)] = *(undefined4 *)(lVar42 + uVar40 * 4),
                  iVar25 + 3 != uVar40) {
              uVar40 = uVar40 + 1;
              if (lVar39 <= (long)uVar40) goto LAB_0010b64c;
            }
          }
          uVar51 = uVar51 + 1;
          lVar34 = lVar34 + 0xb8;
          iVar45 = iVar45 + iVar46;
        } while (uVar51 < *(uint *)(in_RSI + 0x198));
      }
      Variant::Variant((Variant *)local_58,local_78);
      pVVar38 = (Variant *)Array::operator[](iVar47);
      Variant::operator=(pVVar38,(Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<float>::_unref((CowData<float> *)&local_70);
      break;
    case 0xc:
      if (*(uint *)(in_RSI + 0x1a8) == 0) {
        _err_print_error("commit_to_arrays","scene/resources/surface_tool.cpp",0x2b5,
                         "Condition \"index_array.is_empty()\" is true. Continuing.",0,0);
      }
      else {
        local_60 = (undefined1 (*) [16])0x0;
        CowData<int>::resize<false>((CowData<int> *)&local_60,(ulong)*(uint *)(in_RSI + 0x1a8));
        CowData<int>::_copy_on_write((CowData<int> *)&local_60);
        if (*(int *)(in_RSI + 0x1a8) != 0) {
          lVar52 = *(long *)(in_RSI + 0x1b0);
          lVar34 = 0;
          do {
            *(undefined4 *)((long)*local_60 + lVar34 * 4) = *(undefined4 *)(lVar52 + lVar34 * 4);
            lVar34 = lVar34 + 1;
          } while ((uint)lVar34 < *(uint *)(in_RSI + 0x1a8));
        }
        Variant::Variant((Variant *)local_58,(Vector *)&local_68);
        pVVar38 = (Variant *)Array::operator[](iVar47);
        if (pVVar38 == (Variant *)local_58) {
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        else {
          if (Variant::needs_deinit[*(int *)pVVar38] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar38 = 0;
          *(int *)pVVar38 = local_58[0];
          *(undefined8 *)(pVVar38 + 8) = local_50;
          *(undefined8 *)(pVVar38 + 0x10) = uStack_48;
        }
        CowData<int>::_unref((CowData<int> *)&local_60);
      }
      goto LAB_0010b2d3;
    }
joined_r0x0010b1fd:
    uVar50 = uVar50 + 1;
    lVar52 = lVar52 + 0x10;
  } while (lVar52 != 0x70);
LAB_0010b2d3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return in_RDI;
}



/* SurfaceTool::commit(Ref<ArrayMesh> const&, unsigned long) */

Ref * SurfaceTool::commit(Ref *param_1,ulong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  ArrayMesh *this;
  ulong in_RCX;
  long *in_RDX;
  long lVar5;
  ulong uVar6;
  Object *pOVar7;
  Object *pOVar8;
  long in_FS_OFFSET;
  Array local_80 [8];
  Array local_78 [8];
  Dictionary local_70 [8];
  Array local_68 [8];
  long local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)param_1 = 0;
  if (*in_RDX != 0) {
    *(long *)param_1 = *in_RDX;
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      *(undefined8 *)param_1 = 0;
    }
    goto LAB_0010c6d4;
  }
  this = (ArrayMesh *)operator_new(0x430,"");
  ArrayMesh::ArrayMesh(this);
  postinitialize_handler((Object *)this);
  cVar3 = RefCounted::init_ref();
  if (cVar3 == '\0') {
    pOVar8 = *(Object **)param_1;
    if (pOVar8 == (Object *)0x0) goto LAB_0010c6d4;
    *(undefined8 *)param_1 = 0;
    cVar3 = RefCounted::unreference();
    if (cVar3 == '\0') goto LAB_0010c6d4;
    cVar3 = predelete_handler(pOVar8);
    this = (ArrayMesh *)0x0;
    if (cVar3 == '\0') goto LAB_0010c6d4;
LAB_0010c98d:
    (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
    Memory::free_static(pOVar8,false);
    pOVar7 = (Object *)this;
    if (this == (ArrayMesh *)0x0) goto LAB_0010c6d4;
  }
  else {
    pOVar8 = *(Object **)param_1;
    pOVar7 = pOVar8;
    if (this != (ArrayMesh *)pOVar8) {
      *(ArrayMesh **)param_1 = this;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)param_1 = 0;
      }
      pOVar7 = (Object *)this;
      if (((pOVar8 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
         (cVar3 = predelete_handler(pOVar8), cVar3 != '\0')) goto LAB_0010c98d;
    }
  }
  cVar3 = RefCounted::unreference();
  if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar7), cVar3 != '\0')) {
    (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
    Memory::free_static(pOVar7,false);
  }
LAB_0010c6d4:
  if (*(int *)(param_2 + 0x198) != 0) {
    uVar6 = in_RCX & 0xfffffffffe000000;
    uVar4 = (**(code **)(**(long **)param_1 + 0x1c8))();
    commit_to_arrays();
    lVar5 = 0;
    do {
      uVar1 = *(uint *)(param_2 + 0x260 + lVar5);
      if (uVar1 != 8) {
        uVar6 = uVar6 | (ulong)uVar1 <<
                        ((byte)*(undefined8 *)
                                ((long)&commit(Ref<ArrayMesh>const&,unsigned_long)::shift +
                                lVar5 * 2) & 0x3f);
      }
      lVar5 = lVar5 + 4;
    } while (lVar5 != 0x10);
    uVar2 = *(undefined8 *)param_1;
    Dictionary::Dictionary(local_70);
    Array::Array(local_78);
    Array::Array(local_68);
    local_58 = 0;
    local_60 = 0;
    local_50 = (undefined1  [16])0x0;
    Array::set_typed((uint)local_68,(StringName *)0x1c,(Variant *)&local_60);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    cVar3 = Array::is_same_typed(local_68);
    if (cVar3 == '\0') {
      Array::assign(local_68);
    }
    else {
      Array::_ref(local_68);
    }
    ArrayMesh::add_surface_from_arrays
              (uVar2,*(undefined4 *)(param_2 + 0x180),local_80,local_68,local_70,uVar6);
    Array::~Array(local_68);
    Array::~Array(local_78);
    Dictionary::~Dictionary(local_70);
    if (*(long *)(param_2 + 400) != 0) {
      (**(code **)(**(long **)param_1 + 0x208))(*(long **)param_1,uVar4,param_2 + 400);
    }
    Array::~Array(local_80);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* SurfaceTool::index() [clone .part.0] */

void __thiscall SurfaceTool::index(SurfaceTool *this)

{
  ulong *puVar1;
  uint *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  Vertex *pVVar12;
  ulong uVar13;
  void *pvVar14;
  Vertex *pVVar15;
  Vertex *pVVar16;
  undefined8 *puVar17;
  byte *pbVar18;
  int *piVar19;
  uint uVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  int *piVar24;
  uint uVar25;
  uint uVar26;
  Vertex *pVVar27;
  Vertex *pVVar28;
  long in_FS_OFFSET;
  undefined8 uVar29;
  uint local_74;
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  uVar10 = *(uint *)(this + 0x198);
  pVVar28 = *(Vertex **)(this + 0x1a0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (undefined1  [16])0x0;
  uVar9 = 4;
  if (3 < uVar10) {
    uVar9 = uVar10;
  }
  uVar9 = uVar9 - 1 | uVar9 - 1 >> 1;
  uVar9 = uVar9 | uVar9 >> 2;
  uVar9 = uVar9 | uVar9 >> 4;
  uVar9 = uVar9 | uVar9 >> 8;
  local_48 = (ulong)(uVar9 | uVar9 >> 0x10);
  pVVar12 = pVVar28 + (ulong)uVar10 * 0xb8;
  if (pVVar28 == pVVar12) {
    LocalVector<SurfaceTool::Vertex,unsigned_int,false,false>::resize
              ((LocalVector<SurfaceTool::Vertex,unsigned_int,false,false> *)(this + 0x198),0);
    *(ulong *)(this + 0x188) = *(ulong *)(this + 0x188) | 0x1000;
  }
  else {
    local_74 = 0;
    pVVar27 = pVVar28 + 0x94;
    pvVar14 = (void *)0x0;
    do {
      if (pvVar14 == (void *)0x0) {
LAB_0010cc84:
        uVar10 = local_48._4_4_;
        uVar9 = *(uint *)(this + 0x198);
        if (uVar9 <= local_74) goto LAB_0010d146;
        uVar29 = *(undefined8 *)(pVVar28 + 4);
        uVar7 = *(undefined8 *)(pVVar28 + 0xc);
        piVar24 = (int *)(*(long *)(this + 0x1a0) + (ulong)local_74 * 0xb8);
        *piVar24 = *(int *)pVVar28;
        uVar4 = *(undefined8 *)(pVVar28 + 0x14);
        *(undefined8 *)(piVar24 + 1) = uVar29;
        *(undefined8 *)(piVar24 + 3) = uVar7;
        uVar29 = *(undefined8 *)(pVVar28 + 0x48);
        uVar7 = *(undefined8 *)(pVVar28 + 0x50);
        *(undefined8 *)(piVar24 + 5) = uVar4;
        piVar24[7] = *(int *)(pVVar28 + 0x1c);
        *(undefined8 *)(piVar24 + 8) = *(undefined8 *)(pVVar28 + 0x20);
        piVar24[10] = *(int *)(pVVar28 + 0x28);
        *(undefined8 *)(piVar24 + 0xb) = *(undefined8 *)(pVVar28 + 0x2c);
        piVar24[0xd] = *(int *)(pVVar28 + 0x34);
        *(undefined8 *)(piVar24 + 0xe) = *(undefined8 *)(pVVar28 + 0x38);
        uVar4 = *(undefined8 *)(pVVar28 + 0x40);
        *(undefined8 *)(piVar24 + 0x12) = uVar29;
        *(undefined8 *)(piVar24 + 0x14) = uVar7;
        uVar29 = *(undefined8 *)(pVVar28 + 0x58);
        uVar7 = *(undefined8 *)(pVVar28 + 0x60);
        *(undefined8 *)(piVar24 + 0x10) = uVar4;
        uVar4 = *(undefined8 *)(pVVar28 + 0x88);
        *(undefined8 *)(piVar24 + 0x16) = uVar29;
        *(undefined8 *)(piVar24 + 0x18) = uVar7;
        uVar29 = *(undefined8 *)(pVVar28 + 0x70);
        *(undefined8 *)(piVar24 + 0x1a) = *(undefined8 *)(pVVar28 + 0x68);
        *(undefined8 *)(piVar24 + 0x1c) = uVar29;
        uVar29 = *(undefined8 *)(pVVar28 + 0x78);
        uVar7 = *(undefined8 *)(pVVar28 + 0x80);
        *(undefined8 *)(piVar24 + 0x22) = uVar4;
        *(undefined8 *)(piVar24 + 0x1e) = uVar29;
        *(undefined8 *)(piVar24 + 0x20) = uVar7;
        pbVar23 = *(byte **)(piVar24 + 0x28);
        piVar24[0x24] = *(int *)(pVVar28 + 0x90);
        if (pbVar23 == *(byte **)(pVVar28 + 0xa0)) {
          pbVar18 = *(byte **)(pVVar28 + 0xb0);
          if (*(byte **)(piVar24 + 0x2c) != pbVar18) goto LAB_0010cd8b;
          if (pbVar23 != (byte *)0x0) goto LAB_0010cde5;
          goto LAB_0010d11d;
        }
        CowData<int>::_ref((CowData<int> *)(piVar24 + 0x28),(CowData *)(pVVar28 + 0xa0));
        if (*(long *)(piVar24 + 0x2c) != *(long *)(pVVar28 + 0xb0)) {
LAB_0010cd8b:
          CowData<float>::_ref((CowData<float> *)(piVar24 + 0x2c),(CowData *)(pVVar28 + 0xb0));
        }
        uVar9 = *(uint *)(this + 0x198);
        if (uVar9 <= local_74) {
LAB_0010d146:
          _err_print_index_error
                    ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)local_74,
                     (ulong)uVar9,"p_index","count","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        piVar24 = (int *)((ulong)local_74 * 0xb8 + *(long *)(this + 0x1a0));
        pbVar23 = *(byte **)(piVar24 + 0x28);
        pbVar18 = *(byte **)(piVar24 + 0x2c);
        if (pbVar23 == (byte *)0x0) {
LAB_0010d11d:
          uVar9 = 0x1505;
        }
        else {
LAB_0010cde5:
          if (*(int *)(pbVar23 + -8) << 2 < 1) goto LAB_0010d11d;
          uVar9 = 0x1505;
          pbVar21 = pbVar23;
          do {
            pbVar22 = pbVar21 + 1;
            uVar9 = uVar9 * 0x21 ^ (uint)*pbVar21;
            pbVar21 = pbVar22;
          } while (pbVar23 + (ulong)(*(int *)(pbVar23 + -8) * 4 - 1) + 1 != pbVar22);
        }
        if ((pbVar18 != (byte *)0x0) && (0 < *(int *)(pbVar18 + -8) * 4)) {
          pbVar23 = pbVar18;
          do {
            pbVar21 = pbVar23 + 1;
            uVar9 = uVar9 * 0x21 ^ (uint)*pbVar23;
            pbVar23 = pbVar21;
          } while (pbVar21 != pbVar18 + (ulong)(*(int *)(pbVar18 + -8) * 4 - 1) + 1);
        }
        piVar19 = piVar24;
        do {
          iVar3 = *piVar19;
          piVar19 = piVar19 + 1;
          uVar9 = (iVar3 * 0x16a88000 | (uint)(iVar3 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar9;
          uVar9 = (uVar9 << 0xd | uVar9 >> 0x13) * 5 + 0xe6546b64;
        } while (piVar19 != piVar24 + 0x25);
        uVar26 = (uint)local_48;
        uVar11 = (uint)local_48 + 1;
        uVar9 = (uVar9 >> 0x10 ^ uVar9 ^ 0x94) * -0x7a143595;
        uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
        uVar13 = (ulong)(uVar9 ^ uVar9 >> 0x10);
        if (uVar9 == uVar9 >> 0x10) {
          uVar13 = 1;
        }
        if (pvVar14 == (void *)0x0) {
          pvVar14 = (void *)Memory::alloc_static((ulong)uVar11 << 3,false);
          local_58._8_8_ = pvVar14;
          local_58._0_8_ = Memory::alloc_static((ulong)((uVar11 >> 2 ^ uVar26) + 1) << 4,false);
          memset(pvVar14,0,(ulong)uVar11 << 3);
        }
        uVar9 = uVar10;
        if ((uVar11 >> 2 ^ uVar26) < uVar10) {
          AHashMap<SurfaceTool::Vertex&,int,SurfaceTool::VertexHasher,HashMapComparatorDefault<SurfaceTool::Vertex&>>
          ::_resize_and_rehash
                    ((AHashMap<SurfaceTool::Vertex&,int,SurfaceTool::VertexHasher,HashMapComparatorDefault<SurfaceTool::Vertex&>>
                      *)local_58,uVar26 * 2);
          uVar26 = (uint)local_48;
          uVar9 = local_48._4_4_;
        }
        puVar17 = (undefined8 *)((ulong)uVar9 * 0x10 + local_58._0_8_);
        *puVar17 = piVar24;
        *(uint *)(puVar17 + 1) = uVar10;
        uVar11 = (uint)uVar13 & uVar26;
        puVar1 = (ulong *)(local_58._8_8_ + (ulong)uVar11 * 8);
        if (*puVar1 == 0) {
          *puVar1 = (ulong)uVar9 << 0x20 | uVar13;
        }
        else {
          uVar25 = 1;
          uVar11 = uVar11 + 1 & uVar26;
          puVar2 = (uint *)(local_58._8_8_ + (ulong)uVar11 * 8);
          lVar5 = *(long *)puVar2;
          uVar4 = CONCAT44(uVar9,(uint)uVar13);
          while (lVar5 != 0) {
            uVar20 = (uVar11 + uVar26 + 1) - (*puVar2 & uVar26) & uVar26;
            uVar29 = uVar4;
            if (uVar20 < uVar25) {
              uVar29 = *(undefined8 *)puVar2;
              *(undefined8 *)puVar2 = uVar4;
              uVar25 = uVar20;
            }
            uVar25 = uVar25 + 1;
            uVar11 = uVar11 + 1 & uVar26;
            puVar2 = (uint *)(local_58._8_8_ + (ulong)uVar11 * 8);
            uVar4 = uVar29;
            lVar5 = *(long *)puVar2;
          }
          *(undefined8 *)puVar2 = uVar4;
        }
        local_74 = local_74 + 1;
        local_48 = CONCAT44(uVar9 + 1,(uint)local_48);
      }
      else {
        pbVar23 = *(byte **)(pVVar28 + 0xa0);
        if ((pbVar23 == (byte *)0x0) || (*(int *)(pbVar23 + -8) << 2 < 1)) {
          uVar10 = 0x1505;
        }
        else {
          uVar10 = 0x1505;
          pbVar18 = pbVar23;
          do {
            pbVar21 = pbVar18 + 1;
            uVar10 = uVar10 * 0x21 ^ (uint)*pbVar18;
            pbVar18 = pbVar21;
          } while (pbVar23 + (ulong)(*(int *)(pbVar23 + -8) * 4 - 1) + 1 != pbVar21);
        }
        pbVar23 = *(byte **)(pVVar28 + 0xb0);
        pVVar15 = pVVar28;
        if ((pbVar23 != (byte *)0x0) && (0 < *(int *)(pbVar23 + -8) * 4)) {
          pbVar18 = pbVar23;
          do {
            pbVar21 = pbVar18 + 1;
            uVar10 = uVar10 * 0x21 ^ (uint)*pbVar18;
            pbVar18 = pbVar21;
          } while (pbVar21 != pbVar23 + (ulong)(*(int *)(pbVar23 + -8) * 4 - 1) + 1);
        }
        do {
          pVVar16 = pVVar15 + 4;
          uVar10 = (*(int *)pVVar15 * 0x16a88000 | (uint)(*(int *)pVVar15 * -0x3361d2af) >> 0x11) *
                   0x1b873593 ^ uVar10;
          uVar10 = (uVar10 << 0xd | uVar10 >> 0x13) * 5 + 0xe6546b64;
          pVVar15 = pVVar16;
        } while (pVVar27 != pVVar16);
        uVar9 = (uint)local_48;
        uVar4 = local_58._8_8_;
        uVar10 = (uVar10 >> 0x10 ^ uVar10 ^ 0x94) * -0x7a143595;
        uVar11 = (uVar10 ^ uVar10 >> 0xd) * -0x3d4d51cb;
        uVar10 = uVar11 ^ uVar11 >> 0x10;
        if (uVar11 == uVar11 >> 0x10) {
          uVar10 = 1;
        }
        uVar11 = uVar10 & (uint)local_48;
        uVar13 = *(ulong *)(local_58._8_8_ + (ulong)uVar11 * 8);
        if (uVar10 != (uint)uVar13) {
LAB_0010cba1:
          if (uVar13 != 0) {
            uVar26 = 1;
            while( true ) {
              uVar11 = uVar11 + 1 & uVar9;
              uVar13 = *(ulong *)(uVar4 + (ulong)uVar11 * 8);
              if (uVar10 == (uint)uVar13) {
                puVar17 = (undefined8 *)((uVar13 >> 0x20) * 0x10 + (long)pvVar14);
                cVar8 = Vertex::operator==((Vertex *)*puVar17,pVVar28);
                if (cVar8 != '\0') {
                  uVar10 = *(uint *)(puVar17 + 1);
                  goto LAB_0010cf1d;
                }
              }
              if ((uVar13 == 0) ||
                 ((((uVar9 + 1) - ((uint)uVar13 & uVar9)) + uVar11 & uVar9) < uVar26)) break;
              uVar26 = uVar26 + 1;
            }
          }
          goto LAB_0010cc84;
        }
        puVar17 = (undefined8 *)((uVar13 >> 0x20) * 0x10 + (long)pvVar14);
        cVar8 = Vertex::operator==((Vertex *)*puVar17,pVVar28);
        if (cVar8 == '\0') goto LAB_0010cba1;
        uVar10 = *(uint *)(puVar17 + 1);
      }
LAB_0010cf1d:
      uVar9 = *(uint *)(this + 0x1a8);
      pvVar14 = *(void **)(this + 0x1b0);
      if (uVar9 == *(uint *)(this + 0x1ac)) {
        uVar13 = (ulong)(uVar9 * 2);
        if (uVar9 * 2 == 0) {
          uVar13 = 1;
        }
        *(int *)(this + 0x1ac) = (int)uVar13;
        pvVar14 = (void *)Memory::realloc_static(pvVar14,uVar13 * 4,false);
        *(void **)(this + 0x1b0) = pvVar14;
        if (pvVar14 == (void *)0x0) {
          _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                           "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        uVar9 = *(uint *)(this + 0x1a8);
      }
      uVar4 = local_58._0_8_;
      pVVar28 = pVVar28 + 0xb8;
      pVVar27 = pVVar27 + 0xb8;
      *(uint *)(this + 0x1a8) = uVar9 + 1;
      *(uint *)((long)pvVar14 + (ulong)uVar9 * 4) = uVar10;
      pvVar14 = (void *)local_58._0_8_;
    } while (pVVar12 != pVVar28);
    LocalVector<SurfaceTool::Vertex,unsigned_int,false,false>::resize
              ((LocalVector<SurfaceTool::Vertex,unsigned_int,false,false> *)(this + 0x198),local_74)
    ;
    *(ulong *)(this + 0x188) = *(ulong *)(this + 0x188) | 0x1000;
    if ((void *)uVar4 != (void *)0x0) {
      Memory::free_static((void *)uVar4,false);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static((void *)local_58._8_8_,false);
        return;
      }
      goto LAB_0010d288;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010d288:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SurfaceTool::index() */

void __thiscall SurfaceTool::index(SurfaceTool *this)

{
  if (*(int *)(this + 0x1a8) != 0) {
    return;
  }
  index(this);
  return;
}



/* SurfaceTool::generate_normals(bool) */

void __thiscall SurfaceTool::generate_normals(SurfaceTool *this,bool param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  void *pvVar8;
  uint uVar9;
  ulong uVar10;
  char *pcVar11;
  float *pfVar12;
  float *pfVar13;
  uint uVar14;
  float *pfVar15;
  uint uVar16;
  long in_FS_OFFSET;
  float fVar20;
  float fVar21;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar22;
  float fVar23;
  float fVar26;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar33;
  undefined1 auVar32 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar40;
  undefined1 auVar39 [16];
  float fVar41;
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0x180) == 3) {
    iVar4 = *(int *)(this + 0x1a8);
    deindex(this);
    uVar16 = *(uint *)(this + 0x198);
    if (uVar16 % 3 == 0) {
      local_58 = (undefined1  [16])0x0;
      uVar5 = 4;
      if (3 < uVar16) {
        uVar5 = uVar16;
      }
      uVar5 = uVar5 - 1 | uVar5 - 1 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      local_48 = (ulong)(uVar5 | uVar5 >> 0x10);
      if (uVar16 == 0) {
        *(ulong *)(this + 0x188) = *(ulong *)(this + 0x188) | 2;
        if ((iVar4 != 0) && (*(int *)(this + 0x1a8) == 0)) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            index(this);
            return;
          }
          goto LAB_0010dfa5;
        }
      }
      else {
        pvVar8 = (void *)0x0;
        uVar16 = 0;
        uVar7 = _LC191;
        do {
          pfVar12 = (float *)((ulong)uVar16 * 0xb8 + *(long *)(this + 0x1a0));
          fVar23 = pfVar12[0x7e];
          fVar20 = (float)((ulong)*(undefined8 *)(pfVar12 + 0x24) >> 0x20);
          fVar26 = (float)((ulong)*(undefined8 *)(pfVar12 + 0x22) >> 0x20);
          fVar31 = (float)*(undefined8 *)(pfVar12 + 0x24);
          fVar22 = (float)*(undefined8 *)(pfVar12 + 0x22);
          fVar27 = pfVar12[0x80];
          fVar33 = (float)((ulong)*(undefined8 *)(pfVar12 + 0x52) >> 0x20);
          fVar40 = (float)((ulong)*(undefined8 *)(pfVar12 + 0x50) >> 0x20);
          fVar30 = (float)*(undefined8 *)(pfVar12 + 0x52);
          fVar21 = (float)*(undefined8 *)(pfVar12 + 0x50);
          fVar36 = (float)*(undefined8 *)(pfVar12 + 0x23);
          fVar37 = (float)((ulong)*(undefined8 *)(pfVar12 + 0x23) >> 0x20);
          fVar35 = (float)((ulong)*(undefined8 *)(pfVar12 + 0x7f) >> 0x20);
          fVar38 = (float)*(undefined8 *)(pfVar12 + 0x51);
          fVar41 = (float)((ulong)*(undefined8 *)(pfVar12 + 0x51) >> 0x20);
          fVar34 = (float)*(undefined8 *)(pfVar12 + 0x7f);
          if (param_1) {
            fVar38 = fVar34 - fVar38;
            fVar21 = fVar23 - fVar21;
            auVar39._0_4_ = (fVar27 - fVar30) * (fVar34 - fVar36) - fVar38 * (fVar27 - fVar31);
            auVar39._4_4_ = fVar21 * (fVar35 - fVar37) - (fVar35 - fVar41) * (fVar23 - fVar22);
            auVar39._8_4_ = (0.0 - fVar33) * 0.0 - (0.0 - fVar20) * 0.0;
            auVar39._12_4_ = (0.0 - fVar40) * 0.0 - (0.0 - fVar26) * 0.0;
            fVar23 = fVar38 * (fVar23 - fVar22) - fVar21 * (fVar34 - fVar36);
            fVar27 = auVar39._0_4_ * auVar39._0_4_ + auVar39._4_4_ * auVar39._4_4_ + fVar23 * fVar23
            ;
            auVar29 = ZEXT816(0);
            fVar31 = 0.0;
            if (fVar27 != 0.0) {
              fVar27 = SQRT(fVar27);
              fVar31 = fVar23 / fVar27;
              auVar24._4_4_ = fVar27;
              auVar24._0_4_ = fVar27;
              auVar24._8_8_ = uVar7;
              auVar29 = divps(auVar39,auVar24);
            }
          }
          else {
            fVar38 = fVar36 - fVar38;
            fVar21 = fVar22 - fVar21;
            auVar32._0_4_ = (fVar31 - fVar30) * (fVar36 - fVar34) - fVar38 * (fVar31 - fVar27);
            auVar32._4_4_ = fVar21 * (fVar37 - fVar35) - (fVar37 - fVar41) * (fVar22 - fVar23);
            auVar32._8_4_ = (fVar20 - fVar33) * 0.0 - (fVar20 - 0.0) * 0.0;
            auVar32._12_4_ = (fVar26 - fVar40) * 0.0 - (fVar26 - 0.0) * 0.0;
            fVar23 = fVar38 * (fVar22 - fVar23) - fVar21 * (fVar36 - fVar34);
            fVar27 = auVar32._0_4_ * auVar32._0_4_ + auVar32._4_4_ * auVar32._4_4_ + fVar23 * fVar23
            ;
            auVar29 = ZEXT416(0);
            fVar31 = 0.0;
            if (fVar27 != 0.0) {
              fVar27 = SQRT(fVar27);
              fVar31 = fVar23 / fVar27;
              auVar19._4_4_ = fVar27;
              auVar19._0_4_ = fVar27;
              auVar19._8_8_ = uVar7;
              auVar29 = divps(auVar32,auVar19);
            }
          }
          pfVar15 = pfVar12 + 0x8a;
          do {
            fVar23 = *pfVar12;
            if (fVar23 == -NAN) {
              *(ulong *)(pfVar12 + 5) = auVar29._0_8_;
              pfVar12[7] = fVar31;
            }
            else {
              uVar3 = *(undefined8 *)(pfVar12 + 0x22);
              uVar5 = (uint)local_48;
              fVar20 = (float)uVar3;
              fVar21 = (float)((ulong)uVar3 >> 0x20);
              fVar27 = pfVar12[0x24];
              if (pvVar8 != (void *)0x0) {
                uVar6 = 0x3413905a;
                if ((fVar20 != 0.0) && (uVar6 = 0x22afa5cc, !NAN(fVar20))) {
                  uVar6 = ((int)fVar20 * 0x16a88000 | (uint)((int)fVar20 * -0x3361d2af) >> 0x11) *
                          0x1b873593 ^ 0x7f07c65;
                  uVar6 = (uVar6 << 0xd | uVar6 >> 0x13) * 5 + 0xe6546b64;
                }
                if (fVar21 != 0.0) {
                  if (NAN(fVar21)) {
                    uVar6 = uVar6 ^ 0x2db3efa0;
                  }
                  else {
                    uVar6 = uVar6 ^ ((int)fVar21 * 0x16a88000 |
                                    (uint)((int)fVar21 * -0x3361d2af) >> 0x11) * 0x1b873593;
                  }
                }
                uVar6 = (uVar6 << 0xd | uVar6 >> 0x13) * 5 + 0xe6546b64;
                if (fVar27 != 0.0) {
                  if (NAN(fVar27)) {
                    uVar6 = uVar6 ^ 0x2db3efa0;
                  }
                  else {
                    uVar6 = uVar6 ^ ((int)fVar27 * 0x16a88000 |
                                    (uint)((int)fVar27 * -0x3361d2af) >> 0x11) * 0x1b873593;
                  }
                }
                uVar6 = (uVar6 << 0xd | uVar6 >> 0x13) * 5 + 0xe6546b64;
                uVar6 = (uVar6 ^ uVar6 >> 0x10) * -0x7a143595;
                uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
                uVar9 = ((int)fVar23 * 0x16a88000 | (uint)((int)fVar23 * -0x3361d2af) >> 0x11) *
                        0x1b873593 ^ uVar6;
                uVar6 = ((uVar6 >> 0x10 ^ uVar9) << 0xd | uVar9 >> 0x13) * 5 + 0xe6546b64;
                uVar6 = (uVar6 ^ uVar6 >> 0x10) * -0x7a143595;
                uVar9 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
                uVar6 = uVar9 ^ uVar9 >> 0x10;
                if (uVar9 == uVar9 >> 0x10) {
                  uVar6 = 1;
                }
                uVar9 = uVar6 & (uint)local_48;
                uVar10 = *(ulong *)(local_58._8_8_ + (ulong)uVar9 * 8);
                if ((((uVar6 == (uint)uVar10) &&
                     (pfVar13 = (float *)((long)pvVar8 + (uVar10 >> 0x20) * 0x1c),
                     fVar20 == *pfVar13)) && (fVar21 == pfVar13[1])) &&
                   ((fVar27 == pfVar13[2] && (fVar23 == pfVar13[3])))) {
LAB_0010d641:
                  *(ulong *)(pfVar13 + 4) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar13 + 4) >> 0x20) + auVar29._4_4_
                                ,(float)*(undefined8 *)(pfVar13 + 4) + auVar29._0_4_);
                  pfVar13[6] = pfVar13[6] + fVar31;
                  goto LAB_0010d65f;
                }
                if (uVar10 != 0) {
                  uVar14 = 1;
                  while( true ) {
                    uVar9 = uVar9 + 1 & (uint)local_48;
                    uVar10 = *(ulong *)(local_58._8_8_ + (ulong)uVar9 * 8);
                    if ((((uint)uVar10 == uVar6) &&
                        (pfVar13 = (float *)((long)pvVar8 + (uVar10 >> 0x20) * 0x1c),
                        fVar20 == *pfVar13)) &&
                       ((fVar21 == pfVar13[1] && ((fVar27 == pfVar13[2] && (fVar23 == pfVar13[3]))))
                       )) goto LAB_0010d641;
                    if ((uVar10 == 0) ||
                       (((((uint)local_48 + 1) - ((uint)uVar10 & (uint)local_48)) + uVar9 &
                        (uint)local_48) < uVar14)) break;
                    uVar14 = uVar14 + 1;
                  }
                }
              }
              uVar6 = (uint)local_48 + 1;
              uVar9 = 0x3413905a;
              if ((fVar20 != 0.0) && (uVar9 = 0x22afa5cc, !NAN(fVar20))) {
                uVar9 = ((int)fVar20 * 0x16a88000 | (uint)((int)fVar20 * -0x3361d2af) >> 0x11) *
                        0x1b873593 ^ 0x7f07c65;
                uVar9 = (uVar9 << 0xd | uVar9 >> 0x13) * 5 + 0xe6546b64;
              }
              if (fVar21 != 0.0) {
                if (NAN(fVar21) || NAN(fVar21)) {
                  uVar9 = uVar9 ^ 0x2db3efa0;
                }
                else {
                  uVar9 = uVar9 ^ ((int)fVar21 * 0x16a88000 |
                                  (uint)((int)fVar21 * -0x3361d2af) >> 0x11) * 0x1b873593;
                }
              }
              uVar9 = (uVar9 << 0xd | uVar9 >> 0x13) * 5 + 0xe6546b64;
              if (fVar27 != 0.0) {
                if (NAN(fVar27) || NAN(fVar27)) {
                  uVar9 = uVar9 ^ 0x2db3efa0;
                }
                else {
                  uVar9 = uVar9 ^ ((int)fVar27 * 0x16a88000 |
                                  (uint)((int)fVar27 * -0x3361d2af) >> 0x11) * 0x1b873593;
                }
              }
              uVar9 = (uVar9 << 0xd | uVar9 >> 0x13) * 5 + 0xe6546b64;
              uVar9 = (uVar9 >> 0x10 ^ uVar9) * -0x7a143595;
              uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
              uVar14 = ((int)fVar23 * 0x16a88000 | (uint)((int)fVar23 * -0x3361d2af) >> 0x11) *
                       0x1b873593 ^ uVar9;
              uVar9 = ((uVar14 ^ uVar9 >> 0x10) << 0xd | uVar14 >> 0x13) * 5 + 0xe6546b64;
              uVar9 = (uVar9 >> 0x10 ^ uVar9) * -0x7a143595;
              uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
              uVar10 = (ulong)(uVar9 ^ uVar9 >> 0x10);
              if (uVar9 == uVar9 >> 0x10) {
                uVar10 = 1;
              }
              if (pvVar8 == (void *)0x0) {
                pvVar8 = (void *)Memory::alloc_static((ulong)uVar6 << 3,false);
                local_58._8_8_ = pvVar8;
                local_58._0_8_ =
                     Memory::alloc_static((ulong)((uVar6 >> 2 ^ uVar5) + 1) * 0x1c,false);
                memset(pvVar8,0,(ulong)uVar6 << 3);
                auVar29._8_8_ = 0;
                uVar7 = _LC191;
                if ((uVar6 >> 2 ^ uVar5) < local_48._4_4_) goto LAB_0010de8b;
              }
              else if ((uVar6 >> 2 ^ (uint)local_48) < local_48._4_4_) {
LAB_0010de8b:
                AHashMap<SurfaceTool::SmoothGroupVertex,Vector3,SurfaceTool::SmoothGroupVertexHasher,HashMapComparatorDefault<SurfaceTool::SmoothGroupVertex>>
                ::_resize_and_rehash
                          ((AHashMap<SurfaceTool::SmoothGroupVertex,Vector3,SurfaceTool::SmoothGroupVertexHasher,HashMapComparatorDefault<SurfaceTool::SmoothGroupVertex>>
                            *)local_58,uVar5 * 2);
                auVar29._8_8_ = 0;
                uVar5 = (uint)local_48;
                uVar7 = _LC191;
              }
              puVar1 = (undefined8 *)(local_58._0_8_ + (ulong)local_48._4_4_ * 0x1c);
              *(float *)((long)puVar1 + 0xc) = fVar23;
              *puVar1 = uVar3;
              *(float *)(puVar1 + 1) = fVar27;
              puVar1[2] = auVar29._0_8_;
              *(float *)(puVar1 + 3) = fVar31;
              uVar6 = (uint)uVar10 & uVar5;
              puVar2 = (ulong *)(local_58._8_8_ + (ulong)uVar6 * 8);
              if (*puVar2 == 0) {
                *puVar2 = (ulong)local_48._4_4_ << 0x20 | uVar10;
              }
              else {
                uVar9 = 1;
                uVar6 = uVar6 + 1 & uVar5;
                auVar17._0_8_ = CONCAT44(local_48._4_4_,(uint)uVar10);
                auVar17._8_8_ = 0;
                puVar2 = (ulong *)(local_58._8_8_ + (ulong)uVar6 * 8);
                uVar10 = *puVar2;
                auVar18 = auVar17;
                while (uVar10 != 0) {
                  uVar14 = (uVar6 + uVar5 + 1) - ((uint)*puVar2 & uVar5) & uVar5;
                  if (uVar14 < uVar9) {
                    uVar10 = *puVar2;
                    *puVar2 = auVar18._0_8_;
                    auVar18._8_8_ = 0;
                    auVar18._0_8_ = uVar10;
                    uVar9 = uVar14;
                  }
                  auVar17._0_8_ = auVar18._0_8_;
                  uVar9 = uVar9 + 1;
                  uVar6 = uVar6 + 1 & uVar5;
                  puVar2 = (ulong *)(local_58._8_8_ + (ulong)uVar6 * 8);
                  uVar10 = *puVar2;
                }
                *puVar2 = auVar17._0_8_;
              }
              local_48 = CONCAT44(local_48._4_4_ + 1,(uint)local_48);
              pvVar8 = (void *)local_58._0_8_;
            }
LAB_0010d65f:
            uVar3 = _LC191;
            pfVar12 = pfVar12 + 0x2e;
          } while (pfVar12 != pfVar15);
          uVar16 = uVar16 + 3;
        } while (uVar16 < *(uint *)(this + 0x198));
        pfVar12 = *(float **)(this + 0x1a0);
        pfVar15 = pfVar12 + (ulong)*(uint *)(this + 0x198) * 0x2e;
        if (pfVar15 != pfVar12) {
          do {
            fVar23 = *pfVar12;
            if (fVar23 != -NAN) {
              fVar27 = pfVar12[0x22];
              fVar31 = pfVar12[0x23];
              fVar20 = pfVar12[0x24];
              if (pvVar8 != (void *)0x0) {
                uVar16 = 0x3413905a;
                if ((fVar27 != 0.0) && (uVar16 = 0x22afa5cc, !NAN(fVar27))) {
                  uVar16 = ((int)fVar27 * 0x16a88000 | (uint)((int)fVar27 * -0x3361d2af) >> 0x11) *
                           0x1b873593 ^ 0x7f07c65;
                  uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
                }
                if (fVar31 != 0.0) {
                  if (NAN(fVar31)) {
                    uVar16 = uVar16 ^ 0x2db3efa0;
                  }
                  else {
                    uVar16 = uVar16 ^ ((int)fVar31 * 0x16a88000 |
                                      (uint)((int)fVar31 * -0x3361d2af) >> 0x11) * 0x1b873593;
                  }
                }
                uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
                if (fVar20 != 0.0) {
                  if (NAN(fVar20)) {
                    uVar16 = uVar16 ^ 0x2db3efa0;
                  }
                  else {
                    uVar16 = uVar16 ^ ((int)fVar20 * 0x16a88000 |
                                      (uint)((int)fVar20 * -0x3361d2af) >> 0x11) * 0x1b873593;
                  }
                }
                uVar16 = (uVar16 << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
                uVar16 = (uVar16 >> 0x10 ^ uVar16) * -0x7a143595;
                uVar5 = (uVar16 ^ uVar16 >> 0xd) * -0x3d4d51cb;
                uVar16 = ((int)fVar23 * 0x16a88000 | (uint)((int)fVar23 * -0x3361d2af) >> 0x11) *
                         0x1b873593 ^ uVar5;
                uVar16 = ((uVar16 ^ uVar5 >> 0x10) << 0xd | uVar16 >> 0x13) * 5 + 0xe6546b64;
                uVar16 = (uVar16 >> 0x10 ^ uVar16) * -0x7a143595;
                uVar16 = (uVar16 ^ uVar16 >> 0xd) * -0x3d4d51cb;
                uVar5 = uVar16 ^ uVar16 >> 0x10;
                if (uVar16 == uVar16 >> 0x10) {
                  uVar5 = 1;
                }
                uVar16 = uVar5 & (uint)local_48;
                uVar10 = *(ulong *)(local_58._8_8_ + (ulong)uVar16 * 8);
                if ((((uVar5 == (uint)uVar10) &&
                     (pfVar13 = (float *)((long)pvVar8 + (uVar10 >> 0x20) * 0x1c),
                     fVar27 == *pfVar13)) && (fVar31 == pfVar13[1])) &&
                   ((fVar20 == pfVar13[2] && (fVar23 == pfVar13[3])))) {
LAB_0010d886:
                  uVar10 = *(ulong *)(pfVar13 + 4);
                  auVar28._8_8_ = 0;
                  auVar28._0_8_ = uVar10;
                  fVar23 = pfVar13[6];
                  fVar27 = (float)(uVar10 >> 0x20);
                  fVar27 = (float)uVar10 * (float)uVar10 + fVar27 * fVar27 + fVar23 * fVar23;
                  uVar7 = 0;
                  fVar31 = 0.0;
                  if (fVar27 != 0.0) {
                    fVar27 = SQRT(fVar27);
                    fVar31 = fVar23 / fVar27;
                    auVar25._4_4_ = fVar27;
                    auVar25._0_4_ = fVar27;
                    auVar25._8_8_ = uVar3;
                    auVar29 = divps(auVar28,auVar25);
                    uVar7 = auVar29._0_8_;
                  }
                  *(undefined8 *)(pfVar12 + 5) = uVar7;
                  pfVar12[7] = fVar31;
                  goto LAB_0010d8d5;
                }
                if (uVar10 != 0) {
                  uVar6 = 1;
                  while( true ) {
                    uVar16 = uVar16 + 1 & (uint)local_48;
                    uVar10 = *(ulong *)(local_58._8_8_ + (ulong)uVar16 * 8);
                    if (((uVar5 == (uint)uVar10) &&
                        (pfVar13 = (float *)((long)pvVar8 + (uVar10 >> 0x20) * 0x1c),
                        fVar27 == *pfVar13)) &&
                       ((fVar31 == pfVar13[1] && ((fVar20 == pfVar13[2] && (fVar23 == pfVar13[3]))))
                       )) goto LAB_0010d886;
                    if ((uVar10 == 0) ||
                       (((((uint)local_48 + 1) - ((uint)uVar10 & (uint)local_48)) + uVar16 &
                        (uint)local_48) < uVar6)) break;
                    uVar6 = uVar6 + 1;
                  }
                }
              }
              pfVar12[5] = 0.0;
              pfVar12[6] = 0.0;
              pfVar12[7] = 0.0;
            }
LAB_0010d8d5:
            pfVar12 = pfVar12 + 0x2e;
          } while (pfVar15 != pfVar12);
        }
        *(ulong *)(this + 0x188) = *(ulong *)(this + 0x188) | 2;
        if ((iVar4 != 0) && (*(int *)(this + 0x1a8) == 0)) {
          index(this);
        }
        if (pvVar8 != (void *)0x0) {
          Memory::free_static(pvVar8,false);
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            Memory::free_static((void *)local_58._8_8_,false);
            return;
          }
          goto LAB_0010dfa5;
        }
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
    }
    else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = 0x4ab;
      pcVar11 = "Condition \"(vertex_array.size() % 3) != 0\" is true.";
      goto LAB_0010df2b;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar7 = 0x4a5;
    pcVar11 = "Condition \"primitive != Mesh::PRIMITIVE_TRIANGLES\" is true.";
LAB_0010df2b:
    _err_print_error("generate_normals","scene/resources/surface_tool.cpp",uVar7,pcVar11,0,0);
    return;
  }
LAB_0010dfa5:
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
  return (uint)CONCAT71(0x1295,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1295,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* SurfaceTool::is_class_ptr(void*) const */

uint __thiscall SurfaceTool::is_class_ptr(SurfaceTool *this,void *param_1)

{
  return (uint)CONCAT71(0x1295,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1295,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1295,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* SurfaceTool::_getv(StringName const&, Variant&) const */

undefined8 SurfaceTool::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* SurfaceTool::_setv(StringName const&, Variant const&) */

undefined8 SurfaceTool::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* SurfaceTool::_validate_propertyv(PropertyInfo&) const */

void SurfaceTool::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* SurfaceTool::_property_can_revertv(StringName const&) const */

undefined8 SurfaceTool::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* SurfaceTool::_property_get_revertv(StringName const&, Variant&) const */

undefined8 SurfaceTool::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* SurfaceTool::_notificationv(int, bool) */

void SurfaceTool::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MethodBindTR<Array>::_gen_argument_type(int) const */

undefined8 MethodBindTR<Array>::_gen_argument_type(int param_1)

{
  return 0x1c;
}



/* MethodBindTR<Array>::get_argument_meta(int) const */

undefined8 MethodBindTR<Array>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Ref<ArrayMesh>, Ref<ArrayMesh> const&, unsigned long>::_gen_argument_type(int) const
    */

undefined8 __thiscall
MethodBindTR<Ref<ArrayMesh>,Ref<ArrayMesh>const&,unsigned_long>::_gen_argument_type
          (MethodBindTR<Ref<ArrayMesh>,Ref<ArrayMesh>const&,unsigned_long> *this,int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x18;
  if (param_1 == 1) {
    uVar1 = 2;
  }
  return uVar1;
}



/* MethodBindTR<Ref<ArrayMesh>, Ref<ArrayMesh> const&, unsigned long>::get_argument_meta(int) const
    */

long __thiscall
MethodBindTR<Ref<ArrayMesh>,Ref<ArrayMesh>const&,unsigned_long>::get_argument_meta
          (MethodBindTR<Ref<ArrayMesh>,Ref<ArrayMesh>const&,unsigned_long> *this,int param_1)

{
  return (ulong)(param_1 == 1) << 3;
}



/* MethodBindT<Ref<Mesh> const&, int, Transform3D const&>::get_argument_meta(int) const */

char __thiscall
MethodBindT<Ref<Mesh>const&,int,Transform3D_const&>::get_argument_meta
          (MethodBindT<Ref<Mesh>const&,int,Transform3D_const&> *this,int param_1)

{
  return (param_1 == 1) * '\x03';
}



/* MethodBindT<Ref<Mesh> const&, int, String const&>::get_argument_meta(int) const */

char __thiscall
MethodBindT<Ref<Mesh>const&,int,String_const&>::get_argument_meta
          (MethodBindT<Ref<Mesh>const&,int,String_const&> *this,int param_1)

{
  return (param_1 == 1) * '\x03';
}



/* MethodBindT<Array const&, Mesh::PrimitiveType>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<Array_const&,Mesh::PrimitiveType>::_gen_argument_type
          (MethodBindT<Array_const&,Mesh::PrimitiveType> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((uint)param_1 < 2) {
    cVar1 = (-(param_1 == 0) & 0x1aU) + 2;
  }
  return cVar1;
}



/* MethodBindT<Array const&, Mesh::PrimitiveType>::get_argument_meta(int) const */

undefined8 MethodBindT<Array_const&,Mesh::PrimitiveType>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Ref<Mesh> const&, int>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<Ref<Mesh>const&,int>::_gen_argument_type
          (MethodBindT<Ref<Mesh>const&,int> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((uint)param_1 < 2) {
    cVar1 = (-(param_1 == 0) & 0x16U) + 2;
  }
  return cVar1;
}



/* MethodBindT<Ref<Mesh> const&, int>::get_argument_meta(int) const */

char __thiscall
MethodBindT<Ref<Mesh>const&,int>::get_argument_meta
          (MethodBindT<Ref<Mesh>const&,int> *this,int param_1)

{
  return (param_1 == 1) * '\x03';
}



/* MethodBindTRC<Mesh::PrimitiveType>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Mesh::PrimitiveType>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<Mesh::PrimitiveType>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Mesh::PrimitiveType>::get_argument_meta(int param_1)

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



/* MethodBindTR<Vector<int>, float, int>::_gen_argument_type(int) const */

char __thiscall
MethodBindTR<Vector<int>,float,int>::_gen_argument_type
          (MethodBindTR<Vector<int>,float,int> *this,int param_1)

{
  char cVar1;
  
  cVar1 = (param_1 == 0) + '\x02';
  if (1 < (uint)param_1) {
    cVar1 = '\x1e';
  }
  return cVar1;
}



/* MethodBindTR<Vector<int>, float, int>::get_argument_meta(int) const */

char __thiscall
MethodBindTR<Vector<int>,float,int>::get_argument_meta
          (MethodBindTR<Vector<int>,float,int> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((-1 < param_1) && (cVar1 = '\t', param_1 != 0)) {
    cVar1 = (param_1 == 1) * '\x03';
  }
  return cVar1;
}



/* MethodBindTRC<AABB>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<AABB>::_gen_argument_type(int param_1)

{
  return 0x10;
}



/* MethodBindTRC<AABB>::get_argument_meta(int) const */

undefined8 MethodBindTRC<AABB>::get_argument_meta(int param_1)

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



/* MethodBindT<Vector<Vector3> const&, Vector<Vector2> const&, Vector<Color> const&, Vector<Vector2>
   const&, Vector<Vector3> const&, TypedArray<Plane> const&>::get_argument_meta(int) const */

undefined8
MethodBindT<Vector<Vector3>const&,Vector<Vector2>const&,Vector<Color>const&,Vector<Vector2>const&,Vector<Vector3>const&,TypedArray<Plane>const&>
::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<unsigned int>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<unsigned_int>::_gen_argument_type(MethodBindT<unsigned_int> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<unsigned int>::get_argument_meta(int) const */

byte __thiscall
MethodBindT<unsigned_int>::get_argument_meta(MethodBindT<unsigned_int> *this,int param_1)

{
  return -(param_1 == 0) & 7;
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



/* MethodBindT<Vector<float> const&>::_gen_argument_type(int) const */

long __thiscall
MethodBindT<Vector<float>const&>::_gen_argument_type
          (MethodBindT<Vector<float>const&> *this,int param_1)

{
  return (ulong)(param_1 == 0) << 5;
}



/* MethodBindT<Vector<float> const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Vector<float>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Vector<int> const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Vector<int>const&>::_gen_argument_type(MethodBindT<Vector<int>const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x1e;
}



/* MethodBindT<Vector<int> const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Vector<int>const&>::get_argument_meta(int param_1)

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



/* MethodBindT<Color>::_gen_argument_type(int) const */

byte __thiscall MethodBindT<Color>::_gen_argument_type(MethodBindT<Color> *this,int param_1)

{
  return -(param_1 == 0) & 0x14;
}



/* MethodBindT<Color>::get_argument_meta(int) const */

undefined8 MethodBindT<Color>::get_argument_meta(int param_1)

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



/* MethodBindT<Mesh::PrimitiveType>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<Mesh::PrimitiveType>::_gen_argument_type
          (MethodBindT<Mesh::PrimitiveType> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<Mesh::PrimitiveType>::get_argument_meta(int) const */

undefined8 MethodBindT<Mesh::PrimitiveType>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<SurfaceTool::CustomFormat, int>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<SurfaceTool::CustomFormat,int>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<SurfaceTool::CustomFormat, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<SurfaceTool::CustomFormat,int>::get_argument_meta
          (MethodBindTRC<SurfaceTool::CustomFormat,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindT<int, SurfaceTool::CustomFormat>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<int,SurfaceTool::CustomFormat>::_gen_argument_type
          (MethodBindT<int,SurfaceTool::CustomFormat> *this,int param_1)

{
  return ((uint)param_1 < 2) * '\x02';
}



/* MethodBindT<int, SurfaceTool::CustomFormat>::get_argument_meta(int) const */

byte __thiscall
MethodBindT<int,SurfaceTool::CustomFormat>::get_argument_meta
          (MethodBindT<int,SurfaceTool::CustomFormat> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTRC<SurfaceTool::SkinWeightCount>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<SurfaceTool::SkinWeightCount>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<SurfaceTool::SkinWeightCount>::get_argument_meta(int) const */

undefined8 MethodBindTRC<SurfaceTool::SkinWeightCount>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<SurfaceTool::SkinWeightCount>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<SurfaceTool::SkinWeightCount>::_gen_argument_type
          (MethodBindT<SurfaceTool::SkinWeightCount> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<SurfaceTool::SkinWeightCount>::get_argument_meta(int) const */

undefined8 MethodBindT<SurfaceTool::SkinWeightCount>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Vector<Vector3> const&, Vector<Vector2> const&, Vector<Color> const&, Vector<Vector2>
   const&, Vector<Vector3> const&, TypedArray<Plane> const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<Vector<Vector3>const&,Vector<Vector2>const&,Vector<Color>const&,Vector<Vector2>const&,Vector<Vector3>const&,TypedArray<Plane>const&>
::_gen_argument_type
          (MethodBindT<Vector<Vector3>const&,Vector<Vector2>const&,Vector<Color>const&,Vector<Vector2>const&,Vector<Vector3>const&,TypedArray<Plane>const&>
           *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if (((((uint)param_1 < 6) && (cVar1 = '$', param_1 != 0)) && (cVar1 = '#', param_1 != 1)) &&
     ((cVar1 = '%', param_1 != 2 && (cVar1 = '#', param_1 != 3)))) {
    return (param_1 == 4) * '\b' + '\x1c';
  }
  return cVar1;
}



/* MethodBindT<SurfaceTool::SkinWeightCount>::~MethodBindT() */

void __thiscall
MethodBindT<SurfaceTool::SkinWeightCount>::~MethodBindT
          (MethodBindT<SurfaceTool::SkinWeightCount> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00128af8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<SurfaceTool::SkinWeightCount>::~MethodBindT() */

void __thiscall
MethodBindT<SurfaceTool::SkinWeightCount>::~MethodBindT
          (MethodBindT<SurfaceTool::SkinWeightCount> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00128af8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<SurfaceTool::SkinWeightCount>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<SurfaceTool::SkinWeightCount>::~MethodBindTRC
          (MethodBindTRC<SurfaceTool::SkinWeightCount> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00128b58;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<SurfaceTool::SkinWeightCount>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<SurfaceTool::SkinWeightCount>::~MethodBindTRC
          (MethodBindTRC<SurfaceTool::SkinWeightCount> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00128b58;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, SurfaceTool::CustomFormat>::~MethodBindT() */

void __thiscall
MethodBindT<int,SurfaceTool::CustomFormat>::~MethodBindT
          (MethodBindT<int,SurfaceTool::CustomFormat> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00128bb8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, SurfaceTool::CustomFormat>::~MethodBindT() */

void __thiscall
MethodBindT<int,SurfaceTool::CustomFormat>::~MethodBindT
          (MethodBindT<int,SurfaceTool::CustomFormat> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00128bb8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<SurfaceTool::CustomFormat, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<SurfaceTool::CustomFormat,int>::~MethodBindTRC
          (MethodBindTRC<SurfaceTool::CustomFormat,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00128c18;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<SurfaceTool::CustomFormat, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<SurfaceTool::CustomFormat,int>::~MethodBindTRC
          (MethodBindTRC<SurfaceTool::CustomFormat,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00128c18;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Mesh::PrimitiveType>::~MethodBindT() */

void __thiscall
MethodBindT<Mesh::PrimitiveType>::~MethodBindT(MethodBindT<Mesh::PrimitiveType> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00128c78;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Mesh::PrimitiveType>::~MethodBindT() */

void __thiscall
MethodBindT<Mesh::PrimitiveType>::~MethodBindT(MethodBindT<Mesh::PrimitiveType> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00128c78;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Color>::~MethodBindT() */

void __thiscall MethodBindT<Color>::~MethodBindT(MethodBindT<Color> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00128d38;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Color>::~MethodBindT() */

void __thiscall MethodBindT<Color>::~MethodBindT(MethodBindT<Color> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00128d38;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Vector3 const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector3_const&>::~MethodBindT(MethodBindT<Vector3_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00128cd8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Vector3 const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector3_const&>::~MethodBindT(MethodBindT<Vector3_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00128cd8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Plane const&>::~MethodBindT() */

void __thiscall MethodBindT<Plane_const&>::~MethodBindT(MethodBindT<Plane_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00128d98;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Plane const&>::~MethodBindT() */

void __thiscall MethodBindT<Plane_const&>::~MethodBindT(MethodBindT<Plane_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00128d98;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Vector2 const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector2_const&>::~MethodBindT(MethodBindT<Vector2_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00128df8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Vector2 const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector2_const&>::~MethodBindT(MethodBindT<Vector2_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00128df8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Vector<int> const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector<int>const&>::~MethodBindT(MethodBindT<Vector<int>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00128e58;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Vector<int> const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector<int>const&>::~MethodBindT(MethodBindT<Vector<int>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00128e58;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Vector<float> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Vector<float>const&>::~MethodBindT(MethodBindT<Vector<float>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00128eb8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Vector<float> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Vector<float>const&>::~MethodBindT(MethodBindT<Vector<float>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00128eb8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, Color const&>::~MethodBindT() */

void __thiscall MethodBindT<int,Color_const&>::~MethodBindT(MethodBindT<int,Color_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00128f18;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, Color const&>::~MethodBindT() */

void __thiscall MethodBindT<int,Color_const&>::~MethodBindT(MethodBindT<int,Color_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00128f18;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<unsigned int>::~MethodBindT() */

void __thiscall MethodBindT<unsigned_int>::~MethodBindT(MethodBindT<unsigned_int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00128f78;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<unsigned int>::~MethodBindT() */

void __thiscall MethodBindT<unsigned_int>::~MethodBindT(MethodBindT<unsigned_int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00128f78;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Vector<Vector3> const&, Vector<Vector2> const&, Vector<Color> const&, Vector<Vector2>
   const&, Vector<Vector3> const&, TypedArray<Plane> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Vector<Vector3>const&,Vector<Vector2>const&,Vector<Color>const&,Vector<Vector2>const&,Vector<Vector3>const&,TypedArray<Plane>const&>
::~MethodBindT(MethodBindT<Vector<Vector3>const&,Vector<Vector2>const&,Vector<Color>const&,Vector<Vector2>const&,Vector<Vector3>const&,TypedArray<Plane>const&>
               *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00128fd8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Vector<Vector3> const&, Vector<Vector2> const&, Vector<Color> const&, Vector<Vector2>
   const&, Vector<Vector3> const&, TypedArray<Plane> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Vector<Vector3>const&,Vector<Vector2>const&,Vector<Color>const&,Vector<Vector2>const&,Vector<Vector3>const&,TypedArray<Plane>const&>
::~MethodBindT(MethodBindT<Vector<Vector3>const&,Vector<Vector2>const&,Vector<Color>const&,Vector<Vector2>const&,Vector<Vector3>const&,TypedArray<Plane>const&>
               *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00128fd8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129038;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129038;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001290f8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001290f8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<AABB>::~MethodBindTRC() */

void __thiscall MethodBindTRC<AABB>::~MethodBindTRC(MethodBindTRC<AABB> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129158;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<AABB>::~MethodBindTRC() */

void __thiscall MethodBindTRC<AABB>::~MethodBindTRC(MethodBindTRC<AABB> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129158;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Vector<int>, float, int>::~MethodBindTR() */

void __thiscall
MethodBindTR<Vector<int>,float,int>::~MethodBindTR(MethodBindTR<Vector<int>,float,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001291b8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Vector<int>, float, int>::~MethodBindTR() */

void __thiscall
MethodBindTR<Vector<int>,float,int>::~MethodBindTR(MethodBindTR<Vector<int>,float,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001291b8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Ref<Material> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Material>const&>::~MethodBindT(MethodBindT<Ref<Material>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129218;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<Material> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Material>const&>::~MethodBindT(MethodBindT<Ref<Material>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129218;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Mesh::PrimitiveType>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Mesh::PrimitiveType>::~MethodBindTRC(MethodBindTRC<Mesh::PrimitiveType> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129278;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Mesh::PrimitiveType>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Mesh::PrimitiveType>::~MethodBindTRC(MethodBindTRC<Mesh::PrimitiveType> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129278;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129098;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129098;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Ref<Mesh> const&, int>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Mesh>const&,int>::~MethodBindT(MethodBindT<Ref<Mesh>const&,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001292d8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<Mesh> const&, int>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Mesh>const&,int>::~MethodBindT(MethodBindT<Ref<Mesh>const&,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001292d8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Array const&, Mesh::PrimitiveType>::~MethodBindT() */

void __thiscall
MethodBindT<Array_const&,Mesh::PrimitiveType>::~MethodBindT
          (MethodBindT<Array_const&,Mesh::PrimitiveType> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129338;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Array const&, Mesh::PrimitiveType>::~MethodBindT() */

void __thiscall
MethodBindT<Array_const&,Mesh::PrimitiveType>::~MethodBindT
          (MethodBindT<Array_const&,Mesh::PrimitiveType> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129338;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Ref<Mesh> const&, int, String const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Mesh>const&,int,String_const&>::~MethodBindT
          (MethodBindT<Ref<Mesh>const&,int,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129398;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<Mesh> const&, int, String const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Mesh>const&,int,String_const&>::~MethodBindT
          (MethodBindT<Ref<Mesh>const&,int,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129398;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Ref<Mesh> const&, int, Transform3D const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Mesh>const&,int,Transform3D_const&>::~MethodBindT
          (MethodBindT<Ref<Mesh>const&,int,Transform3D_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001293f8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<Mesh> const&, int, Transform3D const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Mesh>const&,int,Transform3D_const&>::~MethodBindT
          (MethodBindT<Ref<Mesh>const&,int,Transform3D_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001293f8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Ref<ArrayMesh>, Ref<ArrayMesh> const&, unsigned long>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<ArrayMesh>,Ref<ArrayMesh>const&,unsigned_long>::~MethodBindTR
          (MethodBindTR<Ref<ArrayMesh>,Ref<ArrayMesh>const&,unsigned_long> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129458;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Ref<ArrayMesh>, Ref<ArrayMesh> const&, unsigned long>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<ArrayMesh>,Ref<ArrayMesh>const&,unsigned_long>::~MethodBindTR
          (MethodBindTR<Ref<ArrayMesh>,Ref<ArrayMesh>const&,unsigned_long> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00129458;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Array>::~MethodBindTR() */

void __thiscall MethodBindTR<Array>::~MethodBindTR(MethodBindTR<Array> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001294b8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Array>::~MethodBindTR() */

void __thiscall MethodBindTR<Array>::~MethodBindTR(MethodBindTR<Array> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001294b8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00128838;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00128838;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* MethodBindT<Ref<Mesh> const&, int, Transform3D const&>::_gen_argument_type(int) const */

undefined8 __thiscall
MethodBindT<Ref<Mesh>const&,int,Transform3D_const&>::_gen_argument_type
          (MethodBindT<Ref<Mesh>const&,int,Transform3D_const&> *this,int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((((uint)param_1 < 3) && (uVar1 = 0x18, param_1 != 0)) && (uVar1 = 0x12, param_1 == 1)) {
    uVar1 = 2;
  }
  return uVar1;
}



/* MethodBindT<Ref<Mesh> const&, int, String const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<Ref<Mesh>const&,int,String_const&>::_gen_argument_type
          (MethodBindT<Ref<Mesh>const&,int,String_const&> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if (((uint)param_1 < 3) && (cVar1 = '\x18', param_1 != 0)) {
    cVar1 = (param_1 != 1) * '\x02' + '\x02';
  }
  return cVar1;
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
LAB_001103a3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001103a3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0011040e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0011040e:
  return &_get_class_namev()::_class_name_static;
}



/* SurfaceTool::_get_class_namev() const */

undefined8 * SurfaceTool::_get_class_namev(void)

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
LAB_00110483:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00110483;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"SurfaceTool");
      goto LAB_001104ee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"SurfaceTool");
LAB_001104ee:
  return &_get_class_namev()::_class_name_static;
}



/* CowData<SurfaceTool::WeightSort>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<SurfaceTool::WeightSort>::_copy_on_write(void)

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

void FUN_00110544(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
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



/* SurfaceTool::commit_to_arrays() [clone .cold] */

void SurfaceTool::commit_to_arrays(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* SurfaceTool::get_class() const */

void SurfaceTool::get_class(void)

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
            if (lVar5 == 0) goto LAB_001107af;
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
LAB_001107af:
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
    if (cVar6 != '\0') goto LAB_00110863;
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
              if (lVar5 == 0) goto LAB_00110913;
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
LAB_00110913:
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
      if (cVar6 != '\0') goto LAB_00110863;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00110863:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SurfaceTool::is_class(String const&) const */

undefined8 __thiscall SurfaceTool::is_class(SurfaceTool *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_00110a3f;
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
LAB_00110a3f:
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
    if (cVar5 != '\0') goto LAB_00110af3;
  }
  cVar5 = String::operator==(param_1,"SurfaceTool");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00110af3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<AABB>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<AABB>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC14;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x10;
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
      goto joined_r0x00110c8c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00110c8c:
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



/* MethodBindTR<Array>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Array>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC14;
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
      goto joined_r0x00110e0c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00110e0c:
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
LAB_00111158:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00111158;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00111176;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00111176:
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



/* SurfaceTool::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall SurfaceTool::_get_property_listv(SurfaceTool *this,List *param_1,bool param_2)

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
  local_78 = "SurfaceTool";
  local_70 = 0xb;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "SurfaceTool";
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
LAB_00111558:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00111558;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00111575;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00111575:
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
  StringName::StringName((StringName *)&local_78,"SurfaceTool",false);
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



/* Color::TEMPNAMEPLACEHOLDERVALUE(Color const&) const */

ulong __thiscall Color::operator!=(Color *this,Color *param_1)

{
  undefined8 in_RAX;
  ulong uVar1;
  
  if (((*(float *)this == *(float *)param_1) && (*(float *)(this + 4) == *(float *)(param_1 + 4)))
     && (*(float *)(this + 8) == *(float *)(param_1 + 8))) {
    uVar1 = CONCAT71((int7)((ulong)in_RAX >> 8),
                     NAN(*(float *)(this + 0xc)) || NAN(*(float *)(param_1 + 0xc))) & 0xffffffff;
    if (*(float *)(this + 0xc) != *(float *)(param_1 + 0xc)) {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 1;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LocalVector<SurfaceTool::Vertex, unsigned int, false, false>::resize(unsigned int) */

void __thiscall
LocalVector<SurfaceTool::Vertex,unsigned_int,false,false>::resize
          (LocalVector<SurfaceTool::Vertex,unsigned_int,false,false> *this,uint param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  
  uVar11 = *(uint *)this;
  if (param_1 < uVar11) {
    lVar10 = (ulong)param_1 * 0xb8;
    uVar11 = param_1;
    do {
      lVar9 = *(long *)(this + 8) + lVar10;
      if (*(long *)(lVar9 + 0xb0) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(lVar9 + 0xb0) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *(long *)(lVar9 + 0xb0);
          *(undefined8 *)(lVar9 + 0xb0) = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if (*(long *)(lVar9 + 0xa0) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(lVar9 + 0xa0) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *(long *)(lVar9 + 0xa0);
          *(undefined8 *)(lVar9 + 0xa0) = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 0xb8;
    } while (uVar11 < *(uint *)this);
  }
  else {
    if (param_1 <= uVar11) {
      return;
    }
    uVar8 = param_1 - 1;
    if (*(uint *)(this + 4) < param_1) {
      uVar11 = uVar8 >> 1 | uVar8;
      uVar11 = uVar11 | uVar11 >> 2;
      uVar11 = uVar11 | uVar11 >> 4;
      uVar11 = uVar11 | uVar11 >> 8;
      uVar11 = (uVar11 | uVar11 >> 0x10) + 1;
      *(uint *)(this + 4) = uVar11;
      lVar10 = Memory::realloc_static(*(void **)(this + 8),(ulong)uVar11 * 0xb8,false);
      *(long *)(this + 8) = lVar10;
      if (lVar10 == 0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar11 = *(uint *)this;
      if (param_1 <= uVar11) goto LAB_00111bfa;
    }
    uVar5 = _UNK_00129588;
    uVar4 = __LC71;
    lVar10 = *(long *)(this + 8);
    puVar6 = (undefined4 *)((ulong)uVar11 * 0xb8 + lVar10);
    do {
      *puVar6 = 0;
      puVar7 = puVar6 + 0x2e;
      *(undefined8 *)(puVar6 + 1) = uVar4;
      *(undefined8 *)(puVar6 + 3) = uVar5;
      *(undefined8 *)(puVar6 + 5) = 0;
      puVar6[7] = 0;
      *(undefined8 *)(puVar6 + 8) = 0;
      puVar6[10] = 0;
      *(undefined8 *)(puVar6 + 0xb) = 0;
      puVar6[0xd] = 0;
      *(undefined8 *)(puVar6 + 0xe) = 0;
      *(undefined8 *)(puVar6 + 0x10) = 0;
      *(undefined8 *)(puVar6 + 0x12) = uVar4;
      *(undefined8 *)(puVar6 + 0x14) = uVar5;
      *(undefined8 *)(puVar6 + 0x16) = uVar4;
      *(undefined8 *)(puVar6 + 0x18) = uVar5;
      *(undefined8 *)(puVar6 + 0x1a) = uVar4;
      *(undefined8 *)(puVar6 + 0x1c) = uVar5;
      *(undefined8 *)(puVar6 + 0x1e) = uVar4;
      *(undefined8 *)(puVar6 + 0x20) = uVar5;
      *(undefined8 *)(puVar6 + 0x22) = 0;
      puVar6[0x24] = 0;
      *(undefined8 *)(puVar6 + 0x28) = 0;
      *(undefined8 *)(puVar6 + 0x2c) = 0;
      puVar6 = puVar7;
    } while ((undefined4 *)(lVar10 + 0xb8 + ((ulong)(uVar8 - uVar11) + (ulong)uVar11) * 0xb8) !=
             puVar7);
  }
LAB_00111bfa:
  *(uint *)this = param_1;
  return;
}



/* SurfaceTool::~SurfaceTool() */

void __thiscall SurfaceTool::~SurfaceTool(SurfaceTool *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_00128998;
  if (*(long *)(this + 0x200) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x200) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x200);
      *(undefined8 *)(this + 0x200) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x1f0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1f0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x1f0);
      *(undefined8 *)(this + 0x1f0) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(void **)(this + 0x1b0) != (void *)0x0) {
    if (*(int *)(this + 0x1a8) != 0) {
      *(undefined4 *)(this + 0x1a8) = 0;
    }
    Memory::free_static(*(void **)(this + 0x1b0),false);
  }
  if (*(long *)(this + 0x1a0) != 0) {
    LocalVector<SurfaceTool::Vertex,unsigned_int,false,false>::resize
              ((LocalVector<SurfaceTool::Vertex,unsigned_int,false,false> *)(this + 0x198),0);
    if (*(void **)(this + 0x1a0) != (void *)0x0) {
      Memory::free_static(*(void **)(this + 0x1a0),false);
    }
  }
  if (*(long *)(this + 400) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 400);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_00128838;
  Object::~Object((Object *)this);
  return;
}



/* SurfaceTool::~SurfaceTool() */

void __thiscall SurfaceTool::~SurfaceTool(SurfaceTool *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_00128998;
  if (*(long *)(this + 0x200) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x200) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x200);
      *(undefined8 *)(this + 0x200) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x1f0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1f0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x1f0);
      *(undefined8 *)(this + 0x1f0) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(void **)(this + 0x1b0) != (void *)0x0) {
    if (*(int *)(this + 0x1a8) != 0) {
      *(undefined4 *)(this + 0x1a8) = 0;
    }
    Memory::free_static(*(void **)(this + 0x1b0),false);
  }
  if (*(long *)(this + 0x1a0) != 0) {
    LocalVector<SurfaceTool::Vertex,unsigned_int,false,false>::resize
              ((LocalVector<SurfaceTool::Vertex,unsigned_int,false,false> *)(this + 0x198),0);
    if (*(void **)(this + 0x1a0) != (void *)0x0) {
      Memory::free_static(*(void **)(this + 0x1a0),false);
    }
  }
  if (*(long *)(this + 400) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 400);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_00128838;
  Object::~Object((Object *)this);
  operator_delete(this,0x270);
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



/* WARNING: Removing unreachable block (ram,0x00112260) */
/* WARNING: Removing unreachable block (ram,0x001123f5) */
/* WARNING: Removing unreachable block (ram,0x00112401) */
/* String vformat<long, int>(String const&, long const, int const) */

String * vformat<long,int>(String *param_1,long param_2,int param_3)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int in_ECX;
  undefined4 in_register_00000014;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d8 [8];
  undefined8 local_d0 [9];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_88,CONCAT44(in_register_00000014,param_3));
  Variant::Variant(local_70,in_ECX);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,(bool *)param_2);
  *(undefined8 *)param_1 = local_d0[0];
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_d8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_88);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
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
  String::split(local_58,SUB81(param_1,0),0x112432);
  if ((local_50 != (long *)0x0) && (2 < local_50[-1])) {
    local_60 = 0;
    local_48 = &_LC75;
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
        goto LAB_001124fd;
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
  local_48 = &_LC75;
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
LAB_001124fd:
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



/* GetTypeInfo<SurfaceTool::SkinWeightCount, void>::get_class_info() */

GetTypeInfo<SurfaceTool::SkinWeightCount,void> * __thiscall
GetTypeInfo<SurfaceTool::SkinWeightCount,void>::get_class_info
          (GetTypeInfo<SurfaceTool::SkinWeightCount,void> *this)

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
  local_48 = "SurfaceTool::SkinWeightCount";
  local_40 = 0x1c;
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



/* MethodBindTRC<Mesh::PrimitiveType>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Mesh::PrimitiveType>::_gen_argument_type_info(int param_1)

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
  local_48 = "Mesh::PrimitiveType";
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



/* MethodBindTRC<SurfaceTool::SkinWeightCount>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<SurfaceTool::SkinWeightCount>::_gen_argument_type_info(int param_1)

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
  local_30 = 0x1c;
  local_38 = "SurfaceTool::SkinWeightCount";
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



/* MethodBindT<Array const&, Mesh::PrimitiveType>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<Array_const&,Mesh::PrimitiveType>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *this;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  ulong local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  this = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 6;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_78 = 0;
    local_80 = 0;
    local_68 = "";
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    String::parse_latin1((StrRange *)&local_80);
    local_88 = 0;
    local_68 = (char *)CONCAT44(local_68._4_4_,0x1c);
    local_50 = local_50 & 0xffffffff00000000;
    local_48 = 0;
    local_60 = (undefined1  [16])0x0;
    if (local_80 == 0) {
LAB_00112cd8:
      local_40 = 6;
      StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
      local_40 = 6;
      if ((int)local_50 != 0x11) goto LAB_00112cd8;
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
  }
  else {
    if (in_EDX != 1) goto LAB_00112ad4;
    local_80 = 0;
    local_60._0_8_ = 0x13;
    local_68 = "Mesh::PrimitiveType";
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name((details *)&local_78,(String *)&local_80)
    ;
    StringName::StringName((StringName *)&local_70,(String *)&local_78,false);
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
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  }
  PropertyInfo::operator=(this,(PropertyInfo *)&local_68);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_00112ad4:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
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
  if (in_EDX != 0) goto LAB_00112d89;
  local_78 = 0;
  local_68 = &_LC14;
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
LAB_00112e85:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00112e85;
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
LAB_00112d89:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<unsigned int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<unsigned_int>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != 0) goto LAB_00112ff9;
  local_78 = 0;
  local_68 = &_LC14;
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
LAB_001130f5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_001130f5;
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
LAB_00112ff9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<Vector<float> const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Vector<float>const&>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != 0) goto LAB_00113269;
  local_78 = 0;
  local_68 = &_LC14;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x20);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00113365:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00113365;
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
LAB_00113269:
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
  if (in_EDX != 0) goto LAB_001134d9;
  local_78 = 0;
  local_68 = &_LC14;
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
LAB_001135d5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_001135d5;
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
LAB_001134d9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<Color>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Color>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != 0) goto LAB_00113749;
  local_78 = 0;
  local_68 = &_LC14;
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
LAB_00113845:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00113845;
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
LAB_00113749:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<Ref<Material> const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Ref<Material>const&>::_gen_argument_type_info(int param_1)

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
  char *local_68;
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
  if (in_EDX != 0) goto LAB_001139c9;
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
LAB_00113b85:
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
    if (local_50 == 0x11) goto LAB_00113b85;
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
LAB_001139c9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar4;
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
  if (in_EDX != 0) goto LAB_00113c39;
  local_78 = 0;
  local_68 = &_LC14;
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
LAB_00113d35:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00113d35;
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
LAB_00113c39:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
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
  if (in_EDX != 0) goto LAB_00113ea9;
  local_78 = 0;
  local_68 = &_LC14;
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
LAB_00113fa5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00113fa5;
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
LAB_00113ea9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<Vector<int> const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Vector<int>const&>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != 0) goto LAB_00114119;
  local_78 = 0;
  local_68 = &_LC14;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x1e);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00114215:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00114215;
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
LAB_00114119:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<Mesh::PrimitiveType>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Mesh::PrimitiveType>::_gen_argument_type_info(int param_1)

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
    local_68 = "Mesh::PrimitiveType";
    local_60._0_8_ = 0x13;
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



/* MethodBindT<SurfaceTool::SkinWeightCount>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<SurfaceTool::SkinWeightCount>::_gen_argument_type_info(int param_1)

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
    local_68 = "SurfaceTool::SkinWeightCount";
    local_60._0_8_ = 0x1c;
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



/* MethodBind* create_method_bind<SurfaceTool, SurfaceTool::SkinWeightCount>(void
   (SurfaceTool::*)(SurfaceTool::SkinWeightCount)) */

MethodBind *
create_method_bind<SurfaceTool,SurfaceTool::SkinWeightCount>(_func_void_SkinWeightCount *param_1)

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
  *(_func_void_SkinWeightCount **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00128af8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "SurfaceTool";
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



/* MethodBind* create_method_bind<SurfaceTool,
   SurfaceTool::SkinWeightCount>(SurfaceTool::SkinWeightCount (SurfaceTool::*)() const) */

MethodBind *
create_method_bind<SurfaceTool,SurfaceTool::SkinWeightCount>(_func_SkinWeightCount *param_1)

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
  *(_func_SkinWeightCount **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00128b58;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "SurfaceTool";
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



/* MethodBind* create_method_bind<SurfaceTool, int, SurfaceTool::CustomFormat>(void
   (SurfaceTool::*)(int, SurfaceTool::CustomFormat)) */

MethodBind *
create_method_bind<SurfaceTool,int,SurfaceTool::CustomFormat>(_func_void_int_CustomFormat *param_1)

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
  *(_func_void_int_CustomFormat **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00128bb8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "SurfaceTool";
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



/* MethodBind* create_method_bind<SurfaceTool, SurfaceTool::CustomFormat,
   int>(SurfaceTool::CustomFormat (SurfaceTool::*)(int) const) */

MethodBind *
create_method_bind<SurfaceTool,SurfaceTool::CustomFormat,int>(_func_CustomFormat_int *param_1)

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
  *(_func_CustomFormat_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00128c18;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "SurfaceTool";
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



/* MethodBind* create_method_bind<SurfaceTool, Mesh::PrimitiveType>(void
   (SurfaceTool::*)(Mesh::PrimitiveType)) */

MethodBind * create_method_bind<SurfaceTool,Mesh::PrimitiveType>(_func_void_PrimitiveType *param_1)

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
  *(_func_void_PrimitiveType **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00128c78;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "SurfaceTool";
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



/* MethodBind* create_method_bind<SurfaceTool, Vector3 const&>(void (SurfaceTool::*)(Vector3
   const&)) */

MethodBind * create_method_bind<SurfaceTool,Vector3_const&>(_func_void_Vector3_ptr *param_1)

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
  *(_func_void_Vector3_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00128cd8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "SurfaceTool";
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



/* MethodBind* create_method_bind<SurfaceTool, Color>(void (SurfaceTool::*)(Color)) */

MethodBind * create_method_bind<SurfaceTool,Color>(_func_void_Color *param_1)

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
  *(_func_void_Color **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00128d38;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "SurfaceTool";
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



/* MethodBind* create_method_bind<SurfaceTool, Plane const&>(void (SurfaceTool::*)(Plane const&)) */

MethodBind * create_method_bind<SurfaceTool,Plane_const&>(_func_void_Plane_ptr *param_1)

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
  *(_func_void_Plane_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00128d98;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "SurfaceTool";
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



/* MethodBind* create_method_bind<SurfaceTool, Vector2 const&>(void (SurfaceTool::*)(Vector2
   const&)) */

MethodBind * create_method_bind<SurfaceTool,Vector2_const&>(_func_void_Vector2_ptr *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00128df8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "SurfaceTool";
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



/* MethodBind* create_method_bind<SurfaceTool, Vector<int> const&>(void (SurfaceTool::*)(Vector<int>
   const&)) */

MethodBind * create_method_bind<SurfaceTool,Vector<int>const&>(_func_void_Vector_ptr *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00128e58;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "SurfaceTool";
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



/* MethodBind* create_method_bind<SurfaceTool, Vector<float> const&>(void
   (SurfaceTool::*)(Vector<float> const&)) */

MethodBind * create_method_bind<SurfaceTool,Vector<float>const&>(_func_void_Vector_ptr *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00128eb8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "SurfaceTool";
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



/* MethodBind* create_method_bind<SurfaceTool, int, Color const&>(void (SurfaceTool::*)(int, Color
   const&)) */

MethodBind * create_method_bind<SurfaceTool,int,Color_const&>(_func_void_int_Color_ptr *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00128f18;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "SurfaceTool";
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



/* MethodBind* create_method_bind<SurfaceTool, unsigned int>(void (SurfaceTool::*)(unsigned int)) */

MethodBind * create_method_bind<SurfaceTool,unsigned_int>(_func_void_uint *param_1)

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
  *(_func_void_uint **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00128f78;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "SurfaceTool";
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



/* MethodBind* create_method_bind<SurfaceTool, Vector<Vector3> const&, Vector<Vector2> const&,
   Vector<Color> const&, Vector<Vector2> const&, Vector<Vector3> const&, TypedArray<Plane>
   const&>(void (SurfaceTool::*)(Vector<Vector3> const&, Vector<Vector2> const&, Vector<Color>
   const&, Vector<Vector2> const&, Vector<Vector3> const&, TypedArray<Plane> const&)) */

MethodBind *
create_method_bind<SurfaceTool,Vector<Vector3>const&,Vector<Vector2>const&,Vector<Color>const&,Vector<Vector2>const&,Vector<Vector3>const&,TypedArray<Plane>const&>
          (_func_void_Vector_ptr_Vector_ptr_Vector_ptr_Vector_ptr_Vector_ptr_TypedArray_ptr *param_1
          )

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
  *(_func_void_Vector_ptr_Vector_ptr_Vector_ptr_Vector_ptr_Vector_ptr_TypedArray_ptr **)
   (this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00128fd8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 6;
  local_40 = 0;
  local_38 = "SurfaceTool";
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



/* MethodBind* create_method_bind<SurfaceTool, int>(void (SurfaceTool::*)(int)) */

MethodBind * create_method_bind<SurfaceTool,int>(_func_void_int *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00129038;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "SurfaceTool";
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



/* MethodBind* create_method_bind<SurfaceTool>(void (SurfaceTool::*)()) */

MethodBind * create_method_bind<SurfaceTool>(_func_void *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00129098;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "SurfaceTool";
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



/* MethodBind* create_method_bind<SurfaceTool, bool>(void (SurfaceTool::*)(bool)) */

MethodBind * create_method_bind<SurfaceTool,bool>(_func_void_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_001290f8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "SurfaceTool";
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



/* MethodBind* create_method_bind<SurfaceTool, AABB>(AABB (SurfaceTool::*)() const) */

MethodBind * create_method_bind<SurfaceTool,AABB>(_func_AABB *param_1)

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
  *(_func_AABB **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00129158;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "SurfaceTool";
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



/* MethodBind* create_method_bind<SurfaceTool, Vector<int>, float, int>(Vector<int>
   (SurfaceTool::*)(float, int)) */

MethodBind * create_method_bind<SurfaceTool,Vector<int>,float,int>(_func_Vector_float_int *param_1)

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
  *(_func_Vector_float_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001291b8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "SurfaceTool";
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



/* MethodBind* create_method_bind<SurfaceTool, Ref<Material> const&>(void
   (SurfaceTool::*)(Ref<Material> const&)) */

MethodBind * create_method_bind<SurfaceTool,Ref<Material>const&>(_func_void_Ref_ptr *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00129218;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "SurfaceTool";
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



/* MethodBind* create_method_bind<SurfaceTool, Mesh::PrimitiveType>(Mesh::PrimitiveType
   (SurfaceTool::*)() const) */

MethodBind * create_method_bind<SurfaceTool,Mesh::PrimitiveType>(_func_PrimitiveType *param_1)

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
  *(_func_PrimitiveType **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00129278;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "SurfaceTool";
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



/* MethodBind* create_method_bind<SurfaceTool, Ref<Mesh> const&, int>(void
   (SurfaceTool::*)(Ref<Mesh> const&, int)) */

MethodBind * create_method_bind<SurfaceTool,Ref<Mesh>const&,int>(_func_void_Ref_ptr_int *param_1)

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
  *(_func_void_Ref_ptr_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001292d8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "SurfaceTool";
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



/* MethodBind* create_method_bind<SurfaceTool, Array const&, Mesh::PrimitiveType>(void
   (SurfaceTool::*)(Array const&, Mesh::PrimitiveType)) */

MethodBind *
create_method_bind<SurfaceTool,Array_const&,Mesh::PrimitiveType>
          (_func_void_Array_ptr_PrimitiveType *param_1)

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
  *(_func_void_Array_ptr_PrimitiveType **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00129338;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "SurfaceTool";
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



/* MethodBind* create_method_bind<SurfaceTool, Ref<Mesh> const&, int, String const&>(void
   (SurfaceTool::*)(Ref<Mesh> const&, int, String const&)) */

MethodBind *
create_method_bind<SurfaceTool,Ref<Mesh>const&,int,String_const&>
          (_func_void_Ref_ptr_int_String_ptr *param_1)

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
  *(_func_void_Ref_ptr_int_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00129398;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 3;
  local_40 = 0;
  local_38 = "SurfaceTool";
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



/* MethodBind* create_method_bind<SurfaceTool, Ref<Mesh> const&, int, Transform3D const&>(void
   (SurfaceTool::*)(Ref<Mesh> const&, int, Transform3D const&)) */

MethodBind *
create_method_bind<SurfaceTool,Ref<Mesh>const&,int,Transform3D_const&>
          (_func_void_Ref_ptr_int_Transform3D_ptr *param_1)

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
  *(_func_void_Ref_ptr_int_Transform3D_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001293f8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 3;
  local_40 = 0;
  local_38 = "SurfaceTool";
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



/* MethodBind* create_method_bind<SurfaceTool, Ref<ArrayMesh>, Ref<ArrayMesh> const&, unsigned
   long>(Ref<ArrayMesh> (SurfaceTool::*)(Ref<ArrayMesh> const&, unsigned long)) */

MethodBind *
create_method_bind<SurfaceTool,Ref<ArrayMesh>,Ref<ArrayMesh>const&,unsigned_long>
          (_func_Ref_Ref_ptr_ulong *param_1)

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
  *(_func_Ref_Ref_ptr_ulong **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00129458;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "SurfaceTool";
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



/* MethodBind* create_method_bind<SurfaceTool, Array>(Array (SurfaceTool::*)()) */

MethodBind * create_method_bind<SurfaceTool,Array>(_func_Array *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_001294b8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "SurfaceTool";
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



/* SurfaceTool::_initialize_classv() */

void SurfaceTool::_initialize_classv(void)

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
    local_48 = "SurfaceTool";
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
    initialize_class()::initialized = '\x01';
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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
          if (puVar4 == (undefined8 *)0x0) goto LAB_00116bb1;
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
            if (puVar4 == (undefined8 *)0x0) goto LAB_00116c70;
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
LAB_00116bb1:
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        else {
          puVar5 = (undefined8 *)Memory::realloc_static(puVar4 + -2,uVar3 + 0x11,false);
          if (puVar5 == (undefined8 *)0x0) {
LAB_00116c70:
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
          if (puVar4 == (undefined8 *)0x0) goto LAB_00116ed1;
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
            if (puVar4 == (undefined8 *)0x0) goto LAB_00116f90;
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
LAB_00116ed1:
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        else {
          puVar5 = (undefined8 *)Memory::realloc_static(puVar4 + -2,uVar3 + 0x11,false);
          if (puVar5 == (undefined8 *)0x0) {
LAB_00116f90:
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



/* AHashMap<int const*, bool, SurfaceTool::TriangleHasher,
   SurfaceTool::TriangleHasher>::_resize_and_rehash(unsigned int) */

void __thiscall
AHashMap<int_const*,bool,SurfaceTool::TriangleHasher,SurfaceTool::TriangleHasher>::
_resize_and_rehash(AHashMap<int_const*,bool,SurfaceTool::TriangleHasher,SurfaceTool::TriangleHasher>
                   *this,uint param_1)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  ulong __n;
  
  uVar3 = *(uint *)(this + 0x10);
  plVar4 = *(long **)(this + 8);
  uVar8 = 4;
  if (3 < param_1) {
    uVar8 = param_1;
  }
  uVar8 = uVar8 - 1 | uVar8 - 1 >> 1;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  *(uint *)(this + 0x10) = uVar8;
  __n = (ulong)(uVar8 + 1) << 3;
  uVar10 = Memory::alloc_static(__n,false);
  *(undefined8 *)(this + 8) = uVar10;
  uVar10 = Memory::realloc_static
                     (*(void **)this,
                      (ulong)((*(uint *)(this + 0x10) + 1 >> 2 ^ *(uint *)(this + 0x10)) + 1) << 4,
                      false);
  *(undefined8 *)this = uVar10;
  memset(*(void **)(this + 8),0,__n);
  if ((*(int *)(this + 0x14) != 0) && (uVar3 != 0xffffffff)) {
    plVar14 = plVar4;
    do {
      while (lVar5 = *plVar14, lVar5 == 0) {
LAB_00117088:
        plVar14 = plVar14 + 1;
        if (plVar14 == plVar4 + (ulong)uVar3 + 1) goto LAB_001170bc;
      }
      uVar8 = *(uint *)(this + 0x10);
      lVar6 = *(long *)(this + 8);
      uVar9 = uVar8 & (uint)lVar5;
      plVar1 = (long *)(lVar6 + (ulong)uVar9 * 8);
      if (*plVar1 != 0) {
        uVar12 = 1;
        uVar9 = uVar9 + 1 & uVar8;
        puVar2 = (uint *)(lVar6 + (ulong)uVar9 * 8);
        lVar7 = *(long *)puVar2;
        while (lVar7 != 0) {
          uVar11 = (uVar9 + uVar8 + 1) - (*puVar2 & uVar8) & uVar8;
          lVar13 = lVar5;
          if (uVar11 < uVar12) {
            lVar13 = *(long *)puVar2;
            *(long *)puVar2 = lVar5;
            uVar12 = uVar11;
          }
          uVar12 = uVar12 + 1;
          uVar9 = uVar9 + 1 & uVar8;
          puVar2 = (uint *)(lVar6 + (ulong)uVar9 * 8);
          lVar5 = lVar13;
          lVar7 = *(long *)puVar2;
        }
        *(long *)puVar2 = lVar5;
        goto LAB_00117088;
      }
      plVar14 = plVar14 + 1;
      *plVar1 = lVar5;
    } while (plVar14 != plVar4 + (ulong)uVar3 + 1);
  }
LAB_001170bc:
  Memory::free_static(plVar4,false);
  return;
}



/* CowData<SurfaceTool::WeightSort>::_realloc(long) */

undefined8 __thiscall
CowData<SurfaceTool::WeightSort>::_realloc(CowData<SurfaceTool::WeightSort> *this,long param_1)

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
/* Error CowData<SurfaceTool::WeightSort>::resize<false>(long) */

undefined8 __thiscall
CowData<SurfaceTool::WeightSort>::resize<false>(CowData<SurfaceTool::WeightSort> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  
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
    lVar10 = 0;
    lVar3 = 0;
  }
  else {
    lVar10 = *(long *)(lVar3 + -8);
    if (param_1 == lVar10) {
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
  if (param_1 * 8 == 0) {
LAB_001173f0:
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
  lVar9 = uVar4 + 1;
  if (lVar9 == 0) goto LAB_001173f0;
  if (param_1 <= lVar10) {
    if ((lVar9 != lVar3) && (uVar7 = _realloc(this,lVar9), (int)uVar7 != 0)) {
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
  if (lVar9 == lVar3) {
LAB_0011735c:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar8[-1];
    if (param_1 <= lVar3) goto LAB_001172ee;
  }
  else {
    if (lVar10 != 0) {
      uVar7 = _realloc(this,lVar9);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      goto LAB_0011735c;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar3 = 0;
  }
  puVar5 = puVar8 + lVar3;
  do {
    *(undefined4 *)puVar5 = 0;
    puVar6 = puVar5 + 1;
    *(undefined4 *)((long)puVar5 + 4) = 0;
    puVar5 = puVar6;
  } while (puVar6 != puVar8 + param_1);
LAB_001172ee:
  puVar8[-1] = param_1;
  return 0;
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



/* AHashMap<SurfaceTool::Vertex&, int, SurfaceTool::VertexHasher,
   HashMapComparatorDefault<SurfaceTool::Vertex&> >::_resize_and_rehash(unsigned int) */

void __thiscall
AHashMap<SurfaceTool::Vertex&,int,SurfaceTool::VertexHasher,HashMapComparatorDefault<SurfaceTool::Vertex&>>
::_resize_and_rehash
          (AHashMap<SurfaceTool::Vertex&,int,SurfaceTool::VertexHasher,HashMapComparatorDefault<SurfaceTool::Vertex&>>
           *this,uint param_1)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  ulong __n;
  
  uVar3 = *(uint *)(this + 0x10);
  plVar4 = *(long **)(this + 8);
  uVar8 = 4;
  if (3 < param_1) {
    uVar8 = param_1;
  }
  uVar8 = uVar8 - 1 | uVar8 - 1 >> 1;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  *(uint *)(this + 0x10) = uVar8;
  __n = (ulong)(uVar8 + 1) << 3;
  uVar10 = Memory::alloc_static(__n,false);
  *(undefined8 *)(this + 8) = uVar10;
  uVar10 = Memory::realloc_static
                     (*(void **)this,
                      (ulong)((*(uint *)(this + 0x10) + 1 >> 2 ^ *(uint *)(this + 0x10)) + 1) << 4,
                      false);
  *(undefined8 *)this = uVar10;
  memset(*(void **)(this + 8),0,__n);
  if ((*(int *)(this + 0x14) != 0) && (uVar3 != 0xffffffff)) {
    plVar14 = plVar4;
    do {
      while (lVar5 = *plVar14, lVar5 == 0) {
LAB_00117628:
        plVar14 = plVar14 + 1;
        if (plVar14 == plVar4 + (ulong)uVar3 + 1) goto LAB_0011765c;
      }
      uVar8 = *(uint *)(this + 0x10);
      lVar6 = *(long *)(this + 8);
      uVar9 = uVar8 & (uint)lVar5;
      plVar1 = (long *)(lVar6 + (ulong)uVar9 * 8);
      if (*plVar1 != 0) {
        uVar12 = 1;
        uVar9 = uVar9 + 1 & uVar8;
        puVar2 = (uint *)(lVar6 + (ulong)uVar9 * 8);
        lVar7 = *(long *)puVar2;
        while (lVar7 != 0) {
          uVar11 = (uVar9 + uVar8 + 1) - (*puVar2 & uVar8) & uVar8;
          lVar13 = lVar5;
          if (uVar11 < uVar12) {
            lVar13 = *(long *)puVar2;
            *(long *)puVar2 = lVar5;
            uVar12 = uVar11;
          }
          uVar12 = uVar12 + 1;
          uVar9 = uVar9 + 1 & uVar8;
          puVar2 = (uint *)(lVar6 + (ulong)uVar9 * 8);
          lVar5 = lVar13;
          lVar7 = *(long *)puVar2;
        }
        *(long *)puVar2 = lVar5;
        goto LAB_00117628;
      }
      plVar14 = plVar14 + 1;
      *plVar1 = lVar5;
    } while (plVar14 != plVar4 + (ulong)uVar3 + 1);
  }
LAB_0011765c:
  Memory::free_static(plVar4,false);
  return;
}



/* AHashMap<SurfaceTool::SmoothGroupVertex, Vector3, SurfaceTool::SmoothGroupVertexHasher,
   HashMapComparatorDefault<SurfaceTool::SmoothGroupVertex> >::_resize_and_rehash(unsigned int) */

void __thiscall
AHashMap<SurfaceTool::SmoothGroupVertex,Vector3,SurfaceTool::SmoothGroupVertexHasher,HashMapComparatorDefault<SurfaceTool::SmoothGroupVertex>>
::_resize_and_rehash
          (AHashMap<SurfaceTool::SmoothGroupVertex,Vector3,SurfaceTool::SmoothGroupVertexHasher,HashMapComparatorDefault<SurfaceTool::SmoothGroupVertex>>
           *this,uint param_1)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  ulong __n;
  
  uVar3 = *(uint *)(this + 0x10);
  plVar4 = *(long **)(this + 8);
  uVar8 = 4;
  if (3 < param_1) {
    uVar8 = param_1;
  }
  uVar8 = uVar8 - 1 | uVar8 - 1 >> 1;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  *(uint *)(this + 0x10) = uVar8;
  __n = (ulong)(uVar8 + 1) << 3;
  uVar10 = Memory::alloc_static(__n,false);
  *(undefined8 *)(this + 8) = uVar10;
  uVar10 = Memory::realloc_static
                     (*(void **)this,
                      (ulong)((*(uint *)(this + 0x10) + 1 >> 2 ^ *(uint *)(this + 0x10)) + 1) * 0x1c
                      ,false);
  *(undefined8 *)this = uVar10;
  memset(*(void **)(this + 8),0,__n);
  if ((*(int *)(this + 0x14) != 0) && (uVar3 != 0xffffffff)) {
    plVar14 = plVar4;
    do {
      while (lVar5 = *plVar14, lVar5 == 0) {
LAB_00117780:
        plVar14 = plVar14 + 1;
        if (plVar14 == plVar4 + (ulong)uVar3 + 1) goto LAB_001177b4;
      }
      uVar8 = *(uint *)(this + 0x10);
      lVar6 = *(long *)(this + 8);
      uVar9 = uVar8 & (uint)lVar5;
      plVar1 = (long *)(lVar6 + (ulong)uVar9 * 8);
      if (*plVar1 != 0) {
        uVar12 = 1;
        uVar9 = uVar9 + 1 & uVar8;
        puVar2 = (uint *)(lVar6 + (ulong)uVar9 * 8);
        lVar7 = *(long *)puVar2;
        while (lVar7 != 0) {
          uVar11 = (uVar9 + uVar8 + 1) - (*puVar2 & uVar8) & uVar8;
          lVar13 = lVar5;
          if (uVar11 < uVar12) {
            lVar13 = *(long *)puVar2;
            *(long *)puVar2 = lVar5;
            uVar12 = uVar11;
          }
          uVar12 = uVar12 + 1;
          uVar9 = uVar9 + 1 & uVar8;
          puVar2 = (uint *)(lVar6 + (ulong)uVar9 * 8);
          lVar5 = lVar13;
          lVar7 = *(long *)puVar2;
        }
        *(long *)puVar2 = lVar5;
        goto LAB_00117780;
      }
      plVar14 = plVar14 + 1;
      *plVar1 = lVar5;
    } while (plVar14 != plVar4 + (ulong)uVar3 + 1);
  }
LAB_001177b4:
  Memory::free_static(plVar4,false);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00117948) */
/* WARNING: Removing unreachable block (ram,0x00117add) */
/* WARNING: Removing unreachable block (ram,0x00117ae9) */
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



/* MethodBindTR<Array>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<Array>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC213,"./core/object/method_bind.h",0x207,
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
      goto LAB_00117cf0;
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
      (*(code *)pVVar4)((Array *)&local_58);
      Variant::Variant((Variant *)local_48,(Array *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
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
LAB_00117cf0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Array>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Array>::validated_call
          (MethodBindTR<Array> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      local_48 = (Variant **)0x117b38;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00117ff9;
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
LAB_00117ff9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Array>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Array>::ptrcall(MethodBindTR<Array> *this,Object *param_1,void **param_2,void *param_3)

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
      local_48 = (void **)0x117b38;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001181ca;
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
LAB_001181ca:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Array const&, Mesh::PrimitiveType>::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<Array_const&,Mesh::PrimitiveType>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

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
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
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
      goto LAB_0011853a;
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
                    /* WARNING: Could not recover jumptable at 0x001183a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8,
               *(undefined4 *)(*(long *)(param_3 + 8) + 8));
    return;
  }
LAB_0011853a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Array const&, Mesh::PrimitiveType>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Array_const&,Mesh::PrimitiveType>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
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
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar2) {
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar2 = (long *)(local_40 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
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
      goto LAB_00118732;
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
                    /* WARNING: Could not recover jumptable at 0x0011859b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3,
               **(undefined4 **)((long)param_3 + 8));
    return;
  }
LAB_00118732:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Mesh::PrimitiveType>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<Mesh::PrimitiveType>::call
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
      _err_print_error(&_LC213,"./core/object/method_bind.h",0x267,
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
      goto LAB_00118800;
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
LAB_00118800:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Mesh::PrimitiveType>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Mesh::PrimitiveType>::validated_call
          (MethodBindTRC<Mesh::PrimitiveType> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  char *pcVar1;
  uint uVar2;
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
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
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
      goto LAB_00118a64;
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
  *(ulong *)(param_3 + 8) = (ulong)uVar2;
LAB_00118a64:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Mesh::PrimitiveType>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Mesh::PrimitiveType>::ptrcall
          (MethodBindTRC<Mesh::PrimitiveType> *this,Object *param_1,void **param_2,void *param_3)

{
  char *pcVar1;
  uint uVar2;
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
      goto LAB_00118c43;
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
  *(ulong *)param_3 = (ulong)uVar2;
LAB_00118c43:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<int>, float, int>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTR<Vector<int>,float,int>::validated_call
          (MethodBindTR<Vector<int>,float,int> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  undefined1 auVar4 [16];
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
      goto LAB_00118e8c;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  auVar4._4_12_ = SUB1612((undefined1  [16])0x0,4);
  auVar4._0_4_ = (float)*(double *)(*param_2 + 8);
  (*pcVar2)(auVar4._0_8_,(StringName *)&local_48,param_1 + *(long *)(this + 0x60),
            *(undefined4 *)(param_2[1] + 8));
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
LAB_00118e8c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<int>, float, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Vector<int>,float,int>::ptrcall
          (MethodBindTR<Vector<int>,float,int> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  undefined1 auVar4 [16];
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
      goto LAB_001190b8;
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
  auVar4._4_12_ = SUB1612((undefined1  [16])0x0,4);
  auVar4._0_4_ = (float)**param_2;
                    /* WARNING: Load size is inaccurate */
  (*pcVar2)(auVar4._0_8_,(StringName *)&local_48,param_1 + *(long *)(this + 0x60),*param_2[1]);
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
LAB_001190b8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<AABB>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<AABB>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined8 uStack_58;
  AABB local_48 [24];
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_78,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_78 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_80 = 0;
      local_70 = 0x35;
      String::parse_latin1((StrRange *)&local_80);
      vformat<StringName>((StringName *)&local_78,(StrRange *)&local_80,&local_88);
      _err_print_error(&_LC213,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_78,0,0);
      pcVar3 = local_78;
      if (local_78 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_78 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_78 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_80;
      if (local_80 != 0) {
        LOCK();
        plVar6 = (long *)(local_80 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_80 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_00119310;
    }
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
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
      (*(code *)pVVar4)(local_48);
      Variant::Variant((Variant *)local_68,local_48);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_68[0];
      *(undefined8 *)(param_1 + 8) = local_60;
      *(undefined8 *)(param_1 + 0x10) = uStack_58;
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
LAB_00119310:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<AABB>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<AABB>::validated_call
          (MethodBindTRC<AABB> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *plVar3;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Variant **local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (Variant **)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Variant **)0x117b38;
      local_50 = 0x35;
      local_60 = 0;
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
      goto LAB_00119589;
    }
    param_2 = local_58;
    if ((StringName::configured != '\0') && (local_58 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)(pcVar2 + (long)param_2 + -1);
  }
  (*pcVar2)(&local_48,param_1 + *(long *)(this + 0x60),param_2);
  puVar1 = *(undefined8 **)(param_3 + 8);
  puVar1[2] = local_38;
  *puVar1 = local_48;
  puVar1[1] = uStack_40;
LAB_00119589:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<AABB>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<AABB>::ptrcall(MethodBindTRC<AABB> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  void **local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
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
    if (local_58 == (void **)*plVar2) {
      if ((StringName::configured != '\0') && (local_58 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (void **)0x117b38;
      local_50 = 0x35;
      local_60 = 0;
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
      goto LAB_00119757;
    }
    param_2 = local_58;
    if ((StringName::configured != '\0') && (local_58 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)(&local_48,param_1 + *(long *)(this + 0x60),param_2);
  *(undefined8 *)((long)param_3 + 0x10) = local_38;
  *(undefined8 *)param_3 = local_48;
  *(undefined8 *)((long)param_3 + 8) = uStack_40;
LAB_00119757:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<bool>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
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
      goto LAB_00119ac2;
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
                    /* WARNING: Could not recover jumptable at 0x00119929. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00119ac2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_00119ccc;
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
                    /* WARNING: Could not recover jumptable at 0x00119b32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3 != '\0');
    return;
  }
LAB_00119ccc:
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
      _err_print_error(&_LC213,"./core/object/method_bind.h",0x154,
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
      goto LAB_00119df0;
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
LAB_00119df0:
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
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar3;
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
      pVVar3 = param_2[0x23];
      if (pVVar3 == (Variant *)0x0) {
        pVVar3 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar3 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar3) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011a1d2;
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
                    /* WARNING: Could not recover jumptable at 0x0011a056. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011a1d2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
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
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar2) {
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar2 = (long *)(local_40 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
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
      goto LAB_0011a3a8;
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
                    /* WARNING: Could not recover jumptable at 0x0011a232. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011a3a8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar3;
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
      pVVar3 = param_2[0x23];
      if (pVVar3 == (Variant *)0x0) {
        pVVar3 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar3 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar3) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011a5a4;
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
                    /* WARNING: Could not recover jumptable at 0x0011a40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0011a5a4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0011a7a4;
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
                    /* WARNING: Could not recover jumptable at 0x0011a60b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0011a7a4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<unsigned int>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<unsigned_int>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
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
      goto LAB_0011a9a2;
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
                    /* WARNING: Could not recover jumptable at 0x0011a808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0011a9a2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<unsigned int>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<unsigned_int>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0011aba4;
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
                    /* WARNING: Could not recover jumptable at 0x0011aa0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0011aba4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Color const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int,Color_const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar3;
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
      pVVar3 = param_2[0x23];
      if (pVVar3 == (Variant *)0x0) {
        pVVar3 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar3 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar3) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011ad92;
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
                    /* WARNING: Could not recover jumptable at 0x0011ac19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8),*(long *)(param_3 + 8) + 8);
    return;
  }
LAB_0011ad92:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Color const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int,Color_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0011af9c;
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
                    /* WARNING: Could not recover jumptable at 0x0011ae02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               *(undefined8 *)((long)param_3 + 8));
    return;
  }
LAB_0011af9c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<float> const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Vector<float>const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar3;
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
      pVVar3 = param_2[0x23];
      if (pVVar3 == (Variant *)0x0) {
        pVVar3 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar3 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar3) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011b1ac;
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
                    /* WARNING: Could not recover jumptable at 0x0011b011. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(long *)(*(long *)param_3 + 8) + 0x10);
    return;
  }
LAB_0011b1ac:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<float> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Vector<float>const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0011b3b4;
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
                    /* WARNING: Could not recover jumptable at 0x0011b219. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0011b3b4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<int> const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Vector<int>const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

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
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
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
      goto LAB_0011b5b2;
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
                    /* WARNING: Could not recover jumptable at 0x0011b41d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(long *)(*(long *)param_3 + 8) + 0x10);
    return;
  }
LAB_0011b5b2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<int> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Vector<int>const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
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
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar2) {
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar2 = (long *)(local_40 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
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
      goto LAB_0011b7b2;
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
                    /* WARNING: Could not recover jumptable at 0x0011b615. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0011b7b2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector2 const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Vector2_const&>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
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
      goto LAB_0011b9b2;
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
                    /* WARNING: Could not recover jumptable at 0x0011b819. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_0011b9b2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector2 const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Vector2_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0011bbb4;
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
                    /* WARNING: Could not recover jumptable at 0x0011ba19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0011bbb4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Plane const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Plane_const&>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
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
      goto LAB_0011bdb2;
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
                    /* WARNING: Could not recover jumptable at 0x0011bc19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_0011bdb2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Plane const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Plane_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
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
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar2) {
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar2 = (long *)(local_40 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
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
      goto LAB_0011bfb2;
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
                    /* WARNING: Could not recover jumptable at 0x0011be15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0011bfb2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Color>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Color>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar3;
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
      pVVar3 = param_2[0x23];
      if (pVVar3 == (Variant *)0x0) {
        pVVar3 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar3 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar3) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011c1bc;
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
                    /* WARNING: Could not recover jumptable at 0x0011c023. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (*(undefined8 *)(*(long *)param_3 + 8),*(undefined8 *)(*(long *)param_3 + 0x10),
               (long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011c1bc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Color>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Color>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
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
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar2) {
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar2 = (long *)(local_40 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
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
      goto LAB_0011c3c2;
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
                    /* WARNING: Could not recover jumptable at 0x0011c22e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (**param_3,(*param_3)[1],(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011c3c2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector3 const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Vector3_const&>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
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
      goto LAB_0011c5c2;
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
                    /* WARNING: Could not recover jumptable at 0x0011c429. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_0011c5c2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector3 const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Vector3_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
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
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar2) {
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar2 = (long *)(local_40 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
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
      goto LAB_0011c7c2;
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
                    /* WARNING: Could not recover jumptable at 0x0011c625. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0011c7c2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Mesh::PrimitiveType>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Mesh::PrimitiveType>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar3;
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
      pVVar3 = param_2[0x23];
      if (pVVar3 == (Variant *)0x0) {
        pVVar3 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar3 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar3) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011c9c4;
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
                    /* WARNING: Could not recover jumptable at 0x0011c82c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0011c9c4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Mesh::PrimitiveType>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Mesh::PrimitiveType>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0011cbc4;
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
                    /* WARNING: Could not recover jumptable at 0x0011ca2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0011cbc4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<SurfaceTool::CustomFormat, int>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTRC<SurfaceTool::CustomFormat,int>::validated_call
          (MethodBindTRC<SurfaceTool::CustomFormat,int> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  uint uVar2;
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
      goto LAB_0011cc1b;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  *(ulong *)(param_3 + 8) = (ulong)uVar2;
LAB_0011cc1b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<SurfaceTool::CustomFormat, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<SurfaceTool::CustomFormat,int>::ptrcall
          (MethodBindTRC<SurfaceTool::CustomFormat,int> *this,Object *param_1,void **param_2,
          void *param_3)

{
  char *pcVar1;
  uint uVar2;
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
      goto LAB_0011ce1a;
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
  uVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60),**param_2);
  *(ulong *)param_3 = (ulong)uVar2;
LAB_0011ce1a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, SurfaceTool::CustomFormat>::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<int,SurfaceTool::CustomFormat>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

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
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
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
      goto LAB_0011d1ca;
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
                    /* WARNING: Could not recover jumptable at 0x0011d02f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8),*(undefined4 *)(*(long *)(param_3 + 8) + 8));
    return;
  }
LAB_0011d1ca:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, SurfaceTool::CustomFormat>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int,SurfaceTool::CustomFormat>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
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
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar2) {
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar2 = (long *)(local_40 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
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
      goto LAB_0011d3c2;
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
                    /* WARNING: Could not recover jumptable at 0x0011d22d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               **(undefined4 **)((long)param_3 + 8));
    return;
  }
LAB_0011d3c2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<SurfaceTool::SkinWeightCount>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<SurfaceTool::SkinWeightCount>::call
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
      _err_print_error(&_LC213,"./core/object/method_bind.h",0x267,
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
      goto LAB_0011d490;
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
LAB_0011d490:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<SurfaceTool::SkinWeightCount>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTRC<SurfaceTool::SkinWeightCount>::validated_call
          (MethodBindTRC<SurfaceTool::SkinWeightCount> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  char *pcVar1;
  uint uVar2;
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
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
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
      goto LAB_0011d6f4;
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
  *(ulong *)(param_3 + 8) = (ulong)uVar2;
LAB_0011d6f4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<SurfaceTool::SkinWeightCount>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<SurfaceTool::SkinWeightCount>::ptrcall
          (MethodBindTRC<SurfaceTool::SkinWeightCount> *this,Object *param_1,void **param_2,
          void *param_3)

{
  char *pcVar1;
  uint uVar2;
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
      goto LAB_0011d8d3;
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
  *(ulong *)param_3 = (ulong)uVar2;
LAB_0011d8d3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<SurfaceTool::SkinWeightCount>::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<SurfaceTool::SkinWeightCount>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

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
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
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
      goto LAB_0011dc62;
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
                    /* WARNING: Could not recover jumptable at 0x0011dac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0011dc62:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<SurfaceTool::SkinWeightCount>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<SurfaceTool::SkinWeightCount>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0011de64;
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
                    /* WARNING: Could not recover jumptable at 0x0011dccb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0011de64:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<ArrayMesh>, Ref<ArrayMesh> const&, unsigned long>::ptrcall(Object*, void
   const**, void*) const */

void __thiscall
MethodBindTR<Ref<ArrayMesh>,Ref<ArrayMesh>const&,unsigned_long>::ptrcall
          (MethodBindTR<Ref<ArrayMesh>,Ref<ArrayMesh>const&,unsigned_long> *this,Object *param_1,
          void **param_2,void *param_3)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  Object *pOVar4;
  long *plVar5;
  Object *pOVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
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
      local_48 = (Object *)0x117b38;
      local_50 = (Object *)0x0;
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
      goto LAB_0011df7a;
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
LAB_0011dee2:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_0011dee2;
  }
  (*pcVar7)(&local_50,param_1 + lVar1,(StringName *)&local_48,uVar2);
  if (local_50 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar6 = *param_3;
    if (pOVar6 != (Object *)0x0) {
      *(undefined8 *)param_3 = 0;
      goto LAB_0011dfb1;
    }
  }
  else {
    pOVar4 = (Object *)__dynamic_cast(local_50,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
    pOVar6 = *param_3;
    if (pOVar6 != pOVar4) {
      *(Object **)param_3 = pOVar4;
      if (pOVar4 == (Object *)0x0) {
        if (pOVar6 != (Object *)0x0) goto LAB_0011dfb1;
      }
      else {
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          *(undefined8 *)param_3 = 0;
        }
        if (pOVar6 != (Object *)0x0) {
LAB_0011dfb1:
          cVar3 = RefCounted::unreference();
          if (cVar3 != '\0') {
            cVar3 = predelete_handler(pOVar6);
            if (cVar3 != '\0') {
              (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
              Memory::free_static(pOVar6,false);
            }
          }
        }
        if (local_50 == (Object *)0x0) goto LAB_0011df63;
      }
    }
    cVar3 = RefCounted::unreference();
    pOVar6 = local_50;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_50);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
        Memory::free_static(pOVar6,false);
      }
    }
  }
LAB_0011df63:
  if (local_48 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar6 = local_48;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_48);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
        Memory::free_static(pOVar6,false);
      }
    }
  }
LAB_0011df7a:
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
      local_58 = (Object *)0x117b38;
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
      goto LAB_0011e2b8;
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
LAB_0011e276:
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
        if (pOVar2 != (Object *)0x0) goto LAB_0011e276;
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
LAB_0011e2b8:
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
      local_48 = (Object *)0x117b38;
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
      goto LAB_0011e57c;
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
LAB_0011e558:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_0011e558;
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
LAB_0011e57c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<Vector3> const&, Vector<Vector2> const&, Vector<Color> const&, Vector<Vector2>
   const&, Vector<Vector3> const&, TypedArray<Plane> const&>::validated_call(Object*, Variant
   const**, Variant*) const */

void MethodBindT<Vector<Vector3>const&,Vector<Vector2>const&,Vector<Color>const&,Vector<Vector2>const&,Vector<Vector3>const&,TypedArray<Plane>const&>
     ::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  char cVar2;
  Variant *pVVar3;
  code *pcVar4;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar3 = param_2[0x23];
      if (pVVar3 == (Variant *)0x0) {
        pVVar3 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar3 = param_2[1] + 0x20;
    }
    if (local_68 == (char *)*(long *)pVVar3) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
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
      goto LAB_0011e861;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Array::Array((Array *)&local_70);
  local_58 = 0;
  local_68 = (char *)0x0;
  local_50 = (undefined1  [16])0x0;
  Array::set_typed((uint)(Array *)&local_70,(StringName *)0xe,(Variant *)&local_68);
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  cVar2 = Array::is_same_typed((Array *)&local_70);
  if (cVar2 == '\0') {
    Array::assign((Array *)&local_70);
  }
  else {
    Array::_ref((Array *)&local_70);
  }
  (*pcVar4)((long *)((long)param_2 + lVar1),*(long *)(*(long *)param_3 + 8) + 0x10,
            *(long *)(*(long *)(param_3 + 8) + 8) + 0x10,
            *(long *)(*(long *)(param_3 + 0x10) + 8) + 0x10,
            *(long *)(*(long *)(param_3 + 0x18) + 8) + 0x10,
            *(long *)(*(long *)(param_3 + 0x20) + 8) + 0x10,(Array *)&local_70);
  Array::~Array((Array *)&local_70);
LAB_0011e861:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<Vector3> const&, Vector<Vector2> const&, Vector<Color> const&, Vector<Vector2>
   const&, Vector<Vector3> const&, TypedArray<Plane> const&>::ptrcall(Object*, void const**, void*)
   const */

void MethodBindT<Vector<Vector3>const&,Vector<Vector2>const&,Vector<Color>const&,Vector<Vector2>const&,Vector<Vector3>const&,TypedArray<Plane>const&>
     ::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  code *pcVar4;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0011eaf5;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Array::Array((Array *)&local_70);
  local_58 = 0;
  local_68 = (char *)0x0;
  local_50 = (undefined1  [16])0x0;
  Array::set_typed((uint)(Array *)&local_70,(StringName *)0xe,(Variant *)&local_68);
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  cVar2 = Array::is_same_typed((Array *)&local_70);
  if (cVar2 == '\0') {
    Array::assign((Array *)&local_70);
  }
  else {
    Array::_ref((Array *)&local_70);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar4)((long *)((long)param_2 + lVar1),*param_3,*(undefined8 *)((long)param_3 + 8),
            *(undefined8 *)((long)param_3 + 0x10),*(undefined8 *)((long)param_3 + 0x18),
            *(undefined8 *)((long)param_3 + 0x20),(Array *)&local_70);
  Array::~Array((Array *)&local_70);
LAB_0011eaf5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<ArrayMesh>, Ref<ArrayMesh> const&, unsigned long>::call(Object*, Variant
   const**, int, Callable::CallError&) const */

Object * MethodBindTR<Ref<ArrayMesh>,Ref<ArrayMesh>const&,unsigned_long>::call
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
  Object *local_70;
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
      local_68 = (Object *)0x117b38;
      local_70 = (Object *)0x0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC213,"./core/object/method_bind.h",0x207,
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
      pOVar5 = local_70;
      if (local_70 != (Object *)0x0) {
        LOCK();
        pOVar10 = local_70 + -0x10;
        *(long *)pOVar10 = *(long *)pOVar10 + -1;
        UNLOCK();
        if (*(long *)pOVar10 == 0) {
          local_70 = (Object *)0x0;
          Memory::free_static(pOVar5 + -0x10,false);
        }
      }
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0011eed0;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar16 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (2 < in_R8D) {
    uVar8 = 3;
LAB_0011eec5:
    *in_R9 = uVar8;
    in_R9[2] = 2;
    goto LAB_0011eed0;
  }
  pVVar17 = param_2[5];
  iVar7 = 2 - in_R8D;
  if (pVVar17 == (Variant *)0x0) {
    if (iVar7 != 0) goto LAB_0011ef00;
    pVVar14 = *(Variant **)param_4;
LAB_0011ef1d:
    pVVar17 = *(Variant **)(param_4 + 8);
  }
  else {
    lVar2 = *(long *)(pVVar17 + -8);
    iVar15 = (int)lVar2;
    if (iVar15 < iVar7) {
LAB_0011ef00:
      uVar8 = 4;
      goto LAB_0011eec5;
    }
    if (in_R8D == 0) {
      lVar12 = (long)(iVar15 + -2);
      if (lVar2 <= lVar12) goto LAB_0011f080;
      pVVar14 = pVVar17 + lVar12 * 0x18;
    }
    else {
      pVVar14 = *(Variant **)param_4;
      if (in_R8D == 2) goto LAB_0011ef1d;
    }
    lVar12 = (long)(int)((in_R8D ^ 1) + (iVar15 - iVar7));
    if (lVar2 <= lVar12) {
LAB_0011f080:
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
  uVar4 = _LC218;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  uVar9 = Variant::operator_cast_to_unsigned_long(pVVar17);
  cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar14);
  uVar4 = _LC219;
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
LAB_0011ee15:
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
        if (pOVar5 != (Object *)0x0) goto LAB_0011ee15;
      }
    }
  }
  (*(code *)pVVar16)(&local_70,(Variant *)((long)plVar13 + (long)pVVar1),&local_68,uVar9);
  Variant::Variant((Variant *)local_58,local_70);
  if (Variant::needs_deinit[*(int *)param_1] != '\0') {
    Variant::_clear_internal();
  }
  *(undefined4 *)param_1 = local_58[0];
  *(undefined8 *)(param_1 + 8) = local_50;
  *(undefined8 *)(param_1 + 0x10) = uStack_48;
  if (local_70 != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    pOVar5 = local_70;
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(local_70);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
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
LAB_0011eed0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<SurfaceTool::CustomFormat, int>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<SurfaceTool::CustomFormat,int>::call
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
      _err_print_error(&_LC213,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011f350;
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
      if (in_R8D != 1) goto LAB_0011f390;
LAB_0011f380:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011f390:
        uVar7 = 4;
        goto LAB_0011f345;
      }
      if (in_R8D == 1) goto LAB_0011f380;
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
    uVar4 = _LC221;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar11);
    iVar6 = (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),iVar6);
    Variant::Variant((Variant *)local_48,iVar6);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar7 = 3;
LAB_0011f345:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0011f350:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
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
      local_48 = (Object *)0x117b38;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC213,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011f730;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar7 = 3;
LAB_0011f725:
    *in_R9 = uVar7;
    in_R9[2] = 1;
    goto LAB_0011f730;
  }
  pVVar12 = param_2[5];
  if (pVVar12 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_0011f780;
LAB_0011f770:
    pVVar12 = *(Variant **)param_4;
  }
  else {
    lVar2 = *(long *)(pVVar12 + -8);
    if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011f780:
      uVar7 = 4;
      goto LAB_0011f725;
    }
    if (in_R8D == 1) goto LAB_0011f770;
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
  uVar4 = _LC219;
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
LAB_0011f89d:
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
        if (pOVar5 != (Object *)0x0) goto LAB_0011f89d;
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
LAB_0011f730:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<int>, float, int>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTR<Vector<int>,float,int>::call
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
  Variant *pVVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  Variant *this;
  int iVar12;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar8 = (long *)plVar11[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar8 = (long *)(plVar11[1] + 0x20);
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
      _err_print_error(&_LC213,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0011fb55;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 3) {
    pVVar10 = param_2[5];
    iVar6 = 2 - in_R8D;
    if (pVVar10 == (Variant *)0x0) {
      if (iVar6 != 0) goto LAB_0011fb98;
      this = *(Variant **)param_4;
LAB_0011fbad:
      pVVar10 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      iVar12 = (int)lVar2;
      if (iVar12 < iVar6) {
LAB_0011fb98:
        uVar7 = 4;
        goto LAB_0011fb85;
      }
      if (in_R8D == 0) {
        lVar9 = (long)(iVar12 + -2);
        if (lVar2 <= lVar9) goto LAB_0011fc70;
        this = pVVar10 + lVar9 * 0x18;
      }
      else {
        this = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_0011fbad;
      }
      lVar9 = (long)(int)((in_R8D ^ 1) + (iVar12 - iVar6));
      if (lVar2 <= lVar9) {
LAB_0011fc70:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar10 = pVVar10 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar13 & 1) != 0) {
      pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,2);
    uVar4 = _LC218;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar10);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,3);
    uVar4 = _LC222;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_float(this);
    (*(code *)pVVar13)((Vector *)&local_68,(Variant *)((long)plVar11 + (long)pVVar1),iVar6);
    Variant::Variant((Variant *)local_58,(Vector *)&local_68);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    CowData<int>::_unref((CowData<int> *)&local_60);
  }
  else {
    uVar7 = 3;
LAB_0011fb85:
    *in_R9 = uVar7;
    in_R9[2] = 2;
  }
LAB_0011fb55:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<Vector3> const&, Vector<Vector2> const&, Vector<Color> const&, Vector<Vector2>
   const&, Vector<Vector3> const&, TypedArray<Plane> const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<Vector<Vector3>const&,Vector<Vector2>const&,Vector<Color>const&,Vector<Vector2>const&,Vector<Vector3>const&,TypedArray<Plane>const&>
         ::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  undefined4 uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  Variant *pVVar11;
  undefined4 in_register_00000014;
  long *plVar12;
  int iVar13;
  uint in_R8D;
  undefined4 *in_R9;
  long lVar14;
  Variant *pVVar15;
  long in_FS_OFFSET;
  Array local_f0 [8];
  Variant local_e8 [8];
  long local_e0;
  Variant local_d8 [8];
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  char *local_a8;
  long local_a0;
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined4 *local_78 [7];
  long local_40;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar12 != (long *)0x0) && (plVar12[1] != 0)) && (*(char *)(plVar12[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_a8,(StringName *)(param_2 + 3));
    if (plVar12[1] == 0) {
      plVar9 = (long *)plVar12[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
      }
    }
    else {
      plVar9 = (long *)(plVar12[1] + 0x20);
    }
    if (local_a8 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_a8 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_b8 = 0;
      local_a0 = 0x35;
      String::parse_latin1((StrRange *)&local_b8);
      vformat<StringName>((StringName *)&local_a8,(StrRange *)&local_b8,&local_c8);
      _err_print_error(&_LC213,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_a8,0,0);
      pcVar5 = local_a8;
      if (local_a8 != (char *)0x0) {
        LOCK();
        plVar12 = (long *)(local_a8 + -0x10);
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 == 0) {
          local_a8 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar14 = local_b8;
      if (local_b8 != 0) {
        LOCK();
        plVar12 = (long *)(local_b8 + -0x10);
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 == 0) {
          local_b8 = 0;
          Memory::free_static((void *)(lVar14 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_c8 != 0)) {
        StringName::unref();
      }
      goto LAB_0011fe8f;
    }
    if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar15 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 7) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar13 = 0;
      lVar14 = 0;
    }
    else {
      lVar14 = *(long *)(pVVar2 + -8);
      iVar13 = (int)lVar14;
    }
    if ((int)(6 - in_R8D) <= iVar13) {
      lVar8 = 0;
      do {
        if ((int)lVar8 < (int)in_R8D) {
          pVVar11 = *(Variant **)(param_4 + lVar8 * 8);
        }
        else {
          uVar10 = iVar13 + -6 + (int)lVar8;
          if (lVar14 <= (int)uVar10) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar10,lVar14,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar11 = pVVar2 + (ulong)uVar10 * 0x18;
        }
        local_78[lVar8] = (undefined4 *)pVVar11;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 6);
      *in_R9 = 0;
      if (((ulong)pVVar15 & 1) != 0) {
        pVVar15 = *(Variant **)(pVVar15 + *(long *)((long)plVar12 + (long)pVVar1) + -1);
      }
      cVar6 = Variant::can_convert_strict(*local_78[5],0x1c);
      uVar4 = _LC223;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_Array((Variant *)&local_a8);
      Array::Array(local_f0);
      local_98 = 0;
      local_b8 = 0;
      local_90 = (undefined1  [16])0x0;
      Array::set_typed((uint)local_f0,(StringName *)0xe,(Variant *)&local_b8);
      if ((StringName::configured != '\0') && (local_b8 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_98] != '\0') {
        Variant::_clear_internal();
      }
      cVar6 = Array::is_same_typed(local_f0);
      if (cVar6 == '\0') {
        Array::assign(local_f0);
      }
      else {
        Array::_ref(local_f0);
      }
      Array::~Array((Array *)&local_a8);
      cVar6 = Variant::can_convert_strict(*local_78[4],0x24);
      uVar4 = _LC224;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_Vector(local_e8);
      cVar6 = Variant::can_convert_strict(*local_78[3],0x23);
      uVar4 = _LC225;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_Vector(local_d8);
      cVar6 = Variant::can_convert_strict(*local_78[2],0x25);
      uVar4 = _LC226;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_Vector((Variant *)&local_c8);
      cVar6 = Variant::can_convert_strict(*local_78[1],0x23);
      uVar4 = _LC227;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_Vector((Variant *)&local_b8);
      cVar6 = Variant::can_convert_strict(*local_78[0],0x24);
      uVar4 = _LC228;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_Vector((Variant *)&local_a8);
      (*(code *)pVVar15)((Variant *)((long)plVar12 + (long)pVVar1),(Variant *)&local_a8,
                         (Variant *)&local_b8,(Variant *)&local_c8,local_d8,local_e8,local_f0);
      lVar14 = local_a0;
      if (local_a0 != 0) {
        LOCK();
        plVar12 = (long *)(local_a0 + -0x10);
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar14 + -0x10),false);
        }
      }
      lVar14 = local_b0;
      if (local_b0 != 0) {
        LOCK();
        plVar12 = (long *)(local_b0 + -0x10);
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 == 0) {
          local_b0 = 0;
          Memory::free_static((void *)(lVar14 + -0x10),false);
        }
      }
      lVar14 = local_c0;
      if (local_c0 != 0) {
        LOCK();
        plVar12 = (long *)(local_c0 + -0x10);
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 == 0) {
          local_c0 = 0;
          Memory::free_static((void *)(lVar14 + -0x10),false);
        }
      }
      lVar14 = local_d0;
      if (local_d0 != 0) {
        LOCK();
        plVar12 = (long *)(local_d0 + -0x10);
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 == 0) {
          local_d0 = 0;
          Memory::free_static((void *)(lVar14 + -0x10),false);
        }
      }
      lVar14 = local_e0;
      if (local_e0 != 0) {
        LOCK();
        plVar12 = (long *)(local_e0 + -0x10);
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 == 0) {
          local_e0 = 0;
          Memory::free_static((void *)(lVar14 + -0x10),false);
        }
      }
      Array::~Array(local_f0);
      goto LAB_0011fe8f;
    }
    uVar7 = 4;
  }
  else {
    uVar7 = 3;
  }
  *in_R9 = uVar7;
  in_R9[2] = 6;
LAB_0011fe8f:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Color>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Color>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
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
      _err_print_error(&_LC213,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001205a8;
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
      if (in_R8D != 1) goto LAB_00120600;
LAB_001205f0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00120600:
        uVar7 = 4;
        goto LAB_0012059d;
      }
      if (in_R8D == 1) goto LAB_001205f0;
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
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar11,0x14);
    uVar4 = _LC229;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Color(pVVar11);
    (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1));
  }
  else {
    uVar7 = 3;
LAB_0012059d:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_001205a8:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<Vector<float> const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<Vector<float>const&>::call
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
  long local_50;
  char *local_48;
  undefined8 local_40 [2];
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
      local_40[0] = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC213,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar9 = (long *)(local_50 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00120910;
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
      if (in_R8D != 1) goto LAB_00120960;
LAB_00120950:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00120960:
        uVar6 = 4;
        goto LAB_00120905;
      }
      if (in_R8D == 1) goto LAB_00120950;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x20);
    uVar4 = _LC230;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Vector((Variant *)&local_48);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),(Variant *)&local_48);
    CowData<float>::_unref((CowData<float> *)local_40);
  }
  else {
    uVar6 = 3;
LAB_00120905:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00120910:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<int> const&>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<Vector<int>const&>::call
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
  undefined8 local_50;
  char *local_48;
  undefined8 local_40 [2];
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
      local_40[0] = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC213,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00120c70;
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
      if (in_R8D != 1) goto LAB_00120cc0;
LAB_00120cb0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00120cc0:
        uVar7 = 4;
        goto LAB_00120c65;
      }
      if (in_R8D == 1) goto LAB_00120cb0;
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
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar11,0x1e);
    uVar4 = _LC231;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Vector((Variant *)&local_48);
    (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),(Variant *)&local_48);
    CowData<int>::_unref((CowData<int> *)local_40);
  }
  else {
    uVar7 = 3;
LAB_00120c65:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00120c70:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
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
      _err_print_error(&_LC213,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00120fc0;
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
      if (in_R8D != 1) goto LAB_00121010;
LAB_00121000:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00121010:
        uVar6 = 4;
        goto LAB_00120fb5;
      }
      if (in_R8D == 1) goto LAB_00121000;
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
    uVar4 = _LC232;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    local_38 = Variant::operator_cast_to_Vector2(pVVar10);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),&local_38);
  }
  else {
    uVar6 = 3;
LAB_00120fb5:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00120fc0:
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
      _err_print_error(&_LC213,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_88,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      if ((StringName::configured != '\0') && (local_98 != 0)) {
        StringName::unref();
      }
      goto LAB_001212f0;
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
      if (in_R8D != 1) goto LAB_00121340;
LAB_00121330:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00121340:
        uVar6 = 4;
        goto LAB_001212e5;
      }
      if (in_R8D == 1) goto LAB_00121330;
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
    uVar4 = _LC233;
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
LAB_001212e5:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_001212f0:
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
      _err_print_error(&_LC213,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      auVar4._8_4_ = local_60[0]._8_4_;
      auVar4._0_8_ = local_60[0]._0_8_;
      if ((StringName::configured != '\0') && (local_60[0] = auVar4, local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_00121618;
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
      if (in_R8D != 1) goto LAB_00121670;
LAB_00121660:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00121670:
        uVar7 = 4;
        goto LAB_0012160d;
      }
      if (in_R8D == 1) goto LAB_00121660;
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
    uVar5 = _LC234;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar5;
    }
    local_60[0] = Variant::operator_cast_to_Vector3(pVVar11);
    (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),local_60);
  }
  else {
    uVar7 = 3;
LAB_0012160d:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00121618:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<Ref<ArrayMesh>, Ref<ArrayMesh> const&, unsigned long>::validated_call(Object*,
   Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Ref<ArrayMesh>,Ref<ArrayMesh>const&,unsigned_long>::validated_call
          (MethodBindTR<Ref<ArrayMesh>,Ref<ArrayMesh>const&,unsigned_long> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  long lVar1;
  undefined8 uVar2;
  Object *pOVar3;
  char cVar4;
  Object *pOVar5;
  long *plVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  Object *local_78;
  Object *local_70;
  char *local_68;
  Object *local_60;
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
    if (local_68 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = (Object *)0x0;
      local_60 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != (Object *)0x0)) {
        StringName::unref();
      }
      goto LAB_0012197c;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar7 = *(code **)(this + 0x58);
  lVar1 = *(long *)(this + 0x60);
  if (((ulong)pcVar7 & 1) != 0) {
    pcVar7 = *(code **)(pcVar7 + *(long *)(param_1 + lVar1) + -1);
  }
  uVar2 = *(undefined8 *)(param_2[1] + 8);
  Variant::Variant((Variant *)local_58,*(Object **)(*param_2 + 0x10));
  local_70 = (Object *)0x0;
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar3 = local_70;
  if (pOVar5 != local_70) {
    if (pOVar5 == (Object *)0x0) {
      if (local_70 != (Object *)0x0) {
        local_70 = (Object *)0x0;
LAB_00121902:
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
      pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&ArrayMesh::typeinfo,0);
      if (pOVar3 != pOVar5) {
        local_70 = pOVar5;
        if (pOVar5 != (Object *)0x0) {
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            local_70 = (Object *)0x0;
          }
        }
        if (pOVar3 != (Object *)0x0) goto LAB_00121902;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar7)(&local_78,param_1 + lVar1,&local_70,uVar2);
  if (local_78 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_68 = *(char **)(local_78 + 0x60);
    local_60 = local_78;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_78 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_78);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)local_78 + 0x140))(local_78);
        Memory::free_static(local_78,false);
      }
    }
  }
  if (local_70 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_70;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_70);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
LAB_0012197c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Mesh> const&, int>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<Mesh>const&,int>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  undefined4 uVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  long *plVar5;
  code *pcVar6;
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
      plVar5 = (long *)param_2[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar5 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x117b38;
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
      goto LAB_00121ca3;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
  lVar2 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar2) + -1);
  }
  uVar1 = **(undefined4 **)((long)param_3 + 8);
                    /* WARNING: Load size is inaccurate */
  if ((*param_3 == (long *)0x0) || (local_48 = (Object *)**param_3, local_48 == (Object *)0x0)) {
LAB_00121c7c:
    local_48 = (Object *)0x0;
  }
  else {
    cVar4 = RefCounted::init_ref();
    if (cVar4 == '\0') goto LAB_00121c7c;
  }
  (*pcVar6)((long *)((long)param_2 + lVar2),(StringName *)&local_48,uVar1);
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
LAB_00121ca3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Mesh> const&, int>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Ref<Mesh>const&,int>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  undefined4 uVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  Object *pOVar5;
  Variant *pVVar6;
  code *pcVar7;
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
      pVVar6 = param_2[0x23];
      if (pVVar6 == (Variant *)0x0) {
        pVVar6 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar6 = param_2[1] + 0x20;
    }
    if (local_68 == (Object *)*(long *)pVVar6) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x117b38;
      local_70 = 0;
      local_60 = 0x35;
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
      goto LAB_00121f69;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar7 = *(code **)(param_1 + 0x58);
  lVar2 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar7 & 1) != 0) {
    pcVar7 = *(code **)(pcVar7 + *(long *)((long)param_2 + lVar2) + -1);
  }
  uVar1 = *(undefined4 *)(*(long *)(param_3 + 8) + 8);
  Variant::Variant((Variant *)local_58,*(Object **)(*(long *)param_3 + 0x10));
  local_68 = (Object *)0x0;
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar3 = local_68;
  if (pOVar5 != local_68) {
    if (pOVar5 == (Object *)0x0) {
      if (local_68 != (Object *)0x0) {
        local_68 = (Object *)0x0;
LAB_00121f24:
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
      pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Mesh::typeinfo,0);
      if (pOVar3 != pOVar5) {
        local_68 = pOVar5;
        if (pOVar5 != (Object *)0x0) {
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            local_68 = (Object *)0x0;
          }
        }
        if (pOVar3 != (Object *)0x0) goto LAB_00121f24;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar7)((long *)((long)param_2 + lVar2),(StringName *)&local_68,uVar1);
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
LAB_00121f69:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Mesh> const&, int>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<Ref<Mesh>const&,int>::call
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
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  long local_40;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
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
      local_58 = (Object *)0x117b38;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC213,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00122388;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar15 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (2 < in_R8D) {
    uVar8 = 3;
LAB_0012237d:
    *in_R9 = uVar8;
    in_R9[2] = 2;
    goto LAB_00122388;
  }
  pVVar16 = param_2[5];
  iVar7 = 2 - in_R8D;
  if (pVVar16 == (Variant *)0x0) {
    if (iVar7 != 0) goto LAB_001223c0;
    pVVar13 = *(Variant **)param_4;
LAB_001223dd:
    pVVar16 = *(Variant **)(param_4 + 8);
  }
  else {
    lVar2 = *(long *)(pVVar16 + -8);
    iVar14 = (int)lVar2;
    if (iVar14 < iVar7) {
LAB_001223c0:
      uVar8 = 4;
      goto LAB_0012237d;
    }
    if (in_R8D == 0) {
      lVar11 = (long)(iVar14 + -2);
      if (lVar2 <= lVar11) goto LAB_00122500;
      pVVar13 = pVVar16 + lVar11 * 0x18;
    }
    else {
      pVVar13 = *(Variant **)param_4;
      if (in_R8D == 2) goto LAB_001223dd;
    }
    lVar11 = (long)(int)((in_R8D ^ 1) + (iVar14 - iVar7));
    if (lVar2 <= lVar11) {
LAB_00122500:
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
  uVar4 = _LC218;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  iVar7 = Variant::operator_cast_to_int(pVVar16);
  cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar13);
  uVar4 = _LC219;
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
LAB_00122317:
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
      pOVar9 = (Object *)__dynamic_cast(pOVar9,&Object::typeinfo,&Mesh::typeinfo,0);
      if (pOVar5 != pOVar9) {
        local_58 = pOVar9;
        if (pOVar9 != (Object *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_58 = (Object *)0x0;
          }
        }
        if (pOVar5 != (Object *)0x0) goto LAB_00122317;
      }
    }
  }
  (*(code *)pVVar15)((Variant *)((long)plVar12 + (long)pVVar1),&local_58,iVar7);
  if (local_58 != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    pOVar5 = local_58;
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(local_58);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
LAB_00122388:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Mesh> const&, int, String const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<Mesh>const&,int,String_const&>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  Object *pOVar4;
  char cVar5;
  long *plVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar6 = (long *)param_2[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar6 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_58 == (Object *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x117b38;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001226e3;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar7 = *(code **)(param_1 + 0x58);
  lVar2 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar7 & 1) != 0) {
    pcVar7 = *(code **)(pcVar7 + *(long *)((long)param_2 + lVar2) + -1);
  }
  uVar3 = *(undefined8 *)((long)param_3 + 0x10);
  uVar1 = **(undefined4 **)((long)param_3 + 8);
                    /* WARNING: Load size is inaccurate */
  if ((*param_3 == (long *)0x0) || (local_58 = (Object *)**param_3, local_58 == (Object *)0x0)) {
LAB_001226b8:
    local_58 = (Object *)0x0;
  }
  else {
    cVar5 = RefCounted::init_ref();
    if (cVar5 == '\0') goto LAB_001226b8;
  }
  (*pcVar7)((long *)((long)param_2 + lVar2),(StringName *)&local_58,uVar1,uVar3);
  if (local_58 != (Object *)0x0) {
    cVar5 = RefCounted::unreference();
    pOVar4 = local_58;
    if (cVar5 != '\0') {
      cVar5 = predelete_handler(local_58);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
LAB_001226e3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Mesh> const&, int, String const&>::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<Ref<Mesh>const&,int,String_const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  Object *pOVar4;
  char cVar5;
  Object *pOVar6;
  Variant *pVVar7;
  code *pcVar8;
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
      pVVar7 = param_2[0x23];
      if (pVVar7 == (Variant *)0x0) {
        pVVar7 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar7 = param_2[1] + 0x20;
    }
    if (local_68 == (Object *)*(long *)pVVar7) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x117b38;
      local_70 = 0;
      local_60 = 0x35;
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
      goto LAB_001229bb;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar8 = *(code **)(param_1 + 0x58);
  lVar2 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar8 & 1) != 0) {
    pcVar8 = *(code **)(pcVar8 + *(long *)((long)param_2 + lVar2) + -1);
  }
  lVar3 = *(long *)(param_3 + 0x10);
  uVar1 = *(undefined4 *)(*(long *)(param_3 + 8) + 8);
  Variant::Variant((Variant *)local_58,*(Object **)(*(long *)param_3 + 0x10));
  local_68 = (Object *)0x0;
  pOVar6 = (Object *)Variant::get_validated_object();
  pOVar4 = local_68;
  if (pOVar6 != local_68) {
    if (pOVar6 == (Object *)0x0) {
      if (local_68 != (Object *)0x0) {
        local_68 = (Object *)0x0;
LAB_00122971:
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          cVar5 = predelete_handler(pOVar4);
          if (cVar5 != '\0') {
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
            Memory::free_static(pOVar4,false);
          }
        }
      }
    }
    else {
      pOVar6 = (Object *)__dynamic_cast(pOVar6,&Object::typeinfo,&Mesh::typeinfo,0);
      if (pOVar4 != pOVar6) {
        local_68 = pOVar6;
        if (pOVar6 != (Object *)0x0) {
          cVar5 = RefCounted::reference();
          if (cVar5 == '\0') {
            local_68 = (Object *)0x0;
          }
        }
        if (pOVar4 != (Object *)0x0) goto LAB_00122971;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar8)((long *)((long)param_2 + lVar2),(StringName *)&local_68,uVar1,lVar3 + 8);
  if (local_68 != (Object *)0x0) {
    cVar5 = RefCounted::unreference();
    pOVar4 = local_68;
    if (cVar5 != '\0') {
      cVar5 = predelete_handler(local_68);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
LAB_001229bb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Mesh> const&, int, String const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<Ref<Mesh>const&,int,String_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  Object *pOVar10;
  long *plVar11;
  uint uVar12;
  undefined4 in_register_00000014;
  long *plVar13;
  Variant *pVVar14;
  long lVar15;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar16;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  Object *local_68;
  undefined8 local_60;
  Variant *local_58 [3];
  long local_40;
  
  plVar13 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
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
      local_68 = (Object *)0x117b38;
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC213,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
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
      lVar15 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar13 = (long *)(local_70 + -0x10);
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar15 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00122e12;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar16 = param_2[0xb];
  pVVar1 = param_2[0xc];
  uVar7 = 3;
  if (in_R8D < 4) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar8 = 0;
      lVar15 = 0;
    }
    else {
      lVar15 = *(long *)(pVVar2 + -8);
      iVar8 = (int)lVar15;
    }
    if ((int)(3 - in_R8D) <= iVar8) {
      lVar9 = 0;
      do {
        if ((int)lVar9 < (int)in_R8D) {
          pVVar14 = *(Variant **)(param_4 + lVar9 * 8);
        }
        else {
          uVar12 = iVar8 + -3 + (int)lVar9;
          if (lVar15 <= (int)uVar12) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar12,lVar15,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar14 = pVVar2 + (ulong)uVar12 * 0x18;
        }
        local_58[lVar9] = pVVar14;
        lVar9 = lVar9 + 1;
      } while (lVar9 != 3);
      *in_R9 = 0;
      if (((ulong)pVVar16 & 1) != 0) {
        pVVar16 = *(Variant **)(pVVar16 + *(long *)((long)plVar13 + (long)pVVar1) + -1);
      }
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_58[2],4);
      uVar4 = _LC235;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_String((Variant *)&local_70);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_58[1],2);
      uVar4 = _LC218;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar8 = Variant::operator_cast_to_int(local_58[1]);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_58[0]);
      uVar4 = _LC219;
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
LAB_00122d99:
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
          pOVar10 = (Object *)__dynamic_cast(pOVar10,&Object::typeinfo,&Mesh::typeinfo,0);
          if (pOVar5 != pOVar10) {
            local_68 = pOVar10;
            if (pOVar10 != (Object *)0x0) {
              cVar6 = RefCounted::reference();
              if (cVar6 == '\0') {
                local_68 = (Object *)0x0;
              }
            }
            if (pOVar5 != (Object *)0x0) goto LAB_00122d99;
          }
        }
      }
      (*(code *)pVVar16)((Variant *)((long)plVar13 + (long)pVVar1),&local_68,iVar8,
                         (Variant *)&local_70);
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
      lVar15 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar13 = (long *)(local_70 + -0x10);
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar15 + -0x10),false);
        }
      }
      goto LAB_00122e12;
    }
    uVar7 = 4;
  }
  *in_R9 = uVar7;
  in_R9[2] = 3;
LAB_00122e12:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Mesh> const&, int, Transform3D const&>::ptrcall(Object*, void const**, void*)
   const */

void MethodBindT<Ref<Mesh>const&,int,Transform3D_const&>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  Object *pOVar4;
  char cVar5;
  long *plVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar6 = (long *)param_2[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar6 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_58 == (Object *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x117b38;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001231b3;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar7 = *(code **)(param_1 + 0x58);
  lVar2 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar7 & 1) != 0) {
    pcVar7 = *(code **)(pcVar7 + *(long *)((long)param_2 + lVar2) + -1);
  }
  uVar3 = *(undefined8 *)((long)param_3 + 0x10);
  uVar1 = **(undefined4 **)((long)param_3 + 8);
                    /* WARNING: Load size is inaccurate */
  if ((*param_3 == (long *)0x0) || (local_58 = (Object *)**param_3, local_58 == (Object *)0x0)) {
LAB_00123188:
    local_58 = (Object *)0x0;
  }
  else {
    cVar5 = RefCounted::init_ref();
    if (cVar5 == '\0') goto LAB_00123188;
  }
  (*pcVar7)((long *)((long)param_2 + lVar2),(StringName *)&local_58,uVar1,uVar3);
  if (local_58 != (Object *)0x0) {
    cVar5 = RefCounted::unreference();
    pOVar4 = local_58;
    if (cVar5 != '\0') {
      cVar5 = predelete_handler(local_58);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
LAB_001231b3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Mesh> const&, int, Transform3D const&>::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<Ref<Mesh>const&,int,Transform3D_const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  Object *pOVar4;
  char cVar5;
  Object *pOVar6;
  Variant *pVVar7;
  code *pcVar8;
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
      pVVar7 = param_2[0x23];
      if (pVVar7 == (Variant *)0x0) {
        pVVar7 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar7 = param_2[1] + 0x20;
    }
    if (local_68 == (Object *)*(long *)pVVar7) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x117b38;
      local_70 = 0;
      local_60 = 0x35;
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
      goto LAB_00123488;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar8 = *(code **)(param_1 + 0x58);
  lVar2 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar8 & 1) != 0) {
    pcVar8 = *(code **)(pcVar8 + *(long *)((long)param_2 + lVar2) + -1);
  }
  uVar3 = *(undefined8 *)(*(long *)(param_3 + 0x10) + 8);
  uVar1 = *(undefined4 *)(*(long *)(param_3 + 8) + 8);
  Variant::Variant((Variant *)local_58,*(Object **)(*(long *)param_3 + 0x10));
  local_68 = (Object *)0x0;
  pOVar6 = (Object *)Variant::get_validated_object();
  pOVar4 = local_68;
  if (pOVar6 != local_68) {
    if (pOVar6 == (Object *)0x0) {
      if (local_68 != (Object *)0x0) {
        local_68 = (Object *)0x0;
LAB_0012343f:
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          cVar5 = predelete_handler(pOVar4);
          if (cVar5 != '\0') {
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
            Memory::free_static(pOVar4,false);
          }
        }
      }
    }
    else {
      pOVar6 = (Object *)__dynamic_cast(pOVar6,&Object::typeinfo,&Mesh::typeinfo,0);
      if (pOVar4 != pOVar6) {
        local_68 = pOVar6;
        if (pOVar6 != (Object *)0x0) {
          cVar5 = RefCounted::reference();
          if (cVar5 == '\0') {
            local_68 = (Object *)0x0;
          }
        }
        if (pOVar4 != (Object *)0x0) goto LAB_0012343f;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar8)((long *)((long)param_2 + lVar2),(StringName *)&local_68,uVar1,uVar3);
  if (local_68 != (Object *)0x0) {
    cVar5 = RefCounted::unreference();
    pOVar4 = local_68;
    if (cVar5 != '\0') {
      cVar5 = predelete_handler(local_68);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
LAB_00123488:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Mesh> const&, int, Transform3D const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<Ref<Mesh>const&,int,Transform3D_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  Object *pOVar10;
  long *plVar11;
  uint uVar12;
  undefined4 in_register_00000014;
  long *plVar13;
  Variant *pVVar14;
  long lVar15;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar16;
  long in_FS_OFFSET;
  long local_b8;
  long local_b0;
  Object *local_a8;
  undefined8 local_a0;
  Variant *local_98 [4];
  Variant local_78 [56];
  long local_40;
  
  plVar13 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar13 != (long *)0x0) && (plVar13[1] != 0)) && (*(char *)(plVar13[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_a8,(StringName *)(param_2 + 3));
    if (plVar13[1] == 0) {
      plVar11 = (long *)plVar13[0x23];
      if (plVar11 == (long *)0x0) {
        plVar11 = (long *)(**(code **)(*plVar13 + 0x40))(plVar13);
      }
    }
    else {
      plVar11 = (long *)(plVar13[1] + 0x20);
    }
    if (local_a8 == (Object *)*plVar11) {
      if ((StringName::configured != '\0') && (local_a8 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_a8 = (Object *)0x117b38;
      local_b0 = 0;
      local_a0 = 0x35;
      String::parse_latin1((StrRange *)&local_b0);
      vformat<StringName>((StringName *)&local_a8,(StrRange *)&local_b0,&local_b8);
      _err_print_error(&_LC213,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_a8,0);
      pOVar5 = local_a8;
      if (local_a8 != (Object *)0x0) {
        LOCK();
        pOVar10 = local_a8 + -0x10;
        *(long *)pOVar10 = *(long *)pOVar10 + -1;
        UNLOCK();
        if (*(long *)pOVar10 == 0) {
          local_a8 = (Object *)0x0;
          Memory::free_static(pOVar5 + -0x10,false);
        }
      }
      lVar15 = local_b0;
      if (local_b0 != 0) {
        LOCK();
        plVar13 = (long *)(local_b0 + -0x10);
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          local_b0 = 0;
          Memory::free_static((void *)(lVar15 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_b8 != 0)) {
        StringName::unref();
      }
      goto LAB_001238e2;
    }
    if ((StringName::configured != '\0') && (local_a8 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar16 = param_2[0xb];
  pVVar1 = param_2[0xc];
  uVar7 = 3;
  if (in_R8D < 4) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar8 = 0;
      lVar15 = 0;
    }
    else {
      lVar15 = *(long *)(pVVar2 + -8);
      iVar8 = (int)lVar15;
    }
    if ((int)(3 - in_R8D) <= iVar8) {
      lVar9 = 0;
      do {
        if ((int)lVar9 < (int)in_R8D) {
          pVVar14 = *(Variant **)(param_4 + lVar9 * 8);
        }
        else {
          uVar12 = iVar8 + -3 + (int)lVar9;
          if (lVar15 <= (int)uVar12) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar12,lVar15,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar14 = pVVar2 + (ulong)uVar12 * 0x18;
        }
        local_98[lVar9] = pVVar14;
        lVar9 = lVar9 + 1;
      } while (lVar9 != 3);
      *in_R9 = 0;
      if (((ulong)pVVar16 & 1) != 0) {
        pVVar16 = *(Variant **)(pVVar16 + *(long *)((long)plVar13 + (long)pVVar1) + -1);
      }
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_98[2],0x12);
      uVar4 = _LC236;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_Transform3D(local_78);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_98[1],2);
      uVar4 = _LC218;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar8 = Variant::operator_cast_to_int(local_98[1]);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_98[0]);
      uVar4 = _LC219;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      local_a8 = (Object *)0x0;
      pOVar10 = (Object *)Variant::get_validated_object();
      pOVar5 = local_a8;
      if (pOVar10 != local_a8) {
        if (pOVar10 == (Object *)0x0) {
          if (local_a8 != (Object *)0x0) {
            local_a8 = (Object *)0x0;
LAB_0012386f:
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
          pOVar10 = (Object *)__dynamic_cast(pOVar10,&Object::typeinfo,&Mesh::typeinfo,0);
          if (pOVar5 != pOVar10) {
            local_a8 = pOVar10;
            if (pOVar10 != (Object *)0x0) {
              cVar6 = RefCounted::reference();
              if (cVar6 == '\0') {
                local_a8 = (Object *)0x0;
              }
            }
            if (pOVar5 != (Object *)0x0) goto LAB_0012386f;
          }
        }
      }
      (*(code *)pVVar16)((Variant *)((long)plVar13 + (long)pVVar1),&local_a8,iVar8,local_78);
      if (local_a8 != (Object *)0x0) {
        cVar6 = RefCounted::unreference();
        pOVar5 = local_a8;
        if (cVar6 != '\0') {
          cVar6 = predelete_handler(local_a8);
          if (cVar6 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      goto LAB_001238e2;
    }
    uVar7 = 4;
  }
  *in_R9 = uVar7;
  in_R9[2] = 3;
LAB_001238e2:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info<Ref<ArrayMesh> const&, unsigned long>(int, PropertyInfo&) */

void call_get_argument_type_info<Ref<ArrayMesh>const&,unsigned_long>
               (int param_1,PropertyInfo *param_2)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long lVar5;
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
  if (param_1 != 0) {
    if (param_1 != 1) goto LAB_00123be0;
    local_78 = 0;
    local_80 = 0;
    local_68 = "";
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    String::parse_latin1((StrRange *)&local_80);
    local_88 = 0;
    local_68 = (char *)CONCAT44(local_68._4_4_,2);
    local_50 = 0;
    local_48 = 0;
    local_60 = (undefined1  [16])0x0;
    if (local_80 == 0) {
LAB_00123e18:
      local_40 = 6;
      StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00123e18;
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
    PropertyInfo::operator=(param_2,(PropertyInfo *)&local_68);
    lVar5 = local_48;
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
    goto LAB_00123be0;
  }
  local_78 = 0;
  local_80 = 0;
  local_68 = "ArrayMesh";
  local_60._0_8_ = 9;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (char *)CONCAT44(local_68._4_4_,0x18);
  local_50 = 0x11;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00123dcd:
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
    if (local_50 == 0x11) goto LAB_00123dcd;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  PropertyInfo::operator=(param_2,(PropertyInfo *)&local_68);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_00123be0:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTR<Ref<ArrayMesh>, Ref<ArrayMesh> const&, unsigned long>::_gen_argument_type_info(int)
   const */

undefined4 *
MethodBindTR<Ref<ArrayMesh>,Ref<ArrayMesh>const&,unsigned_long>::_gen_argument_type_info
          (int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar6;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar6 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_68 = (char *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info<Ref<ArrayMesh>const&,unsigned_long>
              (in_EDX,(PropertyInfo *)&local_68);
    uVar4 = local_60._0_8_;
    uVar5 = local_60._8_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *puVar6 = local_68._0_4_;
    *(undefined8 *)(puVar6 + 2) = uVar4;
    *(undefined8 *)(puVar6 + 4) = uVar5;
    puVar6[6] = (undefined4)local_50;
    *(undefined8 *)(puVar6 + 8) = local_48;
    puVar6[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_0012402c;
  }
  local_70 = 0;
  local_68 = "ArrayMesh";
  local_78 = 0;
  local_60._8_8_ = local_60._0_8_;
  local_60._0_8_ = 9;
  String::parse_latin1((StrRange *)&local_78);
  *puVar6 = 0x18;
  puVar6[6] = 0x11;
  *(undefined8 *)(puVar6 + 8) = 0;
  *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar6[10] = 6;
LAB_001240d7:
    StringName::StringName((StringName *)&local_68,(String *)(puVar6 + 8),false);
    if (*(char **)(puVar6 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(char **)(puVar6 + 4) = local_68;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar6 + 8),(CowData *)&local_78);
    puVar6[10] = 6;
    if (puVar6[6] == 0x11) goto LAB_001240d7;
    StringName::operator=((StringName *)(puVar6 + 4),(StringName *)&local_70);
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
LAB_0012402c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, Array const&,
   Mesh::PrimitiveType>(__UnexistingClass*, void (__UnexistingClass::*)(Array const&,
   Mesh::PrimitiveType), Variant const**, int, Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,Array_const&,Mesh::PrimitiveType>
               (__UnexistingClass *param_1,_func_void_Array_ptr_PrimitiveType *param_2,
               Variant **param_3,int param_4,CallError *param_5,Vector *param_6)

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
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  Variant *this;
  long in_FS_OFFSET;
  long in_stack_00000008;
  Variant aVStack_38 [8];
  long local_30;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = (uint)param_5;
  if (uVar11 < 3) {
    lVar1 = *(long *)(in_stack_00000008 + 8);
    iVar6 = 2 - uVar11;
    if (lVar1 == 0) {
      if (iVar6 != 0) goto LAB_00124278;
      puVar10 = (undefined4 *)*plVar8;
LAB_001242cd:
      this = (Variant *)plVar8[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar12 = (int)lVar2;
      if (iVar12 < iVar6) {
LAB_00124278:
        uVar7 = 4;
        goto LAB_0012427d;
      }
      if (uVar11 == 0) {
        lVar9 = (long)(iVar12 + -2);
        if (lVar2 <= lVar9) goto LAB_001242e8;
        puVar10 = (undefined4 *)(lVar1 + lVar9 * 0x18);
      }
      else {
        puVar10 = (undefined4 *)*plVar8;
        if (uVar11 == 2) goto LAB_001242cd;
      }
      lVar9 = (long)(int)((uVar11 ^ 1) + (iVar12 - iVar6));
      if (lVar2 <= lVar9) {
LAB_001242e8:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar9 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_Array_ptr_PrimitiveType **)
                 (param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar4 = _LC218;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_long(this);
    cVar5 = Variant::can_convert_strict(*puVar10,0x1c);
    uVar4 = _LC238;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_Array(aVStack_38);
    (*param_2)((Array *)(param_1 + (long)param_3),(char)aVStack_38);
    Array::~Array((Array *)aVStack_38);
  }
  else {
    uVar7 = 3;
LAB_0012427d:
    *(undefined4 *)param_6 = uVar7;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Array const&, Mesh::PrimitiveType>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<Array_const&,Mesh::PrimitiveType>::call
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
      _err_print_error(&_LC213,"./core/object/method_bind.h",0x154,
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
      goto LAB_00124386;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,Array_const&,Mesh::PrimitiveType>
            (p_Var4,(_func_void_Array_ptr_PrimitiveType *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00124386:
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
    goto LAB_0012468d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_001246f0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_001246f0:
      uVar6 = 4;
LAB_0012468d:
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
      goto LAB_0012460b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012460b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
  uVar4 = _LC239;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_bool(this);
                    /* WARNING: Could not recover jumptable at 0x00124667. Too many branches */
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
      _err_print_error(&_LC213,"./core/object/method_bind.h",0x154,
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
      goto LAB_00124756;
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
LAB_00124756:
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
    goto LAB_00124a5d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00124ac0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00124ac0:
      uVar6 = 4;
LAB_00124a5d:
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
      goto LAB_001249db;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_001249db:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC221;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x00124a36. Too many branches */
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
      _err_print_error(&_LC213,"./core/object/method_bind.h",0x154,
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
      goto LAB_00124b26;
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
LAB_00124b26:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, unsigned int>(__UnexistingClass*, void
   (__UnexistingClass::*)(unsigned int), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */

void call_with_variant_args_dv<__UnexistingClass,unsigned_int>
               (__UnexistingClass *param_1,_func_void_uint *param_2,Variant **param_3,int param_4,
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
    goto LAB_00124e2d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00124e90;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00124e90:
      uVar6 = 4;
LAB_00124e2d:
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
      goto LAB_00124dab;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_00124dab:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_uint **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC221;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_unsigned_int(this);
                    /* WARNING: Could not recover jumptable at 0x00124e06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((uint)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<unsigned int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<unsigned_int>::call
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
      _err_print_error(&_LC213,"./core/object/method_bind.h",0x154,
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
      goto LAB_00124ef6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,unsigned_int>
            (p_Var4,(_func_void_uint *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00124ef6:
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
      if (iVar7 != 0) goto LAB_00125240;
      this = (Variant *)*plVar9;
LAB_0012528d:
      this_00 = (Variant *)plVar9[1];
    }
    else {
      lVar3 = *(long *)(lVar2 + -8);
      iVar12 = (int)lVar3;
      if (iVar12 < iVar7) {
LAB_00125240:
        uVar8 = 4;
        goto LAB_00125245;
      }
      if (uVar11 == 0) {
        lVar10 = (long)(iVar12 + -2);
        if (lVar3 <= lVar10) goto LAB_001252a8;
        this = (Variant *)(lVar2 + lVar10 * 0x18);
      }
      else {
        this = (Variant *)*plVar9;
        if (uVar11 == 2) goto LAB_0012528d;
      }
      lVar10 = (long)(int)((uVar11 ^ 1) + (iVar12 - iVar7));
      if (lVar3 <= lVar10) {
LAB_001252a8:
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
    uVar5 = _LC240;
    if (cVar6 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar5;
    }
    Variant::operator_cast_to_Color(this_00);
    cVar6 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar5 = _LC221;
    if (cVar6 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar5;
    }
    iVar7 = Variant::operator_cast_to_int(this);
    (*param_2)((int)(param_1 + (long)param_3),(Color *)iVar7);
  }
  else {
    uVar8 = 3;
LAB_00125245:
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
      _err_print_error(&_LC213,"./core/object/method_bind.h",0x154,
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
      goto LAB_00125346;
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
LAB_00125346:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, Mesh::PrimitiveType>(__UnexistingClass*, void
   (__UnexistingClass::*)(Mesh::PrimitiveType), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,Mesh::PrimitiveType>
               (__UnexistingClass *param_1,_func_void_PrimitiveType *param_2,Variant **param_3,
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
    goto LAB_0012564d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_001256b0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_001256b0:
      uVar6 = 4;
LAB_0012564d:
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
      goto LAB_001255cb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_001255cb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_PrimitiveType **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC221;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x00125626. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<Mesh::PrimitiveType>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<Mesh::PrimitiveType>::call
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
      _err_print_error(&_LC213,"./core/object/method_bind.h",0x154,
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
      goto LAB_00125716;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,Mesh::PrimitiveType>
            (p_Var4,(_func_void_PrimitiveType *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00125716:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int,
   SurfaceTool::CustomFormat>(__UnexistingClass*, void (__UnexistingClass::*)(int,
   SurfaceTool::CustomFormat), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */

void call_with_variant_args_dv<__UnexistingClass,int,SurfaceTool::CustomFormat>
               (__UnexistingClass *param_1,_func_void_int_CustomFormat *param_2,Variant **param_3,
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
  long in_stack_00000008;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  uVar10 = (uint)param_5;
  if (2 < uVar10) {
    uVar7 = 3;
    goto LAB_00125a4d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  iVar6 = 2 - uVar10;
  if (lVar1 == 0) {
    if (iVar6 == 0) {
      this = (Variant *)*plVar8;
LAB_00125a7d:
      this_00 = (Variant *)plVar8[1];
      goto LAB_001259b5;
    }
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    iVar11 = (int)lVar2;
    if (iVar6 <= iVar11) {
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar2 <= lVar9) goto LAB_00125a98;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_00125a7d;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar9) {
LAB_00125a98:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar9 * 0x18);
LAB_001259b5:
      *(undefined4 *)param_6 = 0;
      if (((ulong)param_2 & 1) != 0) {
        param_2 = *(_func_void_int_CustomFormat **)
                   (param_2 + *(long *)(param_1 + (long)param_3) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,2);
      uVar4 = _LC218;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      Variant::operator_cast_to_long(this_00);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
      uVar4 = _LC221;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      iVar6 = Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x00125a3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*param_2)((int)(param_1 + (long)param_3),(char)iVar6);
      return;
    }
  }
  uVar7 = 4;
LAB_00125a4d:
  *(undefined4 *)param_6 = uVar7;
  *(undefined4 *)(param_6 + 8) = 2;
  return;
}



/* MethodBindT<int, SurfaceTool::CustomFormat>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<int,SurfaceTool::CustomFormat>::call
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
      _err_print_error(&_LC213,"./core/object/method_bind.h",0x154,
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
      goto LAB_00125b36;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int,SurfaceTool::CustomFormat>
            (p_Var4,(_func_void_int_CustomFormat *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00125b36:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass,
   SurfaceTool::SkinWeightCount>(__UnexistingClass*, void
   (__UnexistingClass::*)(SurfaceTool::SkinWeightCount), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,SurfaceTool::SkinWeightCount>
               (__UnexistingClass *param_1,_func_void_SkinWeightCount *param_2,Variant **param_3,
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
    goto LAB_00125e3d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00125ea0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00125ea0:
      uVar6 = 4;
LAB_00125e3d:
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
      goto LAB_00125dbb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_00125dbb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_SkinWeightCount **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC221;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x00125e16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<SurfaceTool::SkinWeightCount>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<SurfaceTool::SkinWeightCount>::call
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
      _err_print_error(&_LC213,"./core/object/method_bind.h",0x154,
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
      goto LAB_00125f06;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,SurfaceTool::SkinWeightCount>
            (p_Var4,(_func_void_SkinWeightCount *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4
             ,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00125f06:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<Ref<Mesh> const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Ref<Mesh>const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int iVar4;
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
  iVar4 = *param_2;
  if (iVar4 != param_1) goto LAB_00126147;
  local_78 = 0;
  local_68 = &_LC241;
  local_80 = 0;
  local_60._0_8_ = 4;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x18);
  local_50 = 0x11;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0012630d:
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
    if (local_50 == 0x11) goto LAB_0012630d;
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
    uVar2 = local_60._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar2;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar2 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar2;
  }
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar3 = local_48;
    local_48 = 0;
    *(long *)(param_3 + 0x20) = lVar3;
  }
  *(undefined4 *)(param_3 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  iVar4 = *param_2;
LAB_00126147:
  *param_2 = iVar4 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* void call_get_argument_type_info_helper<int>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<int>(int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int iVar5;
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
  iVar5 = *param_2;
  if (iVar5 != param_1) goto LAB_00126397;
  local_78 = 0;
  local_68 = &_LC14;
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
LAB_00126495:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00126495;
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
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(param_3 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_3 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  iVar5 = *param_2;
LAB_00126397:
  *param_2 = iVar5 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTRC<SurfaceTool::CustomFormat, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<SurfaceTool::CustomFormat,int>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar6;
  long in_FS_OFFSET;
  undefined8 local_78;
  ulong local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar6 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (char *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<int>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar4 = local_60._0_8_;
    uVar5 = local_60._8_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *puVar6 = local_68._0_4_;
    *(undefined8 *)(puVar6 + 2) = uVar4;
    *(undefined8 *)(puVar6 + 4) = uVar5;
    puVar6[6] = (undefined4)local_50;
    *(undefined8 *)(puVar6 + 8) = local_48;
    puVar6[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  }
  else {
    local_78 = 0;
    local_68 = "SurfaceTool::CustomFormat";
    local_60._8_8_ = local_60._0_8_;
    local_60._0_8_ = 0x19;
    String::parse_latin1((StrRange *)&local_78);
    godot::details::enum_qualified_name_to_class_info_name((details *)&local_70,(String *)&local_78)
    ;
    StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
    *puVar6 = 2;
    puVar6[6] = 0;
    *(undefined8 *)(puVar6 + 8) = 0;
    puVar6[10] = 0x10006;
    *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
    StringName::operator=((StringName *)(puVar6 + 4),(StringName *)&local_68);
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
    uVar3 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(uVar3 - 0x10),false);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        goto LAB_00126668;
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  }
LAB_00126668:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<int>::_gen_argument_type_info(int param_1)

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
  call_get_argument_type_info_helper<int>(in_EDX,&local_14,pPVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info<float, int>(int, PropertyInfo&) */

void call_get_argument_type_info<float,int>(int param_1,PropertyInfo *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
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
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = 0;
  if (param_1 != 0) goto LAB_00126831;
  local_78 = 0;
  local_68 = &_LC14;
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
LAB_00126945:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00126945;
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
  *(undefined4 *)param_2 = local_68._0_4_;
  if (*(long *)(param_2 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(param_2 + 8) = uVar3;
  }
  if (*(long *)(param_2 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_2 + 0x10) = uVar3;
  }
  *(int *)(param_2 + 0x18) = local_50;
  if (*(long *)(param_2 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(param_2 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_2 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00126831:
  local_8c = 1;
  call_get_argument_type_info_helper<int>(param_1,&local_8c,param_2);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTR<Vector<int>, float, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Vector<int>,float,int>::_gen_argument_type_info(int param_1)

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
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info<float,int>(in_EDX,(PropertyInfo *)&local_68);
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
    goto LAB_00126bc2;
  }
  local_70 = 0;
  local_68 = &_LC14;
  local_78 = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_60._0_8_;
  local_60 = auVar3 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar7 = 0x1e;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar7[10] = 6;
LAB_00126bef:
    StringName::operator=((StringName *)(puVar7 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 8),(CowData *)&local_78);
    puVar7[10] = 6;
    if (puVar7[6] != 0x11) goto LAB_00126bef;
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
LAB_00126bc2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Color const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<int,Color_const&>::_gen_argument_type_info(int param_1)

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
  
  pPVar5 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar5 = 0;
  *(undefined4 *)(pPVar5 + 0x18) = 0;
  *(undefined8 *)(pPVar5 + 0x20) = 0;
  *(undefined4 *)(pPVar5 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar5 + 8) = (undefined1  [16])0x0;
  local_8c = 0;
  call_get_argument_type_info_helper<int>(in_EDX,&local_8c,pPVar5);
  if (in_EDX != local_8c) goto LAB_00126cd4;
  local_78 = 0;
  local_68 = &_LC14;
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
LAB_00126dd5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00126dd5;
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
LAB_00126cd4:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar5;
}



/* MethodBindT<int, SurfaceTool::CustomFormat>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<int,SurfaceTool::CustomFormat>::_gen_argument_type_info(int param_1)

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
  int local_94;
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
  
  pPVar6 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar6 = 0;
  *(undefined4 *)(pPVar6 + 0x18) = 0;
  *(undefined8 *)(pPVar6 + 0x20) = 0;
  *(undefined4 *)(pPVar6 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar6 + 8) = (undefined1  [16])0x0;
  local_94 = 0;
  call_get_argument_type_info_helper<int>(in_EDX,&local_94,pPVar6);
  if (in_EDX == local_94) {
    local_80 = 0;
    local_68 = "SurfaceTool::CustomFormat";
    local_60._0_8_ = 0x19;
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
    *(undefined4 *)pPVar6 = local_68._0_4_;
    if (*(long *)(pPVar6 + 8) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar6 + 8));
      uVar4 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8 *)(pPVar6 + 8) = uVar4;
    }
    if (*(long *)(pPVar6 + 0x10) != local_60._8_8_) {
      StringName::unref();
      uVar4 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8 *)(pPVar6 + 0x10) = uVar4;
    }
    lVar5 = local_48;
    *(undefined4 *)(pPVar6 + 0x18) = (undefined4)local_50;
    if (*(long *)(pPVar6 + 0x20) == local_48) {
      *(undefined4 *)(pPVar6 + 0x28) = local_40;
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
      CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar6 + 0x20));
      *(long *)(pPVar6 + 0x20) = local_48;
      *(undefined4 *)(pPVar6 + 0x28) = local_40;
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
    return pPVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Mesh> const&, int>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<Ref<Mesh>const&,int>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_24 = 0;
  call_get_argument_type_info_helper<Ref<Mesh>const&>(in_EDX,&local_24,pPVar1);
  call_get_argument_type_info_helper<int>(in_EDX,&local_24,pPVar1);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info<Ref<Mesh> const&, int, String const&>(int, PropertyInfo&) */

void call_get_argument_type_info<Ref<Mesh>const&,int,String_const&>
               (int param_1,PropertyInfo *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
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
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = 0;
  call_get_argument_type_info_helper<Ref<Mesh>const&>(param_1,&local_8c,param_2);
  call_get_argument_type_info_helper<int>(param_1,&local_8c,param_2);
  if (param_1 != local_8c) goto LAB_0012725e;
  local_78 = 0;
  local_68 = &_LC14;
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
LAB_00127355:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00127355;
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
  *(undefined4 *)param_2 = local_68._0_4_;
  if (*(long *)(param_2 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(param_2 + 8) = uVar3;
  }
  if (*(long *)(param_2 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_2 + 0x10) = uVar3;
  }
  *(int *)(param_2 + 0x18) = local_50;
  if (*(long *)(param_2 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(param_2 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_2 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_0012725e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<Ref<Mesh> const&, int, String const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<Ref<Mesh>const&,int,String_const&>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  call_get_argument_type_info<Ref<Mesh>const&,int,String_const&>(in_EDX,pPVar1);
  return pPVar1;
}



/* void call_get_argument_type_info<Ref<Mesh> const&, int, Transform3D const&>(int, PropertyInfo&)
    */

void call_get_argument_type_info<Ref<Mesh>const&,int,Transform3D_const&>
               (int param_1,PropertyInfo *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
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
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = 0;
  call_get_argument_type_info_helper<Ref<Mesh>const&>(param_1,&local_8c,param_2);
  call_get_argument_type_info_helper<int>(param_1,&local_8c,param_2);
  if (param_1 != local_8c) goto LAB_0012750e;
  local_78 = 0;
  local_68 = &_LC14;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x12);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00127605:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00127605;
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
  *(undefined4 *)param_2 = local_68._0_4_;
  if (*(long *)(param_2 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(param_2 + 8) = uVar3;
  }
  if (*(long *)(param_2 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_2 + 0x10) = uVar3;
  }
  *(int *)(param_2 + 0x18) = local_50;
  if (*(long *)(param_2 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(param_2 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_2 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_0012750e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<Ref<Mesh> const&, int, Transform3D const&>::_gen_argument_type_info(int) const */

PropertyInfo *
MethodBindT<Ref<Mesh>const&,int,Transform3D_const&>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  call_get_argument_type_info<Ref<Mesh>const&,int,Transform3D_const&>(in_EDX,pPVar1);
  return pPVar1;
}



/* void call_get_argument_type_info_helper<Vector<Vector3> const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Vector<Vector3>const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int iVar5;
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
  iVar5 = *param_2;
  if (iVar5 != param_1) goto LAB_00127797;
  local_78 = 0;
  local_68 = &_LC14;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x24);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00127895:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00127895;
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
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(param_3 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_3 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  iVar5 = *param_2;
LAB_00127797:
  *param_2 = iVar5 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* void call_get_argument_type_info_helper<Vector<Vector2> const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Vector<Vector2>const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int iVar5;
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
  iVar5 = *param_2;
  if (iVar5 != param_1) goto LAB_001279e7;
  local_78 = 0;
  local_68 = &_LC14;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x23);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00127ae5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00127ae5;
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
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(param_3 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_3 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  iVar5 = *param_2;
LAB_001279e7:
  *param_2 = iVar5 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* void call_get_argument_type_info<Vector<Vector3> const&, Vector<Vector2> const&, Vector<Color>
   const&, Vector<Vector2> const&, Vector<Vector3> const&, TypedArray<Plane> const&>(int,
   PropertyInfo&) */

void call_get_argument_type_info<Vector<Vector3>const&,Vector<Vector2>const&,Vector<Color>const&,Vector<Vector2>const&,Vector<Vector3>const&,TypedArray<Plane>const&>
               (int param_1,PropertyInfo *param_2)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long in_FS_OFFSET;
  int local_9c;
  undefined8 local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  undefined1 local_70 [16];
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_9c = 0;
  call_get_argument_type_info_helper<Vector<Vector3>const&>(param_1,&local_9c,param_2);
  call_get_argument_type_info_helper<Vector<Vector2>const&>(param_1,&local_9c,param_2);
  iVar4 = local_9c;
  if (param_1 == local_9c) {
    local_88 = 0;
    local_90 = 0;
    local_78 = &_LC14;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_70._8_8_;
    local_70 = auVar2 << 0x40;
    String::parse_latin1((StrRange *)&local_90);
    local_98 = 0;
    local_78 = (undefined *)CONCAT44(local_78._4_4_,0x25);
    local_60 = 0;
    local_58 = 0;
    local_70 = (undefined1  [16])0x0;
    if (local_90 == 0) {
LAB_00127e58:
      local_50 = 6;
      StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
      local_50 = 6;
      if (local_60 != 0x11) goto LAB_00127e58;
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
    PropertyInfo::operator=(param_2,(PropertyInfo *)&local_78);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  }
  local_9c = iVar4 + 1;
  call_get_argument_type_info_helper<Vector<Vector2>const&>(param_1,&local_9c,param_2);
  call_get_argument_type_info_helper<Vector<Vector3>const&>(param_1,&local_9c,param_2);
  if (param_1 != local_9c) goto LAB_00127c95;
  local_88 = 0;
  Variant::get_type_name((CowData<char32_t> *)&local_90,0xe);
  local_98 = 0;
  local_78 = (undefined *)CONCAT44(local_78._4_4_,0x1c);
  local_60 = 0x1f;
  local_58 = 0;
  local_70 = (undefined1  [16])0x0;
  if (local_90 == 0) {
LAB_00127eb8:
    local_50 = 6;
    StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_00127eb8;
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
  PropertyInfo::operator=(param_2,(PropertyInfo *)&local_78);
  lVar6 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_70._0_8_;
  if (local_70._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_70._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_70._8_8_;
      local_70 = auVar3 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
LAB_00127c95:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<Vector<Vector3> const&, Vector<Vector2> const&, Vector<Color> const&, Vector<Vector2>
   const&, Vector<Vector3> const&, TypedArray<Plane> const&>::_gen_argument_type_info(int) const */

PropertyInfo *
MethodBindT<Vector<Vector3>const&,Vector<Vector2>const&,Vector<Color>const&,Vector<Vector2>const&,Vector<Vector3>const&,TypedArray<Plane>const&>
::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  call_get_argument_type_info<Vector<Vector3>const&,Vector<Vector2>const&,Vector<Color>const&,Vector<Vector2>const&,Vector<Vector3>const&,TypedArray<Plane>const&>
            (in_EDX,pPVar1);
  return pPVar1;
}



/* WARNING: Control flow encountered bad instruction data */
/* SurfaceTool::~SurfaceTool() */

void __thiscall SurfaceTool::~SurfaceTool(SurfaceTool *this)

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
/* MethodBindTR<Array>::~MethodBindTR() */

void __thiscall MethodBindTR<Array>::~MethodBindTR(MethodBindTR<Array> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Ref<ArrayMesh>, Ref<ArrayMesh> const&, unsigned long>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<ArrayMesh>,Ref<ArrayMesh>const&,unsigned_long>::~MethodBindTR
          (MethodBindTR<Ref<ArrayMesh>,Ref<ArrayMesh>const&,unsigned_long> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<Mesh> const&, int, Transform3D const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Mesh>const&,int,Transform3D_const&>::~MethodBindT
          (MethodBindT<Ref<Mesh>const&,int,Transform3D_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<Mesh> const&, int, String const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Mesh>const&,int,String_const&>::~MethodBindT
          (MethodBindT<Ref<Mesh>const&,int,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Array const&, Mesh::PrimitiveType>::~MethodBindT() */

void __thiscall
MethodBindT<Array_const&,Mesh::PrimitiveType>::~MethodBindT
          (MethodBindT<Array_const&,Mesh::PrimitiveType> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<Mesh> const&, int>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Mesh>const&,int>::~MethodBindT(MethodBindT<Ref<Mesh>const&,int> *this)

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
/* MethodBindTRC<Mesh::PrimitiveType>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Mesh::PrimitiveType>::~MethodBindTRC(MethodBindTRC<Mesh::PrimitiveType> *this)

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
/* MethodBindTR<Vector<int>, float, int>::~MethodBindTR() */

void __thiscall
MethodBindTR<Vector<int>,float,int>::~MethodBindTR(MethodBindTR<Vector<int>,float,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<AABB>::~MethodBindTRC() */

void __thiscall MethodBindTRC<AABB>::~MethodBindTRC(MethodBindTRC<AABB> *this)

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
/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Vector<Vector3> const&, Vector<Vector2> const&, Vector<Color> const&, Vector<Vector2>
   const&, Vector<Vector3> const&, TypedArray<Plane> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Vector<Vector3>const&,Vector<Vector2>const&,Vector<Color>const&,Vector<Vector2>const&,Vector<Vector3>const&,TypedArray<Plane>const&>
::~MethodBindT(MethodBindT<Vector<Vector3>const&,Vector<Vector2>const&,Vector<Color>const&,Vector<Vector2>const&,Vector<Vector3>const&,TypedArray<Plane>const&>
               *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<unsigned int>::~MethodBindT() */

void __thiscall MethodBindT<unsigned_int>::~MethodBindT(MethodBindT<unsigned_int> *this)

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
/* MethodBindT<Vector<float> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Vector<float>const&>::~MethodBindT(MethodBindT<Vector<float>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Vector<int> const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector<int>const&>::~MethodBindT(MethodBindT<Vector<int>const&> *this)

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
/* MethodBindT<Plane const&>::~MethodBindT() */

void __thiscall MethodBindT<Plane_const&>::~MethodBindT(MethodBindT<Plane_const&> *this)

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
/* MethodBindT<Color>::~MethodBindT() */

void __thiscall MethodBindT<Color>::~MethodBindT(MethodBindT<Color> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Mesh::PrimitiveType>::~MethodBindT() */

void __thiscall
MethodBindT<Mesh::PrimitiveType>::~MethodBindT(MethodBindT<Mesh::PrimitiveType> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<SurfaceTool::CustomFormat, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<SurfaceTool::CustomFormat,int>::~MethodBindTRC
          (MethodBindTRC<SurfaceTool::CustomFormat,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int, SurfaceTool::CustomFormat>::~MethodBindT() */

void __thiscall
MethodBindT<int,SurfaceTool::CustomFormat>::~MethodBindT
          (MethodBindT<int,SurfaceTool::CustomFormat> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<SurfaceTool::SkinWeightCount>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<SurfaceTool::SkinWeightCount>::~MethodBindTRC
          (MethodBindTRC<SurfaceTool::SkinWeightCount> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<SurfaceTool::SkinWeightCount>::~MethodBindT() */

void __thiscall
MethodBindT<SurfaceTool::SkinWeightCount>::~MethodBindT
          (MethodBindT<SurfaceTool::SkinWeightCount> *this)

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


