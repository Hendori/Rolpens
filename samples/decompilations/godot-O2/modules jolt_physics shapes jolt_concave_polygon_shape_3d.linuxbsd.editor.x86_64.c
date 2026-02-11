
/* JoltConcavePolygonShape3D::get_data() const */

Variant * JoltConcavePolygonShape3D::get_data(void)

{
  char cVar1;
  Variant *pVVar2;
  long in_RSI;
  Variant *in_RDI;
  long in_FS_OFFSET;
  Dictionary local_80 [8];
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(local_80);
  Variant::Variant((Variant *)local_58,(Vector *)(in_RSI + 0x88));
  Variant::Variant((Variant *)local_78,"faces");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_80);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,*(bool *)(in_RSI + 0x98));
  Variant::Variant((Variant *)local_78,"backface_collision");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_80);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant(in_RDI,local_80);
  Dictionary::~Dictionary(local_80);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return in_RDI;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltConcavePolygonShape3D::_calculate_aabb() const */

void JoltConcavePolygonShape3D::_calculate_aabb(void)

{
  float *pfVar1;
  float fVar2;
  long lVar3;
  long lVar4;
  long in_RSI;
  float *in_RDI;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  lVar3 = *(long *)(in_RSI + 0x90);
  in_RDI[0] = 0.0;
  in_RDI[1] = 0.0;
  in_RDI[2] = 0.0;
  in_RDI[3] = 0.0;
  in_RDI[4] = 0.0;
  in_RDI[5] = 0.0;
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      while( true ) {
        if (*(long *)(lVar3 + -8) <= lVar4) {
          return;
        }
        pfVar1 = (float *)(lVar3 + lVar4 * 0xc);
        if (lVar4 == 0) break;
        fVar9 = in_RDI[3];
        if (((fVar9 < 0.0) || (in_RDI[4] <= 0.0 && in_RDI[4] != 0.0)) ||
           (in_RDI[5] <= 0.0 && in_RDI[5] != 0.0)) {
          _err_print_error("expand_to","./core/math/aabb.h",0x158,
                           "AABB size is negative, this is not supported. Use AABB.abs() to get an AABB with a positive size."
                           ,0,0);
          lVar3 = *(long *)(in_RSI + 0x90);
        }
        fVar8 = *pfVar1;
        fVar10 = *in_RDI;
        lVar4 = lVar4 + 1;
        fVar5 = pfVar1[1];
        fVar7 = in_RDI[1];
        fVar9 = fVar9 + fVar10;
        fVar2 = in_RDI[2];
        fVar6 = fVar8;
        if (fVar10 <= fVar8) {
          fVar6 = fVar10;
        }
        if (fVar8 <= fVar9) {
          fVar8 = fVar9;
        }
        fVar9 = fVar5;
        if (fVar7 <= fVar5) {
          fVar9 = fVar7;
        }
        if (fVar5 <= in_RDI[4] + fVar7) {
          fVar5 = in_RDI[4] + fVar7;
        }
        fVar10 = pfVar1[2];
        fVar7 = fVar10;
        if (fVar10 <= in_RDI[5] + fVar2) {
          fVar7 = in_RDI[5] + fVar2;
        }
        if (fVar2 <= fVar10) {
          fVar10 = fVar2;
        }
        *in_RDI = fVar6;
        in_RDI[1] = fVar9;
        in_RDI[2] = fVar10;
        in_RDI[3] = fVar8 - fVar6;
        *(ulong *)(in_RDI + 4) = CONCAT44(fVar7 - fVar10,fVar5 - fVar9);
        if (lVar3 == 0) {
          return;
        }
      }
      fVar9 = pfVar1[2];
      lVar4 = 1;
      *(undefined8 *)in_RDI = *(undefined8 *)pfVar1;
      in_RDI[2] = fVar9;
    } while (lVar3 != 0);
  }
  return;
}



/* JoltConcavePolygonShape3D::set_data(Variant const&) */

