
/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<unsigned_char>::_copy_on_write(CowData<unsigned_char> *this)

{
  long *plVar1;
  size_t __n;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  __n = *(size_t *)(*(long *)this + -8);
  uVar5 = 0x10;
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
    puVar4[1] = __n;
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



/* get_packet_len(unsigned int, int) */

uint get_packet_len(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_1 & 0x7fffffff;
  if (-1 < (int)param_1) {
    uVar1 = param_2;
  }
  return uVar1;
}



/* SceneRPCInterface::_process_get_node(int, unsigned char const*, unsigned int, int) */

long __thiscall
SceneRPCInterface::_process_get_node
          (SceneRPCInterface *this,int param_1,uchar *param_2,uint param_3,int param_4)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  NodePath *pNVar4;
  long lVar5;
  uint uVar6;
  long in_FS_OFFSET;
  long local_80;
  NodePath local_78 [8];
  long local_70;
  long local_68;
  long local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pNVar4 = *(NodePath **)(SceneTree::singleton + 0x368);
  SceneMultiplayer::get_root_path();
  pNVar4 = (NodePath *)Node::get_node(pNVar4);
  NodePath::~NodePath((NodePath *)&local_58);
  if (pNVar4 == (NodePath *)0x0) {
    lVar5 = 0;
    _err_print_error("_process_get_node","modules/multiplayer/scene_rpc_interface.cpp",0x84,
                     "Parameter \"root_node\" is null.",0,0);
  }
  else {
    if ((int)param_3 < 0) {
      uVar6 = param_3 & 0x7fffffff;
      if ((int)uVar6 < param_4) {
        local_80 = 0;
        String::parse_utf8((char *)&local_80,(int)param_2 + uVar6,
                           (bool)((char)param_4 - (char)uVar6));
        NodePath::NodePath(local_78,(String_conflict *)&local_80);
        lVar5 = Node::get_node(pNVar4);
        if (lVar5 == 0) {
          local_60 = 0;
          local_58 = &_LC10;
          local_50 = 1;
          String::parse_latin1((StrRange *)&local_60);
          NodePath::operator_cast_to_String((NodePath *)&local_70);
          operator+((char *)&local_68,(String_conflict *)"Failed to get path from RPC: ");
          String::operator+((String_conflict *)&local_58,(String_conflict *)&local_68);
          _err_print_error("_process_get_node","modules/multiplayer/scene_rpc_interface.cpp",0x95,
                           (NodePath *)&local_58,0,0);
          puVar3 = local_58;
          if (local_58 != (undefined *)0x0) {
            LOCK();
            plVar1 = (long *)(local_58 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_58 = (undefined *)0x0;
              Memory::free_static(puVar3 + -0x10,false);
            }
          }
          lVar2 = local_68;
          if (local_68 != 0) {
            LOCK();
            plVar1 = (long *)(local_68 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_68 = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
            }
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
        }
        NodePath::~NodePath(local_78);
        lVar2 = local_80;
        if (local_80 != 0) {
          LOCK();
          plVar1 = (long *)(local_80 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_80 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        goto LAB_00100209;
      }
      _err_print_error("_process_get_node","modules/multiplayer/scene_rpc_interface.cpp",0x8b,
                       "Condition \"ofs >= p_packet_len\" is true. Returning: nullptr",
                       "Invalid packet received. Size smaller than declared.",0,0);
    }
    else {
      lVar5 = SceneCacheInterface::get_cached_object((int)*(undefined8 *)(this + 0x188),param_1);
      if (lVar5 != 0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          lVar5 = __dynamic_cast(lVar5,&Object::typeinfo,&Node::typeinfo,0);
          return lVar5;
        }
        goto LAB_0010047e;
      }
    }
    lVar5 = 0;
  }
LAB_00100209:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar5;
  }
LAB_0010047e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneRPCInterface::_parse_rpc_config(Variant const&, bool, SceneRPCInterface::RPCConfigCache&)
   [clone .part.0] */

void SceneRPCInterface::_parse_rpc_config(Variant *param_1,bool param_2,RPCConfigCache *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  CallableCustom *this;
  StringName *this_00;
  ushort *puVar5;
  int *piVar6;
  ushort uVar7;
  int iVar8;
  long in_FS_OFFSET;
  bool bVar9;
  ushort local_e2;
  Variant local_e0 [8];
  Callable local_d8 [8];
  long local_d0;
  Variant local_c8 [8];
  long local_c0;
  long local_b8;
  int local_b0;
  StringName local_ac;
  undefined8 local_a8;
  int local_98 [8];
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::operator_cast_to_Dictionary(local_e0);
  Dictionary::keys();
  this = (CallableCustom *)operator_new(0x30,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC25;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR_hash_00109ce0;
  *(code **)(this + 0x28) = StringLikeVariantOrder::compare;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(char **)(this + 0x20) = "StringLikeVariantOrder::compare";
  Callable::Callable((Callable *)&local_b8,this);
  iVar8 = 0;
  Array::sort_custom(local_d8);
  Callable::~Callable((Callable *)&local_b8);
  do {
    iVar4 = Array::size();
    if (iVar4 <= iVar8) {
      Array::~Array((Array *)local_d8);
      Dictionary::~Dictionary((Dictionary *)local_e0);
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    iVar4 = (int)local_d8;
    piVar6 = (int *)Array::operator[](iVar4);
    if ((*piVar6 == 4) || (*piVar6 == 0x15)) {
      Array::operator[](iVar4);
      Variant::operator_cast_to_String((Variant *)&local_d0);
      Variant::Variant((Variant *)local_58,(String_conflict *)&local_d0);
      piVar6 = (int *)Dictionary::operator[](local_e0);
      iVar4 = *piVar6;
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (iVar4 == 0x1b) {
        Variant::Variant((Variant *)local_58,(String_conflict *)&local_d0);
        Dictionary::operator[](local_e0);
        Variant::operator_cast_to_Dictionary((Variant *)&local_b8);
        Variant::Variant((Variant *)local_78,"rpc_mode");
        cVar3 = Dictionary::has((Variant *)&local_b8);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        Dictionary::~Dictionary((Dictionary *)&local_b8);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (cVar3 == '\0') {
          _err_print_error("_parse_rpc_config","modules/multiplayer/scene_rpc_interface.cpp",0x58,
                           "Condition \"!config[name].operator Dictionary().has(\"rpc_mode\")\" is true. Continuing."
                           ,0,0);
          lVar2 = local_d0;
        }
        else {
          Variant::Variant((Variant *)local_58,(String_conflict *)&local_d0);
          Dictionary::operator[](local_e0);
          Variant::operator_cast_to_Dictionary(local_c8);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          local_ac = (StringName)0x0;
          local_b8 = 0;
          local_b0 = 0;
          local_a8 = 2;
          StringName::StringName((StringName *)&local_c0,(String_conflict *)&local_d0,false);
          if (local_b8 == local_c0) {
            if ((StringName::configured != '\0') && (local_c0 != 0)) {
              StringName::unref();
            }
          }
          else {
            StringName::unref();
            local_b8 = local_c0;
          }
          Variant::Variant((Variant *)local_78,2);
          Variant::Variant((Variant *)local_98,"rpc_mode");
          Dictionary::get((Variant *)local_58,local_c8);
          local_b0 = Variant::operator_cast_to_int((Variant *)local_58);
          if (Variant::needs_deinit[local_58[0]] == '\0') {
            if (Variant::needs_deinit[local_98[0]] != '\0') goto LAB_00100bc0;
LAB_001005fd:
            cVar3 = Variant::needs_deinit[local_78[0]];
          }
          else {
            Variant::_clear_internal();
            if (Variant::needs_deinit[local_98[0]] == '\0') goto LAB_001005fd;
LAB_00100bc0:
            Variant::_clear_internal();
            cVar3 = Variant::needs_deinit[local_78[0]];
          }
          if (cVar3 != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)local_78,2);
          Variant::Variant((Variant *)local_98,"transfer_mode");
          Dictionary::get((Variant *)local_58,local_c8);
          iVar4 = Variant::operator_cast_to_int((Variant *)local_58);
          local_a8 = CONCAT44(local_a8._4_4_,iVar4);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_98[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)local_78,false);
          Variant::Variant((Variant *)local_98,"call_local");
          Dictionary::get((Variant *)local_58,local_c8);
          local_ac = (StringName)Variant::operator_cast_to_bool((Variant *)local_58);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_98[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)local_78,0);
          Variant::Variant((Variant *)local_98,"channel");
          Dictionary::get((Variant *)local_58,local_c8);
          iVar4 = Variant::operator_cast_to_int((Variant *)local_58);
          local_a8 = CONCAT44(iVar4,(undefined4)local_a8);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_98[0]] == '\0') {
            cVar3 = Variant::needs_deinit[local_78[0]];
          }
          else {
            Variant::_clear_internal();
            cVar3 = Variant::needs_deinit[local_78[0]];
          }
          if (cVar3 != '\0') {
            Variant::_clear_internal();
          }
          uVar7 = (ushort)iVar8;
          if (param_2) {
            uVar7 = uVar7 | 0x8000;
          }
          local_e2 = uVar7;
          this_00 = (StringName *)
                    HashMap<unsigned_short,SceneRPCInterface::RPCConfig,HashMapHasherDefault,HashMapComparatorDefault<unsigned_short>,DefaultTypedAllocator<HashMapElement<unsigned_short,SceneRPCInterface::RPCConfig>>>
                    ::operator[]((HashMap<unsigned_short,SceneRPCInterface::RPCConfig,HashMapHasherDefault,HashMapComparatorDefault<unsigned_short>,DefaultTypedAllocator<HashMapElement<unsigned_short,SceneRPCInterface::RPCConfig>>>
                                  *)param_3,&local_e2);
          StringName::operator=(this_00,(StringName *)&local_b8);
          *(int *)(this_00 + 8) = local_b0;
          this_00[0xc] = local_ac;
          *(undefined4 *)(this_00 + 0x10) = (undefined4)local_a8;
          *(undefined4 *)(this_00 + 0x14) = local_a8._4_4_;
          StringName::StringName((StringName *)&local_c0,(String_conflict *)&local_d0,false);
          puVar5 = (ushort *)
                   HashMap<StringName,unsigned_short,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,unsigned_short>>>
                   ::operator[]((HashMap<StringName,unsigned_short,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,unsigned_short>>>
                                 *)(param_3 + 0x30),(StringName *)&local_c0);
          bVar9 = StringName::configured != '\0';
          *puVar5 = uVar7;
          if ((bVar9) &&
             (((local_c0 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
              (local_b8 != 0)))) {
            StringName::unref();
          }
          Dictionary::~Dictionary((Dictionary *)local_c8);
          lVar2 = local_d0;
        }
      }
      else {
        _err_print_error("_parse_rpc_config","modules/multiplayer/scene_rpc_interface.cpp",0x57,
                         "Condition \"config[name].get_type() != Variant::DICTIONARY\" is true. Continuing."
                         ,0,0);
        lVar2 = local_d0;
      }
      local_d0 = lVar2;
      if (lVar2 != 0) {
        LOCK();
        plVar1 = (long *)(lVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_d0 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
    }
    else {
      _err_print_error("_parse_rpc_config","modules/multiplayer/scene_rpc_interface.cpp",0x55,
                       "Condition \"!names[i].is_string()\" is true. Continuing.",0,0);
    }
    iVar8 = iVar8 + 1;
  } while( true );
}



/* SceneRPCInterface::_parse_rpc_config(Variant const&, bool, SceneRPCInterface::RPCConfigCache&) */

void __thiscall
SceneRPCInterface::_parse_rpc_config
          (SceneRPCInterface *this,Variant *param_1,bool param_2,RPCConfigCache *param_3)

{
  if (*(int *)param_1 == 0) {
    return;
  }
  if (*(int *)param_1 == 0x1b) {
    _parse_rpc_config(param_1,param_2,param_3);
    return;
  }
  _err_print_error("_parse_rpc_config","modules/multiplayer/scene_rpc_interface.cpp",0x50,
                   "Condition \"p_config.get_type() != Variant::DICTIONARY\" is true.",0,0);
  return;
}



/* SceneRPCInterface::_get_node_config(Node const*) */

undefined8 __thiscall SceneRPCInterface::_get_node_config(SceneRPCInterface *this,Node *param_1)

{
  HashMap<ObjectID,SceneRPCInterface::RPCConfigCache,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,SceneRPCInterface::RPCConfigCache>>>
  *this_00;
  int *piVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  HashMap<unsigned_short,SceneRPCInterface::RPCConfig,HashMapHasherDefault,HashMapComparatorDefault<unsigned_short>,DefaultTypedAllocator<HashMapElement<unsigned_short,SceneRPCInterface::RPCConfig>>>
  *this_01;
  int iVar18;
  long lVar19;
  ulong uVar20;
  long *plVar21;
  undefined8 *puVar22;
  int *piVar23;
  uint uVar24;
  ulong uVar25;
  uint uVar26;
  long lVar27;
  long in_FS_OFFSET;
  bool bVar28;
  long local_c8;
  StringName local_c0 [8];
  RPCConfigCache local_b8 [8];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_c8 = *(long *)(param_1 + 0x60);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (HashMap<ObjectID,SceneRPCInterface::RPCConfigCache,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,SceneRPCInterface::RPCConfigCache>>>
             *)(this + 0x1a8);
  if ((*(long *)(this + 0x1b0) != 0) && (*(int *)(this + 0x1d4) != 0)) {
    uVar25 = CONCAT44(0,(&hash_table_size_primes)[*(uint *)(this + 0x1d0)]);
    lVar27 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1d0) * 8);
    uVar16 = local_c8 * 0x3ffff - 1;
    uVar16 = (uVar16 ^ uVar16 >> 0x1f) * 0x15;
    uVar16 = (uVar16 ^ uVar16 >> 0xb) * 0x41;
    uVar16 = uVar16 >> 0x16 ^ uVar16;
    uVar20 = uVar16 & 0xffffffff;
    if ((int)uVar16 == 0) {
      uVar20 = 1;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar20 * lVar27;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar25;
    lVar19 = SUB168(auVar5 * auVar9,8);
    uVar24 = *(uint *)(*(long *)(this + 0x1b8) + lVar19 * 4);
    iVar18 = SUB164(auVar5 * auVar9,8);
    if (uVar24 != 0) {
      uVar26 = 0;
      do {
        if (((uint)uVar20 == uVar24) &&
           (local_c8 == *(long *)(*(long *)(*(long *)(this + 0x1b0) + lVar19 * 8) + 0x10))) {
          uVar17 = HashMap<ObjectID,SceneRPCInterface::RPCConfigCache,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,SceneRPCInterface::RPCConfigCache>>>
                   ::operator[](this_00,(ObjectID *)&local_c8);
          goto LAB_00100deb;
        }
        uVar26 = uVar26 + 1;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (ulong)(iVar18 + 1) * lVar27;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar25;
        lVar19 = SUB168(auVar6 * auVar10,8);
        uVar24 = *(uint *)(*(long *)(this + 0x1b8) + lVar19 * 4);
        iVar18 = SUB164(auVar6 * auVar10,8);
      } while ((uVar24 != 0) &&
              (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar24 * lVar27, auVar11._8_8_ = 0,
              auVar11._0_8_ = uVar25, auVar8._8_8_ = 0,
              auVar8._0_8_ = (ulong)(uint)(((&hash_table_size_primes)[*(uint *)(this + 0x1d0)] +
                                           iVar18) - SUB164(auVar7 * auVar11,8)) * lVar27,
              auVar12._8_8_ = 0, auVar12._0_8_ = uVar25, uVar26 <= SUB164(auVar8 * auVar12,8)));
    }
  }
  local_b0 = (undefined1  [16])0x0;
  local_90 = _LC39;
  local_60 = _LC39;
  local_a0 = (undefined1  [16])0x0;
  local_80 = (undefined1  [16])0x0;
  local_70 = (undefined1  [16])0x0;
  Node::get_rpc_config();
  if (local_58[0] != 0) {
    if (local_58[0] == 0x1b) {
      _parse_rpc_config((Variant *)local_58,true,local_b8);
    }
    else {
      _err_print_error("_parse_rpc_config","modules/multiplayer/scene_rpc_interface.cpp",0x50,
                       "Condition \"p_config.get_type() != Variant::DICTIONARY\" is true.",0,0);
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long **)(param_1 + 0x98) != (long *)0x0) &&
     ((**(code **)(**(long **)(param_1 + 0x98) + 0xb0))((Variant *)local_58), local_58[0] != 0)) {
    if (local_58[0] == 0x1b) {
      _parse_rpc_config((Variant *)local_58,false,local_b8);
    }
    else {
      _err_print_error("_parse_rpc_config","modules/multiplayer/scene_rpc_interface.cpp",0x50,
                       "Condition \"p_config.get_type() != Variant::DICTIONARY\" is true.",0,0);
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  this_01 = (HashMap<unsigned_short,SceneRPCInterface::RPCConfig,HashMapHasherDefault,HashMapComparatorDefault<unsigned_short>,DefaultTypedAllocator<HashMapElement<unsigned_short,SceneRPCInterface::RPCConfig>>>
             *)HashMap<ObjectID,SceneRPCInterface::RPCConfigCache,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,SceneRPCInterface::RPCConfigCache>>>
               ::operator[](this_00,(ObjectID *)&local_c8);
  uVar24 = *(uint *)(this_01 + 0x28);
  if (*(int *)(this_01 + 0x2c) == 0) {
    uVar26 = (&hash_table_size_primes)[uVar24];
  }
  else {
    uVar26 = (&hash_table_size_primes)[uVar24];
    if (*(long *)(this_01 + 8) != 0) {
      if (uVar26 != 0) {
        lVar27 = 0;
        do {
          if (*(int *)(*(long *)(this_01 + 0x10) + lVar27) != 0) {
            *(int *)(*(long *)(this_01 + 0x10) + lVar27) = 0;
            pvVar4 = *(void **)(*(long *)(this_01 + 8) + lVar27 * 2);
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar4 + 0x18) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar4,false);
            *(undefined8 *)(*(long *)(this_01 + 8) + lVar27 * 2) = 0;
          }
          lVar27 = lVar27 + 4;
        } while ((ulong)uVar26 * 4 - lVar27 != 0);
        uVar24 = *(uint *)(this_01 + 0x28);
        uVar26 = (&hash_table_size_primes)[uVar24];
      }
      *(undefined4 *)(this_01 + 0x2c) = 0;
      *(undefined1 (*) [16])(this_01 + 0x18) = (undefined1  [16])0x0;
    }
  }
  uVar2 = (&hash_table_size_primes)[local_90 & 0xffffffff];
  if (uVar26 < uVar2) {
    if (uVar24 != 0x1c) {
      uVar16 = (ulong)uVar24;
      do {
        uVar26 = (int)uVar16 + 1;
        uVar16 = (ulong)uVar26;
        if (uVar2 <= (uint)(&hash_table_size_primes)[uVar16]) {
          if (uVar24 != uVar26) {
            if (*(long *)(this_01 + 8) == 0) {
              *(uint *)(this_01 + 0x28) = uVar26;
            }
            else {
              HashMap<unsigned_short,SceneRPCInterface::RPCConfig,HashMapHasherDefault,HashMapComparatorDefault<unsigned_short>,DefaultTypedAllocator<HashMapElement<unsigned_short,SceneRPCInterface::RPCConfig>>>
              ::_resize_and_rehash(this_01,uVar26);
            }
          }
          goto LAB_00100f83;
        }
      } while (uVar26 != 0x1c);
    }
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
LAB_00100f83:
  uVar13 = local_b0._0_8_;
  if (((undefined8 *)local_b0._0_8_ != (undefined8 *)0x0) && ((long *)local_a0._0_8_ != (long *)0x0)
     ) {
    plVar21 = (long *)local_a0._0_8_;
    do {
      HashMap<unsigned_short,SceneRPCInterface::RPCConfig,HashMapHasherDefault,HashMapComparatorDefault<unsigned_short>,DefaultTypedAllocator<HashMapElement<unsigned_short,SceneRPCInterface::RPCConfig>>>
      ::insert((ushort *)local_c0,(RPCConfig *)this_01,(bool)((char)plVar21 + '\x10'));
      plVar21 = (long *)*plVar21;
    } while (plVar21 != (long *)0x0);
  }
  uVar24 = *(uint *)(this_01 + 0x58);
  uVar26 = (&hash_table_size_primes)[uVar24];
  if ((*(int *)(this_01 + 0x5c) != 0) && (*(long *)(this_01 + 0x38) != 0)) {
    if (uVar26 != 0) {
      lVar27 = 0;
      do {
        if (*(int *)(*(long *)(this_01 + 0x40) + lVar27) != 0) {
          *(int *)(*(long *)(this_01 + 0x40) + lVar27) = 0;
          pvVar4 = *(void **)(*(long *)(this_01 + 0x38) + lVar27 * 2);
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar4 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar4,false);
          *(undefined8 *)(*(long *)(this_01 + 0x38) + lVar27 * 2) = 0;
        }
        lVar27 = lVar27 + 4;
      } while (lVar27 != (ulong)uVar26 * 4);
      uVar24 = *(uint *)(this_01 + 0x58);
      uVar26 = (&hash_table_size_primes)[uVar24];
    }
    *(undefined4 *)(this_01 + 0x5c) = 0;
    *(undefined1 (*) [16])(this_01 + 0x48) = (undefined1  [16])0x0;
  }
  uVar3 = (&hash_table_size_primes)[local_60 & 0xffffffff];
  if (uVar26 < uVar3) {
    if (uVar24 != 0x1c) {
      uVar16 = (ulong)uVar24;
      do {
        uVar26 = (int)uVar16 + 1;
        uVar16 = (ulong)uVar26;
        if (uVar3 <= (uint)(&hash_table_size_primes)[uVar16]) {
          if (uVar24 != uVar26) {
            if (*(long *)(this_01 + 0x38) == 0) {
              *(uint *)(this_01 + 0x58) = uVar26;
            }
            else {
              HashMap<StringName,unsigned_short,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,unsigned_short>>>
              ::_resize_and_rehash
                        ((HashMap<StringName,unsigned_short,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,unsigned_short>>>
                          *)(this_01 + 0x30),uVar26);
            }
          }
          goto LAB_00101045;
        }
      } while (uVar26 != 0x1c);
    }
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
LAB_00101045:
  uVar14 = local_80._0_8_;
  if ((undefined8 *)local_80._0_8_ == (undefined8 *)0x0) {
    uVar17 = HashMap<ObjectID,SceneRPCInterface::RPCConfigCache,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,SceneRPCInterface::RPCConfigCache>>>
             ::operator[](this_00,(ObjectID *)&local_c8);
  }
  else {
    if ((long *)local_70._0_8_ != (long *)0x0) {
      plVar21 = (long *)local_70._0_8_;
      do {
        HashMap<StringName,unsigned_short,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,unsigned_short>>>
        ::insert(local_c0,(ushort *)(this_01 + 0x30),(bool)((char)plVar21 + '\x10'));
        plVar21 = (long *)*plVar21;
      } while (plVar21 != (long *)0x0);
    }
    uVar17 = HashMap<ObjectID,SceneRPCInterface::RPCConfigCache,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,SceneRPCInterface::RPCConfigCache>>>
             ::operator[](this_00,(ObjectID *)&local_c8);
    uVar15 = local_80._8_8_;
    if ((local_60._4_4_ != 0) && (uVar3 != 0)) {
      piVar1 = (int *)(local_80._8_8_ + (ulong)uVar3 * 4);
      puVar22 = (undefined8 *)uVar14;
      piVar23 = (int *)local_80._8_8_;
      do {
        if (*piVar23 != 0) {
          bVar28 = StringName::configured != '\0';
          pvVar4 = (void *)*puVar22;
          *piVar23 = 0;
          if ((bVar28) && (*(long *)((long)pvVar4 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar4,false);
          *puVar22 = 0;
        }
        piVar23 = piVar23 + 1;
        puVar22 = puVar22 + 1;
      } while (piVar1 != piVar23);
    }
    Memory::free_static((void *)uVar14,false);
    Memory::free_static((void *)uVar15,false);
  }
  if ((undefined8 *)uVar13 != (undefined8 *)0x0) {
    uVar14 = local_b0._8_8_;
    if ((local_90._4_4_ != 0) && (uVar2 != 0)) {
      piVar1 = (int *)(local_b0._8_8_ + (ulong)uVar2 * 4);
      piVar23 = (int *)local_b0._8_8_;
      puVar22 = (undefined8 *)uVar13;
      do {
        if (*piVar23 != 0) {
          bVar28 = StringName::configured != '\0';
          pvVar4 = (void *)*puVar22;
          *piVar23 = 0;
          if ((bVar28) && (*(long *)((long)pvVar4 + 0x18) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar4,false);
          *puVar22 = 0;
        }
        piVar23 = piVar23 + 1;
        puVar22 = puVar22 + 1;
      } while (piVar23 != piVar1);
    }
    Memory::free_static((void *)uVar13,false);
    Memory::free_static((void *)uVar14,false);
  }
LAB_00100deb:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar17;
}



/* SceneRPCInterface::get_rpc_md5(Object const*) */

Object * SceneRPCInterface::get_rpc_md5(Object *param_1)

{
  int *piVar1;
  char *__s;
  long lVar2;
  void *pvVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  Node *pNVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long in_RDX;
  long *plVar11;
  int *piVar12;
  undefined8 *puVar13;
  SceneRPCInterface *in_RSI;
  long in_FS_OFFSET;
  bool bVar14;
  long local_c8;
  long local_c0;
  char *local_b8;
  size_t local_b0;
  undefined *local_a8;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined8 local_80;
  ushort local_78 [4];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_40;
  
  local_a0._8_8_ = local_a0._0_8_;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((in_RDX == 0) || (pNVar7 = (Node *)__dynamic_cast(), pNVar7 == (Node *)0x0)) {
    _err_print_error("get_rpc_md5","modules/multiplayer/scene_rpc_interface.cpp",0x79,
                     "Parameter \"node\" is null.",0,0);
    local_a8 = &_LC25;
    *(undefined8 *)param_1 = 0;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = local_a0._8_8_;
    local_a0 = auVar4 << 0x40;
    String::parse_latin1((StrRange *)param_1);
  }
  else {
    lVar8 = _get_node_config(in_RSI,pNVar7);
    local_80 = 0;
    local_a0 = (undefined1  [16])0x0;
    local_90 = (undefined1  [16])0x0;
    uVar9 = 1;
    if (5 < (uint)(&hash_table_size_primes)[*(uint *)(lVar8 + 0x28)]) {
      do {
        if ((uint)(&hash_table_size_primes)[*(uint *)(lVar8 + 0x28)] <=
            (uint)(&hash_table_size_primes)[uVar9]) {
          local_80 = uVar9 & 0xffffffff;
          goto LAB_00101512;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != 0x1d);
      _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                       "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0
                      );
    }
LAB_00101512:
    if ((*(int *)(lVar8 + 0x2c) != 0) &&
       (plVar11 = *(long **)(lVar8 + 0x18), plVar11 != (long *)0x0)) {
      do {
        HashMap<unsigned_short,SceneRPCInterface::RPCConfig,HashMapHasherDefault,HashMapComparatorDefault<unsigned_short>,DefaultTypedAllocator<HashMapElement<unsigned_short,SceneRPCInterface::RPCConfig>>>
        ::insert((ushort *)&local_b8,(RPCConfig *)&local_a8,(bool)((char)plVar11 + '\x10'));
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
    local_50 = 0;
    local_70 = (undefined1  [16])0x0;
    local_60 = (undefined1  [16])0x0;
    uVar9 = 1;
    if (5 < (uint)(&hash_table_size_primes)[*(uint *)(lVar8 + 0x58)]) {
      do {
        if ((uint)(&hash_table_size_primes)[*(uint *)(lVar8 + 0x58)] <=
            (uint)(&hash_table_size_primes)[uVar9]) {
          local_50 = uVar9 & 0xffffffff;
          goto LAB_001015c3;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != 0x1d);
      _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                       "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0
                      );
    }
LAB_001015c3:
    if ((*(int *)(lVar8 + 0x5c) != 0) &&
       (plVar11 = *(long **)(lVar8 + 0x48), plVar11 != (long *)0x0)) {
      do {
        HashMap<StringName,unsigned_short,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,unsigned_short>>>
        ::insert((StringName *)&local_b8,local_78,(bool)((char)plVar11 + '\x10'));
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
    local_c8 = 0;
    for (puVar13 = (undefined8 *)local_90._0_8_; puVar13 != (undefined8 *)0x0;
        puVar13 = (undefined8 *)*puVar13) {
      lVar8 = puVar13[3];
      if (lVar8 == 0) {
        local_c0 = 0;
      }
      else {
        __s = *(char **)(lVar8 + 8);
        local_c0 = 0;
        if (__s == (char *)0x0) {
          plVar11 = (long *)(*(long *)(lVar8 + 0x10) + -0x10);
          if (*(long *)(lVar8 + 0x10) != 0) {
            do {
              lVar2 = *plVar11;
              if (lVar2 == 0) goto LAB_00101657;
              LOCK();
              lVar10 = *plVar11;
              bVar14 = lVar2 == lVar10;
              if (bVar14) {
                *plVar11 = lVar2 + 1;
                lVar10 = lVar2;
              }
              UNLOCK();
            } while (!bVar14);
            if (lVar10 != -1) {
              local_c0 = *(long *)(lVar8 + 0x10);
            }
          }
        }
        else {
          local_b0 = strlen(__s);
          local_b8 = __s;
          String::parse_latin1((StrRange *)&local_c0);
        }
      }
LAB_00101657:
      String::operator+=((String_conflict *)&local_c8,(String_conflict *)&local_c0);
      lVar8 = local_c0;
      if (local_c0 != 0) {
        LOCK();
        plVar11 = (long *)(local_c0 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_c0 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
    }
    String::md5_text();
    lVar8 = local_c8;
    if (local_c8 != 0) {
      LOCK();
      plVar11 = (long *)(local_c8 + -0x10);
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
        local_c8 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
    uVar5 = local_70._0_8_;
    if ((undefined8 *)local_70._0_8_ != (undefined8 *)0x0) {
      uVar6 = local_70._8_8_;
      if ((local_50._4_4_ != 0) && ((&hash_table_size_primes)[local_50 & 0xffffffff] != 0)) {
        piVar1 = (int *)(local_70._8_8_ +
                        (ulong)(uint)(&hash_table_size_primes)[local_50 & 0xffffffff] * 4);
        piVar12 = (int *)local_70._8_8_;
        puVar13 = (undefined8 *)local_70._0_8_;
        do {
          if (*piVar12 != 0) {
            bVar14 = StringName::configured != '\0';
            pvVar3 = (void *)*puVar13;
            *piVar12 = 0;
            if ((bVar14) && (*(long *)((long)pvVar3 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar3,false);
            *puVar13 = 0;
          }
          piVar12 = piVar12 + 1;
          puVar13 = puVar13 + 1;
        } while (piVar1 != piVar12);
      }
      Memory::free_static((void *)uVar5,false);
      Memory::free_static((void *)uVar6,false);
    }
    uVar5 = local_a0._0_8_;
    if ((undefined8 *)local_a0._0_8_ != (undefined8 *)0x0) {
      uVar6 = local_a0._8_8_;
      if ((local_80._4_4_ != 0) && ((&hash_table_size_primes)[local_80 & 0xffffffff] != 0)) {
        piVar1 = (int *)(local_a0._8_8_ +
                        (ulong)(uint)(&hash_table_size_primes)[local_80 & 0xffffffff] * 4);
        piVar12 = (int *)local_a0._8_8_;
        puVar13 = (undefined8 *)local_a0._0_8_;
        do {
          if (*piVar12 != 0) {
            bVar14 = StringName::configured != '\0';
            pvVar3 = (void *)*puVar13;
            *piVar12 = 0;
            if ((bVar14) && (*(long *)((long)pvVar3 + 0x18) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar3,false);
            *puVar13 = 0;
          }
          piVar12 = piVar12 + 1;
          puVar13 = puVar13 + 1;
        } while (piVar12 != piVar1);
      }
      Memory::free_static((void *)uVar5,false);
      Memory::free_static((void *)uVar6,false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SceneRPCInterface::_process_rpc(Node*, unsigned short, int, unsigned char const*, int, int) */

void __thiscall
SceneRPCInterface::_process_rpc
          (SceneRPCInterface *this,Node *param_1,ushort param_2,int param_3,uchar *param_4,
          int param_5,int param_6)

{
  long *plVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
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
  code *pcVar20;
  char cVar21;
  uint uVar22;
  int iVar23;
  long lVar24;
  size_t sVar25;
  ulong uVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  char *pcVar29;
  uint uVar30;
  uint uVar31;
  long lVar32;
  long lVar33;
  undefined4 *puVar34;
  undefined8 uVar35;
  int *piVar36;
  uint uVar37;
  ulong uVar38;
  uint uVar39;
  ulong uVar40;
  uint uVar41;
  uint uVar42;
  long in_FS_OFFSET;
  bool bVar43;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  NodePath local_f8 [8];
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  int *local_80;
  long local_78;
  undefined8 *local_70;
  int local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 < param_6) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar29 = "Condition \"p_offset > p_packet_len\" is true.";
      uVar35 = 0xe8;
LAB_001029d8:
      _err_print_error("_process_rpc","modules/multiplayer/scene_rpc_interface.cpp",uVar35,pcVar29,
                       "Invalid packet received. Size too small.",0);
      return;
    }
  }
  else {
    lVar24 = _get_node_config(this,param_1);
    lVar5 = *(long *)(lVar24 + 8);
    if ((lVar5 != 0) && (*(int *)(lVar24 + 0x2c) != 0)) {
      uVar42 = (&hash_table_size_primes)[*(uint *)(lVar24 + 0x28)];
      uVar26 = CONCAT44(0,uVar42);
      uVar40 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar24 + 0x28) * 8);
      uVar22 = ((uint)param_2 * -0x7a143595 ^ (uint)param_2 * -0x7a143595 >> 0xd) * -0x3d4d51cb;
      uVar41 = uVar22 ^ uVar22 >> 0x10;
      if (uVar22 == uVar22 >> 0x10) {
        uVar41 = 1;
        uVar38 = uVar40;
      }
      else {
        uVar38 = uVar41 * uVar40;
      }
      lVar24 = *(long *)(lVar24 + 0x10);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar26;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar38;
      lVar32 = SUB168(auVar6 * auVar13,8);
      uVar22 = *(uint *)(lVar24 + lVar32 * 4);
      uVar30 = SUB164(auVar6 * auVar13,8);
      if (uVar22 != 0) {
        uVar37 = 0;
        lVar33 = lVar32;
        uVar39 = uVar22;
        uVar31 = uVar30;
        while ((uVar41 != uVar39 || (*(ushort *)(*(long *)(lVar5 + lVar33 * 8) + 0x10) != param_2)))
        {
          uVar37 = uVar37 + 1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (uVar31 + 1) * uVar40;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar26;
          lVar33 = SUB168(auVar7 * auVar14,8);
          uVar39 = *(uint *)(lVar24 + lVar33 * 4);
          uVar31 = SUB164(auVar7 * auVar14,8);
          if ((uVar39 == 0) ||
             (auVar8._8_8_ = 0, auVar8._0_8_ = uVar39 * uVar40, auVar15._8_8_ = 0,
             auVar15._0_8_ = uVar26, auVar9._8_8_ = 0,
             auVar9._0_8_ = ((uVar42 + uVar31) - SUB164(auVar8 * auVar15,8)) * uVar40,
             auVar16._8_8_ = 0, auVar16._0_8_ = uVar26, SUB164(auVar9 * auVar16,8) < uVar37))
          goto LAB_00102250;
        }
        uVar39 = 0;
        while ((uVar41 != uVar22 || (*(ushort *)(*(long *)(lVar5 + lVar32 * 8) + 0x10) != param_2)))
        {
          uVar39 = uVar39 + 1;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (uVar30 + 1) * uVar40;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar26;
          lVar32 = SUB168(auVar10 * auVar17,8);
          uVar22 = *(uint *)(lVar24 + lVar32 * 4);
          uVar30 = SUB164(auVar10 * auVar17,8);
          if ((uVar22 == 0) ||
             (auVar11._8_8_ = 0, auVar11._0_8_ = uVar22 * uVar40, auVar18._8_8_ = 0,
             auVar18._0_8_ = uVar26, auVar12._8_8_ = 0,
             auVar12._0_8_ = ((uVar42 + uVar30) - SUB164(auVar11 * auVar18,8)) * uVar40,
             auVar19._8_8_ = 0, auVar19._0_8_ = uVar26, SUB164(auVar12 * auVar19,8) < uVar39)) {
            _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                             "FATAL: Condition \"!exists\" is true.",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar20 = (code *)invalidInstructionException();
            (*pcVar20)();
          }
        }
        lVar5 = *(long *)(lVar5 + (ulong)uVar30 * 8);
        if ((*(int *)(lVar5 + 0x20) == 1) ||
           ((*(int *)(lVar5 + 0x20) == 2 &&
            (iVar23 = Node::get_multiplayer_authority(), iVar23 == param_3)))) {
          bVar3 = *param_4;
          if ((char)bVar3 < '\0') {
            local_80 = (int *)0x0;
            uVar42 = 0;
            local_70 = (undefined8 *)0x0;
            if (param_6 < param_5) {
              uVar26 = 0x30;
              uVar42 = 1;
              uVar40 = 1;
LAB_00102355:
              local_70 = (undefined8 *)0x0;
              local_80 = (int *)0x0;
              puVar27 = (undefined8 *)Memory::alloc_static(uVar26,false);
              if (puVar27 == (undefined8 *)0x0) {
                _err_print_error("resize","./core/templates/cowdata.h",0x171,
                                 "Parameter \"mem_new\" is null.",0,0);
              }
              else {
                local_80 = (int *)(puVar27 + 2);
                *puVar27 = 1;
                puVar27[1] = 0;
                *(undefined4 *)(puVar27 + 2) = 0;
                *(undefined1 (*) [16])(puVar27 + 3) = (undefined1  [16])0x0;
                if (uVar40 != 1) {
                  lVar24 = 0x18;
                  do {
                    puVar34 = (undefined4 *)((long)local_80 + lVar24);
                    lVar24 = lVar24 + 0x18;
                    *puVar34 = 0;
                    *(undefined1 (*) [16])(puVar34 + 2) = (undefined1  [16])0x0;
                  } while (lVar24 != uVar40 * 0x18);
                }
                if (local_80 == (int *)0x0) {
                  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
                  pcVar20 = (code *)invalidInstructionException();
                  (*pcVar20)();
                }
                puVar27[1] = uVar40;
              }
              if (local_70 == (undefined8 *)0x0) {
                uVar26 = uVar40 * 8 - 1;
                uVar26 = uVar26 | uVar26 >> 1;
                uVar26 = uVar26 | uVar26 >> 2;
                uVar26 = uVar26 | uVar26 >> 4;
                puVar27 = (undefined8 *)Memory::alloc_static((uVar26 | uVar26 >> 8) + 0x11,false);
                if (puVar27 == (undefined8 *)0x0) {
                  _err_print_error("resize","./core/templates/cowdata.h",0x171,
                                   "Parameter \"mem_new\" is null.",0,0);
                }
                else {
                  local_70 = puVar27 + 2;
                  *puVar27 = 1;
                  puVar27[1] = uVar40;
                }
              }
            }
          }
          else {
            if (param_6 == param_5) {
              if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                pcVar29 = "Condition \"p_offset >= p_packet_len\" is true.";
                uVar35 = 0x108;
                goto LAB_001029d8;
              }
              goto LAB_00102d20;
            }
            local_80 = (int *)0x0;
            local_70 = (undefined8 *)0x0;
            bVar4 = param_4[param_6];
            uVar40 = (ulong)bVar4;
            uVar42 = (uint)bVar4;
            param_6 = param_6 + 1;
            if (bVar4 != 0) {
              uVar26 = uVar40 * 0x18 - 1;
              uVar26 = uVar26 >> 1 | uVar26;
              uVar26 = uVar26 >> 2 | uVar26;
              uVar26 = uVar26 >> 4 | uVar26;
              uVar26 = (uVar26 >> 8 | uVar26) + 0x11;
              uVar42 = (uint)bVar4;
              goto LAB_00102355;
            }
          }
          local_a0 = 0;
          local_60 = 6;
          uStack_5c = 0;
          lVar24 = *(long *)(param_1 + 0x60);
          local_68 = 0x105bf9;
          uStack_64 = 0;
          String::parse_latin1((StrRange *)&local_a0);
          local_98 = lVar24;
          StringName::StringName((StringName *)&local_68,"multiplayer:rpc",false);
          cVar21 = EngineDebugger::is_profiling((StringName *)&local_68);
          if ((StringName::configured != '\0') && (CONCAT44(uStack_64,local_68) != 0)) {
            StringName::unref();
          }
          if (cVar21 != '\0') {
            Array::Array((Array *)&local_90);
            Variant::Variant((Variant *)local_58,(String_conflict *)&local_a0);
            Array::push_back((Variant *)&local_90);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            Variant::Variant((Variant *)local_58,(ObjectID *)&local_98);
            Array::push_back((Variant *)&local_90);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            Variant::Variant((Variant *)local_58,param_5);
            Array::push_back((Variant *)&local_90);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            StringName::StringName((StringName *)&local_68,"multiplayer:rpc",false);
            EngineDebugger::profiler_add_frame_data((StringName *)&local_68,(Array *)&local_90);
            if ((StringName::configured != '\0') && (CONCAT44(uStack_64,local_68) != 0)) {
              StringName::unref();
            }
            Array::~Array((Array *)&local_90);
          }
          lVar24 = local_a0;
          if (local_a0 != 0) {
            LOCK();
            plVar1 = (long *)(local_a0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_a0 = 0;
              Memory::free_static((void *)(lVar24 + -0x10),false);
            }
          }
          bVar43 = (bool)SceneMultiplayer::is_object_decoding_allowed();
          MultiplayerAPI::decode_and_decompress_variants
                    ((Vector *)&local_88,param_4 + param_6,param_5 - param_6,(int *)&local_a0,
                     (bool)(bVar3 >> 7),bVar43);
          puVar27 = local_70;
          if (uVar42 != 0) {
            lVar24 = 0;
LAB_00102513:
            do {
              puVar27 = local_70;
              if (local_80 == (int *)0x0) {
                lVar32 = 0;
LAB_00102683:
                _err_print_index_error
                          ("get","./core/templates/cowdata.h",0xdb,lVar24,lVar32,"p_index","size()",
                           "",false,true);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar20 = (code *)invalidInstructionException();
                (*pcVar20)();
              }
              lVar32 = *(long *)(local_80 + -2);
              if (lVar32 <= lVar24) goto LAB_00102683;
              piVar2 = local_80 + lVar24 * 6;
              if (local_70 == (undefined8 *)0x0) {
                lVar32 = 0;
LAB_00102773:
                _err_print_index_error
                          ("operator[]","./core/templates/vector.h",0x38,lVar24,lVar32,"p_index",
                           "((Vector<T> *)(this))->_cowdata.size()","",false,true);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar20 = (code *)invalidInstructionException();
                (*pcVar20)();
              }
              lVar32 = local_70[-1];
              if (lVar32 <= lVar24) goto LAB_00102773;
              plVar1 = local_70 + -2;
              if (1 < (ulong)local_70[-2]) {
                lVar32 = local_70[-1];
                uVar40 = 0x10;
                sVar25 = lVar32 * 8;
                if (sVar25 != 0) {
                  uVar40 = sVar25 - 1 | sVar25 - 1 >> 1;
                  uVar40 = uVar40 | uVar40 >> 2;
                  uVar40 = uVar40 | uVar40 >> 4;
                  uVar40 = uVar40 | uVar40 >> 8;
                  uVar40 = uVar40 | uVar40 >> 0x10;
                  uVar40 = (uVar40 | uVar40 >> 0x20) + 0x11;
                }
                puVar28 = (undefined8 *)Memory::alloc_static(uVar40,false);
                if (puVar28 != (undefined8 *)0x0) {
                  *puVar28 = 1;
                  puVar28[1] = lVar32;
                  puVar27 = (undefined8 *)memcpy(puVar28 + 2,puVar27,sVar25);
                  LOCK();
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    Memory::free_static(plVar1,false);
                  }
                  puVar27[lVar24] = piVar2;
                  lVar24 = lVar24 + 1;
                  local_70 = puVar27;
                  if (lVar24 == (int)uVar42) break;
                  goto LAB_00102513;
                }
                _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                                 "Parameter \"mem_new\" is null.",0,0);
              }
              puVar27[lVar24] = piVar2;
              lVar24 = lVar24 + 1;
            } while (lVar24 != (int)uVar42);
          }
          local_68 = 0;
          uStack_64 = 0;
          local_60 = 0;
          (**(code **)(*(long *)param_1 + 0x68))
                    (local_58,param_1,(Variant **)(lVar5 + 0x18),puVar27,uVar42,
                     (StringName *)&local_68);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (local_68 != 0) {
            Variant::get_call_error_text
                      ((Object *)&local_98,(StringName *)param_1,(Variant **)(lVar5 + 0x18),
                       (int)puVar27,(CallError *)(ulong)uVar42);
            operator+((char *)&local_90,(String_conflict *)"RPC - ");
            lVar24 = local_90;
            lVar5 = local_98;
            if (local_98 == local_90) {
              lVar32 = local_98;
              if (local_98 != 0) {
                LOCK();
                plVar1 = (long *)(local_98 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_90 = 0;
                  Memory::free_static((void *)(lVar24 + -0x10),false);
                  lVar32 = local_98;
                }
              }
            }
            else {
              lVar32 = local_90;
              if (local_98 != 0) {
                LOCK();
                plVar1 = (long *)(local_98 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                lVar32 = local_90;
                if (*plVar1 == 0) {
                  local_98 = 0;
                  Memory::free_static((void *)(lVar5 + -0x10),false);
                  lVar32 = local_90;
                }
              }
            }
            local_98 = lVar32;
            _err_print_error("_process_rpc","modules/multiplayer/scene_rpc_interface.cpp",0x122,
                             (Object *)&local_98,0,0);
            lVar5 = local_98;
            if (local_98 != 0) {
              LOCK();
              plVar1 = (long *)(local_98 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_98 = 0;
                Memory::free_static((void *)(lVar5 + -0x10),false);
              }
            }
          }
          if (puVar27 != (undefined8 *)0x0) {
            plVar1 = puVar27 + -2;
            LOCK();
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static(plVar1,false);
            }
          }
          piVar2 = local_80;
          if (local_80 != (int *)0x0) {
            LOCK();
            plVar1 = (long *)(local_80 + -4);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              if (local_80 == (int *)0x0) {
                    /* WARNING: Does not return */
                pcVar20 = (code *)invalidInstructionException();
                (*pcVar20)();
              }
              lVar5 = *(long *)(local_80 + -2);
              lVar24 = 0;
              local_80 = (int *)0x0;
              piVar36 = piVar2;
              if (lVar5 != 0) {
                do {
                  if (Variant::needs_deinit[*piVar36] != '\0') {
                    Variant::_clear_internal();
                  }
                  lVar24 = lVar24 + 1;
                  piVar36 = piVar36 + 6;
                } while (lVar5 != lVar24);
              }
              Memory::free_static(piVar2 + -4,false);
            }
          }
        }
        else {
          local_78 = 0;
          local_68 = 0x105b20;
          uStack_64 = 0;
          local_60 = 1;
          uStack_5c = 0;
          String::parse_latin1((StrRange *)&local_78);
          Node::get_multiplayer_authority();
          itos((long)&local_90);
          local_68 = 0x105baf;
          uStack_64 = 0;
          local_a0 = 0;
          local_60 = 0xf;
          uStack_5c = 0;
          String::parse_latin1((StrRange *)&local_a0);
          itos((long)&local_b0);
          local_c0 = 0;
          local_68 = 0x105bbf;
          uStack_64 = 0;
          local_60 = 10;
          uStack_5c = 0;
          String::parse_latin1((StrRange *)&local_c0);
          itos((long)&local_d0);
          local_e0 = 0;
          local_68 = 0x105bca;
          uStack_64 = 0;
          local_60 = 7;
          uStack_5c = 0;
          String::parse_latin1((StrRange *)&local_e0);
          Node::get_path();
          NodePath::operator_cast_to_String((NodePath *)&local_f0);
          local_108 = 0;
          local_68 = 0x105bd2;
          uStack_64 = 0;
          local_60 = 0x19;
          uStack_5c = 0;
          String::parse_latin1((StrRange *)&local_108);
          lVar5 = *(long *)(lVar5 + 0x18);
          if (lVar5 == 0) {
LAB_00102bd3:
            local_118 = 0;
          }
          else {
            pcVar29 = *(char **)(lVar5 + 8);
            local_118 = 0;
            if (pcVar29 == (char *)0x0) {
              plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
              if (*(long *)(lVar5 + 0x10) != 0) {
                while (lVar24 = *plVar1, lVar24 != 0) {
                  LOCK();
                  lVar32 = *plVar1;
                  bVar43 = lVar24 == lVar32;
                  if (bVar43) {
                    *plVar1 = lVar24 + 1;
                    lVar32 = lVar24;
                  }
                  UNLOCK();
                  if (bVar43) {
                    if (lVar32 != -1) {
                      local_118 = *(long *)(lVar5 + 0x10);
                    }
                    goto LAB_00101d1e;
                  }
                }
              }
              goto LAB_00102bd3;
            }
            sVar25 = strlen(pcVar29);
            local_68 = (int)pcVar29;
            uStack_64 = (undefined4)((ulong)pcVar29 >> 0x20);
            local_60 = (undefined4)sVar25;
            uStack_5c = (undefined4)(sVar25 >> 0x20);
            String::parse_latin1((StrRange *)&local_118);
          }
LAB_00101d1e:
          operator+((char *)&local_110,(String_conflict *)"RPC \'");
          String::operator+((String_conflict *)&local_100,(String_conflict *)&local_110);
          String::operator+((String_conflict *)&local_e8,(String_conflict *)&local_100);
          String::operator+((String_conflict *)&local_d8,(String_conflict *)&local_e8);
          String::operator+((String_conflict *)&local_c8,(String_conflict *)&local_d8);
          String::operator+((String_conflict *)&local_b8,(String_conflict *)&local_c8);
          String::operator+((String_conflict *)&local_a8,(String_conflict *)&local_b8);
          String::operator+((String_conflict *)&local_98,(String_conflict *)&local_a8);
          String::operator+((String_conflict *)&local_88,(String_conflict *)&local_98);
          String::operator+((String_conflict *)&local_68,(String_conflict *)&local_88);
          _err_print_error("_process_rpc","modules/multiplayer/scene_rpc_interface.cpp",0xfc,
                           "Condition \"!can_call\" is true.",(String_conflict *)&local_68,0,0);
          if (CONCAT44(uStack_64,local_68) != 0) {
            LOCK();
            plVar1 = (long *)(CONCAT44(uStack_64,local_68) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar5 = CONCAT44(uStack_64,local_68);
              local_68 = 0;
              uStack_64 = 0;
              Memory::free_static((void *)(lVar5 + -0x10),false);
            }
          }
          lVar5 = local_88;
          if (local_88 != 0) {
            LOCK();
            plVar1 = (long *)(local_88 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_88 = 0;
              Memory::free_static((void *)(lVar5 + -0x10),false);
            }
          }
          lVar5 = local_98;
          if (local_98 != 0) {
            LOCK();
            plVar1 = (long *)(local_98 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_98 = 0;
              Memory::free_static((void *)(lVar5 + -0x10),false);
            }
          }
          lVar5 = local_a8;
          if (local_a8 != 0) {
            LOCK();
            plVar1 = (long *)(local_a8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_a8 = 0;
              Memory::free_static((void *)(lVar5 + -0x10),false);
            }
          }
          lVar5 = local_b8;
          if (local_b8 != 0) {
            LOCK();
            plVar1 = (long *)(local_b8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_b8 = 0;
              Memory::free_static((void *)(lVar5 + -0x10),false);
            }
          }
          lVar5 = local_c8;
          if (local_c8 != 0) {
            LOCK();
            plVar1 = (long *)(local_c8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_c8 = 0;
              Memory::free_static((void *)(lVar5 + -0x10),false);
            }
          }
          lVar5 = local_d8;
          if (local_d8 != 0) {
            LOCK();
            plVar1 = (long *)(local_d8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_d8 = 0;
              Memory::free_static((void *)(lVar5 + -0x10),false);
            }
          }
          lVar5 = local_e8;
          if (local_e8 != 0) {
            LOCK();
            plVar1 = (long *)(local_e8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_e8 = 0;
              Memory::free_static((void *)(lVar5 + -0x10),false);
            }
          }
          lVar5 = local_100;
          if (local_100 != 0) {
            LOCK();
            plVar1 = (long *)(local_100 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_100 = 0;
              Memory::free_static((void *)(lVar5 + -0x10),false);
            }
          }
          lVar5 = local_110;
          if (local_110 != 0) {
            LOCK();
            plVar1 = (long *)(local_110 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_110 = 0;
              Memory::free_static((void *)(lVar5 + -0x10),false);
            }
          }
          lVar5 = local_118;
          if (local_118 != 0) {
            LOCK();
            plVar1 = (long *)(local_118 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_118 = 0;
              Memory::free_static((void *)(lVar5 + -0x10),false);
            }
          }
          lVar5 = local_108;
          if (local_108 != 0) {
            LOCK();
            plVar1 = (long *)(local_108 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_108 = 0;
              Memory::free_static((void *)(lVar5 + -0x10),false);
            }
          }
          lVar5 = local_f0;
          if (local_f0 != 0) {
            LOCK();
            plVar1 = (long *)(local_f0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_f0 = 0;
              Memory::free_static((void *)(lVar5 + -0x10),false);
            }
          }
          NodePath::~NodePath(local_f8);
          lVar5 = local_e0;
          if (local_e0 != 0) {
            LOCK();
            plVar1 = (long *)(local_e0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_e0 = 0;
              Memory::free_static((void *)(lVar5 + -0x10),false);
            }
          }
          lVar5 = local_d0;
          if (local_d0 != 0) {
            LOCK();
            plVar1 = (long *)(local_d0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_d0 = 0;
              Memory::free_static((void *)(lVar5 + -0x10),false);
            }
          }
          lVar5 = local_c0;
          if (local_c0 != 0) {
            LOCK();
            plVar1 = (long *)(local_c0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_c0 = 0;
              Memory::free_static((void *)(lVar5 + -0x10),false);
            }
          }
          lVar5 = local_b0;
          if (local_b0 != 0) {
            LOCK();
            plVar1 = (long *)(local_b0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_b0 = 0;
              Memory::free_static((void *)(lVar5 + -0x10),false);
            }
          }
          lVar5 = local_a0;
          if (local_a0 != 0) {
            LOCK();
            plVar1 = (long *)(local_a0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_a0 = 0;
              Memory::free_static((void *)(lVar5 + -0x10),false);
            }
          }
          lVar5 = local_90;
          if (local_90 != 0) {
            LOCK();
            plVar1 = (long *)(local_90 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_90 = 0;
              Memory::free_static((void *)(lVar5 + -0x10),false);
            }
          }
          lVar5 = local_78;
          if (local_78 != 0) {
            LOCK();
            plVar1 = (long *)(local_78 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_78 = 0;
              Memory::free_static((void *)(lVar5 + -0x10),false);
            }
          }
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
        goto LAB_00102d20;
      }
    }
LAB_00102250:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_process_rpc","modules/multiplayer/scene_rpc_interface.cpp",0xec,
                       "Condition \"!cache_config.configs.has(p_rpc_method_id)\" is true.",0,0);
      return;
    }
  }
LAB_00102d20:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneRPCInterface::process_rpc(int, unsigned char const*, int) */

ulong __thiscall
SceneRPCInterface::process_rpc(SceneRPCInterface *this,int param_1,uchar *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  uint uVar5;
  Node *pNVar6;
  long lVar7;
  ulong uVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  
  if (param_3 < 1) {
    uVar8 = _err_print_error("process_rpc","modules/multiplayer/scene_rpc_interface.cpp",0xa2,
                             "Condition \"p_packet_len < packet_min_size\" is true.",
                             "Invalid packet received. Size too small.",0,0);
    return uVar8;
  }
  uVar5 = (int)(uint)*param_2 >> 4 & 3;
  if (uVar5 == 3) {
    uVar8 = _err_print_error("process_rpc","modules/multiplayer/scene_rpc_interface.cpp",0xb5,
                             "Method/function failed.",
                             "Was not possible to extract the node id compression mode.",0,0);
    return uVar8;
  }
  uVar10 = (int)(uint)*param_2 >> 6 & 1;
  iVar2 = *(int *)(CSWTCH_700 + (ulong)uVar5 * 4);
  uVar1 = (uVar10 != 0) + 1 + iVar2;
  uVar8 = (ulong)uVar1;
  if (param_3 < (int)uVar1) {
    uVar8 = _err_print_error("process_rpc","modules/multiplayer/scene_rpc_interface.cpp",0xc1,
                             "Condition \"p_packet_len < packet_min_size\" is true.",
                             "Invalid packet received. Size too small.",0,0);
  }
  else {
    uVar11 = (uint)param_2[1];
    if (uVar5 == 1) {
      uVar11 = (uint)*(ushort *)(param_2 + 1);
    }
    else if (uVar5 == 2) {
      lVar7 = 0;
      uVar11 = 0;
      do {
        lVar4 = lVar7 + 1;
        cVar3 = (char)lVar7;
        lVar7 = lVar7 + 1;
        uVar11 = uVar11 | (uint)param_2[lVar4] << (cVar3 * '\b' & 0x1fU);
      } while (lVar7 != 4);
    }
    pNVar6 = (Node *)_process_get_node(this,param_1,param_2,uVar11,param_3);
    if (pNVar6 == (Node *)0x0) {
      uVar8 = _err_print_error("process_rpc","modules/multiplayer/scene_rpc_interface.cpp",0xd4,
                               "Parameter \"node\" is null.",
                               "Invalid packet received. Requested node was not found.",0,0);
    }
    else {
      uVar9 = (ushort)(byte)*(ushort *)(param_2 + iVar2);
      if (uVar10 != 0) {
        uVar9 = *(ushort *)(param_2 + iVar2);
      }
      if ((int)uVar11 < 0) {
        param_3 = uVar11 & 0x7fffffff;
      }
      _process_rpc(this,pNVar6,uVar9,param_1,param_2,param_3,uVar1);
    }
  }
  return uVar8;
}



/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this,long param_1)

{
  CowData<unsigned_char> *pCVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  CowData<unsigned_char> *pCVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  CowData<unsigned_char> *pCVar9;
  long lVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
LAB_00103126:
    lVar10 = 0;
    pCVar6 = (CowData<unsigned_char> *)0x0;
  }
  else {
    lVar10 = *(long *)(lVar3 + -8);
    if (param_1 == lVar10) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar2 = (long *)(lVar3 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    if (lVar10 == 0) goto LAB_00103126;
    uVar5 = lVar10 - 1U | lVar10 - 1U >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    pCVar6 = (CowData<unsigned_char> *)((uVar5 | uVar5 >> 0x20) + 1);
  }
  uVar5 = param_1 - 1U | param_1 - 1U >> 1;
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  uVar5 = uVar5 | uVar5 >> 8;
  uVar5 = uVar5 | uVar5 >> 0x10;
  pCVar9 = (CowData<unsigned_char> *)(uVar5 | uVar5 >> 0x20);
  pCVar1 = pCVar9 + 1;
  if (param_1 <= lVar10) {
    if ((pCVar1 != pCVar6) && (iVar4 = _realloc(this,(long)pCVar1), iVar4 != 0)) {
      return;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return;
    }
    FUN_00105cd2();
    return;
  }
  if (pCVar1 != pCVar6) {
    if (lVar10 == 0) {
      puVar7 = (undefined8 *)Memory::alloc_static((ulong)(pCVar9 + 0x11),false);
      if (puVar7 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
        return;
      }
      puVar8 = puVar7 + 2;
      *puVar7 = 1;
      puVar7[1] = 0;
      *(undefined8 **)this = puVar8;
      goto LAB_0010307c;
    }
    pCVar9 = this;
    iVar4 = _realloc(this,(long)pCVar1);
    if (iVar4 != 0) {
      return;
    }
  }
  puVar8 = *(undefined8 **)this;
  if (puVar8 == (undefined8 *)0x0) {
    resize<false>((long)pCVar9);
    return;
  }
LAB_0010307c:
  puVar8[-1] = param_1;
  return;
}



/* SceneRPCInterface::_send_rpc(Node*, int, unsigned short, SceneRPCInterface::RPCConfig const&,
   StringName const&, Variant const**, int) */

void __thiscall
SceneRPCInterface::_send_rpc
          (SceneRPCInterface *this,Node *param_1,int param_2,ushort param_3,RPCConfig *param_4,
          StringName *param_5,Variant **param_6,int param_7)

{
  ulong uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  code *pcVar11;
  undefined1 auVar12 [16];
  char cVar13;
  char cVar14;
  byte bVar15;
  byte bVar16;
  bool bVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  void *pvVar21;
  ulong uVar22;
  void *pvVar23;
  uint *puVar24;
  void *pvVar25;
  void *pvVar26;
  char *pcVar27;
  size_t sVar28;
  undefined1 *puVar29;
  long lVar30;
  uint uVar31;
  undefined8 uVar32;
  uint uVar33;
  CowData<unsigned_char> *this_00;
  ulong uVar34;
  long lVar35;
  ObjectID *pOVar36;
  uint uVar37;
  uint *puVar38;
  long lVar39;
  char *pcVar40;
  long lVar41;
  long *plVar42;
  long in_FS_OFFSET;
  undefined1 local_140;
  char local_138;
  char local_120;
  bool local_d1;
  uint local_d0;
  int local_cc;
  Object *local_c8;
  undefined8 local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  char *local_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(**(long **)(this + 0x180) + 0x160))(&local_c8);
  if (local_c8 == (Object *)0x0) {
    _err_print_error("_send_rpc","modules/multiplayer/scene_rpc_interface.cpp",0x128,
                     "Condition \"peer.is_null()\" is true.",
                     "Attempt to call RPC without active multiplayer peer.",0,0);
    goto LAB_001034d8;
  }
  iVar18 = (**(code **)(*(long *)local_c8 + 0x210))();
  if (iVar18 == 1) {
    _err_print_error("_send_rpc","modules/multiplayer/scene_rpc_interface.cpp",0x12a,
                     "Condition \"peer->get_connection_status() == MultiplayerPeer::CONNECTION_CONNECTING\" is true."
                     ,"Attempt to call RPC while multiplayer peer is not connected yet.",0,0);
    goto LAB_001034d8;
  }
  iVar18 = (**(code **)(*(long *)local_c8 + 0x210))();
  if (iVar18 == 0) {
    _err_print_error("_send_rpc","modules/multiplayer/scene_rpc_interface.cpp",300,
                     "Condition \"peer->get_connection_status() == MultiplayerPeer::CONNECTION_DISCONNECTED\" is true."
                     ,"Attempt to call RPC while multiplayer peer is disconnected.",0,0);
    goto LAB_001034d8;
  }
  if (0xff < param_7) {
    _err_print_error("_send_rpc","modules/multiplayer/scene_rpc_interface.cpp",0x12e,
                     "Condition \"p_argcount > 255\" is true.","Too many arguments (>255).",0,0);
    goto LAB_001034d8;
  }
  iVar18 = (int)param_1;
  if (param_2 != 0) {
    plVar42 = *(long **)(this + 0x180);
    uVar33 = *(uint *)((long)plVar42 + 0x1fc);
    uVar19 = *(uint *)(plVar42 + 0x3f);
    if (uVar33 != 0) {
      uVar31 = (&hash_table_size_primes)[uVar19];
      uVar34 = CONCAT44(0,uVar31);
      uVar1 = uVar34 * 4;
      pvVar23 = (void *)Memory::alloc_static(uVar1,false);
      pvVar25 = (void *)Memory::alloc_static(uVar1,false);
      pvVar26 = (void *)Memory::alloc_static(uVar1,false);
      pvVar21 = (void *)Memory::alloc_static(uVar1,false);
      lVar41 = 0;
      lVar35 = plVar42[0x3b];
      lVar30 = plVar42[0x3d];
      do {
        *(undefined4 *)((long)pvVar25 + lVar41) = *(undefined4 *)(lVar35 + lVar41);
        *(undefined4 *)((long)pvVar26 + lVar41) = *(undefined4 *)(lVar30 + lVar41);
        lVar41 = lVar41 + 4;
      } while (lVar41 != (ulong)uVar33 << 2);
      if (uVar31 != 0) {
        lVar35 = plVar42[0x3e];
        lVar30 = plVar42[0x3c];
        uVar22 = 0;
        do {
          *(undefined4 *)((long)pvVar23 + uVar22) = *(undefined4 *)(lVar35 + uVar22);
          *(undefined4 *)((long)pvVar21 + uVar22) = *(undefined4 *)(lVar30 + uVar22);
          uVar22 = uVar22 + 4;
        } while (uVar1 != uVar22);
      }
      uVar33 = -param_2;
      if (0 < param_2) {
        uVar33 = param_2;
      }
      uVar1 = *(ulong *)(hash_table_size_primes_inv + (ulong)uVar19 * 8);
      uVar19 = (uVar33 >> 0x10 ^ uVar33) * -0x7a143595;
      uVar19 = (uVar19 ^ uVar19 >> 0xd) * -0x3d4d51cb;
      uVar37 = uVar19 ^ uVar19 >> 0x10;
      if (uVar19 == uVar19 >> 0x10) {
        uVar37 = 1;
        uVar22 = uVar1;
      }
      else {
        uVar22 = uVar37 * uVar1;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar34;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar22;
      lVar35 = SUB168(auVar3 * auVar7,8);
      uVar19 = *(uint *)((long)pvVar23 + lVar35 * 4);
      uVar22 = (ulong)uVar19;
      iVar20 = SUB164(auVar3 * auVar7,8);
      if (uVar19 == 0) {
        bVar17 = true;
        if (uVar31 != 0) goto LAB_00103abf;
        Memory::free_static(pvVar25,false);
        Memory::free_static(pvVar26,false);
        Memory::free_static(pvVar21,false);
        Memory::free_static(pvVar23,false);
      }
      else {
        uVar19 = 0;
        do {
          if (((uint)uVar22 == uVar37) &&
             (*(uint *)((long)pvVar25 + (ulong)*(uint *)((long)pvVar21 + lVar35 * 4) * 4) == uVar33)
             ) {
            bVar17 = false;
            goto LAB_00103aba;
          }
          uVar19 = uVar19 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (iVar20 + 1) * uVar1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = uVar34;
          lVar35 = SUB168(auVar4 * auVar8,8);
          uVar2 = *(uint *)((long)pvVar23 + lVar35 * 4);
          uVar22 = (ulong)uVar2;
          iVar20 = SUB164(auVar4 * auVar8,8);
        } while ((uVar2 != 0) &&
                (auVar5._8_8_ = 0, auVar5._0_8_ = uVar22 * uVar1, auVar9._8_8_ = 0,
                auVar9._0_8_ = uVar34, auVar6._8_8_ = 0,
                auVar6._0_8_ = ((iVar20 + uVar31) - SUB164(auVar5 * auVar9,8)) * uVar1,
                auVar10._8_8_ = 0, auVar10._0_8_ = uVar34, uVar19 <= SUB164(auVar6 * auVar10,8)));
        bVar17 = true;
LAB_00103aba:
        if (uVar31 != 0) {
LAB_00103abf:
          memset(pvVar23,0,uVar34 * 4);
        }
        Memory::free_static(pvVar25,false);
        Memory::free_static(pvVar26,false);
        Memory::free_static(pvVar21,false);
        Memory::free_static(pvVar23,false);
        if (!bVar17) {
          local_68 = 2;
          local_d0 = 0xffffffff;
          pOVar36 = *(ObjectID **)(this + 400);
          local_c0 = *(undefined8 *)(param_1 + 0x60);
          local_88 = (undefined1  [16])0x0;
          local_78 = (undefined1  [16])0x0;
          if (param_2 < 1) goto LAB_00103279;
          cVar13 = SceneReplicationInterface::is_rpc_visible(pOVar36,(int)&local_c0);
          if (cVar13 != '\0') {
            HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert
                      ((int *)&local_98);
            bVar16 = SceneCacheInterface::send_object_cache
                               (*(Object **)(this + 0x188),iVar18,(int *)(ulong)(uint)param_2);
            goto LAB_001032b2;
          }
          itos((long)&local_a0);
          operator+((char *)&local_98,
                    (String_conflict *)
                    "Attempt to call an RPC to a peer that cannot see this node. Peer ID: ");
          _err_print_error("_send_rpc","modules/multiplayer/scene_rpc_interface.cpp",0x13c,
                           "Condition \"!multiplayer_replicator->is_rpc_visible(oid, p_to)\" is true."
                           ,&local_98,0,0);
          pcVar27 = local_98;
          if (local_98 != (char *)0x0) {
            LOCK();
            plVar42 = (long *)(local_98 + -0x10);
            *plVar42 = *plVar42 + -1;
            UNLOCK();
            if (*plVar42 == 0) {
              local_98 = (char *)0x0;
              Memory::free_static(pcVar27 + -0x10,false);
            }
          }
          lVar35 = local_a0;
          if (local_a0 != 0) {
            LOCK();
            plVar42 = (long *)(local_a0 + -0x10);
            *plVar42 = *plVar42 + -1;
            UNLOCK();
            if (*plVar42 == 0) {
              local_a0 = 0;
              Memory::free_static((void *)(lVar35 + -0x10),false);
            }
          }
          if ((void *)local_88._0_8_ == (void *)0x0) goto LAB_001034d8;
          pvVar25 = (void *)local_78._8_8_;
          pvVar23 = (void *)local_88._0_8_;
          if (local_68._4_4_ != 0) goto LAB_001048f6;
          goto LAB_00103a36;
        }
      }
      plVar42 = *(long **)(this + 0x180);
    }
    iVar18 = (**(code **)(*plVar42 + 0x168))(plVar42);
    local_98 = (char *)0x0;
    local_88._8_8_ = 1;
    local_88._0_8_ = &_LC10;
    if (param_2 == iVar18) {
      String::parse_latin1((StrRange *)&local_98);
      (**(code **)(**(long **)(this + 0x180) + 0x168))();
      itos((long)&local_a8);
      operator+((char *)&local_a0,
                (String_conflict *)"Attempt to call RPC on yourself! Peer unique ID: ");
      String::operator+((String_conflict *)local_88,(String_conflict *)&local_a0);
      pcVar27 = "Condition \"p_to == multiplayer->get_unique_id()\" is true.";
      uVar32 = 0x131;
    }
    else {
      String::parse_latin1((StrRange *)&local_98);
      itos((long)&local_a8);
      operator+((char *)&local_a0,(String_conflict *)"Attempt to call RPC with unknown peer ID: ");
      String::operator+((String_conflict *)local_88,(String_conflict *)&local_a0);
      pcVar27 = "Method/function failed.";
      uVar32 = 0x133;
    }
    _err_print_error("_send_rpc","modules/multiplayer/scene_rpc_interface.cpp",uVar32,pcVar27,
                     local_88,0,0);
    uVar32 = local_88._0_8_;
    if (local_88._0_8_ != 0) {
      LOCK();
      plVar42 = (long *)(local_88._0_8_ + -0x10);
      *plVar42 = *plVar42 + -1;
      UNLOCK();
      if (*plVar42 == 0) {
        auVar12._8_8_ = 0;
        auVar12._0_8_ = local_88._8_8_;
        local_88 = auVar12 << 0x40;
        Memory::free_static((void *)(uVar32 + -0x10),false);
      }
    }
    lVar35 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      plVar42 = (long *)(local_a0 + -0x10);
      *plVar42 = *plVar42 + -1;
      UNLOCK();
      if (*plVar42 == 0) {
        local_a0 = 0;
        Memory::free_static((void *)(lVar35 + -0x10),false);
      }
    }
    lVar35 = local_a8;
    if (local_a8 != 0) {
      LOCK();
      plVar42 = (long *)(local_a8 + -0x10);
      *plVar42 = *plVar42 + -1;
      UNLOCK();
      if (*plVar42 == 0) {
        local_a8 = 0;
        Memory::free_static((void *)(lVar35 + -0x10),false);
      }
    }
    pcVar27 = local_98;
    if (local_98 != (char *)0x0) {
      LOCK();
      plVar42 = (long *)(local_98 + -0x10);
      *plVar42 = *plVar42 + -1;
      UNLOCK();
      if (*plVar42 == 0) {
        local_98 = (char *)0x0;
        Memory::free_static(pcVar27 + -0x10,false);
      }
    }
    goto LAB_001034d8;
  }
  pOVar36 = *(ObjectID **)(this + 400);
  local_c0 = *(undefined8 *)(param_1 + 0x60);
LAB_00103279:
  local_68 = 2;
  local_78 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_d0 = 0xffffffff;
  bVar16 = 1;
  cVar13 = SceneReplicationInterface::is_rpc_visible(pOVar36,(int)&local_c0);
  lVar35 = *(long *)(this + 0x180);
  uVar33 = *(uint *)(lVar35 + 0x1fc);
  if (uVar33 != 0) {
    uVar19 = (&hash_table_size_primes)[*(uint *)(lVar35 + 0x1f8)];
    uVar1 = (ulong)uVar19 * 4;
    pvVar23 = (void *)Memory::alloc_static(uVar1,false);
    puVar24 = (uint *)Memory::alloc_static(uVar1,false);
    pvVar25 = (void *)Memory::alloc_static(uVar1,false);
    pvVar26 = (void *)Memory::alloc_static(uVar1,false);
    lVar30 = *(long *)(lVar35 + 0x1d8);
    lVar41 = *(long *)(lVar35 + 0x1e8);
    lVar39 = 0;
    do {
      *(undefined4 *)((long)puVar24 + lVar39) = *(undefined4 *)(lVar30 + lVar39);
      *(undefined4 *)((long)pvVar25 + lVar39) = *(undefined4 *)(lVar41 + lVar39);
      lVar39 = lVar39 + 4;
    } while ((ulong)uVar33 << 2 != lVar39);
    if (uVar19 != 0) {
      lVar30 = *(long *)(lVar35 + 0x1f0);
      lVar35 = *(long *)(lVar35 + 0x1e0);
      lVar41 = 0;
      do {
        *(undefined4 *)((long)pvVar23 + lVar41) = *(undefined4 *)(lVar30 + lVar41);
        *(undefined4 *)((long)pvVar26 + lVar41) = *(undefined4 *)(lVar35 + lVar41);
        lVar41 = lVar41 + 4;
      } while (uVar1 - lVar41 != 0);
    }
    iVar20 = 1;
    bVar16 = 1;
    puVar38 = puVar24;
    if (param_2 != 0) goto LAB_001039cf;
    do {
      if ((cVar13 != '\0') ||
         (cVar14 = SceneReplicationInterface::is_rpc_visible
                             (*(ObjectID **)(this + 400),(int)&local_c0), cVar14 != '\0')) {
        HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert((int *)&local_98);
        bVar15 = SceneCacheInterface::send_object_cache
                           (*(Object **)(this + 0x188),iVar18,(int *)(ulong)*puVar38);
        bVar16 = bVar16 & bVar15;
      }
      do {
        if ((int)uVar33 <= iVar20) {
          if (uVar19 != 0) {
            memset(pvVar23,0,(ulong)uVar19 << 2);
          }
          Memory::free_static(puVar24,false);
          Memory::free_static(pvVar25,false);
          Memory::free_static(pvVar26,false);
          Memory::free_static(pvVar23,false);
          goto LAB_001032b2;
        }
        iVar20 = iVar20 + 1;
        puVar38 = puVar38 + 1;
        if (param_2 == 0) break;
LAB_001039cf:
      } while (param_2 + *puVar38 == 0);
    } while( true );
  }
LAB_001032b2:
  if (local_68._4_4_ == 0) {
joined_r0x00103a2b:
    pvVar25 = (void *)local_78._8_8_;
    pvVar23 = (void *)local_88._0_8_;
    if ((void *)local_88._0_8_ == (void *)0x0) goto LAB_001034d8;
  }
  else {
    local_d1 = false;
    if ((*(long *)(this + 0x1a0) == 0) || (*(long *)(*(long *)(this + 0x1a0) + -8) < 1)) {
      CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(this + 0x1a0),1);
      if (*(long *)(this + 0x1a0) == 0) {
LAB_00104700:
        lVar35 = 0;
      }
      else {
        lVar35 = *(long *)(*(long *)(this + 0x1a0) + -8);
        if (0 < lVar35) goto LAB_001032ea;
      }
LAB_00103998:
      lVar30 = 0;
      goto LAB_00103c20;
    }
LAB_001032ea:
    this_00 = (CowData<unsigned_char> *)(this + 0x1a0);
    CowData<unsigned_char>::_copy_on_write(this_00);
    **(undefined1 **)(this + 0x1a0) = 0;
    if (bVar16 == 0) {
      if ((*(long *)(this + 0x1a0) == 0) || (*(long *)(*(long *)(this + 0x1a0) + -8) < 5)) {
        CowData<unsigned_char>::resize<false>(this_00,5);
        if (*(long *)(this + 0x1a0) == 0) goto LAB_00104698;
        lVar35 = *(long *)(*(long *)(this + 0x1a0) + -8);
        if (lVar35 < 2) goto LAB_00103c00;
      }
      CowData<unsigned_char>::_copy_on_write(this_00);
      lVar35 = *(long *)(this + 0x1a0);
      puVar29 = (undefined1 *)(lVar35 + 1);
      uVar33 = local_d0;
      do {
        *puVar29 = (char)uVar33;
        puVar29 = puVar29 + 1;
        uVar33 = uVar33 >> 8;
      } while (puVar29 != (undefined1 *)(lVar35 + 5));
LAB_00103c71:
      local_138 = '\x02';
      lVar30 = 5;
      lVar41 = 5;
    }
    else {
      lVar35 = *(long *)(this + 0x1a0);
      if (local_d0 < 0x100) {
        if ((lVar35 == 0) || (uVar33 = local_d0, *(long *)(lVar35 + -8) < 2)) {
          CowData<unsigned_char>::resize<false>(this_00,2);
          uVar33 = local_d0 & 0xff;
          if (*(long *)(this + 0x1a0) == 0) goto LAB_00104698;
          lVar35 = *(long *)(*(long *)(this + 0x1a0) + -8);
          if (lVar35 < 2) goto LAB_00103c00;
        }
        lVar41 = 2;
        CowData<unsigned_char>::_copy_on_write(this_00);
        local_138 = '\0';
        lVar30 = 2;
        *(char *)(*(long *)(this + 0x1a0) + 1) = (char)uVar33;
      }
      else {
        if (0xffff < local_d0) {
          if ((lVar35 == 0) || (*(long *)(lVar35 + -8) < 5)) {
            CowData<unsigned_char>::resize<false>(this_00,5);
            if (*(long *)(this + 0x1a0) == 0) goto LAB_00104698;
            lVar35 = *(long *)(*(long *)(this + 0x1a0) + -8);
            if (lVar35 < 2) goto LAB_00103c00;
          }
          CowData<unsigned_char>::_copy_on_write(this_00);
          lVar35 = *(long *)(this + 0x1a0);
          puVar29 = (undefined1 *)(lVar35 + 1);
          uVar33 = local_d0;
          do {
            *puVar29 = (char)uVar33;
            puVar29 = puVar29 + 1;
            uVar33 = uVar33 >> 8;
          } while (puVar29 != (undefined1 *)(lVar35 + 5));
          goto LAB_00103c71;
        }
        if ((lVar35 == 0) || (*(long *)(lVar35 + -8) < 3)) {
          CowData<unsigned_char>::resize<false>(this_00,3);
          if (*(long *)(this + 0x1a0) == 0) {
LAB_00104698:
            lVar35 = 0;
          }
          else {
            lVar35 = *(long *)(*(long *)(this + 0x1a0) + -8);
            if (1 < lVar35) goto LAB_0010335d;
          }
LAB_00103c00:
          lVar30 = 1;
          goto LAB_00103c20;
        }
LAB_0010335d:
        lVar41 = 3;
        CowData<unsigned_char>::_copy_on_write(this_00);
        local_138 = '\x01';
        lVar30 = 3;
        *(undefined2 *)(*(long *)(this + 0x1a0) + 1) = (undefined2)local_d0;
      }
    }
    lVar35 = *(long *)(this + 0x1a0);
    if (param_3 < 0x100) {
      uVar33 = (int)lVar41 + 1;
      lVar39 = (long)(int)uVar33;
      if ((lVar35 == 0) || (lVar35 = *(long *)(lVar35 + -8), lVar35 < lVar39)) {
        CowData<unsigned_char>::resize<false>(this_00,lVar39);
        if (*(long *)(this + 0x1a0) == 0) {
LAB_00104923:
          lVar35 = 0;
          goto LAB_00103c20;
        }
        lVar35 = *(long *)(*(long *)(this + 0x1a0) + -8);
      }
      if (lVar35 <= lVar30) goto LAB_00103c20;
      CowData<unsigned_char>::_copy_on_write(this_00);
      local_140 = (undefined1)param_3;
      local_120 = '\0';
      *(undefined1 *)(*(long *)(this + 0x1a0) + lVar41) = local_140;
      lVar30 = lVar39;
    }
    else {
      uVar33 = (int)lVar41 + 2;
      lVar39 = (long)(int)uVar33;
      if ((lVar35 == 0) || (lVar35 = *(long *)(lVar35 + -8), lVar35 < lVar39)) {
        CowData<unsigned_char>::resize<false>(this_00,lVar39);
        if (*(long *)(this + 0x1a0) == 0) goto LAB_00104923;
        lVar35 = *(long *)(*(long *)(this + 0x1a0) + -8);
      }
      if (lVar35 <= lVar30) goto LAB_00103c20;
      CowData<unsigned_char>::_copy_on_write(this_00);
      local_120 = '\x01';
      *(ushort *)(*(long *)(this + 0x1a0) + lVar41) = param_3;
      lVar30 = lVar39;
    }
    bVar17 = (bool)SceneMultiplayer::is_object_decoding_allowed();
    iVar20 = MultiplayerAPI::encode_and_compress_variants
                       (param_6,param_7,(uchar *)0x0,&local_cc,&local_d1,bVar17);
    if (iVar20 != 0) {
      _err_print_error("_send_rpc","modules/multiplayer/scene_rpc_interface.cpp",0x192,
                       "Condition \"err != OK\" is true.",
                       "Unable to encode RPC arguments. THIS IS LIKELY A BUG IN THE ENGINE!",0,0);
      if ((void *)local_88._0_8_ == (void *)0x0) goto LAB_001034d8;
      pvVar25 = (void *)local_78._8_8_;
      pvVar23 = (void *)local_88._0_8_;
LAB_001048f6:
      if ((&hash_table_size_primes)[local_68 & 0xffffffff] != 0) {
        memset(pvVar25,0,(ulong)(uint)(&hash_table_size_primes)[local_68 & 0xffffffff] << 2);
      }
      goto LAB_00103a36;
    }
    lVar35 = *(long *)(this + 0x1a0);
    if (local_d1 == false) {
      uVar33 = uVar33 + 1;
      iVar20 = local_cc + uVar33;
      if (lVar35 != 0) {
        lVar35 = *(long *)(lVar35 + -8);
        if (lVar35 < iVar20) goto LAB_001043b0;
LAB_001040b6:
        if (lVar35 <= lVar30) goto LAB_00103c20;
        CowData<unsigned_char>::_copy_on_write(this_00);
        *(undefined1 *)(*(long *)(this + 0x1a0) + lVar30) = (undefined1)param_7;
        goto LAB_00103d44;
      }
      if (0 < iVar20) {
LAB_001043b0:
        CowData<unsigned_char>::resize<false>(this_00,(long)iVar20);
        if (*(long *)(this + 0x1a0) != 0) {
          lVar35 = *(long *)(*(long *)(this + 0x1a0) + -8);
          goto LAB_001040b6;
        }
      }
      goto LAB_001047a0;
    }
    iVar20 = uVar33 + local_cc;
    if (lVar35 == 0) {
      if (0 < iVar20) goto LAB_001043e8;
LAB_00103d4b:
      bVar17 = (bool)SceneMultiplayer::is_object_decoding_allowed();
      if (*(long *)(this + 0x1a0) == 0) goto LAB_001047a0;
      lVar35 = *(long *)(*(long *)(this + 0x1a0) + -8);
      if (lVar35 <= lVar30) goto LAB_00103c20;
      CowData<unsigned_char>::_copy_on_write(this_00);
      MultiplayerAPI::encode_and_compress_variants
                (param_6,param_7,(uchar *)(*(long *)(this + 0x1a0) + lVar30),&local_cc,&local_d1,
                 bVar17);
      uVar33 = uVar33 + local_cc;
    }
    else {
      if ((long)iVar20 <= *(long *)(lVar35 + -8)) goto LAB_00103d44;
LAB_001043e8:
      CowData<unsigned_char>::resize<false>(this_00,(long)iVar20);
LAB_00103d44:
      if (local_cc != 0) {
        lVar30 = (long)(int)uVar33;
        goto LAB_00103d4b;
      }
    }
    local_b0 = 0;
    local_90 = 7;
    lVar35 = *(long *)(param_1 + 0x60);
    local_98 = "rpc_out";
    String::parse_latin1((StrRange *)&local_b0);
    local_a8 = lVar35;
    StringName::StringName((StringName *)&local_98,"multiplayer:rpc",false);
    cVar13 = EngineDebugger::is_profiling((StringName *)&local_98);
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
    if (cVar13 != '\0') {
      Array::Array((Array *)&local_a0);
      Variant::Variant((Variant *)local_58,(String_conflict *)&local_b0);
      Array::push_back((Variant *)&local_a0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,(ObjectID *)&local_a8);
      Array::push_back((Variant *)&local_a0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,uVar33);
      Array::push_back((Variant *)&local_a0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      StringName::StringName((StringName *)&local_98,"multiplayer:rpc",false);
      EngineDebugger::profiler_add_frame_data((StringName *)&local_98,(Array *)&local_a0);
      if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
        StringName::unref();
      }
      Array::~Array((Array *)&local_a0);
    }
    lVar35 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      plVar42 = (long *)(local_b0 + -0x10);
      *plVar42 = *plVar42 + -1;
      UNLOCK();
      if (*plVar42 == 0) {
        local_b0 = 0;
        Memory::free_static((void *)(lVar35 + -0x10),false);
      }
    }
    cVar13 = local_d1 * -0x80;
    if (*(long *)(this + 0x1a0) == 0) goto LAB_00104700;
    lVar35 = *(long *)(*(long *)(this + 0x1a0) + -8);
    if (lVar35 < 1) goto LAB_00103998;
    CowData<unsigned_char>::_copy_on_write(this_00);
    **(char **)(this + 0x1a0) = cVar13 + local_138 * '\x10' + local_120 * '@';
    (**(code **)(*(long *)local_c8 + 400))(local_c8,*(undefined4 *)(param_4 + 0x14));
    (**(code **)(*(long *)local_c8 + 0x1a0))();
    if (bVar16 == 0) {
      if (local_138 != '\x02') {
        _err_print_error("_send_rpc","modules/multiplayer/scene_rpc_interface.cpp",0x1b4,
                         "FATAL: Condition \"node_id_compression != NETWORK_NODE_ID_COMPRESSION_32\" is true."
                         ,0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
      SceneMultiplayer::get_root_path();
      Node::get_path();
      NodePath::rel_path_to((NodePath *)&local_a0);
      NodePath::operator_cast_to_String((NodePath *)&local_98);
      String::utf8();
      pcVar27 = local_98;
      if (local_98 != (char *)0x0) {
        LOCK();
        plVar42 = (long *)(local_98 + -0x10);
        *plVar42 = *plVar42 + -1;
        UNLOCK();
        if (*plVar42 == 0) {
          local_98 = (char *)0x0;
          Memory::free_static(pcVar27 + -0x10,false);
        }
      }
      NodePath::~NodePath((NodePath *)&local_a0);
      NodePath::~NodePath((NodePath *)&local_a8);
      NodePath::~NodePath((NodePath *)&local_b0);
      pcVar27 = (char *)CharString::get_data();
      if (*pcVar27 == '\0') {
        iVar20 = 1;
      }
      else {
        sVar28 = strlen(pcVar27 + 1);
        iVar20 = (int)sVar28 + 2;
      }
      lVar41 = *(long *)(this + 0x1a0);
      iVar20 = iVar20 + uVar33;
      lVar30 = (long)(int)uVar33;
      if (lVar41 == 0) {
        if (iVar20 < 1) goto LAB_001047a0;
LAB_00104780:
        CowData<unsigned_char>::resize<false>(this_00,(long)iVar20);
        if ((int)uVar33 < 0) {
          if (*(long *)(this + 0x1a0) != 0) {
            lVar35 = *(long *)(*(long *)(this + 0x1a0) + -8);
            goto LAB_00103c20;
          }
        }
        else {
          lVar41 = *(long *)(this + 0x1a0);
          if (lVar41 != 0) goto LAB_001041f8;
        }
LAB_001047a0:
        lVar35 = 0;
LAB_00103c20:
        _err_print_index_error
                  ("operator[]","./core/templates/vector.h",0x38,lVar30,lVar35,"p_index",
                   "((Vector<T> *)(this))->_cowdata.size()","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
      lVar35 = *(long *)(lVar41 + -8);
      if (lVar35 < iVar20) goto LAB_00104780;
      if ((int)uVar33 < 0) goto LAB_00103c20;
LAB_001041f8:
      lVar35 = *(long *)(lVar41 + -8);
      if (lVar35 <= lVar30) goto LAB_00103c20;
      CowData<unsigned_char>::_copy_on_write(this_00);
      pcVar40 = (char *)(lVar30 + *(long *)(this + 0x1a0));
      pcVar27 = (char *)CharString::get_data();
      cVar13 = *pcVar27;
      if (cVar13 == '\0') {
        if (pcVar40 != (char *)0x0) goto LAB_00104243;
      }
      else if (pcVar40 == (char *)0x0) {
        do {
          pcVar27 = pcVar27 + 1;
        } while (*pcVar27 != '\0');
      }
      else {
        do {
          pcVar27 = pcVar27 + 1;
          *pcVar40 = cVar13;
          pcVar40 = pcVar40 + 1;
          cVar13 = *pcVar27;
        } while (cVar13 != '\0');
LAB_00104243:
        *pcVar40 = '\0';
      }
      iVar20 = local_68._4_4_;
      if (local_68._4_4_ != 0) {
        uVar32 = local_88._0_8_;
        lVar30 = 0;
        while( true ) {
          uVar19 = *(uint *)(uVar32 + lVar30 * 4);
          cVar13 = SceneCacheInterface::is_cache_confirmed(*(Node **)(this + 0x188),iVar18);
          if (cVar13 == '\0') {
            if (*(long *)(this + 0x1a0) == 0) goto LAB_00104698;
            lVar35 = *(long *)(*(long *)(this + 0x1a0) + -8);
            if (lVar35 < 2) goto LAB_00103c00;
            CowData<unsigned_char>::_copy_on_write(this_00);
            lVar35 = *(long *)(this + 0x1a0);
            uVar31 = uVar33 | 0x80000000;
            puVar29 = (undefined1 *)(lVar35 + 1);
            do {
              *puVar29 = (char)uVar31;
              puVar29 = puVar29 + 1;
              uVar31 = uVar31 >> 8;
            } while ((undefined1 *)(lVar35 + 5) != puVar29);
            SceneMultiplayer::send_command
                      ((int)*(undefined8 *)(this + 0x180),(uchar *)(ulong)uVar19,
                       (int)*(undefined8 *)(this + 0x1a0));
          }
          else {
            if (*(long *)(this + 0x1a0) == 0) goto LAB_00104698;
            lVar35 = *(long *)(*(long *)(this + 0x1a0) + -8);
            if (lVar35 < 2) goto LAB_00103c00;
            CowData<unsigned_char>::_copy_on_write(this_00);
            lVar35 = *(long *)(this + 0x1a0);
            puVar29 = (undefined1 *)(lVar35 + 1);
            uVar31 = local_d0;
            do {
              *puVar29 = (char)uVar31;
              puVar29 = puVar29 + 1;
              uVar31 = uVar31 >> 8;
            } while ((undefined1 *)(lVar35 + 5) != puVar29);
            SceneMultiplayer::send_command
                      ((int)*(undefined8 *)(this + 0x180),(uchar *)(ulong)uVar19,
                       (int)*(undefined8 *)(this + 0x1a0));
          }
          if (iVar20 <= (int)lVar30 + 1) break;
          lVar30 = lVar30 + 1;
        }
      }
      lVar35 = local_b8;
      if (local_b8 != 0) {
        LOCK();
        plVar42 = (long *)(local_b8 + -0x10);
        *plVar42 = *plVar42 + -1;
        UNLOCK();
        if (*plVar42 == 0) {
          local_b8 = 0;
          Memory::free_static((void *)(lVar35 + -0x10),false);
        }
      }
      if ((void *)local_88._0_8_ == (void *)0x0) goto LAB_001034d8;
      pvVar25 = (void *)local_78._8_8_;
      pvVar23 = (void *)local_88._0_8_;
      if (local_68._4_4_ == 0) goto LAB_00103a36;
    }
    else {
      iVar18 = local_68._4_4_;
      pvVar23 = (void *)local_88._0_8_;
      lVar35 = 0;
      if (local_68._4_4_ == 0) {
        goto joined_r0x00103a2b;
      }
      for (; SceneMultiplayer::send_command
                       ((int)*(undefined8 *)(this + 0x180),
                        (uchar *)(ulong)*(uint *)((long)pvVar23 + lVar35 * 4),
                        (int)*(undefined8 *)(this + 0x1a0)), (int)lVar35 + 1 < iVar18;
          lVar35 = lVar35 + 1) {
      }
      pvVar25 = (void *)local_78._8_8_;
    }
    if ((&hash_table_size_primes)[local_68 & 0xffffffff] != 0) {
      memset(pvVar25,0,(ulong)(uint)(&hash_table_size_primes)[local_68 & 0xffffffff] << 2);
    }
  }
LAB_00103a36:
  Memory::free_static(pvVar23,false);
  Memory::free_static((void *)local_78._0_8_,false);
  Memory::free_static((void *)local_88._8_8_,false);
  Memory::free_static(pvVar25,false);
LAB_001034d8:
  if (((local_c8 != (Object *)0x0) && (cVar13 = RefCounted::unreference(), cVar13 != '\0')) &&
     (cVar13 = predelete_handler(local_c8), cVar13 != '\0')) {
    (**(code **)(*(long *)local_c8 + 0x140))(local_c8);
    Memory::free_static(local_c8,false);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneRPCInterface::rpcp(Object*, int, StringName const&, Variant const**, int) */

undefined8 __thiscall
SceneRPCInterface::rpcp
          (SceneRPCInterface *this,Object *param_1,int param_2,StringName *param_3,Variant **param_4
          ,int param_5)

{
  ushort uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  char *pcVar5;
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
  code *pcVar30;
  Object *pOVar31;
  char *pcVar32;
  char cVar33;
  int iVar34;
  uint uVar35;
  undefined4 uVar36;
  Node *pNVar37;
  long lVar38;
  int iVar39;
  uint uVar40;
  long lVar41;
  ulong uVar42;
  long lVar43;
  undefined8 uVar44;
  uint uVar45;
  ulong uVar46;
  uint uVar47;
  uint uVar48;
  ulong uVar49;
  long in_FS_OFFSET;
  bool bVar50;
  Object *local_98;
  char *local_90;
  long local_88;
  long local_80;
  int local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  char *local_68;
  size_t local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(**(long **)(this + 0x180) + 0x160))(&local_98);
  pOVar31 = local_98;
  if (local_98 == (Object *)0x0) {
    uVar44 = 3;
    _err_print_error(&_LC92,"modules/multiplayer/scene_rpc_interface.cpp",0x1d0,
                     "Condition \"peer.is_null()\" is true. Returning: ERR_UNCONFIGURED",
                     "Trying to call an RPC while no multiplayer peer is active.",0,0);
    goto LAB_00105018;
  }
  if (((param_1 == (Object *)0x0) ||
      (pNVar37 = (Node *)__dynamic_cast(param_1,&Object::typeinfo,&Node::typeinfo,0),
      pNVar37 == (Node *)0x0)) || (((byte)pNVar37[0x2fa] & 0x40) == 0)) {
    _err_print_error(&_LC92,"modules/multiplayer/scene_rpc_interface.cpp",0x1d2,
                     "Condition \"!node || !node->is_inside_tree()\" is true. Returning: ERR_INVALID_PARAMETER"
                     ,"The object must be a valid Node inside the SceneTree",0,0);
  }
  else {
    iVar34 = (**(code **)(*(long *)pOVar31 + 0x210))(pOVar31);
    if (iVar34 != 2) {
      uVar44 = 0x1b;
      _err_print_error(&_LC92,"modules/multiplayer/scene_rpc_interface.cpp",0x1d3,
                       "Condition \"peer->get_connection_status() != MultiplayerPeer::CONNECTION_CONNECTED\" is true. Returning: ERR_CONNECTION_ERROR"
                       ,"Trying to call an RPC via a multiplayer peer which is not connected.",0,0);
      goto LAB_00105018;
    }
    iVar34 = (**(code **)(**(long **)(this + 0x180) + 0x168))();
    lVar38 = _get_node_config(this,pNVar37);
    if ((*(long *)(lVar38 + 0x38) != 0) && (*(int *)(lVar38 + 0x5c) != 0)) {
      uVar35 = (&hash_table_size_primes)[*(uint *)(lVar38 + 0x58)];
      lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar38 + 0x58) * 8);
      if (*(long *)param_3 == 0) {
        uVar45 = StringName::get_empty_hash();
      }
      else {
        uVar45 = *(uint *)(*(long *)param_3 + 0x20);
      }
      uVar46 = CONCAT44(0,uVar35);
      lVar43 = *(long *)(lVar38 + 0x40);
      if (uVar45 == 0) {
        uVar45 = 1;
      }
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (ulong)uVar45 * lVar2;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar46;
      lVar41 = SUB168(auVar6 * auVar18,8);
      uVar40 = *(uint *)(lVar43 + lVar41 * 4);
      iVar39 = SUB164(auVar6 * auVar18,8);
      if (uVar40 != 0) {
        uVar48 = 0;
        do {
          if ((uVar45 == uVar40) &&
             (lVar41 = *(long *)(*(long *)(*(long *)(lVar38 + 0x38) + lVar41 * 8) + 0x10),
             lVar41 == *(long *)param_3)) {
            if ((*(long *)(lVar38 + 0x38) == 0) || (*(int *)(lVar38 + 0x5c) == 0))
            goto LAB_00105060;
            uVar35 = (&hash_table_size_primes)[*(uint *)(lVar38 + 0x58)];
            uVar46 = CONCAT44(0,uVar35);
            lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar38 + 0x58) * 8);
            if (lVar41 == 0) {
              uVar45 = StringName::get_empty_hash();
              lVar43 = *(long *)(lVar38 + 0x40);
            }
            else {
              uVar45 = *(uint *)(lVar41 + 0x20);
            }
            if (uVar45 == 0) {
              uVar45 = 1;
            }
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar45 * lVar2;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar46;
            lVar41 = SUB168(auVar10 * auVar22,8);
            uVar40 = *(uint *)(lVar43 + lVar41 * 4);
            uVar48 = SUB164(auVar10 * auVar22,8);
            if (uVar40 == 0) goto LAB_00105060;
            uVar47 = 0;
            goto LAB_00104cf9;
          }
          uVar48 = uVar48 + 1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (ulong)(iVar39 + 1) * lVar2;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = uVar46;
          lVar41 = SUB168(auVar7 * auVar19,8);
          uVar40 = *(uint *)(lVar43 + lVar41 * 4);
          iVar39 = SUB164(auVar7 * auVar19,8);
        } while ((uVar40 != 0) &&
                (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar40 * lVar2, auVar20._8_8_ = 0,
                auVar20._0_8_ = uVar46, auVar9._8_8_ = 0,
                auVar9._0_8_ = (ulong)((uVar35 + iVar39) - SUB164(auVar8 * auVar20,8)) * lVar2,
                auVar21._8_8_ = 0, auVar21._0_8_ = uVar46, uVar48 <= SUB164(auVar9 * auVar21,8)));
      }
    }
LAB_00104f10:
    Node::get_path();
    StringName::StringName((StringName *)&local_78,param_3);
    local_68 = 
    "Unable to get the RPC configuration for the function \"%s\" at path: \"%s\". This happens when the method is missing or not marked for RPCs in the local script."
    ;
    local_80 = 0;
    local_60 = 0x9c;
    String::parse_latin1((StrRange *)&local_80);
    vformat<StringName,NodePath>
              (&local_68,(StrRange *)&local_80,(StringName *)&local_78,(NodePath *)&local_88);
    _err_print_error(&_LC92,"modules/multiplayer/scene_rpc_interface.cpp",0x1da,
                     "Condition \"rpc_id == (65535)\" is true. Returning: ERR_INVALID_PARAMETER",
                     &local_68,0,0);
    pcVar5 = local_68;
    if (local_68 != (char *)0x0) {
      LOCK();
      plVar3 = (long *)(local_68 + -0x10);
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        local_68 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
      }
    }
    lVar38 = local_80;
    if (local_80 != 0) {
      LOCK();
      plVar3 = (long *)(local_80 + -0x10);
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        local_80 = 0;
        Memory::free_static((void *)(lVar38 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (CONCAT44(uStack_74,local_78) != 0)) {
      StringName::unref();
    }
    NodePath::~NodePath((NodePath *)&local_88);
  }
  goto LAB_0010500c;
LAB_00104cf9:
  if ((uVar40 == uVar45) &&
     (*(long *)(*(long *)(*(long *)(lVar38 + 0x38) + lVar41 * 8) + 0x10) == *(long *)param_3)) {
    uVar1 = *(ushort *)(*(long *)(*(long *)(lVar38 + 0x38) + (ulong)uVar48 * 8) + 0x18);
    if (uVar1 == 0xffff) goto LAB_00104f10;
    lVar2 = *(long *)(lVar38 + 8);
    if ((lVar2 != 0) && (*(int *)(lVar38 + 0x2c) != 0)) {
      uVar49 = CONCAT44(0,(&hash_table_size_primes)[*(uint *)(lVar38 + 0x28)]);
      uVar46 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar38 + 0x28) * 8);
      uVar35 = ((uint)uVar1 * -0x7a143595 ^ (uint)uVar1 * -0x7a143595 >> 0xd) * -0x3d4d51cb;
      uVar45 = uVar35 ^ uVar35 >> 0x10;
      if (uVar35 == uVar35 >> 0x10) {
        uVar45 = 1;
        uVar42 = uVar46;
      }
      else {
        uVar42 = uVar45 * uVar46;
      }
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar49;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar42;
      lVar43 = SUB168(auVar14 * auVar26,8);
      uVar35 = *(uint *)(*(long *)(lVar38 + 0x10) + lVar43 * 4);
      uVar40 = SUB164(auVar14 * auVar26,8);
      if (uVar35 != 0) {
        uVar48 = 0;
        goto LAB_00104e0a;
      }
    }
    goto LAB_00105060;
  }
  uVar47 = uVar47 + 1;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = (ulong)(uVar48 + 1) * lVar2;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar46;
  lVar41 = SUB168(auVar11 * auVar23,8);
  uVar40 = *(uint *)(lVar43 + lVar41 * 4);
  uVar48 = SUB164(auVar11 * auVar23,8);
  if ((uVar40 == 0) ||
     (auVar12._8_8_ = 0, auVar12._0_8_ = (ulong)uVar40 * lVar2, auVar24._8_8_ = 0,
     auVar24._0_8_ = uVar46, auVar13._8_8_ = 0,
     auVar13._0_8_ = (ulong)((uVar35 + uVar48) - SUB164(auVar12 * auVar24,8)) * lVar2,
     auVar25._8_8_ = 0, auVar25._0_8_ = uVar46, SUB164(auVar13 * auVar25,8) < uVar47))
  goto LAB_00105060;
  goto LAB_00104cf9;
LAB_00104e0a:
  if ((uVar35 == uVar45) && (uVar1 == *(ushort *)(*(long *)(lVar2 + lVar43 * 8) + 0x10))) {
    lVar38 = *(long *)(lVar2 + (ulong)uVar40 * 8);
    if (iVar34 == param_2) {
      if (*(char *)(lVar38 + 0x24) == '\0') {
        local_78 = 0;
        uStack_74 = 0;
        local_60 = 0x2e;
        local_68 = "\' on yourself is not allowed by selected mode.";
        String::parse_latin1((StrRange *)&local_78);
        lVar38 = *(long *)param_3;
        if (lVar38 == 0) goto LAB_00105794;
        pcVar5 = *(char **)(lVar38 + 8);
        local_88 = 0;
        if (pcVar5 == (char *)0x0) {
          plVar3 = (long *)(*(long *)(lVar38 + 0x10) + -0x10);
          if (*(long *)(lVar38 + 0x10) == 0) goto LAB_00105794;
          goto LAB_001057ab;
        }
        local_60 = strlen(pcVar5);
        local_68 = pcVar5;
        String::parse_latin1((StrRange *)&local_88);
        goto LAB_0010560c;
      }
      if ((short)uVar1 < 0) goto LAB_001050b7;
LAB_00104e7a:
      plVar3 = *(long **)(this + 0x180);
      local_78 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      uVar36 = (**(code **)(*plVar3 + 0x168))(plVar3);
      plVar4 = *(long **)(pNVar37 + 0x98);
      *(undefined4 *)((long)plVar3 + 0x204) = uVar36;
      (**(code **)(*plVar4 + 0x60))(local_58,plVar4,param_3,param_4,param_5,&local_78);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)(*(long *)(this + 0x180) + 0x204) = 0;
      if (local_78 == 0) goto LAB_00104f03;
      Variant::get_call_error_text
                ((Object *)&local_90,(StringName *)pNVar37,(Variant **)param_3,(int)param_4,
                 (CallError *)(ulong)(uint)param_5);
      local_68 = ".";
      local_80 = 0;
      local_60 = 1;
      String::parse_latin1((StrRange *)&local_80);
      operator+((char *)&local_88,(String_conflict *)"rpc() aborted in script local call:  - ");
      String::operator+((String_conflict *)&local_68,(String_conflict *)&local_88);
      pcVar32 = local_68;
      pcVar5 = local_90;
      if (local_90 == local_68) {
        if (local_90 != (char *)0x0) {
          LOCK();
          plVar3 = (long *)(local_90 + -0x10);
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            local_68 = (char *)0x0;
            Memory::free_static(pcVar32 + -0x10,false);
          }
        }
      }
      else {
        if (local_90 != (char *)0x0) {
          LOCK();
          plVar3 = (long *)(local_90 + -0x10);
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            local_90 = (char *)0x0;
            Memory::free_static(pcVar5 + -0x10,false);
          }
        }
        local_90 = local_68;
      }
      lVar38 = local_88;
      if (local_88 != 0) {
        LOCK();
        plVar3 = (long *)(local_88 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_88 = 0;
          Memory::free_static((void *)(lVar38 + -0x10),false);
        }
      }
      lVar38 = local_80;
      if (local_80 != 0) {
        LOCK();
        plVar3 = (long *)(local_80 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_80 = 0;
          Memory::free_static((void *)(lVar38 + -0x10),false);
        }
      }
      uVar44 = 0x206;
LAB_001054f8:
      _err_print_error(&_LC92,"modules/multiplayer/scene_rpc_interface.cpp",uVar44,&local_90,0,0);
      pcVar5 = local_90;
      if (local_90 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_90 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_90 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      uVar44 = 1;
    }
    else {
      if (param_2 == 0) {
        cVar33 = *(char *)(lVar38 + 0x24);
        if (-1 < (short)uVar1) goto LAB_00104e50;
        if (iVar34 != 0) goto LAB_00105286;
LAB_001050ae:
        if (cVar33 != '\0') {
LAB_001050b7:
          plVar3 = *(long **)(this + 0x180);
          local_78 = 0;
          uStack_74 = 0;
          uStack_70 = 0;
          uVar36 = (**(code **)(*plVar3 + 0x168))(plVar3);
          *(undefined4 *)((long)plVar3 + 0x204) = uVar36;
          (**(code **)(*(long *)pNVar37 + 0x68))(local_58,pNVar37,param_3,param_4,param_5,&local_78)
          ;
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)(*(long *)(this + 0x180) + 0x204) = 0;
          if (local_78 != 0) {
            Variant::get_call_error_text
                      ((Object *)&local_90,(StringName *)pNVar37,(Variant **)param_3,(int)param_4,
                       (CallError *)(ulong)(uint)param_5);
            local_68 = ".";
            local_80 = 0;
            local_60 = 1;
            String::parse_latin1((StrRange *)&local_80);
            operator+((char *)&local_88,(String_conflict *)"rpc() aborted in local call:  - ");
            String::operator+((String_conflict *)&local_68,(String_conflict *)&local_88);
            pcVar32 = local_68;
            pcVar5 = local_90;
            if (local_90 == local_68) {
              if (local_90 != (char *)0x0) {
                LOCK();
                plVar3 = (long *)(local_90 + -0x10);
                *plVar3 = *plVar3 + -1;
                UNLOCK();
                if (*plVar3 == 0) {
                  local_68 = (char *)0x0;
                  Memory::free_static(pcVar32 + -0x10,false);
                }
              }
            }
            else {
              if (local_90 != (char *)0x0) {
                LOCK();
                plVar3 = (long *)(local_90 + -0x10);
                *plVar3 = *plVar3 + -1;
                UNLOCK();
                if (*plVar3 == 0) {
                  local_90 = (char *)0x0;
                  Memory::free_static(pcVar5 + -0x10,false);
                }
              }
              local_90 = local_68;
            }
            lVar38 = local_88;
            if (local_88 != 0) {
              LOCK();
              plVar3 = (long *)(local_88 + -0x10);
              *plVar3 = *plVar3 + -1;
              UNLOCK();
              if (*plVar3 == 0) {
                local_88 = 0;
                Memory::free_static((void *)(lVar38 + -0x10),false);
              }
            }
            lVar38 = local_80;
            if (local_80 != 0) {
              LOCK();
              plVar3 = (long *)(local_80 + -0x10);
              *plVar3 = *plVar3 + -1;
              UNLOCK();
              if (*plVar3 == 0) {
                local_80 = 0;
                Memory::free_static((void *)(lVar38 + -0x10),false);
              }
            }
            uVar44 = 0x1f6;
            goto LAB_001054f8;
          }
        }
      }
      else {
        cVar33 = '\0';
        if (((param_2 < 0) && (iVar34 + param_2 != 0)) &&
           (cVar33 = *(char *)(lVar38 + 0x24), (short)uVar1 < 0)) {
LAB_00105286:
          _send_rpc(this,pNVar37,param_2,uVar1,(RPCConfig *)(lVar38 + 0x18),param_3,param_4,param_5)
          ;
          goto LAB_001050ae;
        }
LAB_00104e50:
        _send_rpc(this,pNVar37,param_2,uVar1,(RPCConfig *)(lVar38 + 0x18),param_3,param_4,param_5);
        if (cVar33 != '\0') goto LAB_00104e7a;
      }
LAB_00104f03:
      uVar44 = 0;
    }
    goto LAB_00105018;
  }
  uVar48 = uVar48 + 1;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = (uVar40 + 1) * uVar46;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar49;
  lVar43 = SUB168(auVar15 * auVar27,8);
  uVar35 = *(uint *)(*(long *)(lVar38 + 0x10) + lVar43 * 4);
  uVar40 = SUB164(auVar15 * auVar27,8);
  if ((uVar35 == 0) ||
     (auVar16._8_8_ = 0, auVar16._0_8_ = uVar35 * uVar46, auVar28._8_8_ = 0, auVar28._0_8_ = uVar49,
     auVar17._8_8_ = 0,
     auVar17._0_8_ =
          (((&hash_table_size_primes)[*(uint *)(lVar38 + 0x28)] + uVar40) -
          SUB164(auVar16 * auVar28,8)) * uVar46, auVar29._8_8_ = 0, auVar29._0_8_ = uVar49,
     SUB164(auVar17 * auVar29,8) < uVar48)) {
LAB_00105060:
    _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                     "FATAL: Condition \"!exists\" is true.",0,0);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar30 = (code *)invalidInstructionException();
    (*pcVar30)();
  }
  goto LAB_00104e0a;
LAB_00105794:
  local_88 = 0;
  goto LAB_0010560c;
  while( true ) {
    LOCK();
    lVar43 = *plVar3;
    bVar50 = lVar2 == lVar43;
    if (bVar50) {
      *plVar3 = lVar2 + 1;
      lVar43 = lVar2;
    }
    UNLOCK();
    if (bVar50) break;
LAB_001057ab:
    lVar2 = *plVar3;
    if (lVar2 == 0) goto LAB_00105794;
  }
  if (lVar43 != -1) {
    local_88 = *(long *)(lVar38 + 0x10);
  }
LAB_0010560c:
  operator+((char *)&local_80,(String_conflict *)"RPC \'");
  String::operator+((String_conflict *)&local_68,(String_conflict *)&local_80);
  _err_print_error(&_LC92,"modules/multiplayer/scene_rpc_interface.cpp",0x1de,
                   "Condition \"p_peer_id == caller_id && !config.call_local\" is true. Returning: ERR_INVALID_PARAMETER"
                   ,(String_conflict *)&local_68,0,0);
  pcVar5 = local_68;
  if (local_68 != (char *)0x0) {
    LOCK();
    plVar3 = (long *)(local_68 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_68 = (char *)0x0;
      Memory::free_static(pcVar5 + -0x10,false);
    }
  }
  lVar38 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar3 = (long *)(local_80 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar38 + -0x10),false);
    }
  }
  lVar38 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar3 = (long *)(local_88 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar38 + -0x10),false);
    }
  }
  if (CONCAT44(uStack_74,local_78) != 0) {
    LOCK();
    plVar3 = (long *)(CONCAT44(uStack_74,local_78) + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      lVar38 = CONCAT44(uStack_74,local_78);
      local_78 = 0;
      uStack_74 = 0;
      Memory::free_static((void *)(lVar38 + -0x10),false);
    }
  }
