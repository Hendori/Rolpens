
/* JoltMotionFilter3D::ShouldCollide(JPH::BodyID const&) const */

undefined8 __thiscall JoltMotionFilter3D::ShouldCollide(JoltMotionFilter3D *this,BodyID *param_1)

{
  return CONCAT71((int7)((ulong)*(long *)(this + 0x28) >> 8),
                  *(int *)(*(long *)(this + 0x28) + 0x30) != *(int *)param_1);
}



/* JoltMotionFilter3D::ShouldCollide(JPH::Shape const*, JPH::SubShapeID const&) const */

undefined8 JoltMotionFilter3D::ShouldCollide(Shape *param_1,SubShapeID *param_2)

{
  return 1;
}



/* JoltMotionFilter3D::ShouldCollide(unsigned short) const */

undefined4 __thiscall JoltMotionFilter3D::ShouldCollide(JoltMotionFilter3D *this,ushort param_1)

{
  uint uVar1;
  long in_FS_OFFSET;
  undefined1 local_19;
  uint local_18 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_19 = 0;
  local_18[0] = 0;
  local_18[1] = 0;
  JoltSpace3D::map_from_object_layer
            ((ushort)*(undefined8 *)(this + 0x30),(BroadPhaseLayer *)(ulong)param_1,
             (uint *)&local_19,local_18);
  uVar1 = *(uint *)(*(long *)(this + 0x28) + 0x38) & local_18[0];
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT31((int3)(uVar1 >> 8),uVar1 != 0);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltMotionFilter3D::ShouldCollide(JPH::Shape const*, JPH::SubShapeID const&, JPH::Shape const*,
   JPH::SubShapeID const&) const */

undefined1  [16]
JoltMotionFilter3D::ShouldCollide
          (Shape *param_1,SubShapeID *param_2,Shape *param_3,SubShapeID *param_4)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  uVar1 = (ulong)(byte)param_1[0x48];
  if (param_1[0x48] == (Shape)0x0) {
    param_3 = *(Shape **)(param_2 + 0x1080);
    uVar1 = 1;
    if (param_3[0x19] == (Shape)0x17) {
      auVar3._1_7_ = 0;
      auVar3[0] = param_3[0x3c];
      auVar3._8_8_ = param_3;
      return auVar3;
    }
  }
  auVar2._8_8_ = param_3;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* JoltMotionFilter3D::ShouldCollideLocked(JPH::Body const&) const */

undefined1 __thiscall
JoltMotionFilter3D::ShouldCollideLocked(JoltMotionFilter3D *this,Body *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
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
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 uVar20;
  ulong uVar21;
  int iVar22;
  long lVar23;
  uint uVar24;
  ulong uVar25;
  uint uVar26;
  ulong uVar27;
  long in_FS_OFFSET;
  code *local_88 [8];
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar20 = 0;
  if (param_1[0x76] != (Body)0x1) {
    plVar1 = *(long **)(this + 0x40);
    lVar2 = *(long *)(*(long *)(param_1 + 0x50) + 0x20);
    if ((*plVar1 != 0) && (*(int *)((long)plVar1 + 0x24) != 0)) {
      uVar25 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(plVar1 + 4) * 4));
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(plVar1 + 4) * 8);
      uVar21 = lVar2 * 0x3ffff - 1;
      uVar21 = (uVar21 ^ uVar21 >> 0x1f) * 0x15;
      uVar21 = (uVar21 ^ uVar21 >> 0xb) * 0x41;
      uVar21 = uVar21 >> 0x16 ^ uVar21;
      uVar27 = uVar21 & 0xffffffff;
      if ((int)uVar21 == 0) {
        uVar27 = 1;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar27 * lVar3;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar25;
      lVar23 = SUB168(auVar4 * auVar12,8);
      uVar24 = *(uint *)(plVar1[3] + lVar23 * 4);
      iVar22 = SUB164(auVar4 * auVar12,8);
      if (uVar24 != 0) {
        uVar26 = 0;
        do {
          if ((uVar24 == (uint)uVar27) &&
             (lVar2 == *(long *)(*plVar1 + (ulong)*(uint *)(plVar1[1] + lVar23 * 4) * 8))) {
            uVar20 = 0;
            goto LAB_00100240;
          }
          uVar26 = uVar26 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)(iVar22 + 1) * lVar3;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = uVar25;
          lVar23 = SUB168(auVar5 * auVar13,8);
          uVar24 = *(uint *)(plVar1[3] + lVar23 * 4);
          iVar22 = SUB164(auVar5 * auVar13,8);
        } while ((uVar24 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar24 * lVar3, auVar14._8_8_ = 0,
                auVar14._0_8_ = uVar25, auVar7._8_8_ = 0,
                auVar7._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                 (ulong)*(uint *)(plVar1 + 4) * 4) + iVar22) -
                                      SUB164(auVar6 * auVar14,8)) * lVar3, auVar15._8_8_ = 0,
                auVar15._0_8_ = uVar25, uVar26 <= SUB164(auVar7 * auVar15,8)));
      }
    }
    plVar1 = *(long **)(this + 0x38);
    lVar2 = *(long *)(*(long *)(param_1 + 0x50) + 0x18);
    if ((*plVar1 != 0) && (*(int *)((long)plVar1 + 0x24) != 0)) {
      uVar25 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(plVar1 + 4) * 4));
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(plVar1 + 4) * 8);
      uVar21 = lVar2 * 0x3ffff - 1;
      uVar21 = (uVar21 ^ uVar21 >> 0x1f) * 0x15;
      uVar21 = (uVar21 ^ uVar21 >> 0xb) * 0x41;
      uVar21 = uVar21 >> 0x16 ^ uVar21;
      uVar27 = uVar21 & 0xffffffff;
      if ((int)uVar21 == 0) {
        uVar27 = 1;
      }
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar27 * lVar3;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar25;
      lVar23 = SUB168(auVar8 * auVar16,8);
      uVar24 = *(uint *)(plVar1[3] + lVar23 * 4);
      iVar22 = SUB164(auVar8 * auVar16,8);
      if (uVar24 != 0) {
        uVar26 = 0;
        do {
          if ((uVar24 == (uint)uVar27) &&
             (lVar2 == *(long *)(*plVar1 + (ulong)*(uint *)(plVar1[1] + lVar23 * 4) * 8))) {
            uVar20 = 0;
            goto LAB_00100240;
          }
          uVar26 = uVar26 + 1;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)(iVar22 + 1) * lVar3;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar25;
          lVar23 = SUB168(auVar9 * auVar17,8);
          uVar24 = *(uint *)(plVar1[3] + lVar23 * 4);
          iVar22 = SUB164(auVar9 * auVar17,8);
        } while ((uVar24 != 0) &&
                (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar24 * lVar3, auVar18._8_8_ = 0,
                auVar18._0_8_ = uVar25, auVar11._8_8_ = 0,
                auVar11._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(plVar1 + 4) * 4) +
                             iVar22) - SUB164(auVar10 * auVar18,8)) * lVar3, auVar19._8_8_ = 0,
                auVar19._0_8_ = uVar25, uVar26 <= SUB164(auVar11 * auVar19,8)));
      }
    }
    JoltSpace3D::read_body((JoltObject3D *)local_88);
    plVar1 = *(long **)(local_48 + 0x58);
    if (plVar1 == (long *)0x0) {
      plVar1 = *(long **)(param_1 + 0x58);
      if (plVar1 == (long *)0x0) {
        uVar20 = 1;
      }
      else {
        uVar20 = (**(code **)(*plVar1 + 0x20))(plVar1,param_1 + 0x58,local_48 + 0x58);
      }
    }
    else {
      uVar20 = (**(code **)(*plVar1 + 0x20))(plVar1,local_48 + 0x58,param_1 + 0x58);
    }
    JoltBodyAccessor3D::release();
    local_88[0] = Variant::Variant;
    JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D *)local_88);
  }
