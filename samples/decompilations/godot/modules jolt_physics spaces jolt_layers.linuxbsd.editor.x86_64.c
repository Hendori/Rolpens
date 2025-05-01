
/* JoltLayers::GetNumBroadPhaseLayers() const */

undefined8 JoltLayers::GetNumBroadPhaseLayers(void)

{
  return 5;
}



/* JoltLayers::GetBroadPhaseLayer(unsigned short) const */

undefined4 __thiscall JoltLayers::GetBroadPhaseLayer(JoltLayers *this,ushort param_1)

{
  undefined2 in_register_00000032;
  
  return CONCAT22(in_register_00000032,param_1 >> 0xd);
}



/* JoltLayers::~JoltLayers() */

void __thiscall JoltLayers::~JoltLayers(JoltLayers *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  *(undefined ***)(this + 0x10) = &PTR__JoltLayers_00101850;
  *(undefined ***)this = &PTR__JoltLayers_001017e8;
  *(undefined ***)(this + 8) = &PTR__JoltLayers_00101828;
  pvVar3 = *(void **)(this + 0x30);
  if (pvVar3 == (void *)0x0) {
LAB_001000c7:
    pvVar3 = *(void **)(this + 0x20);
  }
  else {
    if (*(int *)(this + 0x54) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x50) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x54) = 0;
        *(undefined1 (*) [16])(this + 0x40) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x38) + lVar2) != 0) {
            *(int *)(*(long *)(this + 0x38) + lVar2) = 0;
            Memory::free_static(*(void **)((long)pvVar3 + lVar2 * 2),false);
            pvVar3 = *(void **)(this + 0x30);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x54) = 0;
        *(undefined1 (*) [16])(this + 0x40) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_001000c7;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x38),false);
    pvVar3 = *(void **)(this + 0x20);
  }
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x18) != 0) {
      *(undefined4 *)(this + 0x18) = 0;
    }
    Memory::free_static(pvVar3,false);
    return;
  }
  return;
}



/* non-virtual thunk to JoltLayers::~JoltLayers() */

void __thiscall JoltLayers::~JoltLayers(JoltLayers *this)

{
  ~JoltLayers(this + -8);
  return;
}



/* non-virtual thunk to JoltLayers::~JoltLayers() */

void __thiscall JoltLayers::~JoltLayers(JoltLayers *this)

{
  ~JoltLayers(this + -0x10);
  return;
}



/* JoltLayers::~JoltLayers() */

void __thiscall JoltLayers::~JoltLayers(JoltLayers *this)

{
  ~JoltLayers(this);
  operator_delete(this,0x60);
  return;
}



/* JoltLayers::ShouldCollide(unsigned short, JPH::BroadPhaseLayer) const */

undefined4 __thiscall JoltLayers::ShouldCollide(undefined8 param_1,uint param_2,byte param_3)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  
  if (ShouldCollide(unsigned_short,JPH::BroadPhaseLayer)::matrix == '\0') {
    iVar3 = __cxa_guard_acquire(&ShouldCollide(unsigned_short,JPH::BroadPhaseLayer)::matrix);
    if (iVar3 != 0) {
      ShouldCollide(unsigned_short,JPH::BroadPhaseLayer)::matrix._0_2_ = 0x404;
      ShouldCollide(unsigned_short,JPH::BroadPhaseLayer)::matrix._2_1_ = 0x1f;
      ShouldCollide(unsigned_short,JPH::BroadPhaseLayer)::matrix._3_1_ = 0x1c;
      ShouldCollide(unsigned_short,JPH::BroadPhaseLayer)::matrix._4_1_ = 0xc;
      cVar2 = JoltProjectSettings::areas_detect_static_bodies();
      if (cVar2 != '\0') {
        ShouldCollide(unsigned_short,JPH::BroadPhaseLayer)::matrix._0_2_ =
             (ushort)ShouldCollide(unsigned_short,JPH::BroadPhaseLayer)::matrix | 0x1818;
        uVar1 = CONCAT11(ShouldCollide(unsigned_short,JPH::BroadPhaseLayer)::matrix._4_1_,
                         ShouldCollide(unsigned_short,JPH::BroadPhaseLayer)::matrix._3_1_) | 0x303;
        ShouldCollide(unsigned_short,JPH::BroadPhaseLayer)::matrix._3_1_ = (undefined1)uVar1;
        ShouldCollide(unsigned_short,JPH::BroadPhaseLayer)::matrix._4_1_ = (undefined1)(uVar1 >> 8);
      }
      __cxa_guard_release(&ShouldCollide(unsigned_short,JPH::BroadPhaseLayer)::matrix);
    }
  }
  iVar3 = 1 << (param_3 & 0x1f);
  return CONCAT31((int3)((uint)iVar3 >> 8),
                  (*(byte *)((long)&ShouldCollide(unsigned_short,JPH::BroadPhaseLayer)::matrix +
                            (ulong)(param_2 >> 0xd & 7)) & (byte)iVar3) != 0);
}



