
/* JoltQueryFilter3D::ShouldCollide(JPH::BodyID const&) const */

undefined8 JoltQueryFilter3D::ShouldCollide(BodyID *param_1)

{
  return 1;
}



/* JoltQueryFilter3D::ShouldCollide(unsigned short) const */

undefined4 __thiscall JoltQueryFilter3D::ShouldCollide(JoltQueryFilter3D *this,ushort param_1)

{
  long in_FS_OFFSET;
  undefined1 local_19;
  uint local_18 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_19 = 0;
  local_18[0] = 0;
  local_18[1] = 0;
  JoltSpace3D::map_from_object_layer
            ((ushort)*(undefined8 *)(this + 0x18),(BroadPhaseLayer *)(ulong)param_1,
             (uint *)&local_19,local_18);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT31((int3)((*(uint *)(this + 0x28) & local_18[0]) >> 8),
                    (*(uint *)(this + 0x28) & local_18[0]) != 0);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltQueryFilter3D::ShouldCollideLocked(JPH::Body const&) const */

undefined1 __thiscall JoltQueryFilter3D::ShouldCollideLocked(JoltQueryFilter3D *this,Body *param_1)

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
  ulong uVar12;
  undefined1 uVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  
  if ((this[0x2e] != (JoltQueryFilter3D)0x0) &&
     (*(char *)(*(long *)(param_1 + 0x50) + 0x3d) == '\0')) {
    return 0;
  }
  uVar13 = 1;
  plVar1 = *(long **)(this + 0x20);
  if ((*plVar1 != 0) && (*(int *)((long)plVar1 + 0x24) != 0)) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x50) + 0x18);
    uVar16 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(plVar1 + 4) * 4));
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(plVar1 + 4) * 8);
    uVar12 = lVar2 * 0x3ffff - 1;
    uVar12 = (uVar12 ^ uVar12 >> 0x1f) * 0x15;
    uVar12 = (uVar12 ^ uVar12 >> 0xb) * 0x41;
    uVar12 = uVar12 >> 0x16 ^ uVar12;
    uVar18 = uVar12 & 0xffffffff;
    if ((int)uVar12 == 0) {
      uVar18 = 1;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar18 * lVar3;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar16;
    lVar15 = SUB168(auVar4 * auVar8,8);
    uVar19 = *(uint *)(plVar1[3] + lVar15 * 4);
    iVar14 = SUB164(auVar4 * auVar8,8);
    if (uVar19 != 0) {
      uVar17 = 0;
      while (((uint)uVar18 != uVar19 ||
             (lVar2 != *(long *)(*plVar1 + (ulong)*(uint *)(plVar1[1] + lVar15 * 4) * 8)))) {
        uVar17 = uVar17 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)(iVar14 + 1) * lVar3;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar16;
        lVar15 = SUB168(auVar5 * auVar9,8);
        uVar19 = *(uint *)(plVar1[3] + lVar15 * 4);
        iVar14 = SUB164(auVar5 * auVar9,8);
        if ((uVar19 == 0) ||
           (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar19 * lVar3, auVar10._8_8_ = 0,
           auVar10._0_8_ = uVar16, auVar7._8_8_ = 0,
           auVar7._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                            (ulong)*(uint *)(plVar1 + 4) * 4) + iVar14) -
                                 SUB164(auVar6 * auVar10,8)) * lVar3, auVar11._8_8_ = 0,
           auVar11._0_8_ = uVar16, SUB164(auVar7 * auVar11,8) < uVar17)) {
          return 1;
        }
      }
      uVar13 = 0;
    }
  }
  return uVar13;
}



/* non-virtual thunk to JoltQueryFilter3D::ShouldCollideLocked(JPH::Body const&) const */

void __thiscall JoltQueryFilter3D::ShouldCollideLocked(JoltQueryFilter3D *this,Body *param_1)

{
  ShouldCollideLocked(this + -0x10,param_1);
  return;
}



/* non-virtual thunk to JoltQueryFilter3D::ShouldCollide(JPH::BodyID const&) const */

undefined8 __thiscall JoltQueryFilter3D::ShouldCollide(JoltQueryFilter3D *this,BodyID *param_1)

{
  return 1;
}



/* non-virtual thunk to JoltQueryFilter3D::ShouldCollide(unsigned short) const */

undefined4 __thiscall JoltQueryFilter3D::ShouldCollide(JoltQueryFilter3D *this,ushort param_1)

