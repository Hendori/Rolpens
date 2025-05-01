
/* SortArray<_generate_contacts_Pair, _DefaultComparator<_generate_contacts_Pair>,
   true>::introsort(long, long, _generate_contacts_Pair*, long) const [clone .isra.0] */

void SortArray<_generate_contacts_Pair,_DefaultComparator<_generate_contacts_Pair>,true>::introsort
               (long param_1,long param_2,_generate_contacts_Pair *param_3,long param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  _generate_contacts_Pair _Var5;
  undefined4 uVar6;
  long lVar7;
  _generate_contacts_Pair *p_Var8;
  long lVar9;
  long lVar10;
  _generate_contacts_Pair *p_Var11;
  _generate_contacts_Pair *p_Var12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  _generate_contacts_Pair *p_Var17;
  float fVar18;
  long local_58;
  
  lVar15 = param_2 - param_1;
  if (lVar15 < 0x11) {
    return;
  }
  if (param_4 != 0) {
    lVar16 = param_2;
    local_58 = param_4;
LAB_001c4b14:
    local_58 = local_58 + -1;
    fVar1 = *(float *)(param_3 + param_1 * 0xc + 8);
    fVar2 = *(float *)(param_3 + ((lVar15 >> 1) + param_1) * 0xc + 8);
    fVar3 = *(float *)(param_3 + lVar16 * 0xc + -4);
    if (fVar2 <= fVar1) {
      fVar18 = fVar1;
      if ((fVar3 <= fVar1) && (fVar18 = fVar3, fVar3 <= fVar2)) {
        fVar18 = fVar2;
      }
    }
    else {
      fVar18 = fVar2;
      if ((fVar3 <= fVar2) && (fVar18 = fVar3, fVar3 <= fVar1)) {
        fVar18 = fVar1;
      }
    }
    lVar15 = lVar16;
    p_Var11 = param_3 + param_1 * 0xc;
    param_2 = param_1;
    do {
      if (*(float *)(p_Var11 + 8) <= fVar18 && fVar18 != *(float *)(p_Var11 + 8)) {
        if (lVar16 + -1 == param_2) {
          _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                           "bad comparison function; sorting will be broken",0,0);
          goto LAB_001c4b9c;
        }
      }
      else {
LAB_001c4b9c:
        lVar15 = lVar15 + -1;
        p_Var17 = param_3 + lVar15 * 0xc;
        if (fVar18 < *(float *)(p_Var17 + 8)) {
          p_Var12 = param_3 + lVar15 * 0xc + -0xc;
          while (param_1 != lVar15) {
            lVar15 = lVar15 + -1;
            p_Var17 = p_Var12;
            if (*(float *)(p_Var12 + 8) <= fVar18) goto LAB_001c4c1d;
            p_Var12 = p_Var12 + -0xc;
          }
          _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                           "bad comparison function; sorting will be broken",0,0);
        }
LAB_001c4c1d:
        if (lVar15 <= param_2) goto LAB_001c4c50;
        _Var5 = *p_Var11;
        uVar6 = *(undefined4 *)(p_Var11 + 4);
        uVar4 = *(undefined4 *)(p_Var11 + 8);
        *(undefined8 *)p_Var11 = *(undefined8 *)p_Var17;
        *(undefined4 *)(p_Var11 + 8) = *(undefined4 *)(p_Var17 + 8);
        *p_Var17 = _Var5;
        *(undefined4 *)(p_Var17 + 4) = uVar6;
        *(undefined4 *)(p_Var17 + 8) = uVar4;
      }
      p_Var11 = p_Var11 + 0xc;
      param_2 = param_2 + 1;
    } while( true );
  }
