/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SceneMultiplayer::get_auth_timeout() const */

double __thiscall SceneMultiplayer::get_auth_timeout(SceneMultiplayer *this)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(this + 0x1d0);
  if (-1 < (long)uVar1) {
    return (double)(long)uVar1 / __LC0;
  }
  return (double)uVar1 / __LC0;
}



/* SceneMultiplayer::set_allow_object_decoding(bool) */

void __thiscall SceneMultiplayer::set_allow_object_decoding(SceneMultiplayer *this,bool param_1)

{
  this[0x220] = (SceneMultiplayer)param_1;
  return;
}



/* SceneMultiplayer::is_object_decoding_allowed() const */

SceneMultiplayer __thiscall SceneMultiplayer::is_object_decoding_allowed(SceneMultiplayer *this)

{
  return this[0x220];
}



/* SceneMultiplayer::set_server_relay_enabled(bool) */

void __thiscall SceneMultiplayer::set_server_relay_enabled(SceneMultiplayer *this,bool param_1)

{
  this[0x221] = (SceneMultiplayer)param_1;
  return;
}



/* SceneMultiplayer::is_server_relay_enabled() const */

SceneMultiplayer __thiscall SceneMultiplayer::is_server_relay_enabled(SceneMultiplayer *this)

{
  return this[0x221];
}



/* SceneMultiplayer::get_root_path() const */

void SceneMultiplayer::get_root_path(void)

{
  long in_RSI;
  NodePath *in_RDI;
  
  NodePath::NodePath(in_RDI,(NodePath *)(in_RSI + 0x218));
  return;
}



/* SceneMultiplayer::set_auth_callback(Callable) */

void __thiscall SceneMultiplayer::set_auth_callback(SceneMultiplayer *this,Callable *param_2)

{
  Callable::operator=((Callable *)(this + 0x1c0),param_2);
  return;
}



/* SceneMultiplayer::get_auth_callback() const */

void SceneMultiplayer::get_auth_callback(void)

{
  long in_RSI;
  Callable *in_RDI;
  
  Callable::Callable(in_RDI,(Callable *)(in_RSI + 0x1c0));
  return;
}



/* SceneMultiplayer::rpcp(Object*, int, StringName const&, Variant const**, int) */

void SceneMultiplayer::rpcp
               (Object *param_1,int param_2,StringName *param_3,Variant **param_4,int param_5)

{
  SceneRPCInterface::rpcp(*(Object **)(param_1 + 0x240),param_2,param_3,param_4,param_5);
  return;
}



/* SceneMultiplayer::set_max_sync_packet_size(int) */

void SceneMultiplayer::set_max_sync_packet_size(int param_1)

{
  undefined4 in_register_0000003c;
  
  SceneReplicationInterface::set_max_sync_packet_size
            ((int)*(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 0x238));
  return;
}



/* SceneMultiplayer::get_max_sync_packet_size() const */

void SceneMultiplayer::get_max_sync_packet_size(void)

{
  SceneReplicationInterface::get_max_sync_packet_size();
  return;
}



/* SceneMultiplayer::set_max_delta_packet_size(int) */

void SceneMultiplayer::set_max_delta_packet_size(int param_1)

{
  undefined4 in_register_0000003c;
  
  SceneReplicationInterface::set_max_delta_packet_size
            ((int)*(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 0x238));
  return;
}



/* SceneMultiplayer::get_max_delta_packet_size() const */

void SceneMultiplayer::get_max_delta_packet_size(void)

{
  SceneReplicationInterface::get_max_delta_packet_size();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SceneMultiplayer::set_auth_timeout(double) */

void __thiscall SceneMultiplayer::set_auth_timeout(SceneMultiplayer *this,double param_1)

{
  double dVar1;
  
  if (param_1 < 0.0) {
    _err_print_error("set_auth_timeout","modules/multiplayer/scene_multiplayer.cpp",0x1ff,
                     "Condition \"p_timeout < 0\" is true.",
                     "Timeout must be greater or equal to 0 (where 0 means no timeout)",0,0);
    return;
  }
  dVar1 = param_1 * __LC0;
  if (_LC6 <= dVar1) {
    *(long *)(this + 0x1d0) = (long)(dVar1 - _LC6);
    *(ulong *)(this + 0x1d0) = *(ulong *)(this + 0x1d0) ^ 0x8000000000000000;
    return;
  }
  *(long *)(this + 0x1d0) = (long)dVar1;
  return;
}



/* SceneMultiplayer::set_root_path(NodePath const&) */

void __thiscall SceneMultiplayer::set_root_path(SceneMultiplayer *this,NodePath *param_1)

{
  char cVar1;
  
  cVar1 = NodePath::is_absolute();
  if (cVar1 == '\0') {
    cVar1 = NodePath::is_empty();
    if (cVar1 == '\0') {
      _err_print_error("set_root_path","modules/multiplayer/scene_multiplayer.cpp",0xb6,
                       "Condition \"!p_path.is_absolute() && !p_path.is_empty()\" is true.",
                       "SceneMultiplayer root path must be absolute.",0,0);
      return;
    }
  }
  NodePath::operator=((NodePath *)(this + 0x218),param_1);
  return;
}



/* SceneMultiplayer::object_configuration_remove(Object*, Variant) */

ulong __thiscall
SceneMultiplayer::object_configuration_remove(SceneMultiplayer *this,long param_1,Variant *param_3)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == 0) && (*(int *)param_3 == 0x16)) {
    Variant::operator_cast_to_NodePath((Variant *)&local_50);
    cVar2 = NodePath::operator!=((NodePath *)(this + 0x218),(NodePath *)&local_50);
    NodePath::~NodePath((NodePath *)&local_50);
    if (cVar2 == '\0') {
      local_50 = 0;
      set_root_path(this,(NodePath *)&local_50);
      NodePath::~NodePath((NodePath *)&local_50);
      uVar5 = 0;
      goto LAB_001002ef;
    }
    _err_print_error("object_configuration_remove","modules/multiplayer/scene_multiplayer.cpp",0x259
                     ,
                     "Condition \"root_path != p_config.operator NodePath()\" is true. Returning: ERR_INVALID_PARAMETER"
                     ,0,0);
  }
  else {
    lVar3 = Variant::get_validated_object();
    if (lVar3 != 0) {
      lVar3 = __dynamic_cast(lVar3,&Object::typeinfo,&MultiplayerSpawner::typeinfo,0);
      lVar4 = Variant::get_validated_object();
      if (lVar4 == 0) {
        if (lVar3 == 0) goto LAB_00100419;
      }
      else if (lVar3 == 0) {
        lVar3 = __dynamic_cast(lVar4,&Object::typeinfo,&MultiplayerSynchronizer::typeinfo,0);
        goto LAB_00100324;
      }
      uVar1 = *(undefined8 *)(this + 0x238);
      Variant::Variant((Variant *)local_48,param_3);
      uVar5 = SceneReplicationInterface::on_despawn(uVar1,param_1,(Variant *)local_48);
      cVar2 = Variant::needs_deinit[local_48[0]];
joined_r0x00100363:
      if (cVar2 != '\0') {
        Variant::_clear_internal();
        uVar5 = uVar5 & 0xffffffff;
      }
      goto LAB_001002ef;
    }
    lVar3 = Variant::get_validated_object();
    if (lVar3 != 0) {
      lVar3 = __dynamic_cast(lVar3,&Object::typeinfo,&MultiplayerSynchronizer::typeinfo,0);
LAB_00100324:
      if (lVar3 != 0) {
        uVar1 = *(undefined8 *)(this + 0x238);
        Variant::Variant((Variant *)local_48,param_3);
        uVar5 = SceneReplicationInterface::on_replication_stop(uVar1,param_1,(Variant *)local_48);
        cVar2 = Variant::needs_deinit[local_48[0]];
        goto joined_r0x00100363;
      }
    }
  }
LAB_00100419:
  uVar5 = 0x1f;
LAB_001002ef:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



/* SceneMultiplayer::get_unique_id() */

undefined8 __thiscall SceneMultiplayer::get_unique_id(SceneMultiplayer *this)

{
  undefined8 uVar1;
  
  if (*(long **)(this + 0x180) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100463. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(this + 0x180) + 0x208))();
    return uVar1;
  }
  _err_print_error("get_unique_id","modules/multiplayer/scene_multiplayer.cpp",0x215,
                   "Condition \"multiplayer_peer.is_null()\" is true. Returning: 0",
                   "No multiplayer peer is assigned. Unable to get unique ID.",0,0);
  return 0;
}



/* SceneMultiplayer::set_refuse_new_connections(bool) */

void __thiscall SceneMultiplayer::set_refuse_new_connections(SceneMultiplayer *this,bool param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x180);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001004c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x1b0))(plVar1,param_1);
    return;
  }
  _err_print_error("set_refuse_new_connections","modules/multiplayer/scene_multiplayer.cpp",0x21a,
                   "Condition \"multiplayer_peer.is_null()\" is true.",
                   "No multiplayer peer is assigned. Unable to set \'refuse_new_connections\'.",0,0)
  ;
  return;
}



/* SceneMultiplayer::is_refusing_new_connections() const */

undefined8 __thiscall SceneMultiplayer::is_refusing_new_connections(SceneMultiplayer *this)

{
  undefined8 uVar1;
  
  if (*(long **)(this + 0x180) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100523. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(this + 0x180) + 0x1b8))();
    return uVar1;
  }
  _err_print_error("is_refusing_new_connections","modules/multiplayer/scene_multiplayer.cpp",0x21f,
                   "Condition \"multiplayer_peer.is_null()\" is true. Returning: false",
                   "No multiplayer peer is assigned. Unable to get \'refuse_new_connections\'.",0,0)
  ;
  return 0;
}



/* SceneMultiplayer::object_configuration_add(Object*, Variant) */

ulong __thiscall
SceneMultiplayer::object_configuration_add(SceneMultiplayer *this,long param_1,Variant *param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  Variant local_50 [8];
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == 0) && (*(int *)param_3 == 0x16)) {
    Variant::operator_cast_to_NodePath(local_50);
    set_root_path(this,(NodePath *)local_50);
    NodePath::~NodePath((NodePath *)local_50);
    uVar5 = 0;
    goto LAB_0010061f;
  }
  lVar3 = Variant::get_validated_object();
  if (lVar3 == 0) {
    lVar3 = Variant::get_validated_object();
    if (lVar3 != 0) {
      lVar3 = __dynamic_cast(lVar3,&Object::typeinfo,&MultiplayerSynchronizer::typeinfo,0);
LAB_00100654:
      if (lVar3 != 0) {
        uVar2 = *(undefined8 *)(this + 0x238);
        Variant::Variant((Variant *)local_48,param_3);
        uVar5 = SceneReplicationInterface::on_replication_start(uVar2,param_1,(Variant *)local_48);
        cVar1 = Variant::needs_deinit[local_48[0]];
        goto joined_r0x00100693;
      }
    }
LAB_00100721:
    uVar5 = 0x1f;
  }
  else {
    lVar3 = __dynamic_cast(lVar3,&Object::typeinfo,&MultiplayerSpawner::typeinfo,0);
    lVar4 = Variant::get_validated_object();
    if (lVar4 == 0) {
      if (lVar3 == 0) goto LAB_00100721;
    }
    else if (lVar3 == 0) {
      lVar3 = __dynamic_cast(lVar4,&Object::typeinfo,&MultiplayerSynchronizer::typeinfo,0);
      goto LAB_00100654;
    }
    uVar2 = *(undefined8 *)(this + 0x238);
    Variant::Variant((Variant *)local_48,param_3);
    uVar5 = SceneReplicationInterface::on_spawn(uVar2,param_1,(Variant *)local_48);
    cVar1 = Variant::needs_deinit[local_48[0]];
joined_r0x00100693:
    if (cVar1 != '\0') {
      Variant::_clear_internal();
      uVar5 = uVar5 & 0xffffffff;
    }
  }
LAB_0010061f:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



/* SceneMultiplayer::get_multiplayer_peer() */

