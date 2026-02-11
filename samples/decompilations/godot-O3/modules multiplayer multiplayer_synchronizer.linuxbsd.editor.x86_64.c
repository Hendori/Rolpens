
/* MultiplayerSynchronizer::get_visibility_update_mode() const */

undefined4 __thiscall
MultiplayerSynchronizer::get_visibility_update_mode(MultiplayerSynchronizer *this)

{
  return *(undefined4 *)(this + 0x428);
}



/* MultiplayerSynchronizer::get_replication_interval() const */

double __thiscall MultiplayerSynchronizer::get_replication_interval(MultiplayerSynchronizer *this)

{
  return ((double)*(ulong *)(this + 0x418) / _LC0) / _LC0;
}



/* MultiplayerSynchronizer::get_delta_interval() const */

double __thiscall MultiplayerSynchronizer::get_delta_interval(MultiplayerSynchronizer *this)

{
  return ((double)*(ulong *)(this + 0x420) / _LC0) / _LC0;
}



/* MultiplayerSynchronizer::get_root_path() const */

void MultiplayerSynchronizer::get_root_path(void)

{
  long in_RSI;
  NodePath *in_RDI;
  
  NodePath::NodePath(in_RDI,(NodePath *)(in_RSI + 0x410));
  return;
}



/* MultiplayerSynchronizer::set_replication_interval(double) */

void __thiscall
MultiplayerSynchronizer::set_replication_interval(MultiplayerSynchronizer *this,double param_1)

{
  double dVar1;
  
  if (param_1 < 0.0) {
    _err_print_error("set_replication_interval","modules/multiplayer/multiplayer_synchronizer.cpp",
                     0x139,"Condition \"p_interval < 0\" is true.",
                     "Interval must be greater or equal to 0 (where 0 means default)",0,0);
    return;
  }
  dVar1 = param_1 * _LC0 * _LC0;
  if (_LC6 <= dVar1) {
    *(long *)(this + 0x418) = (long)(dVar1 - _LC6);
    *(ulong *)(this + 0x418) = *(ulong *)(this + 0x418) ^ 0x8000000000000000;
    return;
  }
  *(long *)(this + 0x418) = (long)dVar1;
  return;
}



/* MultiplayerSynchronizer::set_delta_interval(double) */

void __thiscall
MultiplayerSynchronizer::set_delta_interval(MultiplayerSynchronizer *this,double param_1)

{
  double dVar1;
  
  if (param_1 < 0.0) {
    _err_print_error("set_delta_interval","modules/multiplayer/multiplayer_synchronizer.cpp",0x142,
                     "Condition \"p_interval < 0\" is true.",
                     "Interval must be greater or equal to 0 (where 0 means default)",0,0);
    return;
  }
  dVar1 = param_1 * _LC0 * _LC0;
  if (_LC6 <= dVar1) {
    *(long *)(this + 0x420) = (long)(dVar1 - _LC6);
    *(ulong *)(this + 0x420) = *(ulong *)(this + 0x420) ^ 0x8000000000000000;
    return;
  }
  *(long *)(this + 0x420) = (long)dVar1;
  return;
}



/* MultiplayerSynchronizer::_update_process() [clone .part.0] */

void __thiscall MultiplayerSynchronizer::_update_process(MultiplayerSynchronizer *this)

{
  long lVar1;
  bool bVar2;
  
  if (((byte)this[0x2fa] & 0x40) == 0) {
    return;
  }
  lVar1 = Node::get_node_or_null((NodePath *)this);
  if (lVar1 != 0) {
    bVar2 = SUB81(this,0);
    Node::set_process_internal(bVar2);
    Node::set_physics_process_internal(bVar2);
    if (*(int *)(this + 0x454) != 0) {
      if (*(int *)(this + 0x428) == 0) {
        Node::set_process_internal(bVar2);
        return;
      }
      if (*(int *)(this + 0x428) == 1) {
        Node::set_physics_process_internal(bVar2);
        return;
      }
    }
  }
  return;
}



/* CowData<Variant const*>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Variant_const*>::_copy_on_write(CowData<Variant_const*> *this)

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



/* MultiplayerSynchronizer::set_visibility_update_mode(MultiplayerSynchronizer::VisibilityUpdateMode)
    */

void __thiscall
MultiplayerSynchronizer::set_visibility_update_mode
          (MultiplayerSynchronizer *this,undefined4 param_2)

{
  long lVar1;
  
  *(undefined4 *)(this + 0x428) = param_2;
  lVar1 = Engine::get_singleton();
  if (*(char *)(lVar1 + 0xc0) == '\0') {
    _update_process(this);
    return;
  }
  return;
}



/* MultiplayerSynchronizer::set_replication_config(Ref<SceneReplicationConfig>) */

void __thiscall
MultiplayerSynchronizer::set_replication_config(MultiplayerSynchronizer *this,long *param_2)

{
  Object *pOVar1;
  Object *pOVar2;
  char cVar3;
  
  pOVar1 = (Object *)*param_2;
  pOVar2 = *(Object **)(this + 0x408);
  if (pOVar1 != pOVar2) {
    *(Object **)(this + 0x408) = pOVar1;
    if (pOVar1 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(this + 0x408) = 0;
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



/* MultiplayerSynchronizer::get_replication_config() */

void MultiplayerSynchronizer::get_replication_config(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0x408) != 0) {
    *in_RDI = *(long *)(in_RSI + 0x408);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* MultiplayerSynchronizer::update_visibility(int) [clone .part.0] */

void __thiscall
MultiplayerSynchronizer::update_visibility(MultiplayerSynchronizer *this,int param_1)

{
  char cVar1;
  long lVar2;
  long in_FS_OFFSET;
  Object *local_88;
  Object *local_80;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((byte)this[0x2fa] & 0x40) != 0) &&
     (lVar2 = Node::get_node_or_null((NodePath *)this), lVar2 != 0)) {
    Node::get_multiplayer();
    (**(code **)(*(long *)local_88 + 0x160))(&local_80);
    if (local_80 != (Object *)0x0) {
      cVar1 = RefCounted::unreference();
      if ((cVar1 != '\0') && (cVar1 = predelete_handler(local_80), cVar1 != '\0')) {
        (**(code **)(*(long *)local_80 + 0x140))(local_80);
        Memory::free_static(local_80,false);
      }
      cVar1 = Node::is_multiplayer_authority();
      if (cVar1 != '\0') {
        if (((local_88 != (Object *)0x0) && (cVar1 = RefCounted::unreference(), cVar1 != '\0')) &&
           (cVar1 = predelete_handler(local_88), cVar1 != '\0')) {
          (**(code **)(*(long *)local_88 + 0x140))(local_88);
          Memory::free_static(local_88,false);
        }
        lVar2 = SceneStringNames::singleton + 0x18;
        Variant::Variant((Variant *)local_68,param_1);
        local_50 = 0;
        local_48 = (undefined1  [16])0x0;
        local_78[0] = (Variant *)local_68;
        (**(code **)(*(long *)this + 0xd0))(this,lVar2,local_78,1);
        if (Variant::needs_deinit[(int)local_50] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_68[0]] != '\0') {
          Variant::_clear_internal();
        }
        goto LAB_001004d3;
      }
    }
    if (((local_88 != (Object *)0x0) && (cVar1 = RefCounted::unreference(), cVar1 != '\0')) &&
       (cVar1 = predelete_handler(local_88), cVar1 != '\0')) {
      (**(code **)(*(long *)local_88 + 0x140))(local_88);
      Memory::free_static(local_88,false);
    }
  }
LAB_001004d3:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MultiplayerSynchronizer::update_visibility(int) */

void __thiscall
MultiplayerSynchronizer::update_visibility(MultiplayerSynchronizer *this,int param_1)

{
  long lVar1;
  
  lVar1 = Engine::get_singleton();
  if (*(char *)(lVar1 + 0xc0) == '\0') {
    update_visibility(this,param_1);
    return;
  }
  return;
}



/* MultiplayerSynchronizer::is_visibility_public() const */

undefined8 __thiscall MultiplayerSynchronizer::is_visibility_public(MultiplayerSynchronizer *this)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  
  if (*(long *)(this + 0x458) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x47c) != 0) {
    uVar12 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x478) * 4));
    uVar1 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x478) * 8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar12;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar1;
    lVar11 = SUB168(auVar2 * auVar6,8);
    uVar14 = *(uint *)(*(long *)(this + 0x470) + lVar11 * 4);
    iVar10 = SUB164(auVar2 * auVar6,8);
    if (uVar14 != 0) {
      uVar13 = 0;
      do {
        if ((uVar14 == 1) &&
           (*(int *)(*(long *)(this + 0x458) +
                    (ulong)*(uint *)(*(long *)(this + 0x460) + lVar11 * 4) * 4) == 0)) {
          return 1;
        }
        uVar13 = uVar13 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (iVar10 + 1) * uVar1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar12;
        lVar11 = SUB168(auVar3 * auVar7,8);
        uVar14 = *(uint *)(*(long *)(this + 0x470) + lVar11 * 4);
        iVar10 = SUB164(auVar3 * auVar7,8);
        if (uVar14 == 0) {
          return 0;
        }
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar14 * uVar1;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar12;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x478) * 4) +
                        iVar10) - SUB164(auVar4 * auVar8,8)) * uVar1;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar12;
      } while (uVar13 <= SUB164(auVar5 * auVar9,8));
      return 0;
    }
  }
  return 0;
}



/* MultiplayerSynchronizer::get_visibility_for(int) const */

undefined8 __thiscall
MultiplayerSynchronizer::get_visibility_for(MultiplayerSynchronizer *this,int param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  
  if (*(long *)(this + 0x458) != 0) {
    if (*(int *)(this + 0x47c) == 0) {
      return 0;
    }
    uVar1 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x478) * 8);
    uVar10 = ((uint)param_1 >> 0x10 ^ param_1) * -0x7a143595;
    uVar10 = (uVar10 ^ uVar10 >> 0xd) * -0x3d4d51cb;
    uVar16 = uVar10 ^ uVar10 >> 0x10;
    if (uVar10 == uVar10 >> 0x10) {
      uVar16 = 1;
      uVar12 = uVar1;
    }
    else {
      uVar12 = uVar16 * uVar1;
    }
    uVar14 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x478) * 4));
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar14;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar12;
    lVar13 = SUB168(auVar2 * auVar6,8);
    uVar10 = *(uint *)(*(long *)(this + 0x470) + lVar13 * 4);
    iVar11 = SUB164(auVar2 * auVar6,8);
    if (uVar10 != 0) {
      uVar15 = 0;
      do {
        if ((uVar16 == uVar10) &&
           (*(int *)(*(long *)(this + 0x458) +
                    (ulong)*(uint *)(*(long *)(this + 0x460) + lVar13 * 4) * 4) == param_1)) {
          return 1;
        }
        uVar15 = uVar15 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (iVar11 + 1) * uVar1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar14;
        lVar13 = SUB168(auVar3 * auVar7,8);
        uVar10 = *(uint *)(*(long *)(this + 0x470) + lVar13 * 4);
        iVar11 = SUB164(auVar3 * auVar7,8);
      } while ((uVar10 != 0) &&
              (auVar4._8_8_ = 0, auVar4._0_8_ = uVar10 * uVar1, auVar8._8_8_ = 0,
              auVar8._0_8_ = uVar14, auVar5._8_8_ = 0,
              auVar5._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x478) * 4
                                        ) + iVar11) - SUB164(auVar4 * auVar8,8)) * uVar1,
              auVar9._8_8_ = 0, auVar9._0_8_ = uVar14, uVar15 <= SUB164(auVar5 * auVar9,8)));
    }
  }
  return 0;
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



/* List<PropertyInfo, DefaultAllocator>::push_back(PropertyInfo const&) [clone .isra.0] */

void __thiscall
List<PropertyInfo,DefaultAllocator>::push_back
          (List<PropertyInfo,DefaultAllocator> *this,PropertyInfo *param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined1 (*pauVar4) [16];
  
  if (*(long *)this == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar3 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  lVar2 = *(long *)(param_1 + 8);
  *puVar3 = 0;
  puVar3[6] = 0;
  puVar3[10] = 6;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar3 + 0xc) = (undefined1  [16])0x0;
  *puVar3 = *(undefined4 *)param_1;
  if (lVar2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 2),(CowData *)(param_1 + 8));
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)(param_1 + 0x10));
  puVar3[6] = *(undefined4 *)(param_1 + 0x18);
  if (*(long *)(puVar3 + 8) != *(long *)(param_1 + 0x20)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)(param_1 + 0x20));
  }
  puVar3[10] = *(undefined4 *)(param_1 + 0x28);
  plVar1 = *(long **)this;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar3 + 0xc) = 0;
  *(long **)(puVar3 + 0x10) = plVar1;
  *(long *)(puVar3 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar3;
  }
  plVar1[1] = (long)puVar3;
  if (*plVar1 != 0) {
    *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
    return;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  *plVar1 = (long)puVar3;
  return;
}



/* MultiplayerSynchronizer::_update_process() */

void __thiscall MultiplayerSynchronizer::_update_process(MultiplayerSynchronizer *this)

{
  long lVar1;
  
  lVar1 = Engine::get_singleton();
  if (*(char *)(lVar1 + 0xc0) == '\0') {
    _update_process(this);
    return;
  }
  return;
}



/* MultiplayerSynchronizer::get_root_node() */

undefined8 __thiscall MultiplayerSynchronizer::get_root_node(MultiplayerSynchronizer *this)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong *puVar5;
  long in_FS_OFFSET;
  bool bVar6;
  
  uVar1 = *(ulong *)(this + 0x498);
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar1 != 0) {
    uVar4 = (uint)uVar1 & 0xffffff;
    if (uVar4 < (uint)ObjectDB::slot_max) {
      while( true ) {
        LOCK();
        bVar6 = (char)ObjectDB::spin_lock == '\0';
        if (bVar6) {
          ObjectDB::spin_lock._0_1_ = '\x01';
        }
        UNLOCK();
        if (bVar6) break;
        do {
        } while ((char)ObjectDB::spin_lock != '\0');
      }
      puVar5 = (ulong *)((ulong)uVar4 * 0x10 + ObjectDB::object_slots);
      if ((uVar1 >> 0x18 & 0x7fffffffff) == (*puVar5 & 0x7fffffffff)) {
        uVar1 = puVar5[1];
        ObjectDB::spin_lock._0_1_ = '\0';
        if (uVar1 != 0) {
          if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
            uVar3 = __dynamic_cast(uVar1,&Object::typeinfo,&Node::typeinfo,0);
            return uVar3;
          }
          goto LAB_00100c27;
        }
      }
      else {
        ObjectDB::spin_lock._0_1_ = '\0';
      }
    }
    else {
      _err_print_error("get_instance","./core/object/object.h",0x418,
                       "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
    }
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_00100c27:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MultiplayerSynchronizer::get_net_id() const */

undefined4 __thiscall MultiplayerSynchronizer::get_net_id(MultiplayerSynchronizer *this)

{
  return *(undefined4 *)(this + 0x4ac);
}



/* MultiplayerSynchronizer::set_net_id(unsigned int) */

void __thiscall MultiplayerSynchronizer::set_net_id(MultiplayerSynchronizer *this,uint param_1)

{
  *(uint *)(this + 0x4ac) = param_1;
  return;
}



/* MultiplayerSynchronizer::update_outbound_sync_time(unsigned long) */

undefined8 __thiscall
MultiplayerSynchronizer::update_outbound_sync_time(MultiplayerSynchronizer *this,ulong param_1)

{
  if (*(ulong *)(this + 0x4a0) != param_1) {
    if (param_1 < *(ulong *)(this + 0x4a0) + *(long *)(this + 0x418)) {
      return 0;
    }
    *(ulong *)(this + 0x4a0) = param_1;
  }
  return 1;
}



/* MultiplayerSynchronizer::update_inbound_sync_time(unsigned short) */

undefined8 __thiscall
MultiplayerSynchronizer::update_inbound_sync_time(MultiplayerSynchronizer *this,ushort param_1)

{
  if (this[0x4b0] == (MultiplayerSynchronizer)0x0) {
    this[0x4b0] = (MultiplayerSynchronizer)0x1;
  }
  else if ((param_1 <= *(ushort *)(this + 0x4a8)) &&
          ((int)((uint)*(ushort *)(this + 0x4a8) - (uint)param_1) < 0x7fff)) {
    return 0;
  }
  *(ushort *)(this + 0x4a8) = param_1;
  return 1;
}



/* MultiplayerSynchronizer::is_visible_to(int) */

undefined8 __thiscall
MultiplayerSynchronizer::is_visible_to(MultiplayerSynchronizer *this,int param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
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
  bool bVar21;
  uint uVar22;
  undefined8 uVar23;
  int iVar24;
  uint uVar25;
  long lVar26;
  long lVar27;
  int iVar28;
  ulong uVar29;
  uint uVar30;
  Callable *pCVar31;
  long in_FS_OFFSET;
  Callable local_98 [24];
  Variant *local_80;
  int local_78 [8];
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0x454) == 0) {
LAB_00100e34:
    lVar2 = *(long *)(this + 0x458);
    if ((lVar2 != 0) && (*(int *)(this + 0x47c) != 0)) {
      lVar3 = *(long *)(this + 0x470);
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x478) * 4);
      uVar29 = CONCAT44(0,uVar1);
      uVar4 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x478) * 8);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar29;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar4;
      lVar26 = SUB168(auVar5 * auVar13,8);
      uVar22 = *(uint *)(lVar3 + lVar26 * 4);
      iVar24 = SUB164(auVar5 * auVar13,8);
      lVar26 = lVar26 * 4;
      if (uVar22 == 0) {
        uVar22 = ((uint)param_1 >> 0x10 ^ param_1) * -0x7a143595;
        uVar22 = (uVar22 ^ uVar22 >> 0xd) * -0x3d4d51cb;
        uVar25 = uVar22 ^ uVar22 >> 0x10;
        if (uVar22 != uVar22 >> 0x10) goto LAB_00100fee;
      }
      else {
        uVar30 = 0;
        lVar27 = lVar26;
        uVar25 = uVar22;
        iVar28 = iVar24;
        do {
          if ((uVar25 == 1) &&
             (*(int *)(lVar2 + (ulong)*(uint *)(*(long *)(this + 0x460) + lVar27) * 4) == 0))
          goto LAB_00100f1b;
          uVar30 = uVar30 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (iVar28 + 1) * uVar4;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar29;
          lVar27 = SUB168(auVar6 * auVar14,8);
          uVar25 = *(uint *)(lVar3 + lVar27 * 4);
          iVar28 = SUB164(auVar6 * auVar14,8);
          lVar27 = lVar27 * 4;
        } while ((uVar25 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = uVar25 * uVar4, auVar15._8_8_ = 0,
                auVar15._0_8_ = uVar29, auVar8._8_8_ = 0,
                auVar8._0_8_ = ((uVar1 + iVar28) - SUB164(auVar7 * auVar15,8)) * uVar4,
                auVar16._8_8_ = 0, auVar16._0_8_ = uVar29, uVar30 <= SUB164(auVar8 * auVar16,8)));
        uVar25 = ((uint)param_1 >> 0x10 ^ param_1) * -0x7a143595;
        uVar25 = (uVar25 >> 0xd ^ uVar25) * -0x3d4d51cb;
        if (uVar25 >> 0x10 == uVar25) {
          uVar25 = 1;
        }
        else {
          uVar25 = uVar25 >> 0x10 ^ uVar25;
LAB_00100fee:
          auVar9._8_8_ = 0;
          auVar9._0_8_ = uVar25 * uVar4;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar29;
          lVar26 = SUB168(auVar9 * auVar17,8);
          uVar22 = *(uint *)(lVar3 + lVar26 * 4);
          iVar24 = SUB164(auVar9 * auVar17,8);
          lVar26 = lVar26 * 4;
          if (uVar22 == 0) goto LAB_00100f78;
        }
        uVar30 = 0;
        do {
          if ((uVar25 == uVar22) &&
             (*(int *)(lVar2 + (ulong)*(uint *)(*(long *)(this + 0x460) + lVar26) * 4) == param_1))
          goto LAB_00100f1b;
          uVar30 = uVar30 + 1;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (iVar24 + 1) * uVar4;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = uVar29;
          lVar26 = SUB168(auVar10 * auVar18,8);
          uVar22 = *(uint *)(lVar3 + lVar26 * 4);
          iVar24 = SUB164(auVar10 * auVar18,8);
          lVar26 = lVar26 * 4;
        } while ((uVar22 != 0) &&
                (auVar11._8_8_ = 0, auVar11._0_8_ = uVar22 * uVar4, auVar19._8_8_ = 0,
                auVar19._0_8_ = uVar29, auVar12._8_8_ = 0,
                auVar12._0_8_ = ((uVar1 + iVar24) - SUB164(auVar11 * auVar19,8)) * uVar4,
                auVar20._8_8_ = 0, auVar20._0_8_ = uVar29, uVar30 <= SUB164(auVar12 * auVar20,8)));
      }
    }
  }
  else {
    Variant::Variant((Variant *)local_78,param_1);
    iVar24 = *(int *)(this + 0x454);
    local_80 = (Variant *)local_78;
    if (iVar24 == 0) {
LAB_00100e24:
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00100e34;
    }
    iVar28 = 0;
    pCVar31 = *(Callable **)(this + 0x430);
    while( true ) {
      Callable::Callable(local_98,pCVar31);
      local_58[0] = 0;
      local_58[1] = 0;
      local_50 = (undefined1  [16])0x0;
      Callable::callp((Variant **)local_98,(int)&local_80,(Variant *)0x1,(CallError *)local_58);
      if (local_58[0] != 1) break;
      bVar21 = Variant::operator_cast_to_bool((Variant *)local_58);
      if (!bVar21) goto LAB_00100f4d;
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      iVar28 = iVar28 + 1;
      Callable::~Callable(local_98);
      if (iVar24 <= iVar28) goto LAB_00100e24;
      pCVar31 = pCVar31 + 0x10;
    }
    _err_print_error("is_visible_to","modules/multiplayer/multiplayer_synchronizer.cpp",0xc9,
                     "Condition \"err.error != Callable::CallError::CALL_OK || ret.get_type() != Variant::BOOL\" is true. Returning: false"
                     ,0,0);
LAB_00100f4d:
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Callable::~Callable(local_98);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
LAB_00100f78:
  uVar23 = 0;
LAB_00100f7a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar23;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00100f1b:
  uVar23 = 1;
  goto LAB_00100f7a;
}



/* MultiplayerSynchronizer::get_replication_config_ptr() const */

undefined8 __thiscall
MultiplayerSynchronizer::get_replication_config_ptr(MultiplayerSynchronizer *this)

{
  return *(undefined8 *)(this + 0x408);
}