LAB_001c4d24:
  lVar13 = lVar15 + -2 >> 1;
  lVar16 = lVar13 * 2 + 2;
  p_Var11 = param_3 + (param_1 + lVar13) * 0xc;
  do {
    _Var5 = *p_Var11;
    uVar4 = *(undefined4 *)(p_Var11 + 4);
    fVar1 = *(float *)(p_Var11 + 8);
    lVar14 = lVar16;
    lVar10 = lVar13;
    if (lVar16 < lVar15) {
      do {
        p_Var12 = param_3 + (param_1 + lVar14) * 0xc;
        fVar2 = *(float *)(param_3 + (param_1 + lVar14 + -1) * 0xc + 8);
        lVar7 = lVar14 + -1;
        lVar9 = lVar14;
        p_Var17 = param_3 + (param_1 + lVar14 + -1) * 0xc;
        if (fVar2 < *(float *)(p_Var12 + 8) || fVar2 == *(float *)(p_Var12 + 8)) {
          lVar9 = lVar14 + 1;
          lVar7 = lVar14;
          p_Var17 = p_Var12;
        }
        lVar14 = lVar9 * 2;
        *(undefined8 *)(param_3 + (lVar10 + param_1) * 0xc) = *(undefined8 *)p_Var17;
        *(undefined4 *)(param_3 + (lVar10 + param_1) * 0xc + 8) = *(undefined4 *)(p_Var17 + 8);
        lVar10 = lVar7;
      } while (lVar15 != lVar14 && SBORROW8(lVar15,lVar14) == lVar15 + lVar9 * -2 < 0);
      p_Var12 = p_Var17;
      if (lVar15 == lVar14) {
LAB_001c4f91:
        lVar7 = lVar14 + -1;
        p_Var17 = param_3 + (param_1 + lVar7) * 0xc;
        *(undefined8 *)p_Var12 = *(undefined8 *)p_Var17;
        *(undefined4 *)(p_Var12 + 8) = *(undefined4 *)(p_Var17 + 8);
      }
      lVar14 = lVar7 + -1;
      if (lVar7 <= lVar13) goto LAB_001c4fe8;
      do {
        lVar10 = lVar14 >> 1;
        p_Var17 = param_3 + (param_1 + lVar10) * 0xc;
        p_Var12 = param_3 + (param_1 + lVar7) * 0xc;
        if (fVar1 < *(float *)(p_Var17 + 8) || fVar1 == *(float *)(p_Var17 + 8)) {
          *p_Var12 = _Var5;
          *(undefined4 *)(p_Var12 + 4) = uVar4;
          *(float *)(p_Var12 + 8) = fVar1;
          goto joined_r0x001c4e37;
        }
        *(undefined8 *)p_Var12 = *(undefined8 *)p_Var17;
        *(undefined4 *)(p_Var12 + 8) = *(undefined4 *)(p_Var17 + 8);
        lVar14 = (lVar10 + -1) - (lVar10 + -1 >> 0x3f);
        lVar7 = lVar10;
      } while (lVar13 < lVar10);
      *p_Var17 = _Var5;
      *(undefined4 *)(p_Var17 + 4) = uVar4;
      *(float *)(p_Var17 + 8) = fVar1;
joined_r0x001c4e37:
      if (lVar13 == 0) goto LAB_001c4e5d;
    }
    else {
      p_Var12 = p_Var11;
      p_Var17 = p_Var11;
      if (lVar16 == lVar15) goto LAB_001c4f91;
LAB_001c4fe8:
      *p_Var17 = _Var5;
      *(undefined4 *)(p_Var17 + 4) = uVar4;
      *(float *)(p_Var17 + 8) = fVar1;
    }
    lVar13 = lVar13 + -1;
    p_Var11 = p_Var11 + -0xc;
    lVar16 = lVar16 + -2;
  } while( true );
LAB_001c4c50:
  introsort(param_2,lVar16,param_3,local_58);
  lVar15 = param_2 - param_1;
  if (lVar15 < 0x11) {
    return;
  }
  lVar16 = param_2;
  if (local_58 == 0) goto LAB_001c4d24;
  goto LAB_001c4b14;