void SceneMultiplayer::get_multiplayer_peer(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0x180) != 0) {
    *in_RDI = *(long *)(in_RSI + 0x180);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* CowData<int>::_ref(CowData<int> const&) [clone .part.0] */

void __thiscall CowData<int>::_ref(CowData<int> *this,CowData *param_1)

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



/* HashMap<int, SceneMultiplayer::PendingPeer, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, SceneMultiplayer::PendingPeer> > >::erase(int const&)
   [clone .isra.0] */

void __thiscall
HashMap<int,SceneMultiplayer::PendingPeer,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneMultiplayer::PendingPeer>>>
::erase(HashMap<int,SceneMultiplayer::PendingPeer,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneMultiplayer::PendingPeer>>>
        *this,int *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
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
  uint uVar28;
  uint uVar29;
  ulong uVar30;
  ulong uVar31;
  uint uVar32;
  uint uVar33;
  ulong uVar34;
  ulong uVar35;
  long *plVar36;
  uint uVar37;
  uint *puVar38;
  ulong uVar39;
  
  lVar6 = *(long *)(this + 8);
  if ((lVar6 != 0) && (*(int *)(this + 0x2c) != 0)) {
    uVar33 = *param_1;
    uVar5 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar39 = CONCAT44(0,uVar5);
    uVar7 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar28 = (uVar33 >> 0x10 ^ uVar33) * -0x7a143595;
    uVar28 = (uVar28 ^ uVar28 >> 0xd) * -0x3d4d51cb;
    uVar32 = uVar28 ^ uVar28 >> 0x10;
    if (uVar28 == uVar28 >> 0x10) {
      uVar32 = 1;
      uVar30 = uVar7;
    }
    else {
      uVar30 = uVar32 * uVar7;
    }
    lVar8 = *(long *)(this + 0x10);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar39;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar30;
    uVar30 = SUB168(auVar10 * auVar19,8);
    uVar28 = *(uint *)(lVar8 + uVar30 * 4);
    uVar34 = (ulong)SUB164(auVar10 * auVar19,8);
    if (uVar28 != 0) {
      uVar37 = 0;
      do {
        auVar13._8_8_ = 0;
        auVar13._0_8_ = ((int)uVar34 + 1) * uVar7;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar39;
        uVar31 = SUB168(auVar13 * auVar22,8);
        uVar29 = SUB164(auVar13 * auVar22,8);
        if ((uVar32 == uVar28) && (uVar33 == *(uint *)(*(long *)(lVar6 + uVar30 * 8) + 0x10))) {
          puVar38 = (uint *)(lVar8 + uVar31 * 4);
          uVar33 = *puVar38;
          if ((uVar33 != 0) &&
             (auVar14._8_8_ = 0, auVar14._0_8_ = uVar33 * uVar7, auVar23._8_8_ = 0,
             auVar23._0_8_ = uVar39, auVar15._8_8_ = 0,
             auVar15._0_8_ = ((uVar29 + uVar5) - SUB164(auVar14 * auVar23,8)) * uVar7,
             auVar24._8_8_ = 0, auVar24._0_8_ = uVar39, uVar30 = (ulong)uVar29, uVar35 = uVar34,
             SUB164(auVar15 * auVar24,8) != 0)) {
            while( true ) {
              uVar34 = uVar30;
              puVar1 = (uint *)(lVar8 + uVar35 * 4);
              *puVar38 = *puVar1;
              puVar2 = (undefined8 *)(lVar6 + uVar31 * 8);
              *puVar1 = uVar33;
              puVar3 = (undefined8 *)(lVar6 + uVar35 * 8);
              uVar9 = *puVar2;
              *puVar2 = *puVar3;
              *puVar3 = uVar9;
              auVar18._8_8_ = 0;
              auVar18._0_8_ = ((int)uVar34 + 1) * uVar7;
              auVar27._8_8_ = 0;
              auVar27._0_8_ = uVar39;
              uVar31 = SUB168(auVar18 * auVar27,8);
              puVar38 = (uint *)(lVar8 + uVar31 * 4);
              uVar33 = *puVar38;
              if ((uVar33 == 0) ||
                 (auVar16._8_8_ = 0, auVar16._0_8_ = uVar33 * uVar7, auVar25._8_8_ = 0,
                 auVar25._0_8_ = uVar39, auVar17._8_8_ = 0,
                 auVar17._0_8_ =
                      ((SUB164(auVar18 * auVar27,8) + uVar5) - SUB164(auVar16 * auVar25,8)) * uVar7,
                 auVar26._8_8_ = 0, auVar26._0_8_ = uVar39, SUB164(auVar17 * auVar26,8) == 0))
              break;
              uVar30 = uVar31 & 0xffffffff;
              uVar35 = uVar34;
            }
          }
          plVar4 = (long *)(lVar6 + uVar34 * 8);
          *(undefined4 *)(lVar8 + uVar34 * 4) = 0;
          plVar36 = (long *)*plVar4;
          if (*(long **)(this + 0x18) == plVar36) {
            *(long *)(this + 0x18) = *plVar36;
            plVar36 = (long *)*plVar4;
          }
          if (*(long **)(this + 0x20) == plVar36) {
            *(long *)(this + 0x20) = plVar36[1];
            plVar36 = (long *)*plVar4;
          }
          if ((long *)plVar36[1] != (long *)0x0) {
            *(long *)plVar36[1] = *plVar36;
            plVar36 = (long *)*plVar4;
          }
          if (*plVar36 != 0) {
            *(long *)(*plVar36 + 8) = plVar36[1];
            plVar36 = (long *)*plVar4;
          }
          Memory::free_static(plVar36,false);
          *(undefined8 *)(*(long *)(this + 8) + uVar34 * 8) = 0;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + -1;
          return;
        }
        uVar28 = *(uint *)(lVar8 + uVar31 * 4);
        uVar34 = uVar31 & 0xffffffff;
        uVar37 = uVar37 + 1;
      } while ((uVar28 != 0) &&
              (auVar11._8_8_ = 0, auVar11._0_8_ = uVar28 * uVar7, auVar20._8_8_ = 0,
              auVar20._0_8_ = uVar39, auVar12._8_8_ = 0,
              auVar12._0_8_ = ((uVar5 + uVar29) - SUB164(auVar11 * auVar20,8)) * uVar7,
              auVar21._8_8_ = 0, auVar21._0_8_ = uVar39, uVar30 = uVar31,
              uVar37 <= SUB164(auVar12 * auVar21,8)));
    }
  }
  return;
}



/* CowData<int>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<int>::_copy_on_write(CowData<int> *this)

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
  __n = lVar2 * 4;
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



/* SceneMultiplayer::get_rpc_md5(Object const*) */

Object * SceneMultiplayer::get_rpc_md5(Object *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  SceneRPCInterface::get_rpc_md5(param_1);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneMultiplayer::_del_peer(int) */

void __thiscall SceneMultiplayer::_del_peer(SceneMultiplayer *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
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
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  char cVar47;
  uint uVar48;
  int iVar49;
  long lVar50;
  uint *puVar51;
  long *plVar52;
  ulong uVar53;
  uint uVar54;
  uint *puVar55;
  long lVar56;
  ulong uVar57;
  ulong uVar58;
  long lVar59;
  ulong uVar60;
  uint uVar61;
  uint *puVar62;
  uint uVar63;
  uint *puVar64;
  uint uVar65;
  ulong uVar66;
  long in_FS_OFFSET;
  Variant *local_e0;
  int local_ac;
  Array local_a8 [8];
  undefined8 local_a0;
  undefined *local_98;
  undefined8 local_90;
  Variant *local_88 [2];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined2 local_46;
  undefined1 local_44 [4];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  local_ac = param_1;
  if ((*(long *)(this + 0x198) != 0) && (*(int *)(this + 0x1bc) != 0)) {
    uVar53 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1b8) * 8);
    uVar48 = ((uint)param_1 >> 0x10 ^ param_1) * -0x7a143595;
    uVar48 = (uVar48 ^ uVar48 >> 0xd) * -0x3d4d51cb;
    uVar65 = uVar48 ^ uVar48 >> 0x10;
    if (uVar48 == uVar48 >> 0x10) {
      uVar65 = 1;
      uVar58 = uVar53;
    }
    else {
      uVar58 = uVar65 * uVar53;
    }
    uVar57 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1b8) * 4));
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar57;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar58;
    lVar56 = SUB168(auVar11 * auVar29,8);
    uVar48 = *(uint *)(*(long *)(this + 0x1a0) + lVar56 * 4);
    iVar49 = SUB164(auVar11 * auVar29,8);
    if (uVar48 != 0) {
      uVar63 = 0;
      do {
        if ((uVar65 == uVar48) &&
           (param_1 == *(int *)(*(long *)(*(long *)(this + 0x198) + lVar56 * 8) + 0x10))) {
          HashMap<int,SceneMultiplayer::PendingPeer,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneMultiplayer::PendingPeer>>>
          ::erase((HashMap<int,SceneMultiplayer::PendingPeer,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneMultiplayer::PendingPeer>>>
                   *)(this + 400),&local_ac);
          if ((_del_peer(int)::{lambda()#1}::operator()()::sname == '\0') &&
             (iVar49 = __cxa_guard_acquire(&_del_peer(int)::{lambda()#1}::operator()()::sname),
             iVar49 != 0)) {
            _scs_create((char *)&_del_peer(int)::{lambda()#1}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,&_del_peer(int)::{lambda()#1}::operator()()::sname,
                         &__dso_handle);
            __cxa_guard_release(&_del_peer(int)::{lambda()#1}::operator()()::sname);
          }
          Variant::Variant((Variant *)local_78,param_1);
          local_58 = (undefined1  [16])0x0;
          local_60 = 0;
          local_88[0] = (Variant *)local_78;
          (**(code **)(*(long *)this + 0xd0))
                    (this,&_del_peer(int)::{lambda()#1}::operator()()::sname,local_88,1);
          cVar47 = Variant::needs_deinit[(int)local_60];
          goto joined_r0x00100f1e;
        }
        uVar63 = uVar63 + 1;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = (iVar49 + 1) * uVar53;
        auVar30._8_8_ = 0;
        auVar30._0_8_ = uVar57;
        lVar56 = SUB168(auVar12 * auVar30,8);
        uVar48 = *(uint *)(*(long *)(this + 0x1a0) + lVar56 * 4);
        iVar49 = SUB164(auVar12 * auVar30,8);
      } while ((uVar48 != 0) &&
              (auVar13._8_8_ = 0, auVar13._0_8_ = uVar48 * uVar53, auVar31._8_8_ = 0,
              auVar31._0_8_ = uVar57, auVar14._8_8_ = 0,
              auVar14._0_8_ =
                   ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1b8) * 4) + iVar49
                    ) - SUB164(auVar13 * auVar31,8)) * uVar53, auVar32._8_8_ = 0,
              auVar32._0_8_ = uVar57, uVar63 <= SUB164(auVar14 * auVar32,8)));
    }
  }
  if ((*(long *)(this + 0x1d8) != 0) && (*(int *)(this + 0x1fc) != 0)) {
    uVar58 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1f8) * 4));
    uVar53 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1f8) * 8);
    uVar48 = ((uint)param_1 >> 0x10 ^ param_1) * -0x7a143595;
    uVar63 = (uVar48 ^ uVar48 >> 0xd) * -0x3d4d51cb;
    uVar65 = uVar63 >> 0x10;
    uVar48 = uVar63 ^ uVar65;
    if (uVar63 == uVar65) {
      uVar61 = 1;
      uVar57 = uVar53;
    }
    else {
      uVar57 = uVar48 * uVar53;
      uVar61 = uVar48;
    }
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar58;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar57;
    lVar56 = SUB168(auVar15 * auVar33,8);
    uVar54 = *(uint *)(*(long *)(this + 0x1f0) + lVar56 * 4);
    uVar57 = (ulong)uVar54;
    iVar49 = SUB164(auVar15 * auVar33,8);
    if (uVar54 != 0) {
      uVar54 = 0;
      do {
        if ((uVar61 == (uint)uVar57) &&
           (param_1 ==
            *(int *)(*(long *)(this + 0x1d8) +
                    (ulong)*(uint *)(*(long *)(this + 0x1e0) + lVar56 * 4) * 4))) {
          if ((this[0x221] != (SceneMultiplayer)0x0) &&
             ((iVar49 = (**(code **)(*(long *)this + 0x168))(this), iVar49 == 1 &&
              (cVar47 = (**(code **)(**(long **)(this + 0x180) + 0x1c0))(), cVar47 != '\0')))) {
            local_46 = 0x207;
            (**(code **)(**(long **)(this + 0x180) + 400))(*(long **)(this + 0x180),0);
            (**(code **)(**(long **)(this + 0x180) + 0x1a0))(*(long **)(this + 0x180),2);
            plVar52 = (long *)local_44;
            uVar54 = param_1;
            do {
              *(char *)plVar52 = (char)uVar54;
              plVar52 = (long *)((long)plVar52 + 1);
              uVar54 = uVar54 >> 8;
            } while (plVar52 != local_40);
            iVar49 = *(int *)(this + 0x1fc);
            if (iVar49 != 0) {
              lVar56 = 0;
              piVar10 = *(int **)(this + 0x1d8);
              iVar6 = *piVar10;
              while( true ) {
                if (iVar6 != param_1) {
                  (**(code **)(**(long **)(this + 0x180) + 0x1c8))();
                  local_98 = &_LC64;
                  local_a0 = 0;
                  local_90 = 3;
                  String::parse_latin1((StrRange *)&local_a0);
                  StringName::StringName((StringName *)&local_98,"multiplayer:bandwidth",false);
                  cVar47 = EngineDebugger::is_profiling((StringName *)&local_98);
                  if ((StringName::configured != '\0') && (local_98 != (undefined *)0x0)) {
                    StringName::unref();
                  }
                  if (cVar47 != '\0') {
                    Array::Array(local_a8);
                    Variant::Variant((Variant *)local_78,(String *)&local_a0);
                    Array::push_back((Variant *)local_a8);
                    if (Variant::needs_deinit[local_78[0]] != '\0') {
                      Variant::_clear_internal();
                    }
                    OS::get_singleton();
                    uVar53 = OS::get_ticks_msec();
                    Variant::Variant((Variant *)local_78,uVar53);
                    Array::push_back((Variant *)local_a8);
                    if (Variant::needs_deinit[local_78[0]] != '\0') {
                      Variant::_clear_internal();
                    }
                    Variant::Variant((Variant *)local_78,6);
                    Array::push_back((Variant *)local_a8);
                    if (Variant::needs_deinit[local_78[0]] != '\0') {
                      Variant::_clear_internal();
                    }
                    StringName::StringName((StringName *)&local_98,"multiplayer:bandwidth",false);
                    EngineDebugger::profiler_add_frame_data((StringName *)&local_98,local_a8);
                    if ((StringName::configured != '\0') && (local_98 != (undefined *)0x0)) {
                      StringName::unref();
                    }
                    Array::~Array(local_a8);
                  }
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                  (**(code **)(**(long **)(this + 0x180) + 0x160))
                            (*(long **)(this + 0x180),&local_46,6);
                }
                if (iVar49 <= (int)lVar56 + 1) break;
                lVar56 = lVar56 + 1;
                iVar6 = piVar10[lVar56];
              }
            }
          }
          local_e0 = (Variant *)local_78;
          SceneReplicationInterface::on_peer_change
                    ((int)*(undefined8 *)(this + 0x238),SUB41(param_1,0));
          SceneCacheInterface::on_peer_change((int)*(undefined8 *)(this + 0x230),SUB41(param_1,0));
          lVar56 = *(long *)(this + 0x1d8);
          if ((lVar56 != 0) && (*(int *)(this + 0x1fc) != 0)) {
            uVar54 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1f8) * 4);
            uVar57 = CONCAT44(0,uVar54);
            uVar53 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1f8) * 8);
            uVar58 = uVar53;
            if (uVar63 != uVar65) {
              uVar58 = uVar48 * uVar53;
            }
            lVar7 = *(long *)(this + 0x1f0);
            auVar19._8_8_ = 0;
            auVar19._0_8_ = uVar57;
            auVar37._8_8_ = 0;
            auVar37._0_8_ = uVar58;
            lVar59 = SUB168(auVar19 * auVar37,8);
            uVar48 = *(uint *)(lVar7 + lVar59 * 4);
            iVar49 = SUB164(auVar19 * auVar37,8);
            if (uVar48 != 0) {
              uVar65 = 0;
              do {
                if (uVar61 == uVar48) {
                  lVar8 = *(long *)(this + 0x1e0);
                  uVar48 = *(uint *)(lVar8 + lVar59 * 4);
                  if (param_1 == *(int *)(lVar56 + (ulong)uVar48 * 4)) {
                    lVar9 = *(long *)(this + 0x1e8);
                    lVar50 = (ulong)uVar48 * 4;
                    puVar51 = (uint *)(lVar50 + lVar9);
                    uVar65 = *puVar51;
                    uVar58 = (ulong)uVar65;
                    auVar23._8_8_ = 0;
                    auVar23._0_8_ = (uVar65 + 1) * uVar53;
                    auVar41._8_8_ = 0;
                    auVar41._0_8_ = uVar57;
                    lVar59 = SUB168(auVar23 * auVar41,8) * 4;
                    uVar63 = SUB164(auVar23 * auVar41,8);
                    uVar66 = (ulong)uVar63;
                    puVar62 = (uint *)(lVar7 + lVar59);
                    if ((*puVar62 == 0) ||
                       (auVar24._8_8_ = 0, auVar24._0_8_ = *puVar62 * uVar53, auVar42._8_8_ = 0,
                       auVar42._0_8_ = uVar57, auVar25._8_8_ = 0,
                       auVar25._0_8_ = ((uVar63 + uVar54) - SUB164(auVar24 * auVar42,8)) * uVar53,
                       auVar43._8_8_ = 0, auVar43._0_8_ = uVar57, SUB164(auVar25 * auVar43,8) == 0))
                    {
                      uVar66 = (ulong)uVar65;
                    }
                    else {
                      while( true ) {
                        puVar55 = (uint *)(lVar59 + lVar8);
                        puVar3 = (uint *)(lVar8 + uVar58 * 4);
                        puVar64 = (uint *)(uVar58 * 4 + lVar7);
                        puVar1 = (undefined4 *)(lVar9 + (ulong)*puVar55 * 4);
                        puVar2 = (undefined4 *)(lVar9 + (ulong)*puVar3 * 4);
                        uVar5 = *puVar2;
                        *puVar2 = *puVar1;
                        *puVar1 = uVar5;
                        uVar65 = *puVar62;
                        *puVar62 = *puVar64;
                        *puVar64 = uVar65;
                        uVar65 = *puVar55;
                        *puVar55 = *puVar3;
                        *puVar3 = uVar65;
                        auVar28._8_8_ = 0;
                        auVar28._0_8_ = ((int)uVar66 + 1) * uVar53;
                        auVar46._8_8_ = 0;
                        auVar46._0_8_ = uVar57;
                        uVar60 = SUB168(auVar28 * auVar46,8);
                        lVar59 = uVar60 * 4;
                        puVar62 = (uint *)(lVar7 + lVar59);
                        if ((*puVar62 == 0) ||
                           (auVar26._8_8_ = 0, auVar26._0_8_ = *puVar62 * uVar53, auVar44._8_8_ = 0,
                           auVar44._0_8_ = uVar57, auVar27._8_8_ = 0,
                           auVar27._0_8_ =
                                ((SUB164(auVar28 * auVar46,8) + uVar54) -
                                SUB164(auVar26 * auVar44,8)) * uVar53, auVar45._8_8_ = 0,
                           auVar45._0_8_ = uVar57, SUB164(auVar27 * auVar45,8) == 0)) break;
                        uVar58 = uVar66;
                        uVar66 = uVar60 & 0xffffffff;
                      }
                    }
                    *(undefined4 *)(lVar7 + uVar66 * 4) = 0;
                    uVar65 = *(int *)(this + 0x1fc) - 1;
                    *(uint *)(this + 0x1fc) = uVar65;
                    if (uVar48 < uVar65) {
                      *(undefined4 *)(lVar50 + lVar56) = *(undefined4 *)(lVar56 + (ulong)uVar65 * 4)
                      ;
                      *puVar51 = *(uint *)(lVar9 + (ulong)*(uint *)(this + 0x1fc) * 4);
                      *(uint *)(lVar8 + (ulong)*(uint *)(lVar9 + (ulong)*(uint *)(this + 0x1fc) * 4)
                                        * 4) = uVar48;
                    }
                    break;
                  }
                }
                uVar65 = uVar65 + 1;
                auVar20._8_8_ = 0;
                auVar20._0_8_ = (iVar49 + 1) * uVar53;
                auVar38._8_8_ = 0;
                auVar38._0_8_ = uVar57;
                lVar59 = SUB168(auVar20 * auVar38,8);
                uVar48 = *(uint *)(lVar7 + lVar59 * 4);
                iVar49 = SUB164(auVar20 * auVar38,8);
              } while ((uVar48 != 0) &&
                      (auVar21._8_8_ = 0, auVar21._0_8_ = uVar48 * uVar53, auVar39._8_8_ = 0,
                      auVar39._0_8_ = uVar57, auVar22._8_8_ = 0,
                      auVar22._0_8_ = ((uVar54 + iVar49) - SUB164(auVar21 * auVar39,8)) * uVar53,
                      auVar40._8_8_ = 0, auVar40._0_8_ = uVar57,
                      uVar65 <= SUB164(auVar22 * auVar40,8)));
            }
          }
          if ((_del_peer(int)::{lambda()#2}::operator()()::sname == '\0') &&
             (iVar49 = __cxa_guard_acquire(&_del_peer(int)::{lambda()#2}::operator()()::sname),
             iVar49 != 0)) {
            _scs_create((char *)&_del_peer(int)::{lambda()#2}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,&_del_peer(int)::{lambda()#2}::operator()()::sname,
                         &__dso_handle);
            __cxa_guard_release(&_del_peer(int)::{lambda()#2}::operator()()::sname);
          }
          Variant::Variant(local_e0,param_1);
          local_88[0] = local_e0;
          local_58 = (undefined1  [16])0x0;
          local_60 = 0;
          (**(code **)(*(long *)this + 0xd0))
                    (this,&_del_peer(int)::{lambda()#2}::operator()()::sname,local_88,1);
          cVar47 = Variant::needs_deinit[(int)local_60];
joined_r0x00100f1e:
          if (cVar47 != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          break;
        }
        uVar54 = uVar54 + 1;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = (iVar49 + 1) * uVar53;
        auVar34._8_8_ = 0;
        auVar34._0_8_ = uVar58;
        lVar56 = SUB168(auVar16 * auVar34,8);
        uVar4 = *(uint *)(*(long *)(this + 0x1f0) + lVar56 * 4);
        uVar57 = (ulong)uVar4;
        iVar49 = SUB164(auVar16 * auVar34,8);
      } while ((uVar4 != 0) &&
              (auVar17._8_8_ = 0, auVar17._0_8_ = uVar57 * uVar53, auVar35._8_8_ = 0,
              auVar35._0_8_ = uVar58, auVar18._8_8_ = 0,
              auVar18._0_8_ =
                   ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1f8) * 4) + iVar49
                    ) - SUB164(auVar17 * auVar35,8)) * uVar53, auVar36._8_8_ = 0,
              auVar36._0_8_ = uVar58, uVar54 <= SUB164(auVar18 * auVar36,8)));
    }
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneMultiplayer::disconnect_peer(int) */

void __thiscall SceneMultiplayer::disconnect_peer(SceneMultiplayer *this,int param_1)

{
  int iVar1;
  
  if (*(long **)(this + 0x180) != (long *)0x0) {
    iVar1 = (**(code **)(**(long **)(this + 0x180) + 0x210))();
    if (iVar1 == 2) {
      Object::is_blocking_signals();
      Object::set_block_signals(SUB81(this,0));
      _del_peer(this,param_1);
      Object::set_block_signals(SUB81(this,0));
                    /* WARNING: Could not recover jumptable at 0x00101880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x180) + 0x1e8))(*(long **)(this + 0x180),param_1,0);
      return;
    }
  }
  _err_print_error("disconnect_peer","modules/multiplayer/scene_multiplayer.cpp",0x1b0,
                   "Condition \"multiplayer_peer.is_null() || multiplayer_peer->get_connection_status() != MultiplayerPeer::CONNECTION_CONNECTED\" is true."
                   ,0,0);
  return;
}



/* SceneMultiplayer::_admit_peer(int) */

void __thiscall SceneMultiplayer::_admit_peer(SceneMultiplayer *this,int param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long in_FS_OFFSET;
  Array local_a8 [8];
  undefined8 local_a0;
  undefined *local_98;
  undefined8 local_90;
  Variant *local_88 [2];
  int local_78 [2];
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined2 local_46;
  undefined1 local_44 [4];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x221] != (SceneMultiplayer)0x0) {
    iVar3 = (**(code **)(*(long *)this + 0x168))();
    if ((iVar3 == 1) && (cVar2 = (**(code **)(**(long **)(this + 0x180) + 0x1c0))(), cVar2 != '\0'))
    {
      local_46 = 0x107;
      (**(code **)(**(long **)(this + 0x180) + 400))(*(long **)(this + 0x180),0);
      (**(code **)(**(long **)(this + 0x180) + 0x1a0))(*(long **)(this + 0x180),2);
      iVar3 = *(int *)(this + 0x1fc);
      if (iVar3 != 0) {
        lVar1 = *(long *)(this + 0x1d8);
        lVar6 = 0;
        while( true ) {
          uVar5 = (ulong)(uint)param_1;
          plVar4 = (long *)local_44;
          do {
            *(char *)plVar4 = (char)uVar5;
            plVar4 = (long *)((long)plVar4 + 1);
            uVar5 = uVar5 >> 8;
          } while (plVar4 != local_40);
          (**(code **)(**(long **)(this + 0x180) + 0x1c8))
                    (*(long **)(this + 0x180),*(undefined4 *)(lVar1 + lVar6 * 4));
          local_98 = &_LC64;
          local_a0 = 0;
          local_90 = 3;
          String::parse_latin1((StrRange *)&local_a0);
          StringName::StringName((StringName *)&local_98,"multiplayer:bandwidth",false);
          cVar2 = EngineDebugger::is_profiling((StringName *)&local_98);
          if ((StringName::configured != '\0') && (local_98 != (undefined *)0x0)) {
            StringName::unref();
          }
          if (cVar2 != '\0') {
            Array::Array(local_a8);
            Variant::Variant((Variant *)local_78,(String *)&local_a0);
            Array::push_back((Variant *)local_a8);
            if (Variant::needs_deinit[local_78[0]] != '\0') {
              Variant::_clear_internal();
            }
            OS::get_singleton();
            uVar5 = OS::get_ticks_msec();
            Variant::Variant((Variant *)local_78,uVar5);
            Array::push_back((Variant *)local_a8);
            if (Variant::needs_deinit[local_78[0]] != '\0') {
              Variant::_clear_internal();
            }
            Variant::Variant((Variant *)local_78,6);
            Array::push_back((Variant *)local_a8);
            if (Variant::needs_deinit[local_78[0]] != '\0') {
              Variant::_clear_internal();
            }
            StringName::StringName((StringName *)&local_98,"multiplayer:bandwidth",false);
            EngineDebugger::profiler_add_frame_data((StringName *)&local_98,local_a8);
            if ((StringName::configured != '\0') && (local_98 != (undefined *)0x0)) {
              StringName::unref();
            }
            Array::~Array(local_a8);
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
          (**(code **)(**(long **)(this + 0x180) + 0x160))(*(long **)(this + 0x180),&local_46,6);
          uVar5 = (ulong)*(uint *)(lVar1 + lVar6 * 4);
          plVar4 = (long *)local_44;
          do {
            *(char *)plVar4 = (char)uVar5;
            plVar4 = (long *)((long)plVar4 + 1);
            uVar5 = uVar5 >> 8;
          } while (plVar4 != local_40);
          (**(code **)(**(long **)(this + 0x180) + 0x1c8))(*(long **)(this + 0x180),param_1);
          local_98 = &_LC64;
          local_a0 = 0;
          local_90 = 3;
          String::parse_latin1((StrRange *)&local_a0);
          StringName::StringName((StringName *)&local_98,"multiplayer:bandwidth",false);
          cVar2 = EngineDebugger::is_profiling((StringName *)&local_98);
          if ((StringName::configured != '\0') && (local_98 != (undefined *)0x0)) {
            StringName::unref();
          }
          if (cVar2 != '\0') {
            Array::Array(local_a8);
            Variant::Variant((Variant *)local_78,(String *)&local_a0);
            Array::push_back((Variant *)local_a8);
            if (Variant::needs_deinit[local_78[0]] != '\0') {
              Variant::_clear_internal();
            }
            OS::get_singleton();
            uVar5 = OS::get_ticks_msec();
            Variant::Variant((Variant *)local_78,uVar5);
            Array::push_back((Variant *)local_a8);
            if (Variant::needs_deinit[local_78[0]] != '\0') {
              Variant::_clear_internal();
            }
            Variant::Variant((Variant *)local_78,6);
            Array::push_back((Variant *)local_a8);
            if (Variant::needs_deinit[local_78[0]] != '\0') {
              Variant::_clear_internal();
            }
            StringName::StringName((StringName *)&local_98,"multiplayer:bandwidth",false);
            EngineDebugger::profiler_add_frame_data((StringName *)&local_98,local_a8);
            if ((StringName::configured != '\0') && (local_98 != (undefined *)0x0)) {
              StringName::unref();
            }
            Array::~Array(local_a8);
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
          (**(code **)(**(long **)(this + 0x180) + 0x160))(*(long **)(this + 0x180),&local_46,6);
          if (iVar3 <= (int)lVar6 + 1) break;
          lVar6 = lVar6 + 1;
        }
      }
    }
  }
  HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert((int *)&local_98);
  SceneCacheInterface::on_peer_change((int)*(undefined8 *)(this + 0x230),SUB41(param_1,0));
  SceneReplicationInterface::on_peer_change((int)*(undefined8 *)(this + 0x238),SUB41(param_1,0));
  if (param_1 == 1) {
    if ((_admit_peer(int)::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar3 = __cxa_guard_acquire(&_admit_peer(int)::{lambda()#1}::operator()()::sname),
       iVar3 != 0)) {
      _scs_create((char *)&_admit_peer(int)::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_admit_peer(int)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_admit_peer(int)::{lambda()#1}::operator()()::sname);
    }
    local_78[0] = 0;
    local_78[1] = 0;
    local_70 = (undefined1  [16])0x0;
    (**(code **)(*(long *)this + 0xd0))
              (this,&_admit_peer(int)::{lambda()#1}::operator()()::sname,0,0);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((_admit_peer(int)::{lambda()#2}::operator()()::sname == '\0') &&
     (iVar3 = __cxa_guard_acquire(&_admit_peer(int)::{lambda()#2}::operator()()::sname), iVar3 != 0)
     ) {
    _scs_create((char *)&_admit_peer(int)::{lambda()#2}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_admit_peer(int)::{lambda()#2}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_admit_peer(int)::{lambda()#2}::operator()()::sname);
  }
  Variant::Variant((Variant *)local_78,param_1);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88[0] = (Variant *)local_78;
  (**(code **)(*(long *)this + 0xd0))
            (this,&_admit_peer(int)::{lambda()#2}::operator()()::sname,local_88,1);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* SceneMultiplayer::_add_peer(int) */

void __thiscall SceneMultiplayer::_add_peer(SceneMultiplayer *this,int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long in_FS_OFFSET;
  int local_7c;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_7c = param_1;
  cVar2 = Callable::is_valid();
  iVar1 = local_7c;
  if (cVar2 == '\0') {
    _admit_peer(this,local_7c);
  }
  else {
    puVar4 = (undefined2 *)
             HashMap<int,SceneMultiplayer::PendingPeer,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneMultiplayer::PendingPeer>>>
             ::operator[]((HashMap<int,SceneMultiplayer::PendingPeer,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneMultiplayer::PendingPeer>>>
                           *)(this + 400),&local_7c);
    *puVar4 = 0;
    *(undefined8 *)(puVar4 + 4) = 0;
    OS::get_singleton();
    uVar5 = OS::get_ticks_msec();
    lVar6 = HashMap<int,SceneMultiplayer::PendingPeer,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneMultiplayer::PendingPeer>>>
            ::operator[]((HashMap<int,SceneMultiplayer::PendingPeer,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneMultiplayer::PendingPeer>>>
                          *)(this + 400),&local_7c);
    *(undefined8 *)(lVar6 + 8) = uVar5;
    if (_add_peer(int)::{lambda()#1}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&_add_peer(int)::{lambda()#1}::operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&_add_peer(int)::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_add_peer(int)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_add_peer(int)::{lambda()#1}::operator()()::sname);
      }
    }
    Variant::Variant((Variant *)local_68,iVar1);
    local_50 = 0;
    local_48 = (undefined1  [16])0x0;
    local_78[0] = (Variant *)local_68;
    (**(code **)(*(long *)this + 0xd0))
              (this,&_add_peer(int)::{lambda()#1}::operator()()::sname,local_78,1);
    if (Variant::needs_deinit[(int)local_50] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_68[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneMultiplayer::complete_auth(int) */

undefined4 __thiscall SceneMultiplayer::complete_auth(SceneMultiplayer *this,int param_1)

{
  HashMap<int,SceneMultiplayer::PendingPeer,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneMultiplayer::PendingPeer>>>
  *this_00;
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  char *pcVar15;
  undefined1 *puVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  uint uVar22;
  long in_FS_OFFSET;
  uint local_8c;
  Array local_88 [8];
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  int local_68 [9];
  undefined2 local_42;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = param_1;
  if (*(long **)(this + 0x180) != (long *)0x0) {
    iVar12 = (**(code **)(**(long **)(this + 0x180) + 0x210))();
    uVar10 = local_8c;
    if (iVar12 == 2) {
      this_00 = (HashMap<int,SceneMultiplayer::PendingPeer,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneMultiplayer::PendingPeer>>>
                 *)(this + 400);
      if ((*(long *)(this + 0x198) != 0) && (*(int *)(this + 0x1bc) != 0)) {
        uVar17 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1b8) * 8);
        uVar13 = (local_8c >> 0x10 ^ local_8c) * -0x7a143595;
        uVar13 = (uVar13 ^ uVar13 >> 0xd) * -0x3d4d51cb;
        uVar22 = uVar13 ^ uVar13 >> 0x10;
        if (uVar13 == uVar13 >> 0x10) {
          uVar22 = 1;
          uVar18 = uVar17;
        }
        else {
          uVar18 = uVar22 * uVar17;
        }
        uVar20 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1b8) * 4));
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar20;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar18;
        lVar19 = SUB168(auVar2 * auVar6,8);
        uVar13 = *(uint *)(*(long *)(this + 0x1a0) + lVar19 * 4);
        iVar12 = SUB164(auVar2 * auVar6,8);
        if (uVar13 != 0) {
          uVar21 = 0;
          do {
            if ((uVar13 == uVar22) &&
               (local_8c == *(uint *)(*(long *)(*(long *)(this + 0x198) + lVar19 * 8) + 0x10))) {
              pcVar15 = (char *)HashMap<int,SceneMultiplayer::PendingPeer,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneMultiplayer::PendingPeer>>>
                                ::operator[](this_00,(int *)&local_8c);
              if (*pcVar15 == '\0') {
                puVar16 = (undefined1 *)
                          HashMap<int,SceneMultiplayer::PendingPeer,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneMultiplayer::PendingPeer>>>
                          ::operator[](this_00,(int *)&local_8c);
                plVar1 = *(long **)(this + 0x180);
                *puVar16 = 1;
                local_42 = 7;
                (**(code **)(*plVar1 + 0x1c8))(plVar1,uVar10);
                (**(code **)(**(long **)(this + 0x180) + 400))(*(long **)(this + 0x180),0);
                (**(code **)(**(long **)(this + 0x180) + 0x1a0))(*(long **)(this + 0x180),2);
                local_78 = &_LC64;
                local_80 = 0;
                local_70 = 3;
                String::parse_latin1((StrRange *)&local_80);
                StringName::StringName((StringName *)&local_78,"multiplayer:bandwidth",false);
                cVar11 = EngineDebugger::is_profiling((StringName *)&local_78);
                if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
                  StringName::unref();
                }
                if (cVar11 != '\0') {
                  Array::Array(local_88);
                  Variant::Variant((Variant *)local_68,(String *)&local_80);
                  Array::push_back((Variant *)local_88);
                  if (Variant::needs_deinit[local_68[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  OS::get_singleton();
                  uVar17 = OS::get_ticks_msec();
                  Variant::Variant((Variant *)local_68,uVar17);
                  Array::push_back((Variant *)local_88);
                  if (Variant::needs_deinit[local_68[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  Variant::Variant((Variant *)local_68,2);
                  Array::push_back((Variant *)local_88);
                  if (Variant::needs_deinit[local_68[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  StringName::StringName((StringName *)&local_78,"multiplayer:bandwidth",false);
                  EngineDebugger::profiler_add_frame_data((StringName *)&local_78,local_88);
                  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
                    StringName::unref();
                  }
                  Array::~Array(local_88);
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
                uVar14 = (**(code **)(**(long **)(this + 0x180) + 0x160))
                                   (*(long **)(this + 0x180),&local_42,2);
                lVar19 = HashMap<int,SceneMultiplayer::PendingPeer,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneMultiplayer::PendingPeer>>>
                         ::operator[](this_00,(int *)&local_8c);
                if (*(char *)(lVar19 + 1) != '\0') {
                  HashMap<int,SceneMultiplayer::PendingPeer,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneMultiplayer::PendingPeer>>>
                  ::erase(this_00,(int *)&local_8c);
                  _admit_peer(this,uVar10);
                }
              }
              else {
                uVar14 = 0xd;
                _err_print_error("complete_auth","modules/multiplayer/scene_multiplayer.cpp",0x1e3,
                                 "Condition \"pending_peers[p_peer].local\" is true. Returning: ERR_FILE_CANT_WRITE"
                                 ,"The authentication session was already marked as completed.",0);
              }
              goto LAB_001023d4;
            }
            uVar21 = uVar21 + 1;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = (iVar12 + 1) * uVar17;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar20;
            lVar19 = SUB168(auVar3 * auVar7,8);
            uVar13 = *(uint *)(*(long *)(this + 0x1a0) + lVar19 * 4);
            iVar12 = SUB164(auVar3 * auVar7,8);
          } while ((uVar13 != 0) &&
                  (auVar4._8_8_ = 0, auVar4._0_8_ = uVar13 * uVar17, auVar8._8_8_ = 0,
                  auVar8._0_8_ = uVar20, auVar5._8_8_ = 0,
                  auVar5._0_8_ = ((*(uint *)(hash_table_size_primes +
                                            (ulong)*(uint *)(this + 0x1b8) * 4) + iVar12) -
                                 SUB164(auVar4 * auVar8,8)) * uVar17, auVar9._8_8_ = 0,
                  auVar9._0_8_ = uVar20, uVar21 <= SUB164(auVar5 * auVar9,8)));
        }
      }
      uVar14 = 0x1f;
      _err_print_error("complete_auth","modules/multiplayer/scene_multiplayer.cpp",0x1e2,
                       "Condition \"!pending_peers.has(p_peer)\" is true. Returning: ERR_INVALID_PARAMETER"
                       ,0,0);
      goto LAB_001023d4;
    }
  }
  uVar14 = 3;
  _err_print_error("complete_auth","modules/multiplayer/scene_multiplayer.cpp",0x1e1,
                   "Condition \"multiplayer_peer.is_null() || multiplayer_peer->get_connection_status() != MultiplayerPeer::CONNECTION_CONNECTED\" is true. Returning: ERR_UNCONFIGURED"
                   ,0,0);
LAB_001023d4:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneMultiplayer::_bind_methods() */

void SceneMultiplayer::_bind_methods(void)

{
  long *plVar1;
  Variant *pVVar2;
  long lVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined *puVar7;
  int *piVar8;
  MethodBind *pMVar9;
  uint uVar10;
  long lVar11;
  Variant *pVVar12;
  int *piVar13;
  long in_FS_OFFSET;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  long local_260;
  undefined8 local_258;
  undefined8 local_250;
  long local_248;
  long local_240;
  long local_238 [6];
  char *local_208;
  undefined8 local_200;
  StringName local_1f8 [8];
  undefined4 local_1f0;
  CowData local_1e8 [8];
  undefined4 local_1e0;
  char *local_1d8;
  undefined8 local_1d0;
  StringName local_1c8 [8];
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  char *local_1a8;
  undefined8 local_1a0;
  undefined1 local_198 [16];
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168 [2];
  int *local_158;
  undefined8 local_150;
  long local_140;
  undefined *local_138;
  undefined8 local_130;
  char *local_128;
  undefined *puStack_120;
  undefined8 local_118;
  char *local_108;
  undefined *puStack_100;
  undefined *local_f8;
  char *pcStack_f0;
  undefined8 local_e8;
  Variant *local_d8;
  undefined1 auStack_d0 [16];
  char **ppcStack_c0;
  Variant **local_a8;
  undefined1 local_a0 [16];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  puVar7 = PTR__LC85_0011f450;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_130 = 0;
  local_138 = &_LC90;
  uVar10 = (uint)&local_d8;
  local_d8 = (Variant *)&local_138;
  D_METHODP((char *)&local_1a8,(char ***)"set_root_path",uVar10);
  auStack_d0 = (undefined1  [16])0x0;
  local_d8 = (Variant *)0x0;
  pMVar9 = create_method_bind<SceneMultiplayer,NodePath_const&>(set_root_path);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_1a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_d8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1a8);
  D_METHODP((char *)&local_1a8,(char ***)"get_root_path",0);
  auStack_d0 = (undefined1  [16])0x0;
  local_d8 = (Variant *)0x0;
  pMVar9 = create_method_bind<SceneMultiplayer,NodePath>(get_root_path);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_1a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_d8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1a8);
  D_METHODP((char *)&local_1a8,(char ***)"clear",0);
  auStack_d0 = (undefined1  [16])0x0;
  local_d8 = (Variant *)0x0;
  pMVar9 = create_method_bind<SceneMultiplayer>(clear);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_1a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_d8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1a8);
  local_130 = 0;
  local_138 = &_LC85;
  local_d8 = (Variant *)&local_138;
  D_METHODP((char *)&local_1a8,(char ***)"disconnect_peer",uVar10);
  auStack_d0 = (undefined1  [16])0x0;
  local_d8 = (Variant *)0x0;
  pMVar9 = create_method_bind<SceneMultiplayer,int>(disconnect_peer);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_1a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_d8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1a8);
  D_METHODP((char *)&local_1a8,(char ***)"get_authenticating_peers",0);
  auStack_d0 = (undefined1  [16])0x0;
  local_d8 = (Variant *)0x0;
  pMVar9 = create_method_bind<SceneMultiplayer,Vector<int>>(get_authenticating_peer_ids);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_1a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_d8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1a8);
  local_118 = 0;
  local_128 = puVar7;
  puStack_120 = &_LC89;
  auStack_d0._0_8_ = &puStack_120;
  local_d8 = (Variant *)&local_128;
  D_METHODP((char *)&local_1a8,(char ***)"send_auth",uVar10);
  auStack_d0 = (undefined1  [16])0x0;
  local_d8 = (Variant *)0x0;
  pMVar9 = create_method_bind<SceneMultiplayer,Error,int,Vector<unsigned_char>>(send_auth);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_1a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_d8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1a8);
  puStack_120 = (undefined *)0x0;
  local_128 = "id";
  local_d8 = (Variant *)&local_128;
  D_METHODP((char *)&local_1a8,(char ***)"complete_auth",uVar10);
  auStack_d0 = (undefined1  [16])0x0;
  local_d8 = (Variant *)0x0;
  pMVar9 = create_method_bind<SceneMultiplayer,Error,int>(complete_auth);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_1a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_d8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1a8);
  puStack_120 = (undefined *)0x0;
  local_128 = "callback";
  local_d8 = (Variant *)&local_128;
  D_METHODP((char *)&local_1a8,(char ***)"set_auth_callback",uVar10);
  auStack_d0 = (undefined1  [16])0x0;
  local_d8 = (Variant *)0x0;
  pMVar9 = create_method_bind<SceneMultiplayer,Callable>(set_auth_callback);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_1a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_d8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1a8);
  D_METHODP((char *)&local_1a8,(char ***)"get_auth_callback",0);
  auStack_d0 = (undefined1  [16])0x0;
  local_d8 = (Variant *)0x0;
  pMVar9 = create_method_bind<SceneMultiplayer,Callable>(get_auth_callback);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_1a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_d8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1a8);
  puStack_120 = (undefined *)0x0;
  local_128 = "timeout";
  local_d8 = (Variant *)&local_128;
  D_METHODP((char *)&local_1a8,(char ***)"set_auth_timeout",uVar10);
  auStack_d0 = (undefined1  [16])0x0;
  local_d8 = (Variant *)0x0;
  pMVar9 = create_method_bind<SceneMultiplayer,double>(set_auth_timeout);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_1a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_d8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1a8);
  D_METHODP((char *)&local_1a8,(char ***)"get_auth_timeout",0);
  auStack_d0 = (undefined1  [16])0x0;
  local_d8 = (Variant *)0x0;
  pMVar9 = create_method_bind<SceneMultiplayer,double>(get_auth_timeout);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_1a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_d8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1a8);
  puStack_120 = (undefined *)0x0;
  local_128 = "refuse";
  local_d8 = (Variant *)&local_128;
  D_METHODP((char *)&local_1a8,(char ***)"set_refuse_new_connections",uVar10);
  auStack_d0 = (undefined1  [16])0x0;
  local_d8 = (Variant *)0x0;
  pMVar9 = create_method_bind<SceneMultiplayer,bool>(set_refuse_new_connections);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_1a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_d8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1a8);
  D_METHODP((char *)&local_1a8,(char ***)"is_refusing_new_connections",0);
  auStack_d0 = (undefined1  [16])0x0;
  local_d8 = (Variant *)0x0;
  pMVar9 = create_method_bind<SceneMultiplayer,bool>(is_refusing_new_connections);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_1a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_d8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1a8);
  puStack_120 = (undefined *)0x0;
  local_128 = "enable";
  local_d8 = (Variant *)&local_128;
  D_METHODP((char *)&local_1a8,(char ***)"set_allow_object_decoding",uVar10);
  auStack_d0 = (undefined1  [16])0x0;
  local_d8 = (Variant *)0x0;
  pMVar9 = create_method_bind<SceneMultiplayer,bool>(set_allow_object_decoding);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_1a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_d8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1a8);
  D_METHODP((char *)&local_1a8,(char ***)"is_object_decoding_allowed",0);
  auStack_d0 = (undefined1  [16])0x0;
  local_d8 = (Variant *)0x0;
  pMVar9 = create_method_bind<SceneMultiplayer,bool>(is_object_decoding_allowed);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_1a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_d8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1a8);
  puStack_120 = (undefined *)0x0;
  local_128 = "enabled";
  local_d8 = (Variant *)&local_128;
  D_METHODP((char *)&local_1a8,(char ***)"set_server_relay_enabled",uVar10);
  auStack_d0 = (undefined1  [16])0x0;
  local_d8 = (Variant *)0x0;
  pMVar9 = create_method_bind<SceneMultiplayer,bool>(set_server_relay_enabled);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_1a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_d8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1a8);
  D_METHODP((char *)&local_1a8,(char ***)"is_server_relay_enabled",0);
  auStack_d0 = (undefined1  [16])0x0;
  local_d8 = (Variant *)0x0;
  pMVar9 = create_method_bind<SceneMultiplayer,bool>(is_server_relay_enabled);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_1a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_d8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1a8);
  local_108 = "bytes";
  puStack_100 = puVar7;
  auStack_d0._8_8_ = &local_f8;
  auStack_d0._0_8_ = &puStack_100;
  local_f8 = &_LC87;
  pcStack_f0 = "channel";
  local_e8 = 0;
  local_d8 = (Variant *)&local_108;
  ppcStack_c0 = &pcStack_f0;
  D_METHODP((char *)&local_1a8,(char ***)"send_bytes",uVar10);
  Variant::Variant((Variant *)&local_a8,0);
  Variant::Variant(local_90,2);
  Variant::Variant(local_78,0);
  pVVar12 = local_48;
  local_58 = (undefined1  [16])0x0;
  auStack_d0._8_8_ = local_78;
  auStack_d0._0_8_ = local_90;
  local_60 = 0;
  local_d8 = (Variant *)&local_a8;
  pMVar9 = create_method_bind<SceneMultiplayer,Error,Vector<unsigned_char>,int,MultiplayerPeer::TransferMode,int>
                     (send_bytes);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_1a8,&local_d8,3);
  do {
    pVVar2 = pVVar12 + -0x18;
    pVVar12 = pVVar12 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar12 != (Variant *)&local_a8);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1a8);
  D_METHODP((char *)&local_1a8,(char ***)"get_max_sync_packet_size",0);
  local_a0 = (undefined1  [16])0x0;
  local_a8 = (Variant **)0x0;
  pMVar9 = create_method_bind<SceneMultiplayer,int>(get_max_sync_packet_size);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_1a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1a8);
  local_d8 = (Variant *)&_LC109;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = auStack_d0._8_8_;
  auStack_d0 = auVar5 << 0x40;
  uVar10 = (uint)(Variant *)&local_a8;
  local_a8 = &local_d8;
  D_METHODP((char *)&local_1a8,(char ***)"set_max_sync_packet_size",uVar10);
  local_a0 = (undefined1  [16])0x0;
  local_a8 = (Variant **)0x0;
  pMVar9 = create_method_bind<SceneMultiplayer,int>(set_max_sync_packet_size);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_1a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1a8);
  D_METHODP((char *)&local_1a8,(char ***)"get_max_delta_packet_size",0);
  local_a0 = (undefined1  [16])0x0;
  local_a8 = (Variant **)0x0;
  pMVar9 = create_method_bind<SceneMultiplayer,int>(get_max_delta_packet_size);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_1a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1a8);
  local_d8 = (Variant *)&_LC109;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = auStack_d0._8_8_;
  auStack_d0 = auVar6 << 0x40;
  local_a8 = &local_d8;
  D_METHODP((char *)&local_1a8,(char ***)"set_max_delta_packet_size",uVar10);
  local_a0 = (undefined1  [16])0x0;
  local_a8 = (Variant **)0x0;
  pMVar9 = create_method_bind<SceneMultiplayer,int>(set_max_delta_packet_size);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_1a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_1a8);
  _scs_create((char *)&local_208,true);
  _scs_create((char *)local_238,true);
  local_240 = 0;
  local_1a8 = "";
  local_248 = 0;
  local_1a0 = 0;
  String::parse_latin1((StrRange *)&local_248);
  local_250 = 0;
  local_1a8 = "root_path";
  local_1a0 = 9;
  String::parse_latin1((StrRange *)&local_250);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_1a8,0x16,(StrRange *)&local_250,0,(StrRange *)&local_248,6,
             (StrRange *)&local_240);
  local_1d8 = "SceneMultiplayer";
  local_258 = 0;
  local_1d0 = 0x10;
  String::parse_latin1((StrRange *)&local_258);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_258,false);
  ClassDB::add_property
            ((StringName *)&local_1d8,(PropertyInfo *)&local_1a8,(StringName *)local_238,
             (StringName *)&local_208,-1);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_258);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_250);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_248);
  if ((((StringName::configured != '\0') &&
       ((local_240 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_238[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_208,true);
  _scs_create((char *)local_238,true);
  local_1a8 = "";
  local_240 = 0;
  local_248 = 0;
  local_1a0 = 0;
  String::parse_latin1((StrRange *)&local_248);
  local_1a8 = "auth_callback";
  local_250 = 0;
  local_1a0 = 0xd;
  String::parse_latin1((StrRange *)&local_250);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_1a8,0x19,(StrRange *)&local_250,0,(StrRange *)&local_248,6,
             (StrRange *)&local_240);
  local_1d8 = "SceneMultiplayer";
  local_258 = 0;
  local_1d0 = 0x10;
  String::parse_latin1((StrRange *)&local_258);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_258,false);
  ClassDB::add_property
            ((StringName *)&local_1d8,(PropertyInfo *)&local_1a8,(StringName *)local_238,
             (StringName *)&local_208,-1);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_258);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_250);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_248);
  if (((StringName::configured != '\0') &&
      ((local_240 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_238[0] == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_208 != (char *)0x0)))) {
    StringName::unref();
  }
  _scs_create((char *)&local_208,true);
  _scs_create((char *)local_238,true);
  local_1a8 = "0,30,0.1,or_greater,suffix:s";
  local_240 = 0;
  local_248 = 0;
  local_1a0 = 0x1c;
  String::parse_latin1((StrRange *)&local_248);
  local_1a8 = "auth_timeout";
  local_250 = 0;
  local_1a0 = 0xc;
  String::parse_latin1((StrRange *)&local_250);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_1a8,3,(StrRange *)&local_250,1,(StrRange *)&local_248,6,
             (StrRange *)&local_240);
  local_1d8 = "SceneMultiplayer";
  local_258 = 0;
  local_1d0 = 0x10;
  String::parse_latin1((StrRange *)&local_258);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_258,false);
  ClassDB::add_property
            ((StringName *)&local_1d8,(PropertyInfo *)&local_1a8,(StringName *)local_238,
             (StringName *)&local_208,-1);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_258);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_250);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_248);
  if ((((StringName::configured != '\0') &&
       ((local_240 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_238[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_208,true);
  _scs_create((char *)local_238,true);
  local_1a8 = "";
  local_240 = 0;
  local_248 = 0;
  local_1a0 = 0;
  String::parse_latin1((StrRange *)&local_248);
  local_1a8 = "allow_object_decoding";
  local_250 = 0;
  local_1a0 = 0x15;
  String::parse_latin1((StrRange *)&local_250);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_1a8,1,(StrRange *)&local_250,0,(StrRange *)&local_248,6,
             (StrRange *)&local_240);
  local_1d8 = "SceneMultiplayer";
  local_258 = 0;
  local_1d0 = 0x10;
  String::parse_latin1((StrRange *)&local_258);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_258,false);
  ClassDB::add_property
            ((StringName *)&local_1d8,(PropertyInfo *)&local_1a8,(StringName *)local_238,
             (StringName *)&local_208,-1);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_258);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_250);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_248);
  if (((StringName::configured != '\0') &&
      ((local_240 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_238[0] == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_208 != (char *)0x0)))) {
    StringName::unref();
  }
  _scs_create((char *)&local_208,true);
  _scs_create((char *)local_238,true);
  local_1a8 = "";
  local_240 = 0;
  local_248 = 0;
  local_1a0 = 0;
  String::parse_latin1((StrRange *)&local_248);
  local_1a8 = "refuse_new_connections";
  local_250 = 0;
  local_1a0 = 0x16;
  String::parse_latin1((StrRange *)&local_250);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_1a8,1,(StrRange *)&local_250,0,(StrRange *)&local_248,6,
             (StrRange *)&local_240);
  local_1d8 = "SceneMultiplayer";
  local_258 = 0;
  local_1d0 = 0x10;
  String::parse_latin1((StrRange *)&local_258);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_258,false);
  ClassDB::add_property
            ((StringName *)&local_1d8,(PropertyInfo *)&local_1a8,(StringName *)local_238,
             (StringName *)&local_208,-1);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_258);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_250);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_248);
  if ((((StringName::configured != '\0') &&
       ((local_240 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_238[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_208,true);
  _scs_create((char *)local_238,true);
  local_1a8 = "";
  local_240 = 0;
  local_248 = 0;
  local_1a0 = 0;
  String::parse_latin1((StrRange *)&local_248);
  local_1a8 = "server_relay";
  local_250 = 0;
  local_1a0 = 0xc;
  String::parse_latin1((StrRange *)&local_250);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_1a8,1,(StrRange *)&local_250,0,(StrRange *)&local_248,6,
             (StrRange *)&local_240);
  local_1d8 = "SceneMultiplayer";
  local_258 = 0;
  local_1d0 = 0x10;
  String::parse_latin1((StrRange *)&local_258);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_258,false);
  ClassDB::add_property
            ((StringName *)&local_1d8,(PropertyInfo *)&local_1a8,(StringName *)local_238,
             (StringName *)&local_208,-1);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_258);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_250);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_248);
  if ((((StringName::configured != '\0') &&
       ((local_240 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_238[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_208,true);
  _scs_create((char *)local_238,true);
  local_1a8 = "";
  local_240 = 0;
  local_248 = 0;
  local_1a0 = 0;
  String::parse_latin1((StrRange *)&local_248);
  local_1a8 = "max_sync_packet_size";
  local_250 = 0;
  local_1a0 = 0x14;
  String::parse_latin1((StrRange *)&local_250);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_1a8,2,(StrRange *)&local_250,0,(StrRange *)&local_248,6,
             (StrRange *)&local_240);
  local_1d8 = "SceneMultiplayer";
  local_258 = 0;
  local_1d0 = 0x10;
  String::parse_latin1((StrRange *)&local_258);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_258,false);
  ClassDB::add_property
            ((StringName *)&local_1d8,(PropertyInfo *)&local_1a8,(StringName *)local_238,
             (StringName *)&local_208,-1);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_258);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_250);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_248);
  if ((((StringName::configured != '\0') &&
       ((local_240 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_238[0] == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_208,true);
  _scs_create((char *)local_238,true);
  local_1a8 = "";
  local_240 = 0;
  local_248 = 0;
  local_1a0 = 0;
  String::parse_latin1((StrRange *)&local_248);
  local_1a8 = "max_delta_packet_size";
  local_250 = 0;
  local_1a0 = 0x15;
  String::parse_latin1((StrRange *)&local_250);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_1a8,2,(StrRange *)&local_250,0,(StrRange *)&local_248,6,
             (StrRange *)&local_240);
  local_1d8 = "SceneMultiplayer";
  local_258 = 0;
  local_1d0 = 0x10;
  String::parse_latin1((StrRange *)&local_258);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_258,false);
  ClassDB::add_property
            ((StringName *)&local_1d8,(PropertyInfo *)&local_1a8,(StringName *)local_238,
             (StringName *)&local_208,-1);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_258);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_250);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_248);
  if (((StringName::configured != '\0') &&
      ((local_240 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_238[0] == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_208 != (char *)0x0)))) {
    StringName::unref();
  }
  Variant::Variant((Variant *)&local_a8,false);
  StringName::StringName((StringName *)&local_1d8,"refuse_new_connections",false);
  local_1a8 = "SceneMultiplayer";
  local_208 = (char *)0x0;
  local_1a0 = 0x10;
  String::parse_latin1((StrRange *)&local_208);
  StringName::StringName((StringName *)&local_1a8,(String *)&local_208,false);
  ClassDB::set_property_default_value
            ((StringName *)&local_1a8,(StringName *)&local_1d8,(Variant *)&local_a8);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_208);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  local_240 = 0;
  local_1a8 = "";
  local_248 = 0;
  local_1a0 = 0;
  String::parse_latin1((StrRange *)&local_248);
  local_1a8 = "id";
  local_250 = 0;
  local_1a0 = 2;
  String::parse_latin1((StrRange *)&local_250);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_1d8,2,(StrRange *)&local_250,0,(StrRange *)&local_248,6,
             (StrRange *)&local_240);
  local_1a8 = "peer_authenticating";
  local_238[0] = 0;
  local_1a0 = 0x13;
  String::parse_latin1((StrRange *)local_238);
  local_198 = (undefined1  [16])0x0;
  local_1a8 = (char *)0x0;
  local_1a0 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 6;
  local_170 = 1;
  local_168[0] = 0;
  local_158 = (int *)0x0;
  local_150 = 0;
  local_140 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_1a8,(CowData *)local_238);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_168,(PropertyInfo *)&local_1d8);
  local_208 = "SceneMultiplayer";
  local_258 = 0;
  local_200 = 0x10;
  String::parse_latin1((StrRange *)&local_258);
  StringName::StringName((StringName *)&local_208,(String *)&local_258,false);
  ClassDB::add_signal((StringName *)&local_208,(MethodInfo *)&local_1a8);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_258);
  lVar3 = local_140;
  if (local_140 != 0) {
    LOCK();
    plVar1 = (long *)(local_140 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_140 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  piVar8 = local_158;
  if (local_158 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_158 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_158 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = *(long *)(local_158 + -2);
      lVar11 = 0;
      local_158 = (int *)0x0;
      piVar13 = piVar8;
      if (lVar3 != 0) {
        do {
          if (Variant::needs_deinit[*piVar13] != '\0') {
            Variant::_clear_internal();
          }
          lVar11 = lVar11 + 1;
          piVar13 = piVar13 + 6;
        } while (lVar3 != lVar11);
      }
      Memory::free_static(piVar8 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_168);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_238);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_250);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_248);
  if ((StringName::configured != '\0') && (local_240 != 0)) {
    StringName::unref();
  }
  local_240 = 0;
  local_1a8 = "";
  local_248 = 0;
  local_1a0 = 0;
  String::parse_latin1((StrRange *)&local_248);
  local_1a8 = "id";
  local_250 = 0;
  local_1a0 = 2;
  String::parse_latin1((StrRange *)&local_250);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_1d8,2,(StrRange *)&local_250,0,(StrRange *)&local_248,6,
             (StrRange *)&local_240);
  local_1a8 = "peer_authentication_failed";
  local_238[0] = 0;
  local_1a0 = 0x1a;
  String::parse_latin1((StrRange *)local_238);
  local_198 = (undefined1  [16])0x0;
  local_1a8 = (char *)0x0;
  local_1a0 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 6;
  local_170 = 1;
  local_168[0] = 0;
  local_158 = (int *)0x0;
  local_150 = 0;
  local_140 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_1a8,(CowData *)local_238);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_168,(PropertyInfo *)&local_1d8);
  local_208 = "SceneMultiplayer";
  local_258 = 0;
  local_200 = 0x10;
  String::parse_latin1((StrRange *)&local_258);
  StringName::StringName((StringName *)&local_208,(String *)&local_258,false);
  ClassDB::add_signal((StringName *)&local_208,(MethodInfo *)&local_1a8);
  if ((StringName::configured != '\0') && (local_208 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_258);
  lVar3 = local_140;
  if (local_140 != 0) {
    LOCK();
    plVar1 = (long *)(local_140 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_140 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  piVar8 = local_158;
  if (local_158 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_158 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_158 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = *(long *)(local_158 + -2);
      lVar11 = 0;
      local_158 = (int *)0x0;
      piVar13 = piVar8;
      if (lVar3 != 0) {
        do {
          if (Variant::needs_deinit[*piVar13] != '\0') {
            Variant::_clear_internal();
          }
          lVar11 = lVar11 + 1;
          piVar13 = piVar13 + 6;
        } while (lVar3 != lVar11);
      }
      Memory::free_static(piVar8 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_168);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_238);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_250);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_248);
  if ((StringName::configured != '\0') && (local_240 != 0)) {
    StringName::unref();
  }
  local_248 = 0;
  local_250 = 0;
  local_1a8 = "";
  local_1a0 = 0;
  String::parse_latin1((StrRange *)&local_250);
  local_258 = 0;
  local_1a8 = "packet";
  local_1a0 = 6;
  String::parse_latin1((StrRange *)&local_258);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_208,0x1d,(StrRange *)&local_258,0,(StrRange *)&local_250,6,
             (StrRange *)&local_248);
  local_1a8 = "";
  local_260 = 0;
  local_268 = 0;
  local_1a0 = 0;
  String::parse_latin1((StrRange *)&local_268);
  local_270 = 0;
  local_1a8 = "id";
  local_1a0 = 2;
  String::parse_latin1((StrRange *)&local_270);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_238,2,(StrRange *)&local_270,0,(StrRange *)&local_268,6,
             &local_260);
  local_1a8 = "peer_packet";
  local_240 = 0;
  local_1a0 = 0xb;
  String::parse_latin1((StrRange *)&local_240);
  local_198 = (undefined1  [16])0x0;
  local_1a8 = (char *)0x0;
  local_1a0 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 6;
  local_170 = 1;
  local_168[0] = 0;
  local_158 = (int *)0x0;
  local_150 = 0;
  local_140 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_1a8,(CowData *)&local_240);
  local_1d0 = 0;
  local_1d8 = (char *)CONCAT44(local_1d8._4_4_,local_208._0_4_);
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_1d0,(CowData *)&local_200);
  StringName::StringName(local_1c8,local_1f8);
  local_1b8 = 0;
  local_1c0 = local_1f0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_1b8,local_1e8);
  local_1b0 = local_1e0;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_168,(PropertyInfo *)local_238);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_168,(PropertyInfo *)&local_1d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1d8);
  local_278 = 0;
  local_1d8 = "SceneMultiplayer";
  local_1d0 = 0x10;
  String::parse_latin1((StrRange *)&local_278);
  StringName::StringName((StringName *)&local_1d8,(String *)&local_278,false);
  ClassDB::add_signal((StringName *)&local_1d8,(MethodInfo *)&local_1a8);
  if ((StringName::configured != '\0') && (local_1d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_278);
  lVar3 = local_140;
  if (local_140 != 0) {
    LOCK();
    plVar1 = (long *)(local_140 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_140 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  piVar8 = local_158;
  if (local_158 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_158 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_158 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = *(long *)(local_158 + -2);
      lVar11 = 0;
      local_158 = (int *)0x0;
      piVar13 = piVar8;
      if (lVar3 != 0) {
        do {
          if (Variant::needs_deinit[*piVar13] != '\0') {
            Variant::_clear_internal();
          }
          lVar11 = lVar11 + 1;
          piVar13 = piVar13 + 6;
        } while (lVar3 != lVar11);
      }
      Memory::free_static(piVar8 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_168);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_240);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_270);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_268);
  if ((StringName::configured != '\0') && (local_260 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_208);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_258);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_250);
  if ((StringName::configured != '\0') && (local_248 != 0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* SceneMultiplayer::send_command(int, unsigned char const*, int) */

ulong __thiscall
SceneMultiplayer::send_command(SceneMultiplayer *this,int param_1,uchar *param_2,int param_3)

{
  long *plVar1;
  int iVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  long lVar12;
  char cVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  long in_FS_OFFSET;
  Array local_88 [8];
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((this[0x221] == (SceneMultiplayer)0x0) ||
     (iVar14 = (**(code **)(*(long *)this + 0x168))(), iVar14 == 1)) {
LAB_00104eb0:
    if (param_1 < 1) {
      iVar14 = *(int *)(this + 0x1fc);
      if (iVar14 != 0) {
        piVar3 = *(int **)(this + 0x1d8);
        lVar18 = 0;
        iVar2 = *piVar3;
        while( true ) {
          if ((param_1 == 0) || (param_1 + iVar2 != 0)) {
            (**(code **)(**(long **)(this + 0x180) + 0x1c8))();
            local_68 = &_LC64;
            local_78 = 0;
            local_60 = 3;
            String::parse_latin1((StrRange *)&local_78);
            StringName::StringName((StringName *)&local_68,"multiplayer:bandwidth",false);
            cVar13 = EngineDebugger::is_profiling((StringName *)&local_68);
            if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
              StringName::unref();
            }
            if (cVar13 != '\0') {
              Array::Array((Array *)&local_80);
              Variant::Variant((Variant *)local_58,(String *)&local_78);
              Array::push_back((Variant *)&local_80);
              if (Variant::needs_deinit[local_58[0]] != '\0') {
                Variant::_clear_internal();
              }
              OS::get_singleton();
              uVar16 = OS::get_ticks_msec();
              Variant::Variant((Variant *)local_58,uVar16);
              Array::push_back((Variant *)&local_80);
              if (Variant::needs_deinit[local_58[0]] != '\0') {
                Variant::_clear_internal();
              }
              Variant::Variant((Variant *)local_58,param_3);
              Array::push_back((Variant *)&local_80);
              if (Variant::needs_deinit[local_58[0]] != '\0') {
                Variant::_clear_internal();
              }
              StringName::StringName((StringName *)&local_68,"multiplayer:bandwidth",false);
              EngineDebugger::profiler_add_frame_data((StringName *)&local_68,(Array *)&local_80);
              if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
                StringName::unref();
              }
              Array::~Array((Array *)&local_80);
            }
            lVar12 = local_78;
            if (local_78 != 0) {
              LOCK();
              plVar1 = (long *)(local_78 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_78 = 0;
                Memory::free_static((void *)(lVar12 + -0x10),false);
              }
            }
            (**(code **)(**(long **)(this + 0x180) + 0x160))
                      (*(long **)(this + 0x180),param_2,param_3);
          }
          if (iVar14 <= (int)lVar18 + 1) break;
          lVar18 = lVar18 + 1;
          iVar2 = piVar3[lVar18];
        }
      }
      uVar16 = 0;
      goto LAB_001051d2;
    }
  }
  else if (param_1 != 1) {
    cVar13 = (**(code **)(**(long **)(this + 0x180) + 0x1c0))();
    if (cVar13 != '\0') {
      StreamPeerBuffer::seek((int)*(undefined8 *)(this + 0x228));
      StreamPeer::put_u8((uchar)*(undefined8 *)(this + 0x228));
      StreamPeer::put_u8((uchar)*(undefined8 *)(this + 0x228));
      StreamPeer::put_32((int)*(undefined8 *)(this + 0x228));
      (**(code **)(**(long **)(this + 0x228) + 0x150))(*(long **)(this + 0x228),param_2,param_3);
      (**(code **)(**(long **)(this + 0x180) + 0x1c8))(*(long **)(this + 0x180),1);
      StreamPeerBuffer::get_data_array();
      iVar14 = StreamPeerBuffer::get_position();
      local_80 = 0;
      local_60 = 3;
      local_68 = &_LC64;
      String::parse_latin1((StrRange *)&local_80);
      StringName::StringName((StringName *)&local_68,"multiplayer:bandwidth",false);
      cVar13 = EngineDebugger::is_profiling((StringName *)&local_68);
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
      if (cVar13 != '\0') {
        Array::Array(local_88);
        Variant::Variant((Variant *)local_58,(String *)&local_80);
        Array::push_back((Variant *)local_88);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        OS::get_singleton();
        uVar16 = OS::get_ticks_msec();
        Variant::Variant((Variant *)local_58,uVar16);
        Array::push_back((Variant *)local_88);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)local_58,iVar14);
        Array::push_back((Variant *)local_88);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        StringName::StringName((StringName *)&local_68,"multiplayer:bandwidth",false);
        EngineDebugger::profiler_add_frame_data((StringName *)&local_68,local_88);
        if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
          StringName::unref();
        }
        Array::~Array(local_88);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      uVar15 = (**(code **)(**(long **)(this + 0x180) + 0x160))
                         (*(long **)(this + 0x180),local_70,iVar14);
      CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_70);
      uVar16 = (ulong)uVar15;
      goto LAB_001051d2;
    }
    goto LAB_00104eb0;
  }
  if ((*(long *)(this + 0x1d8) != 0) && (*(int *)(this + 0x1fc) != 0)) {
    uVar16 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1f8) * 8);
    uVar15 = ((uint)param_1 >> 0x10 ^ param_1) * -0x7a143595;
    uVar15 = (uVar15 ^ uVar15 >> 0xd) * -0x3d4d51cb;
    uVar21 = uVar15 ^ uVar15 >> 0x10;
    if (uVar15 == uVar15 >> 0x10) {
      uVar21 = 1;
      uVar17 = uVar16;
    }
    else {
      uVar17 = uVar21 * uVar16;
    }
    uVar20 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1f8) * 4));
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar20;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar17;
    lVar18 = SUB168(auVar4 * auVar8,8);
    uVar15 = *(uint *)(*(long *)(this + 0x1f0) + lVar18 * 4);
    iVar14 = SUB164(auVar4 * auVar8,8);
    if (uVar15 != 0) {
      uVar19 = 0;
      do {
        if ((uVar15 == uVar21) &&
           (*(int *)(*(long *)(this + 0x1d8) +
                    (ulong)*(uint *)(*(long *)(this + 0x1e0) + lVar18 * 4) * 4) == param_1)) {
          (**(code **)(**(long **)(this + 0x180) + 0x1c8))(*(long **)(this + 0x180),param_1);
          local_68 = &_LC64;
          local_78 = 0;
          local_60 = 3;
          String::parse_latin1((StrRange *)&local_78);
          StringName::StringName((StringName *)&local_68,"multiplayer:bandwidth",false);
          cVar13 = EngineDebugger::is_profiling((StringName *)&local_68);
          if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
            StringName::unref();
          }
          if (cVar13 != '\0') {
            Array::Array((Array *)&local_80);
            Variant::Variant((Variant *)local_58,(String *)&local_78);
            Array::push_back((Variant *)&local_80);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            OS::get_singleton();
            uVar16 = OS::get_ticks_msec();
            Variant::Variant((Variant *)local_58,uVar16);
            Array::push_back((Variant *)&local_80);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            Variant::Variant((Variant *)local_58,param_3);
            Array::push_back((Variant *)&local_80);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            StringName::StringName((StringName *)&local_68,"multiplayer:bandwidth",false);
            EngineDebugger::profiler_add_frame_data((StringName *)&local_68,(Array *)&local_80);
            if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
              StringName::unref();
            }
            Array::~Array((Array *)&local_80);
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00105090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar16 = (**(code **)(**(long **)(this + 0x180) + 0x160))
                               (*(long **)(this + 0x180),param_2,param_3);
            return uVar16;
          }
          goto LAB_001056cc;
        }
        uVar19 = uVar19 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (iVar14 + 1) * uVar16;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar20;
        lVar18 = SUB168(auVar5 * auVar9,8);
        uVar15 = *(uint *)(*(long *)(this + 0x1f0) + lVar18 * 4);
        iVar14 = SUB164(auVar5 * auVar9,8);
      } while ((uVar15 != 0) &&
              (auVar6._8_8_ = 0, auVar6._0_8_ = uVar15 * uVar16, auVar10._8_8_ = 0,
              auVar10._0_8_ = uVar20, auVar7._8_8_ = 0,
              auVar7._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1f8) * 4
                                        ) + iVar14) - SUB164(auVar6 * auVar10,8)) * uVar16,
              auVar11._8_8_ = 0, auVar11._0_8_ = uVar20, uVar19 <= SUB164(auVar7 * auVar11,8)));
    }
  }
  _err_print_error("send_command","modules/multiplayer/scene_multiplayer.cpp",0x113,
                   "Condition \"!connected_peers.has(p_to)\" is true. Returning: ERR_BUG",0,0);
  uVar16 = 0x2f;