/* MultiplayerSynchronizer::get_delta_properties(unsigned long) */

ulong MultiplayerSynchronizer::get_delta_properties(ulong param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 (*pauVar3) [16];
  NodePath *pNVar4;
  ulong in_RDX;
  NodePath *pNVar5;
  long in_RSI;
  ulong uVar6;
  long in_FS_OFFSET;
  undefined1 (*local_48) [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)param_1 = 0;
  if (*(long *)(in_RSI + 0x408) == 0) {
    _err_print_error("get_delta_properties","modules/multiplayer/multiplayer_synchronizer.cpp",0x1b6
                     ,"Condition \"replication_config.is_null()\" is true. Returning: out",0,0);
  }
  else {
    plVar2 = (long *)SceneReplicationConfig::get_watch_properties();
    local_48 = (undefined1 (*) [16])0x0;
    if (((long *)*plVar2 != (long *)0x0) &&
       (pNVar5 = *(NodePath **)*plVar2, pNVar5 != (NodePath *)0x0)) {
      pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)pauVar3[1] = 0;
      *pauVar3 = (undefined1  [16])0x0;
      local_48 = pauVar3;
      do {
        while( true ) {
          pNVar4 = (NodePath *)operator_new(0x20,DefaultAllocator::alloc);
          *(undefined1 (*) [16])pNVar4 = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pNVar4 + 0x10) = (undefined1  [16])0x0;
          NodePath::operator=(pNVar4,pNVar5);
          lVar1 = *(long *)(*pauVar3 + 8);
          *(undefined1 (**) [16])(pNVar4 + 0x18) = pauVar3;
          *(undefined8 *)(pNVar4 + 8) = 0;
          *(long *)(pNVar4 + 0x10) = lVar1;
          if (lVar1 != 0) {
            *(NodePath **)(lVar1 + 8) = pNVar4;
          }
          lVar1 = *(long *)*pauVar3;
          *(NodePath **)(*pauVar3 + 8) = pNVar4;
          if (lVar1 != 0) break;
          pNVar5 = *(NodePath **)(pNVar5 + 8);
          *(int *)pauVar3[1] = *(int *)pauVar3[1] + 1;
          *(NodePath **)*pauVar3 = pNVar4;
          if (pNVar5 == (NodePath *)0x0) goto LAB_0010122c;
        }
        pNVar5 = *(NodePath **)(pNVar5 + 8);
        *(int *)pauVar3[1] = *(int *)pauVar3[1] + 1;
      } while (pNVar5 != (NodePath *)0x0);
LAB_0010122c:
      pNVar5 = *(NodePath **)*pauVar3;
      if (pNVar5 != (NodePath *)0x0) {
        uVar6 = 0;
        do {
          if ((in_RDX >> (uVar6 & 0x3f) & 1) != 0) {
            if (*(long *)param_1 == 0) {
              pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
              *(undefined1 (**) [16])param_1 = pauVar3;
              *(undefined4 *)pauVar3[1] = 0;
              *pauVar3 = (undefined1  [16])0x0;
            }
            pNVar4 = (NodePath *)operator_new(0x20,DefaultAllocator::alloc);
            *(undefined1 (*) [16])pNVar4 = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(pNVar4 + 0x10) = (undefined1  [16])0x0;
            NodePath::operator=(pNVar4,pNVar5);
            plVar2 = *(long **)param_1;
            lVar1 = plVar2[1];
            *(undefined8 *)(pNVar4 + 8) = 0;
            *(long **)(pNVar4 + 0x18) = plVar2;
            *(long *)(pNVar4 + 0x10) = lVar1;
            if (lVar1 != 0) {
              *(NodePath **)(lVar1 + 8) = pNVar4;
            }
            plVar2[1] = (long)pNVar4;
            if (*plVar2 == 0) {
              *plVar2 = (long)pNVar4;
            }
            *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
          }
          pNVar5 = *(NodePath **)(pNVar5 + 8);
          uVar6 = (ulong)((int)uVar6 + 1);
        } while (pNVar5 != (NodePath *)0x0);
      }
    }
    List<NodePath,DefaultAllocator>::~List((List<NodePath,DefaultAllocator> *)&local_48);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MultiplayerSynchronizer::MultiplayerSynchronizer() */

void __thiscall MultiplayerSynchronizer::MultiplayerSynchronizer(MultiplayerSynchronizer *this)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  ulong local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Node::Node((Node *)this);
  *(undefined ***)this = &PTR__initialize_classv_00113a80;
  *(undefined8 *)(this + 0x408) = 0;
  local_38 = &_LC34;
  local_40 = 0;
  local_30 = 2;
  String::parse_latin1((StrRange *)&local_40);
  NodePath::NodePath((NodePath *)(this + 0x410),(String *)&local_40);
  uVar3 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 - 0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(uVar3 - 0x10),false);
    }
  }
  uVar2 = _LC35;
  *(undefined4 *)(this + 0x428) = 0;
  *(undefined4 *)(this + 0x4ac) = 0;
  *(undefined8 *)(this + 0x450) = uVar2;
  *(undefined8 *)(this + 0x478) = uVar2;
  *(undefined2 *)(this + 0x4a8) = 0;
  *(undefined8 *)(this + 0x488) = 0;
  *(undefined8 *)(this + 0x4a0) = 0;
  this[0x4b0] = (MultiplayerSynchronizer)0x0;
  *(undefined1 (*) [16])(this + 0x418) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x430) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x440) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x458) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x468) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x490) = (undefined1  [16])0x0;
  local_40 = local_40 & 0xffffffff00000000;
  HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert((int *)&local_38);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MultiplayerSynchronizer::set_visibility_for(int, bool) */

void __thiscall
MultiplayerSynchronizer::set_visibility_for(MultiplayerSynchronizer *this,int param_1,bool param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
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
  uint uVar36;
  uint uVar37;
  long lVar38;
  ulong uVar39;
  int iVar40;
  int iVar41;
  long lVar42;
  long lVar43;
  ulong uVar44;
  uint *puVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint *puVar49;
  uint *puVar50;
  ulong uVar51;
  ulong uVar52;
  long in_FS_OFFSET;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar38 = *(long *)(this + 0x458);
  if ((lVar38 != 0) && (*(int *)(this + 0x47c) != 0)) {
    uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x478) * 4);
    uVar52 = CONCAT44(0,uVar37);
    uVar6 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x478) * 8);
    uVar36 = ((uint)param_1 >> 0x10 ^ param_1) * -0x7a143595;
    uVar36 = (uVar36 ^ uVar36 >> 0xd) * -0x3d4d51cb;
    uVar46 = uVar36 ^ uVar36 >> 0x10;
    if (uVar36 == uVar36 >> 0x10) {
      uVar46 = 1;
      uVar39 = uVar6;
    }
    else {
      uVar39 = uVar46 * uVar6;
    }
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar52;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar39;
    lVar42 = SUB168(auVar10 * auVar23,8);
    lVar7 = *(long *)(this + 0x470);
    uVar36 = *(uint *)(lVar7 + lVar42 * 4);
    lVar42 = lVar42 * 4;
    if (uVar36 != 0) {
      iVar40 = SUB164(auVar10 * auVar23,8);
      uVar47 = 0;
      lVar43 = lVar42;
      uVar48 = uVar36;
      iVar41 = iVar40;
      do {
        if ((uVar46 == uVar48) &&
           (lVar8 = *(long *)(this + 0x460),
           param_1 == *(int *)(lVar38 + (ulong)*(uint *)(lVar8 + lVar43) * 4))) {
          if (param_2) goto LAB_00101854;
          uVar48 = 0;
          goto LAB_001016a0;
        }
        uVar47 = uVar47 + 1;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = (iVar41 + 1) * uVar6;
        auVar24._8_8_ = 0;
        auVar24._0_8_ = uVar52;
        lVar43 = SUB168(auVar11 * auVar24,8);
        uVar48 = *(uint *)(lVar7 + lVar43 * 4);
        iVar41 = SUB164(auVar11 * auVar24,8);
        lVar43 = lVar43 * 4;
      } while ((uVar48 != 0) &&
              (auVar12._8_8_ = 0, auVar12._0_8_ = uVar48 * uVar6, auVar25._8_8_ = 0,
              auVar25._0_8_ = uVar52, auVar13._8_8_ = 0,
              auVar13._0_8_ = ((uVar37 + iVar41) - SUB164(auVar12 * auVar25,8)) * uVar6,
              auVar26._8_8_ = 0, auVar26._0_8_ = uVar52, uVar47 <= SUB164(auVar13 * auVar26,8)));
    }
  }
  if (param_2) {
    HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert(local_58);
LAB_00101839:
    lVar38 = Engine::get_singleton();
    if (*(char *)(lVar38 + 0xc0) == '\0') {
      update_visibility(this,param_1);
    }
  }
LAB_00101854:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_001016a0:
  if (uVar46 != uVar36) goto LAB_00101650;
  uVar36 = *(uint *)(lVar8 + lVar42);
  if (param_1 != *(int *)(lVar38 + (ulong)uVar36 * 4)) goto LAB_00101650;
  lVar42 = (ulong)uVar36 * 4;
  lVar9 = *(long *)(this + 0x468);
  puVar1 = (uint *)(lVar9 + lVar42);
  uVar46 = *puVar1;
  uVar39 = (ulong)uVar46;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = (uVar46 + 1) * uVar6;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = uVar52;
  lVar43 = SUB168(auVar17 * auVar30,8) * 4;
  uVar48 = SUB164(auVar17 * auVar30,8);
  uVar51 = (ulong)uVar48;
  puVar50 = (uint *)(lVar7 + lVar43);
  if ((*puVar50 == 0) ||
     (auVar18._8_8_ = 0, auVar18._0_8_ = *puVar50 * uVar6, auVar31._8_8_ = 0, auVar31._0_8_ = uVar52
     , auVar19._8_8_ = 0, auVar19._0_8_ = ((uVar37 + uVar48) - SUB164(auVar18 * auVar31,8)) * uVar6,
     auVar32._8_8_ = 0, auVar32._0_8_ = uVar52, SUB164(auVar19 * auVar32,8) == 0)) {
    uVar51 = (ulong)uVar46;
  }
  else {
    while( true ) {
      puVar49 = (uint *)(lVar43 + lVar8);
      puVar2 = (uint *)(lVar8 + uVar39 * 4);
      puVar45 = (uint *)(uVar39 * 4 + lVar7);
      puVar3 = (undefined4 *)(lVar9 + (ulong)*puVar49 * 4);
      puVar4 = (undefined4 *)(lVar9 + (ulong)*puVar2 * 4);
      uVar5 = *puVar4;
      *puVar4 = *puVar3;
      *puVar3 = uVar5;
      uVar46 = *puVar50;
      *puVar50 = *puVar45;
      *puVar45 = uVar46;
      uVar46 = *puVar49;
      *puVar49 = *puVar2;
      *puVar2 = uVar46;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = ((int)uVar51 + 1) * uVar6;
      auVar35._8_8_ = 0;
      auVar35._0_8_ = uVar52;
      uVar44 = SUB168(auVar22 * auVar35,8);
      lVar43 = uVar44 * 4;
      puVar50 = (uint *)(lVar7 + lVar43);
      if ((*puVar50 == 0) ||
         (auVar20._8_8_ = 0, auVar20._0_8_ = *puVar50 * uVar6, auVar33._8_8_ = 0,
         auVar33._0_8_ = uVar52, auVar21._8_8_ = 0,
         auVar21._0_8_ =
              ((SUB164(auVar22 * auVar35,8) + uVar37) - SUB164(auVar20 * auVar33,8)) * uVar6,
         auVar34._8_8_ = 0, auVar34._0_8_ = uVar52, SUB164(auVar21 * auVar34,8) == 0)) break;
      uVar39 = uVar51;
      uVar51 = uVar44 & 0xffffffff;
    }
  }
  *(undefined4 *)(lVar7 + uVar51 * 4) = 0;
  uVar37 = *(int *)(this + 0x47c) - 1;
  *(uint *)(this + 0x47c) = uVar37;
  if (uVar36 < uVar37) {
    *(undefined4 *)(lVar38 + lVar42) = *(undefined4 *)(lVar38 + (ulong)uVar37 * 4);
    *puVar1 = *(uint *)(lVar9 + (ulong)*(uint *)(this + 0x47c) * 4);
    *(uint *)(lVar8 + (ulong)*(uint *)(lVar9 + (ulong)*(uint *)(this + 0x47c) * 4) * 4) = uVar36;
  }
  goto LAB_00101839;
LAB_00101650:
  uVar48 = uVar48 + 1;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = (iVar40 + 1) * uVar6;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar52;
  lVar42 = SUB168(auVar14 * auVar27,8);
  uVar36 = *(uint *)(lVar7 + lVar42 * 4);
  iVar40 = SUB164(auVar14 * auVar27,8);
  lVar42 = lVar42 * 4;
  if ((uVar36 == 0) ||
     (auVar15._8_8_ = 0, auVar15._0_8_ = uVar36 * uVar6, auVar28._8_8_ = 0, auVar28._0_8_ = uVar52,
     auVar16._8_8_ = 0, auVar16._0_8_ = ((uVar37 + iVar40) - SUB164(auVar15 * auVar28,8)) * uVar6,
     auVar29._8_8_ = 0, auVar29._0_8_ = uVar52, SUB164(auVar16 * auVar29,8) < uVar48))
  goto LAB_00101839;
  goto LAB_001016a0;
}



/* MultiplayerSynchronizer::set_visibility_public(bool) */

void __thiscall
MultiplayerSynchronizer::set_visibility_public(MultiplayerSynchronizer *this,bool param_1)

{
  set_visibility_for(this,0,param_1);
  return;
}



/* MultiplayerSynchronizer::_get_prop_target(Object*, NodePath const&) [clone .part.0] */

undefined8 MultiplayerSynchronizer::_get_prop_target(Object *param_1,NodePath *param_2)

{
  char cVar1;
  NodePath *pNVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_48;
  NodePath local_40 [8];
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (Object *)0x0) {
    pNVar2 = (NodePath *)__dynamic_cast(param_1,&Object::typeinfo,&Node::typeinfo,0);
    if (pNVar2 != (NodePath *)0x0) {
      cVar1 = Node::has_node(pNVar2);
      if (cVar1 != '\0') {
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar3 = Node::get_node(pNVar2);
          return uVar3;
        }
        goto LAB_001019c7;
      }
    }
  }
  NodePath::NodePath(local_40,param_2);
  local_30 = 0x14;
  local_38 = "Node \'%s\' not found.";
  local_48 = 0;
  String::parse_latin1((StrRange *)&local_48);
  vformat<NodePath>((CowData<char32_t> *)&local_38,&local_48,local_40);
  _err_print_error("_get_prop_target","modules/multiplayer/multiplayer_synchronizer.cpp",0x29,
                   "Condition \"!node || !node->has_node(p_path)\" is true. Returning: nullptr",
                   (CowData<char32_t> *)&local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  NodePath::~NodePath(local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_001019c7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MultiplayerSynchronizer::_get_prop_target(Object*, NodePath const&) */

Object * MultiplayerSynchronizer::_get_prop_target(Object *param_1,NodePath *param_2)

{
  int iVar1;
  Object *pOVar2;
  
  iVar1 = NodePath::get_name_count();
  if (iVar1 != 0) {
    pOVar2 = (Object *)_get_prop_target(param_1,param_2);
    return pOVar2;
  }
  return param_1;
}



/* MultiplayerSynchronizer::add_visibility_filter(Callable) */

void MultiplayerSynchronizer::add_visibility_filter(MultiplayerSynchronizer *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  Callable aCStack_28 [24];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  HashSet<Callable,HashMapHasherDefault,HashMapComparatorDefault<Callable>>::insert(aCStack_28);
  lVar1 = Engine::get_singleton();
  if (*(char *)(lVar1 + 0xc0) == '\0') {
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      _update_process(param_1);
      return;
    }
  }
  else if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MultiplayerSynchronizer::remove_visibility_filter(Callable) */

void __thiscall
MultiplayerSynchronizer::remove_visibility_filter(MultiplayerSynchronizer *this,Callable *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
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
  char cVar28;
  uint uVar29;
  long lVar30;
  uint *puVar31;
  int iVar32;
  uint uVar33;
  long lVar34;
  ulong uVar35;
  ulong uVar36;
  uint *puVar37;
  uint *puVar38;
  ulong uVar39;
  long lVar40;
  ulong uVar41;
  uint uVar42;
  ulong uVar43;
  long in_FS_OFFSET;
  Callable local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0x430) != 0) && (*(int *)(this + 0x454) != 0)) {
    uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x450) * 4);
    lVar30 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x450) * 8);
    Callable::operator_cast_to_String(local_48);
    uVar29 = String::hash();
    uVar36 = (ulong)uVar29;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
    if (uVar29 == 0) {
      uVar36 = 1;
    }
    uVar39 = CONCAT44(0,uVar4);
    lVar40 = *(long *)(this + 0x448);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar36 * lVar30;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar39;
    lVar34 = SUB168(auVar8 * auVar18,8);
    uVar29 = *(uint *)(lVar40 + lVar34 * 4);
    iVar32 = SUB164(auVar8 * auVar18,8);
    if (uVar29 != 0) {
      uVar42 = 0;
LAB_00101c06:
      if ((uint)uVar36 != uVar29) goto LAB_00101bb8;
      cVar28 = Callable::operator==
                         ((Callable *)
                          ((ulong)*(uint *)(*(long *)(this + 0x438) + lVar34 * 4) * 0x10 +
                          *(long *)(this + 0x430)),param_2);
      if (cVar28 == '\0') {
        lVar40 = *(long *)(this + 0x448);
        goto LAB_00101bb8;
      }
      lVar40 = *(long *)(this + 0x438);
      lVar6 = *(long *)(this + 0x440);
      lVar7 = *(long *)(this + 0x448);
      uVar4 = *(uint *)(lVar40 + lVar34 * 4);
      uVar41 = (ulong)uVar4;
      uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x450) * 4);
      uVar43 = CONCAT44(0,uVar29);
      lVar34 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x450) * 8);
      uVar42 = *(uint *)(lVar6 + uVar41 * 4);
      uVar36 = (ulong)uVar42;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)(uVar42 + 1) * lVar34;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar43;
      lVar30 = SUB168(auVar12 * auVar22,8) * 4;
      uVar33 = SUB164(auVar12 * auVar22,8);
      uVar39 = (ulong)uVar33;
      puVar38 = (uint *)(lVar7 + lVar30);
      if ((*puVar38 == 0) ||
         (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)*puVar38 * lVar34, auVar23._8_8_ = 0,
         auVar23._0_8_ = uVar43, auVar14._8_8_ = 0,
         auVar14._0_8_ = (ulong)((uVar29 + uVar33) - SUB164(auVar13 * auVar23,8)) * lVar34,
         auVar24._8_8_ = 0, auVar24._0_8_ = uVar43, SUB164(auVar14 * auVar24,8) == 0)) {
        uVar39 = (ulong)uVar42;
      }
      else {
        while( true ) {
          puVar31 = (uint *)(lVar30 + lVar40);
          puVar3 = (uint *)(lVar40 + uVar36 * 4);
          puVar37 = (uint *)(uVar36 * 4 + lVar7);
          puVar1 = (undefined4 *)(lVar6 + (ulong)*puVar31 * 4);
          puVar2 = (undefined4 *)(lVar6 + (ulong)*puVar3 * 4);
          uVar5 = *puVar2;
          *puVar2 = *puVar1;
          *puVar1 = uVar5;
          uVar42 = *puVar38;
          *puVar38 = *puVar37;
          *puVar37 = uVar42;
          uVar42 = *puVar31;
          *puVar31 = *puVar3;
          *puVar3 = uVar42;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = (ulong)((int)uVar39 + 1) * lVar34;
          auVar27._8_8_ = 0;
          auVar27._0_8_ = uVar43;
          uVar35 = SUB168(auVar17 * auVar27,8);
          lVar30 = uVar35 * 4;
          puVar38 = (uint *)(lVar7 + lVar30);
          if ((*puVar38 == 0) ||
             (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)*puVar38 * lVar34, auVar25._8_8_ = 0,
             auVar25._0_8_ = uVar43, auVar16._8_8_ = 0,
             auVar16._0_8_ =
                  (ulong)((SUB164(auVar17 * auVar27,8) + uVar29) - SUB164(auVar15 * auVar25,8)) *
                  lVar34, auVar26._8_8_ = 0, auVar26._0_8_ = uVar43,
             SUB164(auVar16 * auVar26,8) == 0)) break;
          uVar36 = uVar39;
          uVar39 = uVar35 & 0xffffffff;
        }
      }
      *(undefined4 *)(lVar7 + uVar39 * 4) = 0;
      Callable::~Callable((Callable *)(*(long *)(this + 0x430) + uVar41 * 0x10));
      uVar29 = *(int *)(this + 0x454) - 1;
      *(uint *)(this + 0x454) = uVar29;
      if (uVar4 < uVar29) {
        Callable::Callable((Callable *)(*(long *)(this + 0x430) + uVar41 * 0x10),
                           (Callable *)(*(long *)(this + 0x430) + (ulong)uVar29 * 0x10));
        Callable::~Callable((Callable *)
                            ((ulong)*(uint *)(this + 0x454) * 0x10 + *(long *)(this + 0x430)));
        lVar30 = *(long *)(this + 0x440);
        *(undefined4 *)(lVar30 + uVar41 * 4) =
             *(undefined4 *)(lVar30 + (ulong)*(uint *)(this + 0x454) * 4);
        *(uint *)(*(long *)(this + 0x438) +
                 (ulong)*(uint *)(lVar30 + (ulong)*(uint *)(this + 0x454) * 4) * 4) = uVar4;
        lVar30 = Engine::get_singleton();
        cVar28 = *(char *)(lVar30 + 0xc0);
        goto joined_r0x00101e50;
      }
    }
  }
LAB_00101acd:
  lVar30 = Engine::get_singleton();
  cVar28 = *(char *)(lVar30 + 0xc0);
joined_r0x00101e50:
  if (cVar28 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _update_process(this);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00101bb8:
  uVar42 = uVar42 + 1;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = (ulong)(iVar32 + 1) * lVar30;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar39;
  lVar34 = SUB168(auVar9 * auVar19,8);
  uVar29 = *(uint *)(lVar40 + lVar34 * 4);
  iVar32 = SUB164(auVar9 * auVar19,8);
  if ((uVar29 == 0) ||
     (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar29 * lVar30, auVar20._8_8_ = 0,
     auVar20._0_8_ = uVar39, auVar11._8_8_ = 0,
     auVar11._0_8_ = (ulong)((uVar4 + iVar32) - SUB164(auVar10 * auVar20,8)) * lVar30,
     auVar21._8_8_ = 0, auVar21._0_8_ = uVar39, SUB164(auVar11 * auVar21,8) < uVar42))
  goto LAB_00101acd;
  goto LAB_00101c06;
}