LAB_00100240:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar20;
}



/* non-virtual thunk to JoltMotionFilter3D::ShouldCollideLocked(JPH::Body const&) const */

void __thiscall JoltMotionFilter3D::ShouldCollideLocked(JoltMotionFilter3D *this,Body *param_1)

{
  ShouldCollideLocked(this + -0x10,param_1);
  return;
}



/* non-virtual thunk to JoltMotionFilter3D::ShouldCollide(JPH::Shape const*, JPH::SubShapeID const&)
   const */

undefined8 __thiscall
JoltMotionFilter3D::ShouldCollide(JoltMotionFilter3D *this,Shape *param_1,SubShapeID *param_2)

{
  return 1;
}



/* non-virtual thunk to JoltMotionFilter3D::ShouldCollide(JPH::BodyID const&) const */

undefined8 __thiscall JoltMotionFilter3D::ShouldCollide(JoltMotionFilter3D *this,BodyID *param_1)

{
  return CONCAT71((int7)((ulong)*(long *)(this + 0x18) >> 8),
                  *(int *)(*(long *)(this + 0x18) + 0x30) != *(int *)param_1);
}



/* non-virtual thunk to JoltMotionFilter3D::ShouldCollide(JPH::Shape const*, JPH::SubShapeID const&,
   JPH::Shape const*, JPH::SubShapeID const&) const */