/* non-virtual thunk to JoltLayers::ShouldCollide(unsigned short, JPH::BroadPhaseLayer) const */

void __thiscall JoltLayers::ShouldCollide(JoltLayers *this)

{
  ShouldCollide(this + -0x10);
  return;
}



/* non-virtual thunk to JoltLayers::~JoltLayers() */

void __thiscall JoltLayers::~JoltLayers(JoltLayers *this)

{
  ~JoltLayers(this + -0x10);
  operator_delete(this + -0x10,0x60);
  return;
}



/* non-virtual thunk to JoltLayers::~JoltLayers() */

void __thiscall JoltLayers::~JoltLayers(JoltLayers *this)

{
  ~JoltLayers(this + -8);
  operator_delete(this + -8,0x60);
  return;
}



/* JoltLayers::ShouldCollide(unsigned short, unsigned short) const */

undefined4 __thiscall JoltLayers::ShouldCollide(JoltLayers *this,ushort param_1,ushort param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar4 = *(uint *)(this + 0x18);
  if ((param_1 & 0x1fff) < uVar4) {
    uVar1 = *(undefined8 *)(*(long *)(this + 0x20) + (ulong)(param_1 & 0x1fff) * 8);
    uVar5 = (ulong)(param_2 & 0x1fff);
    if ((param_2 & 0x1fff) < uVar4) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x20) + uVar5 * 8);
      uVar4 = (uint)uVar1 & (uint)((ulong)uVar2 >> 0x20) |
              (uint)((ulong)uVar1 >> 0x20) & (uint)uVar2;
      return CONCAT31((int3)(uVar4 >> 8),uVar4 != 0);
    }
  }
  else {
    uVar5 = (ulong)(param_1 & 0x1fff);
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xae,uVar5,(ulong)uVar4,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* non-virtual thunk to JoltLayers::ShouldCollide(unsigned short, unsigned short) const */

void __thiscall JoltLayers::ShouldCollide(JoltLayers *this,ushort param_1,ushort param_2)

{
  ShouldCollide(this + -8,param_1,param_2);
  return;
}



/* JoltLayers::from_object_layer(unsigned short, JPH::BroadPhaseLayer&, unsigned int&, unsigned
   int&) const */

void __thiscall
JoltLayers::from_object_layer
          (JoltLayers *this,ushort param_1,BroadPhaseLayer *param_2,uint *param_3,uint *param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  
  *param_2 = (byte)(param_1 >> 0xd);
  if ((param_1 & 0x1fff) < *(uint *)(this + 0x18)) {
    uVar1 = *(undefined8 *)(*(long *)(this + 0x20) + (ulong)(param_1 & 0x1fff) * 8);
    *param_3 = (uint)((ulong)uVar1 >> 0x20);
    *param_4 = (uint)uVar1;
    return;
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xae,(ulong)(param_1 & 0x1fff),
             (ulong)*(uint *)(this + 0x18),"p_index","count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* JoltLayers::_allocate_object_layer(unsigned long) */

uint __thiscall JoltLayers::_allocate_object_layer(JoltLayers *this,ulong param_1)

{
  ushort uVar1;
  code *pcVar2;
  ushort uVar3;
  uint uVar4;
  ushort *puVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  ulong local_30 [2];
  
  uVar1 = *(ushort *)(this + 0x58);
  uVar7 = uVar1 + 1;
  uVar8 = (uint)uVar1;
  *(ushort *)(this + 0x58) = uVar1 + 1;
  uVar4 = *(uint *)(this + 0x18);
  local_30[0] = param_1;
  if (uVar4 <= uVar7) {
    if (uVar7 <= uVar4) goto LAB_001003c6;
    if (*(uint *)(this + 0x1c) < uVar7) {
      uVar3 = uVar1 >> 1 | uVar1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar4 = (ushort)(uVar3 | uVar3 >> 8) + 1;
      *(uint *)(this + 0x1c) = uVar4;
      lVar6 = Memory::realloc_static(*(void **)(this + 0x20),(ulong)uVar4 * 8,false);
      *(long *)(this + 0x20) = lVar6;
      if (lVar6 == 0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
  }
  *(uint *)(this + 0x18) = uVar7;
  uVar4 = uVar7;
LAB_001003c6:
  if (uVar4 <= uVar1) {
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)uVar8,(ulong)uVar4,
               "p_index","count","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  *(ulong *)(*(long *)(this + 0x20) + (ulong)uVar8 * 8) = local_30[0];
  puVar5 = (ushort *)
           HashMap<unsigned_long,unsigned_short,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,unsigned_short>>>
           ::operator[]((HashMap<unsigned_long,unsigned_short,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,unsigned_short>>>
                         *)(this + 0x28),local_30);
  *puVar5 = uVar1;
  return uVar8;
}



/* JoltLayers::JoltLayers() */

void __thiscall JoltLayers::JoltLayers(JoltLayers *this)

{
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined ***)(this + 0x10) = &PTR__JoltLayers_00101850;
  *(undefined8 *)(this + 0x50) = 2;
  *(undefined2 *)(this + 0x58) = 0;
  *(undefined ***)this = &PTR__JoltLayers_001017e8;
  *(undefined ***)(this + 8) = &PTR__JoltLayers_00101828;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x40) = (undefined1  [16])0x0;
  _allocate_object_layer(this,0);
  return;
}



/* JoltLayers::to_object_layer(JPH::BroadPhaseLayer, unsigned int, unsigned int) */

uint __thiscall JoltLayers::to_object_layer(JoltLayers *this,int param_2,long param_3,uint param_4)

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
  char *pcVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long in_FS_OFFSET;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  uVar17 = param_3 << 0x20 | (ulong)param_4;
  lVar2 = *(long *)(this + 0x30);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((lVar2 != 0) && (*(int *)(this + 0x54) != 0)) {
    uVar20 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x50) * 4));
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x50) * 8);
    uVar14 = uVar17 * 0x3ffff - 1;
    uVar14 = (uVar14 ^ uVar14 >> 0x1f) * 0x15;
    uVar14 = (uVar14 ^ uVar14 >> 0xb) * 0x41;
    uVar14 = uVar14 >> 0x16 ^ uVar14;
    uVar19 = uVar14 & 0xffffffff;
    if ((int)uVar14 == 0) {
      uVar19 = 1;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar19 * lVar3;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar20;
    lVar18 = SUB168(auVar4 * auVar8,8);
    uVar13 = *(uint *)(*(long *)(this + 0x38) + lVar18 * 4);
    uVar16 = SUB164(auVar4 * auVar8,8);
    if (uVar13 != 0) {
      uVar15 = 0;
      while ((uVar13 != (uint)uVar19 || (uVar17 != *(ulong *)(*(long *)(lVar2 + lVar18 * 8) + 0x10))
             )) {
        uVar15 = uVar15 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)(uVar16 + 1) * lVar3;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar20;
        lVar18 = SUB168(auVar5 * auVar9,8);
        uVar13 = *(uint *)(*(long *)(this + 0x38) + lVar18 * 4);
        uVar16 = SUB164(auVar5 * auVar9,8);
        if ((uVar13 == 0) ||
           (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar13 * lVar3, auVar10._8_8_ = 0,
           auVar10._0_8_ = uVar20, auVar7._8_8_ = 0,
           auVar7._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                            (ulong)*(uint *)(this + 0x50) * 4) + uVar16) -
                                 SUB164(auVar6 * auVar10,8)) * lVar3, auVar11._8_8_ = 0,
           auVar11._0_8_ = uVar20, SUB164(auVar7 * auVar11,8) < uVar15)) goto LAB_001006c5;
      }
      lVar2 = *(long *)(lVar2 + (ulong)uVar16 * 8);
      if (lVar2 != 0) {
        uVar13 = (uint)*(ushort *)(lVar2 + 0x18);
        goto LAB_00100693;
      }
    }
  }