LAB_001051d2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar16;
  }
LAB_001056cc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<unsigned_char>::_copy_on_write(CowData<unsigned_char> *this)

{
  size_t __n;
  code *pcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  __n = *(size_t *)(*(long *)this + -8);
  uVar3 = 0x10;
  if (__n != 0) {
    uVar3 = __n - 1 | __n - 1 >> 1;
    uVar3 = uVar3 | uVar3 >> 2;
    uVar3 = uVar3 | uVar3 >> 4;
    uVar3 = uVar3 | uVar3 >> 8;
    uVar3 = uVar3 | uVar3 >> 0x10;
    uVar3 = (uVar3 | uVar3 >> 0x20) + 0x11;
  }
  puVar2 = (undefined8 *)Memory::alloc_static(uVar3,false);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 1;
    puVar2[1] = __n;
    memcpy(puVar2 + 2,*(void **)this,__n);
    _unref(this);
    *(undefined8 **)this = puVar2 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* SceneMultiplayer::clear() */

void __thiscall SceneMultiplayer::clear(SceneMultiplayer *this)

{
  uint uVar1;
  long lVar2;
  
  *(undefined4 *)(this + 0x188) = 0;
  if ((*(long *)(this + 0x198) != 0) && (*(int *)(this + 0x1bc) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1b8) * 4);
    if (uVar1 != 0) {
      lVar2 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x1a0) + lVar2) != 0) {
          *(int *)(*(long *)(this + 0x1a0) + lVar2) = 0;
          Memory::free_static(*(void **)(*(long *)(this + 0x198) + lVar2 * 2),false);
          *(undefined8 *)(*(long *)(this + 0x198) + lVar2 * 2) = 0;
        }
        lVar2 = lVar2 + 4;
      } while (lVar2 != (ulong)uVar1 << 2);
    }
    *(undefined4 *)(this + 0x1bc) = 0;
    *(undefined1 (*) [16])(this + 0x1a8) = (undefined1  [16])0x0;
  }
  if ((*(long *)(this + 0x1d8) != 0) && (*(int *)(this + 0x1fc) != 0)) {
    if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1f8) * 4) != 0) {
      memset(*(void **)(this + 0x1f0),0,
             (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1f8) * 4) << 2);
    }
    *(undefined4 *)(this + 0x1fc) = 0;
  }
  if ((*(long *)(this + 0x210) != 0) && (*(long *)(*(long *)(this + 0x210) + -8) != 0)) {
    CowData<unsigned_char>::_unref((CowData<unsigned_char> *)(this + 0x210));
  }
  SceneReplicationInterface::on_reset();
  SceneCacheInterface::clear();
  StreamPeerBuffer::clear();
  return;
}



/* SceneMultiplayer::_update_status() */

void __thiscall SceneMultiplayer::_update_status(SceneMultiplayer *this)

{
  long lVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long **)(this + 0x180) == (long *)0x0) {
    iVar3 = *(int *)(this + 0x188);
    if (iVar3 == 0) goto LAB_00105938;
LAB_00105962:
    if (iVar3 == 1) {
      pcVar4 = (char *)&_update_status()::{lambda()#1}::operator()()::sname;
      if (_update_status()::{lambda()#1}::operator()()::sname == '\0') {
        puVar6 = &_update_status()::{lambda()#1}::operator()()::sname;
        pcVar4 = (char *)&_update_status()::{lambda()#1}::operator()()::sname;
        iVar3 = __cxa_guard_acquire(&_update_status()::{lambda()#1}::operator()()::sname);
        uVar5 = 0xfd;
        if (iVar3 != 0) goto LAB_00105a30;
      }
    }
    else {
      pcVar4 = (char *)&_update_status()::{lambda()#2}::operator()()::sname;
      if (_update_status()::{lambda()#2}::operator()()::sname == '\0') {
        puVar6 = &_update_status()::{lambda()#2}::operator()()::sname;
        pcVar4 = (char *)&_update_status()::{lambda()#2}::operator()()::sname;
        iVar3 = __cxa_guard_acquire(&_update_status()::{lambda()#2}::operator()()::sname);
        if (iVar3 != 0) {
          uVar5 = 0xf;
LAB_00105a30:
          _scs_create(pcVar4,(bool)uVar5);
          __cxa_atexit(StringName::~StringName,pcVar4,&__dso_handle);
          __cxa_guard_release(puVar6);
        }
      }
    }
    (**(code **)(*(long *)this + 0xd0))(this,pcVar4,0,0);
    if (Variant::needs_deinit[0] != '\0') {
      Variant::_clear_internal();
    }
    clear(this);
    iVar2 = 0;
  }
  else {
    iVar2 = (**(code **)(**(long **)(this + 0x180) + 0x210))();
    iVar3 = *(int *)(this + 0x188);
    if (iVar3 == iVar2) goto LAB_00105938;
    if (iVar2 == 0) goto LAB_00105962;
  }
  *(int *)(this + 0x188) = iVar2;
LAB_00105938:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneMultiplayer::set_multiplayer_peer(Ref<MultiplayerPeer> const&) */

void __thiscall SceneMultiplayer::set_multiplayer_peer(SceneMultiplayer *this,Ref *param_1)

{
  long *plVar1;
  code *pcVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  Object *pOVar7;
  long in_FS_OFFSET;
  long local_60;
  SceneMultiplayer local_58 [24];
  long local_40;
  
  plVar1 = *(long **)param_1;
  plVar6 = *(long **)(this + 0x180);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar6 == plVar1) {
LAB_00105d90:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    goto LAB_00105ddc;
  }
  if (plVar1 == (long *)0x0) {
    if (plVar6 != (long *)0x0) {
LAB_00105acd:
      pcVar2 = *(code **)(*plVar6 + 0x110);
      create_custom_callable_function_pointer<SceneMultiplayer,int>
                (local_58,(char *)this,(_func_void_int *)"&SceneMultiplayer::_add_peer");
      StringName::StringName((StringName *)&local_60,"peer_connected",false);
      (*pcVar2)(plVar6,(StringName *)&local_60,local_58);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      Callable::~Callable((Callable *)local_58);
      plVar1 = *(long **)(this + 0x180);
      pcVar2 = *(code **)(*plVar1 + 0x110);
      create_custom_callable_function_pointer<SceneMultiplayer,int>
                (local_58,(char *)this,(_func_void_int *)"&SceneMultiplayer::_del_peer");
      StringName::StringName((StringName *)&local_60,"peer_disconnected",false);
      (*pcVar2)(plVar1,(StringName *)&local_60,local_58);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      Callable::~Callable((Callable *)local_58);
      clear(this);
      pOVar3 = *(Object **)param_1;
      pOVar7 = *(Object **)(this + 0x180);
      if (pOVar3 != pOVar7) {
        *(Object **)(this + 0x180) = pOVar3;
        if (pOVar3 == (Object *)0x0) {
LAB_00105c28:
          if (pOVar7 == (Object *)0x0) goto LAB_00105d30;
        }
        else {
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
LAB_00105c1d:
            *(undefined8 *)(this + 0x180) = 0;
            goto LAB_00105c28;
          }
          if (pOVar7 == (Object *)0x0) goto LAB_00105c41;
        }
        cVar4 = RefCounted::unreference();
        if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar7), cVar4 != '\0')) {
          (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
          Memory::free_static(pOVar7,false);
        }
        goto LAB_00105c41;
      }
      goto LAB_00105c48;
    }
  }
  else {
    iVar5 = (**(code **)(*plVar1 + 0x210))();
    if (iVar5 == 0) {
      _err_print_error("set_multiplayer_peer","modules/multiplayer/scene_multiplayer.cpp",0xc3,
                       "Condition \"p_peer.is_valid() && p_peer->get_connection_status() == MultiplayerPeer::CONNECTION_DISCONNECTED\" is true."
                       ,"Supplied MultiplayerPeer must be connecting or connected.",0,0);
      goto LAB_00105d90;
    }
    plVar6 = *(long **)(this + 0x180);
    if (plVar6 != (long *)0x0) goto LAB_00105acd;
    if (*(long *)param_1 == 0) goto LAB_00105d30;
    *(long *)(this + 0x180) = *(long *)param_1;
    cVar4 = RefCounted::reference();
    pOVar7 = (Object *)0x0;
    if (cVar4 == '\0') goto LAB_00105c1d;
LAB_00105c41:
    pOVar7 = *(Object **)(this + 0x180);
LAB_00105c48:
    if (pOVar7 != (Object *)0x0) {
      pcVar2 = *(code **)(*(long *)pOVar7 + 0x108);
      create_custom_callable_function_pointer<SceneMultiplayer,int>
                (local_58,(char *)this,(_func_void_int *)"&SceneMultiplayer::_add_peer");
      StringName::StringName((StringName *)&local_60,"peer_connected",false);
      (*pcVar2)(pOVar7,(StringName *)&local_60,local_58,0);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      Callable::~Callable((Callable *)local_58);
      plVar1 = *(long **)(this + 0x180);
      pcVar2 = *(code **)(*plVar1 + 0x108);
      create_custom_callable_function_pointer<SceneMultiplayer,int>
                (local_58,(char *)this,(_func_void_int *)"&SceneMultiplayer::_del_peer");
      StringName::StringName((StringName *)&local_60,"peer_disconnected",false);
      (*pcVar2)(plVar1,(StringName *)&local_60,local_58,0);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      Callable::~Callable((Callable *)local_58);
    }
  }
LAB_00105d30:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _update_status(this);
    return;
  }
LAB_00105ddc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SceneMultiplayer::SceneMultiplayer() */

void __thiscall SceneMultiplayer::SceneMultiplayer(SceneMultiplayer *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  RefCounted *pRVar5;
  Object *pOVar6;
  Object *pOVar7;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  RefCounted::RefCounted((RefCounted *)this);
  uVar3 = _UNK_0011f468;
  uVar1 = __LC137;
  uVar2 = _LC136;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0011e9a8;
  *(undefined4 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x1b8) = uVar2;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined8 *)(this + 0x1f8) = uVar2;
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined2 *)(this + 0x220) = 0x100;
  *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1a8) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x1c8) = uVar1;
  *(undefined8 *)(this + 0x1d0) = uVar3;
  *(undefined1 (*) [16])(this + 0x1d8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1e8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x210) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x228) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x238) = (undefined1  [16])0x0;
  pRVar5 = (RefCounted *)operator_new(0x198,"");
  RefCounted::RefCounted(pRVar5);
  pRVar5[0x17c] = (RefCounted)0x0;
  *(code **)pRVar5 = RefCounted::init_ref;
  *(undefined8 *)(pRVar5 + 0x188) = 0;
  *(undefined4 *)(pRVar5 + 400) = 0;
  postinitialize_handler((Object *)pRVar5);
  cVar4 = RefCounted::init_ref();
  pOVar6 = *(Object **)(this + 0x228);
  if (cVar4 == '\0') {
    if (pOVar6 != (Object *)0x0) {
      *(undefined8 *)(this + 0x228) = 0;
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        pRVar5 = (RefCounted *)0x0;
        cVar4 = predelete_handler(pOVar6);
        if (cVar4 != '\0') {
LAB_001065b2:
          (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
          Memory::free_static(pOVar6,false);
          if (pRVar5 != (RefCounted *)0x0) goto LAB_00106540;
        }
      }
    }
  }
  else {
    if (pOVar6 != (Object *)pRVar5) {
      *(RefCounted **)(this + 0x228) = pRVar5;
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        *(undefined8 *)(this + 0x228) = 0;
        if (pOVar6 != (Object *)0x0) {
          cVar4 = RefCounted::unreference();
joined_r0x0010658f:
          if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar6), cVar4 != '\0'))
          goto LAB_001065b2;
        }
      }
      else if (pOVar6 != (Object *)0x0) {
        cVar4 = RefCounted::unreference();
        goto joined_r0x0010658f;
      }
    }