LAB_0010500c:
  uVar44 = 0x1f;
LAB_00105018:
  if (((local_98 != (Object *)0x0) && (cVar33 = RefCounted::unreference(), cVar33 != '\0')) &&
     (cVar33 = predelete_handler(local_98), cVar33 != '\0')) {
    (**(code **)(*(long *)local_98 + 0x140))(local_98);
    Memory::free_static(local_98,false);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar44;
}



/* StringLikeVariantOrder::compare(Variant const&, Variant const&) */

ulong StringLikeVariantOrder::compare(Variant *param_1,Variant *param_2)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(int *)param_1 == 4) || (*(int *)param_1 == 0x15)) &&
     ((*(int *)param_2 == 4 || (*(int *)param_2 == 0x15)))) {
    Variant::operator_cast_to_String((Variant *)&local_28);
    Variant::operator_cast_to_String((Variant *)&local_30);
    uVar3 = String::operator<((String_conflict *)&local_30,(String_conflict *)&local_28);
    lVar2 = local_30;
    if (local_30 != 0) {
      LOCK();
      plVar1 = (long *)(local_30 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_30 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_28;
    if (local_28 != 0) {
      LOCK();
      plVar1 = (long *)(local_28 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_28 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return (ulong)uVar3;
    }
  }
  else if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar4 = Variant::operator<(param_1,param_2);
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomStaticMethodPointer<bool, Variant const&, Variant
   const&>::~CallableCustomStaticMethodPointer() */

void __thiscall
CallableCustomStaticMethodPointer<bool,Variant_const&,Variant_const&>::
~CallableCustomStaticMethodPointer
          (CallableCustomStaticMethodPointer<bool,Variant_const&,Variant_const&> *this)

{
  return;
}



/* CallableCustomStaticMethodPointer<bool, Variant const&, Variant const&>::is_valid() const */

undefined8 CallableCustomStaticMethodPointer<bool,Variant_const&,Variant_const&>::is_valid(void)

{
  return 1;
}



/* CallableCustomStaticMethodPointer<bool, Variant const&, Variant const&>::get_object() const */

undefined8 CallableCustomStaticMethodPointer<bool,Variant_const&,Variant_const&>::get_object(void)

{
  return 0;
}



/* CallableCustomStaticMethodPointer<bool, Variant const&, Variant
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomStaticMethodPointer<bool,Variant_const&,Variant_const&>::get_argument_count
          (CallableCustomStaticMethodPointer<bool,Variant_const&,Variant_const&> *this,bool *param_1
          )

{
  *param_1 = true;
  return 2;
}



/* CallableCustomStaticMethodPointer<bool, Variant const&, Variant
   const&>::~CallableCustomStaticMethodPointer() */

void __thiscall
CallableCustomStaticMethodPointer<bool,Variant_const&,Variant_const&>::
~CallableCustomStaticMethodPointer
          (CallableCustomStaticMethodPointer<bool,Variant_const&,Variant_const&> *this)

{
  operator_delete(this,0x30);
  return;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* CallableCustomStaticMethodPointer<bool, Variant const&, Variant const&>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomStaticMethodPointer<bool,Variant_const&,Variant_const&>::call
          (CallableCustomStaticMethodPointer<bool,Variant_const&,Variant_const&> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  code *pcVar1;
  Variant *pVVar2;
  char cVar3;
  bool bVar4;
  long in_FS_OFFSET;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  int local_68 [8];
  int local_48 [6];
  long local_30;
  
  pcVar1 = *(code **)(this + 0x28);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((uint)param_2 < 3) {
    if (param_2 == 2) {
      pVVar2 = param_1[1];
      *(undefined4 *)param_4 = 0;
      cVar3 = Variant::can_convert_strict(*(undefined4 *)pVVar2,0);
      if (cVar3 == '\0') {
        *(undefined4 *)param_4 = 2;
        *(undefined8 *)(param_4 + 4) = 1;
      }
      Variant::Variant((Variant *)local_68,param_1[1]);
      cVar3 = Variant::can_convert_strict(*(undefined4 *)*param_1,0);
      if (cVar3 == '\0') {
        *(undefined4 *)param_4 = 2;
        *(undefined8 *)(param_4 + 4) = 0;
      }
      Variant::Variant((Variant *)local_48,*param_1);
      bVar4 = (bool)(*pcVar1)((Variant *)local_48,(Variant *)local_68);
      Variant::Variant((Variant *)local_88,bVar4);
      if (Variant::needs_deinit[*(int *)param_3] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_3 = local_88[0];
      *(undefined8 *)(param_3 + 8) = local_80;
      *(undefined8 *)(param_3 + 0x10) = uStack_78;
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_68[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    else {
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 2;
    }
  }
  else {
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 2;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
/* SceneRPCInterface::_process_rpc(Node*, unsigned short, int, unsigned char const*, int, int)
   [clone .cold] */

void SceneRPCInterface::_process_rpc
               (Node *param_1,ushort param_2,int param_3,uchar *param_4,int param_5,int param_6)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
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

void FUN_00105cd2(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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
  uVar30 = (&hash_table_size_primes)[*(uint *)(in_RSI + 4)];
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
    if (lVar34 != 0) goto LAB_00106a0a;
  }
  else {
    uVar31 = *in_RDX;
    uVar42 = *(uint *)((long)in_RSI + 0x24);
LAB_00106a0a:
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
      uVar43 = CONCAT44(0,(&hash_table_size_primes)[*(uint *)(in_RSI + 4)]);
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
            if (*(uint *)(lVar34 + (long)plStack_98 * 4) == uVar31) goto LAB_00106aff;
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
                auVar8._0_8_ = (uint)(((&hash_table_size_primes)[*(uint *)(in_RSI + 4)] + iVar38) -
                                     SUB164(auVar7 * auVar19,8)) * uVar33, auVar20._8_8_ = 0,
                auVar20._0_8_ = uVar43, uVar29 <= SUB164(auVar8 * auVar20,8)));
      }
    }
  }
  if ((float)uVar30 * __LC12 < (float)(uVar42 + 1)) {
    if ((int)in_RSI[4] == 0x1c) {
      plStack_98 = (long *)0x0;
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0);
      uVar42 = *(uint *)((long)in_RSI + 0x24);
      lVar34 = *in_RSI;
      uVar32 = 0xffffffff;
      goto LAB_00106aff;
    }
    uVar30 = (int)in_RSI[4] + 1;
    uVar33 = (ulong)uVar30;
    if (uVar30 < 2) {
      uVar33 = 2;
    }
    uVar30 = (&hash_table_size_primes)[uVar33];
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
        uVar42 = (&hash_table_size_primes)[*(uint *)(in_RSI + 4)];
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
  uVar42 = (&hash_table_size_primes)[*(uint *)(in_RSI + 4)];
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
LAB_00106aff:
  param_1[3] = uVar32;
  *(long *)param_1 = lVar34;
  param_1[2] = uVar42;
  auVar48._8_8_ = plStack_98;
  auVar48._0_8_ = param_1;
  return auVar48;
}



/* WARNING: Removing unreachable block (ram,0x00107180) */
/* WARNING: Removing unreachable block (ram,0x001072b0) */
/* WARNING: Removing unreachable block (ram,0x00107429) */
/* WARNING: Removing unreachable block (ram,0x001072bc) */
/* WARNING: Removing unreachable block (ram,0x001072c6) */
/* WARNING: Removing unreachable block (ram,0x0010740b) */
/* WARNING: Removing unreachable block (ram,0x001072d2) */
/* WARNING: Removing unreachable block (ram,0x001072dc) */
/* WARNING: Removing unreachable block (ram,0x001073ed) */
/* WARNING: Removing unreachable block (ram,0x001072e8) */
/* WARNING: Removing unreachable block (ram,0x001072f2) */
/* WARNING: Removing unreachable block (ram,0x001073cf) */
/* WARNING: Removing unreachable block (ram,0x001072fe) */
/* WARNING: Removing unreachable block (ram,0x00107308) */
/* WARNING: Removing unreachable block (ram,0x001073b1) */
/* WARNING: Removing unreachable block (ram,0x00107314) */
/* WARNING: Removing unreachable block (ram,0x0010731e) */
/* WARNING: Removing unreachable block (ram,0x00107393) */
/* WARNING: Removing unreachable block (ram,0x00107326) */
/* WARNING: Removing unreachable block (ram,0x00107330) */
/* WARNING: Removing unreachable block (ram,0x00107378) */
/* WARNING: Removing unreachable block (ram,0x00107338) */
/* WARNING: Removing unreachable block (ram,0x0010734e) */
/* WARNING: Removing unreachable block (ram,0x0010735a) */
/* String vformat<StringName, NodePath>(String const&, StringName const, NodePath const) */

undefined8 *
vformat<StringName,NodePath>
          (undefined8 *param_1,bool *param_2,StringName *param_3,NodePath *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
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
  Variant::Variant(local_70,param_4);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,param_2);
  *param_1 = local_d0[0];
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



/* HashMap<unsigned short, SceneRPCInterface::RPCConfig, HashMapHasherDefault,
   HashMapComparatorDefault<unsigned short>, DefaultTypedAllocator<HashMapElement<unsigned short,
   SceneRPCInterface::RPCConfig> > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<unsigned_short,SceneRPCInterface::RPCConfig,HashMapHasherDefault,HashMapComparatorDefault<unsigned_short>,DefaultTypedAllocator<HashMapElement<unsigned_short,SceneRPCInterface::RPCConfig>>>
::_resize_and_rehash
          (HashMap<unsigned_short,SceneRPCInterface::RPCConfig,HashMapHasherDefault,HashMapComparatorDefault<unsigned_short>,DefaultTypedAllocator<HashMapElement<unsigned_short,SceneRPCInterface::RPCConfig>>>
           *this,uint param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  void *pvVar7;
  void *__s;
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
  undefined8 uVar18;
  void *__s_00;
  int iVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  undefined8 uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  uint local_78;
  
  *(undefined4 *)(this + 0x2c) = 0;
  uVar3 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  if (param_1 < 2) {
    param_1 = 2;
  }
  *(uint *)(this + 0x28) = param_1;
  uVar21 = (&hash_table_size_primes)[param_1];
  uVar22 = (ulong)uVar21;
  pvVar6 = *(void **)(this + 8);
  pvVar7 = *(void **)(this + 0x10);
  uVar26 = uVar22 * 4;
  uVar25 = uVar22 * 8;
  uVar18 = Memory::alloc_static(uVar26,false);
  *(undefined8 *)(this + 0x10) = uVar18;
  __s_00 = (void *)Memory::alloc_static(uVar25,false);
  *(void **)(this + 8) = __s_00;
  if (uVar21 != 0) {
    __s = *(void **)(this + 0x10);
    if ((__s < (void *)((long)__s_00 + uVar25)) && (__s_00 < (void *)((long)__s + uVar26))) {
      uVar26 = 0;
      do {
        *(undefined4 *)((long)__s + uVar26 * 4) = 0;
        *(undefined8 *)((long)__s_00 + uVar26 * 8) = 0;
        uVar26 = uVar26 + 1;
      } while (uVar22 != uVar26);
    }
    else {
      memset(__s,0,uVar26);
      memset(__s_00,0,uVar25);
    }
  }
  if (uVar3 != 0) {
    uVar26 = 0;
    do {
      uVar21 = *(uint *)((long)pvVar7 + uVar26 * 4);
      if (uVar21 != 0) {
        uVar24 = 0;
        lVar8 = *(long *)(this + 0x10);
        uVar4 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
        uVar25 = CONCAT44(0,uVar4);
        lVar9 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)uVar21 * lVar9;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar25;
        lVar20 = SUB168(auVar10 * auVar14,8);
        puVar1 = (uint *)(lVar8 + lVar20 * 4);
        iVar19 = SUB164(auVar10 * auVar14,8);
        uVar5 = *puVar1;
        uVar18 = *(undefined8 *)((long)pvVar6 + uVar26 * 8);
        while (uVar5 != 0) {
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)uVar5 * lVar9;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar25;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)((uVar4 + iVar19) - SUB164(auVar11 * auVar15,8)) * lVar9;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar25;
          local_78 = SUB164(auVar12 * auVar16,8);
          uVar23 = uVar18;
          if (local_78 < uVar24) {
            *puVar1 = uVar21;
            puVar2 = (undefined8 *)((long)__s_00 + lVar20 * 8);
            uVar23 = *puVar2;
            *puVar2 = uVar18;
            uVar21 = uVar5;
            uVar24 = local_78;
          }
          uVar24 = uVar24 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(iVar19 + 1) * lVar9;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar25;
          lVar20 = SUB168(auVar13 * auVar17,8);
          puVar1 = (uint *)(lVar8 + lVar20 * 4);
          iVar19 = SUB164(auVar13 * auVar17,8);
          uVar18 = uVar23;
          uVar5 = *puVar1;
        }
        *(undefined8 *)((long)__s_00 + lVar20 * 8) = uVar18;
        *puVar1 = uVar21;
        *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar3);
    Memory::free_static(pvVar6,false);
    Memory::free_static(pvVar7,false);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<unsigned short, SceneRPCInterface::RPCConfig, HashMapHasherDefault,
   HashMapComparatorDefault<unsigned short>, DefaultTypedAllocator<HashMapElement<unsigned short,
   SceneRPCInterface::RPCConfig> > >::operator[](unsigned short const&) */

StringName * __thiscall
HashMap<unsigned_short,SceneRPCInterface::RPCConfig,HashMapHasherDefault,HashMapComparatorDefault<unsigned_short>,DefaultTypedAllocator<HashMapElement<unsigned_short,SceneRPCInterface::RPCConfig>>>
::operator[](HashMap<unsigned_short,SceneRPCInterface::RPCConfig,HashMapHasherDefault,HashMapComparatorDefault<unsigned_short>,DefaultTypedAllocator<HashMapElement<unsigned_short,SceneRPCInterface::RPCConfig>>>
             *this,ushort *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
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
  uint uVar29;
  uint uVar30;
  undefined8 *puVar31;
  undefined8 uVar32;
  void *__s_00;
  ulong uVar33;
  int iVar34;
  ulong uVar35;
  long lVar36;
  long lVar37;
  ulong uVar38;
  undefined8 *puVar39;
  char cVar40;
  uint uVar41;
  ulong uVar42;
  long lVar43;
  uint uVar44;
  uint uVar45;
  long in_FS_OFFSET;
  ushort local_c8;
  StringName *local_a8;
  uint local_a0;
  long local_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined8 local_88;
  undefined1 local_78 [16];
  ushort local_68;
  long local_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  long local_40;
  
  __s_00 = *(void **)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c8 = *param_1;
  uVar38 = (ulong)*(uint *)(this + 0x28);
  uVar30 = (&hash_table_size_primes)[uVar38];
  uVar42 = CONCAT44(0,uVar30);
  if (__s_00 == (void *)0x0) {
    local_8c = 0;
    uVar38 = uVar42 * 4;
    local_90 = 0;
    uVar3 = uVar42 * 8;
    local_98 = 0;
    local_88 = 2;
    uVar32 = Memory::alloc_static(uVar38,false);
    *(undefined8 *)(this + 0x10) = uVar32;
    __s_00 = (void *)Memory::alloc_static(uVar3,false);
    *(void **)(this + 8) = __s_00;
    if (uVar30 == 0) {
      iVar34 = *(int *)(this + 0x2c);
      local_c8 = *param_1;
      if (__s_00 == (void *)0x0) goto LAB_00107a1c;
    }
    else {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar3)) && (__s_00 < (void *)((long)__s + uVar38))) {
        uVar38 = 0;
        do {
          *(undefined4 *)((long)__s + uVar38 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar38 * 8) = 0;
          uVar38 = uVar38 + 1;
        } while (uVar42 != uVar38);
        iVar34 = *(int *)(this + 0x2c);
        local_c8 = *param_1;
      }
      else {
        memset(__s,0,uVar38);
        memset(__s_00,0,uVar3);
        iVar34 = *(int *)(this + 0x2c);
        local_c8 = *param_1;
      }
    }
    if (iVar34 != 0) {
      uVar38 = (ulong)*(uint *)(this + 0x28);
      lVar43 = *(long *)(this + 0x10);
      local_a0 = (uint)local_c8;
      goto LAB_00107903;
    }
  }
  else {
    iVar34 = *(int *)(this + 0x2c);
    if (iVar34 == 0) {
      local_90 = 0;
      local_8c = 0;
      local_98 = 0;
      local_88 = 2;
    }
    else {
      uVar3 = *(ulong *)(hash_table_size_primes_inv + uVar38 * 8);
      local_a0 = (uint)local_c8;
      uVar29 = (local_a0 * -0x7a143595 ^ local_a0 * -0x7a143595 >> 0xd) * -0x3d4d51cb;
      uVar44 = uVar29 ^ uVar29 >> 0x10;
      if (uVar29 == uVar29 >> 0x10) {
        uVar44 = 1;
        uVar35 = uVar3;
      }
      else {
        uVar35 = uVar44 * uVar3;
      }
      lVar43 = *(long *)(this + 0x10);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar42;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar35;
      lVar36 = SUB168(auVar5 * auVar17,8);
      uVar29 = *(uint *)(lVar43 + lVar36 * 4);
      uVar45 = SUB164(auVar5 * auVar17,8);
      if (uVar29 != 0) {
        uVar41 = 0;
        do {
          if ((uVar29 == uVar44) &&
             (local_c8 == *(ushort *)(*(long *)((long)__s_00 + lVar36 * 8) + 0x10))) {
            local_a8 = (StringName *)(*(long *)((long)__s_00 + (ulong)uVar45 * 8) + 0x18);
            goto LAB_001078af;
          }
          uVar41 = uVar41 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (uVar45 + 1) * uVar3;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = uVar42;
          lVar36 = SUB168(auVar6 * auVar18,8);
          uVar29 = *(uint *)(lVar43 + lVar36 * 4);
          uVar45 = SUB164(auVar6 * auVar18,8);
        } while ((uVar29 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = uVar29 * uVar3, auVar19._8_8_ = 0,
                auVar19._0_8_ = uVar42, auVar8._8_8_ = 0,
                auVar8._0_8_ = ((uVar45 + uVar30) - SUB164(auVar7 * auVar19,8)) * uVar3,
                auVar20._8_8_ = 0, auVar20._0_8_ = uVar42, uVar41 <= SUB164(auVar8 * auVar20,8)));
      }
      local_90 = 0;
      local_8c = 0;
      local_98 = 0;
      local_88 = 2;
LAB_00107903:
      uVar35 = CONCAT44(0,(&hash_table_size_primes)[uVar38]);
      uVar3 = *(ulong *)(hash_table_size_primes_inv + uVar38 * 8);
      uVar30 = (local_a0 * -0x7a143595 ^ local_a0 * -0x7a143595 >> 0xd) * -0x3d4d51cb;
      uVar29 = uVar30 ^ uVar30 >> 0x10;
      if (uVar30 == uVar30 >> 0x10) {
        uVar29 = 1;
        uVar33 = uVar3;
      }
      else {
        uVar33 = uVar29 * uVar3;
      }
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar35;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar33;
      lVar36 = SUB168(auVar9 * auVar21,8);
      uVar30 = *(uint *)(lVar43 + lVar36 * 4);
      uVar44 = SUB164(auVar9 * auVar21,8);
      if (uVar30 != 0) {
        uVar45 = 0;
        do {
          if ((uVar30 == uVar29) &&
             (*(ushort *)(*(long *)((long)__s_00 + lVar36 * 8) + 0x10) == local_c8)) {
            lVar43 = *(long *)((long)__s_00 + (ulong)uVar44 * 8);
            StringName::operator=((StringName *)(lVar43 + 0x18),(StringName *)&local_98);
            cVar40 = StringName::configured;
            *(undefined4 *)(lVar43 + 0x20) = local_90;
            *(undefined1 *)(lVar43 + 0x24) = local_8c;
            *(undefined8 *)(lVar43 + 0x28) = local_88;
            local_a8 = (StringName *)(*(long *)(*(long *)(this + 8) + (ulong)uVar44 * 8) + 0x18);
            goto LAB_00107c36;
          }
          uVar45 = uVar45 + 1;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (uVar44 + 1) * uVar3;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar35;
          lVar36 = SUB168(auVar10 * auVar22,8);
          uVar30 = *(uint *)(lVar43 + lVar36 * 4);
          uVar44 = SUB164(auVar10 * auVar22,8);
        } while ((uVar30 != 0) &&
                (auVar11._8_8_ = 0, auVar11._0_8_ = uVar30 * uVar3, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar35, auVar12._8_8_ = 0,
                auVar12._0_8_ =
                     (((&hash_table_size_primes)[uVar38] + uVar44) - SUB164(auVar11 * auVar23,8)) *
                     uVar3, auVar24._8_8_ = 0, auVar24._0_8_ = uVar35,
                uVar45 <= SUB164(auVar12 * auVar24,8)));
      }
    }
  }
LAB_00107a1c:
  if ((float)uVar42 * __LC12 < (float)(iVar34 + 1)) {
    if (*(int *)(this + 0x28) == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_a8 = (StringName *)0x18;
      cVar40 = StringName::configured;
      goto LAB_00107c36;
    }
    _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
    local_c8 = *param_1;
  }
  local_78 = (undefined1  [16])0x0;
  local_68 = local_c8;
  StringName::StringName((StringName *)&local_60,(StringName *)&local_98);
  local_58 = local_90;
  local_54 = local_8c;
  local_50 = local_88;
  puVar31 = (undefined8 *)operator_new(0x30,"");
  *puVar31 = local_78._0_8_;
  puVar31[1] = local_78._8_8_;
  *(ushort *)(puVar31 + 2) = local_68;
  local_a8 = (StringName *)(puVar31 + 3);
  StringName::StringName(local_a8,(StringName *)&local_60);
  cVar40 = StringName::configured;
  *(undefined4 *)(puVar31 + 4) = local_58;
  *(undefined1 *)((long)puVar31 + 0x24) = local_54;
  puVar31[5] = local_50;
  if ((cVar40 != '\0') && (local_60 != 0)) {
    StringName::unref();
    cVar40 = StringName::configured;
  }
  puVar39 = *(undefined8 **)(this + 0x20);
  if (puVar39 == (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x18) = puVar31;
  }
  else {
    *puVar39 = puVar31;
    puVar31[1] = puVar39;
  }
  *(undefined8 **)(this + 0x20) = puVar31;
  uVar29 = ((uint)*param_1 * -0x7a143595 ^ (uint)*param_1 * -0x7a143595 >> 0xd) * -0x3d4d51cb;
  uVar30 = uVar29 ^ uVar29 >> 0x10;
  if (uVar29 == uVar29 >> 0x10) {
    uVar38 = 1;
    uVar30 = 1;
  }
  else {
    uVar38 = (ulong)uVar30;
  }
  lVar43 = *(long *)(this + 0x10);
  uVar45 = 0;
  uVar29 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  uVar42 = CONCAT44(0,uVar29);
  lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar38 * lVar36;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar42;
  lVar37 = SUB168(auVar13 * auVar25,8);
  lVar4 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar43 + lVar37 * 4);
  iVar34 = SUB164(auVar13 * auVar25,8);
  uVar44 = *puVar1;
  while (uVar44 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar44 * lVar36;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar42;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((iVar34 + uVar29) - SUB164(auVar14 * auVar26,8)) * lVar36;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar42;
    uVar41 = SUB164(auVar15 * auVar27,8);
    puVar39 = puVar31;
    if (uVar41 < uVar45) {
      *puVar1 = uVar30;
      puVar2 = (undefined8 *)(lVar4 + lVar37 * 8);
      puVar39 = (undefined8 *)*puVar2;
      *puVar2 = puVar31;
      uVar30 = uVar44;
      uVar45 = uVar41;
    }
    uVar45 = uVar45 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar34 + 1) * lVar36;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar42;
    lVar37 = SUB168(auVar16 * auVar28,8);
    puVar1 = (uint *)(lVar43 + lVar37 * 4);
    iVar34 = SUB164(auVar16 * auVar28,8);
    puVar31 = puVar39;
    uVar44 = *puVar1;
  }
  *(undefined8 **)(lVar4 + lVar37 * 8) = puVar31;
  *puVar1 = uVar30;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00107c36:
  if ((cVar40 != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
LAB_001078af:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_a8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<unsigned short, SceneRPCInterface::RPCConfig, HashMapHasherDefault,
   HashMapComparatorDefault<unsigned short>, DefaultTypedAllocator<HashMapElement<unsigned short,
   SceneRPCInterface::RPCConfig> > >::insert(unsigned short const&, SceneRPCInterface::RPCConfig
   const&, bool) */

ushort * HashMap<unsigned_short,SceneRPCInterface::RPCConfig,HashMapHasherDefault,HashMapComparatorDefault<unsigned_short>,DefaultTypedAllocator<HashMapElement<unsigned_short,SceneRPCInterface::RPCConfig>>>
         ::insert(ushort *param_1,RPCConfig *param_2,bool param_3)

{
  uint *puVar1;
  ushort uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  void *__s;
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
  long *plVar22;
  uint uVar23;
  long *plVar24;
  undefined8 uVar25;
  void *__s_00;
  StringName *in_RCX;
  int iVar26;
  undefined7 in_register_00000011;
  ushort *puVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  char in_R8B;
  uint uVar32;
  ulong uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  long *plVar37;
  long in_FS_OFFSET;
  bool bVar38;
  long local_60;
  undefined4 local_58;
  StringName local_54;
  long local_50;
  long local_40;
  
  puVar27 = (ushort *)CONCAT71(in_register_00000011,param_3);
  __s_00 = *(void **)(param_2 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar36 = (&hash_table_size_primes)[*(uint *)(param_2 + 0x28)];
  if (__s_00 == (void *)0x0) {
    uVar28 = (ulong)uVar36;
    uVar31 = uVar28 * 4;
    uVar33 = uVar28 * 8;
    uVar25 = Memory::alloc_static(uVar31,false);
    *(undefined8 *)(param_2 + 0x10) = uVar25;
    __s_00 = (void *)Memory::alloc_static(uVar33,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar36 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar33)) && (__s_00 < (void *)((long)__s + uVar31))) {
        uVar31 = 0;
        do {
          *(undefined4 *)((long)__s + uVar31 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar31 * 8) = 0;
          uVar31 = uVar31 + 1;
        } while (uVar28 != uVar31);
        goto LAB_00107e87;
      }
      memset(__s,0,uVar31);
      memset(__s_00,0,uVar33);
      iVar26 = *(int *)(param_2 + 0x2c);
      uVar2 = *puVar27;
      goto LAB_00107e97;
    }
    iVar26 = *(int *)(param_2 + 0x2c);
    uVar2 = *puVar27;
    if (__s_00 != (void *)0x0) goto LAB_00107e97;
  }
  else {
LAB_00107e87:
    iVar26 = *(int *)(param_2 + 0x2c);
    uVar2 = *puVar27;
LAB_00107e97:
    if (iVar26 != 0) {
      uVar31 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      uVar33 = CONCAT44(0,(&hash_table_size_primes)[*(uint *)(param_2 + 0x28)]);
      uVar23 = ((uint)uVar2 * -0x7a143595 ^ (uint)uVar2 * -0x7a143595 >> 0xd) * -0x3d4d51cb;
      uVar35 = uVar23 ^ uVar23 >> 0x10;
      if (uVar23 == uVar23 >> 0x10) {
        uVar35 = 1;
        uVar28 = uVar31;
      }
      else {
        uVar28 = uVar35 * uVar31;
      }
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar33;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar28;
      lVar29 = SUB168(auVar6 * auVar14,8);
      uVar23 = *(uint *)(*(long *)(param_2 + 0x10) + lVar29 * 4);
      uVar32 = SUB164(auVar6 * auVar14,8);
      if (uVar23 != 0) {
        uVar34 = 0;
        do {
          if ((uVar23 == uVar35) &&
             (*(ushort *)(*(long *)((long)__s_00 + lVar29 * 8) + 0x10) == uVar2)) {
            lVar29 = *(long *)((long)__s_00 + (ulong)uVar32 * 8);
            StringName::operator=((StringName *)(lVar29 + 0x18),in_RCX);
            *(undefined4 *)(lVar29 + 0x20) = *(undefined4 *)(in_RCX + 8);
            *(StringName *)(lVar29 + 0x24) = in_RCX[0xc];
            *(undefined4 *)(lVar29 + 0x28) = *(undefined4 *)(in_RCX + 0x10);
            *(undefined4 *)(lVar29 + 0x2c) = *(undefined4 *)(in_RCX + 0x14);
            plVar24 = *(long **)(*(long *)(param_2 + 8) + (ulong)uVar32 * 8);
            goto LAB_001081ce;
          }
          uVar34 = uVar34 + 1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (uVar32 + 1) * uVar31;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar33;
          lVar29 = SUB168(auVar7 * auVar15,8);
          uVar23 = *(uint *)(*(long *)(param_2 + 0x10) + lVar29 * 4);
          uVar32 = SUB164(auVar7 * auVar15,8);
        } while ((uVar23 != 0) &&
                (auVar8._8_8_ = 0, auVar8._0_8_ = uVar23 * uVar31, auVar16._8_8_ = 0,
                auVar16._0_8_ = uVar33, auVar9._8_8_ = 0,
                auVar9._0_8_ = (((&hash_table_size_primes)[*(uint *)(param_2 + 0x28)] + uVar32) -
                               SUB164(auVar8 * auVar16,8)) * uVar31, auVar17._8_8_ = 0,
                auVar17._0_8_ = uVar33, uVar34 <= SUB164(auVar9 * auVar17,8)));
      }
    }
  }
  if ((float)uVar36 * __LC12 < (float)(iVar26 + 1)) {
    if (*(int *)(param_2 + 0x28) == 0x1c) {
      plVar24 = (long *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_001081ce;
    }
    _resize_and_rehash((HashMap<unsigned_short,SceneRPCInterface::RPCConfig,HashMapHasherDefault,HashMapComparatorDefault<unsigned_short>,DefaultTypedAllocator<HashMapElement<unsigned_short,SceneRPCInterface::RPCConfig>>>
                        *)param_2,*(int *)(param_2 + 0x28) + 1);
  }
  uVar2 = *puVar27;
  StringName::StringName((StringName *)&local_60,in_RCX);
  local_58 = *(undefined4 *)(in_RCX + 8);
  local_54 = in_RCX[0xc];
  local_50 = *(long *)(in_RCX + 0x10);
  plVar24 = (long *)operator_new(0x30,"");
  *plVar24 = 0;
  plVar24[1] = 0;
  *(ushort *)(plVar24 + 2) = uVar2;
  StringName::StringName((StringName *)(plVar24 + 3),(StringName *)&local_60);
  bVar38 = StringName::configured != '\0';
  *(undefined4 *)(plVar24 + 4) = local_58;
  *(StringName *)((long)plVar24 + 0x24) = local_54;
  plVar24[5] = local_50;
  if ((bVar38) && (local_60 != 0)) {
    StringName::unref();
  }
  puVar3 = *(undefined8 **)(param_2 + 0x20);
  if (puVar3 == (undefined8 *)0x0) {
    *(long **)(param_2 + 0x18) = plVar24;
    *(long **)(param_2 + 0x20) = plVar24;
  }
  else if (in_R8B == '\0') {
    *puVar3 = plVar24;
    plVar24[1] = (long)puVar3;
    *(long **)(param_2 + 0x20) = plVar24;
  }
  else {
    lVar29 = *(long *)(param_2 + 0x18);
    *(long **)(lVar29 + 8) = plVar24;
    *plVar24 = lVar29;
    *(long **)(param_2 + 0x18) = plVar24;
  }
  uVar23 = ((uint)*puVar27 * -0x7a143595 ^ (uint)*puVar27 * -0x7a143595 >> 0xd) * -0x3d4d51cb;
  uVar36 = uVar23 ^ uVar23 >> 0x10;
  if (uVar23 == uVar23 >> 0x10) {
    uVar31 = 1;
    uVar36 = 1;
  }
  else {
    uVar31 = (ulong)uVar36;
  }
  lVar29 = *(long *)(param_2 + 0x10);
  uVar32 = 0;
  uVar23 = (&hash_table_size_primes)[*(uint *)(param_2 + 0x28)];
  uVar33 = CONCAT44(0,uVar23);
  lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar31 * lVar4;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar33;
  lVar30 = SUB168(auVar10 * auVar18,8);
  lVar5 = *(long *)(param_2 + 8);
  puVar1 = (uint *)(lVar29 + lVar30 * 4);
  iVar26 = SUB164(auVar10 * auVar18,8);
  uVar35 = *puVar1;
  plVar22 = plVar24;
  while (uVar35 != 0) {
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)uVar35 * lVar4;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar33;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)((iVar26 + uVar23) - SUB164(auVar11 * auVar19,8)) * lVar4;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar33;
    uVar34 = SUB164(auVar12 * auVar20,8);
    plVar37 = plVar22;
    if (uVar34 < uVar32) {
      *puVar1 = uVar36;
      puVar3 = (undefined8 *)(lVar5 + lVar30 * 8);
      plVar37 = (long *)*puVar3;
      *puVar3 = plVar22;
      uVar36 = uVar35;
      uVar32 = uVar34;
    }
    uVar32 = uVar32 + 1;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)(iVar26 + 1) * lVar4;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar33;
    lVar30 = SUB168(auVar13 * auVar21,8);
    puVar1 = (uint *)(lVar29 + lVar30 * 4);
    iVar26 = SUB164(auVar13 * auVar21,8);
    plVar22 = plVar37;
    uVar35 = *puVar1;
  }
  *(long **)(lVar5 + lVar30 * 8) = plVar22;
  *puVar1 = uVar36;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_001081ce:
  *(long **)param_1 = plVar24;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<StringName, unsigned short, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, unsigned short> > >::_resize_and_rehash(unsigned
   int) */