/* CowData<Variant>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Variant>::_copy_on_write(CowData<Variant> *this)

{
  Variant *this_00;
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  Variant *pVVar5;
  ulong uVar6;
  long lVar7;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar6 = 0x10;
  if (lVar1 * 0x18 != 0) {
    uVar6 = lVar1 * 0x18 - 1;
    uVar6 = uVar6 | uVar6 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = (uVar6 | uVar6 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar6,false);
  if (puVar3 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar4 = 0;
  lVar7 = 0;
  *puVar3 = 1;
  puVar3[1] = lVar1;
  if (lVar1 != 0) {
    do {
      this_00 = (Variant *)((long)(puVar3 + 2) + lVar4);
      lVar7 = lVar7 + 1;
      pVVar5 = (Variant *)(*(long *)this + lVar4);
      lVar4 = lVar4 + 0x18;
      Variant::Variant(this_00,pVVar5);
    } while (lVar1 != lVar7);
  }
  _unref(this);
  *(undefined8 **)this = puVar3 + 2;
  return;
}



/* CowData<String>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<String>::_copy_on_write(CowData<String> *this)

{
  CowData *pCVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  CowData<char32_t> *this_00;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar2 * 8 != 0) {
    uVar7 = lVar2 * 8 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 != (undefined8 *)0x0) {
    lVar6 = 0;
    *puVar5 = 1;
    puVar5[1] = lVar2;
    this_00 = (CowData<char32_t> *)(puVar5 + 2);
    if (lVar2 != 0) {
      do {
        lVar3 = *(long *)this;
        *(undefined8 *)this_00 = 0;
        pCVar1 = (CowData *)(lVar3 + lVar6 * 8);
        if (*(long *)pCVar1 != 0) {
          CowData<char32_t>::_ref(this_00,pCVar1);
        }
        lVar6 = lVar6 + 1;
        this_00 = this_00 + 8;
      } while (lVar2 != lVar6);
    }
    _unref(this);
    *(CowData<char32_t> **)this = (CowData<char32_t> *)(puVar5 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* MultiplayerSynchronizer::set_state(List<NodePath, DefaultAllocator> const&, Object*,
   Vector<Variant> const&) */