LAB_00106540:
    cVar4 = RefCounted::unreference();
    if ((cVar4 != '\0') && (cVar4 = predelete_handler((Object *)pRVar5), cVar4 != '\0')) {
      (**(code **)(*(long *)pRVar5 + 0x140))(pRVar5);
      Memory::free_static(pRVar5,false);
    }
  }
  pRVar5 = (RefCounted *)operator_new(0x220,"");
  RefCounted::RefCounted(pRVar5);
  *(undefined8 *)(pRVar5 + 0x1b0) = uVar2;
  *(undefined ***)pRVar5 = &PTR__initialize_classv_0011e360;
  *(undefined8 *)(pRVar5 + 0x1e0) = uVar2;
  *(undefined8 *)(pRVar5 + 0x210) = uVar2;
  *(undefined4 *)(pRVar5 + 0x218) = 1;
  *(SceneMultiplayer **)(pRVar5 + 0x180) = this;
  *(undefined1 (*) [16])(pRVar5 + 400) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pRVar5 + 0x1a0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pRVar5 + 0x1c0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pRVar5 + 0x1d0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pRVar5 + 0x1f0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pRVar5 + 0x200) = (undefined1  [16])0x0;
  postinitialize_handler((Object *)pRVar5);
  cVar4 = RefCounted::init_ref();
  pOVar6 = *(Object **)(this + 0x230);
  if (cVar4 == '\0') {
    if (pOVar6 != (Object *)0x0) {
      *(undefined8 *)(this + 0x230) = 0;
      cVar4 = RefCounted::unreference();
      goto joined_r0x001064c5;
    }
  }
  else {
    pOVar7 = pOVar6;
    if (pRVar5 != (RefCounted *)pOVar6) {
      *(RefCounted **)(this + 0x230) = pRVar5;
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        *(undefined8 *)(this + 0x230) = 0;
      }
      pOVar7 = (Object *)pRVar5;
      if (((pOVar6 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
         (cVar4 = predelete_handler(pOVar6), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
        Memory::free_static(pOVar6,false);
      }
    }
    cVar4 = RefCounted::unreference();
    pOVar6 = pOVar7;
joined_r0x001064c5:
    if ((cVar4 == '\0') || (cVar4 = predelete_handler(pOVar6), cVar4 == '\0')) {
      pOVar6 = *(Object **)(this + 0x230);
    }
    else {
      (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
      Memory::free_static(pOVar6,false);
      pOVar6 = *(Object **)(this + 0x230);
    }
  }
  pRVar5 = (RefCounted *)operator_new(0x2b0,"");
  RefCounted::RefCounted(pRVar5);
  *(Object **)(pRVar5 + 0x290) = pOVar6;
  *(undefined ***)pRVar5 = &PTR__initialize_classv_0011e4c0;
  uVar1 = _LC139;
  *(undefined8 *)(pRVar5 + 0x1a8) = uVar2;
  *(undefined8 *)(pRVar5 + 0x2a8) = uVar1;
  *(undefined4 *)(pRVar5 + 0x1b0) = 0;
  *(undefined8 *)(pRVar5 + 0x1e0) = uVar2;
  *(undefined8 *)(pRVar5 + 0x208) = uVar2;
  *(undefined8 *)(pRVar5 + 0x230) = uVar2;
  *(undefined8 *)(pRVar5 + 600) = uVar2;
  *(undefined8 *)(pRVar5 + 0x260) = 0;
  *(undefined4 *)(pRVar5 + 0x268) = 0;
  *(undefined8 *)(pRVar5 + 0x270) = 0;
  *(undefined4 *)(pRVar5 + 0x278) = 0;
  *(undefined8 *)(pRVar5 + 0x280) = 0;
  *(undefined8 *)(pRVar5 + 0x2a0) = 0;
  *(SceneMultiplayer **)(pRVar5 + 0x288) = this;
  *(undefined1 (*) [16])(pRVar5 + 0x188) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pRVar5 + 0x198) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pRVar5 + 0x1c0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pRVar5 + 0x1d0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pRVar5 + 0x1e8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pRVar5 + 0x1f8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pRVar5 + 0x210) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pRVar5 + 0x220) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pRVar5 + 0x238) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pRVar5 + 0x248) = (undefined1  [16])0x0;
  postinitialize_handler((Object *)pRVar5);
  cVar4 = RefCounted::init_ref();
  pOVar6 = *(Object **)(this + 0x238);
  if (cVar4 == '\0') {
    if (pOVar6 != (Object *)0x0) {
      *(undefined8 *)(this + 0x238) = 0;
      cVar4 = RefCounted::unreference();
      goto joined_r0x00106445;
    }
  }
  else {
    pOVar7 = pOVar6;
    if (pRVar5 != (RefCounted *)pOVar6) {
      *(RefCounted **)(this + 0x238) = pRVar5;
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        *(undefined8 *)(this + 0x238) = 0;
      }
      pOVar7 = (Object *)pRVar5;
      if (((pOVar6 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
         (cVar4 = predelete_handler(pOVar6), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
        Memory::free_static(pOVar6,false);
      }
    }
    cVar4 = RefCounted::unreference();
    pOVar6 = pOVar7;
joined_r0x00106445:
    if ((cVar4 == '\0') || (cVar4 = predelete_handler(pOVar6), cVar4 == '\0')) {
      pOVar6 = *(Object **)(this + 0x238);
    }
    else {
      (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
      Memory::free_static(pOVar6,false);
      pOVar6 = *(Object **)(this + 0x238);
    }
  }
  uVar1 = *(undefined8 *)(this + 0x230);
  pRVar5 = (RefCounted *)operator_new(0x1d8,"");
  RefCounted::RefCounted(pRVar5);
  *(undefined ***)pRVar5 = &PTR__initialize_classv_0011e620;
  *(undefined8 *)(pRVar5 + 0x1a0) = 0;
  *(undefined8 *)(pRVar5 + 0x1d0) = uVar2;
  *(Object **)(pRVar5 + 400) = pOVar6;
  *(undefined1 (*) [16])(pRVar5 + 0x1b0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pRVar5 + 0x1c0) = (undefined1  [16])0x0;
  *(SceneMultiplayer **)(pRVar5 + 0x180) = this;
  *(undefined8 *)(pRVar5 + 0x188) = uVar1;
  postinitialize_handler((Object *)pRVar5);
  cVar4 = RefCounted::init_ref();
  if (cVar4 == '\0') {
    pOVar6 = *(Object **)(this + 0x240);
    if (pOVar6 != (Object *)0x0) {
      *(undefined8 *)(this + 0x240) = 0;
      cVar4 = RefCounted::unreference();
      if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar6), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
        Memory::free_static(pOVar6,false);
      }
    }
  }
  else {
    pOVar6 = *(Object **)(this + 0x240);
    pOVar7 = pOVar6;
    if (pRVar5 != (RefCounted *)pOVar6) {
      *(RefCounted **)(this + 0x240) = pRVar5;
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        *(undefined8 *)(this + 0x240) = 0;
      }
      pOVar7 = (Object *)pRVar5;
      if (((pOVar6 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
         (cVar4 = predelete_handler(pOVar6), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
        Memory::free_static(pOVar6,false);
      }
    }
    cVar4 = RefCounted::unreference();
    if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar7), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
      Memory::free_static(pOVar7,false);
    }
  }
  pRVar5 = (RefCounted *)operator_new(0x1a8,"");
  RefCounted::RefCounted(pRVar5);
  pRVar5[0x1a0] = (RefCounted)0x0;
  *(undefined8 *)(pRVar5 + 0x17c) = 0x80000000000000;
  *(undefined8 *)(pRVar5 + 0x198) = 0x200000000;
  *(undefined ***)pRVar5 = &PTR__initialize_classv_0011e780;
  *(undefined8 *)(pRVar5 + 400) = 0;
  postinitialize_handler((Object *)pRVar5);
  cVar4 = RefCounted::init_ref();
  local_38 = (Object *)0x0;
  if (cVar4 == '\0') {
    set_multiplayer_peer(this,(Ref *)&local_38);
  }
  else {
    pOVar6 = (Object *)__dynamic_cast(pRVar5,&Object::typeinfo,&MultiplayerPeer::typeinfo,0);
    if (pOVar6 == (Object *)0x0) {
LAB_001062ba:
      set_multiplayer_peer(this,(Ref *)&local_38);
LAB_001062c7:
      cVar4 = RefCounted::unreference();
    }
    else {
      local_38 = pOVar6;
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        local_38 = (Object *)0x0;
        goto LAB_001062ba;
      }
      set_multiplayer_peer(this,(Ref *)&local_38);
      cVar4 = RefCounted::unreference();
      if ((cVar4 == '\0') || (cVar4 = predelete_handler(pOVar6), cVar4 == '\0')) goto LAB_001062c7;
      (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
      Memory::free_static(pOVar6,false);
      cVar4 = RefCounted::unreference();
    }
    if ((cVar4 != '\0') && (cVar4 = predelete_handler((Object *)pRVar5), cVar4 != '\0')) {
      (**(code **)(*(long *)pRVar5 + 0x140))(pRVar5);
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pRVar5,false);
        return;
      }
      goto LAB_001066b5;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001066b5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneMultiplayer::~SceneMultiplayer() */

void __thiscall SceneMultiplayer::~SceneMultiplayer(SceneMultiplayer *this)

{
  long *plVar1;
  uint uVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  void *pvVar6;
  
  *(undefined ***)this = &PTR__initialize_classv_0011e9a8;
  clear(this);
  if (*(long *)(this + 0x240) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x240);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  *(undefined8 *)(this + 0x240) = 0;
  if (*(long *)(this + 0x238) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x238);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  *(undefined8 *)(this + 0x238) = 0;
  if (*(long *)(this + 0x230) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x230);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  *(undefined8 *)(this + 0x230) = 0;
  if (*(long *)(this + 0x240) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x240);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0x238) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x238);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0x230) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x230);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0x228) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x228);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  NodePath::~NodePath((NodePath *)(this + 0x218));
  if (*(long *)(this + 0x210) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x210) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar5 = *(long *)(this + 0x210);
      *(undefined8 *)(this + 0x210) = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  pvVar6 = *(void **)(this + 0x1d8);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0x1fc) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1f8) * 4) != 0) {
        memset(*(void **)(this + 0x1f0),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1f8) * 4) << 2);
      }
      *(undefined4 *)(this + 0x1fc) = 0;
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0x1e8),false);
    Memory::free_static(*(void **)(this + 0x1e0),false);
    Memory::free_static(*(void **)(this + 0x1f0),false);
  }
  Callable::~Callable((Callable *)(this + 0x1c0));
  pvVar6 = *(void **)(this + 0x198);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0x1bc) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1b8) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x1bc) = 0;
        *(undefined1 (*) [16])(this + 0x1a8) = (undefined1  [16])0x0;
      }
      else {
        lVar5 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x1a0) + lVar5) != 0) {
            *(int *)(*(long *)(this + 0x1a0) + lVar5) = 0;
            Memory::free_static(*(void **)((long)pvVar6 + lVar5 * 2),false);
            pvVar6 = *(void **)(this + 0x198);
            *(undefined8 *)((long)pvVar6 + lVar5 * 2) = 0;
          }
          lVar5 = lVar5 + 4;
        } while (lVar5 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x1bc) = 0;
        *(undefined1 (*) [16])(this + 0x1a8) = (undefined1  [16])0x0;
        if (pvVar6 == (void *)0x0) goto LAB_001068eb;
      }
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0x1a0),false);
  }
LAB_001068eb:
  if (*(long *)(this + 0x180) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x180);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_0011e200;
  Object::~Object((Object *)this);
  return;
}



/* SceneMultiplayer::~SceneMultiplayer() */

void __thiscall SceneMultiplayer::~SceneMultiplayer(SceneMultiplayer *this)

{
  ~SceneMultiplayer(this);
  operator_delete(this,0x248);
  return;
}



/* SceneMultiplayer::get_authenticating_peer_ids() */

void SceneMultiplayer::get_authenticating_peer_ids(void)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long in_RSI;
  long in_RDI;
  
  uVar1 = *(uint *)(in_RSI + 0x1bc);
  *(undefined8 *)(in_RDI + 8) = 0;
  CowData<int>::resize<false>((CowData<int> *)(in_RDI + 8),(ulong)uVar1);
  plVar5 = *(long **)(in_RSI + 0x1a8);
  if (plVar5 != (long *)0x0) {
    lVar4 = *(long *)(in_RDI + 8);
    lVar6 = 0;
    do {
      lVar3 = plVar5[2];
      if (lVar4 == 0) {
        lVar4 = 0;
LAB_00106bda:
        _err_print_index_error
                  ("operator[]","./core/templates/vector.h",0x38,lVar6,lVar4,"p_index",
                   "((Vector<T> *)(this))->_cowdata.size()","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar4 = *(long *)(lVar4 + -8);
      if (lVar4 <= lVar6) goto LAB_00106bda;
      CowData<int>::_copy_on_write((CowData<int> *)(in_RDI + 8));
      lVar4 = *(long *)(in_RDI + 8);
      plVar5 = (long *)*plVar5;
      *(int *)(lVar4 + lVar6 * 4) = (int)lVar3;
      lVar6 = lVar6 + 1;
    } while (plVar5 != (long *)0x0);
  }
  return;
}



/* SceneMultiplayer::get_peer_ids() */

long SceneMultiplayer::get_peer_ids(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long in_RSI;
  long in_RDI;
  long lVar6;
  undefined4 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  long local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 0x180) == 0) {
    _err_print_error("get_peer_ids","modules/multiplayer/scene_multiplayer.cpp",0x224,
                     "Condition \"multiplayer_peer.is_null()\" is true. Returning: Vector<int>()",
                     "No multiplayer peer is assigned. Assume no peers are connected.",0,0);
    *(undefined8 *)(in_RDI + 8) = 0;
  }
  else {
    iVar1 = *(int *)(in_RSI + 0x1fc);
    lVar4 = 0;
    local_50[0] = 0;
    if (iVar1 != 0) {
      puVar2 = *(undefined4 **)(in_RSI + 0x1d8);
      lVar5 = 0;
      uVar7 = *puVar2;
LAB_00106d39:
      iVar3 = CowData<int>::resize<false>((CowData<int> *)local_50,1);
      if (iVar3 == 0) goto LAB_00106cb8;
      do {
        _err_print_error("push_back","./core/templates/vector.h",0x142,
                         "Condition \"err\" is true. Returning: true",0,0);
        lVar4 = local_50[0];
        while( true ) {
          if (iVar1 <= (int)lVar5 + 1) goto LAB_00106cf7;
          lVar5 = lVar5 + 1;
          uVar7 = puVar2[lVar5];
          if (lVar4 == 0) goto LAB_00106d39;
          iVar3 = CowData<int>::resize<false>((CowData<int> *)local_50,*(long *)(lVar4 + -8) + 1);
          if (iVar3 != 0) break;
LAB_00106cb8:
          lVar4 = local_50[0];
          if (local_50[0] == 0) {
            lVar8 = -1;
            lVar6 = 0;
LAB_00106d8a:
            _err_print_index_error
                      ("set","./core/templates/cowdata.h",0xcf,lVar8,lVar6,"p_index","size()","",
                       false,false);
          }
          else {
            lVar6 = *(long *)(local_50[0] + -8);
            lVar8 = lVar6 + -1;
            if (lVar8 < 0) goto LAB_00106d8a;
            CowData<int>::_copy_on_write((CowData<int> *)local_50);
            *(undefined4 *)(local_50[0] + lVar8 * 4) = uVar7;
            lVar4 = local_50[0];
          }
        }
      } while( true );
    }
LAB_00106cf7:
    *(long *)(in_RDI + 8) = lVar4;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return in_RDI;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this,long param_1)

{
  CowData<unsigned_char> *pCVar1;
  int iVar2;
  ulong uVar3;
  CowData<unsigned_char> *pCVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  CowData<unsigned_char> *pCVar7;
  long lVar8;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
LAB_00106fd6:
    lVar8 = 0;
    pCVar4 = (CowData<unsigned_char> *)0x0;
  }
  else {
    lVar8 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar8) {
      return;
    }
    if (param_1 == 0) {
      _unref(this);
      return;
    }
    _copy_on_write(this);
    if (lVar8 == 0) goto LAB_00106fd6;
    uVar3 = lVar8 - 1U | lVar8 - 1U >> 1;
    uVar3 = uVar3 | uVar3 >> 2;
    uVar3 = uVar3 | uVar3 >> 4;
    uVar3 = uVar3 | uVar3 >> 8;
    uVar3 = uVar3 | uVar3 >> 0x10;
    pCVar4 = (CowData<unsigned_char> *)((uVar3 | uVar3 >> 0x20) + 1);
  }
  uVar3 = param_1 - 1U | param_1 - 1U >> 1;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 | uVar3 >> 0x10;
  pCVar7 = (CowData<unsigned_char> *)(uVar3 | uVar3 >> 0x20);
  pCVar1 = pCVar7 + 1;
  if (param_1 <= lVar8) {
    if ((pCVar1 != pCVar4) && (iVar2 = _realloc(this,(long)pCVar1), iVar2 != 0)) {
      return;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return;
    }
    FUN_0010ce50();
    return;
  }
  if (pCVar1 != pCVar4) {
    if (lVar8 == 0) {
      puVar5 = (undefined8 *)Memory::alloc_static((ulong)(pCVar7 + 0x11),false);
      if (puVar5 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
        return;
      }
      puVar6 = puVar5 + 2;
      *puVar5 = 1;
      puVar5[1] = 0;
      *(undefined8 **)this = puVar6;
      goto LAB_00106f2c;
    }
    pCVar7 = this;
    iVar2 = _realloc(this,(long)pCVar1);
    if (iVar2 != 0) {
      return;
    }
  }
  puVar6 = *(undefined8 **)this;
  if (puVar6 == (undefined8 *)0x0) {
    resize<false>((long)pCVar7);
    return;
  }
LAB_00106f2c:
  puVar6[-1] = param_1;
  return;
}



/* SceneMultiplayer::send_auth(int, Vector<unsigned char>) */

undefined8 __thiscall SceneMultiplayer::send_auth(SceneMultiplayer *this,uint param_1,long param_3)

{
  CowData<unsigned_char> *this_00;
  void *__src;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  code *pcVar9;
  uint uVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  char *pcVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  size_t __n;
  long in_FS_OFFSET;
  uint local_7c;
  Array local_78 [8];
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_7c = param_1;
  if (*(long **)(this + 0x180) != (long *)0x0) {
    iVar12 = (**(code **)(**(long **)(this + 0x180) + 0x210))();
    uVar10 = local_7c;
    if (iVar12 == 2) {
      if ((*(long *)(this + 0x198) != 0) && (*(int *)(this + 0x1bc) != 0)) {
        uVar16 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1b8) * 8);
        uVar13 = (local_7c >> 0x10 ^ local_7c) * -0x7a143595;
        uVar13 = (uVar13 ^ uVar13 >> 0xd) * -0x3d4d51cb;
        uVar23 = uVar13 ^ uVar13 >> 0x10;
        if (uVar13 == uVar13 >> 0x10) {
          uVar23 = 1;
          uVar18 = uVar16;
        }
        else {
          uVar18 = uVar23 * uVar16;
        }
        uVar21 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1b8) * 4));
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar21;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar18;
        lVar19 = SUB168(auVar1 * auVar5,8);
        uVar13 = *(uint *)(*(long *)(this + 0x1a0) + lVar19 * 4);
        iVar12 = SUB164(auVar1 * auVar5,8);
        if (uVar13 != 0) {
          uVar22 = 0;
          do {
            if ((uVar13 == uVar23) &&
               (local_7c == *(uint *)(*(long *)(*(long *)(this + 0x198) + lVar19 * 8) + 0x10))) {
              if (*(long *)(param_3 + 8) == 0) {
                _err_print_error("send_auth","modules/multiplayer/scene_multiplayer.cpp",0x1ce,
                                 "Condition \"p_data.is_empty()\" is true. Returning: ERR_INVALID_PARAMETER"
                                 ,0,0);
                goto LAB_001073bd;
              }
              pcVar14 = (char *)HashMap<int,SceneMultiplayer::PendingPeer,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneMultiplayer::PendingPeer>>>
                                ::operator[]((HashMap<int,SceneMultiplayer::PendingPeer,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneMultiplayer::PendingPeer>>>
                                              *)(this + 400),(int *)&local_7c);
              if (*pcVar14 == '\0') {
                lVar19 = HashMap<int,SceneMultiplayer::PendingPeer,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneMultiplayer::PendingPeer>>>
                         ::operator[]((HashMap<int,SceneMultiplayer::PendingPeer,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneMultiplayer::PendingPeer>>>
                                       *)(this + 400),(int *)&local_7c);
                if (*(char *)(lVar19 + 1) == '\0') {
                  lVar19 = *(long *)(this + 0x210);
                  if (*(long *)(param_3 + 8) == 0) {
                    if (lVar19 != 0) {
                      lVar17 = 0;
                      lVar20 = 1;
                      goto LAB_001071cc;
                    }
                    lVar17 = 2;
LAB_00107404:
                    CowData<unsigned_char>::resize<false>
                              ((CowData<unsigned_char> *)(this + 0x210),lVar17);
                    lVar19 = *(long *)(this + 0x210);
                    if (lVar19 != 0) goto LAB_001071d6;
LAB_00107420:
                    lVar19 = 0;
                  }
                  else {
                    lVar17 = *(long *)(*(long *)(param_3 + 8) + -8);
                    lVar20 = lVar17 + 1;
                    if (lVar19 == 0) {
                      if (-1 < lVar20) goto LAB_00107400;
                      goto LAB_00107420;
                    }
LAB_001071cc:
                    if (*(long *)(lVar19 + -8) <= lVar20) {
LAB_00107400:
                      lVar17 = lVar17 + 2;
                      goto LAB_00107404;
                    }
LAB_001071d6:
                    lVar19 = *(long *)(lVar19 + -8);
                    if (0 < lVar19) {
                      this_00 = (CowData<unsigned_char> *)(this + 0x210);
                      CowData<unsigned_char>::_copy_on_write(this_00);
                      **(undefined1 **)(this + 0x210) = 7;
                      if (*(long *)(this + 0x210) == 0) {
                        lVar19 = 0;
                      }
                      else {
                        lVar19 = *(long *)(*(long *)(this + 0x210) + -8);
                        if (1 < lVar19) {
                          CowData<unsigned_char>::_copy_on_write(this_00);
                          *(undefined1 *)(*(long *)(this + 0x210) + 1) = 0;
                          __src = *(void **)(param_3 + 8);
                          if (__src == (void *)0x0) {
                            __n = 0;
                          }
                          else {
                            __n = *(size_t *)((long)__src + -8);
                          }
                          if (*(long *)(this + 0x210) == 0) {
                            lVar19 = 0;
                          }
                          else {
                            lVar19 = *(long *)(*(long *)(this + 0x210) + -8);
                            if (2 < lVar19) {
                              CowData<unsigned_char>::_copy_on_write(this_00);
                              memcpy((void *)(*(long *)(this + 0x210) + 2),__src,__n);
                              (**(code **)(**(long **)(this + 0x180) + 0x1c8))
                                        (*(long **)(this + 0x180),uVar10);
                              (**(code **)(**(long **)(this + 0x180) + 400))
                                        (*(long **)(this + 0x180),0);
                              (**(code **)(**(long **)(this + 0x180) + 0x1a0))
                                        (*(long **)(this + 0x180),2);
                              if (*(long *)(param_3 + 8) == 0) {
                                iVar12 = 2;
                              }
                              else {
                                iVar12 = (int)*(undefined8 *)(*(long *)(param_3 + 8) + -8) + 2;
                              }
                              uVar15 = *(undefined8 *)(this + 0x210);
                              local_70 = 0;
                              local_60 = 3;
                              local_68 = &_LC64;
                              String::parse_latin1((StrRange *)&local_70);
                              StringName::StringName
                                        ((StringName *)&local_68,"multiplayer:bandwidth",false);
                              cVar11 = EngineDebugger::is_profiling((StringName *)&local_68);
                              if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)
                                 ) {
                                StringName::unref();
                              }
                              if (cVar11 != '\0') {
                                Array::Array(local_78);
                                Variant::Variant((Variant *)local_58,(String *)&local_70);
                                Array::push_back((Variant *)local_78);
                                if (Variant::needs_deinit[local_58[0]] != '\0') {
                                  Variant::_clear_internal();
                                }
                                OS::get_singleton();
                                uVar16 = OS::get_ticks_msec();
                                Variant::Variant((Variant *)local_58,uVar16);
                                Array::push_back((Variant *)local_78);
                                if (Variant::needs_deinit[local_58[0]] != '\0') {
                                  Variant::_clear_internal();
                                }
                                Variant::Variant((Variant *)local_58,iVar12);
                                Array::push_back((Variant *)local_78);
                                if (Variant::needs_deinit[local_58[0]] != '\0') {
                                  Variant::_clear_internal();
                                }
                                StringName::StringName
                                          ((StringName *)&local_68,"multiplayer:bandwidth",false);
                                EngineDebugger::profiler_add_frame_data
                                          ((StringName *)&local_68,local_78);
                                if ((StringName::configured != '\0') &&
                                   (local_68 != (undefined *)0x0)) {
                                  StringName::unref();
                                }
                                Array::~Array(local_78);
                              }
                              CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
                              uVar15 = (**(code **)(**(long **)(this + 0x180) + 0x160))
                                                 (*(long **)(this + 0x180),uVar15,iVar12);
                              goto LAB_00107372;
                            }
                          }
                          lVar17 = 2;
                          goto LAB_00107440;
                        }
                      }
                      lVar17 = 1;
                      goto LAB_00107440;
                    }
                  }
                  lVar17 = 0;
LAB_00107440:
                  _err_print_index_error
                            ("operator[]","./core/templates/vector.h",0x38,lVar17,lVar19,"p_index",
                             "((Vector<T> *)(this))->_cowdata.size()","",false,true);
                  _err_flush_stdout();
                    /* WARNING: Does not return */
                  pcVar9 = (code *)invalidInstructionException();
                  (*pcVar9)();
                }
                _err_print_error("send_auth","modules/multiplayer/scene_multiplayer.cpp",0x1d0,
                                 "Condition \"pending_peers[p_to].remote\" is true. Returning: ERR_FILE_CANT_WRITE"
                                 ,
                                 "The remote peer notified that the authentication session was completed, no more authentication data can be sent."
                                 ,0,0);
              }
              else {
                _err_print_error("send_auth","modules/multiplayer/scene_multiplayer.cpp",0x1cf,
                                 "Condition \"pending_peers[p_to].local\" is true. Returning: ERR_FILE_CANT_WRITE"
                                 ,
                                 "The authentication session was previously marked as completed, no more authentication data can be sent."
                                 ,0,0);
              }
              uVar15 = 0xd;
              goto LAB_00107372;
            }
            uVar22 = uVar22 + 1;
            auVar2._8_8_ = 0;
            auVar2._0_8_ = (iVar12 + 1) * uVar16;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = uVar21;
            lVar19 = SUB168(auVar2 * auVar6,8);
            uVar13 = *(uint *)(*(long *)(this + 0x1a0) + lVar19 * 4);
            iVar12 = SUB164(auVar2 * auVar6,8);
          } while ((uVar13 != 0) &&
                  (auVar3._8_8_ = 0, auVar3._0_8_ = uVar13 * uVar16, auVar7._8_8_ = 0,
                  auVar7._0_8_ = uVar21, auVar4._8_8_ = 0,
                  auVar4._0_8_ = ((*(uint *)(hash_table_size_primes +
                                            (ulong)*(uint *)(this + 0x1b8) * 4) + iVar12) -
                                 SUB164(auVar3 * auVar7,8)) * uVar16, auVar8._8_8_ = 0,
                  auVar8._0_8_ = uVar21, uVar22 <= SUB164(auVar4 * auVar8,8)));
        }
      }
      _err_print_error("send_auth","modules/multiplayer/scene_multiplayer.cpp",0x1cd,
                       "Condition \"!pending_peers.has(p_to)\" is true. Returning: ERR_INVALID_PARAMETER"
                       ,0,0);
LAB_001073bd:
      uVar15 = 0x1f;
      goto LAB_00107372;
    }
  }
  _err_print_error("send_auth","modules/multiplayer/scene_multiplayer.cpp",0x1cc,
                   "Condition \"multiplayer_peer.is_null() || multiplayer_peer->get_connection_status() != MultiplayerPeer::CONNECTION_CONNECTED\" is true. Returning: ERR_UNCONFIGURED"
                   ,0,0);
  uVar15 = 3;
LAB_00107372:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneMultiplayer::_process_raw(int, unsigned char const*, int) */

void __thiscall
SceneMultiplayer::_process_raw(SceneMultiplayer *this,int param_1,uchar *param_2,int param_3)

{
  long *plVar1;
  Variant *pVVar2;
  long lVar3;
  int iVar4;
  void *pvVar5;
  long lVar6;
  Variant *pVVar7;
  long in_FS_OFFSET;
  bool bVar8;
  void *local_c0;
  Vector local_b8 [8];
  void *local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 < 2) {
    _err_print_error("_process_raw","modules/multiplayer/scene_multiplayer.cpp",0x208,
                     "Condition \"p_packet_len < 2\" is true.",
                     "Invalid packet received. Size too small.",0,0);
  }
  else {
    local_c0 = (void *)0x0;
    CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_c0,(long)(param_3 + -1));
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_c0);
    pvVar5 = memcpy(local_c0,param_2 + 1,(long)(param_3 + -1));
    local_b0 = (void *)0x0;
    plVar1 = (long *)((long)pvVar5 + -0x10);
    do {
      lVar3 = *plVar1;
      if (lVar3 == 0) goto LAB_00107783;
      LOCK();
      lVar6 = *plVar1;
      bVar8 = lVar3 == lVar6;
      if (bVar8) {
        *plVar1 = lVar3 + 1;
        lVar6 = lVar3;
      }
      UNLOCK();
    } while (!bVar8);
    if (lVar6 != -1) {
      local_b0 = local_c0;
    }
LAB_00107783:
    if ((_process_raw(int,unsigned_char_const*,int)::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar4 = __cxa_guard_acquire(&_process_raw(int,unsigned_char_const*,int)::{lambda()#1}::
                                     operator()()::sname), iVar4 != 0)) {
      _scs_create((char *)&_process_raw(int,unsigned_char_const*,int)::{lambda()#1}::operator()()::
                           sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_process_raw(int,unsigned_char_const*,int)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_process_raw(int,unsigned_char_const*,int)::{lambda()#1}::operator()()::
                           sname);
    }
    Variant::Variant(local_88,param_1);
    Variant::Variant(local_70,local_b8);
    local_58 = 0;
    local_50 = (undefined1  [16])0x0;
    pVVar7 = (Variant *)local_40;
    local_a8 = local_88;
    pVStack_a0 = local_70;
    (**(code **)(*(long *)this + 0xd0))
              (this,&_process_raw(int,unsigned_char_const*,int)::{lambda()#1}::operator()()::sname,
               &local_a8,2);
    do {
      pVVar2 = pVVar7 + -0x18;
      pVVar7 = pVVar7 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
        Variant::_clear_internal();
      }
      pvVar5 = local_b0;
    } while (pVVar7 != local_88);
    if (local_b0 != (void *)0x0) {
      LOCK();
      plVar1 = (long *)((long)local_b0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_b0 = (void *)0x0;
        Memory::free_static((void *)((long)pvVar5 + -0x10),false);
      }
    }
    if (local_c0 != (void *)0x0) {
      LOCK();
      plVar1 = (long *)((long)local_c0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static((void *)((long)local_c0 + -0x10),false);
          return;
        }
        goto LAB_0010795e;
      }
    }
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010795e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneMultiplayer::_process_packet(int, unsigned char const*, int) */

void __thiscall
SceneMultiplayer::_process_packet(SceneMultiplayer *this,int param_1,uchar *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  long in_FS_OFFSET;
  CowData<char32_t> local_40 [8];
  CowData<char32_t> local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = NodePath::is_empty();
  if (cVar1 == '\0') {
    if (0 < param_3) {
      iVar2 = (int)param_2;
      switch(*param_2 & 7) {
      case 0:
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          SceneRPCInterface::process_rpc
                    ((int)*(undefined8 *)(this + 0x240),(uchar *)(ulong)(uint)param_1,iVar2);
          return;
        }
        break;
      case 1:
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          SceneCacheInterface::process_simplify_path
                    ((int)*(undefined8 *)(this + 0x230),(uchar *)(ulong)(uint)param_1,iVar2);
          return;
        }
        break;
      case 2:
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          SceneCacheInterface::process_confirm_path
                    ((int)*(undefined8 *)(this + 0x230),(uchar *)(ulong)(uint)param_1,iVar2);
          return;
        }
        break;
      case 3:
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          _process_raw(this,param_1,param_2,param_3);
          return;
        }
        break;
      case 4:
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          SceneReplicationInterface::on_spawn_receive
                    ((int)*(undefined8 *)(this + 0x238),(uchar *)(ulong)(uint)param_1,iVar2);
          return;
        }
        break;
      case 5:
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          SceneReplicationInterface::on_despawn_receive
                    ((int)*(undefined8 *)(this + 0x238),(uchar *)(ulong)(uint)param_1,iVar2);
          return;
        }
        break;
      case 6:
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          SceneReplicationInterface::on_sync_receive
                    ((int)*(undefined8 *)(this + 0x238),(uchar *)(ulong)(uint)param_1,iVar2);
          return;
        }
        break;
      default:
        itos((long)local_40);
        operator+((char *)local_38,(String *)"Invalid network command from ");
        _err_print_error("_process_packet","modules/multiplayer/scene_multiplayer.cpp",0xfa,
                         "Method/function failed.",local_38,0,0);
        CowData<char32_t>::_unref(local_38);
        CowData<char32_t>::_unref(local_40);
        goto LAB_00107bc6;
      }
      goto LAB_00107c56;
    }
    _err_print_error("_process_packet","modules/multiplayer/scene_multiplayer.cpp",0xdb,
                     "Condition \"p_packet_len < 1\" is true.",
                     "Invalid packet received. Size too small.",0,0);
  }
  else {
    _err_print_error("_process_packet","modules/multiplayer/scene_multiplayer.cpp",0xda,
                     "Condition \"root_path.is_empty()\" is true.",
                     "Multiplayer root was not initialized. If you are using custom multiplayer, remember to set the root path via SceneMultiplayer.set_root_path before using it."
                     ,0,0);
  }
LAB_00107bc6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00107c56:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneMultiplayer::_process_sys(int, unsigned char const*, int, MultiplayerPeer::TransferMode,
   int) */

void __thiscall
SceneMultiplayer::_process_sys
          (SceneMultiplayer *this,uint param_1,long param_2,int param_3,undefined4 param_5,
          undefined4 param_6)

{
  byte *pbVar1;
  uint *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  char cVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  char *pcVar19;
  undefined8 uVar20;
  long lVar21;
  uint uVar22;
  uint uVar23;
  long in_FS_OFFSET;
  bool bVar24;
  Array local_88 [8];
  undefined8 local_80 [2];
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 < 6) {
    _err_print_error("_process_sys","modules/multiplayer/scene_multiplayer.cpp",0x123,
                     "Condition \"p_packet_len < SYS_CMD_SIZE\" is true.",
                     "Invalid packet received. Size too small.",0);
    goto LAB_00107e0d;
  }
  cVar12 = *(char *)(param_2 + 1);
  lVar17 = 0;
  uVar23 = 0;
  do {
    pbVar1 = (byte *)(param_2 + 2 + lVar17);
    cVar11 = (char)lVar17;
    lVar17 = lVar17 + 1;
    uVar23 = uVar23 | (uint)*pbVar1 << (cVar11 * '\b' & 0x1fU);
  } while (lVar17 != 4);
  if (cVar12 == '\x02') {
    if ((((this[0x221] == (SceneMultiplayer)0x0) ||
         (cVar12 = (**(code **)(**(long **)(this + 0x180) + 0x1c0))(), cVar12 == '\0')) ||
        (iVar13 = (**(code **)(*(long *)this + 0x168))(this), iVar13 == 1)) || (param_1 != 1)) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar20 = 300;
        pcVar19 = 
        "Condition \"!server_relay || !multiplayer_peer->is_server_relay_supported() || get_unique_id() == 1 || p_from != 1\" is true."
        ;
        goto LAB_00107ee9;
      }
    }
    else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _del_peer(this,uVar23);
      return;
    }
    goto LAB_001086b4;
  }
  if (cVar12 != '\x03') {
    if (cVar12 == '\x01') {
      if (((this[0x221] == (SceneMultiplayer)0x0) ||
          (cVar12 = (**(code **)(**(long **)(this + 0x180) + 0x1c0))(), cVar12 == '\0')) ||
         ((iVar13 = (**(code **)(*(long *)this + 0x168))(this), param_1 != 1 || (iVar13 == 1)))) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar20 = 0x128;
          pcVar19 = 
          "Condition \"!server_relay || !multiplayer_peer->is_server_relay_supported() || get_unique_id() == 1 || p_from != 1\" is true."
          ;
          goto LAB_00107ee9;
        }
      }
      else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        _admit_peer(this,uVar23);
        return;
      }
    }
    else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar20 = 0x162;
      pcVar19 = "Method/function failed.";
      goto LAB_00107ee9;
    }
    goto LAB_001086b4;
  }
  if ((this[0x221] == (SceneMultiplayer)0x0) ||
     (cVar12 = (**(code **)(**(long **)(this + 0x180) + 0x1c0))(), cVar12 == '\0')) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar20 = 0x130;
      pcVar19 = 
      "Condition \"!server_relay || !multiplayer_peer->is_server_relay_supported()\" is true.";
