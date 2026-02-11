
/* GodotCollisionSolver2D::concave_callback(void*, GodotShape2D*) */

char GodotCollisionSolver2D::concave_callback(void *param_1,GodotShape2D *param_2)

{
  char cVar1;
  
  *(int *)((long)param_1 + 0x44) = *(int *)((long)param_1 + 0x44) + 1;
                    /* WARNING: Load size is inaccurate */
  cVar1 = sat_2d_calculate_penetration
                    (*(GodotShape2D **)((long)param_1 + 8),*param_1,
                     (Vector2 *)((long)param_1 + 0x18),param_2,
                     *(Transform2D **)((long)param_1 + 0x10),(Vector2 *)((long)param_1 + 0x20),
                     *(_func_void_Vector2_ptr_Vector2_ptr_void_ptr **)((long)param_1 + 0x30),
                     *(void **)((long)param_1 + 0x38),*(bool *)((long)param_1 + 0x40),
                     *(Vector2 **)((long)param_1 + 0x50),*(float *)((long)param_1 + 0x28),
                     *(float *)((long)param_1 + 0x2c));
  if (cVar1 != '\0') {
    *(undefined1 *)((long)param_1 + 0x41) = 1;
    *(int *)((long)param_1 + 0x48) = *(int *)((long)param_1 + 0x48) + 1;
    cVar1 = *(long *)((long)param_1 + 0x30) == 0;
  }
  return cVar1;
}



/* GodotCollisionSolver2D::solve_static_world_boundary(GodotShape2D const*, Transform2D const&,
   GodotShape2D const*, Transform2D const&, Vector2 const&, void (*)(Vector2 const&, Vector2 const&,
   void*), void*, bool, float) [clone .part.0] */

undefined8
GodotCollisionSolver2D::solve_static_world_boundary
          (GodotShape2D *param_1,Transform2D *param_2,GodotShape2D *param_3,Transform2D *param_4,
          Vector2 *param_5,_func_void_Vector2_ptr_Vector2_ptr_void_ptr *param_6,void *param_7,
          bool param_8,float param_9)