void __thiscall
HashMap<StringName,unsigned_short,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,unsigned_short>>>
::_resize_and_rehash
          (HashMap<StringName,unsigned_short,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,unsigned_short>>>
           *this,uint param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  void *pvVar7;
  void *__s;
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
  undefined8 uVar18;
  void *__s_00;
  int iVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  undefined8 uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  uint local_78;
  
  *(undefined4 *)(this + 0x2c) = 0;
  uVar3 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  if (param_1 < 2) {
    param_1 = 2;
  }
  *(uint *)(this + 0x28) = param_1;
  uVar21 = (&hash_table_size_primes)[param_1];
  uVar22 = (ulong)uVar21;
  pvVar6 = *(void **)(this + 8);
  pvVar7 = *(void **)(this + 0x10);
  uVar26 = uVar22 * 4;
  uVar25 = uVar22 * 8;
  uVar18 = Memory::alloc_static(uVar26,false);
  *(undefined8 *)(this + 0x10) = uVar18;
  __s_00 = (void *)Memory::alloc_static(uVar25,false);
  *(void **)(this + 8) = __s_00;
  if (uVar21 != 0) {
    __s = *(void **)(this + 0x10);
    if ((__s < (void *)((long)__s_00 + uVar25)) && (__s_00 < (void *)((long)__s + uVar26))) {
      uVar26 = 0;
      do {
        *(undefined4 *)((long)__s + uVar26 * 4) = 0;
        *(undefined8 *)((long)__s_00 + uVar26 * 8) = 0;
        uVar26 = uVar26 + 1;
      } while (uVar22 != uVar26);
    }
    else {
      memset(__s,0,uVar26);
      memset(__s_00,0,uVar25);
    }
  }
  if (uVar3 != 0) {
    uVar26 = 0;
    do {
      uVar21 = *(uint *)((long)pvVar7 + uVar26 * 4);
      if (uVar21 != 0) {
        uVar24 = 0;
        lVar8 = *(long *)(this + 0x10);
        uVar4 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
        uVar25 = CONCAT44(0,uVar4);
        lVar9 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)uVar21 * lVar9;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar25;
        lVar20 = SUB168(auVar10 * auVar14,8);
        puVar1 = (uint *)(lVar8 + lVar20 * 4);
        iVar19 = SUB164(auVar10 * auVar14,8);
        uVar5 = *puVar1;
        uVar18 = *(undefined8 *)((long)pvVar6 + uVar26 * 8);
        while (uVar5 != 0) {
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)uVar5 * lVar9;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar25;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)((uVar4 + iVar19) - SUB164(auVar11 * auVar15,8)) * lVar9;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar25;
          local_78 = SUB164(auVar12 * auVar16,8);
          uVar23 = uVar18;
          if (local_78 < uVar24) {
            *puVar1 = uVar21;
            puVar2 = (undefined8 *)((long)__s_00 + lVar20 * 8);
            uVar23 = *puVar2;
            *puVar2 = uVar18;
            uVar21 = uVar5;
            uVar24 = local_78;
          }
          uVar24 = uVar24 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(iVar19 + 1) * lVar9;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar25;
          lVar20 = SUB168(auVar13 * auVar17,8);
          puVar1 = (uint *)(lVar8 + lVar20 * 4);
          iVar19 = SUB164(auVar13 * auVar17,8);
          uVar18 = uVar23;
          uVar5 = *puVar1;
        }
        *(undefined8 *)((long)__s_00 + lVar20 * 8) = uVar18;
        *puVar1 = uVar21;
        *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar3);
    Memory::free_static(pvVar6,false);
    Memory::free_static(pvVar7,false);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, unsigned short, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, unsigned short> > >::operator[](StringName
   const&) */

