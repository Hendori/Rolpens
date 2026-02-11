
/* JoltCustomMotionShape::GetSupportingFace(JPH::SubShapeID const&, JPH::Vec3, JPH::Vec3, JPH::Mat44
   const&, JPH::StaticArray<JPH::Vec3, 32u>&) const */

void JoltCustomMotionShape::GetSupportingFace(void)

{
  return;
}



/* (anonymous namespace)::JoltMotionConvexSupport::~JoltMotionConvexSupport() */

void __thiscall
(anonymous_namespace)::JoltMotionConvexSupport::~JoltMotionConvexSupport
          (JoltMotionConvexSupport *this)

{
  return;
}



/* JoltCustomMotionShape::GetLocalBounds() const */

void JoltCustomMotionShape::GetLocalBounds(void)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  long in_RSI;
  undefined1 (*in_RDI) [16];
  long in_FS_OFFSET;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(**(long **)(in_RSI + 0x1080) + 0x20))();
  fVar2 = *(float *)(in_RSI + 0x1078);
  fVar3 = *(float *)(in_RSI + 0x107c);
  fVar4 = *(float *)(in_RDI[1] + 8);
  fVar5 = *(float *)(in_RDI[1] + 0xc);
  auVar7._4_4_ = *(float *)(in_RSI + 0x1074) + *(float *)(in_RDI[1] + 4);
  auVar7._0_4_ = *(float *)(in_RSI + 0x1070) + *(float *)in_RDI[1];
  auVar6._4_4_ = *(float *)(*in_RDI + 4) + *(float *)(in_RSI + 0x1074);
  auVar6._0_4_ = *(float *)*in_RDI + *(float *)(in_RSI + 0x1070);
  auVar6._8_4_ = *(float *)(*in_RDI + 8) + fVar2;
  auVar6._12_4_ = *(float *)(*in_RDI + 0xc) + fVar3;
  auVar6 = minps(*in_RDI,auVar6);
  *in_RDI = auVar6;
  auVar7._8_4_ = fVar2 + fVar4;
  auVar7._12_4_ = fVar3 + fVar5;
  auVar6 = maxps(in_RDI[1],auVar7);
  in_RDI[1] = auVar6;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* (anonymous namespace)::JoltMotionConvexSupport::~JoltMotionConvexSupport() */

void __thiscall
(anonymous_namespace)::JoltMotionConvexSupport::~JoltMotionConvexSupport
          (JoltMotionConvexSupport *this)

{
  operator_delete(this,0x30);
  return;
}



/* (anonymous namespace)::JoltMotionConvexSupport::GetConvexRadius() const */