LAB_00107ee9:
      _err_print_error("_process_sys","modules/multiplayer/scene_multiplayer.cpp",uVar20,pcVar19,0,0
                      );
      return;
    }
    goto LAB_001086b4;
  }
  if (param_3 == 6) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar20 = 0x131;
      pcVar19 = "Condition \"p_packet_len < SYS_CMD_SIZE + 1\" is true.";
      goto LAB_00107ee9;
    }
    goto LAB_001086b4;
  }
  iVar13 = (**(code **)(*(long *)this + 0x168))(this);
  if (iVar13 == 1) {
    if ((int)uVar23 < 1) {
LAB_00107fb9:
      StreamPeerBuffer::seek((int)*(undefined8 *)(this + 0x228));
      StreamPeer::put_u8((uchar)*(undefined8 *)(this + 0x228));
      StreamPeer::put_u8((uchar)*(undefined8 *)(this + 0x228));
      StreamPeer::put_32((int)*(undefined8 *)(this + 0x228));
      (**(code **)(**(long **)(this + 0x228) + 0x150))
                (*(long **)(this + 0x228),(uchar *)(param_2 + 6),param_3 + -6);
      StreamPeerBuffer::get_data_array();
      (**(code **)(**(long **)(this + 0x180) + 0x1a0))(*(long **)(this + 0x180),param_5);
      (**(code **)(**(long **)(this + 0x180) + 400))(*(long **)(this + 0x180),param_6);
      if ((int)uVar23 < 1) {
        iVar13 = *(int *)(this + 0x1fc);
        if (iVar13 != 0) {
          puVar2 = *(uint **)(this + 0x1d8);
          lVar17 = 0;
          uVar15 = *puVar2;
          while( true ) {
            if ((uVar15 != param_1) && (uVar15 != -uVar23)) {
              (**(code **)(**(long **)(this + 0x180) + 0x1c8))();
              iVar14 = StreamPeerBuffer::get_position();
              uVar20 = local_70;
              local_80[0] = 0;
              local_60 = 3;
              local_68 = &_LC64;
              String::parse_latin1((StrRange *)local_80);
              StringName::StringName((StringName *)&local_68,"multiplayer:bandwidth",false);
              cVar12 = EngineDebugger::is_profiling((StringName *)&local_68);
              if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
                StringName::unref();
              }
              if (cVar12 != '\0') {
                Array::Array(local_88);
                Variant::Variant((Variant *)local_58,(String *)local_80);
                Array::push_back((Variant *)local_88);
                if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
                }
                OS::get_singleton();
                uVar18 = OS::get_ticks_msec();
                Variant::Variant((Variant *)local_58,uVar18);
                Array::push_back((Variant *)local_88);
                if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
                }
                Variant::Variant((Variant *)local_58,iVar14);
                Array::push_back((Variant *)local_88);
                if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
                }
                StringName::StringName((StringName *)&local_68,"multiplayer:bandwidth",false);
                EngineDebugger::profiler_add_frame_data((StringName *)&local_68,local_88);
                if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
                  StringName::unref();
                }
                Array::~Array(local_88);
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
              (**(code **)(**(long **)(this + 0x180) + 0x160))
                        (*(long **)(this + 0x180),uVar20,iVar14);
            }
            if (iVar13 <= (int)lVar17 + 1) break;
            lVar17 = lVar17 + 1;
            uVar15 = puVar2[lVar17];
          }
        }
        if (uVar23 != 0xffffffff) {
          CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_70);
          goto LAB_00107de6;
        }
        CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_70);
      }
      else {
        (**(code **)(**(long **)(this + 0x180) + 0x1c8))(*(long **)(this + 0x180),uVar23);
        iVar13 = StreamPeerBuffer::get_position();
        local_80[0] = 0;
        local_60 = 3;
        local_68 = &_LC64;
        String::parse_latin1((StrRange *)local_80);
        StringName::StringName((StringName *)&local_68,"multiplayer:bandwidth",false);
        cVar12 = EngineDebugger::is_profiling((StringName *)&local_68);
        if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
          StringName::unref();
        }
        if (cVar12 != '\0') {
          Array::Array(local_88);
          Variant::Variant((Variant *)local_58,(String *)local_80);
          Array::push_back((Variant *)local_88);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          OS::get_singleton();
          uVar18 = OS::get_ticks_msec();
          Variant::Variant((Variant *)local_58,uVar18);
          Array::push_back((Variant *)local_88);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)local_58,iVar13);
          Array::push_back((Variant *)local_88);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          StringName::StringName((StringName *)&local_68,"multiplayer:bandwidth",false);
          EngineDebugger::profiler_add_frame_data((StringName *)&local_68,local_88);
          if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
            StringName::unref();
          }
          Array::~Array(local_88);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
        (**(code **)(**(long **)(this + 0x180) + 0x160))(*(long **)(this + 0x180),local_70,iVar13);
        CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_70);
      }
    }
    else if ((*(long *)(this + 0x1d8) != 0) && (*(int *)(this + 0x1fc) != 0)) {
      uVar18 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1f8) * 4));
      lVar17 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1f8) * 8);
      uVar15 = (uVar23 >> 0x10 ^ uVar23) * -0x7a143595;
      uVar16 = (uVar15 ^ uVar15 >> 0xd) * -0x3d4d51cb;
      uVar15 = 1;
      if (uVar16 != uVar16 >> 0x10) {
        uVar15 = uVar16 ^ uVar16 >> 0x10;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar15 * lVar17;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar18;
      lVar21 = SUB168(auVar3 * auVar7,8);
      uVar16 = *(uint *)(*(long *)(this + 0x1f0) + lVar21 * 4);
      iVar13 = SUB164(auVar3 * auVar7,8);
      if (uVar16 != 0) {
        uVar22 = 0;
        do {
          if ((uVar16 == uVar15) &&
             (uVar23 == *(uint *)(*(long *)(this + 0x1d8) +
                                 (ulong)*(uint *)(*(long *)(this + 0x1e0) + lVar21 * 4) * 4)))
          goto LAB_00107fb9;
          uVar22 = uVar22 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)(iVar13 + 1) * lVar17;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = uVar18;
          lVar21 = SUB168(auVar4 * auVar8,8);
          uVar16 = *(uint *)(*(long *)(this + 0x1f0) + lVar21 * 4);
          iVar13 = SUB164(auVar4 * auVar8,8);
        } while ((uVar16 != 0) &&
                (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar16 * lVar17, auVar9._8_8_ = 0,
                auVar9._0_8_ = uVar18, auVar6._8_8_ = 0,
                auVar6._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                 (ulong)*(uint *)(this + 0x1f8) * 4) + iVar13) -
                                      SUB164(auVar5 * auVar9,8)) * lVar17, auVar10._8_8_ = 0,
                auVar10._0_8_ = uVar18, uVar22 <= SUB164(auVar6 * auVar10,8)));
      }
    }
  }
  else {
    bVar24 = param_1 != 1;
    param_1 = uVar23;
    if (bVar24) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar20 = 0x158;
        pcVar19 = "Condition \"p_from != 1\" is true.";
        goto LAB_00107ee9;
      }
      goto LAB_001086b4;
    }
LAB_00107de6:
    *(uint *)(this + 0x200) = param_1;
    _process_packet(this,param_1,(uchar *)(param_2 + 6),param_3 + -6);
    *(undefined4 *)(this + 0x200) = 0;
  }
LAB_00107e0d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001086b4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneMultiplayer::poll() */

int __thiscall SceneMultiplayer::poll(SceneMultiplayer *this)

{
  byte *__src;
  HashMap<int,SceneMultiplayer::PendingPeer,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneMultiplayer::PendingPeer>>>
  *this_00;
  CowData<unsigned_char> *this_01;
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
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
  char cVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  ulong uVar23;
  char *pcVar24;
  ulong uVar25;
  long lVar26;
  long *plVar27;
  int *piVar28;
  uint uVar29;
  uint uVar30;
  void *pvVar31;
  int iVar32;
  ulong uVar33;
  long in_FS_OFFSET;
  uint local_120;
  int local_11c;
  byte *local_118;
  undefined8 local_110;
  int local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  Variant *local_c8;
  Variant *pVStack_c0;
  int local_b8 [8];
  int local_98 [8];
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _update_status(this);
  if (*(int *)(this + 0x188) != 0) {
    (**(code **)(**(long **)(this + 0x180) + 0x1f8))();
    _update_status(this);
    if (*(int *)(this + 0x188) == 2) {
LAB_00108750:
      iVar19 = (**(code **)(**(long **)(this + 0x180) + 0x150))();
      if (iVar19 == 0) {
        if ((*(int *)(this + 0x1bc) != 0) && (*(long *)(this + 0x1d0) != 0)) {
          local_d8 = 2;
          local_f8 = (undefined1  [16])0x0;
          local_e8 = (undefined1  [16])0x0;
          OS::get_singleton();
          uVar23 = OS::get_ticks_msec();
          plVar27 = *(long **)(this + 0x1a8);
          if (plVar27 != (long *)0x0) {
            do {
              if ((ulong)(*(long *)(this + 0x1d0) + plVar27[4]) <= uVar23) {
                (**(code **)(**(long **)(this + 0x180) + 0x1e8))
                          (*(long **)(this + 0x180),(int)plVar27[2],0);
                HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert(&local_108);
              }
              plVar27 = (long *)*plVar27;
            } while (plVar27 != (long *)0x0);
            iVar19 = local_d8._4_4_;
            if (local_d8._4_4_ == 0) {
              piVar28 = (int *)local_f8._0_8_;
              pvVar31 = (void *)local_e8._8_8_;
              if ((int *)local_f8._0_8_ != (int *)0x0) goto LAB_00109071;
            }
            else {
              iVar32 = 0;
              piVar28 = (int *)local_f8._0_8_;
              while( true ) {
                HashMap<int,SceneMultiplayer::PendingPeer,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneMultiplayer::PendingPeer>>>
                ::erase((HashMap<int,SceneMultiplayer::PendingPeer,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneMultiplayer::PendingPeer>>>
                         *)(this + 400),piVar28);
                iVar1 = *piVar28;
                if ((poll()::{lambda()#1}::operator()()::sname == '\0') &&
                   (iVar22 = __cxa_guard_acquire(&poll()::{lambda()#1}::operator()()::sname),
                   iVar22 != 0)) {
                  _scs_create((char *)&poll()::{lambda()#1}::operator()()::sname,true);
                  __cxa_atexit(StringName::~StringName,&poll()::{lambda()#1}::operator()()::sname,
                               &__dso_handle);
                  __cxa_guard_release(&poll()::{lambda()#1}::operator()()::sname);
                }
                Variant::Variant((Variant *)&local_78,iVar1);
                local_60 = 0;
                local_58 = (undefined1  [16])0x0;
                local_c8 = (Variant *)&local_78;
                (**(code **)(*(long *)this + 0xd0))
                          (this,&poll()::{lambda()#1}::operator()()::sname,&local_c8,1);
                if (Variant::needs_deinit[(int)local_60] != '\0') {
                  Variant::_clear_internal();
                }
                if (Variant::needs_deinit[(int)local_78] != '\0') {
                  Variant::_clear_internal();
                }
                iVar32 = iVar32 + 1;
                if (iVar19 <= iVar32) break;
                piVar28 = piVar28 + 1;
              }
              piVar28 = (int *)local_f8._0_8_;
              if ((int *)local_f8._0_8_ != (int *)0x0) {
                pvVar31 = (void *)local_e8._8_8_;
                if ((local_d8._4_4_ != 0) &&
                   (*(uint *)(hash_table_size_primes + (local_d8 & 0xffffffff) * 4) != 0)) {
                  memset((void *)local_e8._8_8_,0,
                         (ulong)*(uint *)(hash_table_size_primes + (local_d8 & 0xffffffff) * 4) * 4)
                  ;
                }
LAB_00109071:
                Memory::free_static(piVar28,false);
                Memory::free_static((void *)local_e8._0_8_,false);
                Memory::free_static((void *)local_f8._8_8_,false);
                Memory::free_static(pvVar31,false);
              }
            }
          }
        }
        _update_status(this);
        if (*(int *)(this + 0x188) == 2) {
          SceneReplicationInterface::on_network_process();
        }
        goto LAB_001090b8;
      }
      uVar20 = (**(code **)(**(long **)(this + 0x180) + 0x1d0))();
      local_120 = uVar20;
      (**(code **)(**(long **)(this + 0x180) + 0x1e0))();
      (**(code **)(**(long **)(this + 0x180) + 0x1d8))();
      iVar19 = (**(code **)(**(long **)(this + 0x180) + 0x158))
                         (*(long **)(this + 0x180),&local_118,&local_11c);
      iVar32 = local_11c;
      if (iVar19 == 0) goto code_r0x001087cc;
      local_108 = 0;
      uStack_104 = 0;
      local_f8._8_8_ = 0x18;
      local_f8._0_8_ = "Error getting packet! %d";
      String::parse_latin1((StrRange *)&local_108);
      vformat<Error>((CowData<char32_t> *)local_f8,(StrRange *)&local_108,iVar19);
      _err_print_error(&_LC177,"modules/multiplayer/scene_multiplayer.cpp",0x5c,
                       "Condition \"err != OK\" is true. Returning: err",
                       (CowData<char32_t> *)local_f8,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
      goto LAB_00108c10;
    }
  }
LAB_001090b8:
  iVar19 = 0;
LAB_00108c10:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar19;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x001087cc:
  local_110 = 0;
  local_f8._8_8_ = 2;
  local_f8._0_8_ = &_LC178;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)local_f8,"multiplayer:bandwidth",false);
  cVar18 = EngineDebugger::is_profiling((StringName *)local_f8);
  if ((StringName::configured != '\0') && (local_f8._0_8_ != 0)) {
    StringName::unref();
  }
  if (cVar18 != '\0') {
    Array::Array((Array *)&local_108);
    Variant::Variant((Variant *)&local_78,(String *)&local_110);
    Array::push_back((Variant *)&local_108);
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
    OS::get_singleton();
    uVar23 = OS::get_ticks_msec();
    Variant::Variant((Variant *)&local_78,uVar23);
    Array::push_back((Variant *)&local_108);
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)&local_78,iVar32);
    Array::push_back((Variant *)&local_108);
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
    StringName::StringName((StringName *)local_f8,"multiplayer:bandwidth",false);
    EngineDebugger::profiler_add_frame_data((StringName *)local_f8,(Array *)&local_108);
    if ((StringName::configured != '\0') && (local_f8._0_8_ != 0)) {
      StringName::unref();
    }
    Array::~Array((Array *)&local_108);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  if ((*(long *)(this + 0x198) != 0) && (*(int *)(this + 0x1bc) != 0)) {
    uVar23 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1b8) * 8);
    uVar33 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1b8) * 4));
    uVar21 = (uVar20 >> 0x10 ^ uVar20) * -0x7a143595;
    uVar21 = (uVar21 ^ uVar21 >> 0xd) * -0x3d4d51cb;
    uVar30 = uVar21 ^ uVar21 >> 0x10;
    if (uVar21 == uVar21 >> 0x10) {
      uVar30 = 1;
      uVar25 = uVar23;
    }
    else {
      uVar25 = uVar30 * uVar23;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar33;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar25;
    lVar26 = SUB168(auVar2 * auVar10,8);
    uVar21 = *(uint *)(*(long *)(this + 0x1a0) + lVar26 * 4);
    iVar32 = SUB164(auVar2 * auVar10,8);
    if (uVar21 != 0) {
      uVar29 = 0;
      do {
        if ((uVar30 == uVar21) &&
           (uVar20 == *(uint *)(*(long *)(*(long *)(this + 0x198) + lVar26 * 8) + 0x10))) {
          if ((local_11c < 2) || (((~*local_118 & 7) != 0 || (local_118[1] != 0)))) {
            _err_print_error(&_LC177,"modules/multiplayer/scene_multiplayer.cpp",99,
                             "Condition \"len < 2 || (packet[0] & CMD_MASK) != NETWORK_COMMAND_SYS || packet[1] != SYS_COMMAND_AUTH\" is true. Continuing."
                             ,0);
          }
          else {
            this_01 = (CowData<unsigned_char> *)(local_f8 + 8);
            local_f8._8_8_ = 0;
            CowData<unsigned_char>::resize<false>(this_01,(long)(local_11c + -2));
            if ((local_f8._8_8_ == 0) || (*(long *)(local_f8._8_8_ + -8) == 0)) {
              this_00 = (HashMap<int,SceneMultiplayer::PendingPeer,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneMultiplayer::PendingPeer>>>
                         *)(this + 400);
              lVar26 = HashMap<int,SceneMultiplayer::PendingPeer,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneMultiplayer::PendingPeer>>>
                       ::operator[](this_00,(int *)&local_120);
              *(undefined1 *)(lVar26 + 1) = 1;
              pcVar24 = (char *)HashMap<int,SceneMultiplayer::PendingPeer,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneMultiplayer::PendingPeer>>>
                                ::operator[](this_00,(int *)&local_120);
              if (*pcVar24 != '\0') {
                HashMap<int,SceneMultiplayer::PendingPeer,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneMultiplayer::PendingPeer>>>
                ::erase(this_00,(int *)&local_120);
                _admit_peer(this,uVar20);
              }
            }
            else {
              iVar19 = local_11c + -2;
              __src = local_118 + 2;
              CowData<unsigned_char>::_copy_on_write(this_01);
              memcpy((void *)local_f8._8_8_,__src,(long)iVar19);
              Variant::Variant((Variant *)local_b8,uVar20);
              Variant::Variant((Variant *)local_98,(StringName *)local_f8);
              local_78 = 0;
              local_108 = 0;
              uStack_104 = 0;
              uStack_100 = 0;
              local_70 = (undefined1  [16])0x0;
              local_c8 = (Variant *)local_b8;
              pVStack_c0 = (Variant *)local_98;
              Callable::callp((Variant **)(this + 0x1c0),(int)&local_c8,(Variant *)0x2,
                              (CallError *)&local_78);
              if (local_108 == 0) {
                if (Variant::needs_deinit[(int)local_78] != '\0') {
                  Variant::_clear_internal();
                }
                if (Variant::needs_deinit[local_98[0]] != '\0') {
                  Variant::_clear_internal();
                }
                cVar18 = Variant::needs_deinit[local_b8[0]];
              }
              else {
                _err_print_error(&_LC177,"modules/multiplayer/scene_multiplayer.cpp",0x70,
                                 "Condition \"ce.error != Callable::CallError::CALL_OK\" is true. Continuing."
                                 ,"Failed to call authentication callback",0,0);
                if (Variant::needs_deinit[(int)local_78] != '\0') {
                  Variant::_clear_internal();
                }
                if (Variant::needs_deinit[local_98[0]] != '\0') {
                  Variant::_clear_internal();
                }
                cVar18 = Variant::needs_deinit[local_b8[0]];
              }
              if (cVar18 != '\0') {
                Variant::_clear_internal();
              }
            }
            CowData<unsigned_char>::_unref(this_01);
          }
          goto LAB_00108750;
        }
        uVar29 = uVar29 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (iVar32 + 1) * uVar23;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar33;
        lVar26 = SUB168(auVar3 * auVar11,8);
        uVar21 = *(uint *)(*(long *)(this + 0x1a0) + lVar26 * 4);
        iVar32 = SUB164(auVar3 * auVar11,8);
      } while ((uVar21 != 0) &&
              (auVar4._8_8_ = 0, auVar4._0_8_ = uVar21 * uVar23, auVar12._8_8_ = 0,
              auVar12._0_8_ = uVar33, auVar5._8_8_ = 0,
              auVar5._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1b8) * 4
                                        ) + iVar32) - SUB164(auVar4 * auVar12,8)) * uVar23,
              auVar13._8_8_ = 0, auVar13._0_8_ = uVar33, uVar29 <= SUB164(auVar5 * auVar13,8)));
    }
  }
  if ((*(long *)(this + 0x1d8) != 0) && (*(int *)(this + 0x1fc) != 0)) {
    uVar23 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1f8) * 8);
    uVar33 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1f8) * 4));
    uVar21 = (uVar20 >> 0x10 ^ uVar20) * -0x7a143595;
    uVar21 = (uVar21 ^ uVar21 >> 0xd) * -0x3d4d51cb;
    uVar30 = uVar21 ^ uVar21 >> 0x10;
    if (uVar21 == uVar21 >> 0x10) {
      uVar30 = 1;
      uVar25 = uVar23;
    }
    else {
      uVar25 = uVar30 * uVar23;
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar33;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar25;
    lVar26 = SUB168(auVar6 * auVar14,8);
    uVar21 = *(uint *)(*(long *)(this + 0x1f0) + lVar26 * 4);
    uVar25 = (ulong)uVar21;
    iVar32 = SUB164(auVar6 * auVar14,8);
    if (uVar21 != 0) {
      uVar21 = 0;
      do {
        if ((uVar30 == (uint)uVar25) &&
           (uVar20 == *(uint *)(*(long *)(this + 0x1d8) +
                               (ulong)*(uint *)(*(long *)(this + 0x1e0) + lVar26 * 4) * 4))) {
          if ((local_11c == 0) || ((~*local_118 & 7) != 0)) {
            *(uint *)(this + 0x200) = uVar20;
            _process_packet(this,uVar20,local_118,local_11c);
            *(undefined4 *)(this + 0x200) = 0;
          }
          else {
            if ((1 < local_11c) && (local_118[1] == 0)) {
              if (local_11c != 2) {
                _err_print_error(&_LC177,"modules/multiplayer/scene_multiplayer.cpp",0x81,
                                 "Condition \"len != 2\" is true. Continuing.",0);
              }
              goto LAB_00108750;
            }
            _process_sys(this);
          }
          _update_status(this);
          if (*(int *)(this + 0x188) != 2) goto LAB_00108c10;
          goto LAB_00108750;
        }
        uVar21 = uVar21 + 1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = (iVar32 + 1) * uVar23;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar33;
        lVar26 = SUB168(auVar7 * auVar15,8);
        uVar29 = *(uint *)(*(long *)(this + 0x1f0) + lVar26 * 4);
        uVar25 = (ulong)uVar29;
        iVar32 = SUB164(auVar7 * auVar15,8);
      } while ((uVar29 != 0) &&
              (auVar8._8_8_ = 0, auVar8._0_8_ = uVar25 * uVar23, auVar16._8_8_ = 0,
              auVar16._0_8_ = uVar33, auVar9._8_8_ = 0,
              auVar9._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1f8) * 4
                                        ) + iVar32) - SUB164(auVar8 * auVar16,8)) * uVar23,
              auVar17._8_8_ = 0, auVar17._0_8_ = uVar33, uVar21 <= SUB164(auVar9 * auVar17,8)));
    }
  }
  _err_print_error(&_LC177,"modules/multiplayer/scene_multiplayer.cpp",0x7c,
                   "Condition \"!connected_peers.has(sender)\" is true. Continuing.",0);
  goto LAB_00108750;
}



/* SceneMultiplayer::send_bytes(Vector<unsigned char>, int, MultiplayerPeer::TransferMode, int) */

undefined8 __thiscall
SceneMultiplayer::send_bytes
          (SceneMultiplayer *this,long param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  size_t __n;
  void *__src;
  
  if (*(long *)(param_2 + 8) == 0) {
    _err_print_error("send_bytes","modules/multiplayer/scene_multiplayer.cpp",0x1ba,
                     "Condition \"p_data.is_empty()\" is true. Returning: ERR_INVALID_DATA",
                     "Trying to send an empty raw packet.",0,0);
    return 0x1e;
  }
  if (*(long **)(this + 0x180) == (long *)0x0) {
    _err_print_error("send_bytes","modules/multiplayer/scene_multiplayer.cpp",0x1bb,
                     "Condition \"multiplayer_peer.is_null()\" is true. Returning: ERR_UNCONFIGURED"
                     ,"Trying to send a raw packet while no multiplayer peer is active.",0,0);
    return 3;
  }
  iVar2 = (**(code **)(**(long **)(this + 0x180) + 0x210))();
  if (iVar2 != 2) {
    _err_print_error("send_bytes","modules/multiplayer/scene_multiplayer.cpp",0x1bc,
                     "Condition \"multiplayer_peer->get_connection_status() != MultiplayerPeer::CONNECTION_CONNECTED\" is true. Returning: ERR_UNCONFIGURED"
                     ,"Trying to send a raw packet via a multiplayer peer which is not connected.",0
                     ,0);
    return 3;
  }
  __src = *(void **)(param_2 + 8);
  lVar3 = *(long *)(this + 0x210);
  if (__src == (void *)0x0) {
    if (lVar3 != 0) {
      lVar5 = 0;
      goto LAB_0010930f;
    }
    lVar5 = 1;
LAB_00109404:
    CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(this + 0x210),lVar5);
    lVar3 = *(long *)(this + 0x210);
    __src = *(void **)(param_2 + 8);
    if (lVar3 != 0) goto LAB_00109319;
LAB_00109424:
    lVar3 = 0;
  }
  else {
    lVar5 = *(long *)((long)__src + -8);
    if (lVar3 == 0) {
      if (-1 < lVar5) goto LAB_00109400;
      goto LAB_00109424;
    }
LAB_0010930f:
    if (*(long *)(lVar3 + -8) <= lVar5) {
LAB_00109400:
      lVar5 = lVar5 + 1;
      goto LAB_00109404;
    }
LAB_00109319:
    lVar3 = *(long *)(lVar3 + -8);
    if (0 < lVar3) {
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(this + 0x210));
      **(undefined1 **)(this + 0x210) = 3;
      if (*(long *)(param_2 + 8) == 0) {
        __n = 0;
      }
      else {
        __n = *(size_t *)(*(long *)(param_2 + 8) + -8);
      }
      if (*(long *)(this + 0x210) == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = *(long *)(*(long *)(this + 0x210) + -8);
        if (1 < lVar3) {
          CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(this + 0x210));
          memcpy((void *)(*(long *)(this + 0x210) + 1),__src,__n);
          (**(code **)(**(long **)(this + 0x180) + 400))(*(long **)(this + 0x180),param_5);
          (**(code **)(**(long **)(this + 0x180) + 0x1a0))(*(long **)(this + 0x180),param_4);
          if (*(long *)(param_2 + 8) == 0) {
            iVar2 = 1;
          }
          else {
            iVar2 = (int)*(undefined8 *)(*(long *)(param_2 + 8) + -8) + 1;
          }
          uVar4 = send_command(this,param_3,*(uchar **)(this + 0x210),iVar2);
          return uVar4;
        }
      }
      lVar5 = 1;
      goto LAB_00109444;
    }
  }
  lVar5 = 0;