{
  code *pcVar1;
  undefined8 uVar2;
  Vector2 *pVVar3;
  int iVar4;
  long in_FS_OFFSET;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  float local_58;
  float fStack_54;
  undefined8 local_50;
  long local_40;
  
  fVar6 = (float)*(undefined8 *)(param_1 + 0x68);
  fVar7 = (float)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (float)*(undefined8 *)param_2 * fVar6 + (float)*(undefined8 *)(param_2 + 8) * fVar7;
  fStack_54 = (float)((ulong)*(undefined8 *)param_2 >> 0x20) * fVar6 +
              (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20) * fVar7;
  local_88 = Vector2::normalized();
  fVar6 = *(float *)(param_1 + 0x68) * *(float *)(param_1 + 0x70);
  fVar7 = *(float *)(param_1 + 0x6c) * *(float *)(param_1 + 0x70);
  pVVar3 = (Vector2 *)&local_68;
  local_80 = CONCAT44((float)((ulong)*(undefined8 *)param_2 >> 0x20) * fVar6 +
                      (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20) * fVar7 +
                      (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20),
                      (float)*(undefined8 *)param_2 * fVar6 +
                      (float)*(undefined8 *)(param_2 + 8) * fVar7 +
                      (float)*(undefined8 *)(param_2 + 0x10));
  fVar6 = (float)Vector2::dot((Vector2 *)&local_88);
  local_68 = 0;
  pcVar1 = *(code **)(*(long *)param_3 + 0x38);
  local_60 = 0;
  Transform2D::affine_inverse();
  local_78 = CONCAT44((float)((uint)local_88 ^ _LC0) * fStack_54 +
                      (float)(local_88._4_4_ ^ _LC0) * (float)((ulong)local_50 >> 0x20),
                      (float)((uint)local_88 ^ _LC0) * local_58 +
                      (float)(local_88._4_4_ ^ _LC0) * (float)local_50);
  local_70 = Vector2::normalized();
  uVar2 = 0;
  (*pcVar1)(param_3,&local_70,pVVar3,&local_8c);
  if (0 < local_8c) {
    iVar4 = 0;
    do {
      uVar5 = Vector2::normalized();
      fVar8 = (float)uVar5 * param_9 + *(float *)pVVar3;
      fVar7 = (float)((ulong)uVar5 >> 0x20) * param_9 + *(float *)(pVVar3 + 4);
      *(ulong *)pVVar3 =
           CONCAT44((float)((ulong)*(undefined8 *)param_4 >> 0x20) * fVar8 +
                    (float)((ulong)*(undefined8 *)(param_4 + 8) >> 0x20) * fVar7 +
                    (float)((ulong)*(undefined8 *)(param_4 + 0x10) >> 0x20) +
                    (float)((ulong)*(undefined8 *)param_5 >> 0x20),
                    (float)*(undefined8 *)param_4 * fVar8 +
                    (float)*(undefined8 *)(param_4 + 8) * fVar7 +
                    (float)*(undefined8 *)(param_4 + 0x10) + (float)*(undefined8 *)param_5);
      fVar7 = (float)Vector2::dot((Vector2 *)&local_88);
      if (fVar7 < fVar6) {
        local_58 = (float)*(undefined8 *)pVVar3 - (fVar7 - fVar6) * (float)local_88;
        fStack_54 = (float)((ulong)*(undefined8 *)pVVar3 >> 0x20) -
                    (fVar7 - fVar6) * (float)((ulong)local_88 >> 0x20);
        if (param_6 != (_func_void_Vector2_ptr_Vector2_ptr_void_ptr *)0x0) {
          if (!param_8) {
            uVar2 = 1;
            (*param_6)((Vector2 *)&local_58,pVVar3,param_7);
            goto LAB_001002ac;
          }
          (*param_6)(pVVar3,(Vector2 *)&local_58,param_7);
        }
        uVar2 = 1;
      }
LAB_001002ac:
      iVar4 = iVar4 + 1;
      pVVar3 = pVVar3 + 8;
    } while (iVar4 < local_8c);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotCollisionSolver2D::solve_static_world_boundary(GodotShape2D const*, Transform2D const&,
   GodotShape2D const*, Transform2D const&, Vector2 const&, void (*)(Vector2 const&, Vector2 const&,
   void*), void*, bool, float) */

undefined8
GodotCollisionSolver2D::solve_static_world_boundary
          (GodotShape2D *param_1,Transform2D *param_2,GodotShape2D *param_3,Transform2D *param_4,
          Vector2 *param_5,_func_void_Vector2_ptr_Vector2_ptr_void_ptr *param_6,void *param_7,
          bool param_8,float param_9)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (*(code *)**(undefined8 **)param_3)(param_3);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = solve_static_world_boundary
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return uVar2;
}



/* GodotCollisionSolver2D::solve_separation_ray(GodotShape2D const*, Vector2 const&, Transform2D
   const&, GodotShape2D const*, Transform2D const&, void (*)(Vector2 const&, Vector2 const&, void*),
   void*, bool, Vector2*, float) */

char GodotCollisionSolver2D::solve_separation_ray
               (GodotShape2D *param_1,Vector2 *param_2,Transform2D *param_3,GodotShape2D *param_4,
               Transform2D *param_5,_func_void_Vector2_ptr_Vector2_ptr_void_ptr *param_6,
               void *param_7,bool param_8,Vector2 *param_9,float param_10)

{
  char cVar1;
  int iVar2;
  long in_FS_OFFSET;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar7;
  undefined8 uVar6;
  float fVar8;
  Vector2 *local_c0;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  Vector2 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = (*(code *)**(undefined8 **)param_4)(param_4);
  if (iVar2 != 1) {
    local_90 = *(undefined8 *)(param_3 + 0x10);
    fVar3 = (float)*(undefined8 *)(param_3 + 8) * (param_10 + *(float *)(param_1 + 0x68)) +
            (float)local_90;
    fVar8 = (float)((ulong)local_90 >> 0x20);
    fVar7 = (float)((ulong)*(undefined8 *)(param_3 + 8) >> 0x20) *
            (param_10 + *(float *)(param_1 + 0x68)) + fVar8;
    local_88 = CONCAT44(fVar7,fVar3);
    if ((*(float *)param_2 != 0.0) || (*(float *)(param_2 + 4) != 0.0)) {
      local_58 = CONCAT44(fVar7 - fVar8,fVar3 - (float)local_90);
      local_60 = Vector2::normalized();
      fVar3 = (float)Vector2::dot((Vector2 *)&local_60);
      if (fVar3 < 0.0) {
        fVar3 = 0.0;
      }
      local_88 = CONCAT44((float)((ulong)local_88 >> 0x20) +
                          fVar3 * (float)((ulong)local_60 >> 0x20),
                          (float)local_88 + fVar3 * (float)local_60);
    }
    local_c0 = (Vector2 *)&local_58;
    local_80 = local_88;
    Transform2D::affine_inverse();
    local_78 = 0;
    local_60 = 0;
    fVar3 = (float)((ulong)local_90 >> 0x20);
    fVar7 = (float)((ulong)local_58 >> 0x20);
    local_90 = CONCAT44((float)local_90 * fVar7 + fVar3 * SUB84(local_50._0_8_,4) +
                        SUB84(local_50._8_8_,4),
                        (float)local_90 * (float)local_58 + fVar3 * (float)local_50._0_8_ +
                        (float)local_50._8_8_);
    fVar3 = (float)((ulong)local_88 >> 0x20);
    local_88 = CONCAT44((float)local_88 * fVar7 + fVar3 * SUB84(local_50._0_8_,4) +
                        SUB84(local_50._8_8_,4),
                        (float)local_88 * (float)local_58 + fVar3 * (float)local_50._0_8_ +
                        (float)local_50._8_8_);
    cVar1 = (**(code **)(*(long *)param_4 + 0x40))
                      (param_4,&local_90,&local_88,&local_78,(Vector2 *)&local_60);
    if ((cVar1 != '\0') && (((float)local_60 != 0.0 || (local_60._4_4_ != 0.0)))) {
      local_68 = CONCAT44((float)((ulong)local_90 >> 0x20) - (float)((ulong)local_88 >> 0x20),
                          (float)local_90 - (float)local_88);
      fVar3 = (float)Vector2::dot((Vector2 *)&local_60);
      if (_LC2 <= (double)fVar3) {
        fVar3 = (float)((ulong)local_78 >> 0x20);
        local_70 = CONCAT44((float)local_78 * (float)((ulong)*(undefined8 *)param_5 >> 0x20) +
                            fVar3 * (float)((ulong)*(undefined8 *)(param_5 + 8) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(param_5 + 0x10) >> 0x20),
                            (float)local_78 * (float)*(undefined8 *)param_5 +
                            fVar3 * (float)*(undefined8 *)(param_5 + 8) +
                            (float)*(undefined8 *)(param_5 + 0x10));
        if (param_1[0x6c] != (GodotShape2D)0x0) {
          uVar4 = Vector2::dot(local_50);
          uVar5 = Vector2::dot(local_c0);
          local_68 = CONCAT44(uVar4,uVar5);
          uVar6 = Vector2::normalized();
          local_68 = CONCAT44((float)((ulong)local_70 >> 0x20) - (float)((ulong)local_80 >> 0x20),
                              (float)local_70 - (float)local_80);
          fVar3 = (float)Vector2::length();
          local_70 = CONCAT44(fVar3 * (float)((ulong)uVar6 >> 0x20) +
                              (float)((ulong)local_80 >> 0x20),
                              fVar3 * (float)uVar6 + (float)local_80);
        }
        if (param_6 != (_func_void_Vector2_ptr_Vector2_ptr_void_ptr *)0x0) {
          if (param_8) {
            (*param_6)((Vector2 *)&local_70,(Vector2 *)&local_80,param_7);
          }
          else {
            (*param_6)((Vector2 *)&local_80,(Vector2 *)&local_70,param_7);
          }
        }
        goto LAB_001005a9;
      }
    }
    if (param_9 != (Vector2 *)0x0) {
      uVar6 = Vector2::normalized();
      *(undefined8 *)param_9 = uVar6;
    }
  }
  cVar1 = '\0';
LAB_001005a9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return cVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotCollisionSolver2D::solve_concave(GodotShape2D const*, Transform2D const&, Vector2 const&,
   GodotShape2D const*, Transform2D const&, Vector2 const&, void (*)(Vector2 const&, Vector2 const&,
   void*), void*, bool, Vector2*, float, float) */

undefined1
GodotCollisionSolver2D::solve_concave
          (GodotShape2D *param_1,Transform2D *param_2,Vector2 *param_3,GodotShape2D *param_4,
          Transform2D *param_5,Vector2 *param_6,_func_void_Vector2_ptr_Vector2_ptr_void_ptr *param_7
          ,void *param_8,bool param_9,Vector2 *param_10,float param_11,float param_12)

{
  float fVar1;
  long lVar2;
  long in_FS_OFFSET;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_d8;
  float local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  Transform2D *local_98;
  GodotShape2D *local_90;
  Transform2D *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  _func_void_Vector2_ptr_Vector2_ptr_void_ptr *local_68;
  void *local_60;
  undefined1 local_58;
  undefined1 local_57;
  undefined8 local_54;
  Vector2 *local_48;
  long local_40;
  
  local_70 = CONCAT44(param_12,param_11);
  lVar2 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = *(undefined8 *)param_3;
  local_78 = 0;
  local_57 = 0;
  local_68 = param_7;
  local_54 = 0;
  local_60 = param_8;
  local_58 = param_9;
  local_48 = param_10;
  local_b8 = *(undefined8 *)param_2;
  uStack_b0 = *(undefined8 *)(param_2 + 8);
  local_a8 = CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) -
                      (float)((ulong)*(undefined8 *)(param_5 + 0x10) >> 0x20),
                      (float)*(undefined8 *)(param_2 + 0x10) -
                      (float)*(undefined8 *)(param_5 + 0x10));
  local_c8 = 0;
  uStack_c0 = 0;
  local_98 = param_2;
  local_90 = param_1;
  local_88 = param_5;
  do {
    local_d0 = *(undefined8 *)(param_5 + lVar2 * 2);
    fVar3 = (float)Vector2::length();
    local_d8 = 0.0;
    local_d4 = 0.0;
    fVar3 = _LC3 / fVar3;
    local_d0 = CONCAT44((float)((ulong)local_d0 >> 0x20) * fVar3,(float)local_d0 * fVar3);
    (**(code **)(*(long *)param_1 + 0x20))(param_1,&local_d0,&local_b8,&local_d8,&local_d4);
    *(float *)((long)&local_c8 + lVar2) = local_d8 * fVar3;
    *(float *)((long)&uStack_c0 + lVar2) = fVar3 * local_d4 - local_d8 * fVar3;
    lVar2 = lVar2 + 4;
  } while (lVar2 != 8);
  if ((*(float *)param_3 != 0.0) || (*(float *)(param_3 + 4) != 0.0)) {
    fVar3 = (float)uStack_c0;
    fVar5 = uStack_c0._4_4_;
    fVar4 = *(float *)param_3 + (float)local_c8;
    fVar6 = *(float *)(param_3 + 4) + local_c8._4_4_;
    if (((float)uStack_c0 < 0.0) || (uStack_c0._4_4_ < 0.0)) {
      _err_print_error("merge","./core/math/rect2.h",0xa8,
                       "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                       ,0,0);
    }
    fVar8 = fVar6;
    if (local_c8._4_4_ <= fVar6) {
      fVar8 = local_c8._4_4_;
    }
    fVar1 = fVar4;
    if ((float)local_c8 <= fVar4) {
      fVar1 = (float)local_c8;
    }
    fVar7 = fVar6 + fVar5;
    if (fVar6 + fVar5 <= local_c8._4_4_ + uStack_c0._4_4_) {
      fVar7 = local_c8._4_4_ + uStack_c0._4_4_;
    }
    fVar5 = fVar4 + fVar3;
    if (fVar4 + fVar3 <= (float)local_c8 + (float)uStack_c0) {
      fVar5 = (float)local_c8 + (float)uStack_c0;
    }
    local_c8 = CONCAT44(fVar8,fVar1);
    uStack_c0 = CONCAT44(fVar7 - fVar8,fVar5 - fVar1);
  }
  (**(code **)(*(long *)param_4 + 0x70))(param_4,&local_c8,0x100000,&local_98);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_57;
}



/* GodotCollisionSolver2D::solve(GodotShape2D const*, Transform2D const&, Vector2 const&,
   GodotShape2D const*, Transform2D const&, Vector2 const&, void (*)(Vector2 const&, Vector2 const&,
   void*), void*, Vector2*, float, float) */

undefined8
GodotCollisionSolver2D::solve
          (GodotShape2D *param_1,Transform2D *param_2,Vector2 *param_3,GodotShape2D *param_4,
          Transform2D *param_5,Vector2 *param_6,_func_void_Vector2_ptr_Vector2_ptr_void_ptr *param_7
          ,void *param_8,Vector2 *param_9,float param_10,float param_11)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  void *pvVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  GodotShape2D *pGVar12;
  Transform2D *pTVar13;
  
  pvVar5 = param_8;
  iVar8 = (*(code *)**(undefined8 **)param_1)();
  iVar9 = (*(code *)**(undefined8 **)param_4)(param_4);
  cVar6 = (**(code **)(*(long *)param_1 + 0x10))(param_1);
  cVar7 = (**(code **)(*(long *)param_4 + 0x10))(param_4);
  bVar1 = iVar9 < iVar8;
  fVar2 = param_10;
  fVar3 = param_11;
  iVar10 = iVar8;
  cVar4 = cVar6;
  if (!bVar1) {
    fVar2 = param_11;
    fVar3 = param_10;
    iVar10 = iVar9;
    iVar9 = iVar8;
    cVar4 = cVar7;
    cVar7 = cVar6;
  }
  if (iVar9 == 0) {
    if (iVar10 == 0) {
      if (solve(GodotShape2D_const*,Transform2D_const&,Vector2_const&,GodotShape2D_const*,Transform2D_const&,Vector2_const&,void(*)(Vector2_const&,Vector2_const&,void*),void*,Vector2*,float,float)
          ::first_print != '\0') {
        _err_print_error("solve","modules/godot_physics_2d/godot_collision_solver_2d.cpp",0xed,
                         "Collisions between world boundaries are not supported.",0,1);
        solve(GodotShape2D_const*,Transform2D_const&,Vector2_const&,GodotShape2D_const*,Transform2D_const&,Vector2_const&,void(*)(Vector2_const&,Vector2_const&,void*),void*,Vector2*,float,float)
        ::first_print = 0;
        return 0;
      }
    }
    else if (bVar1) {
      iVar10 = (*(code *)**(undefined8 **)param_1)(param_1);
      if (iVar10 != 0) {
        param_8._0_1_ = true;
        pTVar13 = param_2;
        pGVar12 = param_1;
LAB_00100cdb:
        uVar11 = solve_static_world_boundary
                           (param_4,param_5,pGVar12,pTVar13,param_3,param_7,pvVar5,param_8._0_1_,
                            param_10);
        return uVar11;
      }
    }
    else {
      iVar10 = (*(code *)**(undefined8 **)param_4)(param_4);
      if (iVar10 != 0) {
        param_8._0_1_ = false;
        pTVar13 = param_5;
        pGVar12 = param_4;
        param_5 = param_2;
        param_4 = param_1;
        param_3 = param_6;
        param_10 = param_11;
        goto LAB_00100cdb;
      }
    }
  }
  else if (iVar9 == 1) {
    if (iVar10 != 1) {
      pGVar12 = param_4;
      pTVar13 = param_2;
      if (bVar1) {
        pGVar12 = param_1;
        pTVar13 = param_5;
        param_3 = param_6;
        param_1 = param_4;
        param_5 = param_2;
        param_10 = param_11;
      }
      uVar11 = solve_separation_ray
                         (param_1,param_3,pTVar13,pGVar12,param_5,param_7,param_8,bVar1,param_9,
                          param_10);
      return uVar11;
    }
    if (solve(GodotShape2D_const*,Transform2D_const&,Vector2_const&,GodotShape2D_const*,Transform2D_const&,Vector2_const&,void(*)(Vector2_const&,Vector2_const&,void*),void*,Vector2*,float,float)
        ::first_print != '\0') {
      _err_print_error("solve","modules/godot_physics_2d/godot_collision_solver_2d.cpp",0xf9,
                       "Collisions between two rays are not supported.",0,1);
      solve(GodotShape2D_const*,Transform2D_const&,Vector2_const&,GodotShape2D_const*,Transform2D_const&,Vector2_const&,void(*)(Vector2_const&,Vector2_const&,void*),void*,Vector2*,float,float)
      ::first_print = 0;
      return 0;
    }
  }
  else {
    if (cVar4 == '\0') {
      uVar11 = sat_2d_calculate_penetration
                         (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,false,
                          param_9,fVar3,fVar2);
      return uVar11;
    }
    if (cVar7 == '\0') {
      if (!bVar1) {
        uVar11 = solve_concave(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,false
                               ,param_9,fVar3,fVar2);
        return uVar11;
      }
      uVar11 = solve_concave(param_4,param_5,param_6,param_1,param_2,param_3,param_7,param_8,true,
                             param_9,fVar3,fVar2);
      return uVar11;
    }
    if (solve(GodotShape2D_const*,Transform2D_const&,Vector2_const&,GodotShape2D_const*,Transform2D_const&,Vector2_const&,void(*)(Vector2_const&,Vector2_const&,void*),void*,Vector2*,float,float)
        ::first_print != '\0') {
      _err_print_error("solve","modules/godot_physics_2d/godot_collision_solver_2d.cpp",0x105,
                       "Collisions between two concave shapes are not supported.",0,1);
      solve(GodotShape2D_const*,Transform2D_const&,Vector2_const&,GodotShape2D_const*,Transform2D_const&,Vector2_const&,void(*)(Vector2_const&,Vector2_const&,void*),void*,Vector2*,float,float)
      ::first_print = 0;
      return 0;
    }
  }
  return 0;
}


