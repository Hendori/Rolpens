
/* JPH::RegisterTypesInternal(unsigned long)::{lambda(int, char
   const*)#1}::TEMPNAMEPLACEHOLDERVALUE(int, char const*) const [clone .part.0] */

void JPH::RegisterTypesInternal(unsigned_long)::{lambda(int,char_const*)#1}::operator()
               (int param_1,char *param_2)

{
  undefined4 in_register_0000003c;
  
                    /* WARNING: Could not recover jumptable at 0x0010000c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Trace)("Mismatching define %s.",CONCAT44(in_register_0000003c,param_1));
  return;
}



/* JPH::VerifyJoltVersionIDInternal(unsigned long) */

bool JPH::VerifyJoltVersionIDInternal(ulong param_1)

{
  return param_1 == 0x20050201;
}



/* JPH::RegisterTypesInternal(unsigned long) */

void __thiscall JPH::RegisterTypesInternal(JPH *this,ulong param_1)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  long *plVar4;
  ulong uVar5;
  char *pcVar6;
  long in_FS_OFFSET;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (this != (JPH *)0x20050201) {
    (*Trace)(
            "Version mismatch, make sure you compile the client code with the same Jolt version and compiler definitions!"
            );
    uVar5 = (ulong)this ^ 0x20050201;
    if (((ulong)this & 0x1000000) != 0) {
      RegisterTypesInternal(unsigned_long)::{lambda(int,char_const*)#1}::operator()
                (0x1005b1,(char *)param_1);
    }
    if ((uVar5 & 0x2000000) != 0) {
      RegisterTypesInternal(unsigned_long)::{lambda(int,char_const*)#1}::operator()
                (0x1006f8,(char *)param_1);
    }
    if ((uVar5 & 0x4000000) != 0) {
      RegisterTypesInternal(unsigned_long)::{lambda(int,char_const*)#1}::operator()
                (0x100720,(char *)param_1);
    }
    if ((uVar5 & 0x8000000) != 0) {
      RegisterTypesInternal(unsigned_long)::{lambda(int,char_const*)#1}::operator()
                (0x1005c6,(char *)param_1);
    }
    if ((uVar5 & 0x10000000) != 0) {
      RegisterTypesInternal(unsigned_long)::{lambda(int,char_const*)#1}::operator()
                (0x1005da,(char *)param_1);
    }
    if ((uVar5 & 0x20000000) != 0) {
      RegisterTypesInternal(unsigned_long)::{lambda(int,char_const*)#1}::operator()
                (0x1005ef,(char *)param_1);
    }
    if ((uVar5 & 0x40000000) != 0) {
      RegisterTypesInternal(unsigned_long)::{lambda(int,char_const*)#1}::operator()
                (0x100602,(char *)param_1);
    }
    if ((uVar5 & 0x80000000) != 0) {
      RegisterTypesInternal(unsigned_long)::{lambda(int,char_const*)#1}::operator()
                (0x10061d,(char *)param_1);
    }
    if (((ulong)this >> 0x20 & 1) != 0) {
      RegisterTypesInternal(unsigned_long)::{lambda(int,char_const*)#1}::operator()
                (0x10063a,(char *)param_1);
    }
    if (((ulong)this >> 0x21 & 1) != 0) {
      RegisterTypesInternal(unsigned_long)::{lambda(int,char_const*)#1}::operator()
                (0x100650,(char *)param_1);
    }
    if (((ulong)this >> 0x22 & 1) != 0) {
      pcVar6 = "JPH_OBJECT_STREAM";
      RegisterTypesInternal(unsigned_long)::{lambda(int,char_const*)#1}::operator()
                (0x100663,(char *)param_1);
      RegisterTypesInternal((ulong)pcVar6);
      return;
    }
                    /* WARNING: Subroutine does not return */
    abort();
  }
  JPH::CollisionDispatch::sInit();
  JPH::CompoundShape::sRegister();
  JPH::ConvexShape::sRegister();
  JPH::MutableCompoundShape::sRegister();
  JPH::StaticCompoundShape::sRegister();
  JPH::TriangleShape::sRegister();
  JPH::PlaneShape::sRegister();
  JPH::SphereShape::sRegister();
  JPH::BoxShape::sRegister();
  JPH::CapsuleShape::sRegister();
  JPH::TaperedCapsuleShape::sRegister();
  JPH::CylinderShape::sRegister();
  JPH::TaperedCylinderShape::sRegister();
  JPH::MeshShape::sRegister();
  JPH::ConvexHullShape::sRegister();
  JPH::HeightFieldShape::sRegister();
  JPH::SoftBodyShape::sRegister();
  JPH::RotatedTranslatedShape::sRegister();
  JPH::OffsetCenterOfMassShape::sRegister();
  JPH::ScaledShape::sRegister();
  JPH::EmptyShape::sRegister();
  local_188 = JPH::GetRTTIOfType((SkeletalAnimation *)0x0);
  local_180 = JPH::GetRTTIOfType((Skeleton *)0x0);
  local_178 = JPH::GetRTTIOfType((CompoundShapeSettings *)0x0);
  local_170 = JPH::GetRTTIOfType((StaticCompoundShapeSettings *)0x0);
  local_168 = JPH::GetRTTIOfType((MutableCompoundShapeSettings *)0x0);
  local_160 = JPH::GetRTTIOfType((TriangleShapeSettings *)0x0);
  local_158 = JPH::GetRTTIOfType((PlaneShapeSettings *)0x0);
  local_150 = JPH::GetRTTIOfType((SphereShapeSettings *)0x0);
  local_148 = JPH::GetRTTIOfType((BoxShapeSettings *)0x0);
  local_140 = JPH::GetRTTIOfType((CapsuleShapeSettings *)0x0);
  local_138 = JPH::GetRTTIOfType((TaperedCapsuleShapeSettings *)0x0);
  local_130 = JPH::GetRTTIOfType((CylinderShapeSettings *)0x0);
  local_128 = JPH::GetRTTIOfType((TaperedCylinderShapeSettings *)0x0);
  local_120 = JPH::GetRTTIOfType((ScaledShapeSettings *)0x0);
  local_118 = JPH::GetRTTIOfType((MeshShapeSettings *)0x0);
  local_110 = JPH::GetRTTIOfType((ConvexHullShapeSettings *)0x0);
  local_108 = JPH::GetRTTIOfType((HeightFieldShapeSettings *)0x0);
  local_100 = JPH::GetRTTIOfType((RotatedTranslatedShapeSettings *)0x0);
  local_f8 = JPH::GetRTTIOfType((OffsetCenterOfMassShapeSettings *)0x0);
  local_f0 = JPH::GetRTTIOfType((EmptyShapeSettings *)0x0);
  local_e8 = JPH::GetRTTIOfType((RagdollSettings *)0x0);
  local_e0 = JPH::GetRTTIOfType((PointConstraintSettings *)0x0);
  local_d8 = JPH::GetRTTIOfType((SixDOFConstraintSettings *)0x0);
  local_d0 = JPH::GetRTTIOfType((SliderConstraintSettings *)0x0);
  local_c8 = JPH::GetRTTIOfType((SwingTwistConstraintSettings *)0x0);
  local_c0 = JPH::GetRTTIOfType((DistanceConstraintSettings *)0x0);
  local_b8 = JPH::GetRTTIOfType((HingeConstraintSettings *)0x0);
  local_b0 = JPH::GetRTTIOfType((FixedConstraintSettings *)0x0);
  local_a8 = JPH::GetRTTIOfType((ConeConstraintSettings *)0x0);
  local_a0 = JPH::GetRTTIOfType((PathConstraintSettings *)0x0);
  local_98 = JPH::GetRTTIOfType((VehicleConstraintSettings *)0x0);
  local_90 = JPH::GetRTTIOfType((WheeledVehicleControllerSettings *)0x0);
  local_88 = JPH::GetRTTIOfType((PathConstraintPath *)0x0);
  local_80 = JPH::GetRTTIOfType((PathConstraintPathHermite *)0x0);
  local_78 = JPH::GetRTTIOfType((RackAndPinionConstraintSettings *)0x0);
  local_70 = JPH::GetRTTIOfType((GearConstraintSettings *)0x0);
  local_68 = JPH::GetRTTIOfType((PulleyConstraintSettings *)0x0);
  local_60 = JPH::GetRTTIOfType((MotorSettings *)0x0);
  local_58 = JPH::GetRTTIOfType((PhysicsScene *)0x0);
  local_50 = JPH::GetRTTIOfType((PhysicsMaterial *)0x0);
  local_48 = JPH::GetRTTIOfType((PhysicsMaterialSimple *)0x0);
  local_40 = JPH::GetRTTIOfType((GroupFilter *)0x0);
  local_38 = JPH::GetRTTIOfType((GroupFilterTable *)0x0);
  local_30 = JPH::GetRTTIOfType((BodyCreationSettings *)0x0);
  local_28 = JPH::GetRTTIOfType((SoftBodyCreationSettings *)0x0);
  JPH::Factory::Register(Factory::sInstance,(uint)&local_188);
  if (PhysicsMaterial::sDefault == (long *)0x0) {
    plVar4 = (long *)(*Allocate)(0x38);
    uVar3 = (undefined4)Color::sGrey;
    *(undefined4 *)(plVar4 + 1) = 0;
    *(undefined4 *)(plVar4 + 4) = 0x61666544;
    *(undefined4 *)((long)plVar4 + 0x23) = 0x746c7561;
    plVar2 = PhysicsMaterial::sDefault;
    *plVar4 = (long)abort;
    plVar4[2] = (long)(plVar4 + 4);
    plVar4[3] = 7;
    *(undefined1 *)((long)plVar4 + 0x27) = 0;
    *(undefined4 *)(plVar4 + 6) = uVar3;
    if (plVar4 != plVar2) {
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar1 = plVar2 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          if (*(code **)(*plVar2 + 0x18) == PhysicsMaterial::~PhysicsMaterial) {
            (*Free)();
          }
          else {
            (**(code **)(*plVar2 + 0x18))();
          }
        }
      }
      LOCK();
      PhysicsMaterial::sDefault = plVar4;
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::UnregisterTypes() */

void JPH::UnregisterTypes(void)

{
  long *plVar1;
  long *plVar2;
  
  if (Factory::sInstance != 0) {
    JPH::Factory::Clear();
  }
  plVar2 = PhysicsMaterial::sDefault;
  if (PhysicsMaterial::sDefault != (long *)0x0) {
    LOCK();
    plVar1 = PhysicsMaterial::sDefault + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      if (*(code **)(*plVar2 + 0x18) == PhysicsMaterial::~PhysicsMaterial) {
        (*Free)();
      }
      else {
        (**(code **)(*plVar2 + 0x18))();
      }
    }
    PhysicsMaterial::sDefault = (long *)0x0;
  }
  return;
}



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
                    /* WARNING: Could not recover jumptable at 0x00100594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)();
  return;
}



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
  return;
}



/* JPH::RegisterTypesInternal(unsigned long) [clone .cold] */

void JPH::RegisterTypesInternal(ulong param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* JPH::VerifyJoltVersionIDInternal(unsigned long) */

void JPH::_GLOBAL__sub_I_VerifyJoltVersionIDInternal(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC14;
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


