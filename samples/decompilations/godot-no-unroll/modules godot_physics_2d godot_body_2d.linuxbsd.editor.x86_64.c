
/* GodotBody2D::~GodotBody2D() */

void __thiscall GodotBody2D::~GodotBody2D(GodotBody2D *this)

{
  Callable *this_00;
  Object *pOVar1;
  void *pvVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  long *plVar6;
  
  this_00 = *(Callable **)(this + 0x218);
  *(undefined ***)this = &PTR__shape_changed_00103ad8;
  if (this_00 != (Callable *)0x0) {
    if (Variant::needs_deinit[*(int *)(this_00 + 0x10)] != '\0') {
      Variant::_clear_internal();
    }
    Callable::~Callable(this_00);
    Memory::free_static(this_00,false);
  }
  pOVar1 = *(Object **)(this + 0x220);
  if (pOVar1 != (Object *)0x0) {
    cVar4 = predelete_handler(pOVar1);
    if (cVar4 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
  Callable::~Callable((Callable *)(this + 0x208));
  if (*(long *)(this + 0x1f8) != 0) {
    LOCK();
    plVar6 = (long *)(*(long *)(this + 0x1f8) + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      lVar5 = *(long *)(this + 0x1f8);
      *(undefined8 *)(this + 0x1f8) = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x1e8) != 0) {
    LOCK();
    plVar6 = (long *)(*(long *)(this + 0x1e8) + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      lVar5 = *(long *)(this + 0x1e8);
      *(undefined8 *)(this + 0x1e8) = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  plVar6 = *(long **)(this + 0x1d8);
  if (plVar6 != (long *)0x0) {
    do {
      pvVar2 = (void *)*plVar6;
      if (pvVar2 == (void *)0x0) {
        if ((int)plVar6[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_00100127;
        }
        break;
      }
      if (*(long **)((long)pvVar2 + 0x20) == plVar6) {
        lVar5 = *(long *)((long)pvVar2 + 0x10);
        lVar3 = *(long *)((long)pvVar2 + 0x18);
        *plVar6 = lVar5;
        if (pvVar2 == (void *)plVar6[1]) {
          plVar6[1] = lVar3;
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 0x10) = lVar5;
          lVar5 = *(long *)((long)pvVar2 + 0x10);
        }
        if (lVar5 != 0) {
          *(long *)(lVar5 + 0x18) = lVar3;
        }
        Memory::free_static(pvVar2,false);
        *(int *)(plVar6 + 2) = (int)plVar6[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar6 = *(long **)(this + 0x1d8);
    } while ((int)plVar6[2] != 0);
    Memory::free_static(plVar6,false);
  }
LAB_00100127:
  if (*(long *)(this + 0x1b0) != 0) {
    LOCK();
    plVar6 = (long *)(*(long *)(this + 0x1b0) + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      lVar5 = *(long *)(this + 0x1b0);
      *(undefined8 *)(this + 0x1b0) = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  plVar6 = *(long **)(this + 0x188);
  if (plVar6 != (long *)0x0) {
    lVar5 = *(long *)(this + 0x198);
    if (lVar5 != 0) {
      *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(this + 0x1a0);
    }
    lVar3 = *(long *)(this + 0x1a0);
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x10) = lVar5;
    }
    if (this + 0x188 == (GodotBody2D *)*plVar6) {
      *plVar6 = *(long *)(this + 0x198);
    }
    if (this + 0x188 == (GodotBody2D *)plVar6[1]) {
      plVar6[1] = lVar3;
    }
  }
  plVar6 = *(long **)(this + 0x168);
  if (plVar6 != (long *)0x0) {
    lVar5 = *(long *)(this + 0x178);
    if (lVar5 != 0) {
      *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(this + 0x180);
    }
    lVar3 = *(long *)(this + 0x180);
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x10) = lVar5;
    }
    if (this + 0x168 == (GodotBody2D *)*plVar6) {
      *plVar6 = *(long *)(this + 0x178);
    }
    if (this + 0x168 == (GodotBody2D *)plVar6[1]) {
      plVar6[1] = lVar3;
    }
  }
  plVar6 = *(long **)(this + 0x148);
  if (plVar6 != (long *)0x0) {
    lVar5 = *(long *)(this + 0x158);
    if (lVar5 != 0) {
      *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(this + 0x160);
    }
    lVar3 = *(long *)(this + 0x160);
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x10) = lVar5;
    }
    if (this + 0x148 == (GodotBody2D *)*plVar6) {
      *plVar6 = *(long *)(this + 0x158);
    }
    if (this + 0x148 == (GodotBody2D *)plVar6[1]) {
      plVar6[1] = lVar3;
    }
  }
  *(code **)this = operator_delete;
  plVar6 = *(long **)(this + 0x88);
  if (plVar6 != (long *)0x0) {
    lVar5 = *(long *)(this + 0x98);
    if (lVar5 != 0) {
      *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(this + 0xa0);
    }
    lVar3 = *(long *)(this + 0xa0);
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x10) = lVar5;
    }
    if (this + 0x88 == (GodotBody2D *)*plVar6) {
      *plVar6 = *(long *)(this + 0x98);
    }
    if (this + 0x88 == (GodotBody2D *)plVar6[1]) {
      plVar6[1] = lVar3;
    }
  }
  if (*(long *)(this + 0x38) != 0) {
    LOCK();
    plVar6 = (long *)(*(long *)(this + 0x38) + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      lVar5 = *(long *)(this + 0x38);
      *(undefined8 *)(this + 0x38) = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
      return;
    }
  }
  return;
}



/* GodotBody2D::~GodotBody2D() */

void __thiscall GodotBody2D::~GodotBody2D(GodotBody2D *this)

{
  ~GodotBody2D(this);
  operator_delete(this,0x230);
  return;
}



/* GodotBody2D::_mass_properties_changed() */

void __thiscall GodotBody2D::_mass_properties_changed(GodotBody2D *this)