void __thiscall
JoltConcavePolygonShape3D::set_data(JoltConcavePolygonShape3D *this,Variant *param_1)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  JoltConcavePolygonShape3D JVar5;
  long in_FS_OFFSET;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  Variant local_d0 [8];
  Variant local_c8 [8];
  long local_c0;
  int local_b8 [8];
  int local_98 [8];
  undefined8 local_78;
  undefined1 local_70 [16];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_1 == 0x1b) {
    Variant::operator_cast_to_Dictionary(local_d0);
    local_70 = (undefined1  [16])0x0;
    local_78 = 0;
    Variant::Variant((Variant *)local_58,"faces");
    Dictionary::get((Variant *)local_b8,local_d0);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
    if (local_b8[0] == 0x24) {
      local_78 = 0;
      local_70 = (undefined1  [16])0x0;
      Variant::Variant((Variant *)local_58,"backface_collision");
      Dictionary::get((Variant *)local_98,local_d0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
      if (local_98[0] == 1) {
        Variant::operator_cast_to_Vector(local_c8);
        lVar4 = local_c0;
        lVar3 = *(long *)(this + 0x90);
        if (lVar3 == local_c0) {
          if (lVar3 != 0) {
            LOCK();
            plVar1 = (long *)(lVar3 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_c0 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
        }
        else {
          if (lVar3 != 0) {
            LOCK();
            plVar1 = (long *)(lVar3 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar3 = *(long *)(this + 0x90);
              *(undefined8 *)(this + 0x90) = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          *(long *)(this + 0x90) = local_c0;
        }
        JVar5 = (JoltConcavePolygonShape3D)Variant::operator_cast_to_bool((Variant *)local_98);
        this[0x98] = JVar5;
        _calculate_aabb();
        *(undefined8 *)(this + 0x70) = local_f8;
        *(undefined8 *)(this + 0x78) = uStack_f0;
        *(undefined8 *)(this + 0x80) = local_e8;
        JoltShape3D::destroy();
        cVar2 = Variant::needs_deinit[local_98[0]];
      }
      else {
        _err_print_error("set_data","modules/jolt_physics/shapes/jolt_concave_polygon_shape_3d.cpp",
                         0x71,
                         "Condition \"maybe_back_face_collision.get_type() != Variant::BOOL\" is true."
                         ,0,0);
        cVar2 = Variant::needs_deinit[local_98[0]];
      }
      if (cVar2 != '\0') {
        Variant::_clear_internal();
      }
    }
    else {
      _err_print_error("set_data","modules/jolt_physics/shapes/jolt_concave_polygon_shape_3d.cpp",
                       0x6e,
                       "Condition \"maybe_faces.get_type() != Variant::PACKED_VECTOR3_ARRAY\" is true."
                       ,0,0);
    }
    if (Variant::needs_deinit[local_b8[0]] != '\0') {
      Variant::_clear_internal();
    }
    Dictionary::~Dictionary((Dictionary *)local_d0);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("set_data","modules/jolt_physics/shapes/jolt_concave_polygon_shape_3d.cpp",0x69
                     ,"Condition \"p_data.get_type() != Variant::DICTIONARY\" is true.",0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltConcavePolygonShape3D::to_string() const */

JoltConcavePolygonShape3D * __thiscall
JoltConcavePolygonShape3D::to_string(JoltConcavePolygonShape3D *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_38 = "{vertex_count=%d}";
  local_30 = 0x11;
  String::parse_latin1((StrRange *)&local_40);
  vformat<long>((String_conflict *)this,(long)&local_40);
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



/* JoltConcavePolygonShape3D::_build() const */

void JoltConcavePolygonShape3D::_build(void)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long *plVar11;
  code *pcVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uVar20;
  int iVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  char *pcVar25;
  undefined8 uVar26;
  undefined8 *puVar27;
  long *plVar28;
  ulong uVar29;
  ulong uVar30;
  long in_RSI;
  Shape *in_RDI;
  long lVar31;
  long in_FS_OFFSET;
  long local_168;
  long local_160;
  long local_158;
  long local_150;
  undefined1 local_148 [16];
  long local_138;
  undefined1 local_128 [16];
  long *local_118;
  long *local_108;
  long local_f8 [2];
  char local_e8;
  MeshShapeSettings local_d8 [140];
  undefined4 local_4c;
  undefined1 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 0x90) != 0) {
    iVar21 = (int)*(undefined8 *)(*(long *)(in_RSI + 0x90) + -8);
    if (iVar21 != 0) {
      if (iVar21 < 3) {
        JoltShape3D::_owners_to_string();
        to_string((JoltConcavePolygonShape3D *)&local_158);
        auVar18._8_8_ = 0;
        auVar18._0_8_ = local_148._8_8_;
        local_148 = auVar18 << 0x40;
        local_128._8_8_ = 0x80;
        local_128._0_8_ =
             "Failed to build Jolt Physics concave polygon shape with %s. It must have a vertex count of at least 3. This shape belongs to %s."
        ;
        String::parse_latin1((StrRange *)local_148);
        vformat<String,String>
                  (local_128,(StrRange *)local_148,(JoltConcavePolygonShape3D *)&local_158,
                   &local_150);
        pcVar25 = "Condition \"vertex_count < 3\" is true. Returning: nullptr";
        uVar26 = 0x2f;
      }
      else {
        if (iVar21 % 3 == 0) {
          uVar29 = (ulong)(iVar21 / 3);
          local_148 = (undefined1  [16])0x0;
          local_138 = 0;
          lVar22 = (*JPH::Reallocate)(0,0,uVar29 * 0x2c);
          puVar27 = *(undefined8 **)(in_RSI + 0x90);
          local_148._8_8_ = uVar29;
          local_138 = lVar22;
          if (puVar27 == (undefined8 *)0x0) {
            lVar31 = 0;
LAB_00100de3:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,0,lVar31,"p_index","size()","",false,
                       true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar12 = (code *)invalidInstructionException();
            (*pcVar12)();
          }
          lVar31 = puVar27[-1];
          if (lVar31 < 1) goto LAB_00100de3;
          puVar4 = (undefined8 *)((long)puVar27 + (long)iVar21 * 0xc);
          uVar23 = local_148._0_8_;
          iVar21 = 0;
          do {
            uVar1 = uVar23 + 1;
            uVar6 = *(undefined4 *)(puVar27 + 1);
            uVar20 = *puVar27;
            uVar26 = puVar27[2];
            uVar7 = *(undefined4 *)((long)puVar27 + 0xc);
            uVar8 = *(undefined4 *)(puVar27 + 4);
            uVar9 = *(undefined4 *)((long)puVar27 + 0x1c);
            uVar10 = *(undefined4 *)(puVar27 + 3);
            uVar24 = uVar23;
            uVar23 = uVar1;
            if (uVar29 < uVar1) {
              uVar30 = uVar29 * 2;
              if (uVar29 * 2 < uVar1) {
                uVar30 = uVar1;
              }
              lVar22 = (*JPH::Reallocate)(lVar22,uVar29 * 0x2c,uVar30 * 0x2c);
              uVar23 = local_148._0_8_ + 1;
              uVar24 = local_148._0_8_;
              local_138 = lVar22;
              local_148._8_8_ = uVar30;
            }
            local_148._0_8_ = uVar23;
            puVar5 = (undefined4 *)(lVar22 + uVar24 * 0x2c);
            if (puVar5 != (undefined4 *)0x0) {
              puVar5[10] = iVar21;
              puVar5[9] = 0;
              *puVar5 = uVar10;
              puVar5[1] = uVar9;
              puVar5[2] = uVar8;
              puVar5[3] = uVar7;
              *(undefined8 *)(puVar5 + 4) = uVar26;
              *(undefined8 *)(puVar5 + 6) = uVar20;
              puVar5[8] = uVar6;
            }
            puVar27 = (undefined8 *)((long)puVar27 + 0x24);
            uVar29 = local_148._8_8_;
            iVar21 = iVar21 + 1;
          } while (puVar4 != puVar27);
          local_118 = (long *)0x0;
          local_128 = (undefined1  [16])0x0;
          JPH::MeshShapeSettings::MeshShapeSettings(local_d8,local_148,local_128);
          if (local_118 != (long *)0x0) {
            if (local_128._0_8_ != 0) {
              plVar3 = local_118 + local_128._0_8_;
              plVar28 = local_118;
joined_r0x00100aab:
              if (plVar28 < plVar3) {
                do {
                  plVar11 = (long *)*plVar28;
                  if (plVar11 != (long *)0x0) {
                    LOCK();
                    plVar2 = plVar11 + 1;
                    *(int *)plVar2 = (int)*plVar2 + -1;
                    UNLOCK();
                    if ((int)*plVar2 == 0) {
                      if (*(code **)(*plVar11 + 0x18) == JPH::PhysicsMaterial::~PhysicsMaterial)
                      goto code_r0x00100adf;
                      (**(code **)(*plVar11 + 0x18))();
                    }
                  }
                  plVar28 = plVar28 + 1;
                  if (plVar3 <= plVar28) break;
                } while( true );
              }
            }
            auVar17._8_8_ = 0;
            auVar17._0_8_ = local_128._8_8_;
            local_128 = auVar17 << 0x40;
            (*JPH::Free)(local_118);
          }
          local_4c = JoltProjectSettings::get_active_edge_threshold();
          local_48 = JoltProjectSettings::enable_ray_cast_face_index();
          JPH::MeshShapeSettings::Create();
          if (local_e8 == '\x02') {
            JoltShape3D::_owners_to_string();
            String::utf8((char *)&local_160,(int)local_108);
            to_string((JoltConcavePolygonShape3D *)&local_168);
            local_150 = 0;
            local_128._8_8_ = 0x7c;
            local_128._0_8_ =
                 "Failed to build Jolt Physics concave polygon shape with %s. It returned the following error: \'%s\'. This shape belongs to %s."
            ;
            String::parse_latin1((StrRange *)&local_150);
            vformat<String,String,String>
                      (local_128,(StrRange *)&local_150,(JoltConcavePolygonShape3D *)&local_168,
                       &local_160,&local_158);
            _err_print_error("_build",
                             "modules/jolt_physics/shapes/jolt_concave_polygon_shape_3d.cpp",0x4c,
                             "Condition \"shape_result.HasError()\" is true. Returning: nullptr",
                             local_128,0,0);
            uVar26 = local_128._0_8_;
            if (local_128._0_8_ != 0) {
              LOCK();
              plVar3 = (long *)(local_128._0_8_ + -0x10);
              *plVar3 = *plVar3 + -1;
              UNLOCK();
              if (*plVar3 == 0) {
                auVar16._8_8_ = 0;
                auVar16._0_8_ = local_128._8_8_;
                local_128 = auVar16 << 0x40;
                Memory::free_static((void *)(uVar26 + -0x10),false);
              }
            }
            lVar22 = local_150;
            if (local_150 != 0) {
              LOCK();
              plVar3 = (long *)(local_150 + -0x10);
              *plVar3 = *plVar3 + -1;
              UNLOCK();
              if (*plVar3 == 0) {
                local_150 = 0;
                Memory::free_static((void *)(lVar22 + -0x10),false);
              }
            }
            lVar22 = local_168;
            if (local_168 != 0) {
              LOCK();
              plVar3 = (long *)(local_168 + -0x10);
              *plVar3 = *plVar3 + -1;
              UNLOCK();
              if (*plVar3 == 0) {
                local_168 = 0;
                Memory::free_static((void *)(lVar22 + -0x10),false);
              }
            }
            lVar22 = local_160;
            if (local_160 != 0) {
              LOCK();
              plVar3 = (long *)(local_160 + -0x10);
              *plVar3 = *plVar3 + -1;
              UNLOCK();
              if (*plVar3 == 0) {
                local_160 = 0;
                Memory::free_static((void *)(lVar22 + -0x10),false);
              }
            }
            lVar22 = local_158;
            if (local_158 != 0) {
              LOCK();
              plVar3 = (long *)(local_158 + -0x10);
              *plVar3 = *plVar3 + -1;
              UNLOCK();
              if (*plVar3 == 0) {
                local_158 = 0;
                Memory::free_static((void *)(lVar22 + -0x10),false);
              }
            }
            *(undefined8 *)in_RDI = 0;
          }
          else {
            JoltShape3D::with_double_sided(in_RDI,SUB81(local_108,0));
          }
          if (local_e8 == '\x01') {
            if (local_108 != (long *)0x0) {
              LOCK();
              plVar3 = local_108 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)(*local_108 + 8))();
              }
            }
          }
          else if ((local_e8 == '\x02') && (local_108 != local_f8)) {
            (*JPH::Free)();
          }
          JPH::MeshShapeSettings::~MeshShapeSettings(local_d8);
          if (local_138 != 0) {
            auVar13._8_8_ = 0;
            auVar13._0_8_ = local_148._8_8_;
            local_148 = auVar13 << 0x40;
            (*JPH::Free)();
          }
          goto LAB_00100ba9;
        }
        JoltShape3D::_owners_to_string();
        to_string((JoltConcavePolygonShape3D *)&local_158);
        auVar19._8_8_ = 0;
        auVar19._0_8_ = local_148._8_8_;
        local_148 = auVar19 << 0x40;
        local_128._8_8_ = 0x89;
        local_128._0_8_ =
             "Failed to build Jolt Physics concave polygon shape with %s. It must have a vertex count that is divisible by 3. This shape belongs to %s."
        ;
        String::parse_latin1((StrRange *)local_148);
        vformat<String,String>
                  (local_128,(StrRange *)local_148,(JoltConcavePolygonShape3D *)&local_158,
                   &local_150);
        pcVar25 = "Condition \"excess_vertex_count != 0\" is true. Returning: nullptr";
        uVar26 = 0x30;
      }
      _err_print_error("_build","modules/jolt_physics/shapes/jolt_concave_polygon_shape_3d.cpp",
                       uVar26,pcVar25,local_128,0,0);
      uVar26 = local_128._0_8_;
      if (local_128._0_8_ != 0) {
        LOCK();
        plVar3 = (long *)(local_128._0_8_ + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          auVar14._8_8_ = 0;
          auVar14._0_8_ = local_128._8_8_;
          local_128 = auVar14 << 0x40;
          Memory::free_static((void *)(uVar26 + -0x10),false);
        }
      }
      uVar26 = local_148._0_8_;
      if (local_148._0_8_ != 0) {
        LOCK();
        plVar3 = (long *)(local_148._0_8_ + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          auVar15._8_8_ = 0;
          auVar15._0_8_ = local_148._8_8_;
          local_148 = auVar15 << 0x40;
          Memory::free_static((void *)(uVar26 + -0x10),false);
        }
      }
      lVar22 = local_158;
      if (local_158 != 0) {
        LOCK();
        plVar3 = (long *)(local_158 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_158 = 0;
          Memory::free_static((void *)(lVar22 + -0x10),false);
        }
      }
      lVar22 = local_150;
      if (local_150 != 0) {
        LOCK();
        plVar3 = (long *)(local_150 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_150 = 0;
          Memory::free_static((void *)(lVar22 + -0x10),false);
        }
      }
    }
  }
  *(undefined8 *)in_RDI = 0;
LAB_00100ba9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x00100adf:
  (*JPH::Free)();
  plVar28 = plVar28 + 1;
  goto joined_r0x00100aab;
}



/* JoltConcavePolygonShape3D::get_type() const */

undefined8 JoltConcavePolygonShape3D::get_type(void)

{
  return 7;
}



/* JoltConcavePolygonShape3D::is_convex() const */

undefined8 JoltConcavePolygonShape3D::is_convex(void)

{
  return 0;
}



/* JoltConcavePolygonShape3D::get_margin() const */

undefined8 JoltConcavePolygonShape3D::get_margin(void)

{
  return 0;
}



/* JoltConcavePolygonShape3D::set_margin(float) */

void JoltConcavePolygonShape3D::set_margin(float param_1)

{
  return;
}



/* JoltConcavePolygonShape3D::get_aabb() const */

void JoltConcavePolygonShape3D::get_aabb(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_RSI;
  undefined8 *in_RDI;
  
  uVar1 = *(undefined8 *)(in_RSI + 0x70);
  uVar2 = *(undefined8 *)(in_RSI + 0x78);
  in_RDI[2] = *(undefined8 *)(in_RSI + 0x80);
  *in_RDI = uVar1;
  in_RDI[1] = uVar2;
  return;
}



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
                    /* WARNING: Could not recover jumptable at 0x00101044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)();
  return;
}



/* JoltConcavePolygonShape3D::~JoltConcavePolygonShape3D() */

void __thiscall
JoltConcavePolygonShape3D::~JoltConcavePolygonShape3D(JoltConcavePolygonShape3D *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__build_00102608;
  if (*(long *)(this + 0x90) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x90) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x90);
      *(undefined8 *)(this + 0x90) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      JoltShape3D::~JoltShape3D((JoltShape3D *)this);
      return;
    }
  }
  JoltShape3D::~JoltShape3D((JoltShape3D *)this);
  return;
}