undefined8 * __thiscall
HashMap<StringName,unsigned_short,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,unsigned_short>>>
::operator[](HashMap<StringName,unsigned_short,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,unsigned_short>>>
             *this,StringName *param_1)

{
  undefined8 *puVar1;
  ulong __n;
  uint *puVar2;
  undefined8 *puVar3;
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
  uint uVar28;
  uint uVar29;
  undefined8 *puVar30;
  long lVar31;
  undefined8 uVar32;
  void *__s_00;
  ulong uVar33;
  int iVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  ulong uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  undefined8 *puVar42;
  long in_FS_OFFSET;
  bool bVar43;
  uint local_88;
  long local_58;
  undefined2 local_50;
  long local_40;
  
  lVar31 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar28 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  uVar38 = CONCAT44(0,uVar28);
  if (lVar31 == 0) {
LAB_001089f0:
    uVar33 = uVar38 * 4;
    __n = uVar38 * 8;
    uVar32 = Memory::alloc_static(uVar33,false);
    *(undefined8 *)(this + 0x10) = uVar32;
    __s_00 = (void *)Memory::alloc_static(__n,false);
    *(void **)(this + 8) = __s_00;
    if ((int)uVar38 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + __n)) && (__s_00 < (void *)((long)__s + uVar33))) {
        uVar33 = 0;
        do {
          *(undefined4 *)((long)__s + uVar33 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar33 * 8) = 0;
          uVar33 = uVar33 + 1;
        } while (uVar38 != uVar33);
        goto LAB_001088b8;
      }
      memset(__s,0,uVar33);
      memset(__s_00,0,__n);
      iVar34 = *(int *)(this + 0x2c);