LAB_001006c5:
  if (*(short *)(this + 0x58) == 0x2000) {
    local_60 = 0;
    local_50 = 0xbc;
    local_58 = 
    "Maximum number of object layers (%d) reached. This means there are %d combinations of collision layers and masks.This should not happen under normal circumstances. Consider reporting this."
    ;
    String::parse_latin1((StrRange *)&local_60);
    vformat<unsigned_short,unsigned_short>
              ((String_conflict *)&local_58,(ushort)(StrRange *)&local_60,0x2000);
    _err_print_error("to_object_layer","modules/jolt_physics/spaces/jolt_layers.cpp",0xd1,
                     "Condition \"next_object_layer == object_layer_count\" is true. Returning: 0",
                     (String_conflict *)&local_58,0,0);
    pcVar12 = local_58;
    if (local_58 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (char *)0x0;
        Memory::free_static(pcVar12 + -0x10,false);
      }
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
    uVar13 = 0;
  }
  else {
    uVar13 = _allocate_object_layer(this,uVar17);
LAB_00100693:
    uVar13 = param_2 << 0xd | uVar13;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar13;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<unsigned long, unsigned short, HashMapHasherDefault, HashMapComparatorDefault<unsigned
   long>, DefaultTypedAllocator<HashMapElement<unsigned long, unsigned short> >
   >::operator[](unsigned long const&) */

undefined1 * __thiscall
HashMap<unsigned_long,unsigned_short,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,unsigned_short>>>
::operator[](HashMap<unsigned_long,unsigned_short,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,unsigned_short>>>
             *this,ulong *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  void *__s;
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
  undefined1 (*pauVar37) [16];
  uint uVar38;
  ulong uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined1 (*pauVar42) [16];
  int iVar43;
  uint uVar44;
  long lVar45;
  long lVar46;
  uint uVar47;
  ulong uVar48;
  undefined8 uVar49;
  uint uVar50;
  uint uVar51;
  ulong uVar52;
  long lVar53;
  uint uVar54;
  ulong uVar55;
  ulong uVar56;
  undefined1 (*pauVar57) [16];
  void *local_70;
  
  local_70 = *(void **)(this + 8);
  uVar56 = (ulong)*(uint *)(this + 0x28);
  uVar40 = *param_1;
  uVar47 = *(uint *)(hash_table_size_primes + uVar56 * 4);
  uVar48 = CONCAT44(0,uVar47);
  if (local_70 == (void *)0x0) {
    uVar40 = uVar48 * 4;
    uVar56 = uVar48 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    local_70 = (void *)Memory::alloc_static(uVar56,false);
    *(void **)(this + 8) = local_70;
    if (uVar47 == 0) {
      iVar43 = *(int *)(this + 0x2c);
      uVar40 = *param_1;
      if (local_70 == (void *)0x0) goto LAB_00100b9b;
    }
    else {
      pvVar4 = *(void **)(this + 0x10);
      if ((pvVar4 < (void *)((long)local_70 + uVar56)) &&
         (local_70 < (void *)((long)pvVar4 + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar40 * 4) = 0;
          *(undefined8 *)((long)local_70 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar48 != uVar40);
        iVar43 = *(int *)(this + 0x2c);
        uVar40 = *param_1;
      }
      else {
        memset(pvVar4,0,uVar40);
        memset(local_70,0,uVar56);
        iVar43 = *(int *)(this + 0x2c);
        uVar40 = *param_1;
      }
    }
    if (iVar43 != 0) {
      uVar56 = (ulong)*(uint *)(this + 0x28);
      lVar53 = *(long *)(this + 0x10);
      goto LAB_00100f43;
    }
  }
  else {
    iVar43 = *(int *)(this + 0x2c);
    if (iVar43 != 0) {
      lVar53 = *(long *)(this + 0x10);
      lVar3 = *(long *)(hash_table_size_primes_inv + uVar56 * 8);
      uVar39 = uVar40 * 0x3ffff - 1;
      uVar39 = (uVar39 ^ uVar39 >> 0x1f) * 0x15;
      uVar39 = (uVar39 ^ uVar39 >> 0xb) * 0x41;
      uVar39 = uVar39 >> 0x16 ^ uVar39;
      uVar55 = uVar39 & 0xffffffff;
      if ((int)uVar39 == 0) {
        uVar55 = 1;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar55 * lVar3;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar48;
      lVar45 = SUB168(auVar5 * auVar21,8);
      uVar44 = *(uint *)(lVar53 + lVar45 * 4);
      uVar54 = SUB164(auVar5 * auVar21,8);
      if (uVar44 != 0) {
        uVar51 = 0;
        do {
          if (((uint)uVar55 == uVar44) &&
             (uVar40 == *(ulong *)(*(long *)((long)local_70 + lVar45 * 8) + 0x10))) {
            return (undefined1 *)(*(long *)((long)local_70 + (ulong)uVar54 * 8) + 0x18);
          }
          uVar51 = uVar51 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar54 + 1) * lVar3;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar48;
          lVar45 = SUB168(auVar6 * auVar22,8);
          uVar44 = *(uint *)(lVar53 + lVar45 * 4);
          uVar54 = SUB164(auVar6 * auVar22,8);
        } while ((uVar44 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar44 * lVar3, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar48, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar54 + uVar47) - SUB164(auVar7 * auVar23,8)) * lVar3,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar48, uVar51 <= SUB164(auVar8 * auVar24,8)));
      }
LAB_00100f43:
      uVar52 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar56 * 4));
      lVar3 = *(long *)(hash_table_size_primes_inv + uVar56 * 8);
      uVar39 = uVar40 * 0x3ffff - 1;
      uVar39 = (uVar39 ^ uVar39 >> 0x1f) * 0x15;
      uVar39 = (uVar39 ^ uVar39 >> 0xb) * 0x41;
      uVar39 = uVar39 >> 0x16 ^ uVar39;
      uVar55 = uVar39 & 0xffffffff;
      if ((int)uVar39 == 0) {
        uVar55 = 1;
      }
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar55 * lVar3;
      auVar33._8_8_ = 0;
      auVar33._0_8_ = uVar52;
      lVar45 = SUB168(auVar17 * auVar33,8);
      uVar47 = *(uint *)(lVar53 + lVar45 * 4);
      uVar44 = SUB164(auVar17 * auVar33,8);
      if (uVar47 != 0) {
        uVar54 = 0;
        do {
          if (((uint)uVar55 == uVar47) &&
             (*(ulong *)(*(long *)((long)local_70 + lVar45 * 8) + 0x10) == uVar40)) {
            pauVar42 = *(undefined1 (**) [16])((long)local_70 + (ulong)uVar44 * 8);
            *(undefined2 *)(pauVar42[1] + 8) = 0;
            goto LAB_00100f24;
          }
          uVar54 = uVar54 + 1;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = (ulong)(uVar44 + 1) * lVar3;
          auVar34._8_8_ = 0;
          auVar34._0_8_ = uVar52;
          lVar45 = SUB168(auVar18 * auVar34,8);
          uVar47 = *(uint *)(lVar53 + lVar45 * 4);
          uVar44 = SUB164(auVar18 * auVar34,8);
        } while ((uVar47 != 0) &&
                (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar47 * lVar3, auVar35._8_8_ = 0,
                auVar35._0_8_ = uVar52, auVar20._8_8_ = 0,
                auVar20._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes + uVar56 * 4) + uVar44) -
                            SUB164(auVar19 * auVar35,8)) * lVar3, auVar36._8_8_ = 0,
                auVar36._0_8_ = uVar52, uVar54 <= SUB164(auVar20 * auVar36,8)));
      }
    }
  }