void __thiscall
(anonymous_namespace)::JoltMotionConvexSupport::GetConvexRadius(JoltMotionConvexSupport *this)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(**(long **)(this + 0x20) + 0x18);
  if (UNRECOVERED_JUMPTABLE_00 == GetConvexRadius) {
    plVar1 = (long *)(*(long **)(this + 0x20))[4];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x18);
    if (UNRECOVERED_JUMPTABLE_00 == GetConvexRadius) {
      plVar1 = (long *)plVar1[4];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x18);
      if (UNRECOVERED_JUMPTABLE_00 != GetConvexRadius) goto LAB_00100158;
      plVar1 = (long *)plVar1[4];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x18);
      if (UNRECOVERED_JUMPTABLE_00 == GetConvexRadius) {
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x18);
        if (UNRECOVERED_JUMPTABLE_00 != GetConvexRadius) goto LAB_00100158;
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x18);
        if (UNRECOVERED_JUMPTABLE_00 == GetConvexRadius) {
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x18);
          if (UNRECOVERED_JUMPTABLE_00 != GetConvexRadius) goto LAB_00100158;
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x18);
          if (UNRECOVERED_JUMPTABLE_00 == GetConvexRadius) {
                    /* WARNING: Could not recover jumptable at 0x00100146. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[4] + 0x18))();
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00100150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
LAB_00100158:
                    /* WARNING: Could not recover jumptable at 0x00100158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* (anonymous namespace)::JoltMotionConvexSupport::GetSupport(JPH::Vec3) const */

undefined1  [16]
(anonymous_namespace)::JoltMotionConvexSupport::GetSupport
          (undefined8 param_1,float param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  
  plVar1 = *(long **)(param_3 + 0x20);
  fVar9 = (float)param_1;
  fVar10 = (float)((ulong)param_1 >> 0x20);
  if (*(code **)(*plVar1 + 0x10) == GetSupport) {
    plVar2 = (long *)plVar1[4];
    if (*(code **)(*plVar2 + 0x10) == GetSupport) {
      plVar3 = (long *)plVar2[4];
      if (*(code **)(*plVar3 + 0x10) == GetSupport) {
        plVar4 = (long *)plVar3[4];
        if (*(code **)(*plVar4 + 0x10) == GetSupport) {
          plVar5 = (long *)plVar4[4];
          if (*(code **)(*plVar5 + 0x10) == GetSupport) {
            plVar6 = (long *)plVar5[4];
            if (*(code **)(*plVar6 + 0x10) == GetSupport) {
              plVar7 = (long *)plVar6[4];
              if (*(code **)(*plVar7 + 0x10) == GetSupport) {
                plVar8 = (long *)plVar7[4];
                if (*(code **)(*plVar8 + 0x10) == GetSupport) {
                  auVar11 = (**(code **)(*(long *)plVar8[4] + 0x10))();
                  local_78 = auVar11._0_4_;
                  fStack_74 = auVar11._4_4_;
                  fStack_70 = auVar11._8_4_;
                  fStack_6c = auVar11._12_4_;
                  local_88 = local_78;
                  fStack_84 = fStack_74;
                  fStack_80 = fStack_70;
                  fStack_7c = fStack_6c;
                  if (0.0 < param_2 * *(float *)(plVar8 + 3) +
                            fVar10 * *(float *)((long)plVar8 + 0x14) +
                            fVar9 * *(float *)(plVar8 + 2) + 0.0) {
                    local_88 = *(float *)(plVar8 + 2) + local_78;
                    fStack_84 = *(float *)((long)plVar8 + 0x14) + fStack_74;
                    fStack_80 = *(float *)(plVar8 + 3) + fStack_70;
                    fStack_7c = *(float *)((long)plVar8 + 0x1c) + fStack_6c;
                  }
                }
                else {
                  auVar11 = (**(code **)(*plVar8 + 0x10))(plVar8);
                  local_88 = auVar11._0_4_;
                  fStack_84 = auVar11._4_4_;
                  fStack_80 = auVar11._8_4_;
                  fStack_7c = auVar11._12_4_;
                }
                if (0.0 < param_2 * *(float *)(plVar7 + 3) +
                          fVar10 * *(float *)((long)plVar7 + 0x14) +
                          fVar9 * *(float *)(plVar7 + 2) + 0.0) {
                  local_88 = local_88 + *(float *)(plVar7 + 2);
                  fStack_84 = fStack_84 + *(float *)((long)plVar7 + 0x14);
                  fStack_80 = fStack_80 + *(float *)(plVar7 + 3);
                  fStack_7c = fStack_7c + *(float *)((long)plVar7 + 0x1c);
                }
              }
              else {
                auVar11 = (**(code **)(*plVar7 + 0x10))(plVar7);
                local_88 = auVar11._0_4_;
                fStack_84 = auVar11._4_4_;
                fStack_80 = auVar11._8_4_;
                fStack_7c = auVar11._12_4_;
              }
              if (0.0 < param_2 * *(float *)(plVar6 + 3) +
                        fVar10 * *(float *)((long)plVar6 + 0x14) +
                        fVar9 * *(float *)(plVar6 + 2) + 0.0) {
                local_88 = local_88 + *(float *)(plVar6 + 2);
                fStack_84 = fStack_84 + *(float *)((long)plVar6 + 0x14);
                fStack_80 = fStack_80 + *(float *)(plVar6 + 3);
                fStack_7c = fStack_7c + *(float *)((long)plVar6 + 0x1c);
              }
            }
            else {
              auVar11 = (**(code **)(*plVar6 + 0x10))(plVar6);
              local_88 = auVar11._0_4_;
              fStack_84 = auVar11._4_4_;
              fStack_80 = auVar11._8_4_;
              fStack_7c = auVar11._12_4_;
            }
            if (0.0 < param_2 * *(float *)(plVar5 + 3) +
                      fVar10 * *(float *)((long)plVar5 + 0x14) +
                      fVar9 * *(float *)(plVar5 + 2) + 0.0) {
              local_88 = local_88 + *(float *)(plVar5 + 2);
              fStack_84 = fStack_84 + *(float *)((long)plVar5 + 0x14);
              fStack_80 = fStack_80 + *(float *)(plVar5 + 3);
              fStack_7c = fStack_7c + *(float *)((long)plVar5 + 0x1c);
            }
          }
          else {
            auVar11 = (**(code **)(*plVar5 + 0x10))(plVar5);
            local_88 = auVar11._0_4_;
            fStack_84 = auVar11._4_4_;
            fStack_80 = auVar11._8_4_;
            fStack_7c = auVar11._12_4_;
          }
          if (0.0 < param_2 * *(float *)(plVar4 + 3) +
                    fVar10 * *(float *)((long)plVar4 + 0x14) + fVar9 * *(float *)(plVar4 + 2) + 0.0)
          {
            local_88 = local_88 + *(float *)(plVar4 + 2);
            fStack_84 = fStack_84 + *(float *)((long)plVar4 + 0x14);
            fStack_80 = fStack_80 + *(float *)(plVar4 + 3);
            fStack_7c = fStack_7c + *(float *)((long)plVar4 + 0x1c);
          }
        }
        else {
          auVar11 = (**(code **)(*plVar4 + 0x10))(plVar4);
          local_88 = auVar11._0_4_;
          fStack_84 = auVar11._4_4_;
          fStack_80 = auVar11._8_4_;
          fStack_7c = auVar11._12_4_;
        }
        if (0.0 < param_2 * *(float *)(plVar3 + 3) +
                  fVar10 * *(float *)((long)plVar3 + 0x14) + fVar9 * *(float *)(plVar3 + 2) + 0.0) {
          local_88 = local_88 + *(float *)(plVar3 + 2);
          fStack_84 = fStack_84 + *(float *)((long)plVar3 + 0x14);
          fStack_80 = fStack_80 + *(float *)(plVar3 + 3);
          fStack_7c = fStack_7c + *(float *)((long)plVar3 + 0x1c);
        }
      }
      else {
        auVar11 = (**(code **)(*plVar3 + 0x10))(plVar3);
        local_88 = auVar11._0_4_;
        fStack_84 = auVar11._4_4_;
        fStack_80 = auVar11._8_4_;
        fStack_7c = auVar11._12_4_;
      }
      if (0.0 < param_2 * *(float *)(plVar2 + 3) +
                fVar10 * *(float *)((long)plVar2 + 0x14) + fVar9 * *(float *)(plVar2 + 2) + 0.0) {
        local_88 = local_88 + *(float *)(plVar2 + 2);
        fStack_84 = fStack_84 + *(float *)((long)plVar2 + 0x14);
        fStack_80 = fStack_80 + *(float *)(plVar2 + 3);
        fStack_7c = fStack_7c + *(float *)((long)plVar2 + 0x1c);
      }
    }
    else {
      auVar11 = (**(code **)(*plVar2 + 0x10))(plVar2);
      local_88 = auVar11._0_4_;
      fStack_84 = auVar11._4_4_;
      fStack_80 = auVar11._8_4_;
      fStack_7c = auVar11._12_4_;
    }
    if (0.0 < param_2 * *(float *)(plVar1 + 3) +
              fVar10 * *(float *)((long)plVar1 + 0x14) + fVar9 * *(float *)(plVar1 + 2) + 0.0) {
      local_88 = local_88 + *(float *)(plVar1 + 2);
      fStack_84 = fStack_84 + *(float *)((long)plVar1 + 0x14);
      fStack_80 = fStack_80 + *(float *)(plVar1 + 3);
      fStack_7c = fStack_7c + *(float *)((long)plVar1 + 0x1c);
    }
  }
  else {
    auVar11 = (**(code **)(*plVar1 + 0x10))(plVar1);
    local_88 = auVar11._0_4_;
    fStack_84 = auVar11._4_4_;
    fStack_80 = auVar11._8_4_;
    fStack_7c = auVar11._12_4_;
  }
  if (0.0 < param_2 * *(float *)(param_3 + 0x18) +
            fVar10 * *(float *)(param_3 + 0x14) + fVar9 * *(float *)(param_3 + 0x10) + 0.0) {
    local_88 = local_88 + *(float *)(param_3 + 0x10);
    fStack_84 = fStack_84 + *(float *)(param_3 + 0x14);
    fStack_80 = fStack_80 + *(float *)(param_3 + 0x18);
    fStack_7c = fStack_7c + *(float *)(param_3 + 0x1c);
  }
  auVar11._4_4_ = fStack_84;
  auVar11._0_4_ = local_88;
  auVar11._8_4_ = fStack_80;
  auVar11._12_4_ = fStack_7c;
  return auVar11;
}



/* JoltCustomMotionShape::GetSupportFunction(JPH::ConvexShape::ESupportMode,
   JPH::ConvexShape::SupportBuffer&, JPH::Vec3) const */

undefined8 *
JoltCustomMotionShape::GetSupportFunction(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  
  lVar14 = param_1 + 0x30;
  plVar1 = *(long **)(param_1 + 0x1080);
  if (*(code **)(*plVar1 + 0x130) == GetSupportFunction) {
    plVar2 = (long *)plVar1[0x210];
    local_98 = plVar1 + 6;
    if (*(code **)(*plVar2 + 0x130) == GetSupportFunction) {
      plVar3 = (long *)plVar2[0x210];
      local_90 = plVar2 + 6;
      if (*(code **)(*plVar3 + 0x130) == GetSupportFunction) {
        plVar4 = (long *)plVar3[0x210];
        local_88 = plVar3 + 6;
        if (*(code **)(*plVar4 + 0x130) == GetSupportFunction) {
          plVar5 = (long *)plVar4[0x210];
          local_80 = plVar4 + 6;
          if (*(code **)(*plVar5 + 0x130) == GetSupportFunction) {
            plVar6 = (long *)plVar5[0x210];
            local_78 = plVar5 + 6;
            if (*(code **)(*plVar6 + 0x130) == GetSupportFunction) {
              plVar7 = (long *)plVar6[0x210];
              local_70 = plVar6 + 6;
              if (*(code **)(*plVar7 + 0x130) == GetSupportFunction) {
                plVar8 = (long *)plVar7[0x210];
                local_68 = plVar7 + 6;
                if (*(code **)(*plVar8 + 0x130) == GetSupportFunction) {
                  lVar13 = (**(code **)(*(long *)plVar8[0x210] + 0x130))
                                     ((long *)plVar8[0x210],param_2,plVar8 + 6);
                  lVar9 = plVar8[0x20e];
                  lVar10 = plVar8[0x20f];
                  plVar7[6] = (long)&PTR__JoltMotionConvexSupport_00101620;
                  plVar7[10] = lVar13;
                  plVar7[8] = lVar9;
                  plVar7[9] = lVar10;
                }
                else {
                  local_68 = (long *)(**(code **)(*plVar8 + 0x130))(plVar8,param_2,local_68);
                }
                lVar9 = plVar7[0x20e];
                lVar10 = plVar7[0x20f];
                plVar6[6] = (long)&PTR__JoltMotionConvexSupport_00101620;
                plVar6[10] = (long)local_68;
                plVar6[8] = lVar9;
                plVar6[9] = lVar10;
              }
              else {
                local_70 = (long *)(**(code **)(*plVar7 + 0x130))(plVar7,param_2,local_70);
              }
              lVar9 = plVar6[0x20e];
              lVar10 = plVar6[0x20f];
              plVar5[6] = (long)&PTR__JoltMotionConvexSupport_00101620;
              plVar5[10] = (long)local_70;
              plVar5[8] = lVar9;
              plVar5[9] = lVar10;
            }
            else {
              local_78 = (long *)(**(code **)(*plVar6 + 0x130))(plVar6,param_2,local_78);
            }
            lVar9 = plVar5[0x20e];
            lVar10 = plVar5[0x20f];
            plVar4[6] = (long)&PTR__JoltMotionConvexSupport_00101620;
            plVar4[10] = (long)local_78;
            plVar4[8] = lVar9;
            plVar4[9] = lVar10;
          }
          else {
            local_80 = (long *)(**(code **)(*plVar5 + 0x130))(plVar5,param_2,local_80);
          }
          lVar9 = plVar4[0x20e];
          lVar10 = plVar4[0x20f];
          plVar3[6] = (long)&PTR__JoltMotionConvexSupport_00101620;
          plVar3[10] = (long)local_80;
          plVar3[8] = lVar9;
          plVar3[9] = lVar10;
        }
        else {
          local_88 = (long *)(**(code **)(*plVar4 + 0x130))(plVar4,param_2,local_88);
        }
        lVar9 = plVar3[0x20e];
        lVar10 = plVar3[0x20f];
        plVar2[6] = (long)&PTR__JoltMotionConvexSupport_00101620;
        plVar2[10] = (long)local_88;
        plVar2[8] = lVar9;
        plVar2[9] = lVar10;
      }
      else {
        local_90 = (long *)(**(code **)(*plVar3 + 0x130))(plVar3,param_2,local_90);
      }
      lVar9 = plVar2[0x20e];
      lVar10 = plVar2[0x20f];
      plVar1[6] = (long)&PTR__JoltMotionConvexSupport_00101620;
      plVar1[10] = (long)local_90;
      plVar1[8] = lVar9;
      plVar1[9] = lVar10;
    }
    else {
      local_98 = (long *)(**(code **)(*plVar2 + 0x130))(plVar2,param_2,local_98);
    }
    lVar9 = plVar1[0x20e];
    lVar10 = plVar1[0x20f];
    *(undefined ***)(param_1 + 0x30) = &PTR__JoltMotionConvexSupport_00101620;
    *(long **)(param_1 + 0x50) = local_98;
    *(long *)(param_1 + 0x40) = lVar9;
    *(long *)(param_1 + 0x48) = lVar10;
  }
  else {
    lVar14 = (**(code **)(*plVar1 + 0x130))(plVar1,param_2,lVar14);
  }
  uVar11 = *(undefined8 *)(param_1 + 0x1070);
  uVar12 = *(undefined8 *)(param_1 + 0x1078);
  *param_3 = &PTR__JoltMotionConvexSupport_00101620;
  param_3[4] = lVar14;
  param_3[2] = uVar11;
  param_3[3] = uVar12;
  return param_3;
}



/* JPH::Shape::SaveSubShapeState(JPH::Array<JPH::RefConst<JPH::Shape>,
   JPH::STLAllocator<JPH::RefConst<JPH::Shape> > >&) const */

void JPH::Shape::SaveSubShapeState(Array *param_1)

{
  return;
}



/* JPH::Shape::RestoreSubShapeState(JPH::RefConst<JPH::Shape> const*, unsigned int) */

void JPH::Shape::RestoreSubShapeState(RefConst *param_1,uint param_2)

{
  return;
}



/* JoltCustomMotionShape::MustBeStatic() const */

undefined8 JoltCustomMotionShape::MustBeStatic(void)

{
  return 0;
}



/* JoltCustomMotionShape::GetStats() const */

undefined1  [16] JoltCustomMotionShape::GetStats(void)

{
  return ZEXT816(0x1090);
}



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
                    /* WARNING: Could not recover jumptable at 0x00100a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)();
  return;
}



/* JoltCustomMotionShape::IsValidScale(JPH::Vec3) const */

undefined8 JoltCustomMotionShape::IsValidScale(void)

{
  _err_print_error("IsValidScale","modules/jolt_physics/shapes/jolt_custom_motion_shape.h",0x6e,
                   "Method/function failed. Returning: false","Not implemented.",0,0);
  return 0;
}



/* JoltCustomMotionShape::GetVolume() const */

undefined8 JoltCustomMotionShape::GetVolume(void)

{
  _err_print_error("GetVolume","modules/jolt_physics/shapes/jolt_custom_motion_shape.h",0x6c,
                   "Method/function failed. Returning: 0.0f","Not implemented.",0,0);
  return 0;
}



/* JoltCustomMotionShape::GetTrianglesNext(JPH::Shape::GetTrianglesContext&, int, JPH::Float3*,
   JPH::PhysicsMaterial const**) const */

undefined8
JoltCustomMotionShape::GetTrianglesNext
          (GetTrianglesContext *param_1,int param_2,Float3 *param_3,PhysicsMaterial **param_4)

{
  _err_print_error("GetTrianglesNext","modules/jolt_physics/shapes/jolt_custom_motion_shape.h",0x68,
                   "Method/function failed. Returning: 0","Not implemented.",0,0);
  return 0;
}



/* JoltCustomMotionShape::GetTrianglesStart(JPH::Shape::GetTrianglesContext&, JPH::AABox const&,
   JPH::Vec3, JPH::Quat, JPH::Vec3) const */

void JoltCustomMotionShape::GetTrianglesStart(void)

{
  _err_print_error("GetTrianglesStart","modules/jolt_physics/shapes/jolt_custom_motion_shape.h",0x66
                   ,"Method/function failed.","Not implemented.",0,0);
  return;
}



/* JoltCustomMotionShape::TransformShape(JPH::Mat44 const&,
   JPH::CollisionCollector<JPH::TransformedShape, JPH::CollisionCollectorTraitsCollideShape>&) const
    */

void JoltCustomMotionShape::TransformShape(Mat44 *param_1,CollisionCollector *param_2)

{
  _err_print_error("TransformShape","modules/jolt_physics/shapes/jolt_custom_motion_shape.h",100,
                   "Method/function failed.","Not implemented.",0,0);
  return;
}



/* JoltCustomMotionShape::CollectTransformedShapes(JPH::AABox const&, JPH::Vec3, JPH::Quat,
   JPH::Vec3, JPH::SubShapeIDCreator const&, JPH::CollisionCollector<JPH::TransformedShape,
   JPH::CollisionCollectorTraitsCollideShape>&, JPH::ShapeFilter const&) const */

void JoltCustomMotionShape::CollectTransformedShapes(void)

{
  _err_print_error("CollectTransformedShapes",
                   "modules/jolt_physics/shapes/jolt_custom_motion_shape.h",0x62,
                   "Method/function failed.","Not implemented.",0,0);
  return;
}



/* JoltCustomMotionShape::CollideSoftBodyVertices(JPH::Mat44 const&, JPH::Vec3,
   JPH::CollideSoftBodyVertexIterator const&, unsigned int, int) const */

void JoltCustomMotionShape::CollideSoftBodyVertices(void)

{
  _err_print_error("CollideSoftBodyVertices",
                   "modules/jolt_physics/shapes/jolt_custom_motion_shape.h",0x60,
                   "Method/function failed.","Not implemented.",0,0);
  return;
}



/* JoltCustomMotionShape::CollidePoint(JPH::Vec3, JPH::SubShapeIDCreator const&,
   JPH::CollisionCollector<JPH::CollidePointResult, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::ShapeFilter const&) const */

void JoltCustomMotionShape::CollidePoint(void)

{
  _err_print_error("CollidePoint","modules/jolt_physics/shapes/jolt_custom_motion_shape.h",0x5e,
                   "Method/function failed.","Not implemented.",0,0);
  return;
}



/* JoltCustomMotionShape::CastRay(JPH::RayCast const&, JPH::RayCastSettings const&,
   JPH::SubShapeIDCreator const&, JPH::CollisionCollector<JPH::RayCastResult,
   JPH::CollisionCollectorTraitsCastRay>&, JPH::ShapeFilter const&) const */

void JoltCustomMotionShape::CastRay
               (RayCast *param_1,RayCastSettings *param_2,SubShapeIDCreator *param_3,
               CollisionCollector *param_4,ShapeFilter *param_5)

{
  _err_print_error("CastRay","modules/jolt_physics/shapes/jolt_custom_motion_shape.h",0x5c,
                   "Method/function failed.","Not implemented.",0,0);
  return;
}



/* JoltCustomMotionShape::CastRay(JPH::RayCast const&, JPH::SubShapeIDCreator const&,
   JPH::RayCastResult&) const */

undefined8
JoltCustomMotionShape::CastRay(RayCast *param_1,SubShapeIDCreator *param_2,RayCastResult *param_3)

{
  _err_print_error("CastRay","modules/jolt_physics/shapes/jolt_custom_motion_shape.h",0x5a,
                   "Method/function failed. Returning: false","Not implemented.",0,0);
  return 0;
}



/* JoltCustomMotionShape::DrawGetSupportingFace(JPH::DebugRenderer*, JPH::Mat44 const&, JPH::Vec3)
   const */

void JoltCustomMotionShape::DrawGetSupportingFace(void)

{
  _err_print_error("DrawGetSupportingFace","modules/jolt_physics/shapes/jolt_custom_motion_shape.h",
                   0x57,"Method/function failed.","Not implemented.",0,0);
  return;
}



/* JoltCustomMotionShape::DrawGetSupportFunction(JPH::DebugRenderer*, JPH::Mat44 const&, JPH::Vec3,
   JPH::Color, bool) const */

void JoltCustomMotionShape::DrawGetSupportFunction(void)

{
  _err_print_error("DrawGetSupportFunction","modules/jolt_physics/shapes/jolt_custom_motion_shape.h"
                   ,0x55,"Method/function failed.","Not implemented.",0,0);
  return;
}



/* JoltCustomMotionShape::Draw(JPH::DebugRenderer*, JPH::Mat44 const&, JPH::Vec3, JPH::Color, bool,
   bool) const */

void JoltCustomMotionShape::Draw(void)

{
  _err_print_error(&_LC18,"modules/jolt_physics/shapes/jolt_custom_motion_shape.h",0x53,
                   "Method/function failed.","Not implemented.",0,0);
  return;
}



/* JoltCustomMotionShape::GetSubmergedVolume(JPH::Mat44 const&, JPH::Vec3, JPH::Plane const&,
   float&, float&, JPH::Vec3&, JPH::Vec3) const */

void JoltCustomMotionShape::GetSubmergedVolume(void)

{
  _err_print_error("GetSubmergedVolume","modules/jolt_physics/shapes/jolt_custom_motion_shape.h",
                   0x4e,"Method/function failed.","Not implemented.",0,0);
  return;
}



/* JoltCustomMotionShape::GetSubShapeUserData(JPH::SubShapeID const&) const */

undefined8 JoltCustomMotionShape::GetSubShapeUserData(SubShapeID *param_1)

{
  _err_print_error("GetSubShapeUserData","modules/jolt_physics/shapes/jolt_custom_motion_shape.h",
                   0x4a,"Method/function failed. Returning: 0","Not implemented.",0,0);
  return 0;
}



/* JoltCustomMotionShape::GetMaterial(JPH::SubShapeID const&) const */

undefined8 JoltCustomMotionShape::GetMaterial(SubShapeID *param_1)

{
  _err_print_error("GetMaterial","modules/jolt_physics/shapes/jolt_custom_motion_shape.h",0x44,
                   "Method/function failed. Returning: nullptr","Not implemented.",0,0);
  return 0;
}



/* JoltCustomMotionShape::GetInnerRadius() const */

undefined8 JoltCustomMotionShape::GetInnerRadius(void)

{
  _err_print_error("GetInnerRadius","modules/jolt_physics/shapes/jolt_custom_motion_shape.h",0x40,
                   "Method/function failed. Returning: 0.0f","Not implemented.",0,0);
  return 0;
}



/* JoltCustomMotionShape::GetSubShapeIDBitsRecursive() const */

undefined8 JoltCustomMotionShape::GetSubShapeIDBitsRecursive(void)

{
  _err_print_error("GetSubShapeIDBitsRecursive",
                   "modules/jolt_physics/shapes/jolt_custom_motion_shape.h",0x3c,
                   "Method/function failed. Returning: 0","Not implemented.",0,0);
  return 0;
}



/* JoltCustomMotionShape::GetSurfaceNormal(JPH::SubShapeID const&, JPH::Vec3) const */

undefined1  [16] JoltCustomMotionShape::GetSurfaceNormal(void)

{
  _err_print_error("GetSurfaceNormal","modules/jolt_physics/shapes/jolt_custom_motion_shape.h",0x46,
                   "Method/function failed. Returning: JPH::Vec3::sZero()","Not implemented.",0,0);
  return ZEXT816(0);
}



/* JoltCustomMotionShape::GetCenterOfMass() const */

undefined1  [16] JoltCustomMotionShape::GetCenterOfMass(void)

{
  _err_print_error("GetCenterOfMass","modules/jolt_physics/shapes/jolt_custom_motion_shape.h",0x38,
                   "Method/function failed. Returning: JPH::Vec3::sZero()","Not implemented.",0,0);
  return ZEXT816(0);
}



/* JoltCustomMotionShape::GetWorldSpaceBounds(JPH::Mat44 const&, JPH::Vec3) const */

undefined1  [16] JoltCustomMotionShape::GetWorldSpaceBounds(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined8 uStack_10;
  
  _err_print_error("GetWorldSpaceBounds","modules/jolt_physics/shapes/jolt_custom_motion_shape.h",
                   0x3e,"Method/function failed. Returning: JPH::AABox()","Not implemented.",0,0);
  uVar1 = _LC31;
  *param_1 = _LC31;
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  param_1[3] = uVar1;
  uVar1 = _LC33;
  param_1[4] = _LC33;
  param_1[5] = uVar1;
  param_1[6] = uVar1;
  param_1[7] = uVar1;
  auVar2._8_8_ = uStack_10;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* JoltCustomMotionShape::GetMassProperties() const */

undefined1  [16] __thiscall JoltCustomMotionShape::GetMassProperties(JoltCustomMotionShape *this)

{
  undefined1 auVar1 [16];
  undefined8 uStack_10;
  
  _err_print_error("GetMassProperties","modules/jolt_physics/shapes/jolt_custom_motion_shape.h",0x42
                   ,"Method/function failed. Returning: JPH::MassProperties()","Not implemented.",0,
                   0);
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x40) = (undefined1  [16])0x0;
  auVar1._8_8_ = uStack_10;
  auVar1._0_8_ = this;
  return auVar1;
}



/* JoltCustomMotionShape::GetSubShapeTransformedShape(JPH::SubShapeID const&, JPH::Vec3, JPH::Quat,
   JPH::Vec3, JPH::SubShapeID&) const */

undefined1  [16] JoltCustomMotionShape::GetSubShapeTransformedShape(undefined1 (*param_1) [16])

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined8 uStack_10;
  
  _err_print_error("GetSubShapeTransformedShape",
                   "modules/jolt_physics/shapes/jolt_custom_motion_shape.h",0x4c,
                   "Method/function failed. Returning: JPH::TransformedShape()","Not implemented.",0
                   ,0);
  uVar1 = _LC38;
  param_1[3] = (undefined1  [16])0x0;
  param_1[2] = (undefined1  [16])0x0;
  *(undefined4 *)param_1[3] = 0x3f800000;
  *(undefined8 *)(param_1[2] + 8) = uVar1;
  *(undefined8 *)(param_1[3] + 4) = 0xffffffffffffffff;
  *param_1 = (undefined1  [16])0x0;
  param_1[1] = (undefined1  [16])0x0;
  auVar2._8_8_ = uStack_10;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* JoltCustomMotionShape::~JoltCustomMotionShape() */

void __thiscall JoltCustomMotionShape::~JoltCustomMotionShape(JoltCustomMotionShape *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined **)this = &__cxxabiv1::__si_class_type_info::vtable;
  plVar2 = *(long **)(this + 0x20);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      if (*(code **)(*plVar2 + 0x18) == JPH::PhysicsMaterial::~PhysicsMaterial) {
        (*JPH::Free)();
                    /* WARNING: Could not recover jumptable at 0x001014ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*JPH::Free)(this);
        return;
      }
      (**(code **)(*plVar2 + 0x18))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00101486. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*JPH::Free)(this);
  return;
}



/* JoltCustomMotionShape::~JoltCustomMotionShape() */

void __thiscall JoltCustomMotionShape::~JoltCustomMotionShape(JoltCustomMotionShape *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined **)this = &__cxxabiv1::__si_class_type_info::vtable;
  plVar2 = *(long **)(this + 0x20);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      if (*(code **)(*plVar2 + 0x18) == JPH::PhysicsMaterial::~PhysicsMaterial) {
                    /* WARNING: Could not recover jumptable at 0x001014f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*JPH::Free)();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00101500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))();
      return;
    }
  }
  return;
}



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
  return;
}



/* JoltCustomMotionShape::GetLocalBounds() const */

void JoltCustomMotionShape::_GLOBAL__sub_I_GetLocalBounds(void)

{
  if (JPH::DVec3::cTrue == '\0') {
    JPH::DVec3::cTrue = '\x01';
    JPH::DVec3::cTrue = _LC42;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JoltCustomMotionShape::~JoltCustomMotionShape() */

void __thiscall JoltCustomMotionShape::~JoltCustomMotionShape(JoltCustomMotionShape *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