undefined1  [16] __thiscall
JoltMotionFilter3D::ShouldCollide
          (JoltMotionFilter3D *this,Shape *param_1,SubShapeID *param_2,Shape *param_3,
          SubShapeID *param_4)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  uVar1 = (ulong)(byte)this[0x30];
  if (this[0x30] == (JoltMotionFilter3D)0x0) {
    param_2 = *(SubShapeID **)(param_1 + 0x1080);
    uVar1 = 1;
    if (param_2[0x19] == (SubShapeID)0x17) {
      auVar3._1_7_ = 0;
      auVar3[0] = param_2[0x3c];
      auVar3._8_8_ = param_2;
      return auVar3;
    }
  }
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* non-virtual thunk to JoltMotionFilter3D::ShouldCollide(unsigned short) const */

undefined4 __thiscall JoltMotionFilter3D::ShouldCollide(JoltMotionFilter3D *this,ushort param_1)

{
  uint uVar1;
  long in_FS_OFFSET;
  undefined1 local_19;
  uint local_18 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_19 = 0;
  local_18[0] = 0;
  local_18[1] = 0;
  JoltSpace3D::map_from_object_layer
            ((ushort)*(undefined8 *)(this + 0x28),(BroadPhaseLayer *)(ulong)param_1,
             (uint *)&local_19,local_18);
  uVar1 = *(uint *)(*(long *)(this + 0x20) + 0x38) & local_18[0];
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT31((int3)(uVar1 >> 8),uVar1 != 0);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltMotionFilter3D::JoltMotionFilter3D(JoltBody3D const&, HashSet<RID, HashMapHasherDefault,
   HashMapComparatorDefault<RID> > const&, HashSet<ObjectID, HashMapHasherDefault,
   HashMapComparatorDefault<ObjectID> > const&, bool) */

void __thiscall
JoltMotionFilter3D::JoltMotionFilter3D
          (JoltMotionFilter3D *this,JoltBody3D *param_1,HashSet *param_2,HashSet *param_3,
          bool param_4)

{
  undefined8 uVar1;
  
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(JoltBody3D **)(this + 0x28) = param_1;
  *(HashSet **)(this + 0x38) = param_2;
  *(undefined ***)this = &PTR__JoltMotionFilter3D_00100e90;
  *(undefined ***)(this + 8) = &PTR__JoltMotionFilter3D_00100ee0;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(HashSet **)(this + 0x40) = param_3;
  this[0x48] = (JoltMotionFilter3D)param_4;
  *(undefined ***)(this + 0x10) = &PTR__JoltMotionFilter3D_00100f08;
  *(undefined ***)(this + 0x18) = &PTR__JoltMotionFilter3D_00100f38;
  return;
}



/* JoltMotionFilter3D::ShouldCollide(JPH::BroadPhaseLayer) const */

undefined8 __thiscall JoltMotionFilter3D::ShouldCollide(undefined8 param_1,byte param_2)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = 1;
  if (2 < param_2) {
    if (1 < (byte)(param_2 - 3)) {
      local_40 = 0;
      local_30 = 0x4e;
      local_38 = "Unhandled broad phase layer: \'%d\'. This should not happen. Please report this.";
      String::parse_latin1((StrRange *)&local_40);
      vformat<unsigned_char>((String_conflict *)&local_38,(uchar)(StrRange *)&local_40);
      _err_print_error("ShouldCollide","modules/jolt_physics/spaces/jolt_motion_filter_3d.cpp",0x40,
                       "Method/function failed. Returning: false",(String_conflict *)&local_38,0,0);
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
          uVar4 = 0;
          goto LAB_001005b2;
        }
      }
    }
    uVar4 = 0;
  }
LAB_001005b2:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltMotionFilter3D::~JoltMotionFilter3D() */

void __thiscall JoltMotionFilter3D::~JoltMotionFilter3D(JoltMotionFilter3D *this)

{
  return;
}



/* non-virtual thunk to JoltMotionFilter3D::~JoltMotionFilter3D() */