undefined8 MultiplayerSynchronizer::set_state(List *param_1,Object *param_2,Vector *param_3)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  Vector *pVVar4;
  undefined8 uVar5;
  NodePath *pNVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  Variant local_58 [8];
  CowData<StringName> local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (Object *)0x0) {
    _err_print_error("set_state","modules/multiplayer/multiplayer_synchronizer.cpp",0xae,
                     "Parameter \"p_obj\" is null.",0,0);
    uVar5 = 0x1f;
  }
  else {
    if ((*(long **)param_1 != (long *)0x0) &&
       (pNVar6 = (NodePath *)**(long **)param_1, pNVar6 != (NodePath *)0x0)) {
      lVar7 = 0;
      do {
        iVar3 = NodePath::get_name_count();
        if (iVar3 == 0) {
          lVar1 = *(long *)(param_3 + 8);
          pVVar4 = (Vector *)param_2;
        }
        else {
          pVVar4 = (Vector *)_get_prop_target(param_2,pNVar6);
          if (pVVar4 == (Vector *)0x0) {
            _err_print_error("set_state","modules/multiplayer/multiplayer_synchronizer.cpp",0xb2,
                             "Parameter \"obj\" is null.",0,0);
            uVar5 = 1;
            goto LAB_0010219c;
          }
          lVar1 = *(long *)(param_3 + 8);
        }
        if (lVar1 == 0) {
          lVar8 = 0;
LAB_001021d8:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar8,"p_index","size()","",false
                     ,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        lVar8 = *(long *)(lVar1 + -8);
        if (lVar8 <= lVar7) goto LAB_001021d8;
        NodePath::get_subnames();
        Object::set_indexed(pVVar4,local_58,(bool *)(lVar1 + lVar7 * 0x18));
        CowData<StringName>::_unref(local_50);
        pNVar6 = *(NodePath **)(pNVar6 + 8);
        lVar7 = lVar7 + 1;
      } while (pNVar6 != (NodePath *)0x0);
    }
    uVar5 = 0;
  }
LAB_0010219c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



/* MultiplayerSynchronizer::_bind_methods() */

void MultiplayerSynchronizer::_bind_methods(void)

{
  long *plVar1;
  char cVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  MethodBind *pMVar9;
  uint uVar10;
  long in_FS_OFFSET;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  long local_168;
  long local_160;
  char *local_158;
  undefined8 local_150;
  char *local_148;
  undefined8 local_140;
  char *local_118;
  undefined8 local_110;
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8 [2];
  undefined8 local_c8;
  undefined8 local_c0;
  long local_b0;
  Variant *local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined *puStack_90;
  undefined8 local_88;
  Variant **local_78;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  puVar7 = PTR__LC57_001143d8;
  puVar6 = PTR__LC56_001143d0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = 0;
  local_a8 = (Variant *)&_LC58;
  uVar10 = (uint)(Variant *)&local_78;
  local_78 = &local_a8;
  D_METHODP((char *)&local_118,(char ***)"set_root_path",uVar10);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar9 = create_method_bind<MultiplayerSynchronizer,NodePath_const&>(set_root_path);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)local_108);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_118,(char ***)"get_root_path",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar9 = create_method_bind<MultiplayerSynchronizer,NodePath>(get_root_path);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)local_108);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  local_a0 = 0;
  local_a8 = (Variant *)0x106c98;
  local_78 = &local_a8;
  D_METHODP((char *)&local_118,(char ***)"set_replication_interval",uVar10);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar9 = create_method_bind<MultiplayerSynchronizer,double>(set_replication_interval);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)local_108);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_118,(char ***)"get_replication_interval",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar9 = create_method_bind<MultiplayerSynchronizer,double>(get_replication_interval);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)local_108);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  local_a0 = 0;
  local_a8 = (Variant *)0x106c98;
  local_78 = &local_a8;
  D_METHODP((char *)&local_118,(char ***)"set_delta_interval",uVar10);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar9 = create_method_bind<MultiplayerSynchronizer,double>(set_delta_interval);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)local_108);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_118,(char ***)"get_delta_interval",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar9 = create_method_bind<MultiplayerSynchronizer,double>(get_delta_interval);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)local_108);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  local_a8 = (Variant *)0x106cd1;
  local_a0 = 0;
  local_78 = &local_a8;
  D_METHODP((char *)&local_118,(char ***)"set_replication_config",uVar10);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar9 = create_method_bind<MultiplayerSynchronizer,Ref<SceneReplicationConfig>>
                     (set_replication_config);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)local_108);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_118,(char ***)"get_replication_config",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar9 = create_method_bind<MultiplayerSynchronizer,Ref<SceneReplicationConfig>>
                     (get_replication_config);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)local_108);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  local_a8 = (Variant *)&_LC67;
  local_a0 = 0;
  local_78 = &local_a8;
  D_METHODP((char *)&local_118,(char ***)"set_visibility_update_mode",uVar10);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar9 = create_method_bind<MultiplayerSynchronizer,MultiplayerSynchronizer::VisibilityUpdateMode>
                     (set_visibility_update_mode);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)local_108);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_118,(char ***)"get_visibility_update_mode",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar9 = create_method_bind<MultiplayerSynchronizer,MultiplayerSynchronizer::VisibilityUpdateMode>
                     (get_visibility_update_mode);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)local_108);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  local_a8 = (Variant *)0x106d41;
  local_a0 = 0;
  local_78 = &local_a8;
  D_METHODP((char *)&local_118,(char ***)"update_visibility",uVar10);
  Variant::Variant((Variant *)&local_78,0);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_a8 = (Variant *)&local_78;
  pMVar9 = create_method_bind<MultiplayerSynchronizer,int>(update_visibility);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_118,&local_a8,1);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar2 = Variant::needs_deinit[(int)local_78];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[(int)local_78];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)local_108);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  local_a8 = (Variant *)0x106c6f;
  local_a0 = 0;
  local_78 = &local_a8;
  D_METHODP((char *)&local_118,(char ***)"set_visibility_public",uVar10);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar9 = create_method_bind<MultiplayerSynchronizer,bool>(set_visibility_public);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)local_108);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_118,(char ***)"is_visibility_public",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar9 = create_method_bind<MultiplayerSynchronizer,bool>(is_visibility_public);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)local_108);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  local_a0 = 0;
  local_a8 = (Variant *)0x106d87;
  local_78 = &local_a8;
  D_METHODP((char *)&local_118,(char ***)"add_visibility_filter",uVar10);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar9 = create_method_bind<MultiplayerSynchronizer,Callable>(add_visibility_filter);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)local_108);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  local_a0 = 0;
  local_a8 = (Variant *)0x106d87;
  local_78 = &local_a8;
  D_METHODP((char *)&local_118,(char ***)"remove_visibility_filter",uVar10);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar9 = create_method_bind<MultiplayerSynchronizer,Callable>(remove_visibility_filter);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)local_108);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  local_88 = 0;
  local_98 = puVar6;
  puStack_90 = puVar7;
  auStack_70._0_8_ = &puStack_90;
  local_78 = (Variant **)&local_98;
  D_METHODP((char *)&local_118,(char ***)"set_visibility_for",uVar10);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar9 = create_method_bind<MultiplayerSynchronizer,int,bool>(set_visibility_for);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)local_108);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  local_98 = &_LC56;
  puStack_90 = (undefined *)0x0;
  local_78 = (Variant **)&local_98;
  D_METHODP((char *)&local_118,(char ***)"get_visibility_for",uVar10);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar9 = create_method_bind<MultiplayerSynchronizer,bool,int>(get_visibility_for);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)local_108);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_158,true);
  _scs_create((char *)&local_160,true);
  local_118 = "";
  local_168 = 0;
  local_170 = 0;
  local_110 = 0;
  String::parse_latin1((StrRange *)&local_170);
  local_178 = 0;
  local_118 = "root_path";
  local_110 = 9;
  String::parse_latin1((StrRange *)&local_178);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_118,0x16,(StrRange *)&local_178,0,(StrRange *)&local_170,6,
             (StrRange *)&local_168);
  local_180 = 0;
  local_148 = "MultiplayerSynchronizer";
  local_140 = 0x17;
  String::parse_latin1((StrRange *)&local_180);
  StringName::StringName((StringName *)&local_148,(String *)&local_180,false);
  ClassDB::add_property
            ((StringName *)&local_148,(PropertyInfo *)&local_118,(StringName *)&local_160,
             (StringName *)&local_158,-1);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  if ((((StringName::configured != '\0') &&
       ((local_168 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_160 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_158,true);
  _scs_create((char *)&local_160,true);
  local_118 = "0,5,0.001,suffix:s";
  local_168 = 0;
  local_170 = 0;
  local_110 = 0x12;
  String::parse_latin1((StrRange *)&local_170);
  local_118 = "replication_interval";
  local_178 = 0;
  local_110 = 0x14;
  String::parse_latin1((StrRange *)&local_178);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_118,3,(StrRange *)&local_178,1,(StrRange *)&local_170,6,
             (StrRange *)&local_168);
  local_148 = "MultiplayerSynchronizer";
  local_180 = 0;
  local_140 = 0x17;
  String::parse_latin1((StrRange *)&local_180);
  StringName::StringName((StringName *)&local_148,(String *)&local_180,false);
  ClassDB::add_property
            ((StringName *)&local_148,(PropertyInfo *)&local_118,(StringName *)&local_160,
             (StringName *)&local_158,-1);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  if (((StringName::configured != '\0') &&
      ((local_168 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_160 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_158 != (char *)0x0)))) {
    StringName::unref();
  }
  _scs_create((char *)&local_158,true);
  _scs_create((char *)&local_160,true);
  local_118 = "0,5,0.001,suffix:s";
  local_168 = 0;
  local_170 = 0;
  local_110 = 0x12;
  String::parse_latin1((StrRange *)&local_170);
  local_118 = "delta_interval";
  local_178 = 0;
  local_110 = 0xe;
  String::parse_latin1((StrRange *)&local_178);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_118,3,(StrRange *)&local_178,1,(StrRange *)&local_170,6,
             (StrRange *)&local_168);
  local_148 = "MultiplayerSynchronizer";
  local_180 = 0;
  local_140 = 0x17;
  String::parse_latin1((StrRange *)&local_180);
  StringName::StringName((StringName *)&local_148,(String *)&local_180,false);
  ClassDB::add_property
            ((StringName *)&local_148,(PropertyInfo *)&local_118,(StringName *)&local_160,
             (StringName *)&local_158,-1);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  if ((((StringName::configured != '\0') &&
       ((local_168 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_160 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_158,true);
  _scs_create((char *)&local_160,true);
  local_118 = "SceneReplicationConfig";
  local_168 = 0;
  local_170 = 0;
  local_110 = 0x16;
  String::parse_latin1((StrRange *)&local_170);
  local_118 = "replication_config";
  local_178 = 0;
  local_110 = 0x12;
  String::parse_latin1((StrRange *)&local_178);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_118,0x18,(StrRange *)&local_178,0x11,(StrRange *)&local_170,
             0x4000002,(StrRange *)&local_168);
  local_148 = "MultiplayerSynchronizer";
  local_180 = 0;
  local_140 = 0x17;
  String::parse_latin1((StrRange *)&local_180);
  StringName::StringName((StringName *)&local_148,(String *)&local_180,false);
  ClassDB::add_property
            ((StringName *)&local_148,(PropertyInfo *)&local_118,(StringName *)&local_160,
             (StringName *)&local_158,-1);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  if ((((StringName::configured != '\0') &&
       ((local_168 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_160 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_158,true);
  _scs_create((char *)&local_160,true);
  local_118 = "Idle,Physics,None";
  local_168 = 0;
  local_170 = 0;
  local_110 = 0x11;
  String::parse_latin1((StrRange *)&local_170);
  local_118 = "visibility_update_mode";
  local_178 = 0;
  local_110 = 0x16;
  String::parse_latin1((StrRange *)&local_178);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_118,2,(StrRange *)&local_178,2,(StrRange *)&local_170,6,
             (StrRange *)&local_168);
  local_148 = "MultiplayerSynchronizer";
  local_180 = 0;
  local_140 = 0x17;
  String::parse_latin1((StrRange *)&local_180);
  StringName::StringName((StringName *)&local_148,(String *)&local_180,false);
  ClassDB::add_property
            ((StringName *)&local_148,(PropertyInfo *)&local_118,(StringName *)&local_160,
             (StringName *)&local_158,-1);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  if ((((StringName::configured != '\0') &&
       ((local_168 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_160 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_158,true);
  _scs_create((char *)&local_160,true);
  local_118 = "";
  local_168 = 0;
  local_170 = 0;
  local_110 = 0;
  String::parse_latin1((StrRange *)&local_170);
  local_118 = "public_visibility";
  local_178 = 0;
  local_110 = 0x11;
  String::parse_latin1((StrRange *)&local_178);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_118,1,(StrRange *)&local_178,0,(StrRange *)&local_170,6,
             (StrRange *)&local_168);
  local_148 = "MultiplayerSynchronizer";
  local_180 = 0;
  local_140 = 0x17;
  String::parse_latin1((StrRange *)&local_180);
  StringName::StringName((StringName *)&local_148,(String *)&local_180,false);
  ClassDB::add_property
            ((StringName *)&local_148,(PropertyInfo *)&local_118,(StringName *)&local_160,
             (StringName *)&local_158,-1);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  if ((((StringName::configured != '\0') &&
       ((local_168 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_160 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_148,"VISIBILITY_PROCESS_IDLE",false);
  local_118 = "VISIBILITY_PROCESS_IDLE";
  local_160 = 0;
  local_110 = 0x17;
  String::parse_latin1((StrRange *)&local_160);
  GetTypeInfo<MultiplayerSynchronizer::VisibilityUpdateMode,void>::get_class_info
            ((GetTypeInfo<MultiplayerSynchronizer::VisibilityUpdateMode,void> *)&local_118);
  local_158 = (char *)local_108._0_8_;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_108._8_8_;
  local_108 = auVar3 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  local_118 = "MultiplayerSynchronizer";
  local_168 = 0;
  local_110 = 0x17;
  String::parse_latin1((StrRange *)&local_168);
  StringName::StringName((StringName *)&local_118,(String *)&local_168,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_118,(StringName *)&local_158,(StringName *)&local_148,0,false);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_148,"VISIBILITY_PROCESS_PHYSICS",false);
  local_118 = "VISIBILITY_PROCESS_PHYSICS";
  local_160 = 0;
  local_110 = 0x1a;
  String::parse_latin1((StrRange *)&local_160);
  GetTypeInfo<MultiplayerSynchronizer::VisibilityUpdateMode,void>::get_class_info
            ((GetTypeInfo<MultiplayerSynchronizer::VisibilityUpdateMode,void> *)&local_118);
  local_158 = (char *)local_108._0_8_;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_108._8_8_;
  local_108 = auVar4 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  local_118 = "MultiplayerSynchronizer";
  local_168 = 0;
  local_110 = 0x17;
  String::parse_latin1((StrRange *)&local_168);
  StringName::StringName((StringName *)&local_118,(String *)&local_168,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_118,(StringName *)&local_158,(StringName *)&local_148,1,false);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_148,"VISIBILITY_PROCESS_NONE",false);
  local_118 = "VISIBILITY_PROCESS_NONE";
  local_160 = 0;
  local_110 = 0x17;
  String::parse_latin1((StrRange *)&local_160);
  GetTypeInfo<MultiplayerSynchronizer::VisibilityUpdateMode,void>::get_class_info
            ((GetTypeInfo<MultiplayerSynchronizer::VisibilityUpdateMode,void> *)&local_118);
  local_158 = (char *)local_108._0_8_;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = local_108._8_8_;
  local_108 = auVar5 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  local_118 = "MultiplayerSynchronizer";
  local_168 = 0;
  local_110 = 0x17;
  String::parse_latin1((StrRange *)&local_168);
  StringName::StringName((StringName *)&local_118,(String *)&local_168,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_118,(StringName *)&local_158,(StringName *)&local_148,2,false);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  local_158 = (char *)0x0;
  local_118 = "synchronized";
  local_110 = 0xc;
  String::parse_latin1((StrRange *)&local_158);
  local_118 = (char *)0x0;
  local_110 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 6;
  local_e0 = 1;
  local_d8[0] = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_108 = (undefined1  [16])0x0;
  if (local_158 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_118,(CowData *)&local_158);
  }
  local_160 = 0;
  local_148 = "MultiplayerSynchronizer";
  local_140 = 0x17;
  String::parse_latin1((StrRange *)&local_160);
  StringName::StringName((StringName *)&local_148,(String *)&local_160,false);
  ClassDB::add_signal((StringName *)&local_148,(MethodInfo *)&local_118);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  lVar8 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    plVar1 = (long *)(local_b0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b0 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  CowData<Variant>::_unref((CowData<Variant> *)&local_c8);
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  local_158 = (char *)0x0;
  local_118 = "delta_synchronized";
  local_110 = 0x12;
  String::parse_latin1((StrRange *)&local_158);
  local_118 = (char *)0x0;
  local_110 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 6;
  local_e0 = 1;
  local_d8[0] = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_108 = (undefined1  [16])0x0;
  if (local_158 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_118,(CowData *)&local_158);
  }
  local_160 = 0;
  local_148 = "MultiplayerSynchronizer";
  local_140 = 0x17;
  String::parse_latin1((StrRange *)&local_160);
  StringName::StringName((StringName *)&local_148,(String *)&local_160,false);
  ClassDB::add_signal((StringName *)&local_148,(MethodInfo *)&local_118);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  lVar8 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    plVar1 = (long *)(local_b0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b0 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  CowData<Variant>::_unref((CowData<Variant> *)&local_c8);
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  local_118 = "";
  local_168 = 0;
  local_170 = 0;
  local_110 = 0;
  String::parse_latin1((StrRange *)&local_170);
  local_118 = "for_peer";
  local_178 = 0;
  local_110 = 8;
  String::parse_latin1((StrRange *)&local_178);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_148,2,(StrRange *)&local_178,0,(StrRange *)&local_170,6,
             (StrRange *)&local_168);
  local_160 = 0;
  local_118 = "visibility_changed";
  local_110 = 0x12;
  String::parse_latin1((StrRange *)&local_160);
  local_118 = (char *)0x0;
  local_110 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 6;
  local_e0 = 1;
  local_d8[0] = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_108 = (undefined1  [16])0x0;
  if (local_160 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_118,(CowData *)&local_160);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_d8,(PropertyInfo *)&local_148);
  local_158 = "MultiplayerSynchronizer";
  local_180 = 0;
  local_150 = 0x17;
  String::parse_latin1((StrRange *)&local_180);
  StringName::StringName((StringName *)&local_158,(String *)&local_180,false);
  ClassDB::add_signal((StringName *)&local_158,(MethodInfo *)&local_118);
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  lVar8 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    plVar1 = (long *)(local_b0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b0 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  CowData<Variant>::_unref((CowData<Variant> *)&local_c8);
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  if ((StringName::configured != '\0') && (local_168 != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x001046b7) */
/* WARNING: Removing unreachable block (ram,0x001046c9) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MultiplayerSynchronizer::get_state(List<NodePath, DefaultAllocator> const&, Object*,
   Vector<Variant>&, Vector<Variant const*>&) */

undefined8
MultiplayerSynchronizer::get_state(List *param_1,Object *param_2,Vector *param_3,Vector *param_4)

{
  long *plVar1;
  NodePath *pNVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  Object *pOVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  char *pcVar12;
  undefined4 *puVar13;
  Vector *pVVar14;
  undefined8 *puVar15;
  Vector *extraout_RDX;
  Object *pOVar16;
  List *pLVar17;
  CowData<Variant> *this;
  ulong uVar18;
  ulong uVar19;
  long in_FS_OFFSET;
  CowData<Variant> *local_a8;
  CowData<Variant_const*> *local_98;
  undefined8 local_78;
  NodePath local_70 [8];
  char *local_68;
  undefined8 local_60;
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (Object *)0x0) {
    _err_print_error("get_state","modules/multiplayer/multiplayer_synchronizer.cpp",0x9d,
                     "Parameter \"p_obj\" is null.",0,0);
    uVar10 = 0x1f;
    goto LAB_00104752;
  }
  pcVar12 = (char *)param_4;
  if (*(long *)param_1 == 0) {
    if (*(long *)(param_3 + 8) == 0) {
LAB_001048e0:
      lVar7 = *(long *)(param_4 + 8);
      if ((lVar7 == 0) || (*(long *)(lVar7 + -8) == 0)) goto LAB_00104584;
LAB_00104901:
      LOCK();
      plVar1 = (long *)(lVar7 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar7 = *(long *)(param_4 + 8);
        *(undefined8 *)(param_4 + 8) = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
        puVar9 = *(undefined8 **)param_1;
      }
      else {
        *(undefined8 *)(param_4 + 8) = 0;
        puVar9 = *(undefined8 **)param_1;
      }
LAB_00104587:
      if (puVar9 != (undefined8 *)0x0) goto LAB_0010458c;
    }
    else {
      if (*(long *)(*(long *)(param_3 + 8) + -8) != 0) {
LAB_00104403:
        local_a8 = (CowData<Variant> *)(param_3 + 8);
        CowData<Variant>::_unref(local_a8);
        pVVar14 = *(Vector **)(param_3 + 8);
        goto LAB_00104411;
      }
      lVar7 = *(long *)(param_4 + 8);
      if (lVar7 != 0) {
        uVar18 = 0;
        goto LAB_00104440;
      }
    }
  }
  else {
    uVar19 = (ulong)*(int *)(*(long *)param_1 + 0x10);
    this = (CowData<Variant> *)(param_3 + 8);
    if ((long)uVar19 < 0) {
      pcVar12 = "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER";
      _err_print_error("resize","./core/templates/cowdata.h",0x157,
                       "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
      pVVar14 = *(Vector **)(param_3 + 8);
      goto LAB_00104411;
    }
    if (*(long *)(param_3 + 8) == 0) {
      if (uVar19 == 0) goto LAB_001048e0;
      uVar18 = 0;
      CowData<Variant>::_copy_on_write(this);
LAB_00104932:
      uVar11 = uVar19 * 0x18 - 1;
      uVar11 = uVar11 >> 1 | uVar11;
      uVar11 = uVar11 | uVar11 >> 2;
      uVar11 = uVar11 >> 4 | uVar11;
      uVar11 = uVar11 | uVar11 >> 8;
      uVar11 = uVar11 | uVar11 >> 0x10;
      pOVar8 = (Object *)((uVar11 | uVar11 >> 0x20) + 1);
      if ((long)uVar19 <= (long)uVar18) {
        pOVar16 = (Object *)0x0;
        goto LAB_00104784;
      }
LAB_00104a30:
      if (uVar18 == 0) {
        puVar9 = (undefined8 *)Memory::alloc_static((ulong)(pOVar8 + 0x10),false);
        if (puVar9 != (undefined8 *)0x0) {
          pVVar14 = (Vector *)(puVar9 + 2);
          *puVar9 = 1;
          puVar9[1] = 0;
          *(Vector **)(param_3 + 8) = pVVar14;
          lVar7 = 0;
LAB_00104379:
          if (lVar7 < (long)uVar19) {
            uVar18 = lVar7 + 1;
            *(undefined4 *)(pVVar14 + lVar7 * 0x18) = 0;
            *(undefined1 (*) [16])(pVVar14 + lVar7 * 0x18 + 8) = (undefined1  [16])0x0;
            if ((long)uVar18 < (long)uVar19) {
              lVar7 = uVar18 * 0x18;
              do {
                uVar18 = uVar18 + 1;
                puVar13 = (undefined4 *)(*(long *)(param_3 + 8) + lVar7);
                lVar7 = lVar7 + 0x18;
                *puVar13 = 0;
                *(undefined1 (*) [16])(puVar13 + 2) = (undefined1  [16])0x0;
              } while (uVar19 != uVar18);
            }
            pVVar14 = *(Vector **)(param_3 + 8);
            if (*(Vector **)(param_3 + 8) == (Vector *)0x0) {
              _DAT_00000000 = 0;
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
          }
          goto LAB_001043d7;
        }
        pcVar12 = "Parameter \"mem_new\" is null.";
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
        pVVar14 = *(Vector **)(param_3 + 8);
      }
      else {
        iVar5 = CowData<Variant>::_realloc(this,(long)pOVar8);
        if (iVar5 == 0) {
LAB_00104368:
          pVVar14 = *(Vector **)(param_3 + 8);
          if (pVVar14 == (Vector *)0x0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          lVar7 = *(long *)(pVVar14 + -8);
          goto LAB_00104379;
        }
        pVVar14 = *(Vector **)(param_3 + 8);
      }
LAB_00104411:
      if (pVVar14 == (Vector *)0x0) goto LAB_001048e0;
LAB_0010441a:
      uVar18 = *(ulong *)(pVVar14 + -8);
      if (-1 < (long)uVar18) goto LAB_00104433;
      _err_print_error("resize","./core/templates/cowdata.h",0x157,
                       "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
      puVar9 = *(undefined8 **)param_1;
      goto LAB_00104587;
    }
    uVar18 = *(ulong *)(*(long *)(param_3 + 8) + -8);
    if (uVar19 != uVar18) {
      if (uVar19 == 0) goto LAB_00104403;
      CowData<Variant>::_copy_on_write(this);
      if (uVar18 * 0x18 == 0) goto LAB_00104932;
      uVar6 = uVar18 * 0x18 - 1;
      uVar11 = uVar19 * 0x18 - 1;
      uVar11 = uVar11 >> 1 | uVar11;
      uVar11 = uVar11 >> 2 | uVar11;
      uVar11 = uVar11 >> 4 | uVar11;
      uVar11 = uVar11 >> 8 | uVar11;
      uVar11 = uVar11 >> 0x10 | uVar11;
      uVar11 = uVar11 >> 0x20 | uVar11;
      pOVar8 = (Object *)(uVar11 + 1);
      uVar6 = uVar6 | uVar6 >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      pcVar12 = (char *)(uVar6 >> 0x20);
      uVar6 = uVar6 | (ulong)pcVar12;
      if ((long)uVar18 < (long)uVar19) {
        if (uVar6 != uVar11) goto LAB_00104a30;
        goto LAB_00104368;
      }
      pOVar16 = (Object *)(uVar6 + 1);
LAB_00104784:
      pcVar12 = *(char **)(param_3 + 8);
      uVar18 = uVar19;
      while( true ) {
        if ((Vector *)pcVar12 == (Vector *)0x0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        if (*(ulong *)((Vector *)pcVar12 + -8) <= uVar18) break;
        if (Variant::needs_deinit[*(int *)((Vector *)pcVar12 + uVar18 * 0x18)] != '\0') {
          Variant::_clear_internal();
          pcVar12 = *(char **)(param_3 + 8);
        }
        uVar18 = uVar18 + 1;
      }
      pVVar14 = (Vector *)pcVar12;
      if (pOVar8 != pOVar16) {
        iVar5 = CowData<Variant>::_realloc(this,(long)pOVar8);
        pVVar14 = *(Vector **)(param_3 + 8);
        if (iVar5 != 0) goto LAB_00104411;
        if (pVVar14 == (Vector *)0x0) {
          uVar10 = get_state((List *)this,pOVar8,(Vector *)0x0,(Vector *)pcVar12);
          return uVar10;
        }
      }
LAB_001043d7:
      *(ulong *)(pVVar14 + -8) = uVar19;
      goto LAB_0010441a;
    }
LAB_00104433:
    lVar7 = *(long *)(param_4 + 8);
    if (lVar7 == 0) {
      if (uVar18 == 0) goto LAB_00104584;
      uVar19 = 0;
      CowData<Variant_const*>::_copy_on_write((CowData<Variant_const*> *)(param_4 + 8));
      pOVar8 = (Object *)0x0;
    }
    else {
LAB_00104440:
      local_98 = (CowData<Variant_const*> *)(param_4 + 8);
      uVar19 = *(ulong *)(lVar7 + -8);
      if (uVar19 == uVar18) goto LAB_00104584;
      if (uVar18 == 0) goto LAB_00104901;
      CowData<Variant_const*>::_copy_on_write(local_98);
      pOVar8 = (Object *)(uVar19 * 8);
      if (pOVar8 != (Object *)0x0) {
        uVar11 = (ulong)(pOVar8 + -1) | (ulong)(pOVar8 + -1) >> 1;
        uVar11 = uVar11 | uVar11 >> 2;
        uVar11 = uVar11 | uVar11 >> 4;
        uVar11 = uVar11 | uVar11 >> 8;
        uVar11 = uVar11 | uVar11 >> 0x10;
        pOVar8 = (Object *)((uVar11 | uVar11 >> 0x20) + 1);
      }
    }
    local_98 = (CowData<Variant_const*> *)(param_4 + 8);
    if (uVar18 * 8 == 0) {
LAB_00104ba0:
      _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                       "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                       ,0,0);
      puVar9 = *(undefined8 **)param_1;
      goto LAB_00104587;
    }
    uVar11 = uVar18 * 8 - 1;
    uVar11 = uVar11 | uVar11 >> 1;
    uVar11 = uVar11 | uVar11 >> 2;
    uVar11 = uVar11 | uVar11 >> 4;
    uVar11 = uVar11 | uVar11 >> 8;
    uVar11 = uVar11 | uVar11 >> 0x10;
    pVVar14 = (Vector *)(uVar11 >> 0x20);
    pLVar17 = (List *)(uVar11 | (ulong)pVVar14);
    pOVar16 = (Object *)(pLVar17 + 1);
    if (pOVar16 == (Object *)0x0) goto LAB_00104ba0;
    if ((long)uVar18 <= (long)uVar19) {
      if ((pOVar16 == pOVar8) ||
         (iVar5 = CowData<Variant_const*>::_realloc(local_98,(long)pOVar16), pVVar14 = extraout_RDX,
         pLVar17 = (List *)local_98, iVar5 == 0)) {
        if (*(long *)(param_4 + 8) == 0) {
          uVar10 = get_state(pLVar17,pOVar16,pVVar14,(Vector *)pcVar12);
          return uVar10;
        }
        *(ulong *)(*(long *)(param_4 + 8) + -8) = uVar18;
      }
LAB_00104584:
      puVar9 = *(undefined8 **)param_1;
      goto LAB_00104587;
    }
    if (pOVar16 == pOVar8) {
LAB_00104a82:
      puVar15 = *(undefined8 **)(param_4 + 8);
      if (puVar15 == (undefined8 *)0x0) {
        uVar10 = get_state(pLVar17,pOVar16,(Vector *)0x0,(Vector *)pcVar12);
        return uVar10;
      }
    }
    else {
      if (uVar19 != 0) {
        iVar5 = CowData<Variant_const*>::_realloc(local_98,(long)pOVar16);
        pLVar17 = (List *)local_98;
        if (iVar5 != 0) goto LAB_00104584;
        goto LAB_00104a82;
      }
      puVar9 = (undefined8 *)Memory::alloc_static((ulong)(pLVar17 + 0x11),false);
      if (puVar9 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
        puVar9 = *(undefined8 **)param_1;
        goto LAB_00104587;
      }
      puVar15 = puVar9 + 2;
      *puVar9 = 1;
      puVar9[1] = 0;
      *(undefined8 **)(param_4 + 8) = puVar15;
    }
    puVar9 = *(undefined8 **)param_1;
    puVar15[-1] = uVar18;
    if (puVar9 == (undefined8 *)0x0) goto LAB_00104558;
LAB_0010458c:
    local_a8 = (CowData<Variant> *)(param_3 + 8);
    local_98 = (CowData<Variant_const*> *)(param_4 + 8);
    pNVar2 = (NodePath *)*puVar9;
    if (pNVar2 != (NodePath *)0x0) {
      iVar5 = NodePath::get_name_count();
      if ((iVar5 == 0) ||
         (param_2 = (Object *)_get_prop_target(param_2,pNVar2), param_2 != (Object *)0x0)) {
        NodePath::get_subnames();
        Object::get_indexed((Vector *)local_58,(bool *)param_2);
        if (*(long *)(param_3 + 8) != 0) {
          lVar7 = *(long *)(*(long *)(param_3 + 8) + -8);
          if (lVar7 < 1) goto LAB_001046e3;
          CowData<Variant>::_copy_on_write(local_a8);
          pVVar14 = *(Vector **)(param_3 + 8);
          if (pVVar14 == (Vector *)local_58) {
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
          }
          else {
            if (Variant::needs_deinit[*(int *)pVVar14] != '\0') {
              Variant::_clear_internal();
            }
            *(undefined4 *)pVVar14 = 0;
            *(int *)pVVar14 = local_58[0];
            *(undefined8 *)(pVVar14 + 8) = local_50;
            *(undefined8 *)(pVVar14 + 0x10) = uStack_48;
          }
          CowData<StringName>::_unref((CowData<StringName> *)&local_60);
          lVar3 = *(long *)(param_3 + 8);
          if (lVar3 == 0) {
            lVar7 = 0;
LAB_00104853:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,0,lVar7,"p_index","size()","",false,
                       true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          lVar7 = *(long *)(lVar3 + -8);
          if (lVar7 < 1) goto LAB_00104853;
          if (*(long *)(param_4 + 8) != 0) {
            lVar7 = *(long *)(*(long *)(param_4 + 8) + -8);
            if (0 < lVar7) {
              CowData<Variant_const*>::_copy_on_write(local_98);
              **(long **)(param_4 + 8) = lVar3;
              NodePath::NodePath(local_70,pNVar2);
              local_68 = "Property \'%s\' not found.";
              local_78 = 0;
              local_60 = 0x18;
              String::parse_latin1((StrRange *)&local_78);
              vformat<NodePath>((CowData<char32_t> *)&local_68,(StrRange *)&local_78,local_70);
              _err_print_error("get_state","modules/multiplayer/multiplayer_synchronizer.cpp",0xa7,
                               "Condition \"!valid\" is true. Returning: ERR_INVALID_DATA",
                               (CowData<char32_t> *)&local_68,0,0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
              NodePath::~NodePath(local_70);
              uVar10 = 0x1e;
              goto LAB_00104752;
            }
            goto LAB_001046e3;
          }
        }
        lVar7 = 0;
LAB_001046e3:
        _err_print_index_error
                  ("operator[]","./core/templates/vector.h",0x38,0,lVar7,"p_index",
                   "((Vector<T> *)(this))->_cowdata.size()","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      _err_print_error("get_state","modules/multiplayer/multiplayer_synchronizer.cpp",0xa4,
                       "Parameter \"obj\" is null.",0,0);
      uVar10 = 1;
      goto LAB_00104752;
    }
  }
LAB_00104558:
  uVar10 = 0;
LAB_00104752:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<MultiplayerSynchronizer::Watcher>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<MultiplayerSynchronizer::Watcher>::_copy_on_write
          (CowData<MultiplayerSynchronizer::Watcher> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  NodePath *pNVar4;
  ulong uVar5;
  long lVar6;
  NodePath *this_00;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  if (lVar1 * 0x28 != 0) {
    uVar5 = lVar1 * 0x28 - 1;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar3 != (undefined8 *)0x0) {
    lVar6 = 0;
    *puVar3 = 1;
    puVar3[1] = lVar1;
    this_00 = (NodePath *)(puVar3 + 2);
    if (lVar1 != 0) {
      do {
        pNVar4 = this_00 + *(long *)this + (-0x10 - (long)puVar3);
        lVar6 = lVar6 + 1;
        NodePath::NodePath(this_00,pNVar4);
        *(undefined8 *)(this_00 + 8) = *(undefined8 *)(pNVar4 + 8);
        Variant::Variant((Variant *)(this_00 + 0x10),(Variant *)(pNVar4 + 0x10));
        this_00 = this_00 + 0x28;
      } while (lVar1 != lVar6);
    }
    _unref(this);
    *(NodePath **)this = (NodePath *)(puVar3 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* MultiplayerSynchronizer::reset() */

void __thiscall MultiplayerSynchronizer::reset(MultiplayerSynchronizer *this)

{
  *(undefined4 *)(this + 0x4ac) = 0;
  *(undefined2 *)(this + 0x4a8) = 0;
  *(undefined8 *)(this + 0x4a0) = 0;
  *(undefined8 *)(this + 0x490) = 0;
  this[0x4b0] = (MultiplayerSynchronizer)0x0;
  if ((*(long *)(this + 0x488) != 0) && (*(long *)(*(long *)(this + 0x488) + -8) != 0)) {
    CowData<MultiplayerSynchronizer::Watcher>::_unref
              ((CowData<MultiplayerSynchronizer::Watcher> *)(this + 0x488));
    return;
  }
  return;
}



/* MultiplayerSynchronizer::_stop() [clone .part.0] */

void __thiscall MultiplayerSynchronizer::_stop(MultiplayerSynchronizer *this)

{
  code *pcVar1;
  char cVar2;
  long lVar3;
  long in_FS_OFFSET;
  Object *local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 0x498) = 0;
  if (((byte)this[0x2fa] & 0x40) != 0) {
    lVar3 = Node::get_node_or_null((NodePath *)this);
    if (lVar3 != 0) {
      Node::get_multiplayer();
      pcVar1 = *(code **)(*(long *)local_50 + 400);
      Variant::Variant((Variant *)local_48,(Object *)this);
      (*pcVar1)(local_50,lVar3,(Variant *)local_48);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (local_50 != (Object *)0x0) {
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          cVar2 = predelete_handler(local_50);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)local_50 + 0x140))(local_50);
            Memory::free_static(local_50,false);
          }
        }
      }
    }
  }
  *(undefined4 *)(this + 0x4ac) = 0;
  *(undefined2 *)(this + 0x4a8) = 0;
  *(undefined8 *)(this + 0x4a0) = 0;
  *(undefined8 *)(this + 0x490) = 0;
  this[0x4b0] = (MultiplayerSynchronizer)0x0;
  if ((*(long *)(this + 0x488) == 0) || (*(long *)(*(long *)(this + 0x488) + -8) == 0)) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    CowData<MultiplayerSynchronizer::Watcher>::_unref
              ((CowData<MultiplayerSynchronizer::Watcher> *)(this + 0x488));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MultiplayerSynchronizer::_stop() */

void __thiscall MultiplayerSynchronizer::_stop(MultiplayerSynchronizer *this)

{
  long lVar1;
  
  lVar1 = Engine::get_singleton();
  if (*(char *)(lVar1 + 0xc0) == '\0') {
    _stop(this);
    return;
  }
  return;
}



/* MultiplayerSynchronizer::_start() */

void __thiscall MultiplayerSynchronizer::_start(MultiplayerSynchronizer *this)

{
  code *pcVar1;
  char cVar2;
  long lVar3;
  long in_FS_OFFSET;
  Object *local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = Engine::get_singleton();
  if (*(char *)(lVar3 + 0xc0) == '\0') {
    *(undefined4 *)(this + 0x4ac) = 0;
    *(undefined2 *)(this + 0x4a8) = 0;
    *(undefined8 *)(this + 0x4a0) = 0;
    this[0x4b0] = (MultiplayerSynchronizer)0x0;
    *(undefined1 (*) [16])(this + 0x490) = (undefined1  [16])0x0;
    if ((*(long *)(this + 0x488) != 0) && (*(long *)(*(long *)(this + 0x488) + -8) != 0)) {
      CowData<MultiplayerSynchronizer::Watcher>::_unref
                ((CowData<MultiplayerSynchronizer::Watcher> *)(this + 0x488));
    }
    if (((byte)this[0x2fa] & 0x40) != 0) {
      lVar3 = Node::get_node_or_null((NodePath *)this);
      if (lVar3 != 0) {
        *(undefined8 *)(this + 0x498) = *(undefined8 *)(lVar3 + 0x60);
        Node::get_multiplayer();
        pcVar1 = *(code **)(*(long *)local_50 + 0x188);
        Variant::Variant((Variant *)local_48,(Object *)this);
        (*pcVar1)(local_50,lVar3,(Variant *)local_48);
        if (Variant::needs_deinit[local_48[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (local_50 != (Object *)0x0) {
          cVar2 = RefCounted::unreference();
          if (cVar2 != '\0') {
            cVar2 = predelete_handler(local_50);
            if (cVar2 != '\0') {
              (**(code **)(*(long *)local_50 + 0x140))(local_50);
              Memory::free_static(local_50,false);
            }
          }
        }
        lVar3 = Engine::get_singleton();
        if (*(char *)(lVar3 + 0xc0) == '\0') {
          if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
            _update_process(this);
            return;
          }
          goto LAB_00105150;
        }
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00105150:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MultiplayerSynchronizer::set_root_path(NodePath const&) */

void __thiscall
MultiplayerSynchronizer::set_root_path(MultiplayerSynchronizer *this,NodePath *param_1)

{
  long lVar1;
  char cVar2;
  
  cVar2 = NodePath::operator==(param_1,(NodePath *)(this + 0x410));
  if (cVar2 != '\0') {
    return;
  }
  lVar1 = Engine::get_singleton();
  if (*(char *)(lVar1 + 0xc0) == '\0') {
    _stop(this);
  }
  NodePath::operator=((NodePath *)(this + 0x410),param_1);
  _start(this);
  Node::update_configuration_warnings();
  return;
}



/* MultiplayerSynchronizer::_notification(int) */

void __thiscall MultiplayerSynchronizer::_notification(MultiplayerSynchronizer *this,int param_1)

{
  long lVar1;
  char cVar2;
  
  lVar1 = Engine::get_singleton();
  if (*(char *)(lVar1 + 0xc0) == '\0') {
    cVar2 = NodePath::is_empty();
    if (cVar2 == '\0') {
      if (param_1 == 0xb) {
        lVar1 = Engine::get_singleton();
        if (*(char *)(lVar1 + 0xc0) == '\0') {
          _stop(this);
          return;
        }
      }
      else if (param_1 < 0xc) {
        if (param_1 == 10) {
          _start(this);
          return;
        }
      }
      else if (param_1 - 0x19U < 2) {
        lVar1 = Engine::get_singleton();
        if (*(char *)(lVar1 + 0xc0) == '\0') {
          update_visibility(this,0);
          return;
        }
      }
    }
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00105634) */
/* WARNING: Removing unreachable block (ram,0x00105550) */
/* WARNING: Removing unreachable block (ram,0x00105583) */
/* WARNING: Removing unreachable block (ram,0x001059bf) */
/* WARNING: Removing unreachable block (ram,0x00105595) */
/* WARNING: Removing unreachable block (ram,0x0010564b) */
/* WARNING: Removing unreachable block (ram,0x0010566a) */
/* WARNING: Removing unreachable block (ram,0x00105960) */
/* WARNING: Removing unreachable block (ram,0x00105976) */
/* WARNING: Removing unreachable block (ram,0x00105697) */
/* WARNING: Removing unreachable block (ram,0x00105b02) */
/* WARNING: Removing unreachable block (ram,0x001056ab) */
/* WARNING: Removing unreachable block (ram,0x001055a6) */
/* WARNING: Removing unreachable block (ram,0x001055af) */
/* MultiplayerSynchronizer::_watch_changes(unsigned long) */

undefined8 __thiscall
MultiplayerSynchronizer::_watch_changes(MultiplayerSynchronizer *this,ulong param_1)

{
  code *pcVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  undefined1 (*pauVar5) [16];
  NodePath *this_00;
  ulong uVar6;
  undefined8 *puVar7;
  Object *pOVar8;
  Object *pOVar9;
  long lVar10;
  undefined8 *puVar11;
  NodePath *pNVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long in_FS_OFFSET;
  MultiplayerSynchronizer *local_c8;
  long local_b8;
  undefined1 (*local_a0) [16];
  undefined8 local_98;
  NodePath local_90 [8];
  char *local_88;
  undefined8 local_80;
  int local_78 [14];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x408) == 0) {
    uVar13 = 1;
    _err_print_error("_watch_changes","modules/multiplayer/multiplayer_synchronizer.cpp",0x176,
                     "Condition \"replication_config.is_null()\" is true. Returning: FAILED",0,0);
    goto LAB_001056fc;
  }
  plVar4 = (long *)SceneReplicationConfig::get_watch_properties();
  local_a0 = (undefined1 (*) [16])0x0;
  if (((long *)*plVar4 == (long *)0x0) ||
     (pNVar12 = *(NodePath **)*plVar4, pNVar12 == (NodePath *)0x0)) {
    if ((*(long *)(this + 0x488) != 0) && (*(long *)(*(long *)(this + 0x488) + -8) != 0)) {
      CowData<MultiplayerSynchronizer::Watcher>::_unref
                ((CowData<MultiplayerSynchronizer::Watcher> *)(this + 0x488));
    }
LAB_001056f0:
    uVar13 = 0;
  }
  else {
    pauVar5 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined4 *)pauVar5[1] = 0;
    *pauVar5 = (undefined1  [16])0x0;
    local_a0 = pauVar5;
    do {
      this_00 = (NodePath *)operator_new(0x20,DefaultAllocator::alloc);
      *(undefined1 (*) [16])this_00 = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
      NodePath::operator=(this_00,pNVar12);
      lVar10 = *(long *)(*pauVar5 + 8);
      *(undefined1 (**) [16])(this_00 + 0x18) = pauVar5;
      *(undefined8 *)(this_00 + 8) = 0;
      *(long *)(this_00 + 0x10) = lVar10;
      if (lVar10 != 0) {
        *(NodePath **)(lVar10 + 8) = this_00;
      }
      lVar10 = *(long *)*pauVar5;
      *(NodePath **)(*pauVar5 + 8) = this_00;
      if (lVar10 == 0) {
        *(NodePath **)*pauVar5 = this_00;
      }
      pNVar12 = *(NodePath **)(pNVar12 + 8);
      iVar3 = *(int *)pauVar5[1] + 1;
      *(int *)pauVar5[1] = iVar3;
    } while (pNVar12 != (NodePath *)0x0);
    uVar16 = (ulong)iVar3;
    if (*(long *)(this + 0x488) == 0) {
      if (iVar3 == 0) goto LAB_001056f0;
      if (iVar3 < 0) goto LAB_00105aa9;
      CowData<MultiplayerSynchronizer::Watcher>::_copy_on_write
                ((CowData<MultiplayerSynchronizer::Watcher> *)(this + 0x488));
      uVar15 = 0;
LAB_001058be:
      uVar14 = uVar16 * 0x28 - 1;
      uVar14 = uVar14 | uVar14 >> 1;
      uVar14 = uVar14 | uVar14 >> 2;
      uVar14 = uVar14 | uVar14 >> 4;
      uVar14 = uVar14 | uVar14 >> 8;
      uVar14 = uVar14 | uVar14 >> 0x10;
      lVar10 = (uVar14 >> 0x20 | uVar14) + 1;
      if ((long)uVar16 <= (long)uVar15) {
        local_b8 = 0;
        goto LAB_001059df;
      }
LAB_00105912:
      local_c8 = this + 0x488;
      if (uVar15 == 0) {
        puVar7 = (undefined8 *)Memory::alloc_static(lVar10 + 0x10,false);
        if (puVar7 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
        }
        else {
          puVar11 = puVar7 + 2;
          *puVar7 = 1;
          puVar7[1] = 0;
          *(undefined8 **)(this + 0x488) = puVar11;
          lVar10 = 0;
          if (0 < iVar3) goto LAB_00105479;
LAB_001054f5:
          puVar11[-1] = uVar16;
        }
      }
      else {
        iVar3 = CowData<MultiplayerSynchronizer::Watcher>::_realloc((long)local_c8);
        if (iVar3 == 0) {
LAB_0010545c:
          puVar11 = *(undefined8 **)(this + 0x488);
          if (puVar11 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          lVar10 = puVar11[-1];
          if (lVar10 < (long)uVar16) {
LAB_00105479:
            uVar15 = lVar10 + 1;
            puVar11 = puVar11 + lVar10 * 5;
            *puVar11 = 0;
            lVar10 = uVar15 * 0x28;
            puVar11[1] = 0;
            *(undefined4 *)(puVar11 + 2) = 0;
            *(undefined1 (*) [16])(puVar11 + 3) = (undefined1  [16])0x0;
            if ((long)uVar15 < (long)uVar16) {
              do {
                uVar15 = uVar15 + 1;
                puVar7 = (undefined8 *)(*(long *)(this + 0x488) + lVar10);
                lVar10 = lVar10 + 0x28;
                *puVar7 = 0;
                puVar7[1] = 0;
                *(undefined4 *)(puVar7 + 2) = 0;
                *(undefined1 (*) [16])(puVar7 + 3) = (undefined1  [16])0x0;
              } while (uVar16 != uVar15);
            }
            puVar11 = *(undefined8 **)(this + 0x488);
            if (puVar11 == (undefined8 *)0x0) {
              uVar13 = FUN_00106fc8();
              return uVar13;
            }
          }
          goto LAB_001054f5;
        }
      }
LAB_001054f9:
      iVar3 = *(int *)pauVar5[1];
    }
    else {
      uVar15 = *(ulong *)(*(long *)(this + 0x488) + -8);
      if (uVar16 != uVar15) {
        if (-1 < iVar3) {
          if (iVar3 == 0) {
            CowData<MultiplayerSynchronizer::Watcher>::_unref
                      ((CowData<MultiplayerSynchronizer::Watcher> *)(this + 0x488));
            goto LAB_001054f9;
          }
          CowData<MultiplayerSynchronizer::Watcher>::_copy_on_write
                    ((CowData<MultiplayerSynchronizer::Watcher> *)(this + 0x488));
          if (uVar15 * 0x28 == 0) goto LAB_001058be;
          uVar6 = uVar15 * 0x28 - 1;
          uVar14 = uVar16 * 0x28 - 1;
          uVar14 = uVar14 >> 1 | uVar14;
          uVar14 = uVar14 >> 2 | uVar14;
          uVar14 = uVar14 >> 4 | uVar14;
          uVar14 = uVar14 >> 8 | uVar14;
          uVar14 = uVar14 >> 0x10 | uVar14;
          uVar14 = uVar14 >> 0x20 | uVar14;
          lVar10 = uVar14 + 1;
          uVar6 = uVar6 | uVar6 >> 1;
          uVar6 = uVar6 | uVar6 >> 2;
          uVar6 = uVar6 | uVar6 >> 4;
          uVar6 = uVar6 | uVar6 >> 8;
          uVar6 = uVar6 | uVar6 >> 0x10;
          uVar6 = uVar6 | uVar6 >> 0x20;
          if ((long)uVar15 < (long)uVar16) {
            if (uVar6 != uVar14) goto LAB_00105912;
            goto LAB_0010545c;
          }
          local_b8 = uVar6 + 1;
LAB_001059df:
          local_c8 = this + 0x488;
          uVar15 = uVar16;
          while( true ) {
            puVar11 = *(undefined8 **)(this + 0x488);
            if (puVar11 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            if ((ulong)puVar11[-1] <= uVar15) break;
            lVar2 = uVar15 * 5;
            if (Variant::needs_deinit[*(int *)((NodePath *)(puVar11 + lVar2) + 0x10)] != '\0') {
              Variant::_clear_internal();
            }
            uVar15 = uVar15 + 1;
            NodePath::~NodePath((NodePath *)(puVar11 + lVar2));
          }
          if (lVar10 != local_b8) {
            iVar3 = CowData<MultiplayerSynchronizer::Watcher>::_realloc((long)local_c8);
            if (iVar3 != 0) goto LAB_001054f9;
            puVar11 = *(undefined8 **)(this + 0x488);
            if (puVar11 == (undefined8 *)0x0) {
              uVar13 = FUN_00106fde();
              return uVar13;
            }
          }
          goto LAB_001054f5;
        }
LAB_00105aa9:
        _err_print_error("resize","./core/templates/cowdata.h",0x157,
                         "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
        goto LAB_001054f9;
      }
    }
    if (iVar3 == 0) goto LAB_001056f0;
    pOVar8 = (Object *)get_root_node(this);
    if (pOVar8 != (Object *)0x0) {
      CowData<MultiplayerSynchronizer::Watcher>::_copy_on_write
                ((CowData<MultiplayerSynchronizer::Watcher> *)(this + 0x488));
      pNVar12 = *(NodePath **)*pauVar5;
      if (pNVar12 != (NodePath *)0x0) {
        do {
          iVar3 = NodePath::get_name_count();
          pOVar9 = pOVar8;
          if ((iVar3 == 0) ||
             (pOVar9 = (Object *)_get_prop_target(pOVar8,pNVar12), pOVar9 != (Object *)0x0)) {
            NodePath::get_subnames();
            Object::get_indexed((Vector *)local_78,(bool *)pOVar9);
            CowData<StringName>::_unref((CowData<StringName> *)&local_80);
            NodePath::NodePath(local_90,pNVar12);
            local_98 = 0;
            local_88 = "Property \'%s\' not found.";
            local_80 = 0x18;
            String::parse_latin1((StrRange *)&local_98);
            vformat<NodePath>((CowData<char32_t> *)&local_88,(StrRange *)&local_98,local_90);
            _err_print_error("_watch_changes","modules/multiplayer/multiplayer_synchronizer.cpp",
                             0x188,"Condition \"!valid\" is true. Continuing.",
                             (CowData<char32_t> *)&local_88,0,0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
            NodePath::~NodePath(local_90);
            if (Variant::needs_deinit[local_78[0]] != '\0') {
              Variant::_clear_internal();
            }
          }
          else {
            NodePath::NodePath(local_90,pNVar12);
            local_88 = "Node not found for property \'%s\'.";
            local_98 = 0;
            local_80 = 0x21;
            String::parse_latin1((StrRange *)&local_98);
            vformat<NodePath>((CowData<char32_t> *)&local_88,(StrRange *)&local_98,local_90);
            _err_print_error("_watch_changes","modules/multiplayer/multiplayer_synchronizer.cpp",
                             0x186,"Condition \"!obj\" is true. Continuing.",
                             (CowData<char32_t> *)&local_88,0,0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
            NodePath::~NodePath(local_90);
          }
          pNVar12 = *(NodePath **)(pNVar12 + 8);
        } while (pNVar12 != (NodePath *)0x0);
      }
      goto LAB_001056f0;
    }
    uVar13 = 1;
    _err_print_error("_watch_changes","modules/multiplayer/multiplayer_synchronizer.cpp",0x17f,
                     "Parameter \"node\" is null.",0,0);
  }
  List<NodePath,DefaultAllocator>::~List((List<NodePath,DefaultAllocator> *)&local_a0);
LAB_001056fc:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MultiplayerSynchronizer::get_delta_state(unsigned long, unsigned long, unsigned long&) */

ulong MultiplayerSynchronizer::get_delta_state(ulong param_1,ulong param_2,ulong *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  Variant *this;
  undefined1 (*pauVar5) [16];
  ulong in_RCX;
  long lVar6;
  Variant *pVVar7;
  ulong *in_R8;
  long lVar8;
  
  *in_R8 = 0;
  *(undefined8 *)param_1 = 0;
  if (*(ulong **)(param_2 + 0x490) != param_3) {
    if (param_3 < (ulong *)(*(long *)(param_2 + 0x420) + in_RCX)) {
      return param_1;
    }
    iVar3 = _watch_changes((MultiplayerSynchronizer *)param_2,(ulong)param_3);
    if (iVar3 != 0) {
      _err_print_error("get_delta_state","modules/multiplayer/multiplayer_synchronizer.cpp",0x1a4,
                       "Condition \"err != OK\" is true. Returning: out",0,0);
      return param_1;
    }
    *(ulong **)(param_2 + 0x490) = param_3;
  }
  lVar4 = *(long *)(param_2 + 0x488);
  if (lVar4 != 0) {
    lVar6 = 0;
    if (*(long *)(lVar4 + -8) != 0) {
      lVar6 = lVar4;
    }
    lVar8 = 0;
    pVVar7 = (Variant *)(lVar6 + 0x10);
    do {
      if (*(long *)(lVar4 + -8) <= lVar8) {
        return param_1;
      }
      if (in_RCX < *(ulong *)(pVVar7 + -8)) {
        if (*(long *)param_1 == 0) {
          pauVar5 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
          *(undefined1 (**) [16])param_1 = pauVar5;
          *(undefined4 *)pauVar5[1] = 0;
          *pauVar5 = (undefined1  [16])0x0;
        }
        this = (Variant *)operator_new(0x30,DefaultAllocator::alloc);
        *(undefined4 *)this = 0;
        *(undefined8 *)(this + 0x28) = 0;
        *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
        Variant::operator=(this,pVVar7);
        uVar1 = *(undefined8 *)(*(long *)param_1 + 8);
        *(long *)(this + 0x28) = *(long *)param_1;
        plVar2 = *(long **)param_1;
        *(undefined8 *)(this + 0x18) = 0;
        *(undefined8 *)(this + 0x20) = uVar1;
        if (plVar2[1] != 0) {
          *(Variant **)(plVar2[1] + 0x18) = this;
        }
        plVar2[1] = (long)this;
        if (*plVar2 == 0) {
          *plVar2 = (long)this;
        }
        *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
        *in_R8 = *in_R8 | 1L << ((byte)lVar8 & 0x3f);
        lVar4 = *(long *)(param_2 + 0x488);
      }
      lVar8 = lVar8 + 1;
      pVVar7 = pVVar7 + 0x28;
    } while (lVar4 != 0);
  }
  return param_1;
}



/* MultiplayerSynchronizer::get_configuration_warnings() const */

void MultiplayerSynchronizer::get_configuration_warnings(void)

{
  long *plVar1;
  CowData<char32_t> *this;
  char *pcVar2;
  char cVar3;
  int iVar4;
  NodePath *in_RSI;
  long lVar5;
  long in_RDI;
  long lVar6;
  long in_FS_OFFSET;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Node::get_configuration_warnings();
  cVar3 = NodePath::is_empty();
  if (cVar3 == '\0') {
    cVar3 = Node::has_node(in_RSI);
    if (cVar3 != '\0') goto LAB_00105e74;
  }
  local_60 = 0;
  local_50 = 0;
  local_58 = "";
  String::parse_latin1((StrRange *)&local_60);
  local_58 = 
  "A valid NodePath must be set in the \"Root Path\" property in order for MultiplayerSynchronizer to be able to synchronize properties."
  ;
  local_68 = 0;
  local_50 = 0x83;
  String::parse_latin1((StrRange *)&local_68);
  RTR((String *)&local_58,(String *)&local_68);
  if (*(long *)(in_RDI + 8) == 0) {
    lVar5 = 1;
  }
  else {
    lVar5 = *(long *)(*(long *)(in_RDI + 8) + -8) + 1;
  }
  iVar4 = CowData<String>::resize<false>((CowData<String> *)(in_RDI + 8),lVar5);
  if (iVar4 == 0) {
    if (*(long *)(in_RDI + 8) == 0) {
      lVar6 = -1;
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(*(long *)(in_RDI + 8) + -8);
      lVar6 = lVar5 + -1;
      if (-1 < lVar6) {
        CowData<String>::_copy_on_write((CowData<String> *)(in_RDI + 8));
        this = (CowData<char32_t> *)(*(long *)(in_RDI + 8) + lVar6 * 8);
        if (*(char **)this != local_58) {
          CowData<char32_t>::_ref(this,(CowData *)&local_58);
        }
        goto LAB_00105e4d;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar6,lVar5,"p_index","size()","",false,false
              );
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
  }
LAB_00105e4d:
  pcVar2 = local_58;
  if (local_58 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = (char *)0x0;
      Memory::free_static(pcVar2 + -0x10,false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  lVar5 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
LAB_00105e74:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MultiplayerSynchronizer::set_multiplayer_authority(int, bool) */

void MultiplayerSynchronizer::set_multiplayer_authority(int param_1,bool param_2)

{
  long lVar1;
  int iVar2;
  undefined7 in_register_00000031;
  undefined4 in_register_0000003c;
  
  iVar2 = Node::get_multiplayer_authority();
  if (iVar2 != (int)CONCAT71(in_register_00000031,param_2)) {
    lVar1 = Engine::get_singleton();
    if (*(char *)(lVar1 + 0xc0) == '\0') {
      _stop((MultiplayerSynchronizer *)CONCAT44(in_register_0000003c,param_1));
    }
    Node::set_multiplayer_authority(param_1,param_2);
    _start((MultiplayerSynchronizer *)CONCAT44(in_register_0000003c,param_1));
    return;
  }
  return;
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



/* Object::_validate_property(PropertyInfo&) const */

void Object::_validate_property(PropertyInfo *param_1)

{
  return;
}



/* Object::_notification(int) */

void Object::_notification(int param_1)

{
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



/* MultiplayerSynchronizer::is_class_ptr(void*) const */

uint __thiscall MultiplayerSynchronizer::is_class_ptr(MultiplayerSynchronizer *this,void *param_1)

{
  return (uint)CONCAT71(0x1141,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1141,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1141,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* MultiplayerSynchronizer::_getv(StringName const&, Variant&) const */

undefined8 MultiplayerSynchronizer::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* MultiplayerSynchronizer::_setv(StringName const&, Variant const&) */

undefined8 MultiplayerSynchronizer::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* MultiplayerSynchronizer::_property_can_revertv(StringName const&) const */

undefined8 MultiplayerSynchronizer::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* MultiplayerSynchronizer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 MultiplayerSynchronizer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* MethodBindTRC<bool, int>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRC<bool,int>::_gen_argument_type(MethodBindTRC<bool,int> *this,int param_1)

{
  return (param_1 == 0) + '\x01';
}



/* MethodBindTRC<bool, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<bool,int>::get_argument_meta(MethodBindTRC<bool,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindT<int, bool>::_gen_argument_type(int) const */

char __thiscall MethodBindT<int,bool>::_gen_argument_type(MethodBindT<int,bool> *this,int param_1)

{
  char cVar1;
  
  cVar1 = (param_1 == 0) + '\x01';
  if (1 < (uint)param_1) {
    cVar1 = '\0';
  }
  return cVar1;
}



/* MethodBindT<int, bool>::get_argument_meta(int) const */

byte __thiscall MethodBindT<int,bool>::get_argument_meta(MethodBindT<int,bool> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindT<Callable>::_gen_argument_type(int) const */

byte __thiscall MethodBindT<Callable>::_gen_argument_type(MethodBindT<Callable> *this,int param_1)

{
  return -(param_1 == 0) & 0x19;
}



/* MethodBindT<Callable>::get_argument_meta(int) const */

undefined8 MethodBindT<Callable>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<bool>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<bool>::_gen_argument_type(int param_1)

{
  return 1;
}



/* MethodBindTRC<bool>::get_argument_meta(int) const */

undefined8 MethodBindTRC<bool>::get_argument_meta(int param_1)

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



/* MethodBindTRC<MultiplayerSynchronizer::VisibilityUpdateMode>::_gen_argument_type(int) const */

undefined8
MethodBindTRC<MultiplayerSynchronizer::VisibilityUpdateMode>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<MultiplayerSynchronizer::VisibilityUpdateMode>::get_argument_meta(int) const */

undefined8
MethodBindTRC<MultiplayerSynchronizer::VisibilityUpdateMode>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<MultiplayerSynchronizer::VisibilityUpdateMode>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<MultiplayerSynchronizer::VisibilityUpdateMode>::_gen_argument_type
          (MethodBindT<MultiplayerSynchronizer::VisibilityUpdateMode> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<MultiplayerSynchronizer::VisibilityUpdateMode>::get_argument_meta(int) const */

undefined8
MethodBindT<MultiplayerSynchronizer::VisibilityUpdateMode>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Ref<SceneReplicationConfig>>::_gen_argument_type(int) const */

undefined8 MethodBindTR<Ref<SceneReplicationConfig>>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTR<Ref<SceneReplicationConfig>>::get_argument_meta(int) const */

undefined8 MethodBindTR<Ref<SceneReplicationConfig>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Ref<SceneReplicationConfig> >::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Ref<SceneReplicationConfig>>::_gen_argument_type
          (MethodBindT<Ref<SceneReplicationConfig>> *this,int param_1)

{
  return -(param_1 == 0) & 0x18;
}



/* MethodBindT<Ref<SceneReplicationConfig> >::get_argument_meta(int) const */

undefined8 MethodBindT<Ref<SceneReplicationConfig>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<double>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<double>::_gen_argument_type(int param_1)

{
  return 3;
}



/* MethodBindTRC<double>::get_argument_meta(int) const */

uint __thiscall MethodBindTRC<double>::get_argument_meta(MethodBindTRC<double> *this,int param_1)

{
  return param_1 >> 0x1f & 10;
}



/* MethodBindT<double>::_gen_argument_type(int) const */

byte __thiscall MethodBindT<double>::_gen_argument_type(MethodBindT<double> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindT<double>::get_argument_meta(int) const */

byte __thiscall MethodBindT<double>::get_argument_meta(MethodBindT<double> *this,int param_1)

{
  return -(param_1 == 0) & 10;
}



/* MethodBindTRC<NodePath>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<NodePath>::_gen_argument_type(int param_1)

{
  return 0x16;
}



/* MethodBindTRC<NodePath>::get_argument_meta(int) const */

undefined8 MethodBindTRC<NodePath>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<NodePath const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<NodePath_const&>::_gen_argument_type(MethodBindT<NodePath_const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x16;
}



/* MethodBindT<NodePath const&>::get_argument_meta(int) const */

undefined8 MethodBindT<NodePath_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<NodePath const&>::~MethodBindT() */

void __thiscall MethodBindT<NodePath_const&>::~MethodBindT(MethodBindT<NodePath_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00113c48;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<NodePath const&>::~MethodBindT() */

void __thiscall MethodBindT<NodePath_const&>::~MethodBindT(MethodBindT<NodePath_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00113c48;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<NodePath>::~MethodBindTRC() */

void __thiscall MethodBindTRC<NodePath>::~MethodBindTRC(MethodBindTRC<NodePath> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00113ca8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<NodePath>::~MethodBindTRC() */

void __thiscall MethodBindTRC<NodePath>::~MethodBindTRC(MethodBindTRC<NodePath> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00113ca8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<double>::~MethodBindT() */

void __thiscall MethodBindT<double>::~MethodBindT(MethodBindT<double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00113d08;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<double>::~MethodBindT() */

void __thiscall MethodBindT<double>::~MethodBindT(MethodBindT<double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00113d08;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<double>::~MethodBindTRC() */

void __thiscall MethodBindTRC<double>::~MethodBindTRC(MethodBindTRC<double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00113d68;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<double>::~MethodBindTRC() */

void __thiscall MethodBindTRC<double>::~MethodBindTRC(MethodBindTRC<double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00113d68;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Ref<SceneReplicationConfig> >::~MethodBindT() */

void __thiscall
MethodBindT<Ref<SceneReplicationConfig>>::~MethodBindT
          (MethodBindT<Ref<SceneReplicationConfig>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00113dc8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<SceneReplicationConfig> >::~MethodBindT() */

void __thiscall
MethodBindT<Ref<SceneReplicationConfig>>::~MethodBindT
          (MethodBindT<Ref<SceneReplicationConfig>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00113dc8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Ref<SceneReplicationConfig>>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<SceneReplicationConfig>>::~MethodBindTR
          (MethodBindTR<Ref<SceneReplicationConfig>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00113e28;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Ref<SceneReplicationConfig>>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<SceneReplicationConfig>>::~MethodBindTR
          (MethodBindTR<Ref<SceneReplicationConfig>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00113e28;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<MultiplayerSynchronizer::VisibilityUpdateMode>::~MethodBindT() */

void __thiscall
MethodBindT<MultiplayerSynchronizer::VisibilityUpdateMode>::~MethodBindT
          (MethodBindT<MultiplayerSynchronizer::VisibilityUpdateMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00113e88;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<MultiplayerSynchronizer::VisibilityUpdateMode>::~MethodBindT() */

void __thiscall
MethodBindT<MultiplayerSynchronizer::VisibilityUpdateMode>::~MethodBindT
          (MethodBindT<MultiplayerSynchronizer::VisibilityUpdateMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00113e88;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<MultiplayerSynchronizer::VisibilityUpdateMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<MultiplayerSynchronizer::VisibilityUpdateMode>::~MethodBindTRC
          (MethodBindTRC<MultiplayerSynchronizer::VisibilityUpdateMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00113ee8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<MultiplayerSynchronizer::VisibilityUpdateMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<MultiplayerSynchronizer::VisibilityUpdateMode>::~MethodBindTRC
          (MethodBindTRC<MultiplayerSynchronizer::VisibilityUpdateMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00113ee8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00113f48;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00113f48;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00113fa8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00113fa8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114008;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114008;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Callable>::~MethodBindT() */

void __thiscall MethodBindT<Callable>::~MethodBindT(MethodBindT<Callable> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114068;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Callable>::~MethodBindT() */

void __thiscall MethodBindT<Callable>::~MethodBindT(MethodBindT<Callable> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114068;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, bool>::~MethodBindT() */

void __thiscall MethodBindT<int,bool>::~MethodBindT(MethodBindT<int,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001140c8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, bool>::~MethodBindT() */

void __thiscall MethodBindT<int,bool>::~MethodBindT(MethodBindT<int,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001140c8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool,int>::~MethodBindTRC(MethodBindTRC<bool,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114128;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool,int>::~MethodBindTRC(MethodBindTRC<bool,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114128;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MultiplayerSynchronizer::_validate_propertyv(PropertyInfo&) const */

void MultiplayerSynchronizer::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_validate_property) {
    Node::_validate_property(param_1);
    return;
  }
  return;
}



/* CowData<Variant const*>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Variant_const*>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Variant>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Variant>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<String>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MultiplayerSynchronizer::get_state(List<NodePath, DefaultAllocator> const&, Object*,
   Vector<Variant>&, Vector<Variant const*>&) [clone .cold] */

void MultiplayerSynchronizer::get_state
               (List *param_1,Object *param_2,Vector *param_3,Vector *param_4)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<MultiplayerSynchronizer::Watcher>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<MultiplayerSynchronizer::Watcher>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* MultiplayerSynchronizer::_watch_changes(unsigned long) [clone .cold] */

void MultiplayerSynchronizer::_watch_changes(ulong param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00106fc8(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00106fde(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* MultiplayerSynchronizer::_get_class_namev() const */

undefined8 * MultiplayerSynchronizer::_get_class_namev(void)

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
LAB_00107043:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00107043;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"MultiplayerSynchronizer");
      goto LAB_001070ae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"MultiplayerSynchronizer");
LAB_001070ae:
  return &_get_class_namev()::_class_name_static;
}



/* MultiplayerSynchronizer::get_class() const */

void MultiplayerSynchronizer::get_class(void)

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



/* MethodBindTRC<double>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<double>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC13;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 3;
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
      goto joined_r0x001072fc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001072fc:
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



/* MethodBindTR<Ref<SceneReplicationConfig>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Ref<SceneReplicationConfig>>::_gen_argument_type_info(int param_1)

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
  local_50 = 0;
  local_58 = 0;
  local_48 = "SceneReplicationConfig";
  local_40 = 0x16;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x18;
  puVar3[6] = 0x11;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] != 0x11) {
      StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
      goto LAB_00107410;
    }
  }
  StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
  if (*(char **)(puVar3 + 4) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(char **)(puVar3 + 4) = local_48;
  }
LAB_00107410:
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
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC13;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 1;
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
      goto joined_r0x0010762c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010762c:
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



/* MethodBindTRC<NodePath>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<NodePath>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC13;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x16;
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
      goto joined_r0x001077ac;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001077ac:
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



/* MultiplayerSynchronizer::is_class(String const&) const */

undefined8 __thiscall
MultiplayerSynchronizer::is_class(MultiplayerSynchronizer *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010786f;
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
LAB_0010786f:
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
    if (cVar6 != '\0') goto LAB_00107923;
  }
  cVar6 = String::operator==(param_1,"MultiplayerSynchronizer");
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
              if (lVar5 == 0) goto LAB_001079fb;
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
LAB_001079fb:
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
      if (cVar6 != '\0') goto LAB_00107923;
    }
    cVar6 = String::operator==(param_1,"Node");
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
                if (lVar5 == 0) goto LAB_00107adb;
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
LAB_00107adb:
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
        if (cVar6 != '\0') goto LAB_00107923;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
      goto LAB_00107b84;
    }
  }
LAB_00107923:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00107b84:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)this;
  if (plVar5 == (long *)0x0) {
    return;
  }
  do {
    pvVar2 = (void *)*plVar5;
    if (pvVar2 == (void *)0x0) {
      if ((int)plVar5[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)((long)pvVar2 + 0x40) == plVar5) {
      lVar4 = *(long *)((long)pvVar2 + 0x30);
      lVar3 = *(long *)((long)pvVar2 + 0x38);
      *plVar5 = lVar4;
      if (pvVar2 == (void *)plVar5[1]) {
        plVar5[1] = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x30) = lVar4;
        lVar4 = *(long *)((long)pvVar2 + 0x30);
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x38) = lVar3;
      }
      if (*(long *)((long)pvVar2 + 0x20) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)((long)pvVar2 + 0x20) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *(long *)((long)pvVar2 + 0x20);
          *(undefined8 *)((long)pvVar2 + 0x20) = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + 0x10) != 0)) {
        StringName::unref();
      }
      if (*(long *)((long)pvVar2 + 8) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)((long)pvVar2 + 8) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *(long *)((long)pvVar2 + 8);
          *(undefined8 *)((long)pvVar2 + 8) = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      Memory::free_static(pvVar2,false);
      *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar5 = *(long **)this;
  } while ((int)plVar5[2] != 0);
  Memory::free_static(plVar5,false);
  return;
}



/* List<NodePath, DefaultAllocator>::~List() */

void __thiscall List<NodePath,DefaultAllocator>::~List(List<NodePath,DefaultAllocator> *this)

{
  NodePath *this_00;
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)this;
  if (plVar3 == (long *)0x0) {
    return;
  }
  do {
    this_00 = (NodePath *)*plVar3;
    if (this_00 == (NodePath *)0x0) {
      if ((int)plVar3[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)(this_00 + 0x18) == plVar3) {
      lVar2 = *(long *)(this_00 + 8);
      lVar1 = *(long *)(this_00 + 0x10);
      *plVar3 = lVar2;
      if (this_00 == (NodePath *)plVar3[1]) {
        plVar3[1] = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 8) = lVar2;
        lVar2 = *(long *)(this_00 + 8);
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x10) = lVar1;
      }
      NodePath::~NodePath(this_00);
      Memory::free_static(this_00,false);
      *(int *)(plVar3 + 2) = (int)plVar3[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar3 = *(long **)this;
  } while ((int)plVar3[2] != 0);
  Memory::free_static(plVar3,false);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<int, HashMapHasherDefault, HashMapComparatorDefault<int> >::insert(int const&) */

undefined1  [16]
HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
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
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  ulong uVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  uint *puVar37;
  int iVar38;
  uint *in_RDX;
  long lVar39;
  ulong uVar40;
  uint uVar41;
  long *in_RSI;
  uint uVar42;
  ulong uVar43;
  undefined4 uVar44;
  ulong uVar45;
  uint uVar46;
  uint *puVar47;
  undefined1 auVar48 [16];
  long *plStack_98;
  
  lVar34 = *in_RSI;
  uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  if (lVar34 == 0) {
    uVar33 = (ulong)uVar30 * 4;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[3] = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    *in_RSI = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[2] = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[1] = lVar34;
    if (uVar30 != 0) {
      memset((void *)in_RSI[3],0,uVar33);
    }
    uVar31 = *in_RDX;
    uVar42 = *(uint *)((long)in_RSI + 0x24);
    lVar34 = *in_RSI;
    if (lVar34 != 0) goto LAB_0010813a;
  }
  else {
    uVar31 = *in_RDX;
    uVar42 = *(uint *)((long)in_RSI + 0x24);
LAB_0010813a:
    if (uVar42 != 0) {
      uVar33 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
      uVar29 = (uVar31 >> 0x10 ^ uVar31) * -0x7a143595;
      uVar29 = (uVar29 ^ uVar29 >> 0xd) * -0x3d4d51cb;
      uVar41 = uVar29 ^ uVar29 >> 0x10;
      if (uVar29 == uVar29 >> 0x10) {
        uVar41 = 1;
        uVar40 = uVar33;
      }
      else {
        uVar40 = uVar41 * uVar33;
      }
      uVar43 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4));
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar43;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar40;
      lVar39 = SUB168(auVar5 * auVar17,8);
      iVar38 = SUB164(auVar5 * auVar17,8);
      uVar29 = *(uint *)(in_RSI[3] + lVar39 * 4);
      uVar40 = (ulong)uVar29;
      if (uVar29 != 0) {
        uVar29 = 0;
        do {
          if (uVar41 == (uint)uVar40) {
            uVar32 = *(uint *)(in_RSI[1] + lVar39 * 4);
            plStack_98 = (long *)(ulong)uVar32;
            if (*(uint *)(lVar34 + (long)plStack_98 * 4) == uVar31) goto LAB_0010822f;
          }
          uVar29 = uVar29 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (iVar38 + 1) * uVar33;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = uVar43;
          lVar39 = SUB168(auVar6 * auVar18,8);
          uVar32 = *(uint *)(in_RSI[3] + lVar39 * 4);
          uVar40 = (ulong)uVar32;
          iVar38 = SUB164(auVar6 * auVar18,8);
        } while ((uVar32 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = uVar40 * uVar33, auVar19._8_8_ = 0,
                auVar19._0_8_ = uVar43, auVar8._8_8_ = 0,
                auVar8._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4
                                          ) + iVar38) - SUB164(auVar7 * auVar19,8)) * uVar33,
                auVar20._8_8_ = 0, auVar20._0_8_ = uVar43, uVar29 <= SUB164(auVar8 * auVar20,8)));
      }
    }
  }
  if ((float)uVar30 * __LC29 < (float)(uVar42 + 1)) {
    if ((int)in_RSI[4] == 0x1c) {
      plStack_98 = (long *)0x0;
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0);
      uVar42 = *(uint *)((long)in_RSI + 0x24);
      lVar34 = *in_RSI;
      uVar32 = 0xffffffff;
      goto LAB_0010822f;
    }
    uVar30 = (int)in_RSI[4] + 1;
    uVar33 = (ulong)uVar30;
    if (uVar30 < 2) {
      uVar33 = 2;
    }
    uVar30 = *(uint *)(hash_table_size_primes + uVar33 * 4);
    *(int *)(in_RSI + 4) = (int)uVar33;
    pvVar1 = (void *)in_RSI[3];
    uVar33 = (ulong)uVar30 << 2;
    pvVar2 = (void *)in_RSI[2];
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[3] = lVar34;
    lVar34 = Memory::realloc_static((void *)*in_RSI,uVar33,false);
    *in_RSI = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[2] = lVar34;
    lVar34 = Memory::realloc_static((void *)in_RSI[1],uVar33,false);
    in_RSI[1] = lVar34;
    if (uVar30 != 0) {
      memset((void *)in_RSI[3],0,uVar33);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      uVar33 = 0;
      lVar39 = in_RSI[3];
      lVar3 = in_RSI[2];
      do {
        uVar45 = uVar33 & 0xffffffff;
        uVar44 = (undefined4)uVar33;
        uVar29 = 0;
        uVar30 = *(uint *)((long)pvVar1 + (ulong)*(uint *)((long)pvVar2 + uVar33 * 4) * 4);
        uVar40 = (ulong)uVar30;
        lVar35 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        uVar42 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar43 = CONCAT44(0,uVar42);
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar40 * lVar35;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar43;
        lVar36 = SUB168(auVar9 * auVar21,8) * 4;
        iVar38 = SUB164(auVar9 * auVar21,8);
        puVar47 = (uint *)(lVar39 + lVar36);
        uVar31 = *puVar47;
        if (uVar31 == 0) {
          lVar35 = uVar33 * 4;
        }
        else {
          do {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar31 * lVar35;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar43;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)((uVar42 + iVar38) - SUB164(auVar10 * auVar22,8)) * lVar35;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar43;
            uVar30 = SUB164(auVar11 * auVar23,8);
            if (uVar30 < uVar29) {
              *(int *)(lVar3 + uVar45 * 4) = iVar38;
              uVar31 = *puVar47;
              *puVar47 = (uint)uVar40;
              uVar29 = *(uint *)(lVar36 + lVar34);
              uVar40 = (ulong)uVar31;
              *(uint *)(lVar36 + lVar34) = (uint)uVar45;
              uVar45 = (ulong)uVar29;
              uVar29 = uVar30;
            }
            uVar44 = (undefined4)uVar45;
            uVar30 = (uint)uVar40;
            uVar29 = uVar29 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(iVar38 + 1) * lVar35;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar43;
            lVar36 = SUB168(auVar12 * auVar24,8) * 4;
            iVar38 = SUB164(auVar12 * auVar24,8);
            puVar47 = (uint *)(lVar39 + lVar36);
            uVar31 = *puVar47;
          } while (uVar31 != 0);
          lVar35 = uVar45 << 2;
        }
        *puVar47 = uVar30;
        uVar33 = uVar33 + 1;
        *(int *)(lVar3 + lVar35) = iVar38;
        *(undefined4 *)(lVar34 + lVar36) = uVar44;
      } while ((uint)uVar33 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar1,false);
    Memory::free_static(pvVar2,false);
    uVar42 = *(uint *)((long)in_RSI + 0x24);
    lVar34 = *in_RSI;
    uVar31 = *in_RDX;
  }
  uVar30 = (uVar31 >> 0x10 ^ uVar31) * -0x7a143595;
  uVar29 = (uVar30 ^ uVar30 >> 0xd) * -0x3d4d51cb;
  uVar30 = uVar29 ^ uVar29 >> 0x10;
  if (uVar29 == uVar29 >> 0x10) {
    uVar33 = 1;
    uVar30 = 1;
  }
  else {
    uVar33 = (ulong)uVar30;
  }
  uVar41 = 0;
  *(uint *)(lVar34 + (ulong)uVar42 * 4) = uVar31;
  lVar3 = in_RSI[3];
  uVar42 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  uVar40 = CONCAT44(0,uVar42);
  lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar33 * lVar36;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar40;
  lVar39 = SUB168(auVar13 * auVar25,8) * 4;
  iVar38 = SUB164(auVar13 * auVar25,8);
  lVar35 = in_RSI[2];
  puVar47 = (uint *)(lVar3 + lVar39);
  lVar4 = in_RSI[1];
  uVar31 = *puVar47;
  uVar29 = *(uint *)((long)in_RSI + 0x24);
  plStack_98 = in_RSI;
  while (uVar31 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar31 * lVar36;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar40;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar42 + iVar38) - SUB164(auVar14 * auVar26,8)) * lVar36;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar40;
    uVar31 = SUB164(auVar15 * auVar27,8);
    uVar32 = uVar30;
    uVar46 = uVar29;
    if (uVar31 < uVar41) {
      puVar37 = (uint *)(lVar39 + lVar4);
      *(int *)(lVar35 + (ulong)uVar29 * 4) = iVar38;
      uVar32 = *puVar47;
      *puVar47 = uVar30;
      uVar46 = *puVar37;
      *puVar37 = uVar29;
      uVar41 = uVar31;
    }
    uVar41 = uVar41 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar38 + 1) * lVar36;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar40;
    plStack_98 = SUB168(auVar16 * auVar28,8);
    lVar39 = (long)plStack_98 * 4;
    iVar38 = SUB164(auVar16 * auVar28,8);
    puVar47 = (uint *)(lVar3 + lVar39);
    uVar29 = uVar46;
    uVar30 = uVar32;
    uVar31 = *puVar47;
  }
  *puVar47 = uVar30;
  *(int *)(lVar35 + (ulong)uVar29 * 4) = iVar38;
  *(uint *)(lVar4 + lVar39) = uVar29;
  uVar32 = *(uint *)((long)in_RSI + 0x24);
  uVar42 = uVar32 + 1;
  *(uint *)((long)in_RSI + 0x24) = uVar42;
LAB_0010822f:
  param_1[3] = uVar32;
  *(long *)param_1 = lVar34;
  param_1[2] = uVar42;
  auVar48._8_8_ = plStack_98;
  auVar48._0_8_ = param_1;
  return auVar48;
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



/* WARNING: Removing unreachable block (ram,0x001088c8) */
/* WARNING: Removing unreachable block (ram,0x00108a5d) */
/* WARNING: Removing unreachable block (ram,0x00108a69) */
/* String vformat<NodePath>(String const&, NodePath const) */

undefined8 * vformat<NodePath>(undefined8 *param_1,bool *param_2,NodePath *param_3)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<Callable, HashMapHasherDefault, HashMapComparatorDefault<Callable> >::insert(Callable
   const&) */

Callable *
HashSet<Callable,HashMapHasherDefault,HashMapComparatorDefault<Callable>>::insert(Callable *param_1)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
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
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  char cVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  ulong uVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  int iVar36;
  Callable *in_RDX;
  ulong uVar37;
  long lVar38;
  long *in_RSI;
  long lVar39;
  uint uVar40;
  ulong uVar41;
  undefined4 uVar42;
  ulong uVar43;
  uint uVar44;
  uint *puVar45;
  long in_FS_OFFSET;
  uint local_98;
  long local_78;
  Callable local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  if (*in_RSI == 0) {
    uVar32 = (ulong)uVar29 * 4;
    lVar33 = Memory::alloc_static(uVar32,false);
    in_RSI[3] = lVar33;
    lVar33 = Memory::alloc_static((ulong)uVar29 << 4,false);
    *in_RSI = lVar33;
    lVar33 = Memory::alloc_static(uVar32,false);
    in_RSI[2] = lVar33;
    lVar33 = Memory::alloc_static(uVar32,false);
    in_RSI[1] = lVar33;
    if (uVar29 != 0) {
      memset((void *)in_RSI[3],0,uVar32);
    }
    iVar36 = *(int *)((long)in_RSI + 0x24);
    if (*in_RSI != 0) goto LAB_00108b0c;
  }
  else {
    iVar36 = *(int *)((long)in_RSI + 0x24);
LAB_00108b0c:
    if (iVar36 != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
      lVar33 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
      Callable::operator_cast_to_String(local_48);
      uVar31 = String::hash();
      uVar37 = (ulong)uVar31;
      CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
      uVar32 = CONCAT44(0,uVar1);
      if (uVar31 == 0) {
        uVar37 = 1;
      }
      lVar39 = in_RSI[3];
      uVar44 = 0;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar37 * lVar33;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar32;
      lVar38 = SUB168(auVar12 * auVar24,8);
      uVar31 = *(uint *)(lVar39 + lVar38 * 4);
      iVar36 = SUB164(auVar12 * auVar24,8);
      if (uVar31 == 0) {
        iVar36 = *(int *)((long)in_RSI + 0x24);
      }
      else {
        do {
          if ((uint)uVar37 == uVar31) {
            cVar28 = Callable::operator==
                               ((Callable *)
                                ((ulong)*(uint *)(in_RSI[1] + lVar38 * 4) * 0x10 + *in_RSI),in_RDX);
            if (cVar28 != '\0') {
              iVar36 = *(int *)((long)in_RSI + 0x24);
              iVar30 = *(int *)(in_RSI[1] + lVar38 * 4);
              goto LAB_00108e7b;
            }
            lVar39 = in_RSI[3];
          }
          uVar44 = uVar44 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(iVar36 + 1) * lVar33;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar32;
          lVar38 = SUB168(auVar13 * auVar25,8);
          uVar31 = *(uint *)(lVar39 + lVar38 * 4);
          iVar36 = SUB164(auVar13 * auVar25,8);
        } while ((uVar31 != 0) &&
                (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar31 * lVar33, auVar26._8_8_ = 0,
                auVar26._0_8_ = uVar32, auVar15._8_8_ = 0,
                auVar15._0_8_ = (ulong)((uVar1 + iVar36) - SUB164(auVar14 * auVar26,8)) * lVar33,
                auVar27._8_8_ = 0, auVar27._0_8_ = uVar32, uVar44 <= SUB164(auVar15 * auVar27,8)));
        iVar36 = *(int *)((long)in_RSI + 0x24);
      }
    }
  }
  if ((float)uVar29 * __LC29 < (float)(iVar36 + 1)) {
    if ((int)in_RSI[4] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      iVar36 = *(int *)((long)in_RSI + 0x24);
      iVar30 = -1;
      goto LAB_00108e7b;
    }
    uVar29 = (int)in_RSI[4] + 1;
    uVar32 = (ulong)uVar29;
    if (uVar29 < 2) {
      uVar32 = 2;
    }
    uVar29 = *(uint *)(hash_table_size_primes + uVar32 * 4);
    *(int *)(in_RSI + 4) = (int)uVar32;
    pvVar2 = (void *)in_RSI[3];
    uVar32 = (ulong)uVar29 * 4;
    pvVar3 = (void *)in_RSI[2];
    lVar33 = Memory::alloc_static(uVar32,false);
    in_RSI[3] = lVar33;
    lVar33 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar29 << 4,false);
    *in_RSI = lVar33;
    lVar33 = Memory::alloc_static(uVar32,false);
    in_RSI[2] = lVar33;
    lVar33 = Memory::realloc_static((void *)in_RSI[1],uVar32,false);
    in_RSI[1] = lVar33;
    if (uVar29 != 0) {
      memset((void *)in_RSI[3],0,uVar32);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      uVar32 = 0;
      lVar39 = in_RSI[3];
      lVar38 = in_RSI[2];
      do {
        uVar43 = uVar32 & 0xffffffff;
        uVar42 = (undefined4)uVar32;
        uVar44 = 0;
        uVar29 = *(uint *)((long)pvVar2 + (ulong)*(uint *)((long)pvVar3 + uVar32 * 4) * 4);
        uVar37 = (ulong)uVar29;
        uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar41 = CONCAT44(0,uVar1);
        lVar34 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar37 * lVar34;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uVar41;
        lVar35 = SUB168(auVar4 * auVar16,8) * 4;
        iVar36 = SUB164(auVar4 * auVar16,8);
        puVar45 = (uint *)(lVar39 + lVar35);
        uVar31 = *puVar45;
        if (uVar31 == 0) {
          lVar34 = uVar32 * 4;
        }
        else {
          do {
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)uVar31 * lVar34;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = uVar41;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)((uVar1 + iVar36) - SUB164(auVar5 * auVar17,8)) * lVar34;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = uVar41;
            local_98 = SUB164(auVar6 * auVar18,8);
            if (local_98 < uVar44) {
              *(int *)(lVar38 + uVar43 * 4) = iVar36;
              uVar29 = *puVar45;
              *puVar45 = (uint)uVar37;
              uVar31 = *(uint *)(lVar35 + lVar33);
              uVar37 = (ulong)uVar29;
              *(uint *)(lVar35 + lVar33) = (uint)uVar43;
              uVar43 = (ulong)uVar31;
              uVar44 = local_98;
            }
            uVar42 = (undefined4)uVar43;
            uVar29 = (uint)uVar37;
            uVar44 = uVar44 + 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)(iVar36 + 1) * lVar34;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = uVar41;
            lVar35 = SUB168(auVar7 * auVar19,8) * 4;
            iVar36 = SUB164(auVar7 * auVar19,8);
            puVar45 = (uint *)(lVar39 + lVar35);
            uVar31 = *puVar45;
          } while (uVar31 != 0);
          lVar34 = uVar43 << 2;
        }
        *puVar45 = uVar29;
        uVar32 = uVar32 + 1;
        *(int *)(lVar38 + lVar34) = iVar36;
        *(undefined4 *)(lVar33 + lVar35) = uVar42;
      } while ((uint)uVar32 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar2,false);
    Memory::free_static(pvVar3,false);
  }
  Callable::operator_cast_to_String(local_48);
  uVar29 = String::hash();
  uVar32 = (ulong)uVar29;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
  if (uVar29 == 0) {
    uVar32 = 1;
  }
  Callable::Callable((Callable *)((ulong)*(uint *)((long)in_RSI + 0x24) * 0x10 + *in_RSI),in_RDX);
  uVar29 = *(uint *)((long)in_RSI + 0x24);
  uVar44 = (uint)uVar32;
  lVar39 = in_RSI[3];
  uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  uVar37 = CONCAT44(0,uVar1);
  lVar38 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar32 * lVar38;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar37;
  lVar33 = SUB168(auVar8 * auVar20,8) * 4;
  iVar36 = SUB164(auVar8 * auVar20,8);
  puVar45 = (uint *)(lVar39 + lVar33);
  uVar31 = *puVar45;
  if (uVar31 == 0) {
    local_78 = in_RSI[2];
    lVar35 = in_RSI[1];
  }
  else {
    uVar40 = 0;
    local_78 = in_RSI[2];
    lVar35 = in_RSI[1];
    do {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar31 * lVar38;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar37;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)((uVar1 + iVar36) - SUB164(auVar9 * auVar21,8)) * lVar38;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar37;
      local_98 = SUB164(auVar10 * auVar22,8);
      if (local_98 < uVar40) {
        *(int *)(local_78 + (ulong)uVar29 * 4) = iVar36;
        uVar31 = *puVar45;
        *puVar45 = (uint)uVar32;
        uVar44 = *(uint *)(lVar33 + lVar35);
        uVar32 = (ulong)uVar31;
        *(uint *)(lVar33 + lVar35) = uVar29;
        uVar29 = uVar44;
        uVar40 = local_98;
      }
      uVar44 = (uint)uVar32;
      uVar40 = uVar40 + 1;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)(iVar36 + 1) * lVar38;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar37;
      lVar33 = SUB168(auVar11 * auVar23,8) * 4;
      iVar36 = SUB164(auVar11 * auVar23,8);
      puVar45 = (uint *)(lVar39 + lVar33);
      uVar31 = *puVar45;
    } while (uVar31 != 0);
  }
  *puVar45 = uVar44;
  *(int *)(local_78 + (ulong)uVar29 * 4) = iVar36;
  *(uint *)(lVar35 + lVar33) = uVar29;
  iVar30 = *(int *)((long)in_RSI + 0x24);
  iVar36 = iVar30 + 1;
  *(int *)((long)in_RSI + 0x24) = iVar36;
LAB_00108e7b:
  *(long *)param_1 = *in_RSI;
  *(int *)(param_1 + 8) = iVar36;
  *(int *)(param_1 + 0xc) = iVar30;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<double>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<double>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != 0) goto LAB_001091ab;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC13;
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
LAB_001092a0:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_001092a0;
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
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_001091ab:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<Callable>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Callable>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != 0) goto LAB_001093eb;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC13;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x19);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_001094e0:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_001094e0;
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
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_001093eb:
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
  if (in_EDX != 0) goto LAB_0010962b;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC13;
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
LAB_00109720:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00109720;
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
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_0010962b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<Ref<SceneReplicationConfig> >::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Ref<SceneReplicationConfig>>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != 0) goto LAB_0010986b;
  local_78 = 0;
  local_80 = 0;
  local_68 = "SceneReplicationConfig";
  local_60._0_8_ = 0x16;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (char *)CONCAT44(local_68._4_4_,0x18);
  local_50 = 0x11;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00109a05:
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
    if (local_50 == 0x11) goto LAB_00109a05;
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
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_0010986b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar4;
}



/* MethodBindT<NodePath const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<NodePath_const&>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != 0) goto LAB_00109abb;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC13;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x16);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00109bb0:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00109bb0;
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
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_00109abb:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void Node::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  undefined7 in_register_00000031;
  List *pLVar5;
  long in_FS_OFFSET;
  StringName *local_a8;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pLVar5 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = &_LC15;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC15;
  local_98 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00109e3d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00109e3d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x00109e5f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x00109e5f:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar5 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)pLVar5;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Node",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar5,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MultiplayerSynchronizer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
MultiplayerSynchronizer::_get_property_listv
          (MultiplayerSynchronizer *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  StringName *local_b8;
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
    Node::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "MultiplayerSynchronizer";
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "MultiplayerSynchronizer";
  local_98 = 0;
  local_70 = 0x17;
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
LAB_0010a1bd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010a1d4:
    lVar2 = *(long *)param_1;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010a1bd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
      goto LAB_0010a1d4;
    }
    StringName::unref();
    lVar2 = *(long *)param_1;
    local_68 = local_80;
  }
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_b8 = (StringName *)&local_68;
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_b8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"MultiplayerSynchronizer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (!param_2) goto LAB_0010a340;
  local_98 = 0;
  local_90 = 0;
  local_78 = "Node";
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_88 = 0;
  local_78 = "Node";
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_88 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_88);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_0010a488:
    local_50 = 0x80;
    StringName::operator=(local_b8,(StringName *)&local_98);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010a488;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68 = local_80;
    }
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Node",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
LAB_0010a340:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<MultiplayerSynchronizer, NodePath const&>(void
   (MultiplayerSynchronizer::*)(NodePath const&)) */

MethodBind *
create_method_bind<MultiplayerSynchronizer,NodePath_const&>(_func_void_NodePath_ptr *param_1)

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
  *(_func_void_NodePath_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00113c48;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "MultiplayerSynchronizer";
  local_30 = 0x17;
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



/* MethodBind* create_method_bind<MultiplayerSynchronizer, NodePath>(NodePath
   (MultiplayerSynchronizer::*)() const) */

MethodBind * create_method_bind<MultiplayerSynchronizer,NodePath>(_func_NodePath *param_1)

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
  *(_func_NodePath **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00113ca8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "MultiplayerSynchronizer";
  local_30 = 0x17;
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



/* MethodBind* create_method_bind<MultiplayerSynchronizer, double>(void
   (MultiplayerSynchronizer::*)(double)) */

MethodBind * create_method_bind<MultiplayerSynchronizer,double>(_func_void_double *param_1)

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
  *(_func_void_double **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00113d08;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "MultiplayerSynchronizer";
  local_30 = 0x17;
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



/* MethodBind* create_method_bind<MultiplayerSynchronizer, double>(double
   (MultiplayerSynchronizer::*)() const) */

MethodBind * create_method_bind<MultiplayerSynchronizer,double>(_func_double *param_1)

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
  *(_func_double **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00113d68;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "MultiplayerSynchronizer";
  local_30 = 0x17;
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



/* MethodBind* create_method_bind<MultiplayerSynchronizer, Ref<SceneReplicationConfig> >(void
   (MultiplayerSynchronizer::*)(Ref<SceneReplicationConfig>)) */

MethodBind *
create_method_bind<MultiplayerSynchronizer,Ref<SceneReplicationConfig>>(_func_void_Ref *param_1)

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
  *(_func_void_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00113dc8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "MultiplayerSynchronizer";
  local_30 = 0x17;
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



/* MethodBind* create_method_bind<MultiplayerSynchronizer,
   Ref<SceneReplicationConfig>>(Ref<SceneReplicationConfig> (MultiplayerSynchronizer::*)()) */

MethodBind *
create_method_bind<MultiplayerSynchronizer,Ref<SceneReplicationConfig>>(_func_Ref *param_1)

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
  *(_func_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00113e28;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "MultiplayerSynchronizer";
  local_30 = 0x17;
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



/* MethodBind* create_method_bind<MultiplayerSynchronizer,
   MultiplayerSynchronizer::VisibilityUpdateMode>(void
   (MultiplayerSynchronizer::*)(MultiplayerSynchronizer::VisibilityUpdateMode)) */

MethodBind *
create_method_bind<MultiplayerSynchronizer,MultiplayerSynchronizer::VisibilityUpdateMode>
          (_func_void_VisibilityUpdateMode *param_1)

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
  *(_func_void_VisibilityUpdateMode **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00113e88;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "MultiplayerSynchronizer";
  local_30 = 0x17;
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



/* MethodBind* create_method_bind<MultiplayerSynchronizer,
   MultiplayerSynchronizer::VisibilityUpdateMode>(MultiplayerSynchronizer::VisibilityUpdateMode
   (MultiplayerSynchronizer::*)() const) */

MethodBind *
create_method_bind<MultiplayerSynchronizer,MultiplayerSynchronizer::VisibilityUpdateMode>
          (_func_VisibilityUpdateMode *param_1)

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
  *(_func_VisibilityUpdateMode **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00113ee8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "MultiplayerSynchronizer";
  local_30 = 0x17;
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



/* MethodBind* create_method_bind<MultiplayerSynchronizer, int>(void
   (MultiplayerSynchronizer::*)(int)) */

MethodBind * create_method_bind<MultiplayerSynchronizer,int>(_func_void_int *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00113f48;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "MultiplayerSynchronizer";
  local_30 = 0x17;
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



/* MethodBind* create_method_bind<MultiplayerSynchronizer, bool>(void
   (MultiplayerSynchronizer::*)(bool)) */

MethodBind * create_method_bind<MultiplayerSynchronizer,bool>(_func_void_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00113fa8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "MultiplayerSynchronizer";
  local_30 = 0x17;
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



/* MethodBind* create_method_bind<MultiplayerSynchronizer, bool>(bool (MultiplayerSynchronizer::*)()
   const) */

MethodBind * create_method_bind<MultiplayerSynchronizer,bool>(_func_bool *param_1)

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
  *(_func_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00114008;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "MultiplayerSynchronizer";
  local_30 = 0x17;
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



/* MethodBind* create_method_bind<MultiplayerSynchronizer, Callable>(void
   (MultiplayerSynchronizer::*)(Callable)) */

MethodBind * create_method_bind<MultiplayerSynchronizer,Callable>(_func_void_Callable *param_1)

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
  *(_func_void_Callable **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00114068;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "MultiplayerSynchronizer";
  local_30 = 0x17;
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



/* MethodBind* create_method_bind<MultiplayerSynchronizer, int, bool>(void
   (MultiplayerSynchronizer::*)(int, bool)) */

MethodBind * create_method_bind<MultiplayerSynchronizer,int,bool>(_func_void_int_bool *param_1)

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
  *(_func_void_int_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001140c8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "MultiplayerSynchronizer";
  local_30 = 0x17;
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



/* MethodBind* create_method_bind<MultiplayerSynchronizer, bool, int>(bool
   (MultiplayerSynchronizer::*)(int) const) */

MethodBind * create_method_bind<MultiplayerSynchronizer,bool,int>(_func_bool_int *param_1)

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
  *(_func_bool_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00114128;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "MultiplayerSynchronizer";
  local_30 = 0x17;
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



/* CowData<Variant>::_unref() */

void __thiscall CowData<Variant>::_unref(CowData<Variant> *this)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  code *pcVar4;
  int *piVar5;
  long lVar6;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    piVar2 = *(int **)this;
    if (piVar2 != (int *)0x0) {
      lVar3 = *(long *)(piVar2 + -2);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar6 = 0;
        piVar5 = piVar2;
        do {
          if (Variant::needs_deinit[*piVar5] != '\0') {
            Variant::_clear_internal();
          }
          lVar6 = lVar6 + 1;
          piVar5 = piVar5 + 6;
        } while (lVar3 != lVar6);
      }
      Memory::free_static(piVar2 + -4,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<String>::_unref() */

void __thiscall CowData<String>::_unref(CowData<String> *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    plVar1 = *(long **)this;
    if (plVar1 != (long *)0x0) {
      lVar3 = plVar1[-1];
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        plVar6 = plVar1;
        do {
          if (*plVar6 != 0) {
            LOCK();
            plVar2 = (long *)(*plVar6 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = *plVar6;
              *plVar6 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar3 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* GetTypeInfo<MultiplayerSynchronizer::VisibilityUpdateMode, void>::get_class_info() */

GetTypeInfo<MultiplayerSynchronizer::VisibilityUpdateMode,void> * __thiscall
GetTypeInfo<MultiplayerSynchronizer::VisibilityUpdateMode,void>::get_class_info
          (GetTypeInfo<MultiplayerSynchronizer::VisibilityUpdateMode,void> *this)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_80;
  Vector local_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  local_58 = "MultiplayerSynchronizer::VisibilityUpdateMode";
  local_50 = 0x2d;
  String::parse_latin1((StrRange *)&local_80);
  String::split((char *)&local_68,SUB81((StrRange *)&local_80,0),0x10b74e);
  if ((local_60 != 0) && (2 < *(long *)(local_60 + -8))) {
    local_70 = 0;
    local_58 = ".";
    local_50 = 1;
    String::parse_latin1((StrRange *)&local_70);
    if (local_60 == 0) {
      lVar2 = -2;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(local_60 + -8);
      lVar2 = lVar3 + -2;
      if (-1 < lVar2) {
        String::operator+((String *)&local_58,(String *)(local_60 + lVar2 * 8));
        String::operator+((String *)local_78,(String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        goto LAB_0010b845;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar2,lVar3,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_70 = 0;
  local_58 = ".";
  local_50 = 1;
  String::parse_latin1((StrRange *)&local_70);
  String::join(local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_0010b845:
  CowData<String>::_unref((CowData<String> *)&local_60);
  StringName::StringName((StringName *)&local_58,(String *)local_78,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  local_68 = 0;
  local_70 = 0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if ((StringName::configured != '\0') && (local_58 != (undefined *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<MultiplayerSynchronizer::VisibilityUpdateMode>::_gen_argument_type_info(int) const
    */

undefined8
MethodBindTRC<MultiplayerSynchronizer::VisibilityUpdateMode>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  GetTypeInfo<MultiplayerSynchronizer::VisibilityUpdateMode,void>::get_class_info
            ((GetTypeInfo<MultiplayerSynchronizer::VisibilityUpdateMode,void> *)
             CONCAT44(in_register_0000003c,param_1));
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT44(in_register_0000003c,param_1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<MultiplayerSynchronizer::VisibilityUpdateMode>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindT<MultiplayerSynchronizer::VisibilityUpdateMode>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined4 local_48 [2];
  long local_40;
  long local_38;
  undefined4 local_30;
  long local_28;
  undefined4 local_20;
  long local_10;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    GetTypeInfo<MultiplayerSynchronizer::VisibilityUpdateMode,void>::get_class_info
              ((GetTypeInfo<MultiplayerSynchronizer::VisibilityUpdateMode,void> *)local_48);
    *puVar2 = local_48[0];
    if (*(long *)(puVar2 + 2) != local_40) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_40;
      local_40 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_38) {
      StringName::unref();
      lVar1 = local_38;
      local_38 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_30;
    if (*(long *)(puVar2 + 8) != local_28) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_28;
      local_28 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_20;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    if ((StringName::configured != '\0') && (local_38 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<StringName>::_unref() */

void __thiscall CowData<StringName>::_unref(CowData<StringName> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    plVar1 = *(long **)this;
    if (plVar1 != (long *)0x0) {
      lVar2 = plVar1[-1];
      *(undefined8 *)this = 0;
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
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* MultiplayerSynchronizer::_initialize_classv() */

void MultiplayerSynchronizer::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Node::initialize_class()::initialized == '\0') {
      Object::initialize_class();
      local_58 = 0;
      local_40 = 6;
      local_48 = "Object";
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "Node";
      local_60 = 0;
      local_40 = 4;
      String::parse_latin1((StrRange *)&local_60);
      StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
      if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_50 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      if ((code *)PTR__bind_methods_00119008 != Object::_bind_methods) {
        Node::_bind_methods();
      }
      Node::initialize_class()::initialized = '\x01';
    }
    local_48 = "Node";
    local_58 = 0;
    local_40 = 4;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "MultiplayerSynchronizer";
    local_60 = 0;
    local_40 = 0x17;
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<String>::_realloc(long) */

undefined8 __thiscall CowData<String>::_realloc(CowData<String> *this,long param_1)

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
/* Error CowData<String>::resize<false>(long) */

undefined8 __thiscall CowData<String>::resize<false>(CowData<String> *this,long param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  
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
    lVar7 = 0;
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
    lVar7 = lVar6 * 8;
    if (lVar7 != 0) {
      uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_0010c1c0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar8 = param_1 * 8 - 1;
  uVar8 = uVar8 >> 1 | uVar8;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  uVar8 = uVar8 | uVar8 >> 0x20;
  lVar10 = uVar8 + 1;
  if (lVar10 == 0) goto LAB_0010c1c0;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_0010c099:
        if (lVar10 != lVar7) {
          uVar4 = _realloc(this,lVar10);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          lVar6 = *(long *)this;
          if (lVar6 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar6 + -8) = param_1;
        return 0;
      }
      while( true ) {
        plVar2 = (long *)(lVar6 + uVar8 * 8);
        if (*plVar2 != 0) break;
        uVar8 = uVar8 + 1;
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_0010c099;
      }
      LOCK();
      plVar1 = (long *)(*plVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar6 = *plVar2;
        *plVar2 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
      uVar8 = uVar8 + 1;
      lVar6 = *(long *)this;
    }
    goto LAB_0010c216;
  }
  if (lVar10 == lVar7) {
LAB_0010c13f:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_0010c216:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_0010c12a;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0010c13f;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar6 = 0;
  }
  memset(puVar9 + lVar6,0,(param_1 - lVar6) * 8);
LAB_0010c12a:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<Variant>::_realloc(long) */

undefined8 __thiscall CowData<Variant>::_realloc(CowData<Variant> *this,long param_1)

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



/* CowData<Variant const*>::_realloc(long) */

undefined8 __thiscall CowData<Variant_const*>::_realloc(CowData<Variant_const*> *this,long param_1)

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



/* CowData<MultiplayerSynchronizer::Watcher>::_unref() */

void __thiscall
CowData<MultiplayerSynchronizer::Watcher>::_unref(CowData<MultiplayerSynchronizer::Watcher> *this)

{
  long *plVar1;
  NodePath *pNVar2;
  long lVar3;
  code *pcVar4;
  NodePath *this_00;
  long lVar5;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    pNVar2 = *(NodePath **)this;
    if (pNVar2 != (NodePath *)0x0) {
      lVar3 = *(long *)(pNVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar5 = 0;
        this_00 = pNVar2;
        do {
          if (Variant::needs_deinit[*(int *)(this_00 + 0x10)] != '\0') {
            Variant::_clear_internal();
          }
          lVar5 = lVar5 + 1;
          NodePath::~NodePath(this_00);
          this_00 = this_00 + 0x28;
        } while (lVar3 != lVar5);
      }
      Memory::free_static(pNVar2 + -0x10,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* MultiplayerSynchronizer::~MultiplayerSynchronizer() */

void __thiscall MultiplayerSynchronizer::~MultiplayerSynchronizer(MultiplayerSynchronizer *this)

{
  Object *pOVar1;
  char cVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_00113a80;
  CowData<MultiplayerSynchronizer::Watcher>::_unref
            ((CowData<MultiplayerSynchronizer::Watcher> *)(this + 0x488));
  pvVar3 = *(void **)(this + 0x458);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x47c) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x478) * 4) != 0) {
        memset(*(void **)(this + 0x470),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x478) * 4) << 2);
      }
      *(undefined4 *)(this + 0x47c) = 0;
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x468),false);
    Memory::free_static(*(void **)(this + 0x460),false);
    Memory::free_static(*(void **)(this + 0x470),false);
  }
  pvVar3 = *(void **)(this + 0x430);
  if (pvVar3 == (void *)0x0) goto LAB_0010c4d4;
  if (*(int *)(this + 0x454) != 0) {
    if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x450) * 4) != 0) {
      memset(*(void **)(this + 0x448),0,
             (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x450) * 4) << 2);
      if (*(int *)(this + 0x454) == 0) goto LAB_0010c508;
    }
    lVar4 = 0;
    do {
      lVar5 = lVar4 + 1;
      Callable::~Callable((Callable *)((long)pvVar3 + lVar4 * 0x10));
      pvVar3 = *(void **)(this + 0x430);
      lVar4 = lVar5;
    } while ((uint)lVar5 < *(uint *)(this + 0x454));
    *(undefined4 *)(this + 0x454) = 0;
    if (pvVar3 == (void *)0x0) goto LAB_0010c4d4;
  }
LAB_0010c508:
  Memory::free_static(pvVar3,false);
  Memory::free_static(*(void **)(this + 0x440),false);
  Memory::free_static(*(void **)(this + 0x438),false);
  Memory::free_static(*(void **)(this + 0x448),false);
LAB_0010c4d4:
  NodePath::~NodePath((NodePath *)(this + 0x410));
  if (*(long *)(this + 0x408) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x408);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        Node::~Node((Node *)this);
        return;
      }
    }
  }
  Node::~Node((Node *)this);
  return;
}



/* MultiplayerSynchronizer::~MultiplayerSynchronizer() */

void __thiscall MultiplayerSynchronizer::~MultiplayerSynchronizer(MultiplayerSynchronizer *this)

{
  ~MultiplayerSynchronizer(this);
  operator_delete(this,0x4b8);
  return;
}



/* MultiplayerSynchronizer::_notificationv(int, bool) */

void __thiscall
MultiplayerSynchronizer::_notificationv(MultiplayerSynchronizer *this,int param_1,bool param_2)

{
  if (!param_2) {
    if ((code *)PTR__notification_00119010 != Object::_notification) {
      Node::_notification((int)this);
    }
    _notification(this,param_1);
    return;
  }
  _notification(this,param_1);
  if ((code *)PTR__notification_00119010 != Object::_notification) {
    Node::_notification((int)this);
    return;
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CowData<MultiplayerSynchronizer::Watcher>::_realloc(long) */

undefined8 CowData<MultiplayerSynchronizer::Watcher>::_realloc(long param_1)

{
  undefined8 *puVar1;
  long in_RSI;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)param_1 + -0x10),in_RSI + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)param_1 = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Removing unreachable block (ram,0x0010c798) */
/* WARNING: Removing unreachable block (ram,0x0010c92d) */
/* WARNING: Removing unreachable block (ram,0x0010c939) */
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



/* MethodBindTRC<bool, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<bool,int>::validated_call
          (MethodBindTRC<bool,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant VVar1;
  code *pcVar2;
  long *plVar3;
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
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010cab8;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar1 = (Variant)(*pcVar2)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  param_3[8] = VVar1;
LAB_0010cab8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<bool,int>::ptrcall
          (MethodBindTRC<bool,int> *this,Object *param_1,void **param_2,void *param_3)

{
  undefined1 uVar1;
  code *pcVar2;
  long *plVar3;
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
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010cc97;
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
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),**param_2);
  *(undefined1 *)param_3 = uVar1;
LAB_0010cc97:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int,bool>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
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
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010d011;
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
                    /* WARNING: Could not recover jumptable at 0x0010ce96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8),*(undefined1 *)(*(long *)(param_3 + 8) + 8));
    return;
  }
LAB_0010d011:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int,bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
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
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010d201;
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
                    /* WARNING: Could not recover jumptable at 0x0010d08a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               **(char **)((long)param_3 + 8) != '\0');
    return;
  }
LAB_0010d201:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Callable>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Callable>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  Variant *pVVar2;
  code *pcVar3;
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
      pVVar2 = param_2[0x23];
      if (pVVar2 == (Variant *)0x0) {
        pVVar2 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar2 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Callable *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Callable *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d26c;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Callable::Callable((Callable *)&local_48,(Callable *)(*(long *)param_3 + 8));
  (*pcVar3)((long *)((long)param_2 + lVar1),(Callable *)&local_48);
  Callable::~Callable((Callable *)&local_48);
LAB_0010d26c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Callable>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Callable>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
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
      vformat<StringName>((Callable *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Callable *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d459;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Callable::Callable((Callable *)&local_48,*param_3);
  (*pcVar3)((long *)((long)param_2 + lVar1),(Callable *)&local_48);
  Callable::~Callable((Callable *)&local_48);
LAB_0010d459:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  bool bVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC122,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d740;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      bVar2 = (bool)(*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,bVar2);
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
LAB_0010d740:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<bool>::validated_call
          (MethodBindTRC<bool> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant VVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
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
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d952;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar1 = (Variant)(*pcVar2)(param_1 + *(long *)(this + 0x60));
  param_3[8] = VVar1;
LAB_0010d952:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<bool>::ptrcall(MethodBindTRC<bool> *this,Object *param_1,void **param_2,void *param_3)

{
  undefined1 uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
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
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010db01;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(undefined1 *)param_3 = uVar1;
LAB_0010db01:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<bool>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
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
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010de41;
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
                    /* WARNING: Could not recover jumptable at 0x0010dccd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0010de41:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
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
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010e029;
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
                    /* WARNING: Could not recover jumptable at 0x0010deb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3 != '\0');
    return;
  }
LAB_0010e029:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
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
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010e201;
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
                    /* WARNING: Could not recover jumptable at 0x0010e08c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0010e201:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
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
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010e3e1;
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
                    /* WARNING: Could not recover jumptable at 0x0010e26b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0010e3e1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<MultiplayerSynchronizer::VisibilityUpdateMode>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<MultiplayerSynchronizer::VisibilityUpdateMode>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  int iVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC122,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e4b0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      iVar2 = (*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,iVar2);
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
LAB_0010e4b0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<MultiplayerSynchronizer::VisibilityUpdateMode>::validated_call(Object*, Variant
   const**, Variant*) const */

void __thiscall
MethodBindTRC<MultiplayerSynchronizer::VisibilityUpdateMode>::validated_call
          (MethodBindTRC<MultiplayerSynchronizer::VisibilityUpdateMode> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
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
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e6c4;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_0010e6c4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<MultiplayerSynchronizer::VisibilityUpdateMode>::ptrcall(Object*, void const**,
   void*) const */

void __thiscall
MethodBindTRC<MultiplayerSynchronizer::VisibilityUpdateMode>::ptrcall
          (MethodBindTRC<MultiplayerSynchronizer::VisibilityUpdateMode> *this,Object *param_1,
          void **param_2,void *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
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
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e873;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar1;
LAB_0010e873:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<MultiplayerSynchronizer::VisibilityUpdateMode>::validated_call(Object*, Variant
   const**, Variant*) const */

void MethodBindT<MultiplayerSynchronizer::VisibilityUpdateMode>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
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
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010ebb1;
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
                    /* WARNING: Could not recover jumptable at 0x0010ea3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0010ebb1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<MultiplayerSynchronizer::VisibilityUpdateMode>::ptrcall(Object*, void const**, void*)
   const */

void MethodBindT<MultiplayerSynchronizer::VisibilityUpdateMode>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
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
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010ed91;
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
                    /* WARNING: Could not recover jumptable at 0x0010ec1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0010ed91:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<double>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<double>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  double dVar5;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC122,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010ee60;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar2 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar2 & 1) != 0) {
        pVVar2 = *(Variant **)(pVVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      dVar5 = (double)(*(code *)pVVar2)();
      Variant::Variant((Variant *)local_48,dVar5);
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
LAB_0010ee60:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<double>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<double>::validated_call
          (MethodBindTRC<double> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 uVar3;
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
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f074;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar1)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)(param_3 + 8) = uVar3;
LAB_0010f074:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<double>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<double>::ptrcall
          (MethodBindTRC<double> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 uVar3;
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
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f223;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar1)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)param_3 = uVar3;
LAB_0010f223:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<double>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<double>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
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
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010f561;
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
                    /* WARNING: Could not recover jumptable at 0x0010f3ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (*(undefined8 *)(*(long *)param_3 + 8),
               (long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010f561:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<double>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<double>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
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
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010f741;
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
                    /* WARNING: Could not recover jumptable at 0x0010f5cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(**param_3,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010f741:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<NodePath>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<NodePath>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC122,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f820;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar2 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar2 & 1) != 0) {
        pVVar2 = *(Variant **)(pVVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar2)((NodePath *)&local_58);
      Variant::Variant((Variant *)local_48,(NodePath *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      NodePath::~NodePath((NodePath *)&local_58);
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
LAB_0010f820:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<NodePath>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<NodePath>::validated_call
          (MethodBindTRC<NodePath> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      local_48 = (Variant **)0x10c988;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((NodePath *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(NodePath *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010fa49;
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
  (*pcVar1)((NodePath *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  NodePath::operator=((NodePath *)(param_3 + 8),(NodePath *)&local_48);
  NodePath::~NodePath((NodePath *)&local_48);
LAB_0010fa49:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<NodePath>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<NodePath>::ptrcall
          (MethodBindTRC<NodePath> *this,Object *param_1,void **param_2,void *param_3)

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
      local_48 = (void **)0x10c988;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((NodePath *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(NodePath *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010fc1a;
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
  (*pcVar1)((NodePath *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  NodePath::operator=((NodePath *)param_3,(NodePath *)&local_48);
  NodePath::~NodePath((NodePath *)&local_48);
LAB_0010fc1a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<NodePath const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<NodePath_const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
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
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010ff61;
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
                    /* WARNING: Could not recover jumptable at 0x0010fded. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_0010ff61:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<NodePath const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<NodePath_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
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
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00110141;
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
                    /* WARNING: Could not recover jumptable at 0x0010ffc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_00110141:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<SceneReplicationConfig>>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Ref<SceneReplicationConfig>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Object *pOVar2;
  char cVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
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
    if (local_58 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x10c988;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC122,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00110260;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
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
      (*(code *)pVVar4)(&local_58);
      Variant::Variant((Variant *)local_48,local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
LAB_00110260:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<SceneReplicationConfig>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Ref<SceneReplicationConfig>>::ptrcall
          (MethodBindTR<Ref<SceneReplicationConfig>> *this,Object *param_1,void **param_2,
          void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  Object *extraout_RDX;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
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
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x10c988;
      local_40 = 0x35;
      local_50 = 0;
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
      goto LAB_001104e6;
    }
    param_2 = (void **)local_48;
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
      param_2 = (void **)extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)((Object *)((long)param_2 + -1) + (long)pcVar2);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_001104e6;
    *(undefined8 *)param_3 = 0;
    goto LAB_00110529;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_00110529;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_00110529:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_001104e6;
    }
  }
  cVar1 = RefCounted::unreference();
  pOVar5 = local_48;
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_48);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
LAB_001104e6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<SceneReplicationConfig> >::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<Ref<SceneReplicationConfig>>::validated_call
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
      local_58 = (Object *)0x10c988;
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
      goto LAB_001107e8;
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
LAB_001107a6:
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
      pOVar4 = (Object *)
               __dynamic_cast(pOVar4,&Object::typeinfo,&SceneReplicationConfig::typeinfo,0);
      if (pOVar2 != pOVar4) {
        local_58 = pOVar4;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_58 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_001107a6;
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
LAB_001107e8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<SceneReplicationConfig> >::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<SceneReplicationConfig>>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      local_48 = (Object *)0x10c988;
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
      goto LAB_00110aac;
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
LAB_00110a88:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_00110a88;
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
LAB_00110aac:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<bool,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_58 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC122,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00110d90;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar12 = param_2[5];
    if (pVVar12 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00110dd0;
LAB_00110dc0:
      pVVar12 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00110dd0:
        uVar8 = 4;
        goto LAB_00110d85;
      }
      if (in_R8D == 1) goto LAB_00110dc0;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar12,2);
    uVar4 = _LC123;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar7 = Variant::operator_cast_to_int(pVVar12);
    bVar6 = (bool)(*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),iVar7);
    Variant::Variant((Variant *)local_48,bVar6);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar8 = 3;
LAB_00110d85:
    *in_R9 = uVar8;
    in_R9[2] = 1;
  }
LAB_00110d90:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Callable>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Callable>::call
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
      _err_print_error(&_LC122,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00111180;
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
      if (in_R8D != 1) goto LAB_001111d0;
LAB_001111c0:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001111d0:
        uVar6 = 4;
        goto LAB_00111175;
      }
      if (in_R8D == 1) goto LAB_001111c0;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x19);
    uVar4 = _LC126;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Callable((Variant *)&local_48);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),(Variant *)&local_48);
    Callable::~Callable((Callable *)&local_48);
  }
  else {
    uVar6 = 3;
LAB_00111175:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00111180:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<SceneReplicationConfig> >::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<Ref<SceneReplicationConfig>>::call
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
      local_48 = (Object *)0x10c988;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC122,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00111530;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar7 = 3;
LAB_00111525:
    *in_R9 = uVar7;
    in_R9[2] = 1;
    goto LAB_00111530;
  }
  pVVar12 = param_2[5];
  if (pVVar12 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_00111580;
LAB_00111570:
    pVVar12 = *(Variant **)param_4;
  }
  else {
    lVar2 = *(long *)(pVVar12 + -8);
    if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00111580:
      uVar7 = 4;
      goto LAB_00111525;
    }
    if (in_R8D == 1) goto LAB_00111570;
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
  uVar4 = _LC127;
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
LAB_0011169d:
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
      pOVar8 = (Object *)
               __dynamic_cast(pOVar8,&Object::typeinfo,&SceneReplicationConfig::typeinfo,0);
      if (pOVar5 != pOVar8) {
        local_48 = pOVar8;
        if (pOVar8 != (Object *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_48 = (Object *)0x0;
          }
        }
        if (pOVar5 != (Object *)0x0) goto LAB_0011169d;
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
LAB_00111530:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<NodePath const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<NodePath_const&>::call
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
      _err_print_error(&_LC122,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001118e0;
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
      if (in_R8D != 1) goto LAB_00111930;
LAB_00111920:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00111930:
        uVar6 = 4;
        goto LAB_001118d5;
      }
      if (in_R8D == 1) goto LAB_00111920;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x16);
    uVar4 = _LC128;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_NodePath((Variant *)&local_48);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),(Variant *)&local_48);
    NodePath::~NodePath((NodePath *)&local_48);
  }
  else {
    uVar6 = 3;
LAB_001118d5:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_001118e0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<SceneReplicationConfig>>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTR<Ref<SceneReplicationConfig>>::validated_call
          (MethodBindTR<Ref<SceneReplicationConfig>> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  Variant **local_48;
  Object *local_40;
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
    if (local_48 == (Variant **)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x10c988;
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
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
      goto LAB_00111b76;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar3 = *(code **)(pcVar3 + (long)param_2 + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),param_2);
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(Variant ***)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_50;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_50);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
LAB_00111b76:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(int, bool), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */

void call_with_variant_args_dv<__UnexistingClass,int,bool>
               (__UnexistingClass *param_1,_func_void_int_bool *param_2,Variant **param_3,
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
    goto LAB_00111e4d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  iVar6 = 2 - uVar10;
  if (lVar1 == 0) {
    if (iVar6 == 0) {
      this = (Variant *)*plVar8;
LAB_00111e7d:
      this_00 = (Variant *)plVar8[1];
      goto LAB_00111db5;
    }
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    iVar11 = (int)lVar2;
    if (iVar6 <= iVar11) {
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar2 <= lVar9) goto LAB_00111e98;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_00111e7d;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar9) {
LAB_00111e98:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar9 * 0x18);
LAB_00111db5:
      *(undefined4 *)param_6 = 0;
      if (((ulong)param_2 & 1) != 0) {
        param_2 = *(_func_void_int_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,1);
      uVar4 = _LC129;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      Variant::operator_cast_to_bool(this_00);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
      uVar4 = _LC123;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      iVar6 = Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x00111e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*param_2)((int)(param_1 + (long)param_3),SUB41(iVar6,0));
      return;
    }
  }
  uVar7 = 4;
LAB_00111e4d:
  *(undefined4 *)param_6 = uVar7;
  *(undefined4 *)(param_6 + 8) = 2;
  return;
}



/* MethodBindT<int, bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<int,bool>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC122,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00111f36;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int,bool>
            (p_Var2,(_func_void_int_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00111f36:
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
    goto LAB_001121fd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00112260;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00112260:
      uVar6 = 4;
LAB_001121fd:
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
      goto LAB_0011217b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011217b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
  uVar4 = _LC130;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_bool(this);
                    /* WARNING: Could not recover jumptable at 0x001121d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(SUB81(param_1 + (long)param_3,0));
  return;
}



/* MethodBindT<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC122,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_001122c6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,bool>
            (p_Var2,(_func_void_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_001122c6:
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
    goto LAB_0011258d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_001125f0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_001125f0:
      uVar6 = 4;
LAB_0011258d:
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
      goto LAB_0011250b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011250b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC123;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x00112566. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((int)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC122,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00112656;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int>
            (p_Var2,(_func_void_int *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,in_R9
            );
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00112656:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass,
   MultiplayerSynchronizer::VisibilityUpdateMode>(__UnexistingClass*, void
   (__UnexistingClass::*)(MultiplayerSynchronizer::VisibilityUpdateMode), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,MultiplayerSynchronizer::VisibilityUpdateMode>
               (__UnexistingClass *param_1,_func_void_VisibilityUpdateMode *param_2,
               Variant **param_3,int param_4,CallError *param_5,Vector *param_6)

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
    goto LAB_0011291d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00112980;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00112980:
      uVar6 = 4;
LAB_0011291d:
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
      goto LAB_0011289b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011289b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_VisibilityUpdateMode **)
               (param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC123;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x001128f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<MultiplayerSynchronizer::VisibilityUpdateMode>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<MultiplayerSynchronizer::VisibilityUpdateMode>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC122,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_001129e6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,MultiplayerSynchronizer::VisibilityUpdateMode>
            (p_Var2,(_func_void_VisibilityUpdateMode *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_001129e6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, double>(__UnexistingClass*, void
   (__UnexistingClass::*)(double), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */

void call_with_variant_args_dv<__UnexistingClass,double>
               (__UnexistingClass *param_1,_func_void_double *param_2,Variant **param_3,int param_4,
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
  double dVar9;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_00112cad;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00112d10;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00112d10:
      uVar6 = 4;
LAB_00112cad:
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
      goto LAB_00112c2b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_00112c2b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_double **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,3);
  uVar4 = _LC131;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  dVar9 = Variant::operator_cast_to_double(this);
                    /* WARNING: Could not recover jumptable at 0x00112c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(dVar9);
  return;
}



/* MethodBindT<double>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<double>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC122,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00112d76;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,double>
            (p_Var2,(_func_void_double *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00112d76:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  iVar5 = *param_2;
  if (iVar5 != param_1) goto LAB_00112f79;
  local_88 = 0;
  local_90 = 0;
  local_78 = &_LC13;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_70._8_8_;
  local_70 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = (undefined *)CONCAT44(local_78._4_4_,2);
  local_60 = 0;
  local_58 = 0;
  local_70 = (undefined1  [16])0x0;
  if (local_90 == 0) {
LAB_00113078:
    local_50 = 6;
    StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_00113078;
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
  *(undefined4 *)param_3 = local_78._0_4_;
  if (*(long *)(param_3 + 8) != local_70._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar3 = local_70._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_70._8_8_;
    local_70 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  if (*(long *)(param_3 + 0x10) != local_70._8_8_) {
    StringName::unref();
    uVar3 = local_70._8_8_;
    local_70._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 0x18) = local_60;
  if (*(long *)(param_3 + 0x20) != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar4 = local_58;
    local_58 = 0;
    *(long *)(param_3 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_3 + 0x28) = local_50;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  iVar5 = *param_2;
LAB_00112f79:
  *param_2 = iVar5 + 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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



/* MethodBindTRC<bool, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<int>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar3 = local_60._0_8_;
    uVar4 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar5 = local_68._0_4_;
    *(undefined8 *)(puVar5 + 2) = uVar3;
    *(undefined8 *)(puVar5 + 4) = uVar4;
    puVar5[6] = (undefined4)local_50;
    *(undefined8 *)(puVar5 + 8) = local_48;
    puVar5[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_001132a8;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = &_LC13;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar5 = 1;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar5[10] = 6;
LAB_0011338f:
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
    puVar5[10] = 6;
    if (puVar5[6] != 0x11) goto LAB_0011338f;
    StringName::StringName((StringName *)&local_68,(String *)(puVar5 + 8),false);
    if (*(undefined **)(puVar5 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar5 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_001132a8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, bool>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<int,bool>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != local_8c) goto LAB_00113466;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC13;
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
LAB_00113568:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00113568;
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
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_00113466:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar5;
}



/* WARNING: Control flow encountered bad instruction data */
/* MultiplayerSynchronizer::~MultiplayerSynchronizer() */

void __thiscall MultiplayerSynchronizer::~MultiplayerSynchronizer(MultiplayerSynchronizer *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<NodePath, DefaultAllocator>::~List() */

void __thiscall List<NodePath,DefaultAllocator>::~List(List<NodePath,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

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
/* MethodBindTRC<bool, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool,int>::~MethodBindTRC(MethodBindTRC<bool,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int, bool>::~MethodBindT() */

void __thiscall MethodBindT<int,bool>::~MethodBindT(MethodBindT<int,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Callable>::~MethodBindT() */

void __thiscall MethodBindT<Callable>::~MethodBindT(MethodBindT<Callable> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

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
/* MethodBindTRC<MultiplayerSynchronizer::VisibilityUpdateMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<MultiplayerSynchronizer::VisibilityUpdateMode>::~MethodBindTRC
          (MethodBindTRC<MultiplayerSynchronizer::VisibilityUpdateMode> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<MultiplayerSynchronizer::VisibilityUpdateMode>::~MethodBindT() */

void __thiscall
MethodBindT<MultiplayerSynchronizer::VisibilityUpdateMode>::~MethodBindT
          (MethodBindT<MultiplayerSynchronizer::VisibilityUpdateMode> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Ref<SceneReplicationConfig>>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<SceneReplicationConfig>>::~MethodBindTR
          (MethodBindTR<Ref<SceneReplicationConfig>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<SceneReplicationConfig> >::~MethodBindT() */

void __thiscall
MethodBindT<Ref<SceneReplicationConfig>>::~MethodBindT
          (MethodBindT<Ref<SceneReplicationConfig>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<double>::~MethodBindTRC() */

void __thiscall MethodBindTRC<double>::~MethodBindTRC(MethodBindTRC<double> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<double>::~MethodBindT() */

void __thiscall MethodBindT<double>::~MethodBindT(MethodBindT<double> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<NodePath>::~MethodBindTRC() */

void __thiscall MethodBindTRC<NodePath>::~MethodBindTRC(MethodBindTRC<NodePath> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<NodePath const&>::~MethodBindT() */

void __thiscall MethodBindT<NodePath_const&>::~MethodBindT(MethodBindT<NodePath_const&> *this)

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


// This is taking way too long.