LAB_00100b9b:
  if ((float)uVar48 * __LC7 < (float)(iVar43 + 1)) {
    uVar47 = *(uint *)(this + 0x28);
    if (uVar47 == 0x1c) {
      pauVar42 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00100f24;
    }
    uVar40 = (ulong)(uVar47 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar44 = *(uint *)(hash_table_size_primes + (ulong)uVar47 * 4);
    if (uVar47 + 1 < 2) {
      uVar40 = 2;
    }
    uVar47 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar48 = (ulong)uVar47;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar4 = *(void **)(this + 0x10);
    uVar40 = uVar48 * 4;
    uVar56 = uVar48 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar56,false);
    *(void **)(this + 8) = __s_00;
    if (uVar47 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar56)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar48 != uVar40);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar56);
      }
    }
    if (uVar44 != 0) {
      uVar40 = 0;
      do {
        uVar47 = *(uint *)((long)pvVar4 + uVar40 * 4);
        if (uVar47 != 0) {
          lVar53 = *(long *)(this + 0x10);
          uVar50 = 0;
          uVar54 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar56 = CONCAT44(0,uVar54);
          lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)uVar47 * lVar3;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar56;
          lVar45 = SUB168(auVar9 * auVar25,8);
          puVar1 = (uint *)(lVar53 + lVar45 * 4);
          iVar43 = SUB164(auVar9 * auVar25,8);
          uVar51 = *puVar1;
          uVar41 = *(undefined8 *)((long)local_70 + uVar40 * 8);
          while (uVar51 != 0) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar51 * lVar3;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar56;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)((uVar54 + iVar43) - SUB164(auVar10 * auVar26,8)) * lVar3;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar56;
            uVar38 = SUB164(auVar11 * auVar27,8);
            uVar49 = uVar41;
            if (uVar38 < uVar50) {
              *puVar1 = uVar47;
              puVar2 = (undefined8 *)((long)__s_00 + lVar45 * 8);
              uVar49 = *puVar2;
              *puVar2 = uVar41;
              uVar47 = uVar51;
              uVar50 = uVar38;
            }
            uVar50 = uVar50 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(iVar43 + 1) * lVar3;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar56;
            lVar45 = SUB168(auVar12 * auVar28,8);
            puVar1 = (uint *)(lVar53 + lVar45 * 4);
            iVar43 = SUB164(auVar12 * auVar28,8);
            uVar41 = uVar49;
            uVar51 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar45 * 8) = uVar41;
          *puVar1 = uVar47;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar40 != uVar44);
      Memory::free_static(local_70,false);
      Memory::free_static(pvVar4,false);
    }
  }
  uVar40 = *param_1;
  pauVar42 = (undefined1 (*) [16])operator_new(0x20,"");
  *(ulong *)pauVar42[1] = uVar40;
  *(undefined2 *)(pauVar42[1] + 8) = 0;
  *pauVar42 = (undefined1  [16])0x0;
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar42;
  }
  else {
    *puVar2 = pauVar42;
    *(undefined8 **)(*pauVar42 + 8) = puVar2;
  }
  lVar53 = *(long *)(this + 0x10);
  *(undefined1 (**) [16])(this + 0x20) = pauVar42;
  uVar40 = *param_1 * 0x3ffff - 1;
  uVar40 = (uVar40 ^ uVar40 >> 0x1f) * 0x15;
  uVar40 = (uVar40 ^ uVar40 >> 0xb) * 0x41;
  uVar40 = uVar40 >> 0x16 ^ uVar40;
  uVar56 = uVar40 & 0xffffffff;
  if ((int)uVar40 == 0) {
    uVar56 = 1;
  }
  uVar51 = 0;
  lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar54 = (uint)uVar56;
  uVar47 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar40 = CONCAT44(0,uVar47);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar56 * lVar3;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar40;
  lVar46 = SUB168(auVar13 * auVar29,8);
  lVar45 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar53 + lVar46 * 4);
  iVar43 = SUB164(auVar13 * auVar29,8);
  uVar44 = *puVar1;
  pauVar37 = pauVar42;
  while (uVar44 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar44 * lVar3;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar40;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar47 + iVar43) - SUB164(auVar14 * auVar30,8)) * lVar3;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar40;
    uVar54 = SUB164(auVar15 * auVar31,8);
    pauVar57 = pauVar37;
    if (uVar54 < uVar51) {
      *puVar1 = (uint)uVar56;
      uVar56 = (ulong)uVar44;
      puVar2 = (undefined8 *)(lVar45 + lVar46 * 8);
      pauVar57 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar37;
      uVar51 = uVar54;
    }
    uVar54 = (uint)uVar56;
    uVar51 = uVar51 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar43 + 1) * lVar3;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar40;
    lVar46 = SUB168(auVar16 * auVar32,8);
    puVar1 = (uint *)(lVar53 + lVar46 * 4);
    iVar43 = SUB164(auVar16 * auVar32,8);
    pauVar37 = pauVar57;
    uVar44 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar45 + lVar46 * 8) = pauVar37;
  *puVar1 = uVar54;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00100f24:
  return pauVar42[1] + 8;
}