LAB_001088bc:
      if (iVar34 != 0) {
LAB_001088c4:
        uVar28 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
        lVar31 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        if (*(long *)param_1 == 0) {
          uVar29 = StringName::get_empty_hash();
        }
        else {
          uVar29 = *(uint *)(*(long *)param_1 + 0x20);
        }
        uVar33 = CONCAT44(0,uVar28);
        if (uVar29 == 0) {
          uVar29 = 1;
        }
        uVar41 = 0;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = (ulong)uVar29 * lVar31;
        auVar24._8_8_ = 0;
        auVar24._0_8_ = uVar33;
        lVar37 = SUB168(auVar12 * auVar24,8);
        uVar39 = *(uint *)(*(long *)(this + 0x10) + lVar37 * 4);
        uVar40 = SUB164(auVar12 * auVar24,8);
        if (uVar39 != 0) {
          do {
            if ((uVar29 == uVar39) &&
               (*(long *)(*(long *)(*(long *)(this + 8) + lVar37 * 8) + 0x10) == *(long *)param_1))
            {
              puVar30 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar40 * 8);
              *(undefined2 *)(puVar30 + 3) = 0;
              goto LAB_001086a4;
            }
            uVar41 = uVar41 + 1;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)(uVar40 + 1) * lVar31;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar33;
            lVar37 = SUB168(auVar13 * auVar25,8);
            uVar39 = *(uint *)(*(long *)(this + 0x10) + lVar37 * 4);
            uVar40 = SUB164(auVar13 * auVar25,8);
          } while ((uVar39 != 0) &&
                  (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar39 * lVar31, auVar26._8_8_ = 0,
                  auVar26._0_8_ = uVar33, auVar15._8_8_ = 0,
                  auVar15._0_8_ = (ulong)((uVar28 + uVar40) - SUB164(auVar14 * auVar26,8)) * lVar31,
                  auVar27._8_8_ = 0, auVar27._0_8_ = uVar33, uVar41 <= SUB164(auVar15 * auVar27,8)))
          ;
        }
        iVar34 = *(int *)(this + 0x2c);
      }
      goto LAB_001086db;
    }
    iVar34 = *(int *)(this + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_001086db;
    if (iVar34 != 0) goto LAB_001088c4;
LAB_001086fd:
    if (*(int *)(this + 0x28) == 0x1c) {
      puVar30 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0);
      goto LAB_001086a4;
    }
    _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
  }
  else {
    iVar34 = *(int *)(this + 0x2c);
    if (iVar34 != 0) {
      lVar37 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar29 = StringName::get_empty_hash();
        lVar31 = *(long *)(this + 8);
      }
      else {
        uVar29 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar29 == 0) {
        uVar29 = 1;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)uVar29 * lVar37;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar38;
      lVar35 = SUB168(auVar4 * auVar16,8);
      uVar39 = *(uint *)(*(long *)(this + 0x10) + lVar35 * 4);
      uVar40 = SUB164(auVar4 * auVar16,8);
      if (uVar39 != 0) {
        uVar41 = 0;
        do {
          if ((uVar29 == uVar39) &&
             (*(long *)(*(long *)(lVar31 + lVar35 * 8) + 0x10) == *(long *)param_1)) {
            puVar30 = *(undefined8 **)(lVar31 + (ulong)uVar40 * 8);
            goto LAB_001086a4;
          }
          uVar41 = uVar41 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)(uVar40 + 1) * lVar37;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar38;
          lVar35 = SUB168(auVar5 * auVar17,8);
          uVar39 = *(uint *)(*(long *)(this + 0x10) + lVar35 * 4);
          uVar40 = SUB164(auVar5 * auVar17,8);
        } while ((uVar39 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar39 * lVar37, auVar18._8_8_ = 0,
                auVar18._0_8_ = uVar38, auVar7._8_8_ = 0,
                auVar7._0_8_ = (ulong)((uVar40 + uVar28) - SUB164(auVar6 * auVar18,8)) * lVar37,
                auVar19._8_8_ = 0, auVar19._0_8_ = uVar38, uVar41 <= SUB164(auVar7 * auVar19,8)));
      }
      uVar38 = (ulong)(uint)(&hash_table_size_primes)[*(uint *)(this + 0x28)];
      if (lVar31 == 0) goto LAB_001089f0;