{
  if ((*(SelfList **)(this + 0x40) != (SelfList *)0x0) && (*(long *)(this + 0x168) == 0)) {
    GodotSpace2D::body_add_to_mass_properties_update_list(*(SelfList **)(this + 0x40));
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotBody2D::update_mass_properties() */

void __thiscall GodotBody2D::update_mass_properties(GodotBody2D *this)

{
  long lVar1;
  undefined8 *puVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  uint uVar6;
  long *plVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long in_FS_OFFSET;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  undefined1 auVar18 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = *(uint *)(this + 0xa8);
  if (uVar6 == 2) {
    lVar9 = *(long *)(this + 0x38);
    lVar12 = 0;
    lVar10 = 0;
    fVar17 = 0.0;
    if (lVar9 == 0) {
      if (this[0x121] != (GodotBody2D)0x0) {
        *(undefined8 *)(this + 0x110) = 0;
      }
      fVar17 = 0.0;
    }
    else {
LAB_00100586:
      lVar11 = *(long *)(lVar9 + -8);
      if ((int)lVar10 < (int)lVar11) {
        do {
          if (lVar10 < lVar11) {
            if (*(char *)(lVar9 + 0x50 + lVar12) != '\0') goto LAB_00100858;
          }
          else {
            _err_print_index_error
                      ("is_shape_disabled","modules/godot_physics_2d/godot_collision_object_2d.h",
                       0x8b,lVar10,lVar11,"p_idx","shapes.size()","",false,false);
            lVar9 = *(long *)(this + 0x38);
          }
          if (lVar9 == 0) goto LAB_001008c8;
          lVar11 = *(long *)(lVar9 + -8);
          if (lVar11 <= lVar10) goto LAB_001008cb;
          pfVar3 = (float *)(lVar9 + 0x3c + lVar12);
          lVar11 = *(long *)(lVar9 + -8);
          lVar10 = lVar10 + 1;
          pfVar4 = (float *)(lVar9 + 0x40 + lVar12);
          lVar12 = lVar12 + 0x58;
          fVar17 = fVar17 + *pfVar3 * *pfVar4;
          if ((int)lVar11 <= (int)lVar10) break;
        } while( true );
      }
LAB_001005e0:
      if ((this[0x121] != (GodotBody2D)0x0) && (*(undefined8 *)(this + 0x110) = 0, fVar17 != 0.0)) {
        lVar12 = 0;
        lVar10 = 0;
        if (lVar9 != 0) {
LAB_00100611:
          lVar11 = *(long *)(lVar9 + -8);
          if ((int)lVar10 < (int)lVar11) {
            do {
              if (lVar10 < lVar11) {
                if (*(char *)(lVar9 + 0x50 + lVar12) != '\0') goto LAB_00100920;
              }
              else {
                _err_print_index_error
                          ("is_shape_disabled",
                           "modules/godot_physics_2d/godot_collision_object_2d.h",0x8b,lVar10,lVar11
                           ,"p_idx","shapes.size()","",false,false);
                lVar9 = *(long *)(this + 0x38);
              }
              if (lVar9 == 0) {
LAB_001008c8:
                lVar11 = 0;
LAB_001008cb:
                _err_print_index_error
                          ("get_shape_aabb","modules/godot_physics_2d/godot_collision_object_2d.h",
                           0x81,lVar10,lVar11,"p_index","shapes.size()","",false,true);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar8 = (code *)invalidInstructionException();
                (*pcVar8)();
              }
              lVar11 = *(long *)(lVar9 + -8);
              if (lVar11 <= lVar10) goto LAB_001008cb;
              lVar1 = lVar9 + lVar12;
              lVar11 = *(long *)(lVar9 + -8);
              lVar10 = lVar10 + 1;
              lVar12 = lVar12 + 0x58;
              fVar13 = (*(float *)(lVar1 + 0x3c) * *(float *)(lVar1 + 0x40) *
                       *(float *)(this + 0x100)) / fVar17;
              *(ulong *)(this + 0x110) =
                   CONCAT44((float)((ulong)*(undefined8 *)(this + 0x110) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar1 + 0x10) >> 0x20) * fVar13,
                            (float)*(undefined8 *)(this + 0x110) +
                            (float)*(undefined8 *)(lVar1 + 0x10) * fVar13);
              if ((int)lVar11 <= (int)lVar10) break;
            } while( true );
          }
        }
LAB_00100690:
        auVar16._8_8_ = 0;
        auVar16._0_8_ = *(ulong *)(this + 0x110);
        auVar18._0_4_ = (undefined4)*(undefined8 *)(this + 0x100);
        auVar18._4_4_ = auVar18._0_4_;
        auVar18._12_4_ = _UNK_00103b4c;
        auVar18._8_4_ = _LC18;
        auVar16 = divps(auVar16,auVar18);
        *(long *)(this + 0x110) = auVar16._0_8_;
      }
    }
    if (this[0x120] == (GodotBody2D)0x0) {
LAB_001007fc:
      if (*(float *)(this + 0x108) <= 0.0) goto LAB_00100990;
      fVar17 = _LC18 / *(float *)(this + 0x108);
    }
    else {
      *(undefined4 *)(this + 0x108) = 0;
      lVar12 = 0;
      lVar10 = 0;
      if (lVar9 != 0) {
LAB_001006e8:
        do {
          lVar11 = *(long *)(lVar9 + -8);
          if ((int)lVar11 <= (int)lVar10) break;
          if (lVar10 < lVar11) {
            if (*(char *)(lVar9 + 0x50 + lVar12) == '\0') goto LAB_0010070a;
          }
          else {
            _err_print_index_error
                      ("is_shape_disabled","modules/godot_physics_2d/godot_collision_object_2d.h",
                       0x8b,lVar10,lVar11,"p_idx","shapes.size()","",false,false);
            lVar9 = *(long *)(this + 0x38);
LAB_0010070a:
            if (lVar9 == 0) {
              lVar11 = 0;
LAB_001009a3:
              _err_print_index_error
                        ("get_shape","modules/godot_physics_2d/godot_collision_object_2d.h",0x75,
                         lVar10,lVar11,"p_index","shapes.size()","",false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
            lVar11 = *(long *)(lVar9 + -8);
            if (lVar11 <= lVar10) goto LAB_001009a3;
            puVar2 = (undefined8 *)(lVar9 + lVar12);
            fVar13 = *(float *)((long)puVar2 + 0x3c) * *(float *)(puVar2 + 8);
            plVar7 = (long *)puVar2[9];
            if (fVar13 == 0.0) {
              lVar10 = lVar10 + 1;
              lVar12 = lVar12 + 0x58;
              goto LAB_001006e8;
            }
            local_48 = *puVar2;
            uStack_40 = puVar2[1];
            fVar5 = *(float *)(this + 0x100);
            local_38 = puVar2[2];
            local_50 = Transform2D::get_scale();
            pcVar8 = *(code **)(*plVar7 + 0x48);
            fVar15 = 0.0;
            if (pcVar8 != GodotConcavePolygonShape2D::get_moment_of_inertia) {
              fVar15 = (float)(*pcVar8)(plVar7,&local_50);
            }
            fVar14 = (float)Vector2::length_squared();
            lVar9 = *(long *)(this + 0x38);
            *(float *)(this + 0x108) =
                 fVar14 * ((fVar13 * fVar5) / fVar17) + fVar15 + *(float *)(this + 0x108);
          }
          lVar10 = lVar10 + 1;
          lVar12 = lVar12 + 0x58;
        } while (lVar9 != 0);
        goto LAB_001007fc;
      }
LAB_00100990:
      fVar17 = 0.0;
    }
    *(float *)(this + 0x10c) = fVar17;
    if (*(float *)(this + 0x100) != 0.0) {
      *(float *)(this + 0x104) = _LC18 / *(float *)(this + 0x100);
      goto LAB_001004ed;
    }
  }
  else {
    if (2 < uVar6) {
      if (uVar6 == 3) {
        *(undefined4 *)(this + 0x10c) = 0;
        *(float *)(this + 0x104) = _LC18 / *(float *)(this + 0x100);
      }
      goto LAB_001004ed;
    }
    *(undefined4 *)(this + 0x10c) = 0;
  }
  *(undefined4 *)(this + 0x104) = 0;
LAB_001004ed:
  fVar13 = (float)*(undefined8 *)(this + 0x110);
  fVar17 = (float)((ulong)*(undefined8 *)(this + 0x110) >> 0x20);
  *(ulong *)(this + 0x118) =
       CONCAT44(fVar17 * (float)((ulong)*(undefined8 *)(this + 0x50) >> 0x20) +
                (float)((ulong)*(undefined8 *)(this + 0x48) >> 0x20) * fVar13,
                (float)*(undefined8 *)(this + 0x50) * fVar17 +
                fVar13 * (float)*(undefined8 *)(this + 0x48));
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00100858:
  if (lVar9 == 0) goto LAB_001005e0;
  lVar10 = lVar10 + 1;
  lVar12 = lVar12 + 0x58;
  goto LAB_00100586;
LAB_00100920:
  if (lVar9 == 0) goto LAB_00100690;
  lVar10 = lVar10 + 1;
  lVar12 = lVar12 + 0x58;
  goto LAB_00100611;
}



/* GodotBody2D::reset_mass_properties() */

void __thiscall GodotBody2D::reset_mass_properties(GodotBody2D *this)

{
  *(undefined2 *)(this + 0x120) = 0x101;
  if ((*(SelfList **)(this + 0x40) != (SelfList *)0x0) && (*(long *)(this + 0x168) == 0)) {
    GodotSpace2D::body_add_to_mass_properties_update_list(*(SelfList **)(this + 0x40));
    return;
  }
  return;
}



/* GodotBody2D::set_active(bool) */

void __thiscall GodotBody2D::set_active(GodotBody2D *this,bool param_1)

{
  if (this[0x1bd] != (GodotBody2D)param_1) {
    this[0x1bd] = (GodotBody2D)param_1;
    if (param_1) {
      if (*(int *)(this + 0xa8) == 0) {
        this[0x1bd] = (GodotBody2D)0x0;
        return;
      }
      if (*(SelfList **)(this + 0x40) != (SelfList *)0x0) {
        GodotSpace2D::body_add_to_active_list(*(SelfList **)(this + 0x40));
        return;
      }
    }
    else if (*(SelfList **)(this + 0x40) != (SelfList *)0x0) {
      GodotSpace2D::body_remove_from_active_list(*(SelfList **)(this + 0x40));
      return;
    }
  }
  return;
}



/* GodotBody2D::set_param(PhysicsServer2D::BodyParameter, Variant const&) */

void __thiscall GodotBody2D::set_param(GodotBody2D *this,undefined4 param_2,Variant *param_3)

{
  int iVar1;
  float fVar2;
  undefined8 uVar3;
  
  switch(param_2) {
  case 0:
    fVar2 = Variant::operator_cast_to_float(param_3);
    *(float *)(this + 0xf8) = fVar2;
    break;
  case 1:
    fVar2 = Variant::operator_cast_to_float(param_3);
    *(float *)(this + 0xfc) = fVar2;
    break;
  case 2:
    fVar2 = Variant::operator_cast_to_float(param_3);
    if (fVar2 <= 0.0) {
      _err_print_error("set_param","modules/godot_physics_2d/godot_body_2d.cpp",0xa2,
                       "Condition \"mass_value <= 0\" is true.",0,0);
      return;
    }
    *(float *)(this + 0x100) = fVar2;
    if (*(int *)(this + 0xa8) < 2) {
      return;
    }
    goto LAB_00100bfe;
  case 3:
    fVar2 = Variant::operator_cast_to_float(param_3);
    if (0.0 < fVar2) {
      this[0x120] = (GodotBody2D)0x0;
      *(float *)(this + 0x108) = fVar2;
      if (*(int *)(this + 0xa8) != 2) {
        return;
      }
      *(float *)(this + 0x10c) = _LC18 / fVar2;
      return;
    }
    this[0x120] = (GodotBody2D)0x1;
    if (*(int *)(this + 0xa8) != 2) {
      return;
    }
LAB_00100bfe:
    if ((*(SelfList **)(this + 0x40) != (SelfList *)0x0) && (*(long *)(this + 0x168) == 0)) {
      GodotSpace2D::body_add_to_mass_properties_update_list(*(SelfList **)(this + 0x40));
      return;
    }
    break;
  case 4:
    this[0x121] = (GodotBody2D)0x0;
    uVar3 = Variant::operator_cast_to_Vector2(param_3);
    fVar2 = (float)((ulong)uVar3 >> 0x20);
    *(undefined8 *)(this + 0x110) = uVar3;
    *(ulong *)(this + 0x118) =
         CONCAT44(fVar2 * (float)((ulong)*(undefined8 *)(this + 0x50) >> 0x20) +
                  (float)((ulong)*(undefined8 *)(this + 0x48) >> 0x20) * (float)uVar3,
                  (float)*(undefined8 *)(this + 0x50) * fVar2 +
                  (float)uVar3 * (float)*(undefined8 *)(this + 0x48));
    break;
  case 5:
    if ((((ABS(*(float *)(this + 0xf4)) < _LC23) && (*(SelfList **)(this + 0x40) != (SelfList *)0x0)
         ) && (1 < *(uint *)(this + 0xa8))) && (this[0x1bd] == (GodotBody2D)0x0)) {
      this[0x1bd] = (GodotBody2D)0x1;
      GodotSpace2D::body_add_to_active_list(*(SelfList **)(this + 0x40));
    }
    fVar2 = Variant::operator_cast_to_float(param_3);
    *(float *)(this + 0xf4) = fVar2;
    break;
  case 6:
    iVar1 = Variant::operator_cast_to_int(param_3);
    *(int *)(this + 0xdc) = iVar1;
    break;
  case 7:
    iVar1 = Variant::operator_cast_to_int(param_3);
    *(int *)(this + 0xe0) = iVar1;
    break;
  case 8:
    fVar2 = Variant::operator_cast_to_float(param_3);
    *(float *)(this + 0xe4) = fVar2;
    break;
  case 9:
    fVar2 = Variant::operator_cast_to_float(param_3);
    *(float *)(this + 0xe8) = fVar2;
    break;
  default:
    return;
  }
  return;
}



/* GodotBody2D::get_param(PhysicsServer2D::BodyParameter) const */

Variant * GodotBody2D::get_param(Variant *param_1,long param_2,undefined4 param_3)

{
  switch(param_3) {
  case 0:
    Variant::Variant(param_1,*(float *)(param_2 + 0xf8));
    break;
  case 1:
    Variant::Variant(param_1,*(float *)(param_2 + 0xfc));
    break;
  case 2:
    Variant::Variant(param_1,*(float *)(param_2 + 0x100));
    break;
  case 3:
    Variant::Variant(param_1,*(float *)(param_2 + 0x108));
    break;
  case 4:
    Variant::Variant(param_1,(Vector2 *)(param_2 + 0x110));
    break;
  case 5:
    Variant::Variant(param_1,*(float *)(param_2 + 0xf4));
    break;
  case 6:
    Variant::Variant(param_1,*(int *)(param_2 + 0xdc));
    break;
  case 7:
    Variant::Variant(param_1,*(int *)(param_2 + 0xe0));
    break;
  case 8:
    Variant::Variant(param_1,*(float *)(param_2 + 0xe4));
    break;
  case 9:
    Variant::Variant(param_1,*(float *)(param_2 + 0xe8));
    break;
  default:
    Variant::Variant(param_1,0);
  }
  return param_1;
}



/* GodotBody2D::set_mode(PhysicsServer2D::BodyMode) */

void __thiscall GodotBody2D::set_mode(GodotBody2D *this,uint param_2)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  bool bVar3;
  float fVar4;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  iVar1 = *(int *)(this + 0xa8);
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  *(uint *)(this + 0xa8) = param_2;
  if (param_2 == 2) {
    if (*(float *)(this + 0x100) <= 0.0) {
      fVar4 = 0.0;
    }
    else {
      fVar4 = _LC18 / *(float *)(this + 0x100);
    }
    *(float *)(this + 0x104) = fVar4;
    if (this[0x120] == (GodotBody2D)0x0) {
      *(float *)(this + 0x10c) = _LC18 / *(float *)(this + 0x108);
    }
    if ((*(SelfList **)(this + 0x40) != (SelfList *)0x0) && (*(long *)(this + 0x168) == 0)) {
      GodotSpace2D::body_add_to_mass_properties_update_list(*(SelfList **)(this + 0x40));
    }
LAB_00100f2f:
    GodotCollisionObject2D::_set_static(SUB81(this,0));
    if (this[0x1bd] == (GodotBody2D)0x0) {
      this[0x1bd] = (GodotBody2D)0x1;
      if (*(int *)(this + 0xa8) == 0) {
        this[0x1bd] = (GodotBody2D)0x0;
      }
      else if (*(SelfList **)(this + 0x40) != (SelfList *)0x0) {
        if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
          GodotSpace2D::body_add_to_active_list(*(SelfList **)(this + 0x40));
          return;
        }
        goto LAB_001010f1;
      }
    }
  }
  else if (param_2 < 3) {
    Transform2D::affine_inverse();
    *(undefined4 *)(this + 0x104) = 0;
    *(undefined8 *)(this + 0x70) = local_28;
    *(undefined4 *)(this + 0x10c) = 0;
    *(undefined8 *)(this + 0x60) = local_38;
    *(undefined8 *)(this + 0x68) = uStack_30;
    GodotCollisionObject2D::_set_static(SUB81(this,0));
    bVar3 = false;
    if ((param_2 == 1) && (bVar3 = false, *(long *)(this + 0x1f8) != 0)) {
      bVar3 = *(long *)(*(long *)(this + 0x1f8) + -8) != 0;
    }
    set_active(this,bVar3);
    *(undefined8 *)(this + 0xb8) = 0;
    *(undefined4 *)(this + 0xc0) = 0;
    if ((*(int *)(this + 0xa8) == 1) && (iVar1 != 1)) {
      this[0x1bf] = (GodotBody2D)0x1;
    }
  }
  else if (param_2 == 3) {
    if (*(float *)(this + 0x100) <= 0.0) {
      fVar4 = 0.0;
    }
    else {
      fVar4 = _LC18 / *(float *)(this + 0x100);
    }
    *(undefined4 *)(this + 0x10c) = 0;
    *(undefined4 *)(this + 0xc0) = 0;
    *(float *)(this + 0x104) = fVar4;
    goto LAB_00100f2f;
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001010f1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotBody2D::get_mode() const */

undefined4 __thiscall GodotBody2D::get_mode(GodotBody2D *this)

{
  return *(undefined4 *)(this + 0xa8);
}



/* GodotBody2D::get_state(PhysicsServer2D::BodyState) const */

Variant * GodotBody2D::get_state(Variant *param_1,long param_2,undefined4 param_3)

{
  switch(param_3) {
  case 0:
    Variant::Variant(param_1,(Transform2D *)(param_2 + 0x48));
    return param_1;
  case 1:
    Variant::Variant(param_1,(Vector2 *)(param_2 + 0xb8));
    return param_1;
  case 2:
    Variant::Variant(param_1,*(float *)(param_2 + 0xc0));
    return param_1;
  case 3:
    Variant::Variant(param_1,(bool)(*(byte *)(param_2 + 0x1bd) ^ 1));
    return param_1;
  case 4:
    Variant::Variant(param_1,*(bool *)(param_2 + 0x1be));
    return param_1;
  default:
    *(undefined4 *)param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
    return param_1;
  }
}



/* GodotBody2D::_update_transform_dependent() */

void __thiscall GodotBody2D::_update_transform_dependent(GodotBody2D *this)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (float)*(undefined8 *)(this + 0x110);
  fVar1 = (float)((ulong)*(undefined8 *)(this + 0x110) >> 0x20);
  *(ulong *)(this + 0x118) =
       CONCAT44(fVar1 * (float)((ulong)*(undefined8 *)(this + 0x50) >> 0x20) +
                (float)((ulong)*(undefined8 *)(this + 0x48) >> 0x20) * fVar2,
                (float)*(undefined8 *)(this + 0x50) * fVar1 +
                fVar2 * (float)*(undefined8 *)(this + 0x48));
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotBody2D::integrate_velocities(float) */

void __thiscall GodotBody2D::integrate_velocities(GodotBody2D *this,float param_1)

{
  undefined8 uVar1;
  int iVar2;
  char cVar3;
  SelfList *pSVar4;
  long in_FS_OFFSET;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0xa8) != 0) {
    pSVar4 = *(SelfList **)(this + 0x40);
    if (pSVar4 == (SelfList *)0x0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        _err_print_error("integrate_velocities","modules/godot_physics_2d/godot_body_2d.cpp",0x26c,
                         "Parameter \"get_space()\" is null.",0,0);
        return;
      }
      goto LAB_00101561;
    }
    if (*(long *)(this + 0x218) == 0) {
      cVar3 = Callable::is_valid();
      if (cVar3 != '\0') {
        pSVar4 = *(SelfList **)(this + 0x40);
        goto LAB_0010124c;
      }
    }
    else {
LAB_0010124c:
      GodotSpace2D::body_add_to_state_query_list(pSVar4);
    }
    if (*(int *)(this + 0xa8) == 1) {
      *(undefined8 *)(this + 0x58) = *(undefined8 *)(this + 0x1d0);
      *(undefined8 *)(this + 0x48) = *(undefined8 *)(this + 0x1c0);
      *(undefined8 *)(this + 0x50) = *(undefined8 *)(this + 0x1c8);
      Transform2D::affine_inverse();
      *(undefined8 *)(this + 0x70) = local_38;
      *(undefined8 *)(this + 0x60) = local_48;
      *(undefined8 *)(this + 0x68) = uStack_40;
      if ((((*(long *)(this + 0x1f8) == 0) || (*(long *)(*(long *)(this + 0x1f8) + -8) == 0)) &&
          (*(float *)(this + 0xb8) == 0.0)) &&
         (((*(float *)(this + 0xbc) == 0.0 && (*(float *)(this + 0xc0) == 0.0)) &&
          (this[0x1bd] != (GodotBody2D)0x0)))) {
        this[0x1bd] = (GodotBody2D)0x0;
        if (*(SelfList **)(this + 0x40) != (SelfList *)0x0) {
          if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
            GodotSpace2D::body_remove_from_active_list(*(SelfList **)(this + 0x40));
            return;
          }
          goto LAB_00101561;
        }
      }
    }
    else {
      uVar7 = *(undefined8 *)(this + 0xb8);
      uVar1 = *(undefined8 *)(this + 0xac);
      fVar8 = (*(float *)(this + 0xc0) + *(float *)(this + 0xb4)) * param_1;
      fVar5 = (float)Transform2D::get_rotation();
      local_50 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x58) >> 0x20) +
                          ((float)((ulong)uVar1 >> 0x20) + (float)((ulong)uVar7 >> 0x20)) * param_1,
                          (float)*(undefined8 *)(this + 0x58) +
                          ((float)uVar1 + (float)uVar7) * param_1);
      fVar6 = (float)Vector2::length_squared();
      if (__LC26 < (double)fVar6) {
        uVar7 = Vector2::rotated(fVar8);
        local_50 = CONCAT44(((float)((ulong)*(undefined8 *)(this + 0x118) >> 0x20) -
                            (float)((ulong)uVar7 >> 0x20)) + (float)((ulong)local_50 >> 0x20),
                            ((float)*(undefined8 *)(this + 0x118) - (float)uVar7) + (float)local_50)
        ;
      }
      iVar2 = *(int *)(this + 0x1b8);
      Transform2D::Transform2D((Transform2D *)&local_48,fVar5 + fVar8,(Vector2 *)&local_50);
      *(undefined8 *)(this + 0x48) = local_48;
      *(undefined8 *)(this + 0x50) = uStack_40;
      *(undefined8 *)(this + 0x58) = local_38;
      if (iVar2 == 0) {
        GodotCollisionObject2D::_update_shapes();
      }
      Transform2D::inverse();
      *(undefined8 *)(this + 0x70) = local_38;
      *(undefined8 *)(this + 0x60) = local_48;
      *(undefined8 *)(this + 0x68) = uStack_40;
      if (*(int *)(this + 0x1b8) != 0) {
        *(undefined8 *)(this + 0x1d0) = *(undefined8 *)(this + 0x58);
        *(undefined8 *)(this + 0x1c0) = *(undefined8 *)(this + 0x48);
        *(undefined8 *)(this + 0x1c8) = *(undefined8 *)(this + 0x50);
      }
      fVar6 = (float)*(undefined8 *)(this + 0x110);
      fVar5 = (float)((ulong)*(undefined8 *)(this + 0x110) >> 0x20);
      *(ulong *)(this + 0x118) =
           CONCAT44(fVar5 * (float)((ulong)*(undefined8 *)(this + 0x50) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(this + 0x48) >> 0x20) * fVar6,
                    (float)*(undefined8 *)(this + 0x50) * fVar5 +
                    fVar6 * (float)*(undefined8 *)(this + 0x48));
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101561:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotBody2D::wakeup_neighbours() */