LAB_00109444:
  _err_print_index_error
            ("operator[]","./core/templates/vector.h",0x38,lVar5,lVar3,"p_index",
             "((Vector<T> *)(this))->_cowdata.size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x11f2,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11f2,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* RefCounted::_getv(StringName const&, Variant&) const */

undefined8 RefCounted::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_setv(StringName const&, Variant const&) */

undefined8 RefCounted::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_validate_propertyv(PropertyInfo&) const */

void RefCounted::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* RefCounted::_property_can_revertv(StringName const&) const */

undefined8 RefCounted::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* RefCounted::_property_get_revertv(StringName const&, Variant&) const */

undefined8 RefCounted::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_notificationv(int, bool) */

void RefCounted::_notificationv(int param_1,bool param_2)

{
  return;
}



/* SceneCacheInterface::is_class_ptr(void*) const */

uint __thiscall SceneCacheInterface::is_class_ptr(SceneCacheInterface *this,void *param_1)

{
  return (uint)CONCAT71(0x11f2,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11f1,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11f2,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* SceneCacheInterface::_getv(StringName const&, Variant&) const */

undefined8 SceneCacheInterface::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* SceneCacheInterface::_setv(StringName const&, Variant const&) */

undefined8 SceneCacheInterface::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* SceneCacheInterface::_validate_propertyv(PropertyInfo&) const */

void SceneCacheInterface::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* SceneCacheInterface::_property_can_revertv(StringName const&) const */

undefined8 SceneCacheInterface::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* SceneCacheInterface::_property_get_revertv(StringName const&, Variant&) const */

undefined8 SceneCacheInterface::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* SceneCacheInterface::_notificationv(int, bool) */

void SceneCacheInterface::_notificationv(int param_1,bool param_2)

{
  return;
}



/* SceneReplicationInterface::is_class_ptr(void*) const */

uint __thiscall
SceneReplicationInterface::is_class_ptr(SceneReplicationInterface *this,void *param_1)

{
  return (uint)CONCAT71(0x11f2,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11f1,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11f2,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* SceneReplicationInterface::_getv(StringName const&, Variant&) const */

undefined8 SceneReplicationInterface::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* SceneReplicationInterface::_setv(StringName const&, Variant const&) */

undefined8 SceneReplicationInterface::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* SceneReplicationInterface::_validate_propertyv(PropertyInfo&) const */

void SceneReplicationInterface::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* SceneReplicationInterface::_property_can_revertv(StringName const&) const */

undefined8 SceneReplicationInterface::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* SceneReplicationInterface::_property_get_revertv(StringName const&, Variant&) const */

undefined8 SceneReplicationInterface::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* SceneReplicationInterface::_notificationv(int, bool) */

void SceneReplicationInterface::_notificationv(int param_1,bool param_2)

{
  return;
}



/* SceneRPCInterface::is_class_ptr(void*) const */

uint __thiscall SceneRPCInterface::is_class_ptr(SceneRPCInterface *this,void *param_1)

{
  return (uint)CONCAT71(0x11f2,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11f1,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11f2,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* SceneRPCInterface::_getv(StringName const&, Variant&) const */

undefined8 SceneRPCInterface::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* SceneRPCInterface::_setv(StringName const&, Variant const&) */

undefined8 SceneRPCInterface::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* SceneRPCInterface::_validate_propertyv(PropertyInfo&) const */

void SceneRPCInterface::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* SceneRPCInterface::_property_can_revertv(StringName const&) const */

undefined8 SceneRPCInterface::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* SceneRPCInterface::_property_get_revertv(StringName const&, Variant&) const */

undefined8 SceneRPCInterface::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* SceneRPCInterface::_notificationv(int, bool) */

void SceneRPCInterface::_notificationv(int param_1,bool param_2)

{
  return;
}



/* OfflineMultiplayerPeer::is_class_ptr(void*) const */

uint __thiscall OfflineMultiplayerPeer::is_class_ptr(OfflineMultiplayerPeer *this,void *param_1)

{
  return (uint)CONCAT71(0x11f1,(undefined4 *)param_1 ==
                               &MultiplayerPeer::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11f1,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11f1,(undefined4 *)param_1 == &PacketPeer::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11f2,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11f2,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* OfflineMultiplayerPeer::_getv(StringName const&, Variant&) const */

undefined8 OfflineMultiplayerPeer::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* OfflineMultiplayerPeer::_setv(StringName const&, Variant const&) */

undefined8 OfflineMultiplayerPeer::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* OfflineMultiplayerPeer::_validate_propertyv(PropertyInfo&) const */

void OfflineMultiplayerPeer::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* OfflineMultiplayerPeer::_property_can_revertv(StringName const&) const */

undefined8 OfflineMultiplayerPeer::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* OfflineMultiplayerPeer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 OfflineMultiplayerPeer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* OfflineMultiplayerPeer::_notificationv(int, bool) */

void OfflineMultiplayerPeer::_notificationv(int param_1,bool param_2)

{
  return;
}



/* OfflineMultiplayerPeer::get_available_packet_count() const */

undefined8 OfflineMultiplayerPeer::get_available_packet_count(void)

{
  return 0;
}



/* OfflineMultiplayerPeer::get_packet(unsigned char const**, int&) */

undefined8 __thiscall
OfflineMultiplayerPeer::get_packet(OfflineMultiplayerPeer *this,uchar **param_1,int *param_2)

{
  *param_1 = (uchar *)0x0;
  *param_2 = 0;
  return 0;
}



/* OfflineMultiplayerPeer::put_packet(unsigned char const*, int) */

undefined8 OfflineMultiplayerPeer::put_packet(uchar *param_1,int param_2)

{
  return 0;
}



/* OfflineMultiplayerPeer::get_max_packet_size() const */

undefined8 OfflineMultiplayerPeer::get_max_packet_size(void)

{
  return 0;
}



/* OfflineMultiplayerPeer::set_target_peer(int) */

void OfflineMultiplayerPeer::set_target_peer(int param_1)

{
  return;
}



/* OfflineMultiplayerPeer::get_packet_peer() const */

undefined8 OfflineMultiplayerPeer::get_packet_peer(void)

{
  return 0;
}



/* OfflineMultiplayerPeer::get_packet_mode() const */

undefined8 OfflineMultiplayerPeer::get_packet_mode(void)

{
  return 2;
}



/* OfflineMultiplayerPeer::get_packet_channel() const */

undefined8 OfflineMultiplayerPeer::get_packet_channel(void)

{
  return 0;
}



/* OfflineMultiplayerPeer::disconnect_peer(int, bool) */

void OfflineMultiplayerPeer::disconnect_peer(int param_1,bool param_2)

{
  return;
}



/* OfflineMultiplayerPeer::is_server() const */

undefined8 OfflineMultiplayerPeer::is_server(void)

{
  return 1;
}



/* OfflineMultiplayerPeer::poll() */

void OfflineMultiplayerPeer::poll(void)

{
  return;
}



/* OfflineMultiplayerPeer::close() */

void OfflineMultiplayerPeer::close(void)

{
  return;
}



/* OfflineMultiplayerPeer::get_unique_id() const */

undefined8 OfflineMultiplayerPeer::get_unique_id(void)

{
  return 1;
}



/* OfflineMultiplayerPeer::get_connection_status() const */

undefined8 OfflineMultiplayerPeer::get_connection_status(void)

{
  return 2;
}



/* SceneMultiplayer::is_class_ptr(void*) const */

uint __thiscall SceneMultiplayer::is_class_ptr(SceneMultiplayer *this,void *param_1)

{
  return (uint)CONCAT71(0x11f1,(undefined4 *)param_1 == &MultiplayerAPI::get_class_ptr_static()::ptr
                       ) |
         (uint)CONCAT71(0x11f1,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11f2,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11f2,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* SceneMultiplayer::_getv(StringName const&, Variant&) const */

undefined8 SceneMultiplayer::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* SceneMultiplayer::_setv(StringName const&, Variant const&) */

undefined8 SceneMultiplayer::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* SceneMultiplayer::_validate_propertyv(PropertyInfo&) const */

void SceneMultiplayer::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* SceneMultiplayer::_property_can_revertv(StringName const&) const */

undefined8 SceneMultiplayer::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* SceneMultiplayer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 SceneMultiplayer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* SceneMultiplayer::_notificationv(int, bool) */

void SceneMultiplayer::_notificationv(int param_1,bool param_2)

{
  return;
}



/* SceneMultiplayer::get_remote_sender_id() */

int __thiscall SceneMultiplayer::get_remote_sender_id(SceneMultiplayer *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x204);
  if (iVar1 == 0) {
    iVar1 = *(int *)(this + 0x200);
  }
  return iVar1;
}



/* CallableCustomMethodPointer<SceneMultiplayer, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SceneMultiplayer,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneMultiplayer,void,int> *this)

{
  return;
}



/* MethodBindTRC<int>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<int>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<int>::get_argument_meta(int) const */

uint __thiscall MethodBindTRC<int>::get_argument_meta(MethodBindTRC<int> *this,int param_1)

{
  return param_1 >> 0x1f & 3;
}



/* MethodBindTR<Error, Vector<unsigned char>, int, MultiplayerPeer::TransferMode,
   int>::_gen_argument_type(int) const */

char __thiscall
MethodBindTR<Error,Vector<unsigned_char>,int,MultiplayerPeer::TransferMode,int>::_gen_argument_type
          (MethodBindTR<Error,Vector<unsigned_char>,int,MultiplayerPeer::TransferMode,int> *this,
          int param_1)

{
  return (-(param_1 == 0) & 0x1bU) + 2;
}



/* MethodBindTR<Error, Vector<unsigned char>, int, MultiplayerPeer::TransferMode,
   int>::get_argument_meta(int) const */

char __thiscall
MethodBindTR<Error,Vector<unsigned_char>,int,MultiplayerPeer::TransferMode,int>::get_argument_meta
          (MethodBindTR<Error,Vector<unsigned_char>,int,MultiplayerPeer::TransferMode,int> *this,
          int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if (-1 < param_1) {
    cVar1 = ((param_1 & 0xfffffffdU) == 1) * '\x03';
  }
  return cVar1;
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



/* MethodBindTRC<Callable>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Callable>::_gen_argument_type(int param_1)

{
  return 0x19;
}



/* MethodBindTRC<Callable>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Callable>::get_argument_meta(int param_1)

{
  return 0;
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



/* MethodBindTR<Error, int>::_gen_argument_type(int) const */

undefined8 MethodBindTR<Error,int>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTR<Error, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTR<Error,int>::get_argument_meta(MethodBindTR<Error,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTR<Error, int, Vector<unsigned char> >::_gen_argument_type(int) const */

undefined8 __thiscall
MethodBindTR<Error,int,Vector<unsigned_char>>::_gen_argument_type
          (MethodBindTR<Error,int,Vector<unsigned_char>> *this,int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_1 == 1) {
    uVar1 = 0x1d;
  }
  return uVar1;
}



/* MethodBindTR<Error, int, Vector<unsigned char> >::get_argument_meta(int) const */

byte __thiscall
MethodBindTR<Error,int,Vector<unsigned_char>>::get_argument_meta
          (MethodBindTR<Error,int,Vector<unsigned_char>> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTR<Vector<int>>::_gen_argument_type(int) const */

undefined8 MethodBindTR<Vector<int>>::_gen_argument_type(int param_1)

{
  return 0x1e;
}



/* MethodBindTR<Vector<int>>::get_argument_meta(int) const */

undefined8 MethodBindTR<Vector<int>>::get_argument_meta(int param_1)

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



/* MethodBindT<>::_gen_argument_type(int) const */

undefined8 MethodBindT<>::_gen_argument_type(int param_1)

{
  return 0;
}



/* MethodBindT<>::_gen_argument_type_info(int) const */

undefined8 MethodBindT<>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  
  *(undefined4 *)CONCAT44(in_register_0000003c,param_1) = 0;
  *(undefined4 *)(CONCAT44(in_register_0000003c,param_1) + 0x18) = 0;
  *(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 0x20) = 0;
  *(undefined4 *)(CONCAT44(in_register_0000003c,param_1) + 0x28) = 6;
  *(undefined1 (*) [16])(CONCAT44(in_register_0000003c,param_1) + 8) = (undefined1  [16])0x0;
  return CONCAT44(in_register_0000003c,param_1);
}



/* MethodBindT<>::get_argument_meta(int) const */

undefined8 MethodBindT<>::get_argument_meta(int param_1)

{
  return 0;
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



/* CallableCustomMethodPointer<SceneMultiplayer, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<SceneMultiplayer,void,int>::get_argument_count
          (CallableCustomMethodPointer<SceneMultiplayer,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* CallableCustomMethodPointer<SceneMultiplayer, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SceneMultiplayer,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneMultiplayer,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0011e200;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0011e200;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* MethodBindT<NodePath const&>::~MethodBindT() */

void __thiscall MethodBindT<NodePath_const&>::~MethodBindT(MethodBindT<NodePath_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011ebe0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<NodePath const&>::~MethodBindT() */

void __thiscall MethodBindT<NodePath_const&>::~MethodBindT(MethodBindT<NodePath_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011ebe0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<NodePath>::~MethodBindTRC() */

void __thiscall MethodBindTRC<NodePath>::~MethodBindTRC(MethodBindTRC<NodePath> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011ec40;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<NodePath>::~MethodBindTRC() */

void __thiscall MethodBindTRC<NodePath>::~MethodBindTRC(MethodBindTRC<NodePath> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011ec40;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011eca0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011eca0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Vector<int>>::~MethodBindTR() */

void __thiscall MethodBindTR<Vector<int>>::~MethodBindTR(MethodBindTR<Vector<int>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011ed60;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Vector<int>>::~MethodBindTR() */

void __thiscall MethodBindTR<Vector<int>>::~MethodBindTR(MethodBindTR<Vector<int>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011ed60;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Error, int, Vector<unsigned char> >::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,int,Vector<unsigned_char>>::~MethodBindTR
          (MethodBindTR<Error,int,Vector<unsigned_char>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011edc0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Error, int, Vector<unsigned char> >::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,int,Vector<unsigned_char>>::~MethodBindTR
          (MethodBindTR<Error,int,Vector<unsigned_char>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011edc0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Error, int>::~MethodBindTR() */

void __thiscall MethodBindTR<Error,int>::~MethodBindTR(MethodBindTR<Error,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011ee20;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Error, int>::~MethodBindTR() */

void __thiscall MethodBindTR<Error,int>::~MethodBindTR(MethodBindTR<Error,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011ee20;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Callable>::~MethodBindT() */

void __thiscall MethodBindT<Callable>::~MethodBindT(MethodBindT<Callable> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011ee80;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Callable>::~MethodBindT() */

void __thiscall MethodBindT<Callable>::~MethodBindT(MethodBindT<Callable> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011ee80;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Callable>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Callable>::~MethodBindTRC(MethodBindTRC<Callable> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011eee0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Callable>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Callable>::~MethodBindTRC(MethodBindTRC<Callable> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011eee0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<double>::~MethodBindT() */

void __thiscall MethodBindT<double>::~MethodBindT(MethodBindT<double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011ef40;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<double>::~MethodBindT() */

void __thiscall MethodBindT<double>::~MethodBindT(MethodBindT<double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011ef40;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<double>::~MethodBindTRC() */

void __thiscall MethodBindTRC<double>::~MethodBindTRC(MethodBindTRC<double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011efa0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<double>::~MethodBindTRC() */

void __thiscall MethodBindTRC<double>::~MethodBindTRC(MethodBindTRC<double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011efa0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011f000;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011f000;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011f060;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011f060;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Error, Vector<unsigned char>, int, MultiplayerPeer::TransferMode,
   int>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,Vector<unsigned_char>,int,MultiplayerPeer::TransferMode,int>::~MethodBindTR
          (MethodBindTR<Error,Vector<unsigned_char>,int,MultiplayerPeer::TransferMode,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011f0c0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Error, Vector<unsigned char>, int, MultiplayerPeer::TransferMode,
   int>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,Vector<unsigned_char>,int,MultiplayerPeer::TransferMode,int>::~MethodBindTR
          (MethodBindTR<Error,Vector<unsigned_char>,int,MultiplayerPeer::TransferMode,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011f0c0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011f120;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011f120;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011ed00;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011ed00;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* OfflineMultiplayerPeer::_get_class_namev() const */

undefined8 * OfflineMultiplayerPeer::_get_class_namev(void)

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
LAB_0010b783:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010b783;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"OfflineMultiplayerPeer");
      goto LAB_0010b7ee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"OfflineMultiplayerPeer");
LAB_0010b7ee:
  return &_get_class_namev()::_class_name_static;
}



/* CallableCustomMethodPointer<SceneMultiplayer, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<SceneMultiplayer,void,int>::get_object
          (CallableCustomMethodPointer<SceneMultiplayer,void,int> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010b91d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b91d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b91d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointerBase::get_as_text() const */

void CallableCustomMethodPointerBase::get_as_text(void)

{
  char *__s;
  long lVar1;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  __s = *(char **)(in_RSI + 0x20);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)in_RDI = 0;
  if (__s != (char *)0x0) {
    strlen(__s);
  }
  String::parse_latin1(in_RDI);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneRPCInterface::_get_class_namev() const */

undefined8 * SceneRPCInterface::_get_class_namev(void)

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
LAB_0010ba43:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010ba43;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"SceneRPCInterface");
      goto LAB_0010baae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"SceneRPCInterface");
LAB_0010baae:
  return &_get_class_namev()::_class_name_static;
}



/* SceneReplicationInterface::_get_class_namev() const */

undefined8 * SceneReplicationInterface::_get_class_namev(void)

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
LAB_0010bb33:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010bb33;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"SceneReplicationInterface");
      goto LAB_0010bb9e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"SceneReplicationInterface");
LAB_0010bb9e:
  return &_get_class_namev()::_class_name_static;
}



/* SceneCacheInterface::_get_class_namev() const */

undefined8 * SceneCacheInterface::_get_class_namev(void)

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
LAB_0010bc23:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010bc23;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"SceneCacheInterface");
      goto LAB_0010bc8e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"SceneCacheInterface");
LAB_0010bc8e:
  return &_get_class_namev()::_class_name_static;
}



/* SceneMultiplayer::_get_class_namev() const */

undefined8 * SceneMultiplayer::_get_class_namev(void)

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
LAB_0010bd13:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010bd13;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"SceneMultiplayer");
      goto LAB_0010bd7e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"SceneMultiplayer");
LAB_0010bd7e:
  return &_get_class_namev()::_class_name_static;
}



/* RefCounted::_get_class_namev() const */

undefined8 * RefCounted::_get_class_namev(void)

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
LAB_0010bdf3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010bdf3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0010be5e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0010be5e:
  return &_get_class_namev()::_class_name_static;
}



/* OfflineMultiplayerPeer::~OfflineMultiplayerPeer() */

void __thiscall OfflineMultiplayerPeer::~OfflineMultiplayerPeer(OfflineMultiplayerPeer *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = StringName::operator=;
  if (*(long *)(this + 400) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 400) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 400);
      *(undefined8 *)(this + 400) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_0011e200;
  Object::~Object((Object *)this);
  return;
}



/* OfflineMultiplayerPeer::~OfflineMultiplayerPeer() */

void __thiscall OfflineMultiplayerPeer::~OfflineMultiplayerPeer(OfflineMultiplayerPeer *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = StringName::operator=;
  if (*(long *)(this + 400) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 400) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 400);
      *(undefined8 *)(this + 400) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_0011e200;
  Object::~Object((Object *)this);
  operator_delete(this,0x1a8);
  return;
}



/* OfflineMultiplayerPeer::get_class() const */

void OfflineMultiplayerPeer::get_class(void)

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



/* SceneRPCInterface::get_class() const */

void SceneRPCInterface::get_class(void)

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



/* SceneReplicationInterface::get_class() const */

void SceneReplicationInterface::get_class(void)

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



/* RefCounted::get_class() const */

void RefCounted::get_class(void)

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



/* SceneCacheInterface::get_class() const */

void SceneCacheInterface::get_class(void)

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



/* SceneMultiplayer::get_class() const */

void SceneMultiplayer::get_class(void)

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



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010c4cf;
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
LAB_0010c4cf:
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
    if (cVar6 != '\0') goto LAB_0010c583;
  }
  cVar6 = String::operator==(param_1,"RefCounted");
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
              if (lVar5 == 0) goto LAB_0010c633;
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
LAB_0010c633:
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
      if (cVar6 != '\0') goto LAB_0010c583;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_0010c583:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneCacheInterface::is_class(String const&) const */

undefined8 __thiscall SceneCacheInterface::is_class(SceneCacheInterface *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_0010c75f;
            LOCK();
            lVar6 = *plVar1;
            bVar8 = lVar4 == lVar6;
            if (bVar8) {
              *plVar1 = lVar4 + 1;
              lVar6 = lVar4;
            }
            UNLOCK();
          } while (!bVar8);
          if (lVar6 != -1) {
            local_60 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010c75f:
    cVar5 = String::operator==(param_1,(String *)&local_60);
    lVar3 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if (cVar5 != '\0') goto LAB_0010c813;
  }
  cVar5 = String::operator==(param_1,"SceneCacheInterface");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010c813:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneReplicationInterface::is_class(String const&) const */

undefined8 __thiscall
SceneReplicationInterface::is_class(SceneReplicationInterface *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_0010c8df;
            LOCK();
            lVar6 = *plVar1;
            bVar8 = lVar4 == lVar6;
            if (bVar8) {
              *plVar1 = lVar4 + 1;
              lVar6 = lVar4;
            }
            UNLOCK();
          } while (!bVar8);
          if (lVar6 != -1) {
            local_60 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010c8df:
    cVar5 = String::operator==(param_1,(String *)&local_60);
    lVar3 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if (cVar5 != '\0') goto LAB_0010c993;
  }
  cVar5 = String::operator==(param_1,"SceneReplicationInterface");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010c993:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneRPCInterface::is_class(String const&) const */

undefined8 __thiscall SceneRPCInterface::is_class(SceneRPCInterface *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_0010ca5f;
            LOCK();
            lVar6 = *plVar1;
            bVar8 = lVar4 == lVar6;
            if (bVar8) {
              *plVar1 = lVar4 + 1;
              lVar6 = lVar4;
            }
            UNLOCK();
          } while (!bVar8);
          if (lVar6 != -1) {
            local_60 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010ca5f:
    cVar5 = String::operator==(param_1,(String *)&local_60);
    lVar3 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if (cVar5 != '\0') goto LAB_0010cb13;
  }
  cVar5 = String::operator==(param_1,"SceneRPCInterface");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010cb13:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneMultiplayer::is_class(String const&) const */

undefined8 __thiscall SceneMultiplayer::is_class(SceneMultiplayer *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010cbef;
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
LAB_0010cbef:
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
    if (cVar6 != '\0') goto LAB_0010cca3;
  }
  cVar6 = String::operator==(param_1,"SceneMultiplayer");
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
              if (lVar5 == 0) goto LAB_0010cd63;
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
LAB_0010cd63:
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
      if (cVar6 != '\0') goto LAB_0010cca3;
    }
    cVar6 = String::operator==(param_1,"MultiplayerAPI");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_0010ce0c;
    }
  }
LAB_0010cca3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010ce0c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* SceneMultiplayer::_bind_methods() [clone .cold] */

void SceneMultiplayer::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010ce50(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* MethodBindTR<Vector<int>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Vector<int>>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC36;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x1e;
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
      goto joined_r0x0010cf9c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010cf9c:
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



/* MethodBindTRC<Callable>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Callable>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC36;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x19;
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
      goto joined_r0x0010d11c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010d11c:
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



/* MethodBindTRC<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<int>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC36;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 2;
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
      goto joined_r0x0010d29c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010d29c:
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
  local_48 = &_LC36;
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
      goto joined_r0x0010d41c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010d41c:
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
  local_48 = &_LC36;
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
      goto joined_r0x0010d59c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010d59c:
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
  local_48 = &_LC36;
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
      goto joined_r0x0010d71c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010d71c:
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



/* RefCounted::_initialize_classv() */

void RefCounted::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_48 = 0;
    local_38 = "Object";
    local_30 = 6;
    String::parse_latin1((StrRange *)&local_48);
    StringName::StringName((StringName *)&local_40,(String *)&local_48,false);
    local_38 = "RefCounted";
    local_50 = 0;
    local_30 = 10;
    String::parse_latin1((StrRange *)&local_50);
    StringName::StringName((StringName *)&local_38,(String *)&local_50,false);
    ClassDB::_add_class2((StringName *)&local_38,(StringName *)&local_40);
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
    lVar2 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_40 != 0)) {
      StringName::unref();
    }
    lVar2 = local_48;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
      RefCounted::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  undefined7 in_register_00000031;
  List *pLVar6;
  long in_FS_OFFSET;
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
  
  pLVar6 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_90 = 0;
  local_78 = "RefCounted";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RefCounted";
  local_98 = 0;
  local_70 = 10;
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
LAB_0010da68:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010da68;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x0010da86;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x0010da86:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar6 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)pLVar6;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar6,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneCacheInterface::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
SceneCacheInterface::_get_property_listv(SceneCacheInterface *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
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
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "SceneCacheInterface";
  local_70 = 0x13;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "SceneCacheInterface";
  local_98 = 0;
  local_70 = 0x13;
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
LAB_0010de68:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010de68;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010de85;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010de85:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"SceneCacheInterface",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneReplicationInterface::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
SceneReplicationInterface::_get_property_listv
          (SceneReplicationInterface *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
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
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "SceneReplicationInterface";
  local_70 = 0x19;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "SceneReplicationInterface";
  local_98 = 0;
  local_70 = 0x19;
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
LAB_0010e2b8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010e2b8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010e2d5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010e2d5:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"SceneReplicationInterface",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
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



/* PacketPeer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall PacketPeer::_get_property_listv(PacketPeer *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
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
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "PacketPeer";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "PacketPeer";
  local_98 = 0;
  local_70 = 10;
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
LAB_0010e8b8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010e8b8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010e8d5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010e8d5:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"PacketPeer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MultiplayerPeer::is_class(String const&) const */

undefined8 __thiscall MultiplayerPeer::is_class(MultiplayerPeer *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010ec0f;
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
LAB_0010ec0f:
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
    if (cVar6 != '\0') goto LAB_0010ecc3;
  }
  cVar6 = String::operator==(param_1,"MultiplayerPeer");
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
              if (lVar5 == 0) goto LAB_0010ed83;
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
LAB_0010ed83:
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
      if (cVar6 != '\0') goto LAB_0010ecc3;
    }
    cVar6 = String::operator==(param_1,"PacketPeer");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_0010ee2c;
    }
  }
LAB_0010ecc3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010ee2c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OfflineMultiplayerPeer::is_class(String const&) const */

undefined8 __thiscall OfflineMultiplayerPeer::is_class(OfflineMultiplayerPeer *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_0010eeaf;
            LOCK();
            lVar6 = *plVar1;
            bVar8 = lVar4 == lVar6;
            if (bVar8) {
              *plVar1 = lVar4 + 1;
              lVar6 = lVar4;
            }
            UNLOCK();
          } while (!bVar8);
          if (lVar6 != -1) {
            local_60 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010eeaf:
    cVar5 = String::operator==(param_1,(String *)&local_60);
    lVar3 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if (cVar5 != '\0') goto LAB_0010ef63;
  }
  cVar5 = String::operator==(param_1,"OfflineMultiplayerPeer");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = MultiplayerPeer::is_class((MultiplayerPeer *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010ef63:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MultiplayerPeer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
MultiplayerPeer::_get_property_listv(MultiplayerPeer *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
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
    PacketPeer::_get_property_listv((PacketPeer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "MultiplayerPeer";
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "MultiplayerPeer";
  local_98 = 0;
  local_70 = 0xf;
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
LAB_0010f138:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010f138;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010f155;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010f155:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"MultiplayerPeer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      PacketPeer::_get_property_listv((PacketPeer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OfflineMultiplayerPeer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
OfflineMultiplayerPeer::_get_property_listv(OfflineMultiplayerPeer *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
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
    MultiplayerPeer::_get_property_listv((MultiplayerPeer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "OfflineMultiplayerPeer";
  local_70 = 0x16;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "OfflineMultiplayerPeer";
  local_98 = 0;
  local_70 = 0x16;
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
LAB_0010f588:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010f588;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010f5a5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010f5a5:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"OfflineMultiplayerPeer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      MultiplayerPeer::_get_property_listv((MultiplayerPeer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MultiplayerAPI::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall MultiplayerAPI::_get_property_listv(MultiplayerAPI *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
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
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "MultiplayerAPI";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "MultiplayerAPI";
  local_98 = 0;
  local_70 = 0xe;
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
LAB_0010f9d8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010f9d8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010f9f5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010f9f5:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"MultiplayerAPI",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneMultiplayer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
SceneMultiplayer::_get_property_listv(SceneMultiplayer *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
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
    MultiplayerAPI::_get_property_listv((MultiplayerAPI *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "SceneMultiplayer";
  local_70 = 0x10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "SceneMultiplayer";
  local_98 = 0;
  local_70 = 0x10;
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
LAB_0010fe28:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010fe28;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010fe45;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010fe45:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"SceneMultiplayer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      MultiplayerAPI::_get_property_listv((MultiplayerAPI *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  
  if (*(long *)(this + 0x10) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x10) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(this + 0x10);
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = plVar1[-1];
      *(undefined8 *)(this + 0x10) = 0;
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
    }
  }
  if ((StringName::configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<int, SceneMultiplayer::PendingPeer, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, SceneMultiplayer::PendingPeer> > >::operator[](int
   const&) */

undefined1 * __thiscall
HashMap<int,SceneMultiplayer::PendingPeer,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneMultiplayer::PendingPeer>>>
::operator[](HashMap<int,SceneMultiplayer::PendingPeer,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneMultiplayer::PendingPeer>>>
             *this,int *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
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
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 (*pauVar36) [16];
  uint uVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined1 (*pauVar42) [16];
  ulong uVar43;
  int iVar44;
  ulong uVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  ulong uVar49;
  undefined8 uVar50;
  uint uVar51;
  ulong uVar52;
  long lVar53;
  uint uVar54;
  uint uVar55;
  undefined1 (*pauVar56) [16];
  void *local_70;
  
  local_70 = *(void **)(this + 8);
  uVar40 = (ulong)*(uint *)(this + 0x28);
  uVar38 = *param_1;
  uVar39 = *(uint *)(hash_table_size_primes + uVar40 * 4);
  uVar52 = CONCAT44(0,uVar39);
  if (local_70 == (void *)0x0) {
    uVar40 = uVar52 * 4;
    uVar49 = uVar52 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    local_70 = (void *)Memory::alloc_static(uVar49,false);
    *(void **)(this + 8) = local_70;
    if (uVar39 == 0) {
      iVar44 = *(int *)(this + 0x2c);
      uVar38 = *param_1;
      if (local_70 == (void *)0x0) goto LAB_001105e3;
    }
    else {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)local_70 + uVar49)) &&
         (local_70 < (void *)((long)pvVar3 + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar40 * 4) = 0;
          *(undefined8 *)((long)local_70 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar52 != uVar40);
        iVar44 = *(int *)(this + 0x2c);
        uVar38 = *param_1;
      }
      else {
        memset(pvVar3,0,uVar40);
        memset(local_70,0,uVar49);
        iVar44 = *(int *)(this + 0x2c);
        uVar38 = *param_1;
      }
    }
    if (iVar44 != 0) {
      uVar40 = (ulong)*(uint *)(this + 0x28);
      lVar53 = *(long *)(this + 0x10);
      goto LAB_00110963;
    }
  }
  else {
    iVar44 = *(int *)(this + 0x2c);
    if (iVar44 != 0) {
      uVar49 = *(ulong *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar37 = (uVar38 >> 0x10 ^ uVar38) * -0x7a143595;
      uVar37 = (uVar37 ^ uVar37 >> 0xd) * -0x3d4d51cb;
      uVar54 = uVar37 ^ uVar37 >> 0x10;
      if (uVar37 == uVar37 >> 0x10) {
        uVar54 = 1;
        uVar45 = uVar49;
      }
      else {
        uVar45 = uVar54 * uVar49;
      }
      lVar53 = *(long *)(this + 0x10);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar52;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar45;
      lVar46 = SUB168(auVar4 * auVar20,8);
      uVar37 = *(uint *)(lVar53 + lVar46 * 4);
      uVar55 = SUB164(auVar4 * auVar20,8);
      if (uVar37 != 0) {
        uVar51 = 0;
        do {
          if ((uVar54 == uVar37) &&
             (uVar38 == *(uint *)(*(long *)((long)local_70 + lVar46 * 8) + 0x10))) {
            return (undefined1 *)(*(long *)((long)local_70 + (ulong)uVar55 * 8) + 0x18);
          }
          uVar51 = uVar51 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (uVar55 + 1) * uVar49;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar52;
          lVar46 = SUB168(auVar5 * auVar21,8);
          uVar37 = *(uint *)(lVar53 + lVar46 * 4);
          uVar55 = SUB164(auVar5 * auVar21,8);
        } while ((uVar37 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = uVar37 * uVar49, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar52, auVar7._8_8_ = 0,
                auVar7._0_8_ = ((uVar55 + uVar39) - SUB164(auVar6 * auVar22,8)) * uVar49,
                auVar23._8_8_ = 0, auVar23._0_8_ = uVar52, uVar51 <= SUB164(auVar7 * auVar23,8)));
      }
LAB_00110963:
      uVar45 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar40 * 4));
      uVar49 = *(ulong *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar39 = (uVar38 >> 0x10 ^ uVar38) * -0x7a143595;
      uVar39 = (uVar39 ^ uVar39 >> 0xd) * -0x3d4d51cb;
      uVar37 = uVar39 ^ uVar39 >> 0x10;
      if (uVar39 == uVar39 >> 0x10) {
        uVar37 = 1;
        uVar43 = uVar49;
      }
      else {
        uVar43 = uVar37 * uVar49;
      }
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar45;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = uVar43;
      lVar46 = SUB168(auVar16 * auVar32,8);
      uVar39 = *(uint *)(lVar53 + lVar46 * 4);
      uVar54 = SUB164(auVar16 * auVar32,8);
      if (uVar39 != 0) {
        uVar55 = 0;
        do {
          if ((uVar37 == uVar39) &&
             (*(uint *)(*(long *)((long)local_70 + lVar46 * 8) + 0x10) == uVar38)) {
            pauVar42 = *(undefined1 (**) [16])((long)local_70 + (ulong)uVar54 * 8);
            *(undefined2 *)(pauVar42[1] + 8) = 0;
            *(undefined8 *)pauVar42[2] = 0;
            goto LAB_0011094c;
          }
          uVar55 = uVar55 + 1;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = (uVar54 + 1) * uVar49;
          auVar33._8_8_ = 0;
          auVar33._0_8_ = uVar45;
          lVar46 = SUB168(auVar17 * auVar33,8);
          uVar39 = *(uint *)(lVar53 + lVar46 * 4);
          uVar54 = SUB164(auVar17 * auVar33,8);
        } while ((uVar39 != 0) &&
                (auVar18._8_8_ = 0, auVar18._0_8_ = uVar39 * uVar49, auVar34._8_8_ = 0,
                auVar34._0_8_ = uVar45, auVar19._8_8_ = 0,
                auVar19._0_8_ =
                     ((*(uint *)(hash_table_size_primes + uVar40 * 4) + uVar54) -
                     SUB164(auVar18 * auVar34,8)) * uVar49, auVar35._8_8_ = 0,
                auVar35._0_8_ = uVar45, uVar55 <= SUB164(auVar19 * auVar35,8)));
      }
    }
  }
LAB_001105e3:
  if ((float)uVar52 * __LC44 < (float)(iVar44 + 1)) {
    uVar38 = *(uint *)(this + 0x28);
    if (uVar38 == 0x1c) {
      pauVar42 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0011094c;
    }
    uVar40 = (ulong)(uVar38 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar39 = *(uint *)(hash_table_size_primes + (ulong)uVar38 * 4);
    if (uVar38 + 1 < 2) {
      uVar40 = 2;
    }
    uVar38 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar49 = (ulong)uVar38;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar3 = *(void **)(this + 0x10);
    uVar40 = uVar49 * 4;
    uVar52 = uVar49 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar52,false);
    *(void **)(this + 8) = __s_00;
    if (uVar38 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar52)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar40 != uVar49);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar52);
      }
    }
    if (uVar39 != 0) {
      uVar40 = 0;
      do {
        uVar38 = *(uint *)((long)pvVar3 + uVar40 * 4);
        if (uVar38 != 0) {
          lVar53 = *(long *)(this + 0x10);
          uVar55 = 0;
          uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar52 = CONCAT44(0,uVar37);
          lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)uVar38 * lVar46;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar52;
          lVar47 = SUB168(auVar8 * auVar24,8);
          puVar1 = (uint *)(lVar53 + lVar47 * 4);
          iVar44 = SUB164(auVar8 * auVar24,8);
          uVar54 = *puVar1;
          uVar41 = *(undefined8 *)((long)local_70 + uVar40 * 8);
          while (uVar54 != 0) {
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar54 * lVar46;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar52;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)((uVar37 + iVar44) - SUB164(auVar9 * auVar25,8)) * lVar46;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar52;
            uVar51 = SUB164(auVar10 * auVar26,8);
            uVar50 = uVar41;
            if (uVar51 < uVar55) {
              *puVar1 = uVar38;
              puVar2 = (undefined8 *)((long)__s_00 + lVar47 * 8);
              uVar50 = *puVar2;
              *puVar2 = uVar41;
              uVar38 = uVar54;
              uVar55 = uVar51;
            }
            uVar55 = uVar55 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)(iVar44 + 1) * lVar46;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar52;
            lVar47 = SUB168(auVar11 * auVar27,8);
            puVar1 = (uint *)(lVar53 + lVar47 * 4);
            iVar44 = SUB164(auVar11 * auVar27,8);
            uVar41 = uVar50;
            uVar54 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar47 * 8) = uVar41;
          *puVar1 = uVar38;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar39 != uVar40);
      Memory::free_static(local_70,false);
      Memory::free_static(pvVar3,false);
    }
  }
  iVar44 = *param_1;
  pauVar42 = (undefined1 (*) [16])operator_new(0x28,"");
  *(int *)pauVar42[1] = iVar44;
  *(undefined2 *)(pauVar42[1] + 8) = 0;
  *(undefined8 *)pauVar42[2] = 0;
  *pauVar42 = (undefined1  [16])0x0;
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar42;
  }
  else {
    *puVar2 = pauVar42;
    *(undefined8 **)(*pauVar42 + 8) = puVar2;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar42;
  uVar38 = ((uint)*param_1 >> 0x10 ^ *param_1) * -0x7a143595;
  uVar39 = (uVar38 ^ uVar38 >> 0xd) * -0x3d4d51cb;
  uVar38 = uVar39 ^ uVar39 >> 0x10;
  if (uVar39 == uVar39 >> 0x10) {
    uVar40 = 1;
    uVar38 = 1;
  }
  else {
    uVar40 = (ulong)uVar38;
  }
  uVar54 = 0;
  lVar53 = *(long *)(this + 0x10);
  lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar52 = CONCAT44(0,uVar39);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar40 * lVar46;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar52;
  lVar48 = SUB168(auVar12 * auVar28,8);
  lVar47 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar53 + lVar48 * 4);
  iVar44 = SUB164(auVar12 * auVar28,8);
  uVar37 = *puVar1;
  pauVar36 = pauVar42;
  while (uVar37 != 0) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)uVar37 * lVar46;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar52;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)((uVar39 + iVar44) - SUB164(auVar13 * auVar29,8)) * lVar46;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar52;
    uVar55 = SUB164(auVar14 * auVar30,8);
    pauVar56 = pauVar36;
    if (uVar55 < uVar54) {
      *puVar1 = uVar38;
      puVar2 = (undefined8 *)(lVar47 + lVar48 * 8);
      pauVar56 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar36;
      uVar38 = uVar37;
      uVar54 = uVar55;
    }
    uVar54 = uVar54 + 1;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)(iVar44 + 1) * lVar46;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar52;
    lVar48 = SUB168(auVar15 * auVar31,8);
    puVar1 = (uint *)(lVar53 + lVar48 * 4);
    iVar44 = SUB164(auVar15 * auVar31,8);
    pauVar36 = pauVar56;
    uVar37 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar47 + lVar48 * 8) = pauVar36;
  *puVar1 = uVar38;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0011094c:
  return pauVar42[1] + 8;
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
    if (lVar34 != 0) goto LAB_00110caa;
  }
  else {
    uVar31 = *in_RDX;
    uVar42 = *(uint *)((long)in_RSI + 0x24);
LAB_00110caa:
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
            if (*(uint *)(lVar34 + (long)plStack_98 * 4) == uVar31) goto LAB_00110d9f;
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
  if ((float)uVar30 * __LC44 < (float)(uVar42 + 1)) {
    if ((int)in_RSI[4] == 0x1c) {
      plStack_98 = (long *)0x0;
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0);
      uVar42 = *(uint *)((long)in_RSI + 0x24);
      lVar34 = *in_RSI;
      uVar32 = 0xffffffff;
      goto LAB_00110d9f;
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
LAB_00110d9f:
  param_1[3] = uVar32;
  *(long *)param_1 = lVar34;
  param_1[2] = uVar42;
  auVar48._8_8_ = plStack_98;
  auVar48._0_8_ = param_1;
  return auVar48;
}



/* Callable create_custom_callable_function_pointer<SceneMultiplayer, int>(SceneMultiplayer*, char
   const*, void (SceneMultiplayer::*)(int)) */

SceneMultiplayer *
create_custom_callable_function_pointer<SceneMultiplayer,int>
          (SceneMultiplayer *param_1,char *param_2,_func_void_int *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC36;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0011eb50;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_int **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
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



/* SceneCacheInterface::_initialize_classv() */

void SceneCacheInterface::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (RefCounted::initialize_class()::initialized == '\0') {
      Object::initialize_class();
      local_58 = 0;
      local_40 = 6;
      local_48 = "Object";
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "RefCounted";
      local_60 = 0;
      local_40 = 10;
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
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
        RefCounted::_bind_methods();
      }
      RefCounted::initialize_class()::initialized = '\x01';
    }
    local_48 = "RefCounted";
    local_58 = 0;
    local_40 = 10;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "SceneCacheInterface";
    local_60 = 0;
    local_40 = 0x13;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
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
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
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
    initialize_class()::initialized = '\x01';
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00111768) */
/* WARNING: Removing unreachable block (ram,0x001118fd) */
/* WARNING: Removing unreachable block (ram,0x00111909) */
/* String vformat<Error>(String const&, Error const) */

undefined8 * vformat<Error>(undefined8 *param_1,bool *param_2,int param_3)

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



/* SceneRPCInterface::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
SceneRPCInterface::_get_property_listv(SceneRPCInterface *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  StringName *local_a0;
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
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "SceneRPCInterface";
  local_70 = 0x11;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "SceneRPCInterface";
  local_98 = 0;
  local_70 = 0x11;
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
LAB_00111ae8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00111ae8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00111b0a;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00111b0a:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  local_a0 = (StringName *)&local_68;
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),local_a0);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"SceneRPCInterface",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* godot::details::enum_qualified_name_to_class_info_name(String const&) */

details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  long local_60;
  char local_58 [8];
  long *local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::split(local_58,SUB81(param_1,0),0x111d97);
  if ((local_50 != (long *)0x0) && (2 < local_50[-1])) {
    local_60 = 0;
    local_48 = &_LC52;
    local_40 = 1;
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == (long *)0x0) {
      lVar7 = 0;
      lVar6 = -2;
    }
    else {
      lVar7 = local_50[-1];
      lVar6 = lVar7 + -2;
      if (-1 < lVar6) {
        String::operator+((String *)&local_48,(String *)(local_50 + lVar6));
        String::operator+((String *)this,(String *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        goto LAB_00111e6d;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar7,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  local_60 = 0;
  local_48 = &_LC52;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join(this);
  lVar7 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
  }
LAB_00111e6d:
  plVar1 = local_50;
  if (local_50 != (long *)0x0) {
    LOCK();
    plVar5 = local_50 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_50 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar7 = local_50[-1];
      local_50 = (long *)0x0;
      if (lVar7 != 0) {
        lVar6 = 0;
        plVar5 = plVar1;
        do {
          if (*plVar5 != 0) {
            LOCK();
            plVar2 = (long *)(*plVar5 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar3 = *plVar5;
              *plVar5 = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar7 != lVar6);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<SceneMultiplayer, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<SceneMultiplayer,void,int>::call
          (CallableCustomMethodPointer<SceneMultiplayer,void,int> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  ulong *puVar8;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar9;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar7 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar3 << 8);
      LOCK();
      bVar9 = (char)ObjectDB::spin_lock == '\0';
      if (bVar9) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar9) break;
      local_48 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar8 = (ulong *)((ulong)uVar7 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar8 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00112248;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar8[1] == 0) goto LAB_00112248;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,2);
        uVar4 = _LC84;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar6 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001121f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar6);
          return;
        }
        goto LAB_0011230a;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 1;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 1;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00112248:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC83,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0011230a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OfflineMultiplayerPeer::_initialize_classv() */

void OfflineMultiplayerPeer::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (MultiplayerPeer::initialize_class()::initialized == '\0') {
      if (PacketPeer::initialize_class()::initialized == '\0') {
        if (RefCounted::initialize_class()::initialized == '\0') {
          Object::initialize_class();
          local_68 = 0;
          local_50 = 6;
          local_58 = "Object";
          String::parse_latin1((StrRange *)&local_68);
          StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
          local_58 = "RefCounted";
          local_70 = 0;
          local_50 = 10;
          String::parse_latin1((StrRange *)&local_70);
          StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
          if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          if ((code *)PTR__bind_methods_00125010 != RefCounted::_bind_methods) {
            RefCounted::_bind_methods();
          }
          RefCounted::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "RefCounted";
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "PacketPeer";
        local_70 = 0;
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        PacketPeer::_bind_methods();
        PacketPeer::initialize_class()::initialized = '\x01';
      }
      local_58 = "PacketPeer";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "MultiplayerPeer";
      local_70 = 0;
      local_50 = 0xf;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)PTR__bind_methods_00125008 != PacketPeer::_bind_methods) {
        MultiplayerPeer::_bind_methods();
      }
      MultiplayerPeer::initialize_class()::initialized = '\x01';
    }
    local_58 = "MultiplayerPeer";
    local_68 = 0;
    local_50 = 0xf;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "OfflineMultiplayerPeer";
    local_70 = 0;
    local_50 = 0x16;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneReplicationInterface::_initialize_classv() */

void SceneReplicationInterface::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (RefCounted::initialize_class()::initialized == '\0') {
      Object::initialize_class();
      local_58 = 0;
      local_40 = 6;
      local_48 = "Object";
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "RefCounted";
      local_60 = 0;
      local_40 = 10;
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
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
        RefCounted::_bind_methods();
      }
      RefCounted::initialize_class()::initialized = '\x01';
    }
    local_48 = "RefCounted";
    local_58 = 0;
    local_40 = 10;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "SceneReplicationInterface";
    local_60 = 0;
    local_40 = 0x19;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
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
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
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
    initialize_class()::initialized = '\x01';
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* SceneRPCInterface::_initialize_classv() */

void SceneRPCInterface::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (RefCounted::initialize_class()::initialized == '\0') {
      Object::initialize_class();
      local_58 = 0;
      local_40 = 6;
      local_48 = "Object";
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "RefCounted";
      local_60 = 0;
      local_40 = 10;
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
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
        RefCounted::_bind_methods();
      }
      RefCounted::initialize_class()::initialized = '\x01';
    }
    local_48 = "RefCounted";
    local_58 = 0;
    local_40 = 10;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "SceneRPCInterface";
    local_60 = 0;
    local_40 = 0x11;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
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
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
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
    initialize_class()::initialized = '\x01';
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<int>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != 0) goto LAB_00112c7b;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC36;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,2);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00112d70:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00112d70;
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
LAB_00112c7b:
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
  if (in_EDX != 0) goto LAB_00112ebb;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC36;
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
LAB_00112fb0:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00112fb0;
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
LAB_00112ebb:
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
  if (in_EDX != 0) goto LAB_001130fb;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC36;
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
LAB_001131f0:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_001131f0;
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
LAB_001130fb:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
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
  if (in_EDX != 0) goto LAB_0011333b;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC36;
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
LAB_00113430:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00113430;
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
LAB_0011333b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
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
  if (in_EDX != 0) goto LAB_0011357b;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC36;
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
LAB_00113670:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00113670;
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
LAB_0011357b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBind* create_method_bind<SceneMultiplayer, NodePath const&>(void
   (SceneMultiplayer::*)(NodePath const&)) */

MethodBind * create_method_bind<SceneMultiplayer,NodePath_const&>(_func_void_NodePath_ptr *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0011ebe0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "SceneMultiplayer";
  local_30 = 0x10;
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



/* MethodBind* create_method_bind<SceneMultiplayer, NodePath>(NodePath (SceneMultiplayer::*)()
   const) */

MethodBind * create_method_bind<SceneMultiplayer,NodePath>(_func_NodePath *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0011ec40;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "SceneMultiplayer";
  local_30 = 0x10;
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



/* MethodBind* create_method_bind<SceneMultiplayer>(void (SceneMultiplayer::*)()) */

MethodBind * create_method_bind<SceneMultiplayer>(_func_void *param_1)

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
  *(_func_void **)(this + 0x58) = param_1;
  *(undefined8 *)(this + 0x60) = in_RSI;
  *(undefined ***)this = &PTR__gen_argument_type_0011eca0;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "SceneMultiplayer";
  local_30 = 0x10;
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



/* MethodBind* create_method_bind<SceneMultiplayer, int>(void (SceneMultiplayer::*)(int)) */

MethodBind * create_method_bind<SceneMultiplayer,int>(_func_void_int *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0011ed00;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "SceneMultiplayer";
  local_30 = 0x10;
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



/* MethodBind* create_method_bind<SceneMultiplayer, Vector<int>>(Vector<int>
   (SceneMultiplayer::*)()) */

MethodBind * create_method_bind<SceneMultiplayer,Vector<int>>(_func_Vector *param_1)

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
  *(_func_Vector **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011ed60;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "SceneMultiplayer";
  local_30 = 0x10;
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



/* MethodBind* create_method_bind<SceneMultiplayer, Error, int, Vector<unsigned char> >(Error
   (SceneMultiplayer::*)(int, Vector<unsigned char>)) */

MethodBind *
create_method_bind<SceneMultiplayer,Error,int,Vector<unsigned_char>>
          (_func_Error_int_Vector *param_1)

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
  *(_func_Error_int_Vector **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011edc0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "SceneMultiplayer";
  local_30 = 0x10;
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



/* MethodBind* create_method_bind<SceneMultiplayer, Error, int>(Error (SceneMultiplayer::*)(int)) */

MethodBind * create_method_bind<SceneMultiplayer,Error,int>(_func_Error_int *param_1)

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
  *(_func_Error_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011ee20;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "SceneMultiplayer";
  local_30 = 0x10;
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



/* MethodBind* create_method_bind<SceneMultiplayer, Callable>(void (SceneMultiplayer::*)(Callable))
    */

MethodBind * create_method_bind<SceneMultiplayer,Callable>(_func_void_Callable *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0011ee80;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "SceneMultiplayer";
  local_30 = 0x10;
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



/* MethodBind* create_method_bind<SceneMultiplayer, Callable>(Callable (SceneMultiplayer::*)()
   const) */

MethodBind * create_method_bind<SceneMultiplayer,Callable>(_func_Callable *param_1)

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
  *(_func_Callable **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011eee0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "SceneMultiplayer";
  local_30 = 0x10;
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



/* MethodBind* create_method_bind<SceneMultiplayer, double>(void (SceneMultiplayer::*)(double)) */

MethodBind * create_method_bind<SceneMultiplayer,double>(_func_void_double *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0011ef40;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "SceneMultiplayer";
  local_30 = 0x10;
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



/* MethodBind* create_method_bind<SceneMultiplayer, double>(double (SceneMultiplayer::*)() const) */

MethodBind * create_method_bind<SceneMultiplayer,double>(_func_double *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0011efa0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "SceneMultiplayer";
  local_30 = 0x10;
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



/* MethodBind* create_method_bind<SceneMultiplayer, bool>(void (SceneMultiplayer::*)(bool)) */

MethodBind * create_method_bind<SceneMultiplayer,bool>(_func_void_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0011f000;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "SceneMultiplayer";
  local_30 = 0x10;
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



/* MethodBind* create_method_bind<SceneMultiplayer, bool>(bool (SceneMultiplayer::*)() const) */

MethodBind * create_method_bind<SceneMultiplayer,bool>(_func_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0011f060;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "SceneMultiplayer";
  local_30 = 0x10;
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



/* MethodBind* create_method_bind<SceneMultiplayer, Error, Vector<unsigned char>, int,
   MultiplayerPeer::TransferMode, int>(Error (SceneMultiplayer::*)(Vector<unsigned char>, int,
   MultiplayerPeer::TransferMode, int)) */

MethodBind *
create_method_bind<SceneMultiplayer,Error,Vector<unsigned_char>,int,MultiplayerPeer::TransferMode,int>
          (_func_Error_Vector_int_TransferMode_int *param_1)

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
  *(_func_Error_Vector_int_TransferMode_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011f0c0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 4;
  local_40 = 0;
  local_38 = "SceneMultiplayer";
  local_30 = 0x10;
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



/* MethodBind* create_method_bind<SceneMultiplayer, int>(int (SceneMultiplayer::*)() const) */

MethodBind * create_method_bind<SceneMultiplayer,int>(_func_int *param_1)

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
  *(_func_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011f120;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "SceneMultiplayer";
  local_30 = 0x10;
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



/* SceneMultiplayer::_initialize_classv() */

void SceneMultiplayer::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (MultiplayerAPI::initialize_class()::initialized == '\0') {
      if (RefCounted::initialize_class()::initialized == '\0') {
        Object::initialize_class();
        local_68 = 0;
        local_50 = 6;
        local_58 = "Object";
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "RefCounted";
        local_70 = 0;
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        if ((code *)PTR__bind_methods_00125010 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_58 = "RefCounted";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "MultiplayerAPI";
      local_70 = 0;
      local_50 = 0xe;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)PTR__bind_methods_00125018 != RefCounted::_bind_methods) {
        MultiplayerAPI::_bind_methods();
      }
      MultiplayerAPI::initialize_class()::initialized = '\x01';
    }
    local_58 = "MultiplayerAPI";
    local_68 = 0;
    local_50 = 0xe;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "SceneMultiplayer";
    local_70 = 0;
    local_50 = 0x10;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<unsigned char>::_unref() */

void __thiscall CowData<unsigned_char>::_unref(CowData<unsigned_char> *this)

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



/* CowData<int>::_realloc(long) */

undefined8 __thiscall CowData<int>::_realloc(CowData<int> *this,long param_1)

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
/* Error CowData<int>::resize<false>(long) */

undefined8 __thiscall CowData<int>::resize<false>(CowData<int> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar9 = 0;
    lVar3 = 0;
  }
  else {
    lVar9 = *(long *)(lVar3 + -8);
    if (param_1 == lVar9) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return 0;
    }
    _copy_on_write(this);
    lVar3 = lVar9 * 4;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 4 == 0) {
LAB_00114fa0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 4 - 1;
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar8 = uVar4 + 1;
  if (lVar8 == 0) goto LAB_00114fa0;
  if (lVar9 < param_1) {
    if (lVar8 != lVar3) {
      if (lVar9 == 0) {
        puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
        if (puVar5 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
          return 6;
        }
        puVar7 = puVar5 + 2;
        *puVar5 = 1;
        puVar5[1] = 0;
        *(undefined8 **)this = puVar7;
        goto LAB_00114eb1;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00114eb1:
      puVar7[-1] = param_1;
      return 0;
    }
  }
  else {
    if ((lVar8 != lVar3) && (uVar6 = _realloc(this,lVar8), (int)uVar6 != 0)) {
      return uVar6;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
  }
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* CowData<unsigned char>::_realloc(long) */

undefined8 __thiscall CowData<unsigned_char>::_realloc(CowData<unsigned_char> *this,long param_1)

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



/* void memdelete<HashMapElement<ObjectID, SceneCacheInterface::NodeCache>
   >(HashMapElement<ObjectID, SceneCacheInterface::NodeCache>*) */

void memdelete<HashMapElement<ObjectID,SceneCacheInterface::NodeCache>>(HashMapElement *param_1)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(param_1 + 0x58);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(param_1 + 0x7c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x78) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(param_1 + 0x7c) = 0;
        *(undefined1 (*) [16])(param_1 + 0x68) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(param_1 + 0x60) + lVar2) != 0) {
            *(int *)(*(long *)(param_1 + 0x60) + lVar2) = 0;
            Memory::free_static(*(void **)((long)pvVar3 + lVar2 * 2),false);
            pvVar3 = *(void **)(param_1 + 0x58);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while ((ulong)uVar1 << 2 != lVar2);
        *(undefined4 *)(param_1 + 0x7c) = 0;
        *(undefined1 (*) [16])(param_1 + 0x68) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_0011510b;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(param_1 + 0x60),false);
  }
LAB_0011510b:
  pvVar3 = *(void **)(param_1 + 0x28);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(param_1 + 0x4c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x48) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(param_1 + 0x4c) = 0;
        *(undefined1 (*) [16])(param_1 + 0x38) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(param_1 + 0x30) + lVar2) != 0) {
            *(int *)(*(long *)(param_1 + 0x30) + lVar2) = 0;
            Memory::free_static(*(void **)((long)pvVar3 + lVar2 * 2),false);
            pvVar3 = *(void **)(param_1 + 0x28);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(param_1 + 0x4c) = 0;
        *(undefined1 (*) [16])(param_1 + 0x38) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_00115187;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(param_1 + 0x30),false);
    Memory::free_static(param_1,false);
    return;
  }
LAB_00115187:
  Memory::free_static(param_1,false);
  return;
}



/* void memdelete<HashMapElement<int, SceneCacheInterface::PeerInfo> >(HashMapElement<int,
   SceneCacheInterface::PeerInfo>*) */

void memdelete<HashMapElement<int,SceneCacheInterface::PeerInfo>>(HashMapElement *param_1)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(param_1 + 0x48);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(param_1 + 0x6c) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x68) * 4) != 0) {
        memset(*(void **)(param_1 + 0x60),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x68) * 4) << 2)
        ;
      }
      *(undefined4 *)(param_1 + 0x6c) = 0;
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(param_1 + 0x58),false);
    Memory::free_static(*(void **)(param_1 + 0x50),false);
    Memory::free_static(*(void **)(param_1 + 0x60),false);
  }
  pvVar3 = *(void **)(param_1 + 0x20);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(param_1 + 0x44) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x40) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(param_1 + 0x44) = 0;
        *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(param_1 + 0x28) + lVar2) != 0) {
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            *(int *)(*(long *)(param_1 + 0x28) + lVar2) = 0;
            NodePath::~NodePath((NodePath *)((long)pvVar3 + 0x20));
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(param_1 + 0x20);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while ((ulong)uVar1 << 2 != lVar2);
        *(undefined4 *)(param_1 + 0x44) = 0;
        *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_001152f3;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(param_1 + 0x28),false);
  }