LAB_001088b8:
      iVar34 = *(int *)(this + 0x2c);
      goto LAB_001088bc;
    }
LAB_001086db:
    if ((float)uVar38 * __LC12 < (float)(iVar34 + 1)) goto LAB_001086fd;
  }
  StringName::StringName((StringName *)&local_58,param_1);
  local_50 = 0;
  puVar30 = (undefined8 *)operator_new(0x20,"");
  *puVar30 = 0;
  puVar30[1] = 0;
  StringName::StringName((StringName *)(puVar30 + 2),(StringName *)&local_58);
  bVar43 = StringName::configured != '\0';
  *(undefined2 *)(puVar30 + 3) = local_50;
  if ((bVar43) && (local_58 != 0)) {
    StringName::unref();
  }
  puVar3 = *(undefined8 **)(this + 0x20);
  if (puVar3 == (undefined8 *)0x0) {
    lVar31 = *(long *)param_1;
    *(undefined8 **)(this + 0x18) = puVar30;
    *(undefined8 **)(this + 0x20) = puVar30;
    if (lVar31 == 0) goto LAB_001089cd;
LAB_001087a6:
    uVar28 = *(uint *)(lVar31 + 0x20);
  }
  else {
    *puVar3 = puVar30;
    puVar30[1] = puVar3;
    lVar31 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar30;
    if (lVar31 != 0) goto LAB_001087a6;
LAB_001089cd:
    uVar28 = StringName::get_empty_hash();
  }
  lVar31 = *(long *)(this + 0x10);
  if (uVar28 == 0) {
    uVar28 = 1;
  }
  uVar38 = (ulong)uVar28;
  uVar40 = 0;
  lVar37 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar29 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  uVar33 = CONCAT44(0,uVar29);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar38 * lVar37;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar33;
  lVar36 = SUB168(auVar8 * auVar20,8);
  lVar35 = *(long *)(this + 8);
  puVar2 = (uint *)(lVar31 + lVar36 * 4);
  iVar34 = SUB164(auVar8 * auVar20,8);
  uVar39 = *puVar2;
  puVar3 = puVar30;
  while (uVar39 != 0) {
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (ulong)uVar39 * lVar37;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar33;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)((uVar29 + iVar34) - SUB164(auVar9 * auVar21,8)) * lVar37;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar33;
    local_88 = SUB164(auVar10 * auVar22,8);
    puVar42 = puVar3;
    if (local_88 < uVar40) {
      *puVar2 = (uint)uVar38;
      uVar38 = (ulong)uVar39;
      puVar1 = (undefined8 *)(lVar35 + lVar36 * 8);
      puVar42 = (undefined8 *)*puVar1;
      *puVar1 = puVar3;
      uVar40 = local_88;
    }
    uVar28 = (uint)uVar38;
    uVar40 = uVar40 + 1;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)(iVar34 + 1) * lVar37;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar33;
    lVar36 = SUB168(auVar11 * auVar23,8);
    puVar2 = (uint *)(lVar31 + lVar36 * 4);
    iVar34 = SUB164(auVar11 * auVar23,8);
    puVar3 = puVar42;
    uVar39 = *puVar2;
  }
  *(undefined8 **)(lVar35 + lVar36 * 8) = puVar3;
  *puVar2 = uVar28;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_001086a4:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar30 + 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, unsigned short, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, unsigned short> > >::insert(StringName const&,
   unsigned short const&, bool) */