{
  long in_FS_OFFSET;
  undefined1 local_19;
  uint local_18 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_19 = 0;
  local_18[0] = 0;
  local_18[1] = 0;
  JoltSpace3D::map_from_object_layer
            ((ushort)*(undefined8 *)(this + 0x10),(BroadPhaseLayer *)(ulong)param_1,
             (uint *)&local_19,local_18);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT31((int3)((*(uint *)(this + 0x20) & local_18[0]) >> 8),
                    (*(uint *)(this + 0x20) & local_18[0]) != 0);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltQueryFilter3D::JoltQueryFilter3D(JoltPhysicsDirectSpaceState3D const&, unsigned int, bool,
   bool, HashSet<RID, HashMapHasherDefault, HashMapComparatorDefault<RID> > const&, bool) */

void __thiscall
JoltQueryFilter3D::JoltQueryFilter3D
          (JoltQueryFilter3D *this,JoltPhysicsDirectSpaceState3D *param_1,uint param_2,bool param_3,
          bool param_4,HashSet *param_5,bool param_6)

{
  undefined8 uVar1;
  
  *(uint *)(this + 0x28) = param_2;
  this[0x2c] = (JoltQueryFilter3D)param_3;
  *(undefined ***)(this + 0x10) = &PTR__JoltQueryFilter3D_00100c08;
  this[0x2d] = (JoltQueryFilter3D)param_4;
  *(undefined ***)this = &PTR__JoltQueryFilter3D_00100ba0;
  *(undefined ***)(this + 8) = &PTR__JoltQueryFilter3D_00100be0;
  uVar1 = *(undefined8 *)(param_1 + 0x178);
  this[0x2e] = (JoltQueryFilter3D)param_6;
  *(undefined8 *)(this + 0x18) = uVar1;
  *(HashSet **)(this + 0x20) = param_5;
  return;
}



/* JoltQueryFilter3D::ShouldCollide(JPH::BroadPhaseLayer) const */

JoltQueryFilter3D __thiscall JoltQueryFilter3D::ShouldCollide(JoltQueryFilter3D *this,byte param_2)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  JoltQueryFilter3D JVar4;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < 3) {
    JVar4 = this[0x2c];
  }
  else if ((byte)(param_2 - 3) < 2) {
    JVar4 = this[0x2d];
  }
  else {
    local_40 = 0;
    local_30 = 0x4e;
    local_38 = "Unhandled broad phase layer: \'%d\'. This should not happen. Please report this.";
    String::parse_latin1((StrRange *)&local_40);
    vformat<unsigned_char>((String_conflict *)&local_38,(uchar)(StrRange *)&local_40);
    _err_print_error("ShouldCollide","modules/jolt_physics/spaces/jolt_query_filter_3d.cpp",0x3d,
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
        JVar4 = (JoltQueryFilter3D)0x0;
        goto LAB_00100323;
      }
    }
    JVar4 = (JoltQueryFilter3D)0x0;
  }
LAB_00100323:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return JVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltQueryFilter3D::~JoltQueryFilter3D() */

void __thiscall JoltQueryFilter3D::~JoltQueryFilter3D(JoltQueryFilter3D *this)

{
  return;
}



/* non-virtual thunk to JoltQueryFilter3D::~JoltQueryFilter3D() */

void __thiscall JoltQueryFilter3D::~JoltQueryFilter3D(JoltQueryFilter3D *this)

{
  return;
}



/* non-virtual thunk to JoltQueryFilter3D::~JoltQueryFilter3D() */

void __thiscall JoltQueryFilter3D::~JoltQueryFilter3D(JoltQueryFilter3D *this)

{
  return;
}



/* JoltQueryFilter3D::~JoltQueryFilter3D() */

void __thiscall JoltQueryFilter3D::~JoltQueryFilter3D(JoltQueryFilter3D *this)

{
  operator_delete(this,0x30);
  return;
}



/* non-virtual thunk to JoltQueryFilter3D::~JoltQueryFilter3D() */

void __thiscall JoltQueryFilter3D::~JoltQueryFilter3D(JoltQueryFilter3D *this)

{
  operator_delete(this + -8,0x30);
  return;
}



/* non-virtual thunk to JoltQueryFilter3D::~JoltQueryFilter3D() */

void __thiscall JoltQueryFilter3D::~JoltQueryFilter3D(JoltQueryFilter3D *this)

{
  operator_delete(this + -0x10,0x30);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00100638) */
/* WARNING: Removing unreachable block (ram,0x00100768) */
/* WARNING: Removing unreachable block (ram,0x00100930) */
/* WARNING: Removing unreachable block (ram,0x00100774) */
/* WARNING: Removing unreachable block (ram,0x0010077e) */
/* WARNING: Removing unreachable block (ram,0x00100910) */
/* WARNING: Removing unreachable block (ram,0x0010078a) */
/* WARNING: Removing unreachable block (ram,0x00100794) */
/* WARNING: Removing unreachable block (ram,0x001008f0) */
/* WARNING: Removing unreachable block (ram,0x001007a0) */
/* WARNING: Removing unreachable block (ram,0x001007aa) */
/* WARNING: Removing unreachable block (ram,0x001008d0) */
/* WARNING: Removing unreachable block (ram,0x001007b6) */
/* WARNING: Removing unreachable block (ram,0x001007c0) */
/* WARNING: Removing unreachable block (ram,0x001008b0) */
/* WARNING: Removing unreachable block (ram,0x001007cc) */
/* WARNING: Removing unreachable block (ram,0x001007d6) */
/* WARNING: Removing unreachable block (ram,0x00100890) */
/* WARNING: Removing unreachable block (ram,0x001007e2) */
/* WARNING: Removing unreachable block (ram,0x001007ec) */
/* WARNING: Removing unreachable block (ram,0x00100870) */
/* WARNING: Removing unreachable block (ram,0x001007f4) */
/* WARNING: Removing unreachable block (ram,0x0010080a) */
/* WARNING: Removing unreachable block (ram,0x00100816) */
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



/* JoltQueryFilter3D::JoltQueryFilter3D(JoltPhysicsDirectSpaceState3D const&, unsigned int, bool,
   bool, HashSet<RID, HashMapHasherDefault, HashMapComparatorDefault<RID> > const&, bool) */

void JoltQueryFilter3D::_GLOBAL__sub_I_JoltQueryFilter3D(void)

{
  if (JPH::DVec3::cTrue == '\0') {
    JPH::DVec3::cTrue = '\x01';
    JPH::DVec3::cTrue = _LC10;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JoltQueryFilter3D::~JoltQueryFilter3D() */

void __thiscall JoltQueryFilter3D::~JoltQueryFilter3D(JoltQueryFilter3D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