LAB_001152f3:
  Memory::free_static(param_1,false);
  return;
}



/* SceneCacheInterface::~SceneCacheInterface() */

void __thiscall SceneCacheInterface::~SceneCacheInterface(SceneCacheInterface *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_0011e360;
  pvVar3 = *(void **)(this + 0x1f0);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x214) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x210) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x214) = 0;
        *(undefined1 (*) [16])(this + 0x200) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x1f8) + lVar2) != 0) {
            *(int *)(*(long *)(this + 0x1f8) + lVar2) = 0;
            memdelete<HashMapElement<int,SceneCacheInterface::PeerInfo>>
                      (*(HashMapElement **)((long)pvVar3 + lVar2 * 2));
            pvVar3 = *(void **)(this + 0x1f0);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while ((ulong)uVar1 << 2 != lVar2);
        *(undefined4 *)(this + 0x214) = 0;
        *(undefined1 (*) [16])(this + 0x200) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_001153ef;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x1f8),false);
  }
LAB_001153ef:
  pvVar3 = *(void **)(this + 0x1c0);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x1e4) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e0) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x1e4) = 0;
        *(undefined1 (*) [16])(this + 0x1d0) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x1c8) + lVar2) != 0) {
            *(int *)(*(long *)(this + 0x1c8) + lVar2) = 0;
            Memory::free_static(*(void **)((long)pvVar3 + lVar2 * 2),false);
            pvVar3 = *(void **)(this + 0x1c0);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while ((ulong)uVar1 << 2 != lVar2);
        *(undefined4 *)(this + 0x1e4) = 0;
        *(undefined1 (*) [16])(this + 0x1d0) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_00115487;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x1c8),false);
  }
LAB_00115487:
  pvVar3 = *(void **)(this + 400);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x1b4) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1b0) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x1b4) = 0;
        *(undefined1 (*) [16])(this + 0x1a0) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x198) + lVar2) != 0) {
            *(int *)(*(long *)(this + 0x198) + lVar2) = 0;
            memdelete<HashMapElement<ObjectID,SceneCacheInterface::NodeCache>>
                      (*(HashMapElement **)((long)pvVar3 + lVar2 * 2));
            pvVar3 = *(void **)(this + 400);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x1b4) = 0;
        *(undefined1 (*) [16])(this + 0x1a0) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_00115511;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x198),false);
  }
LAB_00115511:
  *(undefined ***)this = &PTR__initialize_classv_0011e200;
  Object::~Object((Object *)this);
  return;
}



/* SceneCacheInterface::~SceneCacheInterface() */

void __thiscall SceneCacheInterface::~SceneCacheInterface(SceneCacheInterface *this)

{
  ~SceneCacheInterface(this);
  operator_delete(this,0x220);
  return;
}



/* void memdelete<HashMapElement<int, SceneReplicationInterface::PeerInfo> >(HashMapElement<int,
   SceneReplicationInterface::PeerInfo>*) */

void memdelete<HashMapElement<int,SceneReplicationInterface::PeerInfo>>(HashMapElement *param_1)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(param_1 + 0xd0);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(param_1 + 0xf4) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0xf0) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(param_1 + 0xf4) = 0;
        *(undefined1 (*) [16])(param_1 + 0xe0) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(param_1 + 0xd8) + lVar2) != 0) {
            *(int *)(*(long *)(param_1 + 0xd8) + lVar2) = 0;
            Memory::free_static(*(void **)((long)pvVar3 + lVar2 * 2),false);
            pvVar3 = *(void **)(param_1 + 0xd0);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while ((ulong)uVar1 << 2 != lVar2);
        *(undefined4 *)(param_1 + 0xf4) = 0;
        *(undefined1 (*) [16])(param_1 + 0xe0) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_00115699;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(param_1 + 0xd8),false);
  }
LAB_00115699:
  pvVar3 = *(void **)(param_1 + 0xa0);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(param_1 + 0xc4) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0xc0) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(param_1 + 0xc4) = 0;
        *(undefined1 (*) [16])(param_1 + 0xb0) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(param_1 + 0xa8) + lVar2) != 0) {
            *(int *)(*(long *)(param_1 + 0xa8) + lVar2) = 0;
            Memory::free_static(*(void **)((long)pvVar3 + lVar2 * 2),false);
            pvVar3 = *(void **)(param_1 + 0xa0);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while ((ulong)uVar1 << 2 != lVar2);
        *(undefined4 *)(param_1 + 0xc4) = 0;
        *(undefined1 (*) [16])(param_1 + 0xb0) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_00115739;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(param_1 + 0xa8),false);
  }
LAB_00115739:
  pvVar3 = *(void **)(param_1 + 0x70);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(param_1 + 0x94) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x90) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(param_1 + 0x94) = 0;
        *(undefined1 (*) [16])(param_1 + 0x80) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(param_1 + 0x78) + lVar2) != 0) {
            *(int *)(*(long *)(param_1 + 0x78) + lVar2) = 0;
            Memory::free_static(*(void **)((long)pvVar3 + lVar2 * 2),false);
            pvVar3 = *(void **)(param_1 + 0x70);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(param_1 + 0x94) = 0;
        *(undefined1 (*) [16])(param_1 + 0x80) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_001157c1;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(param_1 + 0x78),false);
  }
LAB_001157c1:
  pvVar3 = *(void **)(param_1 + 0x40);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(param_1 + 100) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x60) * 4) != 0) {
        memset(*(void **)(param_1 + 0x58),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x60) * 4) << 2)
        ;
      }
      *(undefined4 *)(param_1 + 100) = 0;
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(param_1 + 0x50),false);
    Memory::free_static(*(void **)(param_1 + 0x48),false);
    Memory::free_static(*(void **)(param_1 + 0x58),false);
  }
  pvVar3 = *(void **)(param_1 + 0x18);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(param_1 + 0x3c) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x38) * 4) != 0) {
        memset(*(void **)(param_1 + 0x30),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x38) * 4) << 2)
        ;
      }
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(param_1 + 0x28),false);
    Memory::free_static(*(void **)(param_1 + 0x20),false);
    Memory::free_static(*(void **)(param_1 + 0x30),false);
  }
  Memory::free_static(param_1,false);
  return;
}



/* SceneReplicationInterface::~SceneReplicationInterface() */

void __thiscall
SceneReplicationInterface::~SceneReplicationInterface(SceneReplicationInterface *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  long lVar5;
  void *pvVar6;
  
  *(undefined ***)this = &PTR__initialize_classv_0011e4c0;
  if (*(long *)(this + 0x2a0) != 0) {
    LOCK();
    plVar4 = (long *)(*(long *)(this + 0x2a0) + -0x10);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      lVar5 = *(long *)(this + 0x2a0);
      *(undefined8 *)(this + 0x2a0) = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  plVar4 = *(long **)(this + 0x280);
  if (plVar4 != (long *)0x0) {
    do {
      pvVar6 = (void *)*plVar4;
      if (pvVar6 == (void *)0x0) {
        if ((int)plVar4[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_001159eb;
        }
        break;
      }
      if (*(long **)((long)pvVar6 + 0x18) == plVar4) {
        lVar5 = *(long *)((long)pvVar6 + 8);
        lVar2 = *(long *)((long)pvVar6 + 0x10);
        *plVar4 = lVar5;
        if (pvVar6 == (void *)plVar4[1]) {
          plVar4[1] = lVar2;
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 8) = lVar5;
          lVar5 = *(long *)((long)pvVar6 + 8);
        }
        if (lVar5 != 0) {
          *(long *)(lVar5 + 0x10) = lVar2;
        }
        Memory::free_static(pvVar6,false);
        *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar4 = *(long **)(this + 0x280);
    } while ((int)plVar4[2] != 0);
    Memory::free_static(plVar4,false);
  }
LAB_001159eb:
  pvVar6 = *(void **)(this + 0x238);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0x25c) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 600) * 4) != 0) {
        memset(*(void **)(this + 0x250),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 600) * 4) * 4);
      }
      *(undefined4 *)(this + 0x25c) = 0;
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0x248),false);
    Memory::free_static(*(void **)(this + 0x240),false);
    Memory::free_static(*(void **)(this + 0x250),false);
  }
  pvVar6 = *(void **)(this + 0x210);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0x234) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x230) * 4) != 0) {
        memset(*(void **)(this + 0x228),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x230) * 4) * 4);
      }
      *(undefined4 *)(this + 0x234) = 0;
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0x220),false);
    Memory::free_static(*(void **)(this + 0x218),false);
    Memory::free_static(*(void **)(this + 0x228),false);
  }
  pvVar6 = *(void **)(this + 0x1e8);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0x20c) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x208) * 4) != 0) {
        memset(*(void **)(this + 0x200),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x208) * 4) * 4);
      }
      *(undefined4 *)(this + 0x20c) = 0;
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0x1f8),false);
    Memory::free_static(*(void **)(this + 0x1f0),false);
    Memory::free_static(*(void **)(this + 0x200),false);
  }
  pvVar6 = *(void **)(this + 0x1c0);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0x1e4) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e0) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x1e4) = 0;
        *(undefined1 (*) [16])(this + 0x1d0) = (undefined1  [16])0x0;
      }
      else {
        lVar5 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x1c8) + lVar5) != 0) {
            pvVar6 = *(void **)((long)pvVar6 + lVar5 * 2);
            *(int *)(*(long *)(this + 0x1c8) + lVar5) = 0;
            pvVar3 = *(void **)((long)pvVar6 + 0x30);
            if (pvVar3 != (void *)0x0) {
              if (*(int *)((long)pvVar6 + 0x54) != 0) {
                if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)((long)pvVar6 + 0x50) * 4) !=
                    0) {
                  memset(*(void **)((long)pvVar6 + 0x48),0,
                         (ulong)*(uint *)(hash_table_size_primes +
                                         (ulong)*(uint *)((long)pvVar6 + 0x50) * 4) << 2);
                }
                *(undefined4 *)((long)pvVar6 + 0x54) = 0;
              }
              Memory::free_static(pvVar3,false);
              Memory::free_static(*(void **)((long)pvVar6 + 0x40),false);
              Memory::free_static(*(void **)((long)pvVar6 + 0x38),false);
              Memory::free_static(*(void **)((long)pvVar6 + 0x48),false);
            }
            Memory::free_static(pvVar6,false);
            pvVar6 = *(void **)(this + 0x1c0);
            *(undefined8 *)((long)pvVar6 + lVar5 * 2) = 0;
          }
          lVar5 = lVar5 + 4;
        } while ((ulong)uVar1 << 2 != lVar5);
        *(undefined4 *)(this + 0x1e4) = 0;
        *(undefined1 (*) [16])(this + 0x1d0) = (undefined1  [16])0x0;
        if (pvVar6 == (void *)0x0) goto LAB_00115c8a;
      }
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0x1c8),false);
  }
LAB_00115c8a:
  pvVar6 = *(void **)(this + 0x188);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0x1ac) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a8) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
      }
      else {
        lVar5 = 0;
        do {
          if (*(int *)(*(long *)(this + 400) + lVar5) != 0) {
            *(int *)(*(long *)(this + 400) + lVar5) = 0;
            memdelete<HashMapElement<int,SceneReplicationInterface::PeerInfo>>
                      (*(HashMapElement **)((long)pvVar6 + lVar5 * 2));
            pvVar6 = *(void **)(this + 0x188);
            *(undefined8 *)((long)pvVar6 + lVar5 * 2) = 0;
          }
          lVar5 = lVar5 + 4;
        } while (lVar5 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
        if (pvVar6 == (void *)0x0) goto LAB_00115d21;
      }
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 400),false);
  }
LAB_00115d21:
  *(undefined ***)this = &PTR__initialize_classv_0011e200;
  Object::~Object((Object *)this);
  return;
}



/* SceneReplicationInterface::~SceneReplicationInterface() */

void __thiscall
SceneReplicationInterface::~SceneReplicationInterface(SceneReplicationInterface *this)

{
  ~SceneReplicationInterface(this);
  operator_delete(this,0x2b0);
  return;
}



/* void memdelete<HashMapElement<ObjectID, SceneRPCInterface::RPCConfigCache>
   >(HashMapElement<ObjectID, SceneRPCInterface::RPCConfigCache>*) */

void memdelete<HashMapElement<ObjectID,SceneRPCInterface::RPCConfigCache>>(HashMapElement *param_1)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  bool bVar4;
  
  pvVar3 = *(void **)(param_1 + 0x50);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(param_1 + 0x74) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x70) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(param_1 + 0x74) = 0;
        *(undefined1 (*) [16])(param_1 + 0x60) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(param_1 + 0x58) + lVar2) != 0) {
            bVar4 = StringName::configured != '\0';
            *(int *)(*(long *)(param_1 + 0x58) + lVar2) = 0;
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            if ((bVar4) && (*(long *)((long)pvVar3 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(param_1 + 0x50);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while ((ulong)uVar1 << 2 != lVar2);
        *(undefined4 *)(param_1 + 0x74) = 0;
        *(undefined1 (*) [16])(param_1 + 0x60) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_00115f2e;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(param_1 + 0x58),false);
  }
LAB_00115f2e:
  pvVar3 = *(void **)(param_1 + 0x20);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(param_1 + 0x44) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x40) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(param_1 + 0x44) = 0;
        *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(param_1 + 0x28) + lVar2) != 0) {
            bVar4 = StringName::configured != '\0';
            *(int *)(*(long *)(param_1 + 0x28) + lVar2) = 0;
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            if ((bVar4) && (*(long *)((long)pvVar3 + 0x18) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(param_1 + 0x20);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(param_1 + 0x44) = 0;
        *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_00115fd2;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(param_1 + 0x28),false);
  }
LAB_00115fd2:
  Memory::free_static(param_1,false);
  return;
}



/* SceneRPCInterface::~SceneRPCInterface() */