/* JoltConcavePolygonShape3D::~JoltConcavePolygonShape3D() */

void __thiscall
JoltConcavePolygonShape3D::~JoltConcavePolygonShape3D(JoltConcavePolygonShape3D *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__build_00102608;
  if (*(long *)(this + 0x90) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x90) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x90);
      *(undefined8 *)(this + 0x90) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  JoltShape3D::~JoltShape3D((JoltShape3D *)this);
  operator_delete(this,0xa0);
  return;
}



/* JPH::MeshShapeSettings::~MeshShapeSettings() */

void __thiscall JPH::MeshShapeSettings::~MeshShapeSettings(MeshShapeSettings *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar4 = *(long **)(this + 0x80);
  *(code **)this = _err_print_error;
  if (plVar4 != (long *)0x0) {
    if ((*(long *)(this + 0x70) != 0) && (plVar2 = plVar4 + *(long *)(this + 0x70), plVar4 < plVar2)
       ) {
      do {
        while (plVar3 = (long *)*plVar4, plVar3 == (long *)0x0) {
LAB_00101280:
          plVar4 = plVar4 + 1;
          if (plVar2 <= plVar4) goto LAB_001012b8;
        }
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) goto LAB_00101280;
        if (*(code **)(*plVar3 + 0x18) != PhysicsMaterial::~PhysicsMaterial) {
          (**(code **)(*plVar3 + 0x18))();
          goto LAB_00101280;
        }
        (*Free)();
        plVar4 = plVar4 + 1;
      } while (plVar4 < plVar2);
LAB_001012b8:
      plVar4 = *(long **)(this + 0x80);
    }
    *(undefined8 *)(this + 0x70) = 0;
    (*Free)(plVar4);
  }
  if (*(long *)(this + 0x68) != 0) {
    *(undefined8 *)(this + 0x58) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x50) != 0) {
    *(undefined8 *)(this + 0x40) = 0;
    (*Free)();
  }
  *(code **)this = Variant::operator_cast_to_Dictionary;
  if (this[0x38] == (MeshShapeSettings)0x1) {
    plVar4 = *(long **)(this + 0x18);
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar2 = plVar4 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x001012e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 8))();
        return;
      }
    }
  }
  else if ((this[0x38] == (MeshShapeSettings)0x2) &&
          (*(MeshShapeSettings **)(this + 0x18) != this + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00101240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)();
    return;
  }
  return;
}