void __thiscall GodotBody2D::wakeup_neighbours(GodotBody2D *this)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (*(undefined8 **)(this + 0x1d8) == (undefined8 *)0x0) {
    return;
  }
  plVar2 = (long *)**(undefined8 **)(this + 0x1d8);
  do {
    if (plVar2 == (long *)0x0) {
      return;
    }
    iVar1 = *(int *)(*plVar2 + 0x10);
    lVar3 = *(long *)(*plVar2 + 8);
    if (0 < iVar1) {
      lVar5 = 0;
LAB_001015c1:
      do {
        if ((((int)plVar2[1] != (int)lVar5) &&
            (lVar4 = *(long *)(lVar3 + lVar5 * 8), 1 < *(int *)(lVar4 + 0xa8))) &&
           (*(char *)(lVar4 + 0x1bd) == '\0')) {
          *(undefined1 *)(lVar4 + 0x1bd) = 1;
          if (*(SelfList **)(lVar4 + 0x40) != (SelfList *)0x0) {
            lVar5 = lVar5 + 1;
            GodotSpace2D::body_add_to_active_list(*(SelfList **)(lVar4 + 0x40));
            if (iVar1 == lVar5) break;
            goto LAB_001015c1;
          }
        }
        lVar5 = lVar5 + 1;
      } while (iVar1 != lVar5);
    }
    plVar2 = (long *)plVar2[2];
  } while( true );
}