LAB_001c4e5d:
  p_Var11 = param_3 + param_1 * 0xc;
  p_Var17 = param_3 + param_2 * 0xc + -0xc;
  lVar15 = (param_2 + -1) - param_1;
  do {
    _Var5 = *p_Var17;
    uVar4 = *(undefined4 *)(p_Var17 + 4);
    fVar1 = *(float *)(p_Var17 + 8);
    *(undefined8 *)p_Var17 = *(undefined8 *)p_Var11;
    *(undefined4 *)(p_Var17 + 8) = *(undefined4 *)(p_Var11 + 8);
    if (lVar15 < 3) {
      if (lVar15 != 2) {
        *p_Var11 = _Var5;
        *(undefined4 *)(p_Var11 + 4) = uVar4;
        *(float *)(p_Var11 + 8) = fVar1;
        return;
      }
      lVar13 = param_1 + 1;
      lVar14 = 0;
      lVar16 = 1;
      *(undefined8 *)p_Var11 = *(undefined8 *)(param_3 + lVar13 * 0xc);
      *(undefined4 *)(p_Var11 + 8) = *(undefined4 *)(param_3 + lVar13 * 0xc + 8);
LAB_001c4f5d:
      while( true ) {
        p_Var12 = param_3 + (param_1 + lVar14) * 0xc;
        p_Var8 = param_3 + lVar13 * 0xc;
        lVar15 = lVar16;
        if (fVar1 < *(float *)(p_Var12 + 8) || fVar1 == *(float *)(p_Var12 + 8)) break;
        *(undefined8 *)p_Var8 = *(undefined8 *)p_Var12;
        *(undefined4 *)(p_Var8 + 8) = *(undefined4 *)(p_Var12 + 8);
        p_Var8 = p_Var12;
        if (lVar14 == 0) break;
        lVar13 = param_1 + lVar14;
        lVar14 = (lVar14 + -1) / 2;
      }
    }
    else {
      lVar16 = 2;
      lVar13 = 0;
      do {
        p_Var12 = param_3 + (param_1 + lVar16) * 0xc;
        fVar2 = *(float *)(param_3 + (param_1 + lVar16 + -1) * 0xc + 8);
        p_Var8 = param_3 + (param_1 + lVar16 + -1) * 0xc;
        lVar10 = lVar16 + -1;
        lVar14 = lVar16;
        if (fVar2 < *(float *)(p_Var12 + 8) || fVar2 == *(float *)(p_Var12 + 8)) {
          lVar14 = lVar16 + 1;
          p_Var8 = p_Var12;
          lVar10 = lVar16;
        }
        lVar16 = lVar14 * 2;
        *(undefined8 *)(param_3 + (param_1 + lVar13) * 0xc) = *(undefined8 *)p_Var8;
        *(undefined4 *)(param_3 + (param_1 + lVar13) * 0xc + 8) = *(undefined4 *)(p_Var8 + 8);
        lVar13 = lVar10;
      } while (lVar15 != lVar16 && SBORROW8(lVar15,lVar16) == lVar15 + lVar14 * -2 < 0);
      if (lVar15 == lVar16) {
        lVar16 = lVar15 + -1;
        lVar13 = param_1 + lVar16;
        lVar14 = lVar15 + -2 >> 1;
        *(undefined8 *)p_Var8 = *(undefined8 *)(param_3 + lVar13 * 0xc);
        *(undefined4 *)(p_Var8 + 8) = *(undefined4 *)(param_3 + lVar13 * 0xc + 8);
        goto LAB_001c4f5d;
      }
      lVar16 = lVar15 + -1;
      lVar13 = param_1 + lVar10;
      lVar14 = (lVar10 + -1) / 2;
      lVar15 = lVar16;
      if (0 < lVar10) goto LAB_001c4f5d;
    }
    *p_Var8 = _Var5;
    p_Var17 = p_Var17 + -0xc;
    *(undefined4 *)(p_Var8 + 4) = uVar4;
    *(float *)(p_Var8 + 8) = fVar1;
  } while( true );
}



/* sat_2d_calculate_penetration(GodotShape2D const*, Transform2D const&, Vector2 const&,
   GodotShape2D const*, Transform2D const&, Vector2 const&, void (*)(Vector2 const&, Vector2 const&,
   void*), void*, bool, Vector2*, float, float) */