StringName *
HashMap<StringName,unsigned_short,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,unsigned_short>>>
::insert(StringName *param_1,ushort *param_2,bool param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
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
  ulong uVar21;
  long *plVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  undefined8 uVar26;
  void *__s_00;
  undefined2 *in_RCX;
  uint uVar27;
  int iVar28;
  undefined7 in_register_00000011;
  StringName *pSVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  char in_R8B;
  uint uVar33;
  ulong uVar34;
  uint uVar35;
  long *plVar36;
  long in_FS_OFFSET;
  bool bVar37;
  long *local_80;
  long local_58;
  undefined2 local_50;
  long local_40;
  
  pSVar29 = (StringName *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar23 = (&hash_table_size_primes)[*(uint *)(param_2 + 0x14)];
  if (*(long *)(param_2 + 4) == 0) {
    uVar21 = (ulong)uVar23;
    uVar32 = uVar21 * 4;
    uVar34 = uVar21 * 8;
    uVar26 = Memory::alloc_static(uVar32,false);
    *(undefined8 *)(param_2 + 8) = uVar26;
    __s_00 = (void *)Memory::alloc_static(uVar34,false);
    *(void **)(param_2 + 4) = __s_00;
    if (uVar23 != 0) {
      __s = *(void **)(param_2 + 8);
      if ((__s < (void *)((long)__s_00 + uVar34)) && (__s_00 < (void *)((long)__s + uVar32))) {
        uVar32 = 0;
        do {
          *(undefined4 *)((long)__s + uVar32 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar32 * 8) = 0;
          uVar32 = uVar32 + 1;
        } while (uVar21 != uVar32);
      }
      else {
        memset(__s,0,uVar32);
        memset(__s_00,0,uVar34);
      }
      goto LAB_00108b32;
    }
    iVar28 = *(int *)(param_2 + 0x16);
    if (__s_00 == (void *)0x0) goto LAB_00108c59;
    if (*(int *)(param_2 + 0x16) != 0) goto LAB_00108b3e;
LAB_00108c7b:
    if (*(int *)(param_2 + 0x14) == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_80 = (long *)0x0;
      goto LAB_00108c11;
    }
    _resize_and_rehash((HashMap<StringName,unsigned_short,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,unsigned_short>>>
                        *)param_2,*(int *)(param_2 + 0x14) + 1);
  }
  else {
LAB_00108b32:
    iVar28 = *(int *)(param_2 + 0x16);
    if (iVar28 != 0) {
LAB_00108b3e:
      uVar2 = (&hash_table_size_primes)[*(uint *)(param_2 + 0x14)];
      uVar32 = CONCAT44(0,uVar2);
      lVar25 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x14) * 8);
      if (*(long *)pSVar29 == 0) {
        uVar24 = StringName::get_empty_hash();
      }
      else {
        uVar24 = *(uint *)(*(long *)pSVar29 + 0x20);
      }
      if (uVar24 == 0) {
        uVar24 = 1;
      }
      uVar35 = 0;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar24 * lVar25;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar32;
      lVar30 = SUB168(auVar5 * auVar13,8);
      uVar33 = *(uint *)(*(long *)(param_2 + 8) + lVar30 * 4);
      uVar27 = SUB164(auVar5 * auVar13,8);
      if (uVar33 != 0) {
        do {
          if ((uVar24 == uVar33) &&
             (*(long *)(*(long *)(*(long *)(param_2 + 4) + lVar30 * 8) + 0x10) == *(long *)pSVar29))
          {
            local_80 = *(long **)(*(long *)(param_2 + 4) + (ulong)uVar27 * 8);
            *(undefined2 *)(local_80 + 3) = *in_RCX;
            goto LAB_00108c11;
          }
          uVar35 = uVar35 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar27 + 1) * lVar25;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar32;
          lVar30 = SUB168(auVar6 * auVar14,8);
          uVar33 = *(uint *)(*(long *)(param_2 + 8) + lVar30 * 4);
          uVar27 = SUB164(auVar6 * auVar14,8);
        } while ((uVar33 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar33 * lVar25, auVar15._8_8_ = 0,
                auVar15._0_8_ = uVar32, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar2 + uVar27) - SUB164(auVar7 * auVar15,8)) * lVar25,
                auVar16._8_8_ = 0, auVar16._0_8_ = uVar32, uVar35 <= SUB164(auVar8 * auVar16,8)));
      }
      iVar28 = *(int *)(param_2 + 0x16);
    }