/* GodotBody2D::_shapes_changed() */

void __thiscall GodotBody2D::_shapes_changed(GodotBody2D *this)

{
  SelfList *pSVar1;
  
  pSVar1 = *(SelfList **)(this + 0x40);
  if (pSVar1 != (SelfList *)0x0) {
    if (*(long *)(this + 0x168) == 0) {
      GodotSpace2D::body_add_to_mass_properties_update_list(pSVar1);
      pSVar1 = *(SelfList **)(this + 0x40);
      if (pSVar1 == (SelfList *)0x0) goto LAB_00101644;
    }
    if ((1 < *(uint *)(this + 0xa8)) && (this[0x1bd] == (GodotBody2D)0x0)) {
      this[0x1bd] = (GodotBody2D)0x1;
      GodotSpace2D::body_add_to_active_list(pSVar1);
      wakeup_neighbours(this);
      return;
    }
  }
LAB_00101644:
  wakeup_neighbours(this);
  return;
}



/* GodotBody2D::set_state(PhysicsServer2D::BodyState, Variant const&) */

void __thiscall GodotBody2D::set_state(GodotBody2D *this,undefined4 param_2,Variant *param_3)

{
  char cVar1;
  bool bVar2;
  GodotBody2D GVar3;
  SelfList *pSVar4;
  long in_FS_OFFSET;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  switch(param_2) {
  case 0:
    if (*(int *)(this + 0xa8) == 1) {
      Variant::operator_cast_to_Transform2D((Variant *)&local_78);
      *(undefined8 *)(this + 0x1c0) = local_78;
      *(undefined8 *)(this + 0x1c8) = uStack_70;
      *(undefined8 *)(this + 0x1d0) = local_68;
      if (this[0x1bd] == (GodotBody2D)0x0) {
        this[0x1bd] = (GodotBody2D)0x1;
        if (*(int *)(this + 0xa8) == 0) {
          this[0x1bd] = (GodotBody2D)0x0;
          goto LAB_00101a04;
        }
        if (*(SelfList **)(this + 0x40) != (SelfList *)0x0) {
          GodotSpace2D::body_add_to_active_list(*(SelfList **)(this + 0x40));
          goto LAB_00101a04;
        }
        if (this[0x1bf] == (GodotBody2D)0x0) break;
      }
      else {
LAB_00101a04:
        if (this[0x1bf] == (GodotBody2D)0x0) goto LAB_00101839;
      }
      Variant::operator_cast_to_Transform2D((Variant *)&local_38);
      *(undefined8 *)(this + 0x58) = local_28;
      *(undefined8 *)(this + 0x48) = local_38;
      *(undefined8 *)(this + 0x50) = uStack_30;
      GodotCollisionObject2D::_update_shapes();
      Transform2D::affine_inverse();
      this[0x1bf] = (GodotBody2D)0x0;
      *(undefined8 *)(this + 0x70) = local_28;
      *(undefined8 *)(this + 0x60) = local_38;
      *(undefined8 *)(this + 0x68) = uStack_30;
    }
    else if (*(int *)(this + 0xa8) == 0) {
      Variant::operator_cast_to_Transform2D((Variant *)&local_38);
      *(undefined8 *)(this + 0x58) = local_28;
      *(undefined8 *)(this + 0x48) = local_38;
      *(undefined8 *)(this + 0x50) = uStack_30;
      GodotCollisionObject2D::_update_shapes();
      Transform2D::affine_inverse();
      *(undefined8 *)(this + 0x70) = local_28;
      *(undefined8 *)(this + 0x60) = local_38;
      *(undefined8 *)(this + 0x68) = uStack_30;
      wakeup_neighbours(this);
    }
    else {
      Variant::operator_cast_to_Transform2D((Variant *)&local_58);
      Transform2D::orthonormalize();
      *(undefined8 *)(this + 0x1d0) = *(undefined8 *)(this + 0x58);
      *(undefined8 *)(this + 0x1c0) = *(undefined8 *)(this + 0x48);
      *(undefined8 *)(this + 0x1c8) = *(undefined8 *)(this + 0x50);
      cVar1 = Transform2D::operator==((Transform2D *)&local_58,(Transform2D *)(this + 0x1c0));
      if (cVar1 != '\0') break;
      *(undefined8 *)(this + 0x58) = local_48;
      *(undefined8 *)(this + 0x48) = local_58;
      *(undefined8 *)(this + 0x50) = uStack_50;
      GodotCollisionObject2D::_update_shapes();
      Transform2D::inverse();
      fVar6 = (float)*(undefined8 *)(this + 0x110);
      *(undefined8 *)(this + 0x60) = local_38;
      *(undefined8 *)(this + 0x68) = uStack_30;
      fVar5 = (float)((ulong)*(undefined8 *)(this + 0x110) >> 0x20);
      *(undefined8 *)(this + 0x70) = local_28;
      *(ulong *)(this + 0x118) =
           CONCAT44(fVar5 * (float)((ulong)*(undefined8 *)(this + 0x50) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(this + 0x48) >> 0x20) * fVar6,
                    (float)*(undefined8 *)(this + 0x50) * fVar5 +
                    fVar6 * (float)*(undefined8 *)(this + 0x48));
    }
    goto LAB_00101839;
  case 1:
    uVar7 = Variant::operator_cast_to_Vector2(param_3);
    pSVar4 = *(SelfList **)(this + 0x40);
    *(undefined8 *)(this + 0xb8) = uVar7;
    *(undefined8 *)(this + 0xd0) = uVar7;
    if (pSVar4 == (SelfList *)0x0) break;
    goto LAB_00101846;
  case 2:
    fVar5 = Variant::operator_cast_to_float(param_3);
    *(float *)(this + 0xc0) = fVar5;
    *(float *)(this + 0xd8) = fVar5;
LAB_00101839:
    pSVar4 = *(SelfList **)(this + 0x40);
    if (pSVar4 != (SelfList *)0x0) {
LAB_00101846:
      if ((1 < *(uint *)(this + 0xa8)) && (this[0x1bd] == (GodotBody2D)0x0)) {
        this[0x1bd] = (GodotBody2D)0x1;
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_0010187b:
          GodotSpace2D::body_add_to_active_list(pSVar4);
          return;
        }
        goto LAB_00101790;
      }
    }
    break;
  case 3:
    if (1 < *(uint *)(this + 0xa8)) {
      bVar2 = Variant::operator_cast_to_bool(param_3);
      if (bVar2) {
        *(undefined8 *)(this + 0xb8) = 0;
        *(undefined4 *)(this + 0xc0) = 0;
        if (this[0x1bd] != (GodotBody2D)0x0) {
          this[0x1bd] = (GodotBody2D)0x0;
          if (*(SelfList **)(this + 0x40) != (SelfList *)0x0) {
            if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
              GodotSpace2D::body_remove_from_active_list(*(SelfList **)(this + 0x40));
              return;
            }
            goto LAB_00101790;
          }
        }
      }
      else if ((*(int *)(this + 0xa8) != 0) && (this[0x1bd] == (GodotBody2D)0x0)) goto LAB_0010176c;
    }
    break;
  case 4:
    GVar3 = (GodotBody2D)Variant::operator_cast_to_bool(param_3);
    this[0x1be] = GVar3;
    if (((1 < *(int *)(this + 0xa8)) && (this[0x1bd] == (GodotBody2D)0x0)) && (!(bool)GVar3)) {
LAB_0010176c:
      pSVar4 = *(SelfList **)(this + 0x40);
      this[0x1bd] = (GodotBody2D)0x1;
      if (pSVar4 != (SelfList *)0x0) {
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0010187b;
        goto LAB_00101790;
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101790:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotBody2D::set_space(GodotSpace2D*) */

void GodotBody2D::set_space(GodotSpace2D *param_1)

{
  if (*(long *)(param_1 + 0x40) != 0) {
    wakeup_neighbours((GodotBody2D *)param_1);
    if (*(long *)(param_1 + 0x168) != 0) {
      GodotSpace2D::body_remove_from_mass_properties_update_list(*(SelfList **)(param_1 + 0x40));
    }
    if (*(long *)(param_1 + 0x148) != 0) {
      GodotSpace2D::body_remove_from_active_list(*(SelfList **)(param_1 + 0x40));
    }
    if (*(long *)(param_1 + 0x188) != 0) {
      GodotSpace2D::body_remove_from_state_query_list(*(SelfList **)(param_1 + 0x40));
    }
  }
  GodotCollisionObject2D::_set_space(param_1);
  if (*(SelfList **)(param_1 + 0x40) != (SelfList *)0x0) {
    if (*(long *)(param_1 + 0x168) == 0) {
      GodotSpace2D::body_add_to_mass_properties_update_list(*(SelfList **)(param_1 + 0x40));
    }
    if ((param_1[0x1bd] != (GodotSpace2D)0x0) && (*(long *)(param_1 + 0x148) == 0)) {
      GodotSpace2D::body_add_to_active_list(*(SelfList **)(param_1 + 0x40));
      return;
    }
  }
  return;
}



/* GodotBody2D::sleep_test(float) */

undefined8 __thiscall GodotBody2D::sleep_test(GodotBody2D *this,float param_1)

{
  float fVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  if (*(uint *)(this + 0xa8) < 2) {
    return 1;
  }
  if (this[0x1be] != (GodotBody2D)0x0) {
    if (*(long *)(this + 0x40) == 0) {
      _err_print_error("sleep_test","modules/godot_physics_2d/godot_body_2d.cpp",0x2c7,
                       "Parameter \"get_space()\" is null.",0,0);
      return 1;
    }
    if (ABS(*(float *)(this + 0xc0)) < *(float *)(*(long *)(this + 0x40) + 0x60dc)) {
      fVar3 = (float)Vector2::length_squared();
      lVar2 = *(long *)(this + 0x40);
      if (ABS(fVar3) < *(float *)(lVar2 + 0x60d8) * *(float *)(lVar2 + 0x60d8)) {
        fVar4 = param_1 + *(float *)(this + 300);
        fVar3 = *(float *)(lVar2 + 0x60e0);
        fVar1 = *(float *)(lVar2 + 0x60e0);
        *(float *)(this + 300) = fVar4;
        return CONCAT71((int7)((ulong)lVar2 >> 8),fVar1 <= fVar4 && fVar4 != fVar3);
      }
    }
    *(undefined4 *)(this + 300) = 0;
  }
  return 0;
}



/* GodotBody2D::set_state_sync_callback(Callable const&) */

void __thiscall GodotBody2D::set_state_sync_callback(GodotBody2D *this,Callable *param_1)

{
  Callable::operator=((Callable *)(this + 0x208),param_1);
  return;
}



/* GodotBody2D::set_force_integration_callback(Callable const&, Variant const&) */

void __thiscall
GodotBody2D::set_force_integration_callback(GodotBody2D *this,Callable *param_1,Variant *param_2)

{
  char cVar1;
  Callable *pCVar2;
  
  cVar1 = Callable::is_valid();
  if (cVar1 != '\0') {
    pCVar2 = *(Callable **)(this + 0x218);
    if (pCVar2 == (Callable *)0x0) {
      pCVar2 = (Callable *)operator_new(0x28,"");
      *(undefined8 *)pCVar2 = 0;
      *(undefined8 *)(pCVar2 + 8) = 0;
      *(undefined4 *)(pCVar2 + 0x10) = 0;
      *(undefined1 (*) [16])(pCVar2 + 0x18) = (undefined1  [16])0x0;
      *(Callable **)(this + 0x218) = pCVar2;
    }
    Callable::operator=(pCVar2,param_1);
    Variant::operator=((Variant *)(*(long *)(this + 0x218) + 0x10),param_2);
    return;
  }
  pCVar2 = *(Callable **)(this + 0x218);
  if (pCVar2 != (Callable *)0x0) {
    if (Variant::needs_deinit[*(int *)(pCVar2 + 0x10)] != '\0') {
      Variant::_clear_internal();
    }
    Callable::~Callable(pCVar2);
    Memory::free_static(pCVar2,false);
    *(undefined8 *)(this + 0x218) = 0;
  }
  return;
}



/* GodotBody2D::call_queries() */

void __thiscall GodotBody2D::call_queries(GodotBody2D *this)

{
  Variant **ppVVar1;
  char cVar2;
  Object *this_00;
  long in_FS_OFFSET;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  Variant *local_e8 [2];
  int local_d8 [8];
  int local_b8 [8];
  Variant *local_98;
  undefined1 local_90 [16];
  int local_78 [2];
  undefined1 local_70 [16];
  int local_60 [8];
  long local_40;
  
  this_00 = *(Object **)(this + 0x220);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this_00 == (Object *)0x0) {
    this_00 = (Object *)operator_new(0x180,"");
    PhysicsDirectBodyState2D::PhysicsDirectBodyState2D((PhysicsDirectBodyState2D *)this_00);
    *(undefined8 *)((PhysicsDirectBodyState2D *)this_00 + 0x178) = 0;
    *(code **)this_00 = GodotCollisionObject2D::GodotCollisionObject2D;
    postinitialize_handler(this_00);
    *(Object **)(this + 0x220) = this_00;
    *(GodotBody2D **)((PhysicsDirectBodyState2D *)this_00 + 0x178) = this;
  }
  Variant::Variant((Variant *)local_d8,this_00);
  if (*(long *)(this + 0x218) != 0) {
    cVar2 = Callable::is_valid();
    if (cVar2 == '\0') {
      local_70 = (undefined1  [16])0x0;
      local_78[0] = 0;
      local_78[1] = 0;
      local_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      uStack_ec = 0;
      set_force_integration_callback(this,(Callable *)&local_f8,(Variant *)local_78);
      Callable::~Callable((Callable *)&local_f8);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    else {
      ppVVar1 = *(Variant ***)(this + 0x218);
      local_78[0] = 0;
      local_78[1] = 0;
      local_70 = (undefined1  [16])0x0;
      local_90._0_8_ = ppVVar1 + 2;
      local_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      local_98 = (Variant *)local_d8;
      if (*(int *)(ppVVar1 + 2) == 0) {
        Callable::callp(ppVVar1,(int)&local_98,(Variant *)0x1,(CallError *)local_78);
      }
      else {
        Callable::callp(ppVVar1,(int)&local_98,(Variant *)0x2,(CallError *)local_78);
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
  }
  cVar2 = Callable::is_valid();
  if (cVar2 != '\0') {
    Variant::Variant((Variant *)local_b8,(Variant *)local_d8);
    Variant::Variant((Variant *)local_78,(Variant *)local_b8);
    Variant::Variant((Variant *)local_60,0);
    local_98 = (Variant *)((ulong)local_98 & 0xffffffff00000000);
    local_f8 = 0;
    uStack_f4 = 0;
    uStack_f0 = 0;
    local_90 = (undefined1  [16])0x0;
    local_e8[0] = (Variant *)local_78;
    Callable::callp((Variant **)(this + 0x208),(int)local_e8,(Variant *)0x1,(CallError *)&local_98);
    if (Variant::needs_deinit[local_60[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_98] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_b8[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (Variant::needs_deinit[local_d8[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotBody2D::get_direct_state() */

PhysicsDirectBodyState2D * __thiscall GodotBody2D::get_direct_state(GodotBody2D *this)

{
  PhysicsDirectBodyState2D *this_00;
  
  if (*(PhysicsDirectBodyState2D **)(this + 0x220) != (PhysicsDirectBodyState2D *)0x0) {
    return *(PhysicsDirectBodyState2D **)(this + 0x220);
  }
  this_00 = (PhysicsDirectBodyState2D *)operator_new(0x180,"");
  PhysicsDirectBodyState2D::PhysicsDirectBodyState2D(this_00);
  *(undefined8 *)(this_00 + 0x178) = 0;
  *(code **)this_00 = GodotCollisionObject2D::GodotCollisionObject2D;
  postinitialize_handler((Object *)this_00);
  *(PhysicsDirectBodyState2D **)(this + 0x220) = this_00;
  *(GodotBody2D **)(this_00 + 0x178) = this;
  return this_00;
}



/* GodotBody2D::GodotBody2D() */

void __thiscall GodotBody2D::GodotBody2D(GodotBody2D *this)

{
  GodotCollisionObject2D::GodotCollisionObject2D((GodotCollisionObject2D *)this,1);
  *(undefined8 *)(this + 0xa8) = 2;
  *(undefined ***)this = &PTR__shape_changed_00103ad8;
  *(undefined8 *)(this + 0x100) = 0x3f8000003f800000;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0x3f80000000000000;
  *(undefined8 *)(this + 0xf8) = 0x3f80000000000000;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined2 *)(this + 0x120) = 0x101;
  *(undefined8 *)(this + 0x124) = 0;
  *(undefined4 *)(this + 300) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(GodotBody2D **)(this + 0x150) = this;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(GodotBody2D **)(this + 0x170) = this;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(GodotBody2D **)(this + 400) = this;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0x1010000000000;
  *(undefined8 *)(this + 0x1c0) = 0x3f800000;
  *(undefined8 *)(this + 0x1c8) = 0x3f80000000000000;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1e8) = 0;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined4 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined1 (*) [16])(this + 0x218) = (undefined1  [16])0x0;
  GodotCollisionObject2D::_set_static(SUB81(this,0));
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotBody2D::integrate_forces(float) */

void __thiscall GodotBody2D::integrate_forces(GodotBody2D *this,float param_1)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  Vector2 *pVVar11;
  long *plVar12;
  long in_FS_OFFSET;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  ushort in_FPUStatusWord;
  float fVar16;
  float fVar19;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  ulong local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0xa8) != 0) {
    lVar7 = *(long *)(this + 0x40);
    if (lVar7 == 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = 0x1ab;
        pcVar6 = "Parameter \"get_space()\" is null.";
        goto LAB_00102b86;
      }
      goto LAB_00102cb1;
    }
    if (*(long *)(this + 0x1e8) == 0) {
      *(undefined8 *)(this + 0x124) = 0;
      *(undefined8 *)(this + 0xec) = 0;
LAB_00102bc6:
      pVVar11 = *(Vector2 **)(lVar7 + 0xb8);
      if (pVVar11 == (Vector2 *)0x0) {
LAB_00102c30:
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar8 = 0x203;
          pcVar6 = "Parameter \"default_area\" is null.";
LAB_00102b86:
          _err_print_error("integrate_forces","modules/godot_physics_2d/godot_body_2d.cpp",uVar8,
                           pcVar6,0,0);
          return;
        }
        goto LAB_00102cb1;
      }
      bVar15 = false;
      bVar14 = false;
LAB_001023f3:
      local_58[0] = 0;
      GodotArea2D::compute_gravity(pVVar11,(Vector2 *)(this + 0x58));
      uVar8 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x124) >> 0x20) +
                       (float)(local_58[0] >> 0x20),
                       (float)*(undefined8 *)(this + 0x124) + (float)local_58[0]);
LAB_0010241c:
      if (!bVar14) {
        *(float *)(this + 0xec) = *(float *)(this + 0xec) + *(float *)(pVVar11 + 200);
      }
      if (!bVar15) {
        *(float *)(this + 0xf0) = *(float *)(this + 0xf0) + *(float *)(pVVar11 + 0xcc);
      }
      iVar5 = *(int *)(this + 0xdc);
      if (iVar5 != 0) goto LAB_00102452;
LAB_001026d8:
      iVar5 = *(int *)(this + 0xe0);
      *(float *)(this + 0xec) = *(float *)(this + 0xec) + *(float *)(this + 0xe4);
      if (iVar5 != 0) goto LAB_00102469;
LAB_001026fe:
      *(float *)(this + 0xf0) = *(float *)(this + 0xf0) + *(float *)(this + 0xe8);
    }
    else {
      uVar8 = *(undefined8 *)(*(long *)(this + 0x1e8) + -8);
      *(undefined8 *)(this + 0x124) = 0;
      *(undefined8 *)(this + 0xec) = 0;
      iVar5 = (int)uVar8;
      if (iVar5 == 0) {
        pVVar11 = *(Vector2 **)(lVar7 + 0xb8);
        bVar15 = false;
        bVar14 = false;
        if (pVVar11 == (Vector2 *)0x0) goto LAB_00102c30;
        goto LAB_001023f3;
      }
      Vector<GodotBody2D::AreaCMP>::sort_custom<_DefaultComparator<GodotBody2D::AreaCMP>,true>
                ((Vector<GodotBody2D::AreaCMP> *)(this + 0x1e0));
      lVar7 = *(long *)(this + 0x1e8);
      if (lVar7 == 0) {
        lVar9 = 0;
LAB_00102c63:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,0,lVar9,"p_index","size()","",false,true)
        ;
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      lVar9 = *(long *)(lVar7 + -8);
      if (lVar9 < 1) goto LAB_00102c63;
      iVar10 = iVar5 + -1;
      if (iVar10 < 0) {
        lVar7 = *(long *)(this + 0x40);
        goto LAB_00102bc6;
      }
      bVar13 = false;
      bVar15 = false;
      bVar14 = false;
      plVar12 = (long *)(lVar7 + -0x10 + (long)iVar5 * 0x10);
      do {
        if (bVar13) {
          if (bVar14) {
            bVar4 = bVar14;
            bVar13 = bVar14;
            if (bVar15) goto LAB_001026c2;
LAB_00102953:
            lVar7 = *plVar12;
LAB_0010295e:
            GodotArea2D::get_param((Variant *)local_58,lVar7,7);
            iVar5 = Variant::operator_cast_to_int((Variant *)local_58);
            if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            bVar15 = false;
            if (iVar5 != 0) {
              if (iVar5 < 3) {
                if (0 < iVar5) {
                  bVar15 = iVar5 == 2;
                  *(float *)(this + 0xf0) = *(float *)(*plVar12 + 0xcc) + *(float *)(this + 0xf0);
                }
              }
              else if (iVar5 - 3U < 2) {
                bVar15 = iVar5 == 3;
                *(float *)(this + 0xf0) = *(float *)(*plVar12 + 0xcc);
              }
            }
            if (!bVar4) goto LAB_001028e6;
            bVar3 = (bool)(bVar15 ^ 1);
            bVar14 = bVar4;
            bVar4 = bVar15;
          }
          else {
LAB_001027f0:
            GodotArea2D::get_param((Variant *)local_58,*plVar12,5);
            iVar5 = Variant::operator_cast_to_int((Variant *)local_58);
            if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            bVar14 = bVar15;
            if (iVar5 != 0) {
              lVar7 = *plVar12;
              if (iVar5 < 3) {
                if (iVar5 < 1) {
LAB_00102af0:
                  bVar4 = false;
                  if (bVar15) goto LAB_0010282f;
                  goto LAB_0010295e;
                }
                bVar14 = iVar5 == 2;
                *(float *)(this + 0xec) = *(float *)(lVar7 + 200) + *(float *)(this + 0xec);
                bVar4 = (bool)(bVar13 & bVar14);
              }
              else {
                if (1 < iVar5 - 3U) goto LAB_00102af0;
                bVar14 = iVar5 == 3;
                *(float *)(this + 0xec) = *(float *)(lVar7 + 200);
                bVar4 = (bool)(bVar13 & bVar14);
              }
LAB_00102933:
              if (!bVar15) goto LAB_00102953;
              if (!bVar4) goto LAB_001028e6;
              goto LAB_001026c2;
            }
            if (!bVar15) {
              lVar7 = *plVar12;
              bVar4 = false;
              goto LAB_0010295e;
            }
LAB_0010282f:
            bVar14 = false;
            bVar4 = false;
            bVar3 = bVar15;
          }
        }
        else {
          GodotArea2D::get_param((Variant *)local_58,*plVar12,0);
          iVar5 = Variant::operator_cast_to_int((Variant *)local_58);
          if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (iVar5 != 0) {
            local_58[0] = 0;
            GodotArea2D::compute_gravity((Vector2 *)*plVar12,(Vector2 *)(this + 0x58));
            if (2 < iVar5) {
              if (iVar5 - 3U < 2) {
                bVar13 = iVar5 == 3;
                *(ulong *)(this + 0x124) = local_58[0];
                goto LAB_001027df;
              }
              goto LAB_001028c8;
            }
            if (iVar5 < 1) goto LAB_001028c8;
            bVar13 = iVar5 == 2;
            *(ulong *)(this + 0x124) =
                 CONCAT44((float)((ulong)*(undefined8 *)(this + 0x124) >> 0x20) +
                          (float)(local_58[0] >> 0x20),
                          (float)*(undefined8 *)(this + 0x124) + (float)local_58[0]);
LAB_001027df:
            bVar4 = bVar13;
            if (!bVar14) goto LAB_001027f0;
            goto LAB_00102933;
          }
LAB_001028c8:
          if (!bVar14) goto LAB_001027f0;
          if (!bVar15) {
            bVar14 = true;
            bVar4 = false;
            bVar13 = false;
            goto LAB_00102953;
          }
          bVar14 = true;
          bVar15 = true;
LAB_001028e6:
          bVar4 = false;
          bVar3 = true;
        }
        plVar12 = plVar12 + -2;
        iVar10 = iVar10 + -1;
      } while ((-1 < iVar10) && (bVar3));
      if (!bVar4) {
        pVVar11 = *(Vector2 **)(*(long *)(this + 0x40) + 0xb8);
        if (pVVar11 == (Vector2 *)0x0) goto LAB_00102c30;
        if (!bVar13) goto LAB_001023f3;
        uVar8 = *(undefined8 *)(this + 0x124);
        goto LAB_0010241c;
      }
LAB_001026c2:
      uVar8 = *(undefined8 *)(this + 0x124);
      iVar5 = *(int *)(this + 0xdc);
      if (iVar5 == 0) goto LAB_001026d8;
LAB_00102452:
      if (iVar5 == 1) {
        *(undefined4 *)(this + 0xec) = *(undefined4 *)(this + 0xe4);
      }
      iVar5 = *(int *)(this + 0xe0);
      if (iVar5 == 0) goto LAB_001026fe;
LAB_00102469:
      if (iVar5 == 1) {
        *(undefined4 *)(this + 0xf0) = *(undefined4 *)(this + 0xe8);
      }
    }
    local_58[0] = 0;
    fVar16 = *(float *)(this + 0xf4) * (float)uVar8;
    fVar19 = *(float *)(this + 0xf4) * (float)((ulong)uVar8 >> 0x20);
    *(undefined8 *)(this + 0xc4) = *(undefined8 *)(this + 0xb8);
    *(float *)(this + 0xcc) = *(float *)(this + 0xc0);
    *(ulong *)(this + 0x124) = CONCAT44(fVar19,fVar16);
    if (*(int *)(this + 0xa8) == 1) {
      auVar17._0_8_ =
           CONCAT44((float)((ulong)*(undefined8 *)(this + 0x1d0) >> 0x20) -
                    (float)((ulong)*(undefined8 *)(this + 0x58) >> 0x20),
                    (float)*(undefined8 *)(this + 0x1d0) - (float)*(undefined8 *)(this + 0x58));
      auVar17._8_8_ = 0;
      auVar18._4_4_ = param_1;
      auVar18._0_4_ = param_1;
      auVar18._8_4_ = _LC18;
      auVar18._12_4_ = _UNK_00103b4c;
      auVar18 = divps(auVar17,auVar18);
      *(ulong *)(this + 0xb8) =
           CONCAT44((float)((ulong)*(undefined8 *)(this + 0xd0) >> 0x20) + auVar18._4_4_,
                    (float)*(undefined8 *)(this + 0xd0) + auVar18._0_4_);
      local_58[0] = auVar17._0_8_;
      fVar19 = (float)Transform2D::get_rotation();
      fVar20 = (float)Transform2D::get_rotation();
      fVar16 = *(float *)(this + 0xd8);
      dVar2 = (double)(fVar19 - fVar20);
      do {
        dVar2 = dVar2 - (dVar2 / _LC37) * _LC37;
      } while ((in_FPUStatusWord & 0x400) != 0);
      if (NAN(dVar2)) {
        remainder((double)(fVar19 - fVar20),_LC37);
      }
      *(float *)(this + 0xc0) = (float)(dVar2 / (double)param_1 + (double)fVar16);
LAB_001025ba:
      *(undefined8 *)(this + 0x130) = 0;
      *(undefined4 *)(this + 0x138) = 0;
      *(undefined4 *)(this + 0xb4) = 0;
      *(undefined8 *)(this + 0xac) = 0;
      GodotCollisionObject2D::_update_shapes_with_motion((Vector2 *)this);
    }
    else {
      if (this[0x1bc] == (GodotBody2D)0x0) {
        fVar22 = (float)((ulong)*(undefined8 *)(this + 0xfc) >> 0x20);
        fVar20 = _LC18 - param_1 * *(float *)(this + 0xec);
        if (fVar20 < 0.0) {
          fVar20 = 0.0;
        }
        fVar23 = _LC18 - param_1 * *(float *)(this + 0xf0);
        if (fVar23 < 0.0) {
          fVar23 = 0.0;
        }
        fVar21 = (float)((ulong)*(undefined8 *)(this + 0x100) >> 0x20);
        *(float *)(this + 0xc0) =
             (*(float *)(this + 0x138) + *(float *)(this + 0x144)) * *(float *)(this + 0x10c) *
             param_1 + *(float *)(this + 0xc0) * fVar23;
        *(ulong *)(this + 0xb8) =
             CONCAT44(fVar21 * (fVar22 * fVar19 +
                                (float)((ulong)*(undefined8 *)(this + 0x130) >> 0x20) +
                               (float)((ulong)*(undefined8 *)(this + 0x13c) >> 0x20)) * param_1 +
                      (float)((ulong)*(undefined8 *)(this + 0xb8) >> 0x20) * fVar20,
                      fVar21 * (fVar22 * fVar16 + (float)*(undefined8 *)(this + 0x130) +
                               (float)*(undefined8 *)(this + 0x13c)) * param_1 +
                      (float)*(undefined8 *)(this + 0xb8) * fVar20);
      }
      if (*(int *)(this + 0x1b8) != 0) {
        local_58[0] = CONCAT44((float)((ulong)*(undefined8 *)(this + 0xb8) >> 0x20) * param_1,
                               (float)*(undefined8 *)(this + 0xb8) * param_1);
        goto LAB_001025ba;
      }
      *(undefined8 *)(this + 0x130) = 0;
      *(undefined4 *)(this + 0x138) = 0;
      *(undefined4 *)(this + 0xb4) = 0;
      *(undefined8 *)(this + 0xac) = 0;
    }
    *(undefined4 *)(this + 0x200) = 0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00102cb1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotConcavePolygonShape2D::get_moment_of_inertia(float, Vector2 const&) const */

undefined8 GodotConcavePolygonShape2D::get_moment_of_inertia(float param_1,Vector2 *param_2)

{
  return 0;
}



/* SortArray<GodotBody2D::AreaCMP, _DefaultComparator<GodotBody2D::AreaCMP>, true>::introsort(long,
   long, GodotBody2D::AreaCMP*, long) const [clone .isra.0] */

void SortArray<GodotBody2D::AreaCMP,_DefaultComparator<GodotBody2D::AreaCMP>,true>::introsort
               (long param_1,long param_2,AreaCMP *param_3,long param_4)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  AreaCMP *pAVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  AreaCMP *pAVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  AreaCMP *pAVar15;
  long lVar16;
  AreaCMP *pAVar17;
  long lVar18;
  long local_b0;
  undefined4 uStack_70;
  
  lVar14 = param_2 - param_1;
  if (lVar14 < 0x11) {
    return;
  }
  if (param_4 != 0) {
    lVar18 = param_2;
    local_b0 = param_4;
LAB_00102db3:
    local_b0 = local_b0 + -1;
    lVar16 = *(long *)(param_3 + lVar18 * 0x10 + -0x10);
    iVar6 = *(int *)(*(long *)(param_3 + param_1 * 0x10) + 0xd0);
    iVar13 = *(int *)(lVar16 + 0xd0);
    iVar1 = *(int *)(*(long *)(param_3 + ((lVar14 >> 1) + param_1) * 0x10) + 0xd0);
    if (iVar6 < iVar1) {
      if (iVar1 < iVar13) {
LAB_00102f9d:
        lVar16 = *(long *)(param_3 + ((lVar14 >> 1) + param_1) * 0x10);
        iVar13 = iVar1;
        goto LAB_00102e08;
      }
      if (iVar6 < iVar13) goto LAB_00102e08;
    }
    else if (iVar13 <= iVar6) {
      if (iVar1 < iVar13) goto LAB_00102e08;
      goto LAB_00102f9d;
    }
    lVar16 = *(long *)(param_3 + param_1 * 0x10);
    iVar13 = iVar6;
LAB_00102e08:
    lVar14 = lVar18;
    param_2 = param_1;
    do {
      if (iVar6 < iVar13) {
        if (lVar18 + -1 == param_2) {
          _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                           "bad comparison function; sorting will be broken",0,0);
          iVar13 = *(int *)(lVar16 + 0xd0);
          goto LAB_00102e58;
        }
      }
      else {
LAB_00102e58:
        lVar14 = lVar14 + -1;
        pAVar17 = param_3 + lVar14 * 0x10;
        if (iVar13 < *(int *)(*(long *)pAVar17 + 0xd0)) {
          pAVar5 = param_3 + lVar14 * 0x10 + -0x10;
          while (param_1 != lVar14) {
            lVar14 = lVar14 + -1;
            pAVar17 = pAVar5;
            if (*(int *)(*(long *)pAVar5 + 0xd0) <= iVar13) goto LAB_00102ec0;
            pAVar5 = pAVar5 + -0x10;
          }
          _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                           "bad comparison function; sorting will be broken",0,0);
        }
LAB_00102ec0:
        if (lVar14 <= param_2) goto LAB_00102f10;
        lVar7 = param_2 * 0x10;
        lVar8 = *(long *)(param_3 + lVar7);
        lVar3 = *(long *)(param_3 + lVar7 + 8);
        *(long *)(param_3 + lVar7) = *(long *)pAVar17;
        *(undefined4 *)(param_3 + lVar7 + 8) = *(undefined4 *)(pAVar17 + 8);
        iVar13 = *(int *)(lVar16 + 0xd0);
        *(long *)pAVar17 = lVar8;
        uStack_70 = (undefined4)lVar3;
        *(undefined4 *)(pAVar17 + 8) = uStack_70;
      }
      iVar6 = *(int *)(*(long *)(param_3 + param_2 * 0x10 + 0x10) + 0xd0);
      param_2 = param_2 + 1;
    } while( true );
  }
LAB_0010311b:
  lVar16 = lVar14 + -2 >> 1;
  lVar18 = lVar16 * 2 + 2;
  pAVar17 = param_3 + (param_1 + lVar16) * 0x10;
  do {
    lVar8 = *(long *)pAVar17;
    lVar3 = *(long *)(pAVar17 + 8);
    lVar12 = lVar16;
    lVar7 = lVar18;
    if (lVar18 < lVar14) {
      do {
        lVar4 = lVar7 + -1;
        pAVar5 = param_3 + (param_1 + lVar7 + -1) * 0x10;
        lVar11 = lVar7;
        if (*(int *)(*(long *)(param_3 + (param_1 + lVar7 + -1) * 0x10) + 0xd0) <=
            *(int *)(*(long *)(param_3 + (param_1 + lVar7) * 0x10) + 0xd0)) {
          lVar11 = lVar7 + 1;
          lVar4 = lVar7;
          pAVar5 = param_3 + (param_1 + lVar7) * 0x10;
        }
        lVar7 = lVar11 * 2;
        *(long *)(param_3 + (lVar12 + param_1) * 0x10) = *(long *)pAVar5;
        *(undefined4 *)(param_3 + (lVar12 + param_1) * 0x10 + 8) = *(undefined4 *)(pAVar5 + 8);
        lVar12 = lVar4;
      } while (lVar14 != lVar7 && SBORROW8(lVar14,lVar7) == lVar14 + lVar11 * -2 < 0);
      pAVar9 = pAVar5;
      if (lVar14 == lVar7) {
LAB_00103260:
        lVar4 = lVar7 + -1;
        pAVar5 = param_3 + (param_1 + lVar4) * 0x10;
        *(long *)pAVar9 = *(long *)pAVar5;
        *(undefined4 *)(pAVar9 + 8) = *(undefined4 *)(pAVar5 + 8);
      }
      lVar7 = lVar4 + -1;
      if (lVar4 <= lVar16) goto LAB_001032bc;
      iVar6 = *(int *)(lVar8 + 0xd0);
      do {
        lVar12 = lVar7 >> 1;
        pAVar9 = param_3 + (param_1 + lVar12) * 0x10;
        pAVar5 = param_3 + (lVar4 + param_1) * 0x10;
        if (iVar6 <= *(int *)(*(long *)pAVar9 + 0xd0)) break;
        *(long *)pAVar5 = *(long *)pAVar9;
        *(undefined4 *)(pAVar5 + 8) = *(undefined4 *)(pAVar9 + 8);
        lVar7 = (lVar12 + -1) - (lVar12 + -1 >> 0x3f);
        pAVar5 = pAVar9;
        lVar4 = lVar12;
      } while (lVar16 < lVar12);
      *(long *)pAVar5 = lVar8;
      *(int *)(pAVar5 + 8) = (int)lVar3;
      if (lVar16 == 0) goto LAB_00102fa7;
    }
    else {
      pAVar9 = pAVar17;
      pAVar5 = pAVar17;
      if (lVar18 == lVar14) goto LAB_00103260;
LAB_001032bc:
      *(long *)pAVar5 = lVar8;
      *(int *)(pAVar5 + 8) = (int)lVar3;
    }
    lVar16 = lVar16 + -1;
    pAVar17 = pAVar17 + -0x10;
    lVar18 = lVar18 + -2;
  } while( true );
LAB_00102f10:
  introsort(param_2,lVar18,param_3,local_b0);
  lVar14 = param_2 - param_1;
  if (lVar14 < 0x11) {
    return;
  }
  lVar18 = param_2;
  if (local_b0 == 0) goto LAB_0010311b;
  goto LAB_00102db3;
LAB_00102fa7:
  pAVar5 = param_3 + param_1 * 0x10;
  pAVar17 = param_3 + (param_2 + -2) * 0x10;
  lVar14 = (param_2 + -1) - param_1;
LAB_00102fd0:
  do {
    lVar18 = *(long *)(pAVar17 + 0x10);
    lVar16 = *(long *)(pAVar17 + 0x18);
    *(long *)(pAVar17 + 0x10) = *(long *)pAVar5;
    *(undefined4 *)(pAVar17 + 0x18) = *(undefined4 *)(pAVar5 + 8);
    uVar10 = (undefined4)lVar16;
    if (lVar14 < 3) {
      pAVar9 = pAVar5;
      if (lVar14 != 2) {
        *(long *)pAVar5 = lVar18;
        *(undefined4 *)(pAVar5 + 8) = uVar10;
        return;
      }
LAB_00103290:
      lVar3 = lVar14 + -1;
      *(long *)pAVar9 = *(long *)pAVar17;
      *(undefined4 *)(pAVar9 + 8) = *(undefined4 *)(pAVar17 + 8);
      lVar16 = lVar14 + -2;
    }
    else {
      lVar16 = 2;
      lVar8 = 0;
      do {
        lVar3 = lVar16 + -1;
        pAVar9 = param_3 + (param_1 + lVar16 + -1) * 0x10;
        lVar7 = lVar16;
        if (*(int *)(*(long *)(param_3 + (param_1 + lVar16 + -1) * 0x10) + 0xd0) <=
            *(int *)(*(long *)(param_3 + (param_1 + lVar16) * 0x10) + 0xd0)) {
          lVar7 = lVar16 + 1;
          lVar3 = lVar16;
          pAVar9 = param_3 + (param_1 + lVar16) * 0x10;
        }
        lVar16 = lVar7 * 2;
        *(long *)(param_3 + (lVar8 + param_1) * 0x10) = *(long *)pAVar9;
        *(undefined4 *)(param_3 + (lVar8 + param_1) * 0x10 + 8) = *(undefined4 *)(pAVar9 + 8);
        lVar8 = lVar3;
      } while (lVar14 != lVar16 && SBORROW8(lVar14,lVar16) == lVar14 + lVar7 * -2 < 0);
      if (lVar14 == lVar16) goto LAB_00103290;
      lVar16 = (lVar3 + -1) - (lVar3 + -1 >> 0x3f);
      if (lVar3 == 0) {
        lVar14 = lVar14 + -1;
        pAVar17 = pAVar17 + -0x10;
        *(long *)pAVar9 = lVar18;
        *(undefined4 *)(pAVar9 + 8) = uVar10;
        goto LAB_00102fd0;
      }
    }
    iVar6 = *(int *)(lVar18 + 0xd0);
    do {
      lVar8 = lVar16 >> 1;
      pAVar15 = param_3 + (param_1 + lVar8) * 0x10;
      pAVar9 = param_3 + (lVar3 + param_1) * 0x10;
      if (iVar6 <= *(int *)(*(long *)pAVar15 + 0xd0)) break;
      *(long *)pAVar9 = *(long *)pAVar15;
      *(undefined4 *)(pAVar9 + 8) = *(undefined4 *)(pAVar15 + 8);
      lVar16 = (lVar8 + -1) - (lVar8 + -1 >> 0x3f);
      pAVar9 = pAVar15;
      lVar3 = lVar8;
    } while (lVar8 != 0);
    pAVar17 = pAVar17 + -0x10;
    *(long *)pAVar9 = lVar18;
    *(undefined4 *)(pAVar9 + 8) = uVar10;
    bVar2 = lVar14 < 2;
    lVar14 = lVar14 + -1;
    if (bVar2) {
      return;
    }
  } while( true );
}



/* void Vector<GodotBody2D::AreaCMP>::sort_custom<_DefaultComparator<GodotBody2D::AreaCMP>, true>()
    */

void __thiscall
Vector<GodotBody2D::AreaCMP>::sort_custom<_DefaultComparator<GodotBody2D::AreaCMP>,true>
          (Vector<GodotBody2D::AreaCMP> *this)

{
  AreaCMP *pAVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  AreaCMP *pAVar11;
  long lVar12;
  long lVar13;
  AreaCMP *__dest;
  ulong uVar14;
  AreaCMP *pAVar15;
  AreaCMP *pAVar16;
  long lVar17;
  size_t __n;
  undefined4 uStack_70;
  undefined4 uStack_60;
  undefined4 uStack_40;
  
  lVar17 = *(long *)(this + 8);
  if (lVar17 == 0) {
    return;
  }
  lVar4 = *(long *)(lVar17 + -8);
  if (lVar4 == 0) {
    return;
  }
  if (1 < *(ulong *)(lVar17 + -0x10)) {
    if (*(long *)(this + 8) == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    lVar17 = *(long *)(*(long *)(this + 8) + -8);
    uVar14 = 0x10;
    __n = lVar17 * 0x10;
    if (__n != 0) {
      uVar14 = __n - 1 | __n - 1 >> 1;
      uVar14 = uVar14 | uVar14 >> 2;
      uVar14 = uVar14 | uVar14 >> 4;
      uVar14 = uVar14 | uVar14 >> 8;
      uVar14 = uVar14 | uVar14 >> 0x10;
      uVar14 = (uVar14 | uVar14 >> 0x20) + 0x11;
    }
    puVar6 = (undefined8 *)Memory::alloc_static(uVar14,false);
    if (puVar6 != (undefined8 *)0x0) {
      __dest = (AreaCMP *)(puVar6 + 2);
      *puVar6 = 1;
      puVar6[1] = lVar17;
      memcpy(__dest,*(void **)(this + 8),__n);
      if (*(long *)(this + 8) != 0) {
        LOCK();
        plVar2 = (long *)(*(long *)(this + 8) + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          lVar17 = *(long *)(this + 8);
          *(undefined8 *)(this + 8) = 0;
          Memory::free_static((void *)(lVar17 + -0x10),false);
        }
      }
      *(AreaCMP **)(this + 8) = __dest;
      goto LAB_00103616;
    }
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
  }
  __dest = *(AreaCMP **)(this + 8);
LAB_00103616:
  if (lVar4 == 1) {
    SortArray<GodotBody2D::AreaCMP,_DefaultComparator<GodotBody2D::AreaCMP>,true>::introsort
              (0,1,__dest,0);
    return;
  }
  lVar7 = 0;
  lVar17 = lVar4;
  do {
    lVar17 = lVar17 >> 1;
    lVar7 = lVar7 + 1;
  } while (lVar17 != 1);
  SortArray<GodotBody2D::AreaCMP,_DefaultComparator<GodotBody2D::AreaCMP>,true>::introsort
            (0,lVar4,__dest,lVar7 * 2);
  pAVar1 = __dest + 0x10;
  lVar17 = 1;
  lVar7 = 1;
  pAVar16 = pAVar1;
  if (0x10 < lVar4) {
    do {
      lVar17 = *(long *)pAVar16;
      iVar3 = *(int *)(*(long *)pAVar16 + 0xd0);
      uStack_40 = (undefined4)*(long *)(pAVar16 + 8);
      pAVar15 = pAVar16;
      if (iVar3 < *(int *)(*(long *)__dest + 0xd0)) {
        do {
          pAVar11 = pAVar15 + -0x10;
          *(long *)pAVar15 = *(long *)(pAVar15 + -0x10);
          *(undefined4 *)(pAVar15 + 8) = *(undefined4 *)(pAVar15 + -8);
          pAVar15 = pAVar11;
        } while (__dest != pAVar11);
        *(long *)__dest = lVar17;
        *(undefined4 *)(__dest + 8) = uStack_40;
      }
      else {
        if (iVar3 < *(int *)(*(long *)(pAVar16 + -0x10) + 0xd0)) {
          if (lVar7 + -1 != 0) {
            lVar13 = lVar7 << 4;
            lVar10 = lVar7 + -1;
            do {
              lVar9 = lVar10 + -1;
              *(undefined8 *)(__dest + lVar13) = *(undefined8 *)(__dest + lVar13 + -0x10);
              *(undefined4 *)(__dest + lVar13 + 8) = *(undefined4 *)(__dest + lVar13 + -8);
              if (*(int *)(*(long *)(__dest + lVar13 + -0x20) + 0xd0) <= iVar3) {
                pAVar15 = __dest + lVar10 * 0x10;
                goto LAB_00103899;
              }
              lVar13 = lVar13 + -0x10;
              lVar10 = lVar9;
            } while (lVar9 != 0);
          }
          _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                           "bad comparison function; sorting will be broken",0,0);
          pAVar15 = pAVar1;
        }
LAB_00103899:
        *(long *)pAVar15 = lVar17;
        *(undefined4 *)(pAVar15 + 8) = uStack_40;
      }
      lVar7 = lVar7 + 1;
      pAVar16 = pAVar16 + 0x10;
    } while (lVar7 != 0x10);
    pAVar16 = __dest + 0x100;
    lVar7 = -0x100;
    lVar17 = 0x10;
    do {
      lVar10 = *(long *)pAVar16;
      lVar13 = *(long *)(pAVar16 + 8);
      iVar3 = *(int *)(*(long *)pAVar16 + 0xd0);
      lVar12 = lVar17 << 4;
      lVar9 = lVar17 + -1;
      pAVar15 = pAVar16;
      if (iVar3 < *(int *)(*(long *)(pAVar16 + -0x10) + 0xd0)) {
        do {
          lVar8 = lVar9 + -1;
          *(undefined8 *)(__dest + lVar12) = *(undefined8 *)(pAVar16 + lVar12 + lVar7 + -0x10);
          *(undefined4 *)(__dest + lVar12 + 8) = *(undefined4 *)(pAVar16 + lVar12 + lVar7 + -8);
          if (*(int *)(*(long *)(__dest + lVar12 + -0x20) + 0xd0) <= iVar3) {
            pAVar15 = __dest + lVar9 * 0x10;
            goto LAB_00103763;
          }
          lVar12 = lVar12 + -0x10;
          lVar9 = lVar8;
        } while (lVar8 != 0);
        _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                         "bad comparison function; sorting will be broken",0,0);
        pAVar15 = pAVar1;
      }
LAB_00103763:
      lVar17 = lVar17 + 1;
      pAVar16 = pAVar16 + 0x10;
      lVar7 = lVar7 + -0x10;
      *(long *)pAVar15 = lVar10;
      uStack_60 = (undefined4)lVar13;
      *(undefined4 *)(pAVar15 + 8) = uStack_60;
      if (lVar4 == lVar17) {
        return;
      }
    } while( true );
  }
  do {
    lVar7 = *(long *)pAVar16;
    iVar3 = *(int *)(*(long *)pAVar16 + 0xd0);
    uStack_70 = (undefined4)*(long *)(pAVar16 + 8);
    pAVar15 = pAVar16;
    if (iVar3 < *(int *)(*(long *)__dest + 0xd0)) {
      do {
        pAVar11 = pAVar15 + -0x10;
        *(long *)pAVar15 = *(long *)(pAVar15 + -0x10);
        *(undefined4 *)(pAVar15 + 8) = *(undefined4 *)(pAVar15 + -8);
        pAVar15 = pAVar11;
      } while (__dest != pAVar11);
      *(long *)__dest = lVar7;
      *(undefined4 *)(__dest + 8) = uStack_70;
    }
    else {
      if (iVar3 < *(int *)(*(long *)(pAVar16 + -0x10) + 0xd0)) {
        if (lVar17 + -1 != 0) {
          lVar13 = lVar17 << 4;
          lVar10 = lVar17 + -1;
          do {
            lVar9 = lVar10 + -1;
            *(undefined8 *)(__dest + lVar13) = *(undefined8 *)(__dest + lVar13 + -0x10);
            *(undefined4 *)(__dest + lVar13 + 8) = *(undefined4 *)(__dest + lVar13 + -8);
            if (*(int *)(*(long *)(__dest + lVar13 + -0x20) + 0xd0) <= iVar3) {
              pAVar15 = __dest + lVar10 * 0x10;
              goto LAB_0010393d;
            }
            lVar13 = lVar13 + -0x10;
            lVar10 = lVar9;
          } while (lVar9 != 0);
        }
        _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                         "bad comparison function; sorting will be broken",0,0);
        pAVar15 = pAVar1;
      }
LAB_0010393d:
      *(long *)pAVar15 = lVar7;
      *(undefined4 *)(pAVar15 + 8) = uStack_70;
    }
    lVar17 = lVar17 + 1;
    pAVar16 = pAVar16 + 0x10;
    if (lVar4 == lVar17) {
      return;
    }
  } while( true );
}