void __thiscall SceneRPCInterface::~SceneRPCInterface(SceneRPCInterface *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_0011e620;
  pvVar4 = *(void **)(this + 0x1b0);
  if (pvVar4 != (void *)0x0) {
    if (*(int *)(this + 0x1d4) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1d0) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x1d4) = 0;
        *(undefined1 (*) [16])(this + 0x1c0) = (undefined1  [16])0x0;
      }
      else {
        lVar3 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x1b8) + lVar3) != 0) {
            *(int *)(*(long *)(this + 0x1b8) + lVar3) = 0;
            memdelete<HashMapElement<ObjectID,SceneRPCInterface::RPCConfigCache>>
                      (*(HashMapElement **)((long)pvVar4 + lVar3 * 2));
            pvVar4 = *(void **)(this + 0x1b0);
            *(undefined8 *)((long)pvVar4 + lVar3 * 2) = 0;
          }
          lVar3 = lVar3 + 4;
        } while (lVar3 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x1d4) = 0;
        *(undefined1 (*) [16])(this + 0x1c0) = (undefined1  [16])0x0;
        if (pvVar4 == (void *)0x0) goto LAB_001160f9;
      }
    }
    Memory::free_static(pvVar4,false);
    Memory::free_static(*(void **)(this + 0x1b8),false);
  }
LAB_001160f9:
  if (*(long *)(this + 0x1a0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1a0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x1a0);
      *(undefined8 *)(this + 0x1a0) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_0011e200;
  Object::~Object((Object *)this);
  return;
}



/* SceneRPCInterface::~SceneRPCInterface() */

void __thiscall SceneRPCInterface::~SceneRPCInterface(SceneRPCInterface *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_0011e620;
  pvVar4 = *(void **)(this + 0x1b0);
  if (pvVar4 != (void *)0x0) {
    if (*(int *)(this + 0x1d4) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1d0) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x1d4) = 0;
        *(undefined1 (*) [16])(this + 0x1c0) = (undefined1  [16])0x0;
      }
      else {
        lVar3 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x1b8) + lVar3) != 0) {
            *(int *)(*(long *)(this + 0x1b8) + lVar3) = 0;
            memdelete<HashMapElement<ObjectID,SceneRPCInterface::RPCConfigCache>>
                      (*(HashMapElement **)((long)pvVar4 + lVar3 * 2));
            pvVar4 = *(void **)(this + 0x1b0);
            *(undefined8 *)((long)pvVar4 + lVar3 * 2) = 0;
          }
          lVar3 = lVar3 + 4;
        } while (lVar3 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x1d4) = 0;
        *(undefined1 (*) [16])(this + 0x1c0) = (undefined1  [16])0x0;
        if (pvVar4 == (void *)0x0) goto LAB_00116229;
      }
    }
    Memory::free_static(pvVar4,false);
    Memory::free_static(*(void **)(this + 0x1b8),false);
  }
LAB_00116229:
  if (*(long *)(this + 0x1a0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1a0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x1a0);
      *(undefined8 *)(this + 0x1a0) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_0011e200;
  Object::~Object((Object *)this);
  operator_delete(this,0x1d8);
  return;
}



/* WARNING: Removing unreachable block (ram,0x001163e8) */
/* WARNING: Removing unreachable block (ram,0x0011657d) */
/* WARNING: Removing unreachable block (ram,0x00116589) */
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



/* MethodBindTRC<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC83,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00116780;
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
LAB_00116780:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<int>::validated_call
          (MethodBindTRC<int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  int iVar1;
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
      goto LAB_00116a24;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(long *)(param_3 + 8) = (long)iVar1;
LAB_00116a24:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<int>::ptrcall(MethodBindTRC<int> *this,Object *param_1,void **param_2,void *param_3)

{
  int iVar1;
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
      goto LAB_00116be3;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(long *)param_3 = (long)iVar1;
LAB_00116be3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, Vector<unsigned char>, int, MultiplayerPeer::TransferMode,
   int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Error,Vector<unsigned_char>,int,MultiplayerPeer::TransferMode,int>::validated_call
          (MethodBindTR<Error,Vector<unsigned_char>,int,MultiplayerPeer::TransferMode,int> *this,
          Object *param_1,Variant **param_2,Variant *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  code *pcVar10;
  long in_FS_OFFSET;
  bool bVar11;
  long local_58;
  undefined8 local_50;
  char *local_48;
  long local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar9 = *(long **)(param_1 + 0x118);
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar9 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_00116e32;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  lVar3 = *(long *)(this + 0x60);
  pcVar10 = *(code **)(this + 0x58);
  if (((ulong)pcVar10 & 1) != 0) {
    pcVar10 = *(code **)(pcVar10 + *(long *)(param_1 + lVar3) + -1);
  }
  uVar4 = *(undefined8 *)(param_2[3] + 8);
  uVar1 = *(undefined4 *)(param_2[2] + 8);
  uVar2 = *(undefined4 *)(param_2[1] + 8);
  lVar5 = *(long *)(*param_2 + 8);
  local_40 = 0;
  lVar6 = *(long *)(lVar5 + 0x18);
  plVar9 = (long *)(lVar6 + -0x10);
  if (lVar6 != 0) {
    do {
      lVar6 = *plVar9;
      if (lVar6 == 0) goto LAB_00116df6;
      LOCK();
      lVar8 = *plVar9;
      bVar11 = lVar6 == lVar8;
      if (bVar11) {
        *plVar9 = lVar6 + 1;
        lVar8 = lVar6;
      }
      UNLOCK();
    } while (!bVar11);
    if (lVar8 != -1) {
      local_40 = *(long *)(lVar5 + 0x18);
    }
  }
LAB_00116df6:
  uVar7 = (*pcVar10)(param_1 + lVar3,(StringName *)&local_48,uVar2,uVar1,uVar4);
  lVar3 = local_40;
  *(ulong *)(param_3 + 8) = (ulong)uVar7;
  if (local_40 != 0) {
    LOCK();
    plVar9 = (long *)(local_40 + -0x10);
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
LAB_00116e32:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTR<Error, Vector<unsigned char>, int, MultiplayerPeer::TransferMode,
   int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Error,Vector<unsigned_char>,int,MultiplayerPeer::TransferMode,int>::ptrcall
          (MethodBindTR<Error,Vector<unsigned_char>,int,MultiplayerPeer::TransferMode,int> *this,
          Object *param_1,void **param_2,void *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  code *pcVar10;
  long in_FS_OFFSET;
  bool bVar11;
  long local_58;
  undefined8 local_50;
  char *local_48;
  long local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar9 = *(long **)(param_1 + 0x118);
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar9 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0011709a;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  lVar3 = *(long *)(this + 0x60);
  pcVar10 = *(code **)(this + 0x58);
  if (((ulong)pcVar10 & 1) != 0) {
    pcVar10 = *(code **)(pcVar10 + *(long *)(param_1 + lVar3) + -1);
  }
  pvVar4 = *param_2;
                    /* WARNING: Load size is inaccurate */
  uVar5 = *param_2[3];
                    /* WARNING: Load size is inaccurate */
  uVar1 = *param_2[2];
                    /* WARNING: Load size is inaccurate */
  uVar2 = *param_2[1];
  local_40 = 0;
  lVar6 = *(long *)((long)pvVar4 + 8);
  plVar9 = (long *)(lVar6 + -0x10);
  if (lVar6 != 0) {
    do {
      lVar6 = *plVar9;
      if (lVar6 == 0) goto LAB_0011705f;
      LOCK();
      lVar8 = *plVar9;
      bVar11 = lVar6 == lVar8;
      if (bVar11) {
        *plVar9 = lVar6 + 1;
        lVar8 = lVar6;
      }
      UNLOCK();
    } while (!bVar11);
    if (lVar8 != -1) {
      local_40 = *(long *)((long)pvVar4 + 8);
    }
  }
LAB_0011705f:
  uVar7 = (*pcVar10)(param_1 + lVar3,(StringName *)&local_48,uVar2,uVar1,uVar5);
  lVar3 = local_40;
  *(ulong *)param_3 = (ulong)uVar7;
  if (local_40 != 0) {
    LOCK();
    plVar9 = (long *)(local_40 + -0x10);
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
LAB_0011709a:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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
      _err_print_error(&_LC83,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001172e0;
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
LAB_001172e0:
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
      goto LAB_001174f2;
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
LAB_001174f2:
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
      goto LAB_001176a1;
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
LAB_001176a1:
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
      goto LAB_001179e1;
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
                    /* WARNING: Could not recover jumptable at 0x0011786d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)param_3 + 8));
    return;
  }
LAB_001179e1:
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
      goto LAB_00117bc9;
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
                    /* WARNING: Could not recover jumptable at 0x00117a52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3 != '\0');
    return;
  }
LAB_00117bc9:
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
      _err_print_error(&_LC83,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00117c90;
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
LAB_00117c90:
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
      goto LAB_00117ea4;
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
LAB_00117ea4:
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
      goto LAB_00118053;
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
LAB_00118053:
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
      goto LAB_00118391;
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
                    /* WARNING: Could not recover jumptable at 0x0011821e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (*(undefined8 *)(*(long *)param_3 + 8),
               (long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00118391:
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
      goto LAB_00118571;
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
                    /* WARNING: Could not recover jumptable at 0x001183fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(**param_3,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00118571:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Callable>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Callable>::call
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
      _err_print_error(&_LC83,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00118650;
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
      (*(code *)pVVar2)((Callable *)&local_58);
      Variant::Variant((Variant *)local_48,(Callable *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      Callable::~Callable((Callable *)&local_58);
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
LAB_00118650:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Callable>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Callable>::validated_call
          (MethodBindTRC<Callable> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      local_48 = (Variant **)0x1165d8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Callable *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Callable *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00118879;
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
  (*pcVar1)((Callable *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Callable::operator=((Callable *)(param_3 + 8),(Callable *)&local_48);
  Callable::~Callable((Callable *)&local_48);
LAB_00118879:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Callable>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Callable>::ptrcall
          (MethodBindTRC<Callable> *this,Object *param_1,void **param_2,void *param_3)

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
      local_48 = (void **)0x1165d8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Callable *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Callable *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00118a4a;
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
  (*pcVar1)((Callable *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Callable::operator=((Callable *)param_3,(Callable *)&local_48);
  Callable::~Callable((Callable *)&local_48);
LAB_00118a4a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
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
      goto LAB_00118c1c;
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
LAB_00118c1c:
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
      goto LAB_00118e09;
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
LAB_00118e09:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Error,int>::validated_call
          (MethodBindTR<Error,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  uint uVar1;
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
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00118feb;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_00118feb:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Error,int>::ptrcall
          (MethodBindTR<Error,int> *this,Object *param_1,void **param_2,void *param_3)

{
  uint uVar1;
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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001191ca;
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
  *(ulong *)param_3 = (ulong)uVar1;
LAB_001191ca:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, int, Vector<unsigned char> >::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTR<Error,int,Vector<unsigned_char>>::validated_call
          (MethodBindTR<Error,int,Vector<unsigned_char>> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_58;
  undefined8 local_50;
  char *local_48;
  long local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar6 = *(long **)(param_1 + 0x118);
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar6 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_00119429;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar7 = *(code **)(this + 0x58);
  lVar1 = *(long *)(this + 0x60);
  if (((ulong)pcVar7 & 1) != 0) {
    pcVar7 = *(code **)(pcVar7 + *(long *)(param_1 + lVar1) + -1);
  }
  lVar2 = *(long *)(param_2[1] + 8);
  local_40 = 0;
  lVar3 = *(long *)(lVar2 + 0x18);
  plVar6 = (long *)(lVar3 + -0x10);
  if (lVar3 != 0) {
    do {
      lVar3 = *plVar6;
      if (lVar3 == 0) goto LAB_001193ed;
      LOCK();
      lVar5 = *plVar6;
      bVar8 = lVar3 == lVar5;
      if (bVar8) {
        *plVar6 = lVar3 + 1;
        lVar5 = lVar3;
      }
      UNLOCK();
    } while (!bVar8);
    if (lVar5 != -1) {
      local_40 = *(long *)(lVar2 + 0x18);
    }
  }
LAB_001193ed:
  uVar4 = (*pcVar7)(param_1 + lVar1,*(undefined4 *)(*param_2 + 8),(StringName *)&local_48);
  lVar1 = local_40;
  *(ulong *)(param_3 + 8) = (ulong)uVar4;
  if (local_40 != 0) {
    LOCK();
    plVar6 = (long *)(local_40 + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
LAB_00119429:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTR<Error, int, Vector<unsigned char> >::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Error,int,Vector<unsigned_char>>::ptrcall
          (MethodBindTR<Error,int,Vector<unsigned_char>> *this,Object *param_1,void **param_2,
          void *param_3)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_58;
  undefined8 local_50;
  char *local_48;
  long local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar6 = *(long **)(param_1 + 0x118);
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar6 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_00119674;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar7 = *(code **)(this + 0x58);
  lVar1 = *(long *)(this + 0x60);
  if (((ulong)pcVar7 & 1) != 0) {
    pcVar7 = *(code **)(pcVar7 + *(long *)(param_1 + lVar1) + -1);
  }
  local_40 = 0;
  pvVar2 = param_2[1];
  lVar3 = *(long *)((long)pvVar2 + 8);
  plVar6 = (long *)(lVar3 + -0x10);
  if (lVar3 != 0) {
    do {
      lVar3 = *plVar6;
      if (lVar3 == 0) goto LAB_00119639;
      LOCK();
      lVar5 = *plVar6;
      bVar8 = lVar3 == lVar5;
      if (bVar8) {
        *plVar6 = lVar3 + 1;
        lVar5 = lVar3;
      }
      UNLOCK();
    } while (!bVar8);
    if (lVar5 != -1) {
      local_40 = *(long *)((long)pvVar2 + 8);
    }
  }
LAB_00119639:
                    /* WARNING: Load size is inaccurate */
  uVar4 = (*pcVar7)(param_1 + lVar1,**param_2,(StringName *)&local_48);
  lVar1 = local_40;
  *(ulong *)param_3 = (ulong)uVar4;
  if (local_40 != 0) {
    LOCK();
    plVar6 = (long *)(local_40 + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
LAB_00119674:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTR<Vector<int>>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<Vector<int>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  Variant *pVVar3;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  long local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
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
      _err_print_error(&_LC83,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00119900;
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
      (*(code *)pVVar3)(&local_58);
      Variant::Variant((Variant *)local_48,(Vector *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      lVar2 = local_50;
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
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
LAB_00119900:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<int>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Vector<int>>::validated_call
          (MethodBindTR<Vector<int>> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Variant **local_48;
  long local_40 [2];
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
    if (local_48 == (Variant **)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x1165d8;
      local_40[0] = 0x35;
      local_50 = 0;
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
      goto LAB_00119b6b;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)(pcVar2 + (long)param_2 + -1);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(long *)(*(long *)(param_3 + 8) + 0x18) != local_40[0]) {
    CowData<int>::_ref((CowData<int> *)(*(long *)(param_3 + 8) + 0x18),(CowData *)local_40);
  }
  lVar1 = local_40[0];
  if (local_40[0] != 0) {
    LOCK();
    plVar3 = (long *)(local_40[0] + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_40[0] = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
LAB_00119b6b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<int>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Vector<int>>::ptrcall
          (MethodBindTR<Vector<int>> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  void **local_48;
  long local_40 [2];
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
    if (local_48 == (void **)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x1165d8;
      local_40[0] = 0x35;
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
      goto LAB_00119d67;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)(pcVar2 + (long)param_2 + -1);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(long *)((long)param_3 + 8) != local_40[0]) {
    CowData<int>::_ref((CowData<int> *)((long)param_3 + 8),(CowData *)local_40);
  }
  lVar1 = local_40[0];
  if (local_40[0] != 0) {
    LOCK();
    plVar3 = (long *)(local_40[0] + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_40[0] = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
LAB_00119d67:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
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
      goto LAB_0011a0a1;
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
                    /* WARNING: Could not recover jumptable at 0x00119f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0011a0a1:
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
      goto LAB_0011a281;
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
                    /* WARNING: Could not recover jumptable at 0x0011a10b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0011a281:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
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
      _err_print_error(&_LC83,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011a3a0;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
      (*(code *)pVVar2)();
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
LAB_0011a3a0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      local_40 = 0x35;
      local_50 = 0;
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
      goto LAB_0011a71f;
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
                    /* WARNING: Could not recover jumptable at 0x0011a5c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011a71f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      local_40 = 0x35;
      local_50 = 0;
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
      goto LAB_0011a8df;
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
                    /* WARNING: Could not recover jumptable at 0x0011a786. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011a8df:
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
      _err_print_error(&_LC83,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011a9c0;
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
LAB_0011a9c0:
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
      local_48 = (Variant **)0x1165d8;
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
      goto LAB_0011abe9;
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
LAB_0011abe9:
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
      local_48 = (void **)0x1165d8;
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
      goto LAB_0011adba;
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
LAB_0011adba:
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
      goto LAB_0011b101;
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
                    /* WARNING: Could not recover jumptable at 0x0011af8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_0011b101:
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
      goto LAB_0011b2e1;
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
                    /* WARNING: Could not recover jumptable at 0x0011b169. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0011b2e1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, int, Vector<unsigned char> >::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Error,int,Vector<unsigned_char>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  Variant *pVVar11;
  Variant *this;
  uint in_R8D;
  undefined4 *in_R9;
  int iVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_68 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC83,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0011b475;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 3) {
    pVVar11 = param_2[5];
    iVar6 = 2 - in_R8D;
    if (pVVar11 == (Variant *)0x0) {
      if (iVar6 != 0) goto LAB_0011b4b8;
      this = *(Variant **)param_4;
LAB_0011b4cd:
      pVVar11 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      iVar12 = (int)lVar2;
      if (iVar12 < iVar6) {
LAB_0011b4b8:
        uVar7 = 4;
        goto LAB_0011b4a5;
      }
      if (in_R8D == 0) {
        lVar9 = (long)(iVar12 + -2);
        if (lVar2 <= lVar9) goto LAB_0011b590;
        this = pVVar11 + lVar9 * 0x18;
      }
      else {
        this = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_0011b4cd;
      }
      lVar9 = (long)(int)((in_R8D ^ 1) + (iVar12 - iVar6));
      if (lVar2 <= lVar9) {
LAB_0011b590:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar13 & 1) != 0) {
      pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,0x1d);
    uVar4 = _LC197;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Vector((Variant *)&local_68);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar4 = _LC84;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(this);
    iVar6 = (*(code *)pVVar13)((Variant *)((long)plVar10 + (long)pVVar1),iVar6,(Variant *)&local_68)
    ;
    Variant::Variant((Variant *)local_58,iVar6);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_60);
  }
  else {
    uVar7 = 3;
LAB_0011b4a5:
    *in_R9 = uVar7;
    in_R9[2] = 2;
  }
LAB_0011b475:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<Error,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_58 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC83,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011b810;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0011b850;
LAB_0011b840:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011b850:
        uVar7 = 4;
        goto LAB_0011b805;
      }
      if (in_R8D == 1) goto LAB_0011b840;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,2);
    uVar4 = _LC84;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar11);
    iVar6 = (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),iVar6);
    Variant::Variant((Variant *)local_48,iVar6);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar7 = 3;
LAB_0011b805:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0011b810:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, Vector<unsigned char>, int, MultiplayerPeer::TransferMode,
   int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<Error,Vector<unsigned_char>,int,MultiplayerPeer::TransferMode,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  uint uVar12;
  undefined4 in_register_00000014;
  long *plVar13;
  Variant *pVVar14;
  long lVar15;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar16;
  long in_FS_OFFSET;
  long local_a8;
  undefined8 local_a0;
  char *local_98;
  long local_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  Variant *local_68 [5];
  long local_40;
  
  plVar13 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar13 != (long *)0x0) && (plVar13[1] != 0)) && (*(char *)(plVar13[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_98,(StringName *)(param_2 + 3));
    if (plVar13[1] == 0) {
      plVar11 = (long *)plVar13[0x23];
      if (plVar11 == (long *)0x0) {
        plVar11 = (long *)(**(code **)(*plVar13 + 0x40))(plVar13);
      }
    }
    else {
      plVar11 = (long *)(plVar13[1] + 0x20);
    }
    if (local_98 == (char *)*plVar11) {
      if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_98 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_a0 = 0;
      local_90 = 0x35;
      String::parse_latin1((StrRange *)&local_a0);
      vformat<StringName>((StringName *)&local_98,(StrRange *)&local_a0,&local_a8);
      _err_print_error(&_LC83,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_98,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      if ((StringName::configured != '\0') && (local_a8 != 0)) {
        StringName::unref();
      }
      goto LAB_0011bca0;
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar16 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 5) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar6 = 0;
      lVar15 = 0;
    }
    else {
      lVar15 = *(long *)(pVVar2 + -8);
      iVar6 = (int)lVar15;
    }
    if ((int)(4 - in_R8D) <= iVar6) {
      lVar9 = 0;
      do {
        if ((int)lVar9 < (int)in_R8D) {
          pVVar14 = *(Variant **)(param_4 + lVar9 * 8);
        }
        else {
          uVar12 = iVar6 + -4 + (int)lVar9;
          if (lVar15 <= (int)uVar12) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar12,lVar15,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar14 = pVVar2 + (ulong)uVar12 * 0x18;
        }
        local_68[lVar9] = pVVar14;
        lVar9 = lVar9 + 1;
      } while (lVar9 != 4);
      *in_R9 = 0;
      if (((ulong)pVVar16 & 1) != 0) {
        pVVar16 = *(Variant **)(pVVar16 + *(long *)((long)plVar13 + (long)pVVar1) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[3],2);
      uVar4 = _LC198;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar6 = Variant::operator_cast_to_int(local_68[3]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[2],2);
      uVar4 = _LC199;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      uVar10 = Variant::operator_cast_to_long(local_68[2]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[1],2);
      uVar4 = _LC200;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar7 = Variant::operator_cast_to_int(local_68[1]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[0],0x1d);
      uVar4 = _LC201;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_Vector((Variant *)&local_98);
      iVar6 = (*(code *)pVVar16)((Variant *)((long)plVar13 + (long)pVVar1),(Variant *)&local_98,
                                 iVar7,uVar10 & 0xffffffff,iVar6);
      Variant::Variant((Variant *)local_88,iVar6);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      lVar15 = local_90;
      *(undefined4 *)param_1 = local_88[0];
      *(undefined8 *)(param_1 + 8) = local_80;
      *(undefined8 *)(param_1 + 0x10) = uStack_78;
      if (local_90 != 0) {
        LOCK();
        plVar13 = (long *)(local_90 + -0x10);
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          local_90 = 0;
          Memory::free_static((void *)(lVar15 + -0x10),false);
        }
      }
      goto LAB_0011bca0;
    }
    uVar8 = 4;
  }
  else {
    uVar8 = 3;
  }
  *in_R9 = uVar8;
  in_R9[2] = 4;
LAB_0011bca0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
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
      _err_print_error(&_LC83,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011bfd0;
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
      if (in_R8D != 1) goto LAB_0011c020;
LAB_0011c010:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011c020:
        uVar6 = 4;
        goto LAB_0011bfc5;
      }
      if (in_R8D == 1) goto LAB_0011c010;
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
    uVar4 = _LC202;
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
LAB_0011bfc5:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_0011bfd0:
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
      _err_print_error(&_LC83,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011c300;
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
      if (in_R8D != 1) goto LAB_0011c350;
LAB_0011c340:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011c350:
        uVar6 = 4;
        goto LAB_0011c2f5;
      }
      if (in_R8D == 1) goto LAB_0011c340;
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
    uVar4 = _LC203;
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
LAB_0011c2f5:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_0011c300:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
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
    goto LAB_0011c60d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0011c670;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0011c670:
      uVar6 = 4;
LAB_0011c60d:
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
      goto LAB_0011c58b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011c58b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
  uVar4 = _LC204;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_bool(this);
                    /* WARNING: Could not recover jumptable at 0x0011c5e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(SUB81(param_1 + (long)param_3,0));
  return;
}



/* MethodBindT<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  char *pcVar1;
  long *plVar2;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var3;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var3 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var3 != (__UnexistingClass *)0x0) && (*(long *)(p_Var3 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var3 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var3 + 8) == 0) {
      plVar2 = *(long **)(p_Var3 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)p_Var3 + 0x40))(p_Var3);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(p_Var3 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC83,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar2 = (long *)(local_48 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011c6d6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,bool>
            (p_Var3,(_func_void_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011c6d6:
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
    goto LAB_0011c9bd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0011ca20;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0011ca20:
      uVar6 = 4;
LAB_0011c9bd:
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
      goto LAB_0011c93b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011c93b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_double **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,3);
  uVar4 = _LC205;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  dVar9 = Variant::operator_cast_to_double(this);
                    /* WARNING: Could not recover jumptable at 0x0011c994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(dVar9);
  return;
}



/* MethodBindT<double>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<double>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  long *plVar2;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var3;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var3 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var3 != (__UnexistingClass *)0x0) && (*(long *)(p_Var3 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var3 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var3 + 8) == 0) {
      plVar2 = *(long **)(p_Var3 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)p_Var3 + 0x40))(p_Var3);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(p_Var3 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC83,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar2 = (long *)(local_50 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011ca86;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,double>
            (p_Var3,(_func_void_double *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011ca86:
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
    goto LAB_0011cd6d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0011cdd0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0011cdd0:
      uVar6 = 4;
LAB_0011cd6d:
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
      goto LAB_0011cceb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011cceb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC84;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x0011cd46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((int)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  long *plVar2;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var3;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var3 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var3 != (__UnexistingClass *)0x0) && (*(long *)(p_Var3 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var3 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var3 + 8) == 0) {
      plVar2 = *(long **)(p_Var3 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)p_Var3 + 0x40))(p_Var3);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(p_Var3 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC83,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar2 = (long *)(local_50 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011ce36;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int>
            (p_Var3,(_func_void_int *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,in_R9
            );
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011ce36:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<Vector<unsigned char> >(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Vector<unsigned_char>>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int iVar7;
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
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar7 = *param_2;
  if (iVar7 != param_1) goto LAB_0011d057;
  local_78 = 0;
  local_68 = &_LC36;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x1d);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0011d150:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0011d150;
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
  *(undefined4 *)param_3 = local_68._0_4_;
  if (*(long *)(param_3 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar5 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar5;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar5 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar5;
  }
  lVar6 = local_48;
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) == local_48) {
    *(undefined4 *)(param_3 + 0x28) = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    *(long *)(param_3 + 0x20) = local_48;
    *(undefined4 *)(param_3 + 0x28) = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
  iVar7 = *param_2;
LAB_0011d057:
  *param_2 = iVar7 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* void call_get_argument_type_info_helper<int>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<int>(int param_1,int *param_2,PropertyInfo *param_3)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int iVar7;
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
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar7 = *param_2;
  if (iVar7 != param_1) goto LAB_0011d2e7;
  local_78 = 0;
  local_68 = &_LC36;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,2);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0011d3e0:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0011d3e0;
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
  *(undefined4 *)param_3 = local_68._0_4_;
  if (*(long *)(param_3 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar5 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar5;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar5 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar5;
  }
  lVar6 = local_48;
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) == local_48) {
    *(undefined4 *)(param_3 + 0x28) = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    *(long *)(param_3 + 0x20) = local_48;
    *(undefined4 *)(param_3 + 0x28) = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
  iVar7 = *param_2;
LAB_0011d2e7:
  *param_2 = iVar7 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTR<Error, int, Vector<unsigned char> >::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Error,int,Vector<unsigned_char>>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  int local_70 [2];
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_60 = (undefined1  [16])0x0;
    local_68 = (char *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70[0] = 0;
    call_get_argument_type_info_helper<int>(in_EDX,local_70,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<Vector<unsigned_char>>
              (in_EDX,local_70,(PropertyInfo *)&local_68);
    uVar2 = local_60._0_8_;
    uVar3 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  }
  else {
    local_78 = 0;
    local_68 = "Error";
    local_60._8_8_ = local_60._0_8_;
    local_60._0_8_ = 5;
    String::parse_latin1((StrRange *)&local_78);
    godot::details::enum_qualified_name_to_class_info_name((details *)local_70,(String *)&local_78);
    StringName::StringName((StringName *)&local_68,(String *)local_70,false);
    *puVar4 = 2;
    puVar4[6] = 0;
    *(undefined8 *)(puVar4 + 8) = 0;
    puVar4[10] = 0x10006;
    *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
    local_80 = 0;
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Error,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  int local_70 [2];
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (char *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70[0] = 0;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<int>(0,local_70,(PropertyInfo *)&local_68);
    uVar2 = local_60._0_8_;
    uVar3 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  }
  else {
    local_78 = 0;
    local_68 = "Error";
    local_60._8_8_ = local_60._0_8_;
    local_60._0_8_ = 5;
    String::parse_latin1((StrRange *)&local_78);
    godot::details::enum_qualified_name_to_class_info_name((details *)local_70,(String *)&local_78);
    StringName::StringName((StringName *)&local_68,(String *)local_70,false);
    *puVar4 = 2;
    puVar4[6] = 0;
    *(undefined8 *)(puVar4 + 8) = 0;
    puVar4[10] = 0x10006;
    *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
    local_80 = 0;
    local_88 = 0;
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, Vector<unsigned char>, int, MultiplayerPeer::TransferMode,
   int>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTR<Error,Vector<unsigned_char>,int,MultiplayerPeer::TransferMode,int>::
_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  uint local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  long local_88;
  undefined4 local_80;
  char *local_78;
  long local_70;
  ulong local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 4) {
    local_a0._0_8_ = 0;
    local_a0._8_8_ = 0;
    local_a8 = 0;
    local_90 = 0;
    local_88 = 0;
    local_80 = 6;
    local_d4 = 0;
    call_get_argument_type_info_helper<Vector<unsigned_char>>
              (in_EDX,(int *)&local_d4,(PropertyInfo *)&local_a8);
    call_get_argument_type_info_helper<int>(in_EDX,(int *)&local_d4,(PropertyInfo *)&local_a8);
    uVar2 = local_d4;
    if (in_EDX == local_d4) {
      local_c0 = 0;
      local_78 = "MultiplayerPeer::TransferMode";
      local_70 = 0x1d;
      String::parse_latin1((StrRange *)&local_c0);
      godot::details::enum_qualified_name_to_class_info_name
                ((details *)&local_b8,(String *)&local_c0);
      StringName::StringName((StringName *)&local_b0,(String *)&local_b8,false);
      local_c8 = 0;
      local_d0 = 0;
      PropertyInfo::PropertyInfo
                ((PropertyInfo *)&local_78,2,(CowData<char32_t> *)&local_d0,0,
                 (CowData<char32_t> *)&local_c8,0x10006,(StringName *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      local_a8 = CONCAT44(local_a8._4_4_,local_78._0_4_);
      if (local_a0._0_8_ != local_70) {
        CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
        local_a0._0_8_ = local_70;
        local_70 = 0;
      }
      if (local_a0._8_8_ != local_68) {
        StringName::unref();
        local_a0._8_8_ = local_68;
        local_68 = 0;
      }
      local_90 = CONCAT44(local_90._4_4_,local_60);
      if (local_88 != local_58) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        local_88 = local_58;
        local_58 = 0;
      }
      local_80 = local_50;
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
    }
    local_d4 = uVar2 + 1;
    call_get_argument_type_info_helper<int>(in_EDX,(int *)&local_d4,(PropertyInfo *)&local_a8);
    uVar4 = local_a0._8_8_;
    uVar3 = local_a0._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_a0._8_8_;
    local_a0 = auVar1 << 0x40;
    *puVar5 = (undefined4)local_a8;
    *(undefined8 *)(puVar5 + 2) = uVar3;
    *(undefined8 *)(puVar5 + 4) = uVar4;
    puVar5[6] = (undefined4)local_90;
    *(long *)(puVar5 + 8) = local_88;
    puVar5[10] = local_80;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
  }
  else {
    local_b0 = 0;
    local_78 = "Error";
    local_70 = 5;
    String::parse_latin1((StrRange *)&local_b0);
    godot::details::enum_qualified_name_to_class_info_name((details *)&local_a8,(String *)&local_b0)
    ;
    StringName::StringName((StringName *)&local_78,(String *)&local_a8,false);
    *puVar5 = 2;
    puVar5[6] = 0;
    *(undefined8 *)(puVar5 + 8) = 0;
    puVar5[10] = 0x10006;
    *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
    local_b8 = 0;
    local_c0 = 0;
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* SceneRPCInterface::~SceneRPCInterface() */

void __thiscall SceneRPCInterface::~SceneRPCInterface(SceneRPCInterface *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* SceneReplicationInterface::~SceneReplicationInterface() */

void __thiscall
SceneReplicationInterface::~SceneReplicationInterface(SceneReplicationInterface *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* SceneCacheInterface::~SceneCacheInterface() */

void __thiscall SceneCacheInterface::~SceneCacheInterface(SceneCacheInterface *this)

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
/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

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
/* OfflineMultiplayerPeer::~OfflineMultiplayerPeer() */

void __thiscall OfflineMultiplayerPeer::~OfflineMultiplayerPeer(OfflineMultiplayerPeer *this)

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
/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Error, Vector<unsigned char>, int, MultiplayerPeer::TransferMode,
   int>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,Vector<unsigned_char>,int,MultiplayerPeer::TransferMode,int>::~MethodBindTR
          (MethodBindTR<Error,Vector<unsigned_char>,int,MultiplayerPeer::TransferMode,int> *this)

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
/* MethodBindTRC<Callable>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Callable>::~MethodBindTRC(MethodBindTRC<Callable> *this)

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
/* MethodBindTR<Error, int>::~MethodBindTR() */

void __thiscall MethodBindTR<Error,int>::~MethodBindTR(MethodBindTR<Error,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Error, int, Vector<unsigned char> >::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,int,Vector<unsigned_char>>::~MethodBindTR
          (MethodBindTR<Error,int,Vector<unsigned_char>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Vector<int>>::~MethodBindTR() */

void __thiscall MethodBindTR<Vector<int>>::~MethodBindTR(MethodBindTR<Vector<int>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

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
/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<SceneMultiplayer, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SceneMultiplayer,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneMultiplayer,void,int> *this)

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