LAB_00108c59:
    if ((float)uVar23 * __LC12 < (float)(iVar28 + 1)) goto LAB_00108c7b;
  }
  StringName::StringName((StringName *)&local_58,pSVar29);
  local_50 = *in_RCX;
  local_80 = (long *)operator_new(0x20,"");
  *local_80 = 0;
  local_80[1] = 0;
  StringName::StringName((StringName *)(local_80 + 2),(StringName *)&local_58);
  bVar37 = StringName::configured != '\0';
  *(undefined2 *)(local_80 + 3) = local_50;
  if ((bVar37) && (local_58 != 0)) {
    StringName::unref();
  }
  puVar3 = *(undefined8 **)(param_2 + 0x10);
  if (puVar3 == (undefined8 *)0x0) {
    *(long **)(param_2 + 0xc) = local_80;
    *(long **)(param_2 + 0x10) = local_80;
LAB_00108d35:
    lVar25 = *(long *)pSVar29;
    if (lVar25 != 0) goto LAB_00108d42;
LAB_00108e3d:
    uVar23 = StringName::get_empty_hash();
  }
  else {
    if (in_R8B != '\0') {
      lVar25 = *(long *)(param_2 + 0xc);
      *(long **)(lVar25 + 8) = local_80;
      *local_80 = lVar25;
      *(long **)(param_2 + 0xc) = local_80;
      goto LAB_00108d35;
    }
    *puVar3 = local_80;
    local_80[1] = (long)puVar3;
    lVar25 = *(long *)pSVar29;
    *(long **)(param_2 + 0x10) = local_80;
    if (lVar25 == 0) goto LAB_00108e3d;
LAB_00108d42:
    uVar23 = *(uint *)(lVar25 + 0x20);
  }
  lVar25 = *(long *)(param_2 + 8);
  if (uVar23 == 0) {
    uVar23 = 1;
  }
  uVar32 = (ulong)uVar23;
  uVar33 = 0;
  lVar30 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x14) * 8);
  uVar2 = (&hash_table_size_primes)[*(uint *)(param_2 + 0x14)];
  uVar34 = CONCAT44(0,uVar2);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar32 * lVar30;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar34;
  lVar31 = SUB168(auVar9 * auVar17,8);
  lVar4 = *(long *)(param_2 + 4);
  puVar1 = (uint *)(lVar25 + lVar31 * 4);
  iVar28 = SUB164(auVar9 * auVar17,8);
  uVar24 = *puVar1;
  plVar22 = local_80;
  while (uVar24 != 0) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)uVar24 * lVar30;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar34;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)((uVar2 + iVar28) - SUB164(auVar10 * auVar18,8)) * lVar30;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar34;
    uVar23 = SUB164(auVar11 * auVar19,8);
    plVar36 = plVar22;
    if (uVar23 < uVar33) {
      *puVar1 = (uint)uVar32;
      uVar32 = (ulong)uVar24;
      puVar3 = (undefined8 *)(lVar4 + lVar31 * 8);
      plVar36 = (long *)*puVar3;
      *puVar3 = plVar22;
      uVar33 = uVar23;
    }
    uVar23 = (uint)uVar32;
    uVar33 = uVar33 + 1;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)(iVar28 + 1) * lVar30;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar34;
    lVar31 = SUB168(auVar12 * auVar20,8);
    puVar1 = (uint *)(lVar25 + lVar31 * 4);
    iVar28 = SUB164(auVar12 * auVar20,8);
    plVar22 = plVar36;
    uVar24 = *puVar1;
  }
  *(long **)(lVar4 + lVar31 * 8) = plVar22;
  *puVar1 = uVar23;
  *(int *)(param_2 + 0x16) = *(int *)(param_2 + 0x16) + 1;
LAB_00108c11:
  *(long **)param_1 = local_80;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<ObjectID, SceneRPCInterface::RPCConfigCache, HashMapHasherDefault,
   HashMapComparatorDefault<ObjectID>, DefaultTypedAllocator<HashMapElement<ObjectID,
   SceneRPCInterface::RPCConfigCache> > >::operator[](ObjectID const&) */

undefined1 * __thiscall
HashMap<ObjectID,SceneRPCInterface::RPCConfigCache,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,SceneRPCInterface::RPCConfigCache>>>
::operator[](HashMap<ObjectID,SceneRPCInterface::RPCConfigCache,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,SceneRPCInterface::RPCConfigCache>>>
             *this,ObjectID *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  void *__s;
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
  ulong uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined1 (*pauVar42) [16];
  long lVar43;
  int *piVar44;
  int iVar45;
  uint uVar46;
  long lVar47;
  long lVar48;
  uint uVar49;
  undefined8 uVar50;
  uint uVar51;
  uint uVar52;
  ulong uVar53;
  ulong uVar54;
  undefined1 (*pauVar55) [16];
  long lVar56;
  void *local_e8;
  
  local_e8 = *(void **)(this + 8);
  lVar43 = *(long *)param_1;
  uVar49 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  uVar40 = CONCAT44(0,uVar49);
  if (local_e8 == (void *)0x0) {
    uVar39 = uVar40 * 4;
    uVar54 = uVar40 * 8;
    uVar41 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    local_e8 = (void *)Memory::alloc_static(uVar54,false);
    *(void **)(this + 8) = local_e8;
    if (uVar49 == 0) {
      lVar43 = *(long *)param_1;
      iVar45 = *(int *)(this + 0x2c);
      if (local_e8 == (void *)0x0) goto LAB_0010913b;
    }
    else {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)local_e8 + uVar54)) &&
         (local_e8 < (void *)((long)pvVar3 + uVar39))) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar39 * 4) = 0;
          *(undefined8 *)((long)local_e8 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar40 != uVar39);
        lVar43 = *(long *)param_1;
        goto LAB_001096f5;
      }
      memset(pvVar3,0,uVar39);
      memset(local_e8,0,uVar54);
      lVar43 = *(long *)param_1;
      iVar45 = *(int *)(this + 0x2c);
    }
LAB_001096f8:
    if (iVar45 != 0) {
      uVar53 = CONCAT44(0,(&hash_table_size_primes)[*(uint *)(this + 0x28)]);
      lVar56 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar39 = lVar43 * 0x3ffff - 1;
      uVar39 = (uVar39 ^ uVar39 >> 0x1f) * 0x15;
      uVar39 = (uVar39 ^ uVar39 >> 0xb) * 0x41;
      uVar39 = uVar39 >> 0x16 ^ uVar39;
      uVar54 = uVar39 & 0xffffffff;
      if ((int)uVar39 == 0) {
        uVar54 = 1;
      }
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar54 * lVar56;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = uVar53;
      lVar47 = SUB168(auVar16 * auVar32,8);
      uVar49 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
      uVar46 = SUB164(auVar16 * auVar32,8);
      if (uVar49 != 0) {
        uVar38 = 0;
        do {
          if ((uVar49 == (uint)uVar54) &&
             (*(long *)(*(long *)((long)local_e8 + lVar47 * 8) + 0x10) == lVar43)) {
            lVar43 = *(long *)((long)local_e8 + (ulong)uVar46 * 8);
            uVar49 = *(uint *)(lVar43 + 0x40);
            uVar38 = (&hash_table_size_primes)[uVar49];
            if ((*(int *)(lVar43 + 0x44) == 0) || (*(long *)(lVar43 + 0x20) == 0))
            goto LAB_0010980e;
            lVar56 = 0;
            if (uVar38 != 0) goto LAB_00109aa0;
            *(undefined4 *)(lVar43 + 0x44) = 0;
            *(undefined1 (*) [16])(lVar43 + 0x30) = (undefined1  [16])0x0;
            goto LAB_00109813;
          }
          uVar38 = uVar38 + 1;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = (ulong)(uVar46 + 1) * lVar56;
          auVar33._8_8_ = 0;
          auVar33._0_8_ = uVar53;
          lVar47 = SUB168(auVar17 * auVar33,8);
          uVar49 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
          uVar46 = SUB164(auVar17 * auVar33,8);
        } while ((uVar49 != 0) &&
                (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)uVar49 * lVar56, auVar34._8_8_ = 0,
                auVar34._0_8_ = uVar53, auVar19._8_8_ = 0,
                auVar19._0_8_ =
                     (ulong)(((&hash_table_size_primes)[*(uint *)(this + 0x28)] + uVar46) -
                            SUB164(auVar18 * auVar34,8)) * lVar56, auVar35._8_8_ = 0,
                auVar35._0_8_ = uVar53, uVar38 <= SUB164(auVar19 * auVar35,8)));
      }
    }
  }
  else {
    iVar45 = 0;
    if (*(int *)(this + 0x2c) != 0) {
      lVar56 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar39 = lVar43 * 0x3ffff - 1;
      uVar39 = (uVar39 ^ uVar39 >> 0x1f) * 0x15;
      uVar39 = (uVar39 ^ uVar39 >> 0xb) * 0x41;
      uVar39 = uVar39 >> 0x16 ^ uVar39;
      uVar54 = uVar39 & 0xffffffff;
      if ((int)uVar39 == 0) {
        uVar54 = 1;
      }
      uVar52 = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar54 * lVar56;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar40;
      lVar47 = SUB168(auVar4 * auVar20,8);
      uVar38 = SUB164(auVar4 * auVar20,8);
      uVar46 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
      if (uVar46 != 0) {
        do {
          if ((uVar46 == (uint)uVar54) &&
             (lVar43 == *(long *)(*(long *)((long)local_e8 + lVar47 * 8) + 0x10))) {
            pauVar42 = *(undefined1 (**) [16])((long)local_e8 + (ulong)uVar38 * 8);
            goto LAB_0010964a;
          }
          uVar52 = uVar52 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)(uVar38 + 1) * lVar56;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar40;
          lVar47 = SUB168(auVar5 * auVar21,8);
          uVar46 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
          uVar38 = SUB164(auVar5 * auVar21,8);
        } while ((uVar46 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar46 * lVar56, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar40, auVar7._8_8_ = 0,
                auVar7._0_8_ = (ulong)((uVar38 + uVar49) - SUB164(auVar6 * auVar22,8)) * lVar56,
                auVar23._8_8_ = 0, auVar23._0_8_ = uVar40, uVar52 <= SUB164(auVar7 * auVar23,8)));
      }
LAB_001096f5:
      iVar45 = *(int *)(this + 0x2c);
      goto LAB_001096f8;
    }
  }
LAB_0010913b:
  if ((float)uVar40 * __LC12 < (float)(iVar45 + 1)) {
    uVar49 = *(uint *)(this + 0x28);
    if (uVar49 == 0x1c) {
      pauVar42 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010964a;
    }
    uVar40 = (ulong)(uVar49 + 1);
    uVar46 = (&hash_table_size_primes)[uVar49];
    pvVar3 = *(void **)(this + 0x10);
    *(undefined4 *)(this + 0x2c) = 0;
    if (uVar49 + 1 < 2) {
      uVar40 = 2;
    }
    uVar49 = (&hash_table_size_primes)[uVar40];
    *(int *)(this + 0x28) = (int)uVar40;
    uVar54 = (ulong)uVar49;
    uVar40 = uVar54 * 4;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    uVar39 = uVar54 * 8;
    __s_00 = (void *)Memory::alloc_static(uVar39,false);
    *(void **)(this + 8) = __s_00;
    if (uVar49 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar39)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar54 != uVar40);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar39);
      }
    }
    if (uVar46 != 0) {
      uVar40 = 0;
      do {
        uVar49 = *(uint *)((long)pvVar3 + uVar40 * 4);
        if (uVar49 != 0) {
          uVar51 = 0;
          lVar43 = *(long *)(this + 0x10);
          lVar56 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          uVar38 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
          uVar39 = CONCAT44(0,uVar38);
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)uVar49 * lVar56;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar39;
          lVar47 = SUB168(auVar8 * auVar24,8);
          puVar2 = (uint *)(lVar43 + lVar47 * 4);
          iVar45 = SUB164(auVar8 * auVar24,8);
          uVar52 = *puVar2;
          uVar41 = *(undefined8 *)((long)local_e8 + uVar40 * 8);
          while (uVar52 != 0) {
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar52 * lVar56;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar39;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)((uVar38 + iVar45) - SUB164(auVar9 * auVar25,8)) * lVar56;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar39;
            uVar37 = SUB164(auVar10 * auVar26,8);
            uVar50 = uVar41;
            if (uVar37 < uVar51) {
              *puVar2 = uVar49;
              puVar1 = (undefined8 *)((long)__s_00 + lVar47 * 8);
              uVar50 = *puVar1;
              *puVar1 = uVar41;
              uVar49 = uVar52;
              uVar51 = uVar37;
            }
            uVar51 = uVar51 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)(iVar45 + 1) * lVar56;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar39;
            lVar47 = SUB168(auVar11 * auVar27,8);
            puVar2 = (uint *)(lVar43 + lVar47 * 4);
            iVar45 = SUB164(auVar11 * auVar27,8);
            uVar41 = uVar50;
            uVar52 = *puVar2;
          }
          *(undefined8 *)((long)__s_00 + lVar47 * 8) = uVar41;
          *puVar2 = uVar49;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar40 != uVar46);
      Memory::free_static(local_e8,false);
      Memory::free_static(pvVar3,false);
    }
  }
  uVar40 = 1;
  uVar41 = *(undefined8 *)param_1;
  do {
    if (0x16 < (uint)(&hash_table_size_primes)[uVar40]) goto LAB_001093b1;
    uVar40 = uVar40 + 1;
  } while (uVar40 != 0x1d);
  uVar40 = 0;
  _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                   "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
LAB_001093b1:
  uVar39 = 1;
  do {
    if (0x16 < (uint)(&hash_table_size_primes)[uVar39]) goto LAB_00109402;
    uVar39 = uVar39 + 1;
  } while (uVar39 != 0x1d);
  uVar39 = 0;
  _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                   "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
LAB_00109402:
  pauVar42 = (undefined1 (*) [16])operator_new(0x78,"");
  uVar49 = (&hash_table_size_primes)[uVar40 & 0xffffffff];
  *pauVar42 = (undefined1  [16])0x0;
  *(undefined8 *)pauVar42[4] = 0;
  *(undefined8 *)pauVar42[1] = uVar41;
  lVar43 = 1;
  pauVar42[2] = (undefined1  [16])0x0;
  pauVar42[3] = (undefined1  [16])0x0;
  if (5 < uVar49) {
    do {
      if (uVar49 <= (uint)(&hash_table_size_primes)[lVar43]) {
        *(int *)pauVar42[4] = (int)lVar43;
        goto LAB_00109493;
      }
      lVar43 = lVar43 + 1;
    } while (lVar43 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
LAB_00109493:
  lVar43 = 1;
  *(undefined8 *)pauVar42[7] = 0;
  uVar49 = (&hash_table_size_primes)[uVar39 & 0xffffffff];
  pauVar42[5] = (undefined1  [16])0x0;
  pauVar42[6] = (undefined1  [16])0x0;
  if (5 < uVar49) {
    do {
      if (uVar49 <= (uint)(&hash_table_size_primes)[lVar43]) {
        *(int *)pauVar42[7] = (int)lVar43;
        puVar1 = *(undefined8 **)(this + 0x20);
        goto joined_r0x0010992f;
      }
      lVar43 = lVar43 + 1;
    } while (lVar43 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
  puVar1 = *(undefined8 **)(this + 0x20);
joined_r0x0010992f:
  if (puVar1 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar42;
  }
  else {
    *puVar1 = pauVar42;
    *(undefined8 **)(*pauVar42 + 8) = puVar1;
  }
  lVar43 = *(long *)param_1;
  lVar56 = *(long *)(this + 0x10);
  *(undefined1 (**) [16])(this + 0x20) = pauVar42;
  uVar40 = lVar43 * 0x3ffff - 1;
  uVar40 = (uVar40 ^ uVar40 >> 0x1f) * 0x15;
  uVar40 = (uVar40 ^ uVar40 >> 0xb) * 0x41;
  uVar40 = uVar40 >> 0x16 ^ uVar40;
  uVar39 = uVar40 & 0xffffffff;
  if ((int)uVar40 == 0) {
    uVar39 = 1;
  }
  uVar52 = 0;
  lVar43 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar38 = (uint)uVar39;
  uVar49 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  uVar40 = CONCAT44(0,uVar49);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar39 * lVar43;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar40;
  lVar48 = SUB168(auVar12 * auVar28,8);
  lVar47 = *(long *)(this + 8);
  puVar2 = (uint *)(lVar56 + lVar48 * 4);
  iVar45 = SUB164(auVar12 * auVar28,8);
  uVar46 = *puVar2;
  pauVar36 = pauVar42;
  while (uVar46 != 0) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)uVar46 * lVar43;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar40;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)((uVar49 + iVar45) - SUB164(auVar13 * auVar29,8)) * lVar43;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar40;
    uVar38 = SUB164(auVar14 * auVar30,8);
    pauVar55 = pauVar36;
    if (uVar38 < uVar52) {
      *puVar2 = (uint)uVar39;
      uVar39 = (ulong)uVar46;
      puVar1 = (undefined8 *)(lVar47 + lVar48 * 8);
      pauVar55 = (undefined1 (*) [16])*puVar1;
      *puVar1 = pauVar36;
      uVar52 = uVar38;
    }
    uVar38 = (uint)uVar39;
    uVar52 = uVar52 + 1;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)(iVar45 + 1) * lVar43;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar40;
    lVar48 = SUB168(auVar15 * auVar31,8);
    puVar2 = (uint *)(lVar56 + lVar48 * 4);
    iVar45 = SUB164(auVar15 * auVar31,8);
    pauVar36 = pauVar55;
    uVar46 = *puVar2;
  }
  *(undefined1 (**) [16])(lVar47 + lVar48 * 8) = pauVar36;
  *puVar2 = uVar38;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  goto LAB_0010964a;
LAB_00109aa0:
  do {
    piVar44 = (int *)(*(long *)(lVar43 + 0x28) + lVar56);
    if (*piVar44 != 0) {
      *piVar44 = 0;
      pvVar3 = *(void **)(*(long *)(lVar43 + 0x20) + lVar56 * 2);
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar3 + 0x18) != 0)) {
        StringName::unref();
      }
      Memory::free_static(pvVar3,false);
      *(undefined8 *)(*(long *)(lVar43 + 0x20) + lVar56 * 2) = 0;
    }
    lVar56 = lVar56 + 4;
  } while ((ulong)uVar38 << 2 != lVar56);
  uVar49 = *(uint *)(lVar43 + 0x40);
  *(undefined4 *)(lVar43 + 0x44) = 0;
  *(undefined1 (*) [16])(lVar43 + 0x30) = (undefined1  [16])0x0;
  uVar38 = (&hash_table_size_primes)[uVar49];
LAB_0010980e:
  if (uVar38 < 0x17) {
LAB_00109813:
    if (uVar49 != 0x1c) {
      uVar40 = (ulong)uVar49;
      do {
        uVar38 = (int)uVar40 + 1;
        uVar40 = (ulong)uVar38;
        if (0x16 < (uint)(&hash_table_size_primes)[uVar40]) {
          if (uVar38 != uVar49) {
            if (*(long *)(lVar43 + 0x20) == 0) {
              *(uint *)(lVar43 + 0x40) = uVar38;
            }
            else {
              HashMap<unsigned_short,SceneRPCInterface::RPCConfig,HashMapHasherDefault,HashMapComparatorDefault<unsigned_short>,DefaultTypedAllocator<HashMapElement<unsigned_short,SceneRPCInterface::RPCConfig>>>
              ::_resize_and_rehash
                        ((HashMap<unsigned_short,SceneRPCInterface::RPCConfig,HashMapHasherDefault,HashMapComparatorDefault<unsigned_short>,DefaultTypedAllocator<HashMapElement<unsigned_short,SceneRPCInterface::RPCConfig>>>
                          *)(lVar43 + 0x18),uVar38);
            }
          }
          goto LAB_00109863;
        }
      } while (uVar38 != 0x1c);
    }
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
LAB_00109863:
  uVar49 = *(uint *)(lVar43 + 0x70);
  uVar38 = (&hash_table_size_primes)[uVar49];
  if ((*(int *)(lVar43 + 0x74) == 0) || (*(long *)(lVar43 + 0x50) == 0)) {
LAB_00109878:
    if (uVar38 < 0x17) goto LAB_0010987d;
  }
  else {
    lVar56 = 0;
    if (uVar38 != 0) {
      do {
        piVar44 = (int *)(*(long *)(lVar43 + 0x58) + lVar56);
        if (*piVar44 != 0) {
          *piVar44 = 0;
          pvVar3 = *(void **)(*(long *)(lVar43 + 0x50) + lVar56 * 2);
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar3 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar3,false);
          *(undefined8 *)(*(long *)(lVar43 + 0x50) + lVar56 * 2) = 0;
        }
        lVar56 = lVar56 + 4;
      } while ((ulong)uVar38 << 2 != lVar56);
      uVar49 = *(uint *)(lVar43 + 0x70);
      *(undefined4 *)(lVar43 + 0x74) = 0;
      *(undefined1 (*) [16])(lVar43 + 0x60) = (undefined1  [16])0x0;
      uVar38 = (&hash_table_size_primes)[uVar49];
      goto LAB_00109878;
    }
    *(undefined4 *)(lVar43 + 0x74) = 0;
    *(undefined1 (*) [16])(lVar43 + 0x60) = (undefined1  [16])0x0;
LAB_0010987d:
    if (uVar49 != 0x1c) {
      uVar40 = (ulong)uVar49;
      do {
        uVar38 = (int)uVar40 + 1;
        uVar40 = (ulong)uVar38;
        if (0x16 < (uint)(&hash_table_size_primes)[uVar40]) {
          if (uVar38 != uVar49) {
            if (*(long *)(lVar43 + 0x50) == 0) {
              *(uint *)(lVar43 + 0x70) = uVar38;
            }
            else {
              HashMap<StringName,unsigned_short,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,unsigned_short>>>
              ::_resize_and_rehash
                        ((HashMap<StringName,unsigned_short,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,unsigned_short>>>
                          *)(lVar43 + 0x48),uVar38);
            }
          }
          goto LAB_001098cd;
        }
      } while (uVar38 != 0x1c);
    }
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
LAB_001098cd:
  pauVar42 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar46 * 8);
LAB_0010964a:
  return pauVar42[1] + 8;
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



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomStaticMethodPointer<bool, Variant const&, Variant
   const&>::~CallableCustomStaticMethodPointer() */

void __thiscall
CallableCustomStaticMethodPointer<bool,Variant_const&,Variant_const&>::
~CallableCustomStaticMethodPointer
          (CallableCustomStaticMethodPointer<bool,Variant_const&,Variant_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