undefined1
sat_2d_calculate_penetration
          (GodotShape2D *param_1,Transform2D *param_2,Vector2 *param_3,GodotShape2D *param_4,
          Transform2D *param_5,Vector2 *param_6,_func_void_Vector2_ptr_Vector2_ptr_void_ptr *param_7
          ,void *param_8,bool param_9,Vector2 *param_10,float param_11,float param_12)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  GodotShape2D *pGVar7;
  Vector2 *pVVar8;
  Transform2D *pTVar9;
  long in_FS_OFFSET;
  float fVar10;
  Transform2D *local_98;
  _func_void_Vector2_ptr_Vector2_ptr_void_ptr *local_68;
  void *local_60;
  undefined1 local_58;
  undefined1 local_57;
  undefined8 local_54;
  Vector2 *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = (*(code *)**(undefined8 **)param_1)();
  if (iVar3 == 0) {
    _err_print_error("sat_2d_calculate_penetration",
                     "modules/godot_physics_2d/godot_collision_solver_2d_sat.cpp",0x455,
                     "Condition \"type_A == PhysicsServer2D::SHAPE_WORLD_BOUNDARY\" is true. Returning: false"
                     ,0,0);
    uVar2 = 0;
    goto LAB_0026657c;
  }
  if (iVar3 == 1) {
    _err_print_error("sat_2d_calculate_penetration",
                     "modules/godot_physics_2d/godot_collision_solver_2d_sat.cpp",0x456,
                     "Condition \"type_A == PhysicsServer2D::SHAPE_SEPARATION_RAY\" is true. Returning: false"
                     ,0,0);
    uVar2 = 0;
    goto LAB_0026657c;
  }
  cVar1 = (**(code **)(*(long *)param_1 + 0x10))(param_1);
  if (cVar1 != '\0') {
    _err_print_error("sat_2d_calculate_penetration",
                     "modules/godot_physics_2d/godot_collision_solver_2d_sat.cpp",0x457,
                     "Condition \"p_shape_A->is_concave()\" is true. Returning: false",0,0);
    uVar2 = 0;
    goto LAB_0026657c;
  }
  iVar4 = (*(code *)**(undefined8 **)param_4)(param_4);
  if (iVar4 == 0) {
    _err_print_error("sat_2d_calculate_penetration",
                     "modules/godot_physics_2d/godot_collision_solver_2d_sat.cpp",0x45b,
                     "Condition \"type_B == PhysicsServer2D::SHAPE_WORLD_BOUNDARY\" is true. Returning: false"
                     ,0,0);
    uVar2 = 0;
    goto LAB_0026657c;
  }
  if (iVar4 == 1) {
    _err_print_error("sat_2d_calculate_penetration",
                     "modules/godot_physics_2d/godot_collision_solver_2d_sat.cpp",0x45c,
                     "Condition \"type_B == PhysicsServer2D::SHAPE_SEPARATION_RAY\" is true. Returning: false"
                     ,0,0);
    uVar2 = 0;
    goto LAB_0026657c;
  }
  cVar1 = (**(code **)(*(long *)param_4 + 0x10))(param_4);
  if (cVar1 != '\0') {
    _err_print_error("sat_2d_calculate_penetration",
                     "modules/godot_physics_2d/godot_collision_solver_2d_sat.cpp",0x45d,
                     "Condition \"p_shape_B->is_concave()\" is true. Returning: false",0,0);
    uVar2 = 0;
    goto LAB_0026657c;
  }
  local_57 = 0;
  local_54 = 0;
  local_68 = param_7;
  local_58 = param_9;
  local_60 = param_8;
  local_48 = param_10;
  pGVar7 = param_4;
  pVVar8 = param_6;
  pTVar9 = param_5;
  fVar10 = param_12;
  iVar6 = iVar4;
  local_98 = param_2;
  if (iVar4 < iVar3) {
    local_58 = !param_9;
    pGVar7 = param_1;
    pVVar8 = param_3;
    param_3 = param_6;
    param_1 = param_4;
    pTVar9 = param_2;
    fVar10 = param_11;
    iVar6 = iVar3;
    iVar3 = iVar4;
    local_98 = param_5;
  }
  iVar6 = iVar6 + -2;
  iVar3 = iVar3 + -2;
  if ((param_11 == 0.0) && (param_12 == 0.0)) {
    if (*(float *)param_3 == 0.0) {
      if (*(float *)(param_3 + 4) == 0.0) {
        if ((*(float *)pVVar8 == 0.0) && (*(float *)(pVVar8 + 4) == 0.0)) {
          pcVar5 = *(code **)(sat_2d_calculate_penetration(GodotShape2D_const*,Transform2D_const&,Vector2_const&,GodotShape2D_const*,Transform2D_const&,Vector2_const&,void(*)(Vector2_const&,Vector2_const&,void*),void*,bool,Vector2*,float,float)
                              ::collision_table + ((long)iVar3 * 5 + (long)iVar6) * 8);
        }
        else {
LAB_002665b0:
          if ((*(float *)pVVar8 == 0.0) && (*(float *)(pVVar8 + 4) == 0.0)) goto LAB_00266533;
          pcVar5 = *(code **)(sat_2d_calculate_penetration(GodotShape2D_const*,Transform2D_const&,Vector2_const&,GodotShape2D_const*,Transform2D_const&,Vector2_const&,void(*)(Vector2_const&,Vector2_const&,void*),void*,bool,Vector2*,float,float)
                              ::collision_table_castB + ((long)iVar3 * 5 + (long)iVar6) * 8);
        }
      }
      else {
        if (*(float *)pVVar8 == 0.0) {
          if (*(float *)(pVVar8 + 4) == 0.0) goto LAB_0026679f;
          if (*(float *)(param_3 + 4) == 0.0) goto LAB_002665b0;
        }
LAB_00266533:
        pcVar5 = *(code **)(sat_2d_calculate_penetration(GodotShape2D_const*,Transform2D_const&,Vector2_const&,GodotShape2D_const*,Transform2D_const&,Vector2_const&,void(*)(Vector2_const&,Vector2_const&,void*),void*,bool,Vector2*,float,float)
                            ::collision_table_castA_castB + ((long)iVar6 + (long)iVar3 * 5) * 8);
      }
    }
    else {
      if ((*(float *)pVVar8 != 0.0) || (*(float *)(pVVar8 + 4) != 0.0)) goto LAB_00266533;
LAB_0026679f:
      pcVar5 = *(code **)(sat_2d_calculate_penetration(GodotShape2D_const*,Transform2D_const&,Vector2_const&,GodotShape2D_const*,Transform2D_const&,Vector2_const&,void(*)(Vector2_const&,Vector2_const&,void*),void*,bool,Vector2*,float,float)
                          ::collision_table_castA + ((long)iVar3 * 5 + (long)iVar6) * 8);
    }
  }
  else {
    if (*(float *)param_3 == 0.0) {
      if (*(float *)(param_3 + 4) == 0.0) {
        if ((*(float *)pVVar8 == 0.0) && (*(float *)(pVVar8 + 4) == 0.0)) {
          pcVar5 = *(code **)(sat_2d_calculate_penetration(GodotShape2D_const*,Transform2D_const&,Vector2_const&,GodotShape2D_const*,Transform2D_const&,Vector2_const&,void(*)(Vector2_const&,Vector2_const&,void*),void*,bool,Vector2*,float,float)
                              ::collision_table_margin + ((long)iVar3 * 5 + (long)iVar6) * 8);
          goto LAB_0026654b;
        }
LAB_00266600:
        if ((*(float *)pVVar8 != 0.0) || (*(float *)(pVVar8 + 4) != 0.0)) {
          pcVar5 = *(code **)(sat_2d_calculate_penetration(GodotShape2D_const*,Transform2D_const&,Vector2_const&,GodotShape2D_const*,Transform2D_const&,Vector2_const&,void(*)(Vector2_const&,Vector2_const&,void*),void*,bool,Vector2*,float,float)
                              ::collision_table_castB_margin + ((long)iVar3 * 5 + (long)iVar6) * 8);
          goto LAB_0026654b;
        }
      }
      else if (*(float *)pVVar8 == 0.0) {
        if (*(float *)(pVVar8 + 4) == 0.0) goto LAB_00266757;
        if (*(float *)(param_3 + 4) == 0.0) goto LAB_00266600;
      }
    }
    else if ((*(float *)pVVar8 == 0.0) && (*(float *)(pVVar8 + 4) == 0.0)) {
LAB_00266757:
      pcVar5 = *(code **)(sat_2d_calculate_penetration(GodotShape2D_const*,Transform2D_const&,Vector2_const&,GodotShape2D_const*,Transform2D_const&,Vector2_const&,void(*)(Vector2_const&,Vector2_const&,void*),void*,bool,Vector2*,float,float)
                          ::collision_table_castA_margin + ((long)iVar3 * 5 + (long)iVar6) * 8);
      goto LAB_0026654b;
    }
    pcVar5 = *(code **)(sat_2d_calculate_penetration(GodotShape2D_const*,Transform2D_const&,Vector2_const&,GodotShape2D_const*,Transform2D_const&,Vector2_const&,void(*)(Vector2_const&,Vector2_const&,void*),void*,bool,Vector2*,float,float)
                        ::collision_table_castA_castB_margin + ((long)iVar6 + (long)iVar3 * 5) * 8);
  }
LAB_0026654b:
  if (pcVar5 == (code *)0x0) {
    _err_print_error(0,fVar10,"sat_2d_calculate_penetration",
                     "modules/godot_physics_2d/godot_collision_solver_2d_sat.cpp",0x577,
                     "Parameter \"collision_func\" is null.",0,0);
    uVar2 = 0;
  }
  else {
    (*pcVar5)(param_1,local_98,pGVar7,pTVar9,&local_68,param_3,pVVar8);
    uVar2 = local_57;
  }
LAB_0026657c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