/* JPH::MeshShapeSettings::~MeshShapeSettings() */

void __thiscall JPH::MeshShapeSettings::~MeshShapeSettings(MeshShapeSettings *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar4 = *(long **)(this + 0x80);
  *(code **)this = _err_print_error;
  if (plVar4 != (long *)0x0) {
    if ((*(long *)(this + 0x70) != 0) && (plVar2 = plVar4 + *(long *)(this + 0x70), plVar4 < plVar2)
       ) {
      do {
        while (plVar3 = (long *)*plVar4, plVar3 == (long *)0x0) {
LAB_001013d0:
          plVar4 = plVar4 + 1;
          if (plVar2 <= plVar4) goto LAB_00101408;
        }
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) goto LAB_001013d0;
        if (*(code **)(*plVar3 + 0x18) != PhysicsMaterial::~PhysicsMaterial) {
          (**(code **)(*plVar3 + 0x18))();
          goto LAB_001013d0;
        }
        (*Free)();
        plVar4 = plVar4 + 1;
      } while (plVar4 < plVar2);
LAB_00101408:
      plVar4 = *(long **)(this + 0x80);
    }
    *(undefined8 *)(this + 0x70) = 0;
    (*Free)(plVar4);
  }
  if (*(long *)(this + 0x68) != 0) {
    *(undefined8 *)(this + 0x58) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x50) != 0) {
    *(undefined8 *)(this + 0x40) = 0;
    (*Free)();
  }
  *(code **)this = Variant::operator_cast_to_Dictionary;
  if (this[0x38] == (MeshShapeSettings)0x1) {
    plVar4 = *(long **)(this + 0x18);
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar2 = plVar4 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  else if ((this[0x38] == (MeshShapeSettings)0x2) &&
          (*(MeshShapeSettings **)(this + 0x18) != this + 0x28)) {
    (*Free)();
  }
                    /* WARNING: Could not recover jumptable at 0x00101391. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00101a10) */
/* WARNING: Removing unreachable block (ram,0x00101b40) */
/* WARNING: Removing unreachable block (ram,0x00101cb9) */
/* WARNING: Removing unreachable block (ram,0x00101b4c) */
/* WARNING: Removing unreachable block (ram,0x00101b56) */
/* WARNING: Removing unreachable block (ram,0x00101c9b) */
/* WARNING: Removing unreachable block (ram,0x00101b62) */
/* WARNING: Removing unreachable block (ram,0x00101b6c) */
/* WARNING: Removing unreachable block (ram,0x00101c7d) */
/* WARNING: Removing unreachable block (ram,0x00101b78) */
/* WARNING: Removing unreachable block (ram,0x00101b82) */
/* WARNING: Removing unreachable block (ram,0x00101c5f) */
/* WARNING: Removing unreachable block (ram,0x00101b8e) */
/* WARNING: Removing unreachable block (ram,0x00101b98) */
/* WARNING: Removing unreachable block (ram,0x00101c41) */
/* WARNING: Removing unreachable block (ram,0x00101ba4) */
/* WARNING: Removing unreachable block (ram,0x00101bae) */
/* WARNING: Removing unreachable block (ram,0x00101c23) */
/* WARNING: Removing unreachable block (ram,0x00101bb6) */
/* WARNING: Removing unreachable block (ram,0x00101bc0) */
/* WARNING: Removing unreachable block (ram,0x00101c08) */
/* WARNING: Removing unreachable block (ram,0x00101bc8) */
/* WARNING: Removing unreachable block (ram,0x00101bde) */
/* WARNING: Removing unreachable block (ram,0x00101bea) */
/* String vformat<String, String>(String const&, String const, String const) */

undefined8 *
vformat<String,String>
          (undefined8 *param_1,bool *param_2,String_conflict *param_3,String_conflict *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
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
  Variant::Variant(local_88,param_3);
  Variant::Variant(local_70,param_4);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,param_2);
  *param_1 = local_d0[0];
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



/* WARNING: Removing unreachable block (ram,0x00101e38) */
/* WARNING: Removing unreachable block (ram,0x00101f68) */
/* WARNING: Removing unreachable block (ram,0x001020e0) */
/* WARNING: Removing unreachable block (ram,0x00101f74) */
/* WARNING: Removing unreachable block (ram,0x00101f7e) */
/* WARNING: Removing unreachable block (ram,0x001020c2) */
/* WARNING: Removing unreachable block (ram,0x00101f8a) */
/* WARNING: Removing unreachable block (ram,0x00101f94) */
/* WARNING: Removing unreachable block (ram,0x001020a4) */
/* WARNING: Removing unreachable block (ram,0x00101fa0) */
/* WARNING: Removing unreachable block (ram,0x00101faa) */
/* WARNING: Removing unreachable block (ram,0x00102086) */
/* WARNING: Removing unreachable block (ram,0x00101fb6) */
/* WARNING: Removing unreachable block (ram,0x00101fc0) */
/* WARNING: Removing unreachable block (ram,0x00102068) */
/* WARNING: Removing unreachable block (ram,0x00101fcc) */
/* WARNING: Removing unreachable block (ram,0x00101fd6) */
/* WARNING: Removing unreachable block (ram,0x0010204a) */
/* WARNING: Removing unreachable block (ram,0x00101fde) */
/* WARNING: Removing unreachable block (ram,0x00101fe8) */
/* WARNING: Removing unreachable block (ram,0x0010202f) */
/* WARNING: Removing unreachable block (ram,0x00101ff0) */
/* WARNING: Removing unreachable block (ram,0x00102005) */
/* WARNING: Removing unreachable block (ram,0x00102011) */
/* String vformat<String, String, String>(String const&, String const, String const, String const)
    */

undefined8 *
vformat<String,String,String>
          (undefined8 *param_1,bool *param_2,String_conflict *param_3,String_conflict *param_4,
          String_conflict *param_5)

{
  Variant *pVVar1;
  int iVar2;
  Variant *pVVar3;
  int iVar4;
  long in_FS_OFFSET;
  Array local_f8 [8];
  undefined8 local_f0 [9];
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_a8,param_3);
  Variant::Variant(local_90,param_4);
  iVar2 = 0;
  Variant::Variant(local_78,param_5);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_f8);
  iVar4 = (int)local_f8;
  Array::resize(iVar4);
  pVVar3 = local_a8;
  do {
    iVar2 = iVar2 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar4);
    Variant::operator=(pVVar1,pVVar3);
    pVVar3 = pVVar3 + 0x18;
  } while (iVar2 != 3);
  String::sprintf((Array *)local_f0,param_2);
  *param_1 = local_f0[0];
  pVVar3 = local_48;
  Array::~Array(local_f8);
  do {
    pVVar1 = pVVar3 + -0x18;
    pVVar3 = pVVar3 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar3 != local_a8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x00102228) */