/* WARNING: Removing unreachable block (ram,0x00101380) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */
/* WARNING: Removing unreachable block (ram,0x00101629) */
/* WARNING: Removing unreachable block (ram,0x001014bc) */
/* WARNING: Removing unreachable block (ram,0x001014c6) */
/* WARNING: Removing unreachable block (ram,0x0010160b) */
/* WARNING: Removing unreachable block (ram,0x001014d2) */
/* WARNING: Removing unreachable block (ram,0x001014dc) */
/* WARNING: Removing unreachable block (ram,0x001015ed) */
/* WARNING: Removing unreachable block (ram,0x001014e8) */
/* WARNING: Removing unreachable block (ram,0x001014f2) */
/* WARNING: Removing unreachable block (ram,0x001015cf) */
/* WARNING: Removing unreachable block (ram,0x001014fe) */
/* WARNING: Removing unreachable block (ram,0x00101508) */
/* WARNING: Removing unreachable block (ram,0x001015b1) */
/* WARNING: Removing unreachable block (ram,0x00101514) */
/* WARNING: Removing unreachable block (ram,0x0010151e) */
/* WARNING: Removing unreachable block (ram,0x00101593) */
/* WARNING: Removing unreachable block (ram,0x00101526) */
/* WARNING: Removing unreachable block (ram,0x00101530) */
/* WARNING: Removing unreachable block (ram,0x00101578) */
/* WARNING: Removing unreachable block (ram,0x00101538) */
/* WARNING: Removing unreachable block (ram,0x0010154e) */
/* WARNING: Removing unreachable block (ram,0x0010155a) */
/* String vformat<unsigned short, unsigned short>(String const&, unsigned short const, unsigned
   short const) */

String_conflict *
vformat<unsigned_short,unsigned_short>(String_conflict *param_1,ushort param_2,ushort param_3)

{
  Variant *pVVar1;
  Variant *pVVar2;
  ushort in_CX;
  undefined6 in_register_00000032;
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
  Variant::Variant(local_70,in_CX);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,(bool *)CONCAT62(in_register_00000032,param_2));
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



/* JoltLayers::GetNumBroadPhaseLayers() const */

void JoltLayers::_GLOBAL__sub_I_GetNumBroadPhaseLayers(void)

{
  if (JPH::DVec3::cTrue == '\0') {
    JPH::DVec3::cTrue = '\x01';
    JPH::DVec3::cTrue = _LC27;
  }
  return;
}