void __thiscall JoltMotionFilter3D::~JoltMotionFilter3D(JoltMotionFilter3D *this)

{
  return;
}



/* non-virtual thunk to JoltMotionFilter3D::~JoltMotionFilter3D() */

void __thiscall JoltMotionFilter3D::~JoltMotionFilter3D(JoltMotionFilter3D *this)

{
  return;
}



/* non-virtual thunk to JoltMotionFilter3D::~JoltMotionFilter3D() */

void __thiscall JoltMotionFilter3D::~JoltMotionFilter3D(JoltMotionFilter3D *this)

{
  return;
}



/* JoltMotionFilter3D::~JoltMotionFilter3D() */

void __thiscall JoltMotionFilter3D::~JoltMotionFilter3D(JoltMotionFilter3D *this)

{
  operator_delete(this,0x50);
  return;
}



/* non-virtual thunk to JoltMotionFilter3D::~JoltMotionFilter3D() */

void __thiscall JoltMotionFilter3D::~JoltMotionFilter3D(JoltMotionFilter3D *this)

{
  operator_delete(this + -0x10,0x50);
  return;
}



/* non-virtual thunk to JoltMotionFilter3D::~JoltMotionFilter3D() */

void __thiscall JoltMotionFilter3D::~JoltMotionFilter3D(JoltMotionFilter3D *this)

{
  operator_delete(this + -8,0x50);
  return;
}



/* non-virtual thunk to JoltMotionFilter3D::~JoltMotionFilter3D() */

void __thiscall JoltMotionFilter3D::~JoltMotionFilter3D(JoltMotionFilter3D *this)

{
  operator_delete(this + -0x18,0x50);
  return;
}



/* WARNING: Removing unreachable block (ram,0x001008e8) */
/* WARNING: Removing unreachable block (ram,0x00100a18) */
/* WARNING: Removing unreachable block (ram,0x00100be0) */
/* WARNING: Removing unreachable block (ram,0x00100a24) */
/* WARNING: Removing unreachable block (ram,0x00100a2e) */
/* WARNING: Removing unreachable block (ram,0x00100bc0) */
/* WARNING: Removing unreachable block (ram,0x00100a3a) */
/* WARNING: Removing unreachable block (ram,0x00100a44) */
/* WARNING: Removing unreachable block (ram,0x00100ba0) */
/* WARNING: Removing unreachable block (ram,0x00100a50) */
/* WARNING: Removing unreachable block (ram,0x00100a5a) */
/* WARNING: Removing unreachable block (ram,0x00100b80) */
/* WARNING: Removing unreachable block (ram,0x00100a66) */
/* WARNING: Removing unreachable block (ram,0x00100a70) */
/* WARNING: Removing unreachable block (ram,0x00100b60) */
/* WARNING: Removing unreachable block (ram,0x00100a7c) */
/* WARNING: Removing unreachable block (ram,0x00100a86) */
/* WARNING: Removing unreachable block (ram,0x00100b40) */
/* WARNING: Removing unreachable block (ram,0x00100a92) */
/* WARNING: Removing unreachable block (ram,0x00100a9c) */
/* WARNING: Removing unreachable block (ram,0x00100b20) */
/* WARNING: Removing unreachable block (ram,0x00100aa4) */
/* WARNING: Removing unreachable block (ram,0x00100aba) */
/* WARNING: Removing unreachable block (ram,0x00100ac6) */
/* String vformat<unsigned char>(String const&, unsigned char const) */

String_conflict * vformat<unsigned_char>(String_conflict *param_1,uchar param_2)

{
  char cVar1;
  Variant *this;
  uchar in_DL;
  undefined7 in_register_00000031;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,in_DL);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,(bool *)CONCAT71(in_register_00000031,param_2));
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



/* JoltMotionFilter3D::JoltMotionFilter3D(JoltBody3D const&, HashSet<RID, HashMapHasherDefault,
   HashMapComparatorDefault<RID> > const&, HashSet<ObjectID, HashMapHasherDefault,
   HashMapComparatorDefault<ObjectID> > const&, bool) */

void JoltMotionFilter3D::_GLOBAL__sub_I_JoltMotionFilter3D(void)

{
  if (JPH::DVec3::cTrue == '\0') {
    JPH::DVec3::cTrue = '\x01';
    JPH::DVec3::cTrue = _LC10;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JoltMotionFilter3D::~JoltMotionFilter3D() */

void __thiscall JoltMotionFilter3D::~JoltMotionFilter3D(JoltMotionFilter3D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