/* WARNING: Removing unreachable block (ram,0x00102358) */
/* WARNING: Removing unreachable block (ram,0x00102520) */
/* WARNING: Removing unreachable block (ram,0x00102364) */
/* WARNING: Removing unreachable block (ram,0x0010236e) */
/* WARNING: Removing unreachable block (ram,0x00102500) */
/* WARNING: Removing unreachable block (ram,0x0010237a) */
/* WARNING: Removing unreachable block (ram,0x00102384) */
/* WARNING: Removing unreachable block (ram,0x001024e0) */
/* WARNING: Removing unreachable block (ram,0x00102390) */
/* WARNING: Removing unreachable block (ram,0x0010239a) */
/* WARNING: Removing unreachable block (ram,0x001024c0) */
/* WARNING: Removing unreachable block (ram,0x001023a6) */
/* WARNING: Removing unreachable block (ram,0x001023b0) */
/* WARNING: Removing unreachable block (ram,0x001024a0) */
/* WARNING: Removing unreachable block (ram,0x001023bc) */
/* WARNING: Removing unreachable block (ram,0x001023c6) */
/* WARNING: Removing unreachable block (ram,0x00102480) */
/* WARNING: Removing unreachable block (ram,0x001023d2) */
/* WARNING: Removing unreachable block (ram,0x001023dc) */
/* WARNING: Removing unreachable block (ram,0x00102460) */
/* WARNING: Removing unreachable block (ram,0x001023e4) */
/* WARNING: Removing unreachable block (ram,0x001023fa) */
/* WARNING: Removing unreachable block (ram,0x00102406) */
/* String vformat<long>(String const&, long const) */

String_conflict * vformat<long>(String_conflict *param_1,long param_2)

{
  char cVar1;
  Variant *this;
  long in_RDX;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,in_RDX);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,(bool *)param_2);
  *(undefined8 *)param_1 = local_c0[0];
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



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
  return;
}



/* JoltConcavePolygonShape3D::_build() const */

void JoltConcavePolygonShape3D::_GLOBAL__sub_I__build(void)

{
  if (JPH::DVec3::cTrue == '\0') {
    JPH::DVec3::cTrue = '\x01';
    JPH::DVec3::cTrue = _LC30;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::MeshShapeSettings::~MeshShapeSettings() */

void __thiscall JPH::MeshShapeSettings::~MeshShapeSettings(MeshShapeSettings *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JoltConcavePolygonShape3D::~JoltConcavePolygonShape3D() */

void __thiscall
JoltConcavePolygonShape3D::~JoltConcavePolygonShape3D(JoltConcavePolygonShape3D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


