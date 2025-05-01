
/* MultiplayerPeer::set_transfer_channel(int) */

void __thiscall MultiplayerPeer::set_transfer_channel(MultiplayerPeer *this,int param_1)

{
  *(int *)(this + 0x198) = param_1;
  return;
}



/* MultiplayerPeer::get_transfer_channel() const */

undefined4 __thiscall MultiplayerPeer::get_transfer_channel(MultiplayerPeer *this)

{
  return *(undefined4 *)(this + 0x198);
}



/* MultiplayerPeer::set_transfer_mode(MultiplayerPeer::TransferMode) */

void __thiscall MultiplayerPeer::set_transfer_mode(MultiplayerPeer *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x19c) = param_2;
  return;
}



/* MultiplayerPeer::get_transfer_mode() const */

undefined4 __thiscall MultiplayerPeer::get_transfer_mode(MultiplayerPeer *this)

{
  return *(undefined4 *)(this + 0x19c);
}



/* MultiplayerPeer::set_refuse_new_connections(bool) */

void __thiscall MultiplayerPeer::set_refuse_new_connections(MultiplayerPeer *this,bool param_1)

{
  this[0x1a0] = (MultiplayerPeer)param_1;
  return;
}



/* MultiplayerPeer::is_refusing_new_connections() const */

MultiplayerPeer __thiscall MultiplayerPeer::is_refusing_new_connections(MultiplayerPeer *this)

{
  return this[0x1a0];
}



/* MultiplayerPeer::is_server_relay_supported() const */

undefined8 MultiplayerPeer::is_server_relay_supported(void)

{
  return 0;
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



/* MultiplayerPeer::generate_unique_id() const */

uint __thiscall MultiplayerPeer::generate_unique_id(MultiplayerPeer *this)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  long in_FS_OFFSET;
  double dVar5;
  uint local_3c;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_3c = 0;
  do {
    plVar4 = (long *)OS::get_singleton();
    iVar2 = (**(code **)(*plVar4 + 0x208))(plVar4);
    uVar3 = (iVar2 * 0x16a88000 | (uint)(iVar2 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ 0x7f07c65;
    plVar4 = (long *)OS::get_singleton();
    dVar5 = (double)(**(code **)(*plVar4 + 0x1f0))(plVar4);
    uVar3 = ((int)(long)dVar5 * 0x16a88000 | (uint)((int)(long)dVar5 * -0x3361d2af) >> 0x11) *
            0x1b873593 ^ (uVar3 << 0xd | uVar3 >> 0x13) * 5 + 0xe6546b64;
    plVar4 = (long *)OS::get_singleton();
    (**(code **)(*plVar4 + 0x2a8))(&local_38);
    iVar2 = String::hash64();
    lVar1 = local_38;
    uVar3 = (iVar2 * 0x16a88000 | (uint)(iVar2 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
            (uVar3 << 0xd | uVar3 >> 0x13) * 5 + 0xe6546b64;
    if (local_38 != 0) {
      LOCK();
      plVar4 = (long *)(local_38 + -0x10);
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        local_38 = 0;
        Memory::free_static((void *)(lVar1 + -0x10),false);
      }
    }
    uVar3 = (uVar3 << 0xd | uVar3 >> 0x13) * 5 + 0xe6546b64 ^
            ((int)this * 0x16a88000 | (uint)((int)this * -0x3361d2af) >> 0x11) * 0x1b873593;
    uVar3 = (uVar3 << 0xd | uVar3 >> 0x13) * 5 + 0xe6546b64 ^
            ((int)&local_3c * 0x16a88000 | (uint)((int)&local_3c * -0x3361d2af) >> 0x11) *
            0x1b873593;
    uVar3 = (uVar3 << 0xd | uVar3 >> 0x13) * 5 + 0xe6546b64;
    uVar3 = (uVar3 >> 0x10 ^ uVar3) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar3 = uVar3 ^ uVar3 >> 0x10;
    local_3c = uVar3 & 0x7fffffff;
  } while ((uVar3 & 0x7ffffffe) == 0);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_3c;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* PropertyInfo::TEMPNAMEPLACEHOLDERVALUE(PropertyInfo&&) [clone .isra.0] */

void __thiscall PropertyInfo::operator=(PropertyInfo *this,PropertyInfo *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  *(undefined4 *)this = *(undefined4 *)param_1;
  lVar2 = *(long *)(this + 8);
  if (lVar2 != lVar3) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar3 = *(long *)(this + 8);
        *(undefined8 *)(this + 8) = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
        lVar3 = *(long *)(param_1 + 8);
      }
      else {
        *(undefined8 *)(this + 8) = 0;
        lVar3 = *(long *)(param_1 + 8);
      }
    }
    *(long *)(this + 8) = lVar3;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  if (*(long *)(this + 0x10) != *(long *)(param_1 + 0x10)) {
    StringName::unref();
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  lVar2 = *(long *)(this + 0x20);
  if (lVar2 != lVar3) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar3 = *(long *)(this + 0x20);
        *(undefined8 *)(this + 0x20) = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
        lVar3 = *(long *)(param_1 + 0x20);
      }
      else {
        *(undefined8 *)(this + 0x20) = 0;
        lVar3 = *(long *)(param_1 + 0x20);
      }
    }
    *(long *)(this + 0x20) = lVar3;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return;
}



/* MultiplayerPeer::_bind_methods() */

void MultiplayerPeer::_bind_methods(void)

{
  char cVar1;
  long lVar2;
  code *pcVar3;
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
  undefined8 uVar27;
  MethodBind *pMVar28;
  uint uVar29;
  long lVar30;
  long *plVar31;
  long in_FS_OFFSET;
  undefined8 local_180;
  long local_178;
  long local_170;
  long local_168;
  long local_160;
  char *local_158;
  undefined8 local_150;
  char *local_148;
  undefined8 local_140;
  undefined *local_138;
  int local_130;
  undefined8 local_128;
  undefined4 local_120;
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
  undefined8 local_b0;
  char *local_a8;
  undefined8 local_a0;
  Variant *local_98;
  char *pcStack_90;
  undefined8 local_88;
  Variant **local_78;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = 0;
  local_a8 = "channel";
  uVar29 = (uint)(Variant *)&local_78;
  local_78 = (Variant **)&local_a8;
  D_METHODP((char *)&local_118,(char ***)"set_transfer_channel",uVar29);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar28 = create_method_bind<MultiplayerPeer,int>((_func_void_int *)0x191);
  ClassDB::bind_methodfi(1,pMVar28,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  uVar27 = local_108._0_8_;
  if ((long *)local_108._0_8_ != (long *)0x0) {
    LOCK();
    plVar31 = (long *)(local_108._0_8_ + -0x10);
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (*plVar31 == 0) {
      if ((long *)local_108._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_108._0_8_ + -8);
      lVar30 = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_108._8_8_;
      local_108 = auVar4 << 0x40;
      plVar31 = (long *)uVar27;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar31 != 0)) {
            StringName::unref();
          }
          lVar30 = lVar30 + 1;
          plVar31 = plVar31 + 1;
        } while (lVar2 != lVar30);
      }
      Memory::free_static((long *)(uVar27 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_118,(char ***)"get_transfer_channel",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar28 = create_method_bind<MultiplayerPeer,int>((_func_int *)0x199);
  ClassDB::bind_methodfi(1,pMVar28,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  uVar27 = local_108._0_8_;
  if ((long *)local_108._0_8_ != (long *)0x0) {
    LOCK();
    plVar31 = (long *)(local_108._0_8_ + -0x10);
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (*plVar31 == 0) {
      if ((long *)local_108._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_108._0_8_ + -8);
      lVar30 = 0;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_108._8_8_;
      local_108 = auVar5 << 0x40;
      plVar31 = (long *)uVar27;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar31 != 0)) {
            StringName::unref();
          }
          lVar30 = lVar30 + 1;
          plVar31 = plVar31 + 1;
        } while (lVar2 != lVar30);
      }
      Memory::free_static((long *)(uVar27 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  local_a8 = "mode";
  local_a0 = 0;
  local_78 = (Variant **)&local_a8;
  D_METHODP((char *)&local_118,(char ***)"set_transfer_mode",uVar29);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar28 = create_method_bind<MultiplayerPeer,MultiplayerPeer::TransferMode>
                      ((_func_void_TransferMode *)0x1a1);
  ClassDB::bind_methodfi(1,pMVar28,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  uVar27 = local_108._0_8_;
  if ((long *)local_108._0_8_ != (long *)0x0) {
    LOCK();
    plVar31 = (long *)(local_108._0_8_ + -0x10);
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (*plVar31 == 0) {
      if ((long *)local_108._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_108._0_8_ + -8);
      lVar30 = 0;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = local_108._8_8_;
      local_108 = auVar6 << 0x40;
      plVar31 = (long *)uVar27;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar31 != 0)) {
            StringName::unref();
          }
          lVar30 = lVar30 + 1;
          plVar31 = plVar31 + 1;
        } while (lVar2 != lVar30);
      }
      Memory::free_static((long *)(uVar27 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_118,(char ***)"get_transfer_mode",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar28 = create_method_bind<MultiplayerPeer,MultiplayerPeer::TransferMode>
                      ((_func_TransferMode *)0x1a9);
  ClassDB::bind_methodfi(1,pMVar28,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  uVar27 = local_108._0_8_;
  if ((long *)local_108._0_8_ != (long *)0x0) {
    LOCK();
    plVar31 = (long *)(local_108._0_8_ + -0x10);
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (*plVar31 == 0) {
      if ((long *)local_108._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_108._0_8_ + -8);
      lVar30 = 0;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = local_108._8_8_;
      local_108 = auVar7 << 0x40;
      plVar31 = (long *)uVar27;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar31 != 0)) {
            StringName::unref();
          }
          lVar30 = lVar30 + 1;
          plVar31 = plVar31 + 1;
        } while (lVar2 != lVar30);
      }
      Memory::free_static((long *)(uVar27 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  local_a8 = "id";
  local_a0 = 0;
  local_78 = (Variant **)&local_a8;
  D_METHODP((char *)&local_118,(char ***)"set_target_peer",uVar29);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar28 = create_method_bind<MultiplayerPeer,int>((_func_void_int *)0x1c9);
  ClassDB::bind_methodfi(1,pMVar28,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  uVar27 = local_108._0_8_;
  if ((long *)local_108._0_8_ != (long *)0x0) {
    LOCK();
    plVar31 = (long *)(local_108._0_8_ + -0x10);
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (*plVar31 == 0) {
      if ((long *)local_108._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_108._0_8_ + -8);
      lVar30 = 0;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = local_108._8_8_;
      local_108 = auVar8 << 0x40;
      plVar31 = (long *)uVar27;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar31 != 0)) {
            StringName::unref();
          }
          lVar30 = lVar30 + 1;
          plVar31 = plVar31 + 1;
        } while (lVar2 != lVar30);
      }
      Memory::free_static((long *)(uVar27 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_118,(char ***)"get_packet_peer",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar28 = create_method_bind<MultiplayerPeer,int>((_func_int *)0x1d1);
  ClassDB::bind_methodfi(1,pMVar28,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  uVar27 = local_108._0_8_;
  if ((long *)local_108._0_8_ != (long *)0x0) {
    LOCK();
    plVar31 = (long *)(local_108._0_8_ + -0x10);
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (*plVar31 == 0) {
      if ((long *)local_108._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_108._0_8_ + -8);
      lVar30 = 0;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = local_108._8_8_;
      local_108 = auVar9 << 0x40;
      plVar31 = (long *)uVar27;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar31 != 0)) {
            StringName::unref();
          }
          lVar30 = lVar30 + 1;
          plVar31 = plVar31 + 1;
        } while (lVar2 != lVar30);
      }
      Memory::free_static((long *)(uVar27 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_118,(char ***)"get_packet_channel",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar28 = create_method_bind<MultiplayerPeer,int>((_func_int *)0x1e1);
  ClassDB::bind_methodfi(1,pMVar28,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  uVar27 = local_108._0_8_;
  if ((long *)local_108._0_8_ != (long *)0x0) {
    LOCK();
    plVar31 = (long *)(local_108._0_8_ + -0x10);
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (*plVar31 == 0) {
      if ((long *)local_108._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_108._0_8_ + -8);
      lVar30 = 0;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = local_108._8_8_;
      local_108 = auVar10 << 0x40;
      plVar31 = (long *)uVar27;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar31 != 0)) {
            StringName::unref();
          }
          lVar30 = lVar30 + 1;
          plVar31 = plVar31 + 1;
        } while (lVar2 != lVar30);
      }
      Memory::free_static((long *)(uVar27 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_118,(char ***)"get_packet_mode",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar28 = create_method_bind<MultiplayerPeer,MultiplayerPeer::TransferMode>
                      ((_func_TransferMode *)0x1d9);
  ClassDB::bind_methodfi(1,pMVar28,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  uVar27 = local_108._0_8_;
  if ((long *)local_108._0_8_ != (long *)0x0) {
    LOCK();
    plVar31 = (long *)(local_108._0_8_ + -0x10);
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (*plVar31 == 0) {
      if ((long *)local_108._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_108._0_8_ + -8);
      lVar30 = 0;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = local_108._8_8_;
      local_108 = auVar11 << 0x40;
      plVar31 = (long *)uVar27;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar31 != 0)) {
            StringName::unref();
          }
          lVar30 = lVar30 + 1;
          plVar31 = plVar31 + 1;
        } while (lVar2 != lVar30);
      }
      Memory::free_static((long *)(uVar27 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_118,(char ***)&_LC38,0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar28 = create_method_bind<MultiplayerPeer>((_func_void *)0x1f9);
  ClassDB::bind_methodfi(1,pMVar28,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  uVar27 = local_108._0_8_;
  if ((long *)local_108._0_8_ != (long *)0x0) {
    LOCK();
    plVar31 = (long *)(local_108._0_8_ + -0x10);
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (*plVar31 == 0) {
      if ((long *)local_108._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_108._0_8_ + -8);
      lVar30 = 0;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = local_108._8_8_;
      local_108 = auVar12 << 0x40;
      plVar31 = (long *)uVar27;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar31 != 0)) {
            StringName::unref();
          }
          lVar30 = lVar30 + 1;
          plVar31 = plVar31 + 1;
        } while (lVar2 != lVar30);
      }
      Memory::free_static((long *)(uVar27 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_118,(char ***)"close",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar28 = create_method_bind<MultiplayerPeer>((_func_void *)0x201);
  ClassDB::bind_methodfi(1,pMVar28,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  uVar27 = local_108._0_8_;
  if ((long *)local_108._0_8_ != (long *)0x0) {
    LOCK();
    plVar31 = (long *)(local_108._0_8_ + -0x10);
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (*plVar31 == 0) {
      if ((long *)local_108._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_108._0_8_ + -8);
      lVar30 = 0;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = local_108._8_8_;
      local_108 = auVar13 << 0x40;
      plVar31 = (long *)uVar27;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar31 != 0)) {
            StringName::unref();
          }
          lVar30 = lVar30 + 1;
          plVar31 = plVar31 + 1;
        } while (lVar2 != lVar30);
      }
      Memory::free_static((long *)(uVar27 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  local_88 = 0;
  auStack_70._0_8_ = &pcStack_90;
  local_98 = (Variant *)&_LC25;
  pcStack_90 = "force";
  local_78 = &local_98;
  D_METHODP((char *)&local_118,(char ***)"disconnect_peer",uVar29);
  Variant::Variant((Variant *)&local_78,false);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_98 = (Variant *)&local_78;
  pMVar28 = create_method_bind<MultiplayerPeer,int,bool>((_func_void_int_bool *)0x1e9);
  ClassDB::bind_methodfi(1,pMVar28,false,(MethodDefinition *)&local_118,&local_98,1);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  uVar27 = local_108._0_8_;
  if ((long *)local_108._0_8_ != (long *)0x0) {
    LOCK();
    plVar31 = (long *)(local_108._0_8_ + -0x10);
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (*plVar31 == 0) {
      if ((long *)local_108._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_108._0_8_ + -8);
      lVar30 = 0;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = local_108._8_8_;
      local_108 = auVar14 << 0x40;
      plVar31 = (long *)uVar27;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar31 != 0)) {
            StringName::unref();
          }
          lVar30 = lVar30 + 1;
          plVar31 = plVar31 + 1;
        } while (lVar2 != lVar30);
      }
      Memory::free_static((long *)(uVar27 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_118,(char ***)"get_connection_status",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar28 = create_method_bind<MultiplayerPeer,MultiplayerPeer::ConnectionStatus>
                      ((_func_ConnectionStatus *)0x211);
  ClassDB::bind_methodfi(1,pMVar28,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  uVar27 = local_108._0_8_;
  if ((long *)local_108._0_8_ != (long *)0x0) {
    LOCK();
    plVar31 = (long *)(local_108._0_8_ + -0x10);
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (*plVar31 == 0) {
      if ((long *)local_108._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_108._0_8_ + -8);
      lVar30 = 0;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = local_108._8_8_;
      local_108 = auVar15 << 0x40;
      plVar31 = (long *)uVar27;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar31 != 0)) {
            StringName::unref();
          }
          lVar30 = lVar30 + 1;
          plVar31 = plVar31 + 1;
        } while (lVar2 != lVar30);
      }
      Memory::free_static((long *)(uVar27 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_118,(char ***)"get_unique_id",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar28 = create_method_bind<MultiplayerPeer,int>((_func_int *)0x209);
  ClassDB::bind_methodfi(1,pMVar28,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  uVar27 = local_108._0_8_;
  if ((long *)local_108._0_8_ != (long *)0x0) {
    LOCK();
    plVar31 = (long *)(local_108._0_8_ + -0x10);
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (*plVar31 == 0) {
      if ((long *)local_108._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_108._0_8_ + -8);
      lVar30 = 0;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = local_108._8_8_;
      local_108 = auVar16 << 0x40;
      plVar31 = (long *)uVar27;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar31 != 0)) {
            StringName::unref();
          }
          lVar30 = lVar30 + 1;
          plVar31 = plVar31 + 1;
        } while (lVar2 != lVar30);
      }
      Memory::free_static((long *)(uVar27 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_118,(char ***)"generate_unique_id",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar28 = create_method_bind<MultiplayerPeer,unsigned_int>(generate_unique_id);
  ClassDB::bind_methodfi(1,pMVar28,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  uVar27 = local_108._0_8_;
  if ((long *)local_108._0_8_ != (long *)0x0) {
    LOCK();
    plVar31 = (long *)(local_108._0_8_ + -0x10);
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (*plVar31 == 0) {
      if ((long *)local_108._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_108._0_8_ + -8);
      lVar30 = 0;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = local_108._8_8_;
      local_108 = auVar17 << 0x40;
      plVar31 = (long *)uVar27;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar31 != 0)) {
            StringName::unref();
          }
          lVar30 = lVar30 + 1;
          plVar31 = plVar31 + 1;
        } while (lVar2 != lVar30);
      }
      Memory::free_static((long *)(uVar27 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  local_98 = (Variant *)0x10939a;
  pcStack_90 = (char *)0x0;
  local_78 = &local_98;
  D_METHODP((char *)&local_118,(char ***)"set_refuse_new_connections",uVar29);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar28 = create_method_bind<MultiplayerPeer,bool>((_func_void_bool *)0x1b1);
  ClassDB::bind_methodfi(1,pMVar28,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  uVar27 = local_108._0_8_;
  if ((long *)local_108._0_8_ != (long *)0x0) {
    LOCK();
    plVar31 = (long *)(local_108._0_8_ + -0x10);
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (*plVar31 == 0) {
      if ((long *)local_108._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_108._0_8_ + -8);
      lVar30 = 0;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = local_108._8_8_;
      local_108 = auVar18 << 0x40;
      plVar31 = (long *)uVar27;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar31 != 0)) {
            StringName::unref();
          }
          lVar30 = lVar30 + 1;
          plVar31 = plVar31 + 1;
        } while (lVar2 != lVar30);
      }
      Memory::free_static((long *)(uVar27 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_118,(char ***)"is_refusing_new_connections",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar28 = create_method_bind<MultiplayerPeer,bool>((_func_bool *)0x1b9);
  ClassDB::bind_methodfi(1,pMVar28,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  uVar27 = local_108._0_8_;
  if ((long *)local_108._0_8_ != (long *)0x0) {
    LOCK();
    plVar31 = (long *)(local_108._0_8_ + -0x10);
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (*plVar31 == 0) {
      if ((long *)local_108._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_108._0_8_ + -8);
      lVar30 = 0;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = local_108._8_8_;
      local_108 = auVar19 << 0x40;
      plVar31 = (long *)uVar27;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar31 != 0)) {
            StringName::unref();
          }
          lVar30 = lVar30 + 1;
          plVar31 = plVar31 + 1;
        } while (lVar2 != lVar30);
      }
      Memory::free_static((long *)(uVar27 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_118,(char ***)"is_server_relay_supported",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar28 = create_method_bind<MultiplayerPeer,bool>((_func_bool *)0x1c1);
  ClassDB::bind_methodfi(1,pMVar28,false,(MethodDefinition *)&local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  uVar27 = local_108._0_8_;
  if ((long *)local_108._0_8_ != (long *)0x0) {
    LOCK();
    plVar31 = (long *)(local_108._0_8_ + -0x10);
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (*plVar31 == 0) {
      if ((long *)local_108._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_108._0_8_ + -8);
      lVar30 = 0;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = local_108._8_8_;
      local_108 = auVar20 << 0x40;
      plVar31 = (long *)uVar27;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar31 != 0)) {
            StringName::unref();
          }
          lVar30 = lVar30 + 1;
          plVar31 = plVar31 + 1;
        } while (lVar2 != lVar30);
      }
      Memory::free_static((long *)(uVar27 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_158,true);
  _scs_create((char *)&local_160,true);
  local_168 = 0;
  local_118 = "";
  local_170 = 0;
  local_110 = 0;
  String::parse_latin1((StrRange *)&local_170);
  local_178 = 0;
  local_118 = "refuse_new_connections";
  local_110 = 0x16;
  String::parse_latin1((StrRange *)&local_178);
  local_118 = (char *)CONCAT44(local_118._4_4_,1);
  local_110 = 0;
  if (local_178 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_110,(CowData *)&local_178);
  }
  local_108._0_12_ = ZEXT812(0);
  local_f8 = 0;
  if (local_170 == 0) {
    local_f0 = CONCAT44(local_f0._4_4_,6);
LAB_00101a43:
    StringName::operator=((StringName *)local_108,(StringName *)&local_168);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)&local_170);
    local_f0 = CONCAT44(local_f0._4_4_,6);
    if (local_108._8_4_ != 0x11) goto LAB_00101a43;
    StringName::StringName((StringName *)&local_148,(CowData<char32_t> *)&local_f8,false);
    if ((char *)local_108._0_8_ == local_148) {
      if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_108._0_8_ = local_148;
    }
  }
  local_180 = 0;
  local_148 = "MultiplayerPeer";
  local_140 = 0xf;
  String::parse_latin1((StrRange *)&local_180);
  StringName::StringName((StringName *)&local_148,(StrRange *)&local_180,false);
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
  local_118 = "Unreliable,Unreliable Ordered,Reliable";
  local_168 = 0;
  local_170 = 0;
  local_110 = 0x26;
  String::parse_latin1((StrRange *)&local_170);
  local_178 = 0;
  local_118 = "transfer_mode";
  local_110 = 0xd;
  String::parse_latin1((StrRange *)&local_178);
  local_118 = (char *)CONCAT44(local_118._4_4_,2);
  local_110 = 0;
  if (local_178 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_110,(CowData *)&local_178);
  }
  local_108._0_12_ = ZEXT412(2) << 0x40;
  local_f8 = 0;
  if (local_170 == 0) {
    local_f0 = CONCAT44(local_f0._4_4_,6);
LAB_00101ca3:
    StringName::operator=((StringName *)local_108,(StringName *)&local_168);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)&local_170);
    local_f0 = CONCAT44(local_f0._4_4_,6);
    if (local_108._8_4_ != 0x11) goto LAB_00101ca3;
    StringName::StringName((StringName *)&local_148,(CowData<char32_t> *)&local_f8,false);
    if ((char *)local_108._0_8_ == local_148) {
      if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_108._0_8_ = local_148;
    }
  }
  local_180 = 0;
  local_148 = "MultiplayerPeer";
  local_140 = 0xf;
  String::parse_latin1((StrRange *)&local_180);
  StringName::StringName((StringName *)&local_148,(StrRange *)&local_180,false);
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
  local_118 = "0,255,1";
  local_168 = 0;
  local_170 = 0;
  local_110 = 7;
  String::parse_latin1((StrRange *)&local_170);
  local_178 = 0;
  local_118 = "transfer_channel";
  local_110 = 0x10;
  String::parse_latin1((StrRange *)&local_178);
  local_118 = (char *)CONCAT44(local_118._4_4_,2);
  local_110 = 0;
  if (local_178 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_110,(CowData *)&local_178);
  }
  local_108._0_12_ = ZEXT412(1) << 0x40;
  local_f8 = 0;
  if (local_170 == 0) {
    local_f0 = CONCAT44(local_f0._4_4_,6);
LAB_00101eeb:
    StringName::operator=((StringName *)local_108,(StringName *)&local_168);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)&local_170);
    local_f0 = CONCAT44(local_f0._4_4_,6);
    if (local_108._8_4_ != 0x11) goto LAB_00101eeb;
    StringName::StringName((StringName *)&local_148,(CowData<char32_t> *)&local_f8,false);
    if ((char *)local_108._0_8_ == local_148) {
      if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_108._0_8_ = local_148;
    }
  }
  local_180 = 0;
  local_148 = "MultiplayerPeer";
  local_140 = 0xf;
  String::parse_latin1((StrRange *)&local_180);
  StringName::StringName((StringName *)&local_148,(StrRange *)&local_180,false);
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
  StringName::StringName((StringName *)&local_148,"CONNECTION_DISCONNECTED",false);
  local_160 = 0;
  local_118 = "CONNECTION_DISCONNECTED";
  local_110 = 0x17;
  String::parse_latin1((StrRange *)&local_160);
  GetTypeInfo<MultiplayerPeer::ConnectionStatus,void>::get_class_info
            ((GetTypeInfo<MultiplayerPeer::ConnectionStatus,void> *)&local_118);
  local_158 = (char *)local_108._0_8_;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = local_108._8_8_;
  local_108 = auVar21 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  local_118 = "MultiplayerPeer";
  local_168 = 0;
  local_110 = 0xf;
  String::parse_latin1((StrRange *)&local_168);
  StringName::StringName((StringName *)&local_118,(StrRange *)&local_168,false);
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
  StringName::StringName((StringName *)&local_148,"CONNECTION_CONNECTING",false);
  local_160 = 0;
  local_118 = "CONNECTION_CONNECTING";
  local_110 = 0x15;
  String::parse_latin1((StrRange *)&local_160);
  GetTypeInfo<MultiplayerPeer::ConnectionStatus,void>::get_class_info
            ((GetTypeInfo<MultiplayerPeer::ConnectionStatus,void> *)&local_118);
  local_158 = (char *)local_108._0_8_;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = local_108._8_8_;
  local_108 = auVar22 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  local_118 = "MultiplayerPeer";
  local_168 = 0;
  local_110 = 0xf;
  String::parse_latin1((StrRange *)&local_168);
  StringName::StringName((StringName *)&local_118,(StrRange *)&local_168,false);
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
  StringName::StringName((StringName *)&local_148,"CONNECTION_CONNECTED",false);
  local_160 = 0;
  local_118 = "CONNECTION_CONNECTED";
  local_110 = 0x14;
  String::parse_latin1((StrRange *)&local_160);
  GetTypeInfo<MultiplayerPeer::ConnectionStatus,void>::get_class_info
            ((GetTypeInfo<MultiplayerPeer::ConnectionStatus,void> *)&local_118);
  local_158 = (char *)local_108._0_8_;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = local_108._8_8_;
  local_108 = auVar23 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  local_118 = "MultiplayerPeer";
  local_168 = 0;
  local_110 = 0xf;
  String::parse_latin1((StrRange *)&local_168);
  StringName::StringName((StringName *)&local_118,(StrRange *)&local_168,false);
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
  StringName::StringName((StringName *)&local_148,"TARGET_PEER_BROADCAST",false);
  local_118 = "MultiplayerPeer";
  local_158 = (char *)0x0;
  local_160 = 0;
  local_110 = 0xf;
  String::parse_latin1((StrRange *)&local_160);
  StringName::StringName((StringName *)&local_118,(StrRange *)&local_160,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_118,(StringName *)&local_158,(StringName *)&local_148,0,false);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  if ((StringName::configured != '\0') &&
     (((local_158 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_148 != (char *)0x0)))) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_148,"TARGET_PEER_SERVER",false);
  local_118 = "MultiplayerPeer";
  local_158 = (char *)0x0;
  local_160 = 0;
  local_110 = 0xf;
  String::parse_latin1((StrRange *)&local_160);
  StringName::StringName((StringName *)&local_118,(StrRange *)&local_160,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_118,(StringName *)&local_158,(StringName *)&local_148,1,false);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  if (((StringName::configured != '\0') &&
      ((local_158 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_148,"TRANSFER_MODE_UNRELIABLE",false);
  local_160 = 0;
  local_118 = "TRANSFER_MODE_UNRELIABLE";
  local_110 = 0x18;
  String::parse_latin1((StrRange *)&local_160);
  GetTypeInfo<MultiplayerPeer::TransferMode,void>::get_class_info
            ((GetTypeInfo<MultiplayerPeer::TransferMode,void> *)&local_118);
  local_158 = (char *)local_108._0_8_;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = local_108._8_8_;
  local_108 = auVar24 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  local_118 = "MultiplayerPeer";
  local_168 = 0;
  local_110 = 0xf;
  String::parse_latin1((StrRange *)&local_168);
  StringName::StringName((StringName *)&local_118,(StrRange *)&local_168,false);
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
  StringName::StringName((StringName *)&local_148,"TRANSFER_MODE_UNRELIABLE_ORDERED",false);
  local_160 = 0;
  local_118 = "TRANSFER_MODE_UNRELIABLE_ORDERED";
  local_110 = 0x20;
  String::parse_latin1((StrRange *)&local_160);
  GetTypeInfo<MultiplayerPeer::TransferMode,void>::get_class_info
            ((GetTypeInfo<MultiplayerPeer::TransferMode,void> *)&local_118);
  local_158 = (char *)local_108._0_8_;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = local_108._8_8_;
  local_108 = auVar25 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  local_118 = "MultiplayerPeer";
  local_168 = 0;
  local_110 = 0xf;
  String::parse_latin1((StrRange *)&local_168);
  StringName::StringName((StringName *)&local_118,(StrRange *)&local_168,false);
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
  StringName::StringName((StringName *)&local_148,"TRANSFER_MODE_RELIABLE",false);
  local_160 = 0;
  local_118 = "TRANSFER_MODE_RELIABLE";
  local_110 = 0x16;
  String::parse_latin1((StrRange *)&local_160);
  GetTypeInfo<MultiplayerPeer::TransferMode,void>::get_class_info
            ((GetTypeInfo<MultiplayerPeer::TransferMode,void> *)&local_118);
  local_158 = (char *)local_108._0_8_;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = local_108._8_8_;
  local_108 = auVar26 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  local_118 = "MultiplayerPeer";
  local_168 = 0;
  local_110 = 0xf;
  String::parse_latin1((StrRange *)&local_168);
  StringName::StringName((StringName *)&local_118,(StrRange *)&local_168,false);
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
  local_168 = 0;
  local_118 = "";
  local_170 = 0;
  local_110 = 0;
  String::parse_latin1((StrRange *)&local_170);
  local_178 = 0;
  local_118 = "id";
  local_110 = 2;
  String::parse_latin1((StrRange *)&local_178);
  local_148 = (char *)CONCAT44(local_148._4_4_,2);
  local_140 = 0;
  if (local_178 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_140,(CowData *)&local_178);
  }
  local_138 = (undefined *)0x0;
  local_130 = 0;
  local_128 = 0;
  if (local_170 == 0) {
LAB_0010290b:
    local_120 = 6;
    StringName::operator=((StringName *)&local_138,(StringName *)&local_168);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,(CowData *)&local_170);
    local_120 = 6;
    if (local_130 != 0x11) goto LAB_0010290b;
    StringName::StringName((StringName *)&local_118,(CowData<char32_t> *)&local_128,false);
    if (local_138 == local_118) {
      if ((StringName::configured != '\0') && (local_118 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_138 = local_118;
    }
  }
  local_160 = 0;
  local_118 = "peer_connected";
  local_110 = 0xe;
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
  local_158 = "MultiplayerPeer";
  local_180 = 0;
  local_150 = 0xf;
  String::parse_latin1((StrRange *)&local_180);
  StringName::StringName((StringName *)&local_158,(StrRange *)&local_180,false);
  ClassDB::add_signal((StringName *)&local_158,(MethodInfo *)&local_118);
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  MethodInfo::~MethodInfo((MethodInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  if ((StringName::configured != '\0') && (local_168 != 0)) {
    StringName::unref();
  }
  local_168 = 0;
  local_118 = "";
  local_170 = 0;
  local_110 = 0;
  String::parse_latin1((StrRange *)&local_170);
  local_178 = 0;
  local_118 = "id";
  local_110 = 2;
  String::parse_latin1((StrRange *)&local_178);
  local_148 = (char *)CONCAT44(local_148._4_4_,2);
  local_140 = 0;
  if (local_178 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_140,(CowData *)&local_178);
  }
  local_138 = (undefined *)0x0;
  local_130 = 0;
  local_128 = 0;
  if (local_170 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,(CowData *)&local_170);
    local_120 = 6;
    if (local_130 == 0x11) {
      StringName::StringName((StringName *)&local_118,(CowData<char32_t> *)&local_128,false);
      if (local_138 == local_118) {
        if ((StringName::configured != '\0') && (local_118 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_138 = local_118;
      }
      goto LAB_00102bf3;
    }
  }
  local_120 = 6;
  StringName::operator=((StringName *)&local_138,(StringName *)&local_168);
LAB_00102bf3:
  local_160 = 0;
  local_118 = "peer_disconnected";
  local_110 = 0x11;
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
  local_158 = "MultiplayerPeer";
  local_180 = 0;
  local_150 = 0xf;
  String::parse_latin1((StrRange *)&local_180);
  StringName::StringName((StringName *)&local_158,(StrRange *)&local_180,false);
  ClassDB::add_signal((StringName *)&local_158,(MethodInfo *)&local_118);
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  MethodInfo::~MethodInfo((MethodInfo *)&local_118);
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



/* Vector<String>::push_back(String) [clone .isra.0] */

void __thiscall Vector<String>::push_back(Vector<String> *this,CowData *param_2)

{
  CowData<char32_t> *this_00;
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<String>::resize<false>((CowData<String> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<String>::_copy_on_write((CowData<String> *)(this + 8));
        this_00 = (CowData<char32_t> *)(*(long *)(this + 8) + lVar3 * 8);
        if (*(long *)this_00 == *(long *)param_2) {
          return;
        }
        CowData<char32_t>::_ref(this_00,param_2);
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar2,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* MultiplayerPeerExtension::is_refusing_new_connections() const */

MultiplayerPeerExtension __thiscall
MultiplayerPeerExtension::is_refusing_new_connections(MultiplayerPeerExtension *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  MultiplayerPeerExtension MVar6;
  undefined8 local_108;
  long local_100;
  GetTypeInfo<bool,void> local_f8 [8];
  long local_f0 [5];
  int local_c8 [2];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar4 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar4 != (long *)0x0) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar4 + 0x60))((Variant *)local_58,plVar4,this + 0x260,0,0,local_c8);
    if (local_c8[0] == 0) {
      MVar6 = (MultiplayerPeerExtension)Variant::operator_cast_to_bool((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_001032aa;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x268] == (MultiplayerPeerExtension)0x0)) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_b8 = (undefined1  [16])0x0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 6;
    local_90 = 1;
    local_88 = 0;
    local_78 = 0;
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((String *)local_c8,"_is_refusing_new_connections");
    local_90 = CONCAT44(local_90._4_4_,0xc);
    GetTypeInfo<bool,void>::get_class_info(local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
    local_70 = local_70 & 0xffffffff00000000;
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar3 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x270) = 0;
    pcVar5 = *(code **)(lVar3 + 0xd8);
    if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
       (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"MultiplayerPeerExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar3 = 0, local_100 != 0)) goto LAB_00103508;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_0010351d:
        lVar3 = *(long *)(this + 8);
        pcVar5 = *(code **)(lVar3 + 200);
        if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
           (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 == (code *)0x0)) goto LAB_00103458;
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x260);
        *(undefined8 *)(this + 0x270) = uVar2;
      }
      else {
        lVar3 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00103508:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar3 == 0) goto LAB_0010351d;
      }
      lVar3 = *(long *)(this + 8);
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x260,uVar1);
      *(undefined8 *)(this + 0x270) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
LAB_00103458:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = (long)(this + 0x270);
      plVar4[1] = (long)(this + 0x268);
      plVar4[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar4;
    }
    this[0x268] = (MultiplayerPeerExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_c8);
  }
  pcVar5 = *(code **)(this + 0x270);
  if (pcVar5 == (code *)0x0) {
    MVar6 = this[0x1a0];
  }
  else if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
    (*pcVar5)(*(undefined8 *)(this + 0x10),0,local_c8);
    MVar6 = (MultiplayerPeerExtension)(local_c8[0]._0_1_ != (String)0x0);
  }
  else {
    (**(code **)(*(long *)(this + 8) + 0xe0))
              (*(undefined8 *)(this + 0x10),this + 0x260,pcVar5,0,local_c8);
    MVar6 = (MultiplayerPeerExtension)(local_c8[0]._0_1_ != (String)0x0);
  }
LAB_001032aa:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return MVar6;
}



/* MultiplayerPeerExtension::is_server_relay_supported() const */

bool __thiscall MultiplayerPeerExtension::is_server_relay_supported(MultiplayerPeerExtension *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  bool bVar6;
  undefined8 local_108;
  long local_100;
  char *local_f8;
  long local_f0 [5];
  int local_c8 [2];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar4 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar4 != (long *)0x0) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar4 + 0x60))((Variant *)local_58,plVar4,this + 0x278,0,0,local_c8);
    if (local_c8[0] == 0) {
      bVar6 = Variant::operator_cast_to_bool((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_001036b7;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x280] == (MultiplayerPeerExtension)0x0)) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_b8 = (undefined1  [16])0x0;
    local_f8 = "_is_server_relay_supported";
    uStack_c0 = 0;
    uStack_bc = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 6;
    local_90 = 1;
    local_88 = 0;
    local_78 = 0;
    local_70 = 0;
    local_60 = 0;
    local_f0[0] = 0x1a;
    String::parse_latin1((StrRange *)local_c8);
    local_90 = CONCAT44(local_90._4_4_,0xc);
    GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)&local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
    local_70 = local_70 & 0xffffffff00000000;
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar3 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x288) = 0;
    pcVar5 = *(code **)(lVar3 + 0xd8);
    if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
       (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"MultiplayerPeerExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar3 = 0, local_100 != 0)) goto LAB_001038f8;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_0010390d:
        lVar3 = *(long *)(this + 8);
        pcVar5 = *(code **)(lVar3 + 200);
        if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
           (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 == (code *)0x0)) goto LAB_00103851;
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x278);
        *(undefined8 *)(this + 0x288) = uVar2;
      }
      else {
        lVar3 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_001038f8:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar3 == 0) goto LAB_0010390d;
      }
      lVar3 = *(long *)(this + 8);
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x278,uVar1);
      *(undefined8 *)(this + 0x288) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
LAB_00103851:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = (long)(this + 0x288);
      plVar4[1] = (long)(this + 0x280);
      plVar4[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar4;
    }
    this[0x280] = (MultiplayerPeerExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_c8);
  }
  pcVar5 = *(code **)(this + 0x288);
  bVar6 = false;
  if (pcVar5 != (code *)0x0) {
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar5)(*(undefined8 *)(this + 0x10),0,local_c8);
      bVar6 = local_c8[0]._0_1_ != (StrRange)0x0;
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x278,pcVar5,0,local_c8);
      bVar6 = local_c8[0]._0_1_ != (StrRange)0x0;
    }
  }
LAB_001036b7:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar6;
}



/* Vector<int>::push_back(int) [clone .isra.0] */

void __thiscall Vector<int>::push_back(Vector<int> *this,int param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<int>::resize<false>((CowData<int> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<int>::_copy_on_write((CowData<int> *)(this + 8));
        *(int *)(*(long *)(this + 8) + lVar3 * 4) = param_1;
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar2,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* MultiplayerPeerExtension::_bind_methods() */

void MultiplayerPeerExtension::_bind_methods(void)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  long lVar10;
  long in_FS_OFFSET;
  long local_128;
  long local_120;
  undefined8 local_118;
  long local_110;
  undefined8 local_108;
  undefined8 local_100;
  char *local_f8;
  undefined1 local_f0 [16];
  int local_e0;
  long local_d8;
  undefined4 local_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88 [2];
  undefined8 local_78;
  ulong local_70;
  Vector<int> local_68 [8];
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_f0._8_8_ = local_f0._0_8_;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_100 = 0;
  local_f8 = (char *)0x0;
  local_c8 = "r_buffer";
  local_c0 = 8;
  String::parse_latin1((StrRange *)&local_f8);
  local_c8 = (char *)0x0;
  if (local_f8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_f8);
  }
  Vector<String>::push_back((Vector<String> *)&local_108,(CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  local_110 = 0;
  local_c8 = "r_buffer_size";
  local_c0 = 0xd;
  String::parse_latin1((StrRange *)&local_110);
  local_c8 = (char *)0x0;
  if (local_110 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_110);
  }
  Vector<String>::push_back((Vector<String> *)&local_108,(CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  local_b8 = (undefined1  [16])0x0;
  local_f8 = "_get_packet";
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0._0_8_ = 0xb;
  String::parse_latin1((StrRange *)&local_c8);
  local_90 = CONCAT44(local_90._4_4_,8);
  GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_f8);
  PropertyInfo::operator=((PropertyInfo *)&local_c0,(PropertyInfo *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  local_70 = local_70 & 0xffffffff00000000;
  local_f8 = "const uint8_t *";
  local_128 = 0;
  local_120 = 0;
  local_f0._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_120);
  local_118 = 0;
  local_f8 = (char *)CONCAT44(local_f8._4_4_,2);
  local_e0 = 0x1e;
  local_d8 = 0;
  local_f0 = (undefined1  [16])0x0;
  if (local_120 == 0) {
LAB_00103dab:
    local_d0 = 6;
    StringName::operator=((StringName *)(local_f0 + 8),(StringName *)&local_128);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_120);
    local_d0 = 6;
    if (local_e0 != 0x11) goto LAB_00103dab;
    StringName::StringName((StringName *)&local_110,(CowData<char32_t> *)&local_d8,false);
    if (local_f0._8_8_ == local_110) {
      if ((StringName::configured != '\0') && (local_110 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_f0._8_8_ = local_110;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  if ((StringName::configured != '\0') && (local_128 != 0)) {
    StringName::unref();
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_88,(PropertyInfo *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  Vector<int>::push_back(local_68,0);
  local_128 = 0;
  local_120 = 0;
  local_f8 = "int32_t";
  local_f0._0_8_ = 7;
  String::parse_latin1((StrRange *)&local_120);
  local_118 = 0;
  local_f8 = (char *)CONCAT44(local_f8._4_4_,2);
  local_e0 = 0x1e;
  local_d8 = 0;
  local_f0 = (undefined1  [16])0x0;
  if (local_120 == 0) {
LAB_00103efb:
    local_d0 = 6;
    StringName::operator=((StringName *)(local_f0 + 8),(StringName *)&local_128);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_120);
    local_d0 = 6;
    if (local_e0 != 0x11) goto LAB_00103efb;
    StringName::StringName((StringName *)&local_110,(CowData<char32_t> *)&local_d8,false);
    if (local_f0._8_8_ == local_110) {
      if ((StringName::configured != '\0') && (local_110 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_f0._8_8_ = local_110;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  if ((StringName::configured != '\0') && (local_128 != 0)) {
    StringName::unref();
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_88,(PropertyInfo *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  Vector<int>::push_back(local_68,0);
  local_f8 = "MultiplayerPeerExtension";
  local_110 = 0;
  local_f0._0_8_ = 0x18;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(StrRange *)&local_110,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_f8,(MethodInfo *)&local_c8,true,(Vector *)&local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  local_100 = 0;
  local_f8 = (char *)0x0;
  local_c8 = "p_buffer";
  local_c0 = 8;
  String::parse_latin1((StrRange *)&local_f8);
  local_c8 = (char *)0x0;
  if (local_f8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_f8);
  }
  Vector<String>::push_back((Vector<String> *)&local_108,(CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  local_110 = 0;
  local_c8 = "p_buffer_size";
  local_c0 = 0xd;
  String::parse_latin1((StrRange *)&local_110);
  local_c8 = (char *)0x0;
  if (local_110 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_110);
  }
  Vector<String>::push_back((Vector<String> *)&local_108,(CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  local_b8 = (undefined1  [16])0x0;
  local_f8 = "_put_packet";
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0._0_8_ = 0xb;
  String::parse_latin1((StrRange *)&local_c8);
  local_90 = CONCAT44(local_90._4_4_,8);
  GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_f8);
  PropertyInfo::operator=((PropertyInfo *)&local_c0,(PropertyInfo *)&local_f8);
  lVar10 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar10 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_f0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar9 = local_f0._0_8_;
  if (local_f0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_f0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_f0._8_8_;
      local_f0 = auVar2 << 0x40;
      Memory::free_static((void *)(uVar9 + -0x10),false);
    }
  }
  local_70 = local_70 & 0xffffffff00000000;
  local_128 = 0;
  local_120 = 0;
  local_f8 = "const uint8_t";
  local_f0._0_8_ = 0xd;
  String::parse_latin1((StrRange *)&local_120);
  local_118 = 0;
  local_f8 = (char *)CONCAT44(local_f8._4_4_,2);
  local_e0 = 0x1e;
  local_d8 = 0;
  local_f0 = (undefined1  [16])0x0;
  if (local_120 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_120);
    local_d0 = 6;
    if (local_e0 == 0x11) {
      StringName::StringName((StringName *)&local_110,(CowData<char32_t> *)&local_d8,false);
      if (local_f0._8_8_ == local_110) {
        if ((StringName::configured != '\0') && (local_110 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_f0._8_8_ = local_110;
      }
      goto LAB_001042ba;
    }
  }
  local_d0 = 6;
  StringName::operator=((StringName *)(local_f0 + 8),(StringName *)&local_128);
LAB_001042ba:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  if ((StringName::configured != '\0') && (local_128 != 0)) {
    StringName::unref();
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_88,(PropertyInfo *)&local_f8);
  lVar10 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar10 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_f0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar9 = local_f0._0_8_;
  if (local_f0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_f0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_f0._8_8_;
      local_f0 = auVar3 << 0x40;
      Memory::free_static((void *)(uVar9 + -0x10),false);
    }
  }
  Vector<int>::push_back(local_68,0);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_f8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_88,(PropertyInfo *)&local_f8);
  lVar10 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar10 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_f0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar9 = local_f0._0_8_;
  if (local_f0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_f0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_f0._8_8_;
      local_f0 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar9 + -0x10),false);
    }
  }
  Vector<int>::push_back(local_68,3);
  local_f8 = "MultiplayerPeerExtension";
  local_110 = 0;
  local_f0._0_8_ = 0x18;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(StrRange *)&local_110,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_f8,(MethodInfo *)&local_c8,true,(Vector *)&local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  local_b8 = (undefined1  [16])0x0;
  local_f8 = "_get_available_packet_count";
  local_100 = 0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0._0_8_ = 0x1b;
  String::parse_latin1((StrRange *)&local_c8);
  local_90 = CONCAT44(local_90._4_4_,0x8c);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_f8);
  PropertyInfo::operator=((PropertyInfo *)&local_c0,(PropertyInfo *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  local_f8 = "MultiplayerPeerExtension";
  local_70 = CONCAT44(local_70._4_4_,3);
  local_110 = 0;
  local_f0._0_8_ = 0x18;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(StrRange *)&local_110,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_f8,(MethodInfo *)&local_c8,true,(Vector *)&local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  local_b8 = (undefined1  [16])0x0;
  local_f8 = "_get_max_packet_size";
  local_100 = 0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0._0_8_ = 0x14;
  String::parse_latin1((StrRange *)&local_c8);
  local_90 = CONCAT44(local_90._4_4_,0x8c);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_f8);
  PropertyInfo::operator=((PropertyInfo *)&local_c0,(PropertyInfo *)&local_f8);
  lVar10 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar10 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_f0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar9 = local_f0._0_8_;
  if (local_f0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_f0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_f0._8_8_;
      local_f0 = auVar5 << 0x40;
      Memory::free_static((void *)(uVar9 + -0x10),false);
    }
  }
  local_70 = CONCAT44(local_70._4_4_,3);
  local_110 = 0;
  local_f8 = "MultiplayerPeerExtension";
  local_f0._0_8_ = 0x18;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(StrRange *)&local_110,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_f8,(MethodInfo *)&local_c8,true,(Vector *)&local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  local_b8 = (undefined1  [16])0x0;
  local_f8 = "_get_packet_script";
  local_100 = 0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0._0_8_ = 0x12;
  String::parse_latin1((StrRange *)&local_c8);
  local_90 = CONCAT44(local_90._4_4_,8);
  GetTypeInfo<Vector<unsigned_char>,void>::get_class_info
            ((GetTypeInfo<Vector<unsigned_char>,void> *)&local_f8);
  PropertyInfo::operator=((PropertyInfo *)&local_c0,(PropertyInfo *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  local_f8 = "MultiplayerPeerExtension";
  local_70 = local_70 & 0xffffffff00000000;
  local_110 = 0;
  local_f0._0_8_ = 0x18;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(StrRange *)&local_110,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_f8,(MethodInfo *)&local_c8,true,(Vector *)&local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  local_100 = 0;
  local_f8 = (char *)0x0;
  local_c8 = "p_buffer";
  local_c0 = 8;
  String::parse_latin1((StrRange *)&local_f8);
  local_c8 = (char *)0x0;
  if (local_f8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_f8);
  }
  Vector<String>::push_back((Vector<String> *)&local_108,(CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  local_b8 = (undefined1  [16])0x0;
  local_f8 = "_put_packet_script";
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0._0_8_ = 0x12;
  String::parse_latin1((StrRange *)&local_c8);
  local_90 = CONCAT44(local_90._4_4_,8);
  GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_f8);
  PropertyInfo::operator=((PropertyInfo *)&local_c0,(PropertyInfo *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  local_70 = local_70 & 0xffffffff00000000;
  GetTypeInfo<Vector<unsigned_char>,void>::get_class_info
            ((GetTypeInfo<Vector<unsigned_char>,void> *)&local_f8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_88,(PropertyInfo *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  Vector<int>::push_back(local_68,0);
  local_f8 = "MultiplayerPeerExtension";
  local_110 = 0;
  local_f0._0_8_ = 0x18;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(StrRange *)&local_110,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_f8,(MethodInfo *)&local_c8,true,(Vector *)&local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  local_b8 = (undefined1  [16])0x0;
  local_f8 = "_get_packet_channel";
  local_100 = 0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0._0_8_ = 0x13;
  String::parse_latin1((StrRange *)&local_c8);
  local_90 = CONCAT44(local_90._4_4_,0x8c);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_f8);
  PropertyInfo::operator=((PropertyInfo *)&local_c0,(PropertyInfo *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  local_f8 = "MultiplayerPeerExtension";
  local_70 = CONCAT44(local_70._4_4_,3);
  local_110 = 0;
  local_f0._0_8_ = 0x18;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(StrRange *)&local_110,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_f8,(MethodInfo *)&local_c8,true,(Vector *)&local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  local_b8 = (undefined1  [16])0x0;
  local_f8 = "_get_packet_mode";
  local_100 = 0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0._0_8_ = 0x10;
  String::parse_latin1((StrRange *)&local_c8);
  local_90 = CONCAT44(local_90._4_4_,0x8c);
  GetTypeInfo<MultiplayerPeer::TransferMode,void>::get_class_info
            ((GetTypeInfo<MultiplayerPeer::TransferMode,void> *)&local_f8);
  PropertyInfo::operator=((PropertyInfo *)&local_c0,(PropertyInfo *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  local_f8 = "MultiplayerPeerExtension";
  local_70 = local_70 & 0xffffffff00000000;
  local_110 = 0;
  local_f0._0_8_ = 0x18;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(StrRange *)&local_110,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_f8,(MethodInfo *)&local_c8,true,(Vector *)&local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  local_100 = 0;
  local_f8 = (char *)0x0;
  local_c8 = "p_channel";
  local_c0 = 9;
  String::parse_latin1((StrRange *)&local_f8);
  local_c8 = (char *)0x0;
  if (local_f8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_f8);
  }
  Vector<String>::push_back((Vector<String> *)&local_108,(CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  local_b8 = (undefined1  [16])0x0;
  local_f8 = "_set_transfer_channel";
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0._0_8_ = 0x15;
  String::parse_latin1((StrRange *)&local_c8);
  local_90 = CONCAT44(local_90._4_4_,0x88);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_f8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_88,(PropertyInfo *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  Vector<int>::push_back(local_68,3);
  local_f8 = "MultiplayerPeerExtension";
  local_110 = 0;
  local_f0._0_8_ = 0x18;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(StrRange *)&local_110,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_f8,(MethodInfo *)&local_c8,true,(Vector *)&local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  local_b8 = (undefined1  [16])0x0;
  local_f8 = "_get_transfer_channel";
  local_100 = 0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0._0_8_ = 0x15;
  String::parse_latin1((StrRange *)&local_c8);
  local_90 = CONCAT44(local_90._4_4_,0x8c);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_f8);
  PropertyInfo::operator=((PropertyInfo *)&local_c0,(PropertyInfo *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  local_f8 = "MultiplayerPeerExtension";
  local_70 = CONCAT44(local_70._4_4_,3);
  local_110 = 0;
  local_f0._0_8_ = 0x18;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(StrRange *)&local_110,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_f8,(MethodInfo *)&local_c8,true,(Vector *)&local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  local_100 = 0;
  local_f8 = (char *)0x0;
  local_c8 = "p_mode";
  local_c0 = 6;
  String::parse_latin1((StrRange *)&local_f8);
  local_c8 = (char *)0x0;
  if (local_f8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_f8);
  }
  Vector<String>::push_back((Vector<String> *)&local_108,(CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  local_b8 = (undefined1  [16])0x0;
  local_f8 = "_set_transfer_mode";
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0._0_8_ = 0x12;
  String::parse_latin1((StrRange *)&local_c8);
  local_90 = CONCAT44(local_90._4_4_,0x88);
  GetTypeInfo<MultiplayerPeer::TransferMode,void>::get_class_info
            ((GetTypeInfo<MultiplayerPeer::TransferMode,void> *)&local_f8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_88,(PropertyInfo *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  Vector<int>::push_back(local_68,0);
  local_f8 = "MultiplayerPeerExtension";
  local_110 = 0;
  local_f0._0_8_ = 0x18;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(StrRange *)&local_110,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_f8,(MethodInfo *)&local_c8,true,(Vector *)&local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  local_b8 = (undefined1  [16])0x0;
  local_f8 = "_get_transfer_mode";
  local_100 = 0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0._0_8_ = 0x12;
  String::parse_latin1((StrRange *)&local_c8);
  local_90 = CONCAT44(local_90._4_4_,0x8c);
  GetTypeInfo<MultiplayerPeer::TransferMode,void>::get_class_info
            ((GetTypeInfo<MultiplayerPeer::TransferMode,void> *)&local_f8);
  PropertyInfo::operator=((PropertyInfo *)&local_c0,(PropertyInfo *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  local_f8 = "MultiplayerPeerExtension";
  local_70 = local_70 & 0xffffffff00000000;
  local_110 = 0;
  local_f0._0_8_ = 0x18;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(StrRange *)&local_110,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_f8,(MethodInfo *)&local_c8,true,(Vector *)&local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  local_100 = 0;
  local_f8 = (char *)0x0;
  local_c8 = "p_peer";
  local_c0 = 6;
  String::parse_latin1((StrRange *)&local_f8);
  local_c8 = (char *)0x0;
  if (local_f8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_f8);
  }
  Vector<String>::push_back((Vector<String> *)&local_108,(CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  local_b8 = (undefined1  [16])0x0;
  local_f8 = "_set_target_peer";
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0._0_8_ = 0x10;
  String::parse_latin1((StrRange *)&local_c8);
  local_90 = CONCAT44(local_90._4_4_,0x88);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_f8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_88,(PropertyInfo *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  Vector<int>::push_back(local_68,3);
  local_f8 = "MultiplayerPeerExtension";
  local_110 = 0;
  local_f0._0_8_ = 0x18;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(StrRange *)&local_110,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_f8,(MethodInfo *)&local_c8,true,(Vector *)&local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  local_b8 = (undefined1  [16])0x0;
  local_f8 = "_get_packet_peer";
  local_100 = 0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0._0_8_ = 0x10;
  String::parse_latin1((StrRange *)&local_c8);
  local_90 = CONCAT44(local_90._4_4_,0x8c);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_f8);
  PropertyInfo::operator=((PropertyInfo *)&local_c0,(PropertyInfo *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  local_f8 = "MultiplayerPeerExtension";
  local_70 = CONCAT44(local_70._4_4_,3);
  local_110 = 0;
  local_f0._0_8_ = 0x18;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(StrRange *)&local_110,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_f8,(MethodInfo *)&local_c8,true,(Vector *)&local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  local_b8 = (undefined1  [16])0x0;
  local_f8 = "_is_server";
  local_100 = 0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0._0_8_ = 10;
  String::parse_latin1((StrRange *)&local_c8);
  local_90 = CONCAT44(local_90._4_4_,0x8c);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_f8);
  PropertyInfo::operator=((PropertyInfo *)&local_c0,(PropertyInfo *)&local_f8);
  lVar10 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar10 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_f0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar9 = local_f0._0_8_;
  if (local_f0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_f0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar6._8_8_ = 0;
      auVar6._0_8_ = local_f0._8_8_;
      local_f0 = auVar6 << 0x40;
      Memory::free_static((void *)(uVar9 + -0x10),false);
    }
  }
  local_70 = local_70 & 0xffffffff00000000;
  local_110 = 0;
  local_f8 = "MultiplayerPeerExtension";
  local_f0._0_8_ = 0x18;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(StrRange *)&local_110,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_f8,(MethodInfo *)&local_c8,true,(Vector *)&local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  local_b8 = (undefined1  [16])0x0;
  local_f8 = "_poll";
  local_100 = 0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0._0_8_ = 5;
  String::parse_latin1((StrRange *)&local_c8);
  local_f8 = "MultiplayerPeerExtension";
  local_90 = CONCAT44(local_90._4_4_,0x88);
  local_110 = 0;
  local_f0._0_8_ = 0x18;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(StrRange *)&local_110,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_f8,(MethodInfo *)&local_c8,true,(Vector *)&local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  local_b8 = (undefined1  [16])0x0;
  local_f8 = "_close";
  local_100 = 0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0._0_8_ = 6;
  String::parse_latin1((StrRange *)&local_c8);
  local_f8 = "MultiplayerPeerExtension";
  local_90 = CONCAT44(local_90._4_4_,0x88);
  local_110 = 0;
  local_f0._0_8_ = 0x18;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(StrRange *)&local_110,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_f8,(MethodInfo *)&local_c8,true,(Vector *)&local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  local_100 = 0;
  local_f8 = (char *)0x0;
  local_c8 = "p_peer";
  local_c0 = 6;
  String::parse_latin1((StrRange *)&local_f8);
  local_c8 = (char *)0x0;
  if (local_f8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_f8);
  }
  Vector<String>::push_back((Vector<String> *)&local_108,(CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  local_110 = 0;
  local_c8 = "p_force";
  local_c0 = 7;
  String::parse_latin1((StrRange *)&local_110);
  local_c8 = (char *)0x0;
  if (local_110 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_110);
  }
  Vector<String>::push_back((Vector<String> *)&local_108,(CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  local_b8 = (undefined1  [16])0x0;
  local_f8 = "_disconnect_peer";
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0._0_8_ = 0x10;
  String::parse_latin1((StrRange *)&local_c8);
  local_90 = CONCAT44(local_90._4_4_,0x88);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_f8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_88,(PropertyInfo *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  Vector<int>::push_back(local_68,3);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_f8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_88,(PropertyInfo *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  Vector<int>::push_back(local_68,0);
  local_f8 = "MultiplayerPeerExtension";
  local_110 = 0;
  local_f0._0_8_ = 0x18;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(StrRange *)&local_110,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_f8,(MethodInfo *)&local_c8,true,(Vector *)&local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  local_b8 = (undefined1  [16])0x0;
  local_f8 = "_get_unique_id";
  local_100 = 0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0._0_8_ = 0xe;
  String::parse_latin1((StrRange *)&local_c8);
  local_90 = CONCAT44(local_90._4_4_,0x8c);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_f8);
  PropertyInfo::operator=((PropertyInfo *)&local_c0,(PropertyInfo *)&local_f8);
  lVar10 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar10 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_f0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar9 = local_f0._0_8_;
  if (local_f0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_f0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = local_f0._8_8_;
      local_f0 = auVar8 << 0x40;
      Memory::free_static((void *)(uVar9 + -0x10),false);
    }
  }
  local_70 = CONCAT44(local_70._4_4_,3);
  local_110 = 0;
  local_f8 = "MultiplayerPeerExtension";
  local_f0._0_8_ = 0x18;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(StrRange *)&local_110,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_f8,(MethodInfo *)&local_c8,true,(Vector *)&local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  local_100 = 0;
  local_f8 = (char *)0x0;
  local_c8 = "p_enable";
  local_c0 = 8;
  String::parse_latin1((StrRange *)&local_f8);
  local_c8 = (char *)0x0;
  if (local_f8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_f8);
  }
  Vector<String>::push_back((Vector<String> *)&local_108,(CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  local_b8 = (undefined1  [16])0x0;
  local_f8 = "_set_refuse_new_connections";
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0._0_8_ = 0x1b;
  String::parse_latin1((StrRange *)&local_c8);
  local_90 = CONCAT44(local_90._4_4_,8);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_f8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_88,(PropertyInfo *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  Vector<int>::push_back(local_68,0);
  local_f8 = "MultiplayerPeerExtension";
  local_110 = 0;
  local_f0._0_8_ = 0x18;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(StrRange *)&local_110,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_f8,(MethodInfo *)&local_c8,true,(Vector *)&local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  local_b8 = (undefined1  [16])0x0;
  local_f8 = "_is_refusing_new_connections";
  local_100 = 0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0._0_8_ = 0x1c;
  String::parse_latin1((StrRange *)&local_c8);
  local_90 = CONCAT44(local_90._4_4_,0xc);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_f8);
  PropertyInfo::operator=((PropertyInfo *)&local_c0,(PropertyInfo *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  local_f8 = "MultiplayerPeerExtension";
  local_70 = local_70 & 0xffffffff00000000;
  local_110 = 0;
  local_f0._0_8_ = 0x18;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(StrRange *)&local_110,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_f8,(MethodInfo *)&local_c8,true,(Vector *)&local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  local_b8 = (undefined1  [16])0x0;
  local_f8 = "_is_server_relay_supported";
  local_100 = 0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0._0_8_ = 0x1a;
  String::parse_latin1((StrRange *)&local_c8);
  local_90 = CONCAT44(local_90._4_4_,0xc);
  GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_f8);
  PropertyInfo::operator=((PropertyInfo *)&local_c0,(PropertyInfo *)&local_f8);
  lVar10 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar10 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_f0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar9 = local_f0._0_8_;
  if (local_f0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_f0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar7._8_8_ = 0;
      auVar7._0_8_ = local_f0._8_8_;
      local_f0 = auVar7 << 0x40;
      Memory::free_static((void *)(uVar9 + -0x10),false);
    }
  }
  local_70 = local_70 & 0xffffffff00000000;
  local_110 = 0;
  local_f8 = "MultiplayerPeerExtension";
  local_f0._0_8_ = 0x18;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(StrRange *)&local_110,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_f8,(MethodInfo *)&local_c8,true,(Vector *)&local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  local_b8 = (undefined1  [16])0x0;
  local_f8 = "_get_connection_status";
  local_100 = 0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_f0._0_8_ = 0x16;
  String::parse_latin1((StrRange *)&local_c8);
  local_90 = CONCAT44(local_90._4_4_,0x8c);
  GetTypeInfo<MultiplayerPeer::ConnectionStatus,void>::get_class_info
            ((GetTypeInfo<MultiplayerPeer::ConnectionStatus,void> *)&local_f8);
  PropertyInfo::operator=((PropertyInfo *)&local_c0,(PropertyInfo *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  local_f8 = "MultiplayerPeerExtension";
  local_70 = local_70 & 0xffffffff00000000;
  local_110 = 0;
  local_f0._0_8_ = 0x18;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(StrRange *)&local_110,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_f8,(MethodInfo *)&local_c8,true,(Vector *)&local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_100);
  Variant::Variant((Variant *)local_58,2);
  StringName::StringName((StringName *)&local_f8,"transfer_mode",false);
  local_108 = 0;
  local_c8 = "MultiplayerPeerExtension";
  local_c0 = 0x18;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_c8,(StrRange *)&local_108,false);
  ClassDB::set_property_default_value
            ((StringName *)&local_c8,(StringName *)&local_f8,(Variant *)local_58);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,0);
  StringName::StringName((StringName *)&local_f8,"transfer_channel",false);
  local_108 = 0;
  local_c8 = "MultiplayerPeerExtension";
  local_c0 = 0x18;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_c8,(StrRange *)&local_108,false);
  ClassDB::set_property_default_value
            ((StringName *)&local_c8,(StringName *)&local_f8,(Variant *)local_58);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MultiplayerPeerExtension::put_packet(unsigned char const*, int) */

ulong __thiscall
MultiplayerPeerExtension::put_packet(MultiplayerPeerExtension *this,uchar *param_1,int param_2)

{
  ulong *puVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  code *pcVar10;
  ulong uVar11;
  ulong uVar12;
  size_t sVar13;
  ulong *puVar14;
  long in_FS_OFFSET;
  bool bVar15;
  undefined8 local_168;
  long local_160;
  uchar *local_158;
  ulong *local_150;
  ulong local_148;
  long local_140 [5];
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8 [2];
  undefined8 local_c8;
  ulong local_c0;
  Vector<int> local_b8 [8];
  undefined8 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  int local_98 [8];
  uchar **local_78;
  ulong *puStack_70;
  int local_60 [8];
  long local_40;
  
  uVar11 = (ulong)param_2;
  plVar9 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar9 != (long *)0x0) {
    local_118._0_4_ = 0;
    local_118._4_4_ = 0;
    uStack_110 = 0;
    Variant::Variant((Variant *)&local_78,(ulong)param_1);
    Variant::Variant((Variant *)local_60,param_2);
    local_a8 = (Variant *)&local_78;
    pVStack_a0 = (Variant *)local_60;
    (**(code **)(*plVar9 + 0x60))((Variant *)local_98,plVar9,this + 0x1e8,&local_a8,2,&local_118);
    if ((uint)local_118 == 0) {
      uVar11 = Variant::operator_cast_to_long((Variant *)local_98);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
        uVar11 = uVar11 & 0xffffffff;
      }
      if (Variant::needs_deinit[local_60[0]] != '\0') {
        Variant::_clear_internal();
        uVar11 = uVar11 & 0xffffffff;
      }
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
        uVar11 = uVar11 & 0xffffffff;
      }
      goto LAB_001069ff;
    }
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_60[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x1f0] == (MultiplayerPeerExtension)0x0)) {
    local_118._0_4_ = 0;
    local_118._4_4_ = 0;
    local_108 = (undefined1  [16])0x0;
    uStack_110 = 0;
    uStack_10c = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_e8 = 6;
    local_e0 = 1;
    local_d8[0] = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_b0 = 0;
    String::parse_latin1((String *)&local_118,"_put_packet");
    local_e0 = CONCAT44(local_e0._4_4_,8);
    GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_148);
    PropertyInfo::operator=((PropertyInfo *)&uStack_110,(PropertyInfo *)&local_148);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
    local_c0 = local_c0 & 0xffffffff00000000;
    GetTypeInfo<GDExtensionConstPtr<unsigned_char_const>,void>::get_class_info
              ((GetTypeInfo<GDExtensionConstPtr<unsigned_char_const>,void> *)&local_148);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_d8,(PropertyInfo *)&local_148);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
    Vector<int>::push_back(local_b8,0);
    GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_148);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_d8,(PropertyInfo *)&local_148);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
    Vector<int>::push_back(local_b8,3);
    uVar4 = MethodInfo::get_compatibility_hash();
    *(undefined8 *)(this + 0x1f8) = 0;
    lVar7 = *(long *)(this + 8);
    pcVar10 = *(code **)(lVar7 + 0xd8);
    if (((pcVar10 == (code *)0x0) || (*(long *)(lVar7 + 0xe0) == 0)) &&
       (pcVar10 = *(code **)(lVar7 + 0xd0), pcVar10 == (code *)0x0)) {
      local_160 = 0;
      String::parse_latin1((String *)&local_160,"MultiplayerPeerExtension");
      StringName::StringName((StringName *)&local_158,(String *)&local_160,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_148,(StringName *)&local_158);
      if (local_140[0] == 0) {
        lVar7 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_140);
        if (StringName::configured != '\0') goto LAB_001074d3;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
LAB_001074f4:
        lVar7 = *(long *)(this + 8);
        pcVar10 = *(code **)(lVar7 + 200);
        if (((pcVar10 == (code *)0x0) || (*(long *)(lVar7 + 0xe0) == 0)) &&
           (pcVar10 = *(code **)(lVar7 + 0xc0), pcVar10 == (code *)0x0)) goto LAB_00106f2e;
        uVar6 = (*pcVar10)(*(undefined8 *)(lVar7 + 0xa0));
        *(undefined8 *)(this + 0x1f8) = uVar6;
      }
      else {
        lVar7 = *(long *)(local_140[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_140);
        if (StringName::configured != '\0') {
LAB_001074d3:
          if (local_158 != (uchar *)0x0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
        if (lVar7 == 0) goto LAB_001074f4;
      }
      lVar7 = *(long *)(this + 8);
    }
    else {
      uVar6 = (*pcVar10)(*(undefined8 *)(lVar7 + 0xa0),this + 0x1e8,uVar4);
      *(undefined8 *)(this + 0x1f8) = uVar6;
      lVar7 = *(long *)(this + 8);
    }
LAB_00106f2e:
    if (*(char *)(lVar7 + 0x29) != '\0') {
      plVar9 = (long *)operator_new(0x18,"");
      *plVar9 = (long)(this + 0x1f8);
      plVar9[1] = (long)(this + 0x1f0);
      plVar9[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar9;
    }
    this[0x1f0] = (MultiplayerPeerExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_118);
  }
  pcVar10 = *(code **)(this + 0x1f8);
  if (pcVar10 != (code *)0x0) {
    local_78 = &local_158;
    puStack_70 = &local_148;
    local_158 = param_1;
    local_148 = uVar11;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar10)(*(undefined8 *)(this + 0x10),&local_78,&local_118);
      uVar11 = (ulong)(uint)local_118;
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x1e8,pcVar10,&local_78,&local_118);
      uVar11 = (ulong)(uint)local_118;
    }
    goto LAB_001069ff;
  }
  if ((*(long **)(this + 0x98) == (long *)0x0) ||
     (cVar2 = (**(code **)(**(long **)(this + 0x98) + 0x50))(), cVar2 == '\0')) {
    if ((*(long *)(this + 8) != 0) && (this[0x208] == (MultiplayerPeerExtension)0x0)) {
      local_118._0_4_ = 0;
      local_118._4_4_ = 0;
      local_108 = (undefined1  [16])0x0;
      uStack_110 = 0;
      uStack_10c = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_e8 = 6;
      local_e0 = 1;
      local_d8[0] = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_b0 = 0;
      String::parse_latin1((String *)&local_118,"_put_packet_script");
      local_e0 = CONCAT44(local_e0._4_4_,8);
      GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_148);
      PropertyInfo::operator=((PropertyInfo *)&uStack_110,(PropertyInfo *)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
      local_c0 = local_c0 & 0xffffffff00000000;
      GetTypeInfo<Vector<unsigned_char>,void>::get_class_info
                ((GetTypeInfo<Vector<unsigned_char>,void> *)&local_148);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_d8,(PropertyInfo *)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
      Vector<int>::push_back(local_b8,0);
      uVar4 = MethodInfo::get_compatibility_hash();
      *(undefined8 *)(this + 0x210) = 0;
      lVar7 = *(long *)(this + 8);
      pcVar10 = *(code **)(lVar7 + 0xd8);
      if (((pcVar10 == (code *)0x0) || (*(long *)(lVar7 + 0xe0) == 0)) &&
         (pcVar10 = *(code **)(lVar7 + 0xd0), pcVar10 == (code *)0x0)) {
        local_160 = 0;
        String::parse_latin1((String *)&local_160,"MultiplayerPeerExtension");
        StringName::StringName((StringName *)&local_158,(String *)&local_160,false);
        ClassDB::get_virtual_method_compatibility_hashes
                  ((StringName *)&local_148,(StringName *)&local_158);
        if (local_140[0] == 0) {
          lVar7 = 0;
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_140);
          if (StringName::configured != '\0') goto LAB_0010767b;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
LAB_0010769c:
          lVar7 = *(long *)(this + 8);
          pcVar10 = *(code **)(lVar7 + 200);
          if (((pcVar10 == (code *)0x0) || (*(long *)(lVar7 + 0xe0) == 0)) &&
             (pcVar10 = *(code **)(lVar7 + 0xc0), pcVar10 == (code *)0x0)) goto LAB_00107129;
          uVar6 = (*pcVar10)(*(undefined8 *)(lVar7 + 0xa0));
          *(undefined8 *)(this + 0x210) = uVar6;
        }
        else {
          lVar7 = *(long *)(local_140[0] + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_140);
          if (StringName::configured != '\0') {
LAB_0010767b:
            if (local_158 != (uchar *)0x0) {
              StringName::unref();
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
          if (lVar7 == 0) goto LAB_0010769c;
        }
        lVar7 = *(long *)(this + 8);
      }
      else {
        uVar6 = (*pcVar10)(*(undefined8 *)(lVar7 + 0xa0),this + 0x200,uVar4);
        *(undefined8 *)(this + 0x210) = uVar6;
        lVar7 = *(long *)(this + 8);
      }
LAB_00107129:
      if (*(char *)(lVar7 + 0x29) != '\0') {
        plVar9 = (long *)operator_new(0x18,"");
        *plVar9 = (long)(this + 0x210);
        plVar9[1] = (long)(this + 0x208);
        plVar9[2] = *(long *)(this + 0x168);
        *(long **)(this + 0x168) = plVar9;
      }
      this[0x208] = (MultiplayerPeerExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo *)&local_118);
    }
    if (*(long *)(this + 0x210) == 0) {
      if (put_packet(unsigned_char_const*,int)::first_print != '\0') {
        _err_print_error("put_packet","scene/main/multiplayer_peer.cpp",0xa8,
                         "MultiplayerPeerExtension::_put_packet_native is unimplemented!",0,1);
        put_packet(unsigned_char_const*,int)::first_print = '\0';
      }
      uVar11 = 1;
      goto LAB_001069ff;
    }
  }
  puVar14 = (ulong *)0x0;
  if ((long)uVar11 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    sVar13 = uVar11;
  }
  else {
    sVar13 = 0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - 1 | uVar11 - 1 >> 1;
      uVar12 = uVar12 | uVar12 >> 2;
      uVar12 = uVar12 | uVar12 >> 4;
      uVar12 = uVar12 | uVar12 >> 8;
      puVar5 = (ulong *)Memory::alloc_static((uVar12 | uVar12 >> 0x10) + 0x11,false);
      if (puVar5 == (ulong *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
        sVar13 = uVar11;
      }
      else {
        puVar14 = puVar5 + 2;
        *puVar5 = 1;
        puVar5[1] = uVar11;
        sVar13 = uVar11;
        if (1 < *puVar5) {
          sVar13 = puVar5[1];
          uVar12 = 0x10;
          if (sVar13 != 0) {
            uVar12 = sVar13 - 1 | sVar13 - 1 >> 1;
            uVar12 = uVar12 | uVar12 >> 2;
            uVar12 = uVar12 | uVar12 >> 4;
            uVar12 = uVar12 | uVar12 >> 8;
            uVar12 = uVar12 | uVar12 >> 0x10;
            uVar12 = (uVar12 | uVar12 >> 0x20) + 0x11;
          }
          puVar8 = (undefined8 *)Memory::alloc_static(uVar12,false);
          if (puVar8 == (undefined8 *)0x0) {
            _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                             "Parameter \"mem_new\" is null.",0,0);
            sVar13 = uVar11;
          }
          else {
            puVar1 = puVar8 + 2;
            *puVar8 = 1;
            puVar8[1] = sVar13;
            memcpy(puVar1,puVar14,sVar13);
            LOCK();
            *puVar5 = *puVar5 - 1;
            UNLOCK();
            sVar13 = uVar11;
            puVar14 = puVar1;
            if (*puVar5 == 0) {
              Memory::free_static(puVar5,false);
            }
          }
        }
      }
    }
  }
  puVar5 = puVar14 + -2;
  memcpy(puVar14,param_1,sVar13);
  local_150 = (ulong *)0x0;
  do {
    uVar11 = *puVar5;
    if (uVar11 == 0) goto LAB_00106b21;
    LOCK();
    uVar12 = *puVar5;
    bVar15 = uVar11 == uVar12;
    if (bVar15) {
      *puVar5 = uVar11 + 1;
      uVar12 = uVar11;
    }
    UNLOCK();
  } while (!bVar15);
  if (uVar12 != 0xffffffffffffffff) {
    local_150 = puVar14;
  }
LAB_00106b21:
  plVar9 = *(long **)(this + 0x98);
  if (plVar9 == (long *)0x0) {
LAB_00106bc7:
    if ((*(long *)(this + 8) != 0) && (this[0x208] == (MultiplayerPeerExtension)0x0)) {
      local_118._0_4_ = 0;
      local_118._4_4_ = 0;
      local_108 = (undefined1  [16])0x0;
      uStack_110 = 0;
      uStack_10c = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_e8 = 6;
      local_e0 = 1;
      local_d8[0] = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_b0 = 0;
      String::parse_latin1((String *)&local_118,"_put_packet_script");
      local_e0 = CONCAT44(local_e0._4_4_,8);
      GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_148);
      PropertyInfo::operator=((PropertyInfo *)&uStack_110,(PropertyInfo *)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
      local_c0 = local_c0 & 0xffffffff00000000;
      GetTypeInfo<Vector<unsigned_char>,void>::get_class_info
                ((GetTypeInfo<Vector<unsigned_char>,void> *)&local_148);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_d8,(PropertyInfo *)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
      Vector<int>::push_back(local_b8,0);
      uVar4 = MethodInfo::get_compatibility_hash();
      *(undefined8 *)(this + 0x210) = 0;
      lVar7 = *(long *)(this + 8);
      pcVar10 = *(code **)(lVar7 + 0xd8);
      if (((pcVar10 == (code *)0x0) || (*(long *)(lVar7 + 0xe0) == 0)) &&
         (pcVar10 = *(code **)(lVar7 + 0xd0), pcVar10 == (code *)0x0)) {
        local_168 = 0;
        String::parse_latin1((String *)&local_168,"MultiplayerPeerExtension");
        StringName::StringName((StringName *)&local_160,(String *)&local_168,false);
        ClassDB::get_virtual_method_compatibility_hashes
                  ((StringName *)&local_148,(StringName *)&local_160);
        if (local_140[0] == 0) {
          lVar7 = 0;
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_140);
          if (StringName::configured != '\0') goto LAB_0010775a;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
LAB_00107779:
          lVar7 = *(long *)(this + 8);
          pcVar10 = *(code **)(lVar7 + 200);
          if (((pcVar10 == (code *)0x0) || (*(long *)(lVar7 + 0xe0) == 0)) &&
             (pcVar10 = *(code **)(lVar7 + 0xc0), pcVar10 == (code *)0x0)) goto LAB_00107349;
          uVar6 = (*pcVar10)(*(undefined8 *)(lVar7 + 0xa0));
          *(undefined8 *)(this + 0x210) = uVar6;
        }
        else {
          lVar7 = *(long *)(local_140[0] + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_140);
          if (StringName::configured != '\0') {
LAB_0010775a:
            if (local_160 != 0) {
              StringName::unref();
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
          if (lVar7 == 0) goto LAB_00107779;
        }
        lVar7 = *(long *)(this + 8);
      }
      else {
        uVar6 = (*pcVar10)(*(undefined8 *)(lVar7 + 0xa0),this + 0x200,uVar4);
        *(undefined8 *)(this + 0x210) = uVar6;
        lVar7 = *(long *)(this + 8);
      }
LAB_00107349:
      if (*(char *)(lVar7 + 0x29) != '\0') {
        plVar9 = (long *)operator_new(0x18,"");
        *plVar9 = (long)(this + 0x210);
        plVar9[1] = (long)(this + 0x208);
        plVar9[2] = *(long *)(this + 0x168);
        *(long **)(this + 0x168) = plVar9;
      }
      this[0x208] = (MultiplayerPeerExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo *)&local_118);
    }
    puVar14 = local_150;
    pcVar10 = *(code **)(this + 0x210);
    if (pcVar10 != (code *)0x0) {
      uStack_110 = 0;
      uStack_10c = 0;
      if (local_150 != (ulong *)0x0) {
        puVar14 = local_150 + -2;
        do {
          uVar11 = *puVar14;
          if (uVar11 == 0) goto LAB_00106ce5;
          LOCK();
          uVar12 = *puVar14;
          bVar15 = uVar11 == uVar12;
          if (bVar15) {
            *puVar14 = uVar11 + 1;
            uVar12 = uVar11;
          }
          UNLOCK();
        } while (!bVar15);
        if (uVar12 != 0xffffffffffffffff) {
          uStack_110 = SUB84(local_150,0);
          uStack_10c = (undefined4)((ulong)local_150 >> 0x20);
        }
LAB_00106ce5:
        pcVar10 = *(code **)(this + 0x210);
      }
      local_78 = (uchar **)&local_118;
      if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
        (*pcVar10)(*(undefined8 *)(this + 0x10),&local_78,&local_148);
        uVar3 = (uint)local_148;
      }
      else {
        (**(code **)(*(long *)(this + 8) + 0xe0))
                  (*(undefined8 *)(this + 0x10),this + 0x200,pcVar10,&local_78,&local_148);
        uVar3 = (uint)local_148;
      }
      CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&uStack_110);
      uVar11 = (ulong)uVar3;
      puVar14 = local_150;
      goto joined_r0x00106d48;
    }
    if (local_150 != (ulong *)0x0) {
      LOCK();
      puVar1 = local_150 + -2;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if (*puVar1 == 0) {
        local_150 = (ulong *)0x0;
        Memory::free_static(puVar14 + -2,false);
      }
    }
    uVar11 = 1;
  }
  else {
    local_118._0_4_ = 0;
    local_118._4_4_ = 0;
    uStack_110 = 0;
    Variant::Variant((Variant *)local_98,(Vector *)&local_158);
    local_a8 = (Variant *)local_98;
    (**(code **)(*plVar9 + 0x60))((Variant *)&local_78,plVar9,this + 0x200,&local_a8,1,&local_118);
    if ((uint)local_118 != 0) {
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00106bc7;
    }
    uVar11 = Variant::operator_cast_to_long((Variant *)&local_78);
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
      uVar11 = uVar11 & 0xffffffff;
    }
    puVar14 = local_150;
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
      uVar11 = uVar11 & 0xffffffff;
      puVar14 = local_150;
    }
joined_r0x00106d48:
    local_150 = puVar14;
    if (puVar14 != (ulong *)0x0) {
      LOCK();
      puVar1 = puVar14 + -2;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if (*puVar1 == 0) {
        local_150 = (ulong *)0x0;
        Memory::free_static(puVar14 + -2,false);
        uVar11 = uVar11 & 0xffffffff;
      }
    }
  }
  LOCK();
  *puVar5 = *puVar5 - 1;
  UNLOCK();
  if (*puVar5 == 0) {
    Memory::free_static(puVar5,false);
    uVar11 = uVar11 & 0xffffffff;
  }
LAB_001069ff:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11;
}



/* MultiplayerPeerExtension::get_packet(unsigned char const**, int&) */

ulong __thiscall
MultiplayerPeerExtension::get_packet(MultiplayerPeerExtension *this,uchar **param_1,int *param_2)

{
  uchar *puVar1;
  char cVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  code *pcVar9;
  long in_FS_OFFSET;
  bool bVar10;
  undefined8 local_158;
  uchar **local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  uint local_118 [2];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8 [2];
  undefined8 local_c8;
  ulong local_c0;
  Vector<int> local_b8 [8];
  undefined8 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  int local_98 [8];
  uchar ***local_78;
  undefined8 *puStack_70;
  int local_60 [8];
  long local_40;
  
  plVar8 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar8 != (long *)0x0) {
    local_118[0] = 0;
    local_118[1] = 0;
    uStack_110 = 0;
    Variant::Variant((Variant *)&local_78,(ulong)param_1);
    Variant::Variant((Variant *)local_60,(ulong)param_2);
    local_a8 = (Variant *)&local_78;
    pVStack_a0 = (Variant *)local_60;
    (**(code **)(*plVar8 + 0x60))((Variant *)local_98,plVar8,this + 0x1b8,&local_a8,2,local_118);
    if (local_118[0] == 0) {
      uVar4 = Variant::operator_cast_to_long((Variant *)local_98);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
        uVar4 = uVar4 & 0xffffffff;
      }
      if (Variant::needs_deinit[local_60[0]] != '\0') {
        Variant::_clear_internal();
        uVar4 = uVar4 & 0xffffffff;
      }
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
        uVar4 = uVar4 & 0xffffffff;
      }
      goto LAB_00107a6f;
    }
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_60[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x1c0] == (MultiplayerPeerExtension)0x0)) {
    local_118[0] = 0;
    local_118[1] = 0;
    local_108 = (undefined1  [16])0x0;
    uStack_110 = 0;
    uStack_10c = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_e8 = 6;
    local_e0 = 1;
    local_d8[0] = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_b0 = 0;
    String::parse_latin1((String *)local_118,"_get_packet");
    local_e0 = CONCAT44(local_e0._4_4_,8);
    GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_148);
    PropertyInfo::operator=((PropertyInfo *)&uStack_110,(PropertyInfo *)&local_148);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
    local_c0 = local_c0 & 0xffffffff00000000;
    GetTypeInfo<GDExtensionConstPtr<unsigned_char_const*>,void>::get_class_info
              ((GetTypeInfo<GDExtensionConstPtr<unsigned_char_const*>,void> *)&local_148);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_d8,(PropertyInfo *)&local_148);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
    Vector<int>::push_back(local_b8,0);
    GetTypeInfo<GDExtensionPtr<int>,void>::get_class_info
              ((GetTypeInfo<GDExtensionPtr<int>,void> *)&local_148);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_d8,(PropertyInfo *)&local_148);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
    Vector<int>::push_back(local_b8,0);
    uVar3 = MethodInfo::get_compatibility_hash();
    *(undefined8 *)(this + 0x1c8) = 0;
    lVar7 = *(long *)(this + 8);
    pcVar9 = *(code **)(lVar7 + 0xd8);
    if (((pcVar9 == (code *)0x0) || (*(long *)(lVar7 + 0xe0) == 0)) &&
       (pcVar9 = *(code **)(lVar7 + 0xd0), pcVar9 == (code *)0x0)) {
      local_158 = 0;
      String::parse_latin1((String *)&local_158,"MultiplayerPeerExtension");
      StringName::StringName((StringName *)&local_150,(String *)&local_158,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_148,(StringName *)&local_150);
      if (CONCAT44(uStack_13c,local_140) == 0) {
        lVar7 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_140);
        if (StringName::configured != '\0') goto LAB_00108312;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
LAB_00108330:
        lVar7 = *(long *)(this + 8);
        pcVar9 = *(code **)(lVar7 + 200);
        if (((pcVar9 == (code *)0x0) || (*(long *)(lVar7 + 0xe0) == 0)) &&
           (pcVar9 = *(code **)(lVar7 + 0xc0), pcVar9 == (code *)0x0)) goto LAB_00107e50;
        uVar6 = (*pcVar9)(*(undefined8 *)(lVar7 + 0xa0),this + 0x1b8);
        *(undefined8 *)(this + 0x1c8) = uVar6;
      }
      else {
        lVar7 = *(long *)(CONCAT44(uStack_13c,local_140) + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_140);
        if (StringName::configured != '\0') {
LAB_00108312:
          if (local_150 != (uchar **)0x0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
        if (lVar7 == 0) goto LAB_00108330;
      }
      lVar7 = *(long *)(this + 8);
    }
    else {
      uVar6 = (*pcVar9)(*(undefined8 *)(lVar7 + 0xa0),this + 0x1b8,uVar3);
      *(undefined8 *)(this + 0x1c8) = uVar6;
      lVar7 = *(long *)(this + 8);
    }
LAB_00107e50:
    if (*(char *)(lVar7 + 0x29) != '\0') {
      plVar8 = (long *)operator_new(0x18,"");
      *plVar8 = (long)(this + 0x1c8);
      plVar8[1] = (long)(this + 0x1c0);
      plVar8[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar8;
    }
    this[0x1c0] = (MultiplayerPeerExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_118);
  }
  pcVar9 = *(code **)(this + 0x1c8);
  if (pcVar9 != (code *)0x0) {
    puStack_70 = &local_148;
    local_78 = &local_150;
    local_150 = param_1;
    local_148 = param_2;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar9)(*(undefined8 *)(this + 0x10),&local_78,local_118);
      uVar4 = (ulong)local_118[0];
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x1b8,pcVar9,&local_78,local_118);
      uVar4 = (ulong)local_118[0];
    }
    goto LAB_00107a6f;
  }
  plVar8 = *(long **)(this + 0x98);
  if ((plVar8 == (long *)0x0) ||
     (cVar2 = (**(code **)(*plVar8 + 0x50))(plVar8,this + 0x1d0), cVar2 == '\0')) {
    if ((*(long *)(this + 8) != 0) && (this[0x1d8] == (MultiplayerPeerExtension)0x0)) {
      local_118[0] = 0;
      local_118[1] = 0;
      local_108 = (undefined1  [16])0x0;
      uStack_110 = 0;
      uStack_10c = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_e8 = 6;
      local_e0 = 1;
      local_d8[0] = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_b0 = 0;
      String::parse_latin1((String *)local_118,"_get_packet_script");
      local_e0 = CONCAT44(local_e0._4_4_,8);
      GetTypeInfo<Vector<unsigned_char>,void>::get_class_info
                ((GetTypeInfo<Vector<unsigned_char>,void> *)&local_148);
      PropertyInfo::operator=((PropertyInfo *)&uStack_110,(PropertyInfo *)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
      local_c0 = local_c0 & 0xffffffff00000000;
      uVar3 = MethodInfo::get_compatibility_hash();
      *(undefined8 *)(this + 0x1e0) = 0;
      lVar7 = *(long *)(this + 8);
      pcVar9 = *(code **)(lVar7 + 0xd8);
      if (((pcVar9 == (code *)0x0) || (*(long *)(lVar7 + 0xe0) == 0)) &&
         (pcVar9 = *(code **)(lVar7 + 0xd0), pcVar9 == (code *)0x0)) {
        local_158 = 0;
        String::parse_latin1((String *)&local_158,"MultiplayerPeerExtension");
        StringName::StringName((StringName *)&local_150,(String *)&local_158,false);
        ClassDB::get_virtual_method_compatibility_hashes
                  ((StringName *)&local_148,(StringName *)&local_150);
        if (CONCAT44(uStack_13c,local_140) == 0) {
          lVar7 = 0;
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_140);
          if (StringName::configured != '\0') goto LAB_00108430;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
LAB_0010844e:
          lVar7 = *(long *)(this + 8);
          pcVar9 = *(code **)(lVar7 + 200);
          if (((pcVar9 == (code *)0x0) || (*(long *)(lVar7 + 0xe0) == 0)) &&
             (pcVar9 = *(code **)(lVar7 + 0xc0), pcVar9 == (code *)0x0)) goto LAB_001080f1;
          uVar6 = (*pcVar9)(*(undefined8 *)(lVar7 + 0xa0),this + 0x1d0);
          *(undefined8 *)(this + 0x1e0) = uVar6;
        }
        else {
          lVar7 = *(long *)(CONCAT44(uStack_13c,local_140) + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_140);
          if (StringName::configured != '\0') {
LAB_00108430:
            if (local_150 != (uchar **)0x0) {
              StringName::unref();
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
          if (lVar7 == 0) goto LAB_0010844e;
        }
        lVar7 = *(long *)(this + 8);
      }
      else {
        uVar6 = (*pcVar9)(*(undefined8 *)(lVar7 + 0xa0),this + 0x1d0,uVar3);
        *(undefined8 *)(this + 0x1e0) = uVar6;
        lVar7 = *(long *)(this + 8);
      }
LAB_001080f1:
      if (*(char *)(lVar7 + 0x29) != '\0') {
        plVar8 = (long *)operator_new(0x18,"");
        *plVar8 = (long)(this + 0x1e0);
        plVar8[1] = (long)(this + 0x1d8);
        plVar8[2] = *(long *)(this + 0x168);
        *(long **)(this + 0x168) = plVar8;
      }
      this[0x1d8] = (MultiplayerPeerExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo *)local_118);
    }
    if (*(long *)(this + 0x1e0) != 0) goto LAB_00107ad6;
    if (get_packet(unsigned_char_const**,int&)::first_print != '\0') {
      _err_print_error("get_packet","scene/main/multiplayer_peer.cpp",0x95,
                       "MultiplayerPeerExtension::_get_packet_native is unimplemented!",0,1);
      get_packet(unsigned_char_const**,int&)::first_print = '\0';
    }
LAB_00107c45:
    uVar4 = 1;
  }
  else {
LAB_00107ad6:
    plVar8 = *(long **)(this + 0x98);
    if (plVar8 == (long *)0x0) {
LAB_00107b3a:
      if ((*(long *)(this + 8) != 0) && (this[0x1d8] == (MultiplayerPeerExtension)0x0)) {
        local_118[0] = 0;
        local_118[1] = 0;
        local_108 = (undefined1  [16])0x0;
        uStack_110 = 0;
        uStack_10c = 0;
        local_f8 = 0;
        local_f0 = 0;
        local_e8 = 6;
        local_e0 = 1;
        local_d8[0] = 0;
        local_c8 = 0;
        local_c0 = 0;
        local_b0 = 0;
        String::parse_latin1((String *)local_118,"_get_packet_script");
        local_e0 = CONCAT44(local_e0._4_4_,8);
        GetTypeInfo<Vector<unsigned_char>,void>::get_class_info
                  ((GetTypeInfo<Vector<unsigned_char>,void> *)&local_148);
        PropertyInfo::operator=((PropertyInfo *)&uStack_110,(PropertyInfo *)&local_148);
        PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
        local_c0 = local_c0 & 0xffffffff00000000;
        uVar3 = MethodInfo::get_compatibility_hash();
        *(undefined8 *)(this + 0x1e0) = 0;
        lVar7 = *(long *)(this + 8);
        pcVar9 = *(code **)(lVar7 + 0xd8);
        if (((pcVar9 == (code *)0x0) || (*(long *)(lVar7 + 0xe0) == 0)) &&
           (pcVar9 = *(code **)(lVar7 + 0xd0), pcVar9 == (code *)0x0)) {
          local_158 = 0;
          String::parse_latin1((String *)&local_158,"MultiplayerPeerExtension");
          StringName::StringName((StringName *)&local_150,(String *)&local_158,false);
          ClassDB::get_virtual_method_compatibility_hashes
                    ((StringName *)&local_148,(StringName *)&local_150);
          if (CONCAT44(uStack_13c,local_140) == 0) {
            lVar7 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_140);
            if (StringName::configured != '\0') goto LAB_00108511;
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
LAB_0010852f:
            lVar7 = *(long *)(this + 8);
            pcVar9 = *(code **)(lVar7 + 200);
            if (((pcVar9 == (code *)0x0) || (*(long *)(lVar7 + 0xe0) == 0)) &&
               (pcVar9 = *(code **)(lVar7 + 0xc0), pcVar9 == (code *)0x0)) goto LAB_00108231;
            uVar6 = (*pcVar9)(*(undefined8 *)(lVar7 + 0xa0),this + 0x1d0);
            *(undefined8 *)(this + 0x1e0) = uVar6;
          }
          else {
            lVar7 = *(long *)(CONCAT44(uStack_13c,local_140) + -8);
            CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_140);
            if (StringName::configured != '\0') {
LAB_00108511:
              if (local_150 != (uchar **)0x0) {
                StringName::unref();
              }
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
            if (lVar7 == 0) goto LAB_0010852f;
          }
          lVar7 = *(long *)(this + 8);
        }
        else {
          uVar6 = (*pcVar9)(*(undefined8 *)(lVar7 + 0xa0),this + 0x1d0,uVar3);
          *(undefined8 *)(this + 0x1e0) = uVar6;
          lVar7 = *(long *)(this + 8);
        }
LAB_00108231:
        if (*(char *)(lVar7 + 0x29) != '\0') {
          plVar8 = (long *)operator_new(0x18,"");
          *plVar8 = (long)(this + 0x1e0);
          plVar8[1] = (long)(this + 0x1d8);
          plVar8[2] = *(long *)(this + 0x168);
          *(long **)(this + 0x168) = plVar8;
        }
        this[0x1d8] = (MultiplayerPeerExtension)0x1;
        MethodInfo::~MethodInfo((MethodInfo *)local_118);
      }
      pcVar9 = *(code **)(this + 0x1e0);
      if (pcVar9 == (code *)0x0) goto LAB_00107c45;
      local_140 = 0;
      uStack_13c = 0;
      if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
        (*pcVar9)(*(undefined8 *)(this + 0x10),0,&local_148);
        lVar7 = CONCAT44(uStack_13c,local_140);
        uStack_110 = 0;
        uStack_10c = 0;
        if (lVar7 != 0) {
          plVar8 = (long *)(lVar7 + -0x10);
          do {
            lVar7 = *plVar8;
            if (lVar7 == 0) goto LAB_00108285;
            LOCK();
            lVar5 = *plVar8;
            bVar10 = lVar7 == lVar5;
            if (bVar10) {
              *plVar8 = lVar7 + 1;
              lVar5 = lVar7;
            }
            UNLOCK();
          } while (!bVar10);
          if (lVar5 == -1) {
LAB_00108285:
            lVar7 = 0;
          }
          else {
            lVar7 = CONCAT44(uStack_13c,local_140);
            uStack_110 = local_140;
            uStack_10c = uStack_13c;
          }
        }
        if (lVar7 != *(long *)(this + 0x1b0)) goto LAB_00107bd6;
      }
      else {
        (**(code **)(*(long *)(this + 8) + 0xe0))
                  (*(undefined8 *)(this + 0x10),this + 0x1d0,pcVar9,0,&local_148);
        lVar7 = CONCAT44(uStack_13c,local_140);
        uStack_110 = 0;
        uStack_10c = 0;
        if (lVar7 != 0) {
          plVar8 = (long *)(lVar7 + -0x10);
          do {
            lVar7 = *plVar8;
            if (lVar7 == 0) goto LAB_00107e90;
            LOCK();
            lVar5 = *plVar8;
            bVar10 = lVar7 == lVar5;
            if (bVar10) {
              *plVar8 = lVar7 + 1;
              lVar5 = lVar7;
            }
            UNLOCK();
          } while (!bVar10);
          if (lVar5 == -1) {
LAB_00107e90:
            lVar7 = 0;
          }
          else {
            lVar7 = CONCAT44(uStack_13c,local_140);
            uStack_110 = local_140;
            uStack_10c = uStack_13c;
          }
        }
        if (*(long *)(this + 0x1b0) != lVar7) {
LAB_00107bd6:
          CowData<unsigned_char>::_unref((CowData<unsigned_char> *)(this + 0x1b0));
          *(long *)(this + 0x1b0) = lVar7;
          uStack_110 = 0;
          uStack_10c = 0;
        }
      }
      CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&uStack_110);
      CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_140);
    }
    else {
      local_148._0_4_ = 0;
      local_148._4_4_ = 0;
      local_140 = 0;
      (**(code **)(*plVar8 + 0x60))(&local_78,plVar8,this + 0x1d0,0,0,&local_148);
      if ((int)local_148 != 0) {
        if (Variant::needs_deinit[(int)local_78] != '\0') {
          Variant::_clear_internal();
        }
        goto LAB_00107b3a;
      }
      Variant::operator_cast_to_Vector((Variant *)local_118);
      if (*(long *)(this + 0x1b0) != CONCAT44(uStack_10c,uStack_110)) {
        CowData<unsigned_char>::_unref((CowData<unsigned_char> *)(this + 0x1b0));
        uVar6 = CONCAT44(uStack_10c,uStack_110);
        uStack_110 = 0;
        uStack_10c = 0;
        *(undefined8 *)(this + 0x1b0) = uVar6;
      }
      CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&uStack_110);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
    }
    puVar1 = *(uchar **)(this + 0x1b0);
    if (puVar1 == (uchar *)0x0) {
      uVar4 = 2;
    }
    else {
      lVar7 = *(long *)(puVar1 + -8);
      uVar4 = 2;
      local_148 = (int *)CONCAT44(local_148._4_4_,(int)local_148);
      if (lVar7 != 0) {
        *param_1 = puVar1;
        uVar4 = 0;
        *param_2 = (int)lVar7;
        local_148 = (int *)CONCAT44(local_148._4_4_,(int)local_148);
      }
    }
  }
LAB_00107a6f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* MultiplayerPeerExtension::set_refuse_new_connections(bool) */

void __thiscall
MultiplayerPeerExtension::set_refuse_new_connections(MultiplayerPeerExtension *this,bool param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  undefined8 local_138;
  long local_130;
  GetTypeInfo<bool,void> local_128 [8];
  long local_120 [5];
  int local_f8 [4];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8 [2];
  undefined8 local_a8;
  undefined8 local_a0;
  Vector<int> local_98 [8];
  undefined8 local_90;
  Variant *local_80;
  int local_78 [8];
  int *local_58 [3];
  long local_40;
  
  plVar4 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar4 != (long *)0x0) {
    local_f8[0] = 0;
    local_f8[1] = 0;
    local_f8[2] = 0;
    Variant::Variant((Variant *)local_78,param_1);
    local_80 = (Variant *)local_78;
    (**(code **)(*plVar4 + 0x60))(local_58,plVar4,this + 0x248,&local_80,1,local_f8);
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_f8[0] == 0) {
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_001087da;
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x250] == (MultiplayerPeerExtension)0x0)) {
    local_f8[0] = 0;
    local_f8[1] = 0;
    local_e8 = (undefined1  [16])0x0;
    local_f8[2] = 0;
    local_f8[3] = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 6;
    local_c0 = 1;
    local_b8[0] = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_90 = 0;
    String::parse_latin1((String *)local_f8,"_set_refuse_new_connections");
    local_c0 = CONCAT44(local_c0._4_4_,8);
    GetTypeInfo<bool,void>::get_class_info(local_128);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_b8,(PropertyInfo *)local_128);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_128);
    Vector<int>::push_back(local_98,0);
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar3 = *(long *)(this + 8);
    *(undefined8 *)(this + 600) = 0;
    pcVar5 = *(code **)(lVar3 + 0xd8);
    if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
       (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
      local_138 = 0;
      String::parse_latin1((String *)&local_138,"MultiplayerPeerExtension");
      StringName::StringName((StringName *)&local_130,(String *)&local_138,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)local_128,(StringName *)&local_130);
      if (local_120[0] == 0) {
        lVar3 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_120);
        if (StringName::configured != '\0') goto LAB_00108a17;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
LAB_00108a34:
        lVar3 = *(long *)(this + 8);
        pcVar5 = *(code **)(lVar3 + 200);
        if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
           (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 == (code *)0x0)) goto LAB_0010896f;
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x248);
        *(undefined8 *)(this + 600) = uVar2;
      }
      else {
        lVar3 = *(long *)(local_120[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_120);
        if (StringName::configured != '\0') {
LAB_00108a17:
          if (local_130 != 0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
        if (lVar3 == 0) goto LAB_00108a34;
      }
      lVar3 = *(long *)(this + 8);
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x248,uVar1);
      *(undefined8 *)(this + 600) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
LAB_0010896f:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = (long)(this + 600);
      plVar4[1] = (long)(this + 0x250);
      plVar4[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar4;
    }
    this[0x250] = (MultiplayerPeerExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_f8);
  }
  pcVar5 = *(code **)(this + 600);
  if (pcVar5 == (code *)0x0) {
    this[0x1a0] = (MultiplayerPeerExtension)param_1;
  }
  else {
    local_58[0] = local_f8;
    local_f8[0] = CONCAT31(local_f8[0]._1_3_,param_1);
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar5)(*(undefined8 *)(this + 0x10),local_58,0);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x248,pcVar5,local_58,0);
    }
  }
LAB_001087da:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
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
  return (uint)CONCAT71(0x11b0,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11af,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* MultiplayerPeer::is_class_ptr(void*) const */

uint __thiscall MultiplayerPeer::is_class_ptr(MultiplayerPeer *this,void *param_1)

{
  return (uint)CONCAT71(0x11af,(undefined4 *)param_1 == &PacketPeer::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11af,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11af,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11b0,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* MultiplayerPeer::_getv(StringName const&, Variant&) const */

undefined8 MultiplayerPeer::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* MultiplayerPeer::_setv(StringName const&, Variant const&) */

undefined8 MultiplayerPeer::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* MultiplayerPeer::_validate_propertyv(PropertyInfo&) const */

void MultiplayerPeer::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* MultiplayerPeer::_property_can_revertv(StringName const&) const */

undefined8 MultiplayerPeer::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* MultiplayerPeer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 MultiplayerPeer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* MultiplayerPeer::_notificationv(int, bool) */

void MultiplayerPeer::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MultiplayerPeerExtension::is_class_ptr(void*) const */

uint __thiscall MultiplayerPeerExtension::is_class_ptr(MultiplayerPeerExtension *this,void *param_1)

{
  return (uint)CONCAT71(0x11af,(undefined4 *)param_1 ==
                               &MultiplayerPeer::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11af,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11af,(undefined4 *)param_1 == &PacketPeer::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11af,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11b0,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* MultiplayerPeerExtension::_getv(StringName const&, Variant&) const */

undefined8 MultiplayerPeerExtension::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* MultiplayerPeerExtension::_setv(StringName const&, Variant const&) */

undefined8 MultiplayerPeerExtension::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* MultiplayerPeerExtension::_validate_propertyv(PropertyInfo&) const */

void MultiplayerPeerExtension::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* MultiplayerPeerExtension::_property_can_revertv(StringName const&) const */

undefined8 MultiplayerPeerExtension::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* MultiplayerPeerExtension::_property_get_revertv(StringName const&, Variant&) const */

undefined8 MultiplayerPeerExtension::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* MultiplayerPeerExtension::_notificationv(int, bool) */

void MultiplayerPeerExtension::_notificationv(int param_1,bool param_2)

{
  return;
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



/* MethodBindTRC<unsigned int>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<unsigned_int>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<unsigned int>::get_argument_meta(int) const */

uint __thiscall
MethodBindTRC<unsigned_int>::get_argument_meta(MethodBindTRC<unsigned_int> *this,int param_1)

{
  return param_1 >> 0x1f & 7;
}



/* MethodBindTRC<MultiplayerPeer::ConnectionStatus>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<MultiplayerPeer::ConnectionStatus>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<MultiplayerPeer::ConnectionStatus>::get_argument_meta(int) const */

undefined8 MethodBindTRC<MultiplayerPeer::ConnectionStatus>::get_argument_meta(int param_1)

{
  return 0;
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



/* MethodBindTRC<MultiplayerPeer::TransferMode>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<MultiplayerPeer::TransferMode>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<MultiplayerPeer::TransferMode>::get_argument_meta(int) const */

undefined8 MethodBindTRC<MultiplayerPeer::TransferMode>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<MultiplayerPeer::TransferMode>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<MultiplayerPeer::TransferMode>::_gen_argument_type
          (MethodBindT<MultiplayerPeer::TransferMode> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<MultiplayerPeer::TransferMode>::get_argument_meta(int) const */

undefined8 MethodBindT<MultiplayerPeer::TransferMode>::get_argument_meta(int param_1)

{
  return 0;
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



/* MethodBindT<MultiplayerPeer::TransferMode>::~MethodBindT() */

void __thiscall
MethodBindT<MultiplayerPeer::TransferMode>::~MethodBindT
          (MethodBindT<MultiplayerPeer::TransferMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011acb0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<MultiplayerPeer::TransferMode>::~MethodBindT() */

void __thiscall
MethodBindT<MultiplayerPeer::TransferMode>::~MethodBindT
          (MethodBindT<MultiplayerPeer::TransferMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011acb0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011abf0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011abf0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<MultiplayerPeer::TransferMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<MultiplayerPeer::TransferMode>::~MethodBindTRC
          (MethodBindTRC<MultiplayerPeer::TransferMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011ad10;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<MultiplayerPeer::TransferMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<MultiplayerPeer::TransferMode>::~MethodBindTRC
          (MethodBindTRC<MultiplayerPeer::TransferMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011ad10;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011ad70;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011ad70;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, bool>::~MethodBindT() */

void __thiscall MethodBindT<int,bool>::~MethodBindT(MethodBindT<int,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011add0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, bool>::~MethodBindT() */

void __thiscall MethodBindT<int,bool>::~MethodBindT(MethodBindT<int,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011add0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<MultiplayerPeer::ConnectionStatus>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<MultiplayerPeer::ConnectionStatus>::~MethodBindTRC
          (MethodBindTRC<MultiplayerPeer::ConnectionStatus> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011ae30;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<MultiplayerPeer::ConnectionStatus>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<MultiplayerPeer::ConnectionStatus>::~MethodBindTRC
          (MethodBindTRC<MultiplayerPeer::ConnectionStatus> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011ae30;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011ac50;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011ac50;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<unsigned int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<unsigned_int>::~MethodBindTRC(MethodBindTRC<unsigned_int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011ae90;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<unsigned int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<unsigned_int>::~MethodBindTRC(MethodBindTRC<unsigned_int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011ae90;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011aef0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011aef0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011af50;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011af50;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0011a640;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0011a640;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* MultiplayerPeer::_bind_methods() [clone .cold] */

void MultiplayerPeer::_bind_methods(void)

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
LAB_00109763:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00109763;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_001097ce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_001097ce:
  return &_get_class_namev()::_class_name_static;
}



/* MultiplayerPeer::_get_class_namev() const */

undefined8 * MultiplayerPeer::_get_class_namev(void)

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
LAB_00109853:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00109853;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"MultiplayerPeer");
      goto LAB_001098be;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"MultiplayerPeer");
LAB_001098be:
  return &_get_class_namev()::_class_name_static;
}



/* MultiplayerPeerExtension::_get_class_namev() const */

undefined8 * MultiplayerPeerExtension::_get_class_namev(void)

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
LAB_00109943:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00109943;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"MultiplayerPeerExtension");
      goto LAB_001099ae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"MultiplayerPeerExtension");
LAB_001099ae:
  return &_get_class_namev()::_class_name_static;
}



/* MultiplayerPeer::get_class() const */

void MultiplayerPeer::get_class(void)

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



/* MultiplayerPeerExtension::get_class() const */

void MultiplayerPeerExtension::get_class(void)

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



/* MultiplayerPeerExtension::~MultiplayerPeerExtension() */

void __thiscall MultiplayerPeerExtension::~MultiplayerPeerExtension(MultiplayerPeerExtension *this)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  
  bVar3 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_0011a9c8;
  if (bVar3) {
    if (*(long *)(this + 0x3c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109f90;
    }
    if (*(long *)(this + 0x3b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109f90;
    }
    if (*(long *)(this + 0x398) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109f90;
    }
    if (*(long *)(this + 0x380) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109f90;
    }
    if (*(long *)(this + 0x368) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109f90;
    }
    if (*(long *)(this + 0x350) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109f90;
    }
    if (*(long *)(this + 0x338) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109f90;
    }
    if (*(long *)(this + 800) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109f90;
    }
    if (*(long *)(this + 0x308) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109f90;
    }
    if (*(long *)(this + 0x2f0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109f90;
    }
    if (*(long *)(this + 0x2d8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109f90;
    }
    if (*(long *)(this + 0x2c0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109f90;
    }
    if (*(long *)(this + 0x2a8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109f90;
    }
    if (*(long *)(this + 0x290) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109f90;
    }
    if (*(long *)(this + 0x278) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109f90;
    }
    if (*(long *)(this + 0x260) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109f90;
    }
    if (*(long *)(this + 0x248) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109f90;
    }
    if (*(long *)(this + 0x230) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109f90;
    }
    if (*(long *)(this + 0x218) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109f90;
    }
    if (*(long *)(this + 0x200) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109f90;
    }
    if (*(long *)(this + 0x1e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109f90;
    }
    if (*(long *)(this + 0x1d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109f90;
    }
    if (*(long *)(this + 0x1b8) != 0) {
      StringName::unref();
    }
  }
LAB_00109f90:
  if (*(long *)(this + 0x1b0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1b0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x1b0);
      *(undefined8 *)(this + 0x1b0) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  *(code **)this = Object::initialize_class;
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
  *(undefined ***)this = &PTR__initialize_classv_0011a640;
  Object::~Object((Object *)this);
  return;
}



/* MultiplayerPeerExtension::~MultiplayerPeerExtension() */

void __thiscall MultiplayerPeerExtension::~MultiplayerPeerExtension(MultiplayerPeerExtension *this)

{
  ~MultiplayerPeerExtension(this);
  operator_delete(this,0x3e0);
  return;
}



/* MethodBindTRC<unsigned int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<unsigned_int>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC7;
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
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(puVar3 + 8),false);
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
      goto joined_r0x0010a17c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010a17c:
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
  local_48 = &_LC7;
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
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(puVar3 + 8),false);
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
      goto joined_r0x0010a2fc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010a2fc:
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
  local_48 = &_LC7;
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
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(puVar3 + 8),false);
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
      goto joined_r0x0010a47c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010a47c:
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
    StringName::StringName((StringName *)&local_40,(StrRange *)&local_48,false);
    local_38 = "RefCounted";
    local_50 = 0;
    local_30 = 10;
    String::parse_latin1((StrRange *)&local_50);
    StringName::StringName((StringName *)&local_38,(StrRange *)&local_50,false);
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
LAB_0010a7d8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010a7d8;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x0010a7f6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x0010a7f6:
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
            if (lVar5 == 0) goto LAB_0010aacf;
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
LAB_0010aacf:
    cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
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
    if (cVar6 != '\0') goto LAB_0010ab83;
  }
  cVar6 = String::operator==((String *)param_1,"RefCounted");
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
              if (lVar5 == 0) goto LAB_0010ac33;
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
LAB_0010ac33:
      cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
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
      if (cVar6 != '\0') goto LAB_0010ab83;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==((String *)param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_0010ab83:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
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
            if (lVar5 == 0) goto LAB_0010ad5f;
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
LAB_0010ad5f:
    cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
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
    if (cVar6 != '\0') goto LAB_0010ae13;
  }
  cVar6 = String::operator==((String *)param_1,"MultiplayerPeer");
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
              if (lVar5 == 0) goto LAB_0010aed3;
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
LAB_0010aed3:
      cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
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
      if (cVar6 != '\0') goto LAB_0010ae13;
    }
    cVar6 = String::operator==((String *)param_1,"PacketPeer");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_0010af7c;
    }
  }
LAB_0010ae13:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010af7c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MultiplayerPeerExtension::is_class(String const&) const */

undefined8 __thiscall
MultiplayerPeerExtension::is_class(MultiplayerPeerExtension *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010afff;
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
LAB_0010afff:
    cVar5 = String::operator==((String *)param_1,(StrRange *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0010b0b3;
  }
  cVar5 = String::operator==((String *)param_1,"MultiplayerPeerExtension");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = MultiplayerPeer::is_class((MultiplayerPeer *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010b0b3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* String::parse_latin1(char const*) */

void __thiscall String::parse_latin1(String *this,char *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (char *)0x0) {
    strlen(param_1);
  }
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
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



/* GetTypeInfo<bool, void>::get_class_info() */

GetTypeInfo<bool,void> * __thiscall
GetTypeInfo<bool,void>::get_class_info(GetTypeInfo<bool,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC7;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 1;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) == 0x11) {
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(this + 0x20),false);
      if (*(undefined **)(this + 0x10) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(this + 0x10) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010b32c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010b32c:
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
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<int, void>::get_class_info() */

GetTypeInfo<int,void> * __thiscall
GetTypeInfo<int,void>::get_class_info(GetTypeInfo<int,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC7;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) == 0x11) {
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(this + 0x20),false);
      if (*(undefined **)(this + 0x10) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(this + 0x10) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010b4ac;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010b4ac:
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
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<Vector<unsigned char>, void>::get_class_info() */

GetTypeInfo<Vector<unsigned_char>,void> * __thiscall
GetTypeInfo<Vector<unsigned_char>,void>::get_class_info
          (GetTypeInfo<Vector<unsigned_char>,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC7;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 0x1d;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) == 0x11) {
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(this + 0x20),false);
      if (*(undefined **)(this + 0x10) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(this + 0x10) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010b62c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010b62c:
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
    return this;
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
LAB_0010b7e8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010b7e8;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010b805;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010b805:
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
LAB_0010bc38:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010bc38;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010bc55;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010bc55:
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



/* MultiplayerPeerExtension::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
MultiplayerPeerExtension::_get_property_listv
          (MultiplayerPeerExtension *this,List *param_1,bool param_2)

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
  local_78 = "MultiplayerPeerExtension";
  local_70 = 0x18;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "MultiplayerPeerExtension";
  local_98 = 0;
  local_70 = 0x18;
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
LAB_0010c088:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010c088;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010c0a5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010c0a5:
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
  StringName::StringName((StringName *)&local_78,"MultiplayerPeerExtension",false);
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



/* MethodInfo::~MethodInfo() */

void __thiscall MethodInfo::~MethodInfo(MethodInfo *this)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  code *pcVar4;
  int *piVar5;
  long lVar6;
  
  if (*(long *)(this + 0x68) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x68) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x68);
      *(undefined8 *)(this + 0x68) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x50) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x50) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      piVar2 = *(int **)(this + 0x50);
      if (piVar2 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = *(long *)(piVar2 + -2);
      *(undefined8 *)(this + 0x50) = 0;
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
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)(this + 0x40));
  if (*(long *)(this + 0x28) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x28) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x28);
      *(undefined8 *)(this + 0x28) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 0x18) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 0x10) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x10) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x10);
      *(undefined8 *)(this + 0x10) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return;
    }
  }
  return;
}



/* GetTypeInfo<GDExtensionConstPtr<unsigned char const>, void>::get_class_info() */

GetTypeInfo<GDExtensionConstPtr<unsigned_char_const>,void> * __thiscall
GetTypeInfo<GDExtensionConstPtr<unsigned_char_const>,void>::get_class_info
          (GetTypeInfo<GDExtensionConstPtr<unsigned_char_const>,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = "const uint8_t";
  local_40 = 0xd;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0x1e;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) == 0x11) {
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(this + 0x20),false);
      if (*(char **)(this + 0x10) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(char **)(this + 0x10) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010c84c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010c84c:
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
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<GDExtensionPtr<int>, void>::get_class_info() */

GetTypeInfo<GDExtensionPtr<int>,void> * __thiscall
GetTypeInfo<GDExtensionPtr<int>,void>::get_class_info(GetTypeInfo<GDExtensionPtr<int>,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = "int32_t";
  local_40 = 7;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0x1e;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) == 0x11) {
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(this + 0x20),false);
      if (*(char **)(this + 0x10) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(char **)(this + 0x10) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010c9dc;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010c9dc:
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
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<GDExtensionConstPtr<unsigned char const*>, void>::get_class_info() */

GetTypeInfo<GDExtensionConstPtr<unsigned_char_const*>,void> * __thiscall
GetTypeInfo<GDExtensionConstPtr<unsigned_char_const*>,void>::get_class_info
          (GetTypeInfo<GDExtensionConstPtr<unsigned_char_const*>,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = "const uint8_t *";
  local_40 = 0xf;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0x1e;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) == 0x11) {
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(this + 0x20),false);
      if (*(char **)(this + 0x10) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(char **)(this + 0x10) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010cb6c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010cb6c:
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
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* MethodBindT<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<bool>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined4 local_48 [2];
  long local_40;
  long local_38;
  undefined4 local_30;
  long local_28;
  undefined4 local_20;
  long local_10;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar4 = 0;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 6;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)local_48);
    *puVar4 = local_48[0];
    if (*(long *)(puVar4 + 2) != local_40) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 2));
      lVar2 = local_40;
      local_40 = 0;
      *(long *)(puVar4 + 2) = lVar2;
    }
    if (*(long *)(puVar4 + 4) != local_38) {
      StringName::unref();
      lVar2 = local_38;
      local_38 = 0;
      *(long *)(puVar4 + 4) = lVar2;
    }
    lVar3 = local_28;
    puVar4[6] = local_30;
    lVar2 = *(long *)(puVar4 + 8);
    if (lVar2 == local_28) {
      puVar4[10] = local_20;
      if (lVar2 != 0) {
        LOCK();
        plVar1 = (long *)(lVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_28 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
    }
    else {
      if (lVar2 != 0) {
        LOCK();
        plVar1 = (long *)(lVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *(long *)(puVar4 + 8);
          *(undefined8 *)(puVar4 + 8) = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      *(long *)(puVar4 + 8) = local_28;
      puVar4[10] = local_20;
    }
    if ((StringName::configured != '\0') && (local_38 != 0)) {
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
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar4;
}



/* MethodBindT<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<int>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  undefined4 local_48 [2];
  long local_40;
  long local_38;
  undefined4 local_30;
  long local_28;
  undefined4 local_20;
  long local_10;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar3 = 0;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 6;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)local_48);
    *puVar3 = local_48[0];
    if (*(long *)(puVar3 + 2) != local_40) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar3 + 2));
      lVar2 = local_40;
      local_40 = 0;
      *(long *)(puVar3 + 2) = lVar2;
    }
    if (*(long *)(puVar3 + 4) != local_38) {
      StringName::unref();
      lVar2 = local_38;
      local_38 = 0;
      *(long *)(puVar3 + 4) = lVar2;
    }
    lVar2 = local_28;
    puVar3[6] = local_30;
    if (*(long *)(puVar3 + 8) == local_28) {
      puVar3[10] = local_20;
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
    }
    else {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar3 + 8));
      *(long *)(puVar3 + 8) = local_28;
      puVar3[10] = local_20;
    }
    if ((StringName::configured != '\0') && (local_38 != 0)) {
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
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<int,bool>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  undefined4 local_58 [2];
  long local_50;
  long local_48;
  undefined4 local_40;
  long local_38;
  undefined4 local_30;
  long local_20;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar3 = 0;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 6;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)local_58);
  }
  else {
    if (in_EDX != 1) goto LAB_0010cf72;
    GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)local_58);
  }
  *puVar3 = local_58[0];
  if (*(long *)(puVar3 + 2) != local_50) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar3 + 2));
    lVar2 = local_50;
    local_50 = 0;
    *(long *)(puVar3 + 2) = lVar2;
  }
  if (*(long *)(puVar3 + 4) != local_48) {
    StringName::unref();
    lVar2 = local_48;
    local_48 = 0;
    *(long *)(puVar3 + 4) = lVar2;
  }
  lVar2 = local_38;
  puVar3[6] = local_40;
  if (*(long *)(puVar3 + 8) == local_38) {
    puVar3[10] = local_30;
    if (local_38 != 0) {
      LOCK();
      plVar1 = (long *)(local_38 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_38 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar3 + 8));
    *(long *)(puVar3 + 8) = local_38;
    puVar3[10] = local_30;
  }
  if ((StringName::configured != '\0') && (local_48 != 0)) {
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
LAB_0010cf72:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<MultiplayerPeer, int>(void (MultiplayerPeer::*)(int)) */

MethodBind * create_method_bind<MultiplayerPeer,int>(_func_void_int *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0011abf0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "MultiplayerPeer";
  local_30 = 0xf;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<MultiplayerPeer, int>(int (MultiplayerPeer::*)() const) */

MethodBind * create_method_bind<MultiplayerPeer,int>(_func_int *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0011ac50;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "MultiplayerPeer";
  local_30 = 0xf;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<MultiplayerPeer, MultiplayerPeer::TransferMode>(void
   (MultiplayerPeer::*)(MultiplayerPeer::TransferMode)) */

MethodBind *
create_method_bind<MultiplayerPeer,MultiplayerPeer::TransferMode>(_func_void_TransferMode *param_1)

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
  *(_func_void_TransferMode **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011acb0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "MultiplayerPeer";
  local_30 = 0xf;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<MultiplayerPeer,
   MultiplayerPeer::TransferMode>(MultiplayerPeer::TransferMode (MultiplayerPeer::*)() const) */

MethodBind *
create_method_bind<MultiplayerPeer,MultiplayerPeer::TransferMode>(_func_TransferMode *param_1)

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
  *(_func_TransferMode **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011ad10;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "MultiplayerPeer";
  local_30 = 0xf;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<MultiplayerPeer>(void (MultiplayerPeer::*)()) */

MethodBind * create_method_bind<MultiplayerPeer>(_func_void *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0011ad70;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "MultiplayerPeer";
  local_30 = 0xf;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<MultiplayerPeer, int, bool>(void (MultiplayerPeer::*)(int, bool))
    */

MethodBind * create_method_bind<MultiplayerPeer,int,bool>(_func_void_int_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0011add0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "MultiplayerPeer";
  local_30 = 0xf;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<MultiplayerPeer,
   MultiplayerPeer::ConnectionStatus>(MultiplayerPeer::ConnectionStatus (MultiplayerPeer::*)()
   const) */

MethodBind *
create_method_bind<MultiplayerPeer,MultiplayerPeer::ConnectionStatus>
          (_func_ConnectionStatus *param_1)

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
  *(_func_ConnectionStatus **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011ae30;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "MultiplayerPeer";
  local_30 = 0xf;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<MultiplayerPeer, unsigned int>(unsigned int (MultiplayerPeer::*)()
   const) */

MethodBind * create_method_bind<MultiplayerPeer,unsigned_int>(_func_uint *param_1)

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
  *(_func_uint **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011ae90;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "MultiplayerPeer";
  local_30 = 0xf;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<MultiplayerPeer, bool>(void (MultiplayerPeer::*)(bool)) */

MethodBind * create_method_bind<MultiplayerPeer,bool>(_func_void_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0011aef0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "MultiplayerPeer";
  local_30 = 0xf;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<MultiplayerPeer, bool>(bool (MultiplayerPeer::*)() const) */

MethodBind * create_method_bind<MultiplayerPeer,bool>(_func_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0011af50;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "MultiplayerPeer";
  local_30 = 0xf;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* godot::details::enum_qualified_name_to_class_info_name(String const&) */

details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  long local_60;
  char local_58 [8];
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::split(local_58,SUB81(param_1,0),0x10dd3a);
  if ((local_50 != 0) && (2 < *(long *)(local_50 + -8))) {
    local_60 = 0;
    local_48 = &_LC19;
    local_40 = 1;
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == 0) {
      lVar5 = 0;
      lVar4 = -2;
    }
    else {
      lVar5 = *(long *)(local_50 + -8);
      lVar4 = lVar5 + -2;
      if (-1 < lVar4) {
        String::operator+((String *)&local_48,(String *)(local_50 + lVar4 * 8));
        String::operator+((String *)this,(String *)&local_48);
        puVar3 = local_48;
        lVar5 = local_60;
        if (local_48 != (undefined *)0x0) {
          LOCK();
          plVar1 = (long *)(local_48 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_48 = (undefined *)0x0;
            Memory::free_static(puVar3 + -0x10,false);
            lVar5 = local_60;
          }
        }
        goto joined_r0x0010ddf8;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar4,lVar5,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_60 = 0;
  local_48 = &_LC19;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)this);
  lVar5 = local_60;
joined_r0x0010ddf8:
  local_60 = lVar5;
  if (lVar5 != 0) {
    LOCK();
    plVar1 = (long *)(lVar5 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_50);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* GetTypeInfo<MultiplayerPeer::TransferMode, void>::get_class_info() */

GetTypeInfo<MultiplayerPeer::TransferMode,void> * __thiscall
GetTypeInfo<MultiplayerPeer::TransferMode,void>::get_class_info
          (GetTypeInfo<MultiplayerPeer::TransferMode,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "MultiplayerPeer::TransferMode";
  local_40 = 0x1d;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(details *)&local_50,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<MultiplayerPeer::TransferMode>::_gen_argument_type_info(int) const */

undefined8 MethodBindTRC<MultiplayerPeer::TransferMode>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  GetTypeInfo<MultiplayerPeer::TransferMode,void>::get_class_info
            ((GetTypeInfo<MultiplayerPeer::TransferMode,void> *)
             CONCAT44(in_register_0000003c,param_1));
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT44(in_register_0000003c,param_1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<MultiplayerPeer::TransferMode>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<MultiplayerPeer::TransferMode>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  undefined4 local_48 [2];
  long local_40;
  long local_38;
  undefined4 local_30;
  long local_28;
  undefined4 local_20;
  long local_10;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar3 = 0;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 6;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    GetTypeInfo<MultiplayerPeer::TransferMode,void>::get_class_info
              ((GetTypeInfo<MultiplayerPeer::TransferMode,void> *)local_48);
    *puVar3 = local_48[0];
    lVar2 = *(long *)(puVar3 + 2);
    if (lVar2 != local_40) {
      if (lVar2 != 0) {
        LOCK();
        plVar1 = (long *)(lVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *(long *)(puVar3 + 2);
          *(undefined8 *)(puVar3 + 2) = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      *(long *)(puVar3 + 2) = local_40;
      local_40 = 0;
    }
    if (*(long *)(puVar3 + 4) != local_38) {
      StringName::unref();
      lVar2 = local_38;
      local_38 = 0;
      *(long *)(puVar3 + 4) = lVar2;
    }
    lVar2 = local_28;
    puVar3[6] = local_30;
    if (*(long *)(puVar3 + 8) == local_28) {
      puVar3[10] = local_20;
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
    }
    else {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar3 + 8));
      *(long *)(puVar3 + 8) = local_28;
      puVar3[10] = local_20;
    }
    if ((StringName::configured != '\0') && (local_38 != 0)) {
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
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar3;
}



/* GetTypeInfo<MultiplayerPeer::ConnectionStatus, void>::get_class_info() */

GetTypeInfo<MultiplayerPeer::ConnectionStatus,void> * __thiscall
GetTypeInfo<MultiplayerPeer::ConnectionStatus,void>::get_class_info
          (GetTypeInfo<MultiplayerPeer::ConnectionStatus,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "MultiplayerPeer::ConnectionStatus";
  local_40 = 0x21;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(details *)&local_50,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MultiplayerPeer::_initialize_classv() */

void MultiplayerPeer::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (PacketPeer::initialize_class()::initialized == '\0') {
      if (RefCounted::initialize_class()::initialized == '\0') {
        Object::initialize_class();
        local_68 = 0;
        local_50 = 6;
        local_58 = "Object";
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
        local_58 = "RefCounted";
        local_70 = 0;
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        if ((code *)PTR__bind_methods_0011f010 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_58 = "RefCounted";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
      local_58 = "PacketPeer";
      local_70 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
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
      if ((code *)PTR__bind_methods_0011f008 != RefCounted::_bind_methods) {
        PacketPeer::_bind_methods();
      }
      PacketPeer::initialize_class()::initialized = '\x01';
    }
    local_58 = "PacketPeer";
    local_68 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
    local_58 = "MultiplayerPeer";
    local_70 = 0;
    local_50 = 0xf;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GetTypeInfo<Error, void>::get_class_info() */

GetTypeInfo<Error,void> * __thiscall
GetTypeInfo<Error,void>::get_class_info(GetTypeInfo<Error,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "Error";
  local_40 = 5;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(details *)&local_50,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<MultiplayerPeer::ConnectionStatus>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<MultiplayerPeer::ConnectionStatus>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_30 = 0x21;
  local_38 = "MultiplayerPeer::ConnectionStatus";
  String::parse_latin1((StrRange *)&local_40);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_38,(StrRange *)&local_40)
  ;
  StringName::StringName((StringName *)&local_48,(details *)&local_38,false);
  *puVar4 = 2;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 0x10006;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != 0)) {
    StringName::unref();
  }
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
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
LAB_0010ef30:
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
  if (lVar10 == 0) goto LAB_0010ef30;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_0010ee09:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_0010ee09;
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
    goto LAB_0010ef86;
  }
  if (lVar10 == lVar7) {
LAB_0010eeaf:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_0010ef86:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_0010ee9a;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0010eeaf;
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
LAB_0010ee9a:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<unsigned int>::_unref() */

void __thiscall CowData<unsigned_int>::_unref(CowData<unsigned_int> *this)

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



/* MultiplayerPeerExtension::get_connection_status() const */

ulong __thiscall MultiplayerPeerExtension::get_connection_status(MultiplayerPeerExtension *this)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  CowData<char32_t> local_128 [8];
  CowData<char32_t> local_120 [8];
  undefined8 local_118;
  String local_110 [8];
  undefined8 local_108;
  long local_100;
  undefined8 local_f8;
  long local_f0 [5];
  uint local_c8 [2];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar5 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar5 != (long *)0x0) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar5 + 0x60))((Variant *)local_58,plVar5,this + 0x3c8,0,0,local_c8);
    if (local_c8[0] == 0) {
      uVar2 = Variant::operator_cast_to_long((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
        uVar2 = uVar2 & 0xffffffff;
      }
      goto LAB_0010f146;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x3d0] == (MultiplayerPeerExtension)0x0)) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_b8 = (undefined1  [16])0x0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 6;
    local_90 = 1;
    local_88 = 0;
    local_78 = 0;
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((String *)local_c8,"_get_connection_status");
    local_90 = CONCAT44(local_90._4_4_,0x8c);
    GetTypeInfo<MultiplayerPeer::ConnectionStatus,void>::get_class_info
              ((GetTypeInfo<MultiplayerPeer::ConnectionStatus,void> *)&local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)&local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
    local_70 = local_70 & 0xffffffff00000000;
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar4 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x3d8) = 0;
    pcVar6 = *(code **)(lVar4 + 0xd8);
    if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
       (pcVar6 = *(code **)(lVar4 + 0xd0), pcVar6 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"MultiplayerPeerExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar4 = 0, local_100 != 0)) goto LAB_0010f510;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_0010f525:
        lVar4 = *(long *)(this + 8);
        pcVar6 = *(code **)(lVar4 + 200);
        if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
           (pcVar6 = *(code **)(lVar4 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_0010f462;
        uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x3c8);
        *(undefined8 *)(this + 0x3d8) = uVar3;
      }
      else {
        lVar4 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_0010f510:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar4 == 0) goto LAB_0010f525;
      }
      lVar4 = *(long *)(this + 8);
    }
    else {
      uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x3c8,uVar1);
      *(undefined8 *)(this + 0x3d8) = uVar3;
      lVar4 = *(long *)(this + 8);
    }
LAB_0010f462:
    if (*(char *)(lVar4 + 0x29) != '\0') {
      plVar5 = (long *)operator_new(0x18,"");
      *plVar5 = (long)(this + 0x3d8);
      plVar5[1] = (long)(this + 0x3d0);
      plVar5[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar5;
    }
    this[0x3d0] = (MultiplayerPeerExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_c8);
  }
  pcVar6 = *(code **)(this + 0x3d8);
  if (pcVar6 == (code *)0x0) {
    if (_gdvirtual__get_connection_status_call(MultiplayerPeer::ConnectionStatus&)::first_print ==
        '\0') {
      uVar2 = 0;
    }
    else {
      local_f8 = 0;
      local_c8[0] = 0x10f020;
      local_c8[1] = 0;
      uStack_c0 = 0x23;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_f8);
      local_108 = 0;
      local_c8[0] = 0x10efcd;
      local_c8[1] = 0;
      uStack_c0 = 0x16;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_108);
      local_c8[0] = 0x10dd3a;
      local_c8[1] = 0;
      local_118 = 0;
      uStack_c0 = 2;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_118);
      (**(code **)(*(long *)this + 0x48))(local_128,this);
      operator+((char *)local_120,(String *)"Required virtual method ");
      String::operator+(local_110,(String *)local_120);
      String::operator+((String *)&local_100,local_110);
      String::operator+((String *)local_c8,(String *)&local_100);
      _err_print_error("_gdvirtual__get_connection_status_call","scene/main/multiplayer_peer.h",0x93
                       ,(String *)local_c8,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_110);
      CowData<char32_t>::_unref(local_120);
      CowData<char32_t>::_unref(local_128);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      _gdvirtual__get_connection_status_call(MultiplayerPeer::ConnectionStatus&)::first_print = '\0'
      ;
      uVar2 = 0;
    }
  }
  else if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
    (*pcVar6)(*(undefined8 *)(this + 0x10),0,local_c8);
    uVar2 = (ulong)local_c8[0];
  }
  else {
    (**(code **)(*(long *)(this + 8) + 0xe0))
              (*(undefined8 *)(this + 0x10),this + 0x3c8,pcVar6,0,local_c8);
    uVar2 = (ulong)local_c8[0];
  }
LAB_0010f146:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* MultiplayerPeerExtension::get_unique_id() const */

int __thiscall MultiplayerPeerExtension::get_unique_id(MultiplayerPeerExtension *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  CowData<char32_t> local_128 [8];
  CowData<char32_t> local_120 [8];
  undefined8 local_118;
  String local_110 [8];
  undefined8 local_108;
  long local_100;
  undefined8 local_f8;
  long local_f0 [5];
  int local_c8 [2];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar5 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar5 != (long *)0x0) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar5 + 0x60))((Variant *)local_58,plVar5,this + 0x3b0,0,0,local_c8);
    if (local_c8[0] == 0) {
      iVar1 = Variant::operator_cast_to_int((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010f6e6;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x3b8] == (MultiplayerPeerExtension)0x0)) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_b8 = (undefined1  [16])0x0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 6;
    local_90 = 1;
    local_88 = 0;
    local_78 = 0;
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((String *)local_c8,"_get_unique_id");
    local_90 = CONCAT44(local_90._4_4_,0x8c);
    GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)&local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
    local_70 = CONCAT44(local_70._4_4_,3);
    uVar2 = MethodInfo::get_compatibility_hash();
    lVar4 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x3c0) = 0;
    pcVar6 = *(code **)(lVar4 + 0xd8);
    if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
       (pcVar6 = *(code **)(lVar4 + 0xd0), pcVar6 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"MultiplayerPeerExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar4 = 0, local_100 != 0)) goto LAB_0010fab0;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_0010fac5:
        lVar4 = *(long *)(this + 8);
        pcVar6 = *(code **)(lVar4 + 200);
        if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
           (pcVar6 = *(code **)(lVar4 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_0010fa02;
        uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x3b0);
        *(undefined8 *)(this + 0x3c0) = uVar3;
      }
      else {
        lVar4 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_0010fab0:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar4 == 0) goto LAB_0010fac5;
      }
      lVar4 = *(long *)(this + 8);
    }
    else {
      uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x3b0,uVar2);
      *(undefined8 *)(this + 0x3c0) = uVar3;
      lVar4 = *(long *)(this + 8);
    }
LAB_0010fa02:
    if (*(char *)(lVar4 + 0x29) != '\0') {
      plVar5 = (long *)operator_new(0x18,"");
      *plVar5 = (long)(this + 0x3c0);
      plVar5[1] = (long)(this + 0x3b8);
      plVar5[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar5;
    }
    this[0x3b8] = (MultiplayerPeerExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_c8);
  }
  pcVar6 = *(code **)(this + 0x3c0);
  if (pcVar6 == (code *)0x0) {
    if (_gdvirtual__get_unique_id_call(int&)::first_print == '\0') {
      iVar1 = 0;
    }
    else {
      local_f8 = 0;
      local_c8[0] = 0x10f020;
      local_c8[1] = 0;
      uStack_c0 = 0x23;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_f8);
      local_108 = 0;
      local_c8[0] = 0x10f5dc;
      local_c8[1] = 0;
      uStack_c0 = 0xe;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_108);
      local_c8[0] = 0x10dd3a;
      local_c8[1] = 0;
      local_118 = 0;
      uStack_c0 = 2;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_118);
      (**(code **)(*(long *)this + 0x48))(local_128,this);
      operator+((char *)local_120,(String *)"Required virtual method ");
      String::operator+(local_110,(String *)local_120);
      String::operator+((String *)&local_100,local_110);
      String::operator+((String *)local_c8,(String *)&local_100);
      _err_print_error("_gdvirtual__get_unique_id_call","scene/main/multiplayer_peer.h",0x92,
                       (String *)local_c8,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_110);
      CowData<char32_t>::_unref(local_120);
      CowData<char32_t>::_unref(local_128);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      _gdvirtual__get_unique_id_call(int&)::first_print = '\0';
      iVar1 = 0;
    }
  }
  else if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
    (*pcVar6)(*(undefined8 *)(this + 0x10),0,local_c8);
    iVar1 = local_c8[0];
  }
  else {
    (**(code **)(*(long *)(this + 8) + 0xe0))
              (*(undefined8 *)(this + 0x10),this + 0x3b0,pcVar6,0,local_c8);
    iVar1 = local_c8[0];
  }
LAB_0010f6e6:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



/* MultiplayerPeerExtension::close() */

void __thiscall MultiplayerPeerExtension::close(MultiplayerPeerExtension *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  CowData<char32_t> local_108 [8];
  CowData<char32_t> local_100 [8];
  undefined8 local_f8;
  String local_f0 [8];
  undefined8 local_e8;
  long local_e0;
  undefined8 local_d8;
  long local_d0;
  int local_c8 [4];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar4 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar4 == (long *)0x0) {
LAB_0010fc2b:
    if ((*(long *)(this + 8) != 0) && (this[0x388] == (MultiplayerPeerExtension)0x0)) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      local_b8 = (undefined1  [16])0x0;
      local_c8[2] = 0;
      local_c8[3] = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 6;
      local_90 = 1;
      local_88 = 0;
      local_78 = 0;
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((String *)local_c8,"_close");
      local_90 = CONCAT44(local_90._4_4_,0x88);
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar3 = *(long *)(this + 8);
      *(undefined8 *)(this + 0x390) = 0;
      UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0xd8);
      if (((UNRECOVERED_JUMPTABLE == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
         (UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0xd0), UNRECOVERED_JUMPTABLE == (code *)0x0)) {
        local_e8 = 0;
        String::parse_latin1((String *)&local_e8,"MultiplayerPeerExtension");
        StringName::StringName((StringName *)&local_e0,(String *)&local_e8,false);
        ClassDB::get_virtual_method_compatibility_hashes
                  ((StringName *)&local_d8,(StringName *)&local_e0);
        if (local_d0 == 0) {
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_d0);
          if ((StringName::configured != '\0') && (lVar3 = 0, local_e0 != 0)) goto LAB_0011000a;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
LAB_0011001f:
          lVar3 = *(long *)(this + 8);
          UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 200);
          if (((UNRECOVERED_JUMPTABLE == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
             (UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0xc0), UNRECOVERED_JUMPTABLE == (code *)0x0
             )) goto LAB_0010ff5c;
          uVar2 = (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(lVar3 + 0xa0),this + 0x380);
          *(undefined8 *)(this + 0x390) = uVar2;
        }
        else {
          lVar3 = *(long *)(local_d0 + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_d0);
          if ((StringName::configured != '\0') && (local_e0 != 0)) {
LAB_0011000a:
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          if (lVar3 == 0) goto LAB_0011001f;
        }
        lVar3 = *(long *)(this + 8);
      }
      else {
        uVar2 = (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(lVar3 + 0xa0),this + 0x380,uVar1);
        *(undefined8 *)(this + 0x390) = uVar2;
        lVar3 = *(long *)(this + 8);
      }
LAB_0010ff5c:
      if (*(char *)(lVar3 + 0x29) != '\0') {
        plVar4 = (long *)operator_new(0x18,"");
        *plVar4 = (long)(this + 0x390);
        plVar4[1] = (long)(this + 0x388);
        plVar4[2] = *(long *)(this + 0x168);
        *(long **)(this + 0x168) = plVar4;
      }
      this[0x388] = (MultiplayerPeerExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo *)local_c8);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x390);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010fe6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(this + 0x10),0,0);
          return;
        }
      }
      else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010fc91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(this + 8) + 0xe0))
                  (*(undefined8 *)(this + 0x10),this + 0x380,UNRECOVERED_JUMPTABLE,0,0);
        return;
      }
      goto LAB_00110092;
    }
    if (_gdvirtual__close_call()::first_print != '\0') {
      local_d8 = 0;
      local_c8[0] = 0x10f020;
      local_c8[1] = 0;
      local_c8[2] = 0x23;
      local_c8[3] = 0;
      String::parse_latin1((StrRange *)&local_d8);
      local_e8 = 0;
      local_c8[0] = 0x10fb7c;
      local_c8[1] = 0;
      local_c8[2] = 6;
      local_c8[3] = 0;
      String::parse_latin1((StrRange *)&local_e8);
      local_c8[0] = 0x10dd3a;
      local_c8[1] = 0;
      local_f8 = 0;
      local_c8[2] = 2;
      local_c8[3] = 0;
      String::parse_latin1((StrRange *)&local_f8);
      (**(code **)(*(long *)this + 0x48))(local_108,this);
      operator+((char *)local_100,(String *)"Required virtual method ");
      String::operator+(local_f0,(String *)local_100);
      String::operator+((String *)&local_e0,local_f0);
      String::operator+((String *)local_c8,(String *)&local_e0);
      _err_print_error("_gdvirtual__close_call","scene/main/multiplayer_peer.h",0x90,
                       (String *)local_c8,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
      CowData<char32_t>::_unref(local_100);
      CowData<char32_t>::_unref(local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      _gdvirtual__close_call()::first_print = '\0';
    }
  }
  else {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_c8[2] = 0;
    (**(code **)(*plVar4 + 0x60))(local_58,plVar4,this + 0x380,0,0,local_c8);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_c8[0] != 0) goto LAB_0010fc2b;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00110092:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MultiplayerPeerExtension::poll() */

void __thiscall MultiplayerPeerExtension::poll(MultiplayerPeerExtension *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  CowData<char32_t> local_108 [8];
  CowData<char32_t> local_100 [8];
  undefined8 local_f8;
  String local_f0 [8];
  undefined8 local_e8;
  long local_e0;
  undefined8 local_d8;
  long local_d0;
  int local_c8 [4];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar4 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar4 == (long *)0x0) {
LAB_0011018b:
    if ((*(long *)(this + 8) != 0) && (this[0x370] == (MultiplayerPeerExtension)0x0)) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      local_b8 = (undefined1  [16])0x0;
      local_c8[2] = 0;
      local_c8[3] = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 6;
      local_90 = 1;
      local_88 = 0;
      local_78 = 0;
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((String *)local_c8,"_poll");
      local_90 = CONCAT44(local_90._4_4_,0x88);
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar3 = *(long *)(this + 8);
      *(undefined8 *)(this + 0x378) = 0;
      UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0xd8);
      if (((UNRECOVERED_JUMPTABLE == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
         (UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0xd0), UNRECOVERED_JUMPTABLE == (code *)0x0)) {
        local_e8 = 0;
        String::parse_latin1((String *)&local_e8,"MultiplayerPeerExtension");
        StringName::StringName((StringName *)&local_e0,(String *)&local_e8,false);
        ClassDB::get_virtual_method_compatibility_hashes
                  ((StringName *)&local_d8,(StringName *)&local_e0);
        if (local_d0 == 0) {
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_d0);
          if ((StringName::configured != '\0') && (lVar3 = 0, local_e0 != 0)) goto LAB_0011056a;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
LAB_0011057f:
          lVar3 = *(long *)(this + 8);
          UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 200);
          if (((UNRECOVERED_JUMPTABLE == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
             (UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0xc0), UNRECOVERED_JUMPTABLE == (code *)0x0
             )) goto LAB_001104bc;
          uVar2 = (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(lVar3 + 0xa0),this + 0x368);
          *(undefined8 *)(this + 0x378) = uVar2;
        }
        else {
          lVar3 = *(long *)(local_d0 + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_d0);
          if ((StringName::configured != '\0') && (local_e0 != 0)) {
LAB_0011056a:
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          if (lVar3 == 0) goto LAB_0011057f;
        }
        lVar3 = *(long *)(this + 8);
      }
      else {
        uVar2 = (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(lVar3 + 0xa0),this + 0x368,uVar1);
        *(undefined8 *)(this + 0x378) = uVar2;
        lVar3 = *(long *)(this + 8);
      }
LAB_001104bc:
      if (*(char *)(lVar3 + 0x29) != '\0') {
        plVar4 = (long *)operator_new(0x18,"");
        *plVar4 = (long)(this + 0x378);
        plVar4[1] = (long)(this + 0x370);
        plVar4[2] = *(long *)(this + 0x168);
        *(long **)(this + 0x168) = plVar4;
      }
      this[0x370] = (MultiplayerPeerExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo *)local_c8);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x378);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001103cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(this + 0x10),0,0);
          return;
        }
      }
      else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001101f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(this + 8) + 0xe0))
                  (*(undefined8 *)(this + 0x10),this + 0x368,UNRECOVERED_JUMPTABLE,0,0);
        return;
      }
      goto LAB_001105f2;
    }
    if (_gdvirtual__poll_call()::first_print != '\0') {
      local_d8 = 0;
      local_c8[0] = 0x10f020;
      local_c8[1] = 0;
      local_c8[2] = 0x23;
      local_c8[3] = 0;
      String::parse_latin1((StrRange *)&local_d8);
      local_e8 = 0;
      local_c8[0] = 0x1100d7;
      local_c8[1] = 0;
      local_c8[2] = 5;
      local_c8[3] = 0;
      String::parse_latin1((StrRange *)&local_e8);
      local_c8[0] = 0x10dd3a;
      local_c8[1] = 0;
      local_f8 = 0;
      local_c8[2] = 2;
      local_c8[3] = 0;
      String::parse_latin1((StrRange *)&local_f8);
      (**(code **)(*(long *)this + 0x48))(local_108,this);
      operator+((char *)local_100,(String *)"Required virtual method ");
      String::operator+(local_f0,(String *)local_100);
      String::operator+((String *)&local_e0,local_f0);
      String::operator+((String *)local_c8,(String *)&local_e0);
      _err_print_error("_gdvirtual__poll_call","scene/main/multiplayer_peer.h",0x8f,
                       (String *)local_c8,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
      CowData<char32_t>::_unref(local_100);
      CowData<char32_t>::_unref(local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      _gdvirtual__poll_call()::first_print = '\0';
    }
  }
  else {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_c8[2] = 0;
    (**(code **)(*plVar4 + 0x60))(local_58,plVar4,this + 0x368,0,0,local_c8);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_c8[0] != 0) goto LAB_0011018b;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001105f2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MultiplayerPeerExtension::is_server() const */

bool __thiscall MultiplayerPeerExtension::is_server(MultiplayerPeerExtension *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  bool bVar6;
  CowData<char32_t> local_128 [8];
  CowData<char32_t> local_120 [8];
  undefined8 local_118;
  String local_110 [8];
  undefined8 local_108;
  long local_100;
  undefined8 local_f8;
  long local_f0 [5];
  int local_c8 [2];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar4 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar4 != (long *)0x0) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar4 + 0x60))((Variant *)local_58,plVar4,this + 0x350,0,0,local_c8);
    if (local_c8[0] == 0) {
      bVar6 = Variant::operator_cast_to_bool((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0011073a;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x358] == (MultiplayerPeerExtension)0x0)) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_b8 = (undefined1  [16])0x0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 6;
    local_90 = 1;
    local_88 = 0;
    local_78 = 0;
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((String *)local_c8,"_is_server");
    local_90 = CONCAT44(local_90._4_4_,0x8c);
    GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)&local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
    local_70 = local_70 & 0xffffffff00000000;
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar3 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x360) = 0;
    pcVar5 = *(code **)(lVar3 + 0xd8);
    if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
       (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"MultiplayerPeerExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar3 = 0, local_100 != 0)) goto LAB_00110b10;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_00110b25:
        lVar3 = *(long *)(this + 8);
        pcVar5 = *(code **)(lVar3 + 200);
        if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
           (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 == (code *)0x0)) goto LAB_00110a62;
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x350);
        *(undefined8 *)(this + 0x360) = uVar2;
      }
      else {
        lVar3 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00110b10:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar3 == 0) goto LAB_00110b25;
      }
      lVar3 = *(long *)(this + 8);
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x350,uVar1);
      *(undefined8 *)(this + 0x360) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
LAB_00110a62:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = (long)(this + 0x360);
      plVar4[1] = (long)(this + 0x358);
      plVar4[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar4;
    }
    this[0x358] = (MultiplayerPeerExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_c8);
  }
  pcVar5 = *(code **)(this + 0x360);
  if (pcVar5 == (code *)0x0) {
    if (_gdvirtual__is_server_call(bool&)::first_print == '\0') {
      bVar6 = false;
    }
    else {
      local_f8 = 0;
      local_c8[0] = 0x10f020;
      local_c8[1] = 0;
      uStack_c0 = 0x23;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_f8);
      local_108 = 0;
      local_c8[0] = 0x110637;
      local_c8[1] = 0;
      uStack_c0 = 10;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_108);
      local_c8[0] = 0x10dd3a;
      local_c8[1] = 0;
      local_118 = 0;
      uStack_c0 = 2;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_118);
      (**(code **)(*(long *)this + 0x48))(local_128,this);
      operator+((char *)local_120,(String *)"Required virtual method ");
      String::operator+(local_110,(String *)local_120);
      String::operator+((String *)&local_100,local_110);
      String::operator+((String *)local_c8,(String *)&local_100);
      _err_print_error("_gdvirtual__is_server_call","scene/main/multiplayer_peer.h",0x8e,
                       (String *)local_c8,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_110);
      CowData<char32_t>::_unref(local_120);
      CowData<char32_t>::_unref(local_128);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      _gdvirtual__is_server_call(bool&)::first_print = '\0';
      bVar6 = false;
    }
  }
  else if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
    (*pcVar5)(*(undefined8 *)(this + 0x10),0,local_c8);
    bVar6 = local_c8[0]._0_1_ != (String)0x0;
  }
  else {
    (**(code **)(*(long *)(this + 8) + 0xe0))
              (*(undefined8 *)(this + 0x10),this + 0x350,pcVar5,0,local_c8);
    bVar6 = local_c8[0]._0_1_ != (String)0x0;
  }
LAB_0011073a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar6;
}



/* MultiplayerPeerExtension::get_packet_channel() const */

int __thiscall MultiplayerPeerExtension::get_packet_channel(MultiplayerPeerExtension *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  CowData<char32_t> local_128 [8];
  CowData<char32_t> local_120 [8];
  undefined8 local_118;
  String local_110 [8];
  undefined8 local_108;
  long local_100;
  undefined8 local_f8;
  long local_f0 [5];
  int local_c8 [2];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar5 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar5 != (long *)0x0) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar5 + 0x60))((Variant *)local_58,plVar5,this + 0x338,0,0,local_c8);
    if (local_c8[0] == 0) {
      iVar1 = Variant::operator_cast_to_int((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00110cf6;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x340] == (MultiplayerPeerExtension)0x0)) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_b8 = (undefined1  [16])0x0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 6;
    local_90 = 1;
    local_88 = 0;
    local_78 = 0;
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((String *)local_c8,"_get_packet_channel");
    local_90 = CONCAT44(local_90._4_4_,0x8c);
    GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)&local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
    local_70 = CONCAT44(local_70._4_4_,3);
    uVar2 = MethodInfo::get_compatibility_hash();
    lVar4 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x348) = 0;
    pcVar6 = *(code **)(lVar4 + 0xd8);
    if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
       (pcVar6 = *(code **)(lVar4 + 0xd0), pcVar6 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"MultiplayerPeerExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar4 = 0, local_100 != 0)) goto LAB_001110c0;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_001110d5:
        lVar4 = *(long *)(this + 8);
        pcVar6 = *(code **)(lVar4 + 200);
        if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
           (pcVar6 = *(code **)(lVar4 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_00111012;
        uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x338);
        *(undefined8 *)(this + 0x348) = uVar3;
      }
      else {
        lVar4 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_001110c0:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar4 == 0) goto LAB_001110d5;
      }
      lVar4 = *(long *)(this + 8);
    }
    else {
      uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x338,uVar2);
      *(undefined8 *)(this + 0x348) = uVar3;
      lVar4 = *(long *)(this + 8);
    }
LAB_00111012:
    if (*(char *)(lVar4 + 0x29) != '\0') {
      plVar5 = (long *)operator_new(0x18,"");
      *plVar5 = (long)(this + 0x348);
      plVar5[1] = (long)(this + 0x340);
      plVar5[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar5;
    }
    this[0x340] = (MultiplayerPeerExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_c8);
  }
  pcVar6 = *(code **)(this + 0x348);
  if (pcVar6 == (code *)0x0) {
    if (_gdvirtual__get_packet_channel_call(int&)::first_print == '\0') {
      iVar1 = 0;
    }
    else {
      local_f8 = 0;
      local_c8[0] = 0x10f020;
      local_c8[1] = 0;
      uStack_c0 = 0x23;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_f8);
      local_108 = 0;
      local_c8[0] = 0x110bdc;
      local_c8[1] = 0;
      uStack_c0 = 0x13;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_108);
      local_c8[0] = 0x10dd3a;
      local_c8[1] = 0;
      local_118 = 0;
      uStack_c0 = 2;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_118);
      (**(code **)(*(long *)this + 0x48))(local_128,this);
      operator+((char *)local_120,(String *)"Required virtual method ");
      String::operator+(local_110,(String *)local_120);
      String::operator+((String *)&local_100,local_110);
      String::operator+((String *)local_c8,(String *)&local_100);
      _err_print_error("_gdvirtual__get_packet_channel_call","scene/main/multiplayer_peer.h",0x8d,
                       (String *)local_c8,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_110);
      CowData<char32_t>::_unref(local_120);
      CowData<char32_t>::_unref(local_128);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      _gdvirtual__get_packet_channel_call(int&)::first_print = '\0';
      iVar1 = 0;
    }
  }
  else if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
    (*pcVar6)(*(undefined8 *)(this + 0x10),0,local_c8);
    iVar1 = local_c8[0];
  }
  else {
    (**(code **)(*(long *)(this + 8) + 0xe0))
              (*(undefined8 *)(this + 0x10),this + 0x338,pcVar6,0,local_c8);
    iVar1 = local_c8[0];
  }
LAB_00110cf6:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



/* MultiplayerPeerExtension::get_packet_mode() const */

ulong __thiscall MultiplayerPeerExtension::get_packet_mode(MultiplayerPeerExtension *this)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  CowData<char32_t> local_128 [8];
  CowData<char32_t> local_120 [8];
  undefined8 local_118;
  String local_110 [8];
  undefined8 local_108;
  long local_100;
  undefined8 local_f8;
  long local_f0 [5];
  uint local_c8 [2];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar5 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar5 != (long *)0x0) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar5 + 0x60))((Variant *)local_58,plVar5,this + 800,0,0,local_c8);
    if (local_c8[0] == 0) {
      uVar2 = Variant::operator_cast_to_long((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
        uVar2 = uVar2 & 0xffffffff;
      }
      goto LAB_001112a6;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x328] == (MultiplayerPeerExtension)0x0)) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_b8 = (undefined1  [16])0x0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 6;
    local_90 = 1;
    local_88 = 0;
    local_78 = 0;
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((String *)local_c8,"_get_packet_mode");
    local_90 = CONCAT44(local_90._4_4_,0x8c);
    GetTypeInfo<MultiplayerPeer::TransferMode,void>::get_class_info
              ((GetTypeInfo<MultiplayerPeer::TransferMode,void> *)&local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)&local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
    local_70 = local_70 & 0xffffffff00000000;
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar4 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x330) = 0;
    pcVar6 = *(code **)(lVar4 + 0xd8);
    if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
       (pcVar6 = *(code **)(lVar4 + 0xd0), pcVar6 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"MultiplayerPeerExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar4 = 0, local_100 != 0)) goto LAB_00111670;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_00111685:
        lVar4 = *(long *)(this + 8);
        pcVar6 = *(code **)(lVar4 + 200);
        if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
           (pcVar6 = *(code **)(lVar4 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_001115c2;
        uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 800);
        *(undefined8 *)(this + 0x330) = uVar3;
      }
      else {
        lVar4 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00111670:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar4 == 0) goto LAB_00111685;
      }
      lVar4 = *(long *)(this + 8);
    }
    else {
      uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 800,uVar1);
      *(undefined8 *)(this + 0x330) = uVar3;
      lVar4 = *(long *)(this + 8);
    }
LAB_001115c2:
    if (*(char *)(lVar4 + 0x29) != '\0') {
      plVar5 = (long *)operator_new(0x18,"");
      *plVar5 = (long)(this + 0x330);
      plVar5[1] = (long)(this + 0x328);
      plVar5[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar5;
    }
    this[0x328] = (MultiplayerPeerExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_c8);
  }
  pcVar6 = *(code **)(this + 0x330);
  if (pcVar6 == (code *)0x0) {
    if (_gdvirtual__get_packet_mode_call(MultiplayerPeer::TransferMode&)::first_print == '\0') {
      uVar2 = 0;
    }
    else {
      local_f8 = 0;
      local_c8[0] = 0x10f020;
      local_c8[1] = 0;
      uStack_c0 = 0x23;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_f8);
      local_108 = 0;
      local_c8[0] = 0x11118c;
      local_c8[1] = 0;
      uStack_c0 = 0x10;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_108);
      local_c8[0] = 0x10dd3a;
      local_c8[1] = 0;
      local_118 = 0;
      uStack_c0 = 2;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_118);
      (**(code **)(*(long *)this + 0x48))(local_128,this);
      operator+((char *)local_120,(String *)"Required virtual method ");
      String::operator+(local_110,(String *)local_120);
      String::operator+((String *)&local_100,local_110);
      String::operator+((String *)local_c8,(String *)&local_100);
      _err_print_error("_gdvirtual__get_packet_mode_call","scene/main/multiplayer_peer.h",0x8c,
                       (String *)local_c8,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_110);
      CowData<char32_t>::_unref(local_120);
      CowData<char32_t>::_unref(local_128);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      _gdvirtual__get_packet_mode_call(MultiplayerPeer::TransferMode&)::first_print = '\0';
      uVar2 = 0;
    }
  }
  else if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
    (*pcVar6)(*(undefined8 *)(this + 0x10),0,local_c8);
    uVar2 = (ulong)local_c8[0];
  }
  else {
    (**(code **)(*(long *)(this + 8) + 0xe0))
              (*(undefined8 *)(this + 0x10),this + 800,pcVar6,0,local_c8);
    uVar2 = (ulong)local_c8[0];
  }
LAB_001112a6:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* MultiplayerPeerExtension::get_packet_peer() const */

int __thiscall MultiplayerPeerExtension::get_packet_peer(MultiplayerPeerExtension *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  CowData<char32_t> local_128 [8];
  CowData<char32_t> local_120 [8];
  undefined8 local_118;
  String local_110 [8];
  undefined8 local_108;
  long local_100;
  undefined8 local_f8;
  long local_f0 [5];
  int local_c8 [2];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar5 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar5 != (long *)0x0) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar5 + 0x60))((Variant *)local_58,plVar5,this + 0x308,0,0,local_c8);
    if (local_c8[0] == 0) {
      iVar1 = Variant::operator_cast_to_int((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00111856;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x310] == (MultiplayerPeerExtension)0x0)) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_b8 = (undefined1  [16])0x0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 6;
    local_90 = 1;
    local_88 = 0;
    local_78 = 0;
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((String *)local_c8,"_get_packet_peer");
    local_90 = CONCAT44(local_90._4_4_,0x8c);
    GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)&local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
    local_70 = CONCAT44(local_70._4_4_,3);
    uVar2 = MethodInfo::get_compatibility_hash();
    lVar4 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x318) = 0;
    pcVar6 = *(code **)(lVar4 + 0xd8);
    if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
       (pcVar6 = *(code **)(lVar4 + 0xd0), pcVar6 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"MultiplayerPeerExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar4 = 0, local_100 != 0)) goto LAB_00111c20;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_00111c35:
        lVar4 = *(long *)(this + 8);
        pcVar6 = *(code **)(lVar4 + 200);
        if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
           (pcVar6 = *(code **)(lVar4 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_00111b72;
        uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x308);
        *(undefined8 *)(this + 0x318) = uVar3;
      }
      else {
        lVar4 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00111c20:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar4 == 0) goto LAB_00111c35;
      }
      lVar4 = *(long *)(this + 8);
    }
    else {
      uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x308,uVar2);
      *(undefined8 *)(this + 0x318) = uVar3;
      lVar4 = *(long *)(this + 8);
    }
LAB_00111b72:
    if (*(char *)(lVar4 + 0x29) != '\0') {
      plVar5 = (long *)operator_new(0x18,"");
      *plVar5 = (long)(this + 0x318);
      plVar5[1] = (long)(this + 0x310);
      plVar5[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar5;
    }
    this[0x310] = (MultiplayerPeerExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_c8);
  }
  pcVar6 = *(code **)(this + 0x318);
  if (pcVar6 == (code *)0x0) {
    if (_gdvirtual__get_packet_peer_call(int&)::first_print == '\0') {
      iVar1 = 0;
    }
    else {
      local_f8 = 0;
      local_c8[0] = 0x10f020;
      local_c8[1] = 0;
      uStack_c0 = 0x23;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_f8);
      local_108 = 0;
      local_c8[0] = 0x11173c;
      local_c8[1] = 0;
      uStack_c0 = 0x10;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_108);
      local_c8[0] = 0x10dd3a;
      local_c8[1] = 0;
      local_118 = 0;
      uStack_c0 = 2;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_118);
      (**(code **)(*(long *)this + 0x48))(local_128,this);
      operator+((char *)local_120,(String *)"Required virtual method ");
      String::operator+(local_110,(String *)local_120);
      String::operator+((String *)&local_100,local_110);
      String::operator+((String *)local_c8,(String *)&local_100);
      _err_print_error("_gdvirtual__get_packet_peer_call","scene/main/multiplayer_peer.h",0x8b,
                       (String *)local_c8,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_110);
      CowData<char32_t>::_unref(local_120);
      CowData<char32_t>::_unref(local_128);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      _gdvirtual__get_packet_peer_call(int&)::first_print = '\0';
      iVar1 = 0;
    }
  }
  else if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
    (*pcVar6)(*(undefined8 *)(this + 0x10),0,local_c8);
    iVar1 = local_c8[0];
  }
  else {
    (**(code **)(*(long *)(this + 8) + 0xe0))
              (*(undefined8 *)(this + 0x10),this + 0x308,pcVar6,0,local_c8);
    iVar1 = local_c8[0];
  }
LAB_00111856:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



/* MultiplayerPeerExtension::get_transfer_mode() const */

ulong __thiscall MultiplayerPeerExtension::get_transfer_mode(MultiplayerPeerExtension *this)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  CowData<char32_t> local_128 [8];
  CowData<char32_t> local_120 [8];
  undefined8 local_118;
  String local_110 [8];
  undefined8 local_108;
  long local_100;
  undefined8 local_f8;
  long local_f0 [5];
  uint local_c8 [2];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar5 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar5 != (long *)0x0) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar5 + 0x60))((Variant *)local_58,plVar5,this + 0x2d8,0,0,local_c8);
    if (local_c8[0] == 0) {
      uVar2 = Variant::operator_cast_to_long((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
        uVar2 = uVar2 & 0xffffffff;
      }
      goto LAB_00111e06;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x2e0] == (MultiplayerPeerExtension)0x0)) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_b8 = (undefined1  [16])0x0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 6;
    local_90 = 1;
    local_88 = 0;
    local_78 = 0;
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((String *)local_c8,"_get_transfer_mode");
    local_90 = CONCAT44(local_90._4_4_,0x8c);
    GetTypeInfo<MultiplayerPeer::TransferMode,void>::get_class_info
              ((GetTypeInfo<MultiplayerPeer::TransferMode,void> *)&local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)&local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
    local_70 = local_70 & 0xffffffff00000000;
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar4 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x2e8) = 0;
    pcVar6 = *(code **)(lVar4 + 0xd8);
    if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
       (pcVar6 = *(code **)(lVar4 + 0xd0), pcVar6 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"MultiplayerPeerExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar4 = 0, local_100 != 0)) goto LAB_001121d0;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_001121e5:
        lVar4 = *(long *)(this + 8);
        pcVar6 = *(code **)(lVar4 + 200);
        if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
           (pcVar6 = *(code **)(lVar4 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_00112122;
        uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x2d8);
        *(undefined8 *)(this + 0x2e8) = uVar3;
      }
      else {
        lVar4 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_001121d0:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar4 == 0) goto LAB_001121e5;
      }
      lVar4 = *(long *)(this + 8);
    }
    else {
      uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x2d8,uVar1);
      *(undefined8 *)(this + 0x2e8) = uVar3;
      lVar4 = *(long *)(this + 8);
    }
LAB_00112122:
    if (*(char *)(lVar4 + 0x29) != '\0') {
      plVar5 = (long *)operator_new(0x18,"");
      *plVar5 = (long)(this + 0x2e8);
      plVar5[1] = (long)(this + 0x2e0);
      plVar5[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar5;
    }
    this[0x2e0] = (MultiplayerPeerExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_c8);
  }
  pcVar6 = *(code **)(this + 0x2e8);
  if (pcVar6 == (code *)0x0) {
    if (_gdvirtual__get_transfer_mode_call(MultiplayerPeer::TransferMode&)::first_print == '\0') {
      uVar2 = 0;
    }
    else {
      local_f8 = 0;
      local_c8[0] = 0x10f020;
      local_c8[1] = 0;
      uStack_c0 = 0x23;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_f8);
      local_108 = 0;
      local_c8[0] = 0x111cec;
      local_c8[1] = 0;
      uStack_c0 = 0x12;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_108);
      local_c8[0] = 0x10dd3a;
      local_c8[1] = 0;
      local_118 = 0;
      uStack_c0 = 2;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_118);
      (**(code **)(*(long *)this + 0x48))(local_128,this);
      operator+((char *)local_120,(String *)"Required virtual method ");
      String::operator+(local_110,(String *)local_120);
      String::operator+((String *)&local_100,local_110);
      String::operator+((String *)local_c8,(String *)&local_100);
      _err_print_error("_gdvirtual__get_transfer_mode_call","scene/main/multiplayer_peer.h",0x89,
                       (String *)local_c8,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_110);
      CowData<char32_t>::_unref(local_120);
      CowData<char32_t>::_unref(local_128);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      _gdvirtual__get_transfer_mode_call(MultiplayerPeer::TransferMode&)::first_print = '\0';
      uVar2 = 0;
    }
  }
  else if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
    (*pcVar6)(*(undefined8 *)(this + 0x10),0,local_c8);
    uVar2 = (ulong)local_c8[0];
  }
  else {
    (**(code **)(*(long *)(this + 8) + 0xe0))
              (*(undefined8 *)(this + 0x10),this + 0x2d8,pcVar6,0,local_c8);
    uVar2 = (ulong)local_c8[0];
  }
LAB_00111e06:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* MultiplayerPeerExtension::get_transfer_channel() const */

int __thiscall MultiplayerPeerExtension::get_transfer_channel(MultiplayerPeerExtension *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  CowData<char32_t> local_128 [8];
  CowData<char32_t> local_120 [8];
  undefined8 local_118;
  String local_110 [8];
  undefined8 local_108;
  long local_100;
  undefined8 local_f8;
  long local_f0 [5];
  int local_c8 [2];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar5 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar5 != (long *)0x0) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar5 + 0x60))((Variant *)local_58,plVar5,this + 0x2a8,0,0,local_c8);
    if (local_c8[0] == 0) {
      iVar1 = Variant::operator_cast_to_int((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_001123b6;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x2b0] == (MultiplayerPeerExtension)0x0)) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_b8 = (undefined1  [16])0x0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 6;
    local_90 = 1;
    local_88 = 0;
    local_78 = 0;
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((String *)local_c8,"_get_transfer_channel");
    local_90 = CONCAT44(local_90._4_4_,0x8c);
    GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)&local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
    local_70 = CONCAT44(local_70._4_4_,3);
    uVar2 = MethodInfo::get_compatibility_hash();
    lVar4 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x2b8) = 0;
    pcVar6 = *(code **)(lVar4 + 0xd8);
    if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
       (pcVar6 = *(code **)(lVar4 + 0xd0), pcVar6 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"MultiplayerPeerExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar4 = 0, local_100 != 0)) goto LAB_00112780;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_00112795:
        lVar4 = *(long *)(this + 8);
        pcVar6 = *(code **)(lVar4 + 200);
        if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
           (pcVar6 = *(code **)(lVar4 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_001126d2;
        uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x2a8);
        *(undefined8 *)(this + 0x2b8) = uVar3;
      }
      else {
        lVar4 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00112780:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar4 == 0) goto LAB_00112795;
      }
      lVar4 = *(long *)(this + 8);
    }
    else {
      uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x2a8,uVar2);
      *(undefined8 *)(this + 0x2b8) = uVar3;
      lVar4 = *(long *)(this + 8);
    }
LAB_001126d2:
    if (*(char *)(lVar4 + 0x29) != '\0') {
      plVar5 = (long *)operator_new(0x18,"");
      *plVar5 = (long)(this + 0x2b8);
      plVar5[1] = (long)(this + 0x2b0);
      plVar5[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar5;
    }
    this[0x2b0] = (MultiplayerPeerExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_c8);
  }
  pcVar6 = *(code **)(this + 0x2b8);
  if (pcVar6 == (code *)0x0) {
    if (_gdvirtual__get_transfer_channel_call(int&)::first_print == '\0') {
      iVar1 = 0;
    }
    else {
      local_f8 = 0;
      local_c8[0] = 0x10f020;
      local_c8[1] = 0;
      uStack_c0 = 0x23;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_f8);
      local_108 = 0;
      local_c8[0] = 0x11229c;
      local_c8[1] = 0;
      uStack_c0 = 0x15;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_108);
      local_c8[0] = 0x10dd3a;
      local_c8[1] = 0;
      local_118 = 0;
      uStack_c0 = 2;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_118);
      (**(code **)(*(long *)this + 0x48))(local_128,this);
      operator+((char *)local_120,(String *)"Required virtual method ");
      String::operator+(local_110,(String *)local_120);
      String::operator+((String *)&local_100,local_110);
      String::operator+((String *)local_c8,(String *)&local_100);
      _err_print_error("_gdvirtual__get_transfer_channel_call","scene/main/multiplayer_peer.h",0x87,
                       (String *)local_c8,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_110);
      CowData<char32_t>::_unref(local_120);
      CowData<char32_t>::_unref(local_128);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      _gdvirtual__get_transfer_channel_call(int&)::first_print = '\0';
      iVar1 = 0;
    }
  }
  else if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
    (*pcVar6)(*(undefined8 *)(this + 0x10),0,local_c8);
    iVar1 = local_c8[0];
  }
  else {
    (**(code **)(*(long *)(this + 8) + 0xe0))
              (*(undefined8 *)(this + 0x10),this + 0x2a8,pcVar6,0,local_c8);
    iVar1 = local_c8[0];
  }
LAB_001123b6:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



/* MultiplayerPeerExtension::get_max_packet_size() const */

int __thiscall MultiplayerPeerExtension::get_max_packet_size(MultiplayerPeerExtension *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  CowData<char32_t> local_128 [8];
  CowData<char32_t> local_120 [8];
  undefined8 local_118;
  String local_110 [8];
  undefined8 local_108;
  long local_100;
  undefined8 local_f8;
  long local_f0 [5];
  int local_c8 [2];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar5 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar5 != (long *)0x0) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar5 + 0x60))((Variant *)local_58,plVar5,this + 0x230,0,0,local_c8);
    if (local_c8[0] == 0) {
      iVar1 = Variant::operator_cast_to_int((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00112966;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x238] == (MultiplayerPeerExtension)0x0)) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_b8 = (undefined1  [16])0x0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 6;
    local_90 = 1;
    local_88 = 0;
    local_78 = 0;
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((String *)local_c8,"_get_max_packet_size");
    local_90 = CONCAT44(local_90._4_4_,0x8c);
    GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)&local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
    local_70 = CONCAT44(local_70._4_4_,3);
    uVar2 = MethodInfo::get_compatibility_hash();
    lVar4 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x240) = 0;
    pcVar6 = *(code **)(lVar4 + 0xd8);
    if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
       (pcVar6 = *(code **)(lVar4 + 0xd0), pcVar6 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"MultiplayerPeerExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar4 = 0, local_100 != 0)) goto LAB_00112d30;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_00112d45:
        lVar4 = *(long *)(this + 8);
        pcVar6 = *(code **)(lVar4 + 200);
        if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
           (pcVar6 = *(code **)(lVar4 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_00112c82;
        uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x230);
        *(undefined8 *)(this + 0x240) = uVar3;
      }
      else {
        lVar4 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00112d30:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar4 == 0) goto LAB_00112d45;
      }
      lVar4 = *(long *)(this + 8);
    }
    else {
      uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x230,uVar2);
      *(undefined8 *)(this + 0x240) = uVar3;
      lVar4 = *(long *)(this + 8);
    }
LAB_00112c82:
    if (*(char *)(lVar4 + 0x29) != '\0') {
      plVar5 = (long *)operator_new(0x18,"");
      *plVar5 = (long)(this + 0x240);
      plVar5[1] = (long)(this + 0x238);
      plVar5[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar5;
    }
    this[0x238] = (MultiplayerPeerExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_c8);
  }
  pcVar6 = *(code **)(this + 0x240);
  if (pcVar6 == (code *)0x0) {
    if (_gdvirtual__get_max_packet_size_call(int&)::first_print == '\0') {
      iVar1 = 0;
    }
    else {
      local_f8 = 0;
      local_c8[0] = 0x10f020;
      local_c8[1] = 0;
      uStack_c0 = 0x23;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_f8);
      local_108 = 0;
      local_c8[0] = 0x11284c;
      local_c8[1] = 0;
      uStack_c0 = 0x14;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_108);
      local_c8[0] = 0x10dd3a;
      local_c8[1] = 0;
      local_118 = 0;
      uStack_c0 = 2;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_118);
      (**(code **)(*(long *)this + 0x48))(local_128,this);
      operator+((char *)local_120,(String *)"Required virtual method ");
      String::operator+(local_110,(String *)local_120);
      String::operator+((String *)&local_100,local_110);
      String::operator+((String *)local_c8,(String *)&local_100);
      _err_print_error("_gdvirtual__get_max_packet_size_call","scene/main/multiplayer_peer.h",0x7a,
                       (String *)local_c8,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_110);
      CowData<char32_t>::_unref(local_120);
      CowData<char32_t>::_unref(local_128);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      _gdvirtual__get_max_packet_size_call(int&)::first_print = '\0';
      iVar1 = 0;
    }
  }
  else if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
    (*pcVar6)(*(undefined8 *)(this + 0x10),0,local_c8);
    iVar1 = local_c8[0];
  }
  else {
    (**(code **)(*(long *)(this + 8) + 0xe0))
              (*(undefined8 *)(this + 0x10),this + 0x230,pcVar6,0,local_c8);
    iVar1 = local_c8[0];
  }
LAB_00112966:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



/* MultiplayerPeerExtension::get_available_packet_count() const */

int __thiscall MultiplayerPeerExtension::get_available_packet_count(MultiplayerPeerExtension *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  CowData<char32_t> local_128 [8];
  CowData<char32_t> local_120 [8];
  undefined8 local_118;
  String local_110 [8];
  undefined8 local_108;
  long local_100;
  undefined8 local_f8;
  long local_f0 [5];
  int local_c8 [2];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar5 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar5 != (long *)0x0) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar5 + 0x60))((Variant *)local_58,plVar5,this + 0x218,0,0,local_c8);
    if (local_c8[0] == 0) {
      iVar1 = Variant::operator_cast_to_int((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00112f26;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x220] == (MultiplayerPeerExtension)0x0)) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_b8 = (undefined1  [16])0x0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 6;
    local_90 = 1;
    local_88 = 0;
    local_78 = 0;
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((String *)local_c8,"_get_available_packet_count");
    local_90 = CONCAT44(local_90._4_4_,0x8c);
    GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)&local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
    local_70 = CONCAT44(local_70._4_4_,3);
    uVar2 = MethodInfo::get_compatibility_hash();
    lVar4 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x228) = 0;
    pcVar6 = *(code **)(lVar4 + 0xd8);
    if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
       (pcVar6 = *(code **)(lVar4 + 0xd0), pcVar6 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"MultiplayerPeerExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar4 = 0, local_100 != 0)) goto LAB_001132f0;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_00113305:
        lVar4 = *(long *)(this + 8);
        pcVar6 = *(code **)(lVar4 + 200);
        if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
           (pcVar6 = *(code **)(lVar4 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_00113242;
        uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x218);
        *(undefined8 *)(this + 0x228) = uVar3;
      }
      else {
        lVar4 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_001132f0:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar4 == 0) goto LAB_00113305;
      }
      lVar4 = *(long *)(this + 8);
    }
    else {
      uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x218,uVar2);
      *(undefined8 *)(this + 0x228) = uVar3;
      lVar4 = *(long *)(this + 8);
    }
LAB_00113242:
    if (*(char *)(lVar4 + 0x29) != '\0') {
      plVar5 = (long *)operator_new(0x18,"");
      *plVar5 = (long)(this + 0x228);
      plVar5[1] = (long)(this + 0x220);
      plVar5[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar5;
    }
    this[0x220] = (MultiplayerPeerExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_c8);
  }
  pcVar6 = *(code **)(this + 0x228);
  if (pcVar6 == (code *)0x0) {
    if (_gdvirtual__get_available_packet_count_call(int&)::first_print == '\0') {
      iVar1 = 0;
    }
    else {
      local_f8 = 0;
      local_c8[0] = 0x10f020;
      local_c8[1] = 0;
      uStack_c0 = 0x23;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_f8);
      local_108 = 0;
      local_c8[0] = 0x112dfc;
      local_c8[1] = 0;
      uStack_c0 = 0x1b;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_108);
      local_c8[0] = 0x10dd3a;
      local_c8[1] = 0;
      local_118 = 0;
      uStack_c0 = 2;
      uStack_bc = 0;
      String::parse_latin1((StrRange *)&local_118);
      (**(code **)(*(long *)this + 0x48))(local_128,this);
      operator+((char *)local_120,(String *)"Required virtual method ");
      String::operator+(local_110,(String *)local_120);
      String::operator+((String *)&local_100,local_110);
      String::operator+((String *)local_c8,(String *)&local_100);
      _err_print_error("_gdvirtual__get_available_packet_count_call","scene/main/multiplayer_peer.h"
                       ,0x79,(String *)local_c8,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_110);
      CowData<char32_t>::_unref(local_120);
      CowData<char32_t>::_unref(local_128);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      _gdvirtual__get_available_packet_count_call(int&)::first_print = '\0';
      iVar1 = 0;
    }
  }
  else if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
    (*pcVar6)(*(undefined8 *)(this + 0x10),0,local_c8);
    iVar1 = local_c8[0];
  }
  else {
    (**(code **)(*(long *)(this + 8) + 0xe0))
              (*(undefined8 *)(this + 0x10),this + 0x218,pcVar6,0,local_c8);
    iVar1 = local_c8[0];
  }
LAB_00112f26:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
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
LAB_001136b0:
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
  if (lVar8 == 0) goto LAB_001136b0;
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
        goto LAB_001135c1;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_001135c1:
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



/* MultiplayerPeerExtension::_initialize_classv() */

void MultiplayerPeerExtension::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
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
          StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
          local_58 = "RefCounted";
          local_70 = 0;
          local_50 = 10;
          String::parse_latin1((StrRange *)&local_70);
          StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
          if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          if ((code *)PTR__bind_methods_0011f010 != RefCounted::_bind_methods) {
            RefCounted::_bind_methods();
          }
          RefCounted::initialize_class()::initialized = '\x01';
        }
        local_58 = "RefCounted";
        local_68 = 0;
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
        local_58 = "PacketPeer";
        local_70 = 0;
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        if ((code *)PTR__bind_methods_0011f008 != RefCounted::_bind_methods) {
          PacketPeer::_bind_methods();
        }
        PacketPeer::initialize_class()::initialized = '\x01';
      }
      local_58 = "PacketPeer";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
      local_58 = "MultiplayerPeer";
      local_70 = 0;
      local_50 = 0xf;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
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
      MultiplayerPeer::_bind_methods();
      MultiplayerPeer::initialize_class()::initialized = '\x01';
    }
    local_58 = "MultiplayerPeer";
    local_68 = 0;
    local_50 = 0xf;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
    local_58 = "MultiplayerPeerExtension";
    local_70 = 0;
    local_50 = 0x18;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MultiplayerPeerExtension::set_transfer_channel(int) */

void __thiscall
MultiplayerPeerExtension::set_transfer_channel(MultiplayerPeerExtension *this,int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  CowData<char32_t> local_158 [8];
  CowData<char32_t> local_150 [8];
  undefined8 local_148;
  String local_140 [8];
  undefined8 local_138;
  long local_130;
  undefined8 local_128;
  long local_120 [5];
  int local_f8;
  int iStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8 [2];
  undefined8 local_a8;
  undefined8 local_a0;
  Vector<int> local_98 [8];
  undefined8 local_90;
  Variant *local_80;
  int local_78 [8];
  int *local_58 [3];
  long local_40;
  
  plVar4 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar4 != (long *)0x0) {
    local_f8 = 0;
    iStack_f4 = 0;
    uStack_f0 = 0;
    Variant::Variant((Variant *)local_78,param_1);
    local_80 = (Variant *)local_78;
    (**(code **)(*plVar4 + 0x60))(local_58,plVar4,this + 0x290,&local_80,1,&local_f8);
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_f8 == 0) {
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00113d1a;
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x298] == (MultiplayerPeerExtension)0x0)) {
    local_f8 = 0;
    iStack_f4 = 0;
    local_e8 = (undefined1  [16])0x0;
    uStack_f0 = 0;
    uStack_ec = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 6;
    local_c0 = 1;
    local_b8[0] = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_90 = 0;
    String::parse_latin1((String *)&local_f8,"_set_transfer_channel");
    local_c0 = CONCAT44(local_c0._4_4_,0x88);
    GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_128);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_b8,(PropertyInfo *)&local_128);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
    Vector<int>::push_back(local_98,3);
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar3 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x2a0) = 0;
    pcVar5 = *(code **)(lVar3 + 0xd8);
    if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
       (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
      local_138 = 0;
      String::parse_latin1((String *)&local_138,"MultiplayerPeerExtension");
      StringName::StringName((StringName *)&local_130,(String *)&local_138,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_128,(StringName *)&local_130);
      if (local_120[0] == 0) {
        lVar3 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_120);
        if (StringName::configured != '\0') goto LAB_001140d5;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
LAB_001140f2:
        lVar3 = *(long *)(this + 8);
        pcVar5 = *(code **)(lVar3 + 200);
        if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
           (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 == (code *)0x0)) goto LAB_0011402c;
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x290);
        *(undefined8 *)(this + 0x2a0) = uVar2;
      }
      else {
        lVar3 = *(long *)(local_120[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_120);
        if (StringName::configured != '\0') {
LAB_001140d5:
          if (local_130 != 0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
        if (lVar3 == 0) goto LAB_001140f2;
      }
      lVar3 = *(long *)(this + 8);
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x290,uVar1);
      *(undefined8 *)(this + 0x2a0) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
LAB_0011402c:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = (long)(this + 0x2a0);
      plVar4[1] = (long)(this + 0x298);
      plVar4[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar4;
    }
    this[0x298] = (MultiplayerPeerExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_f8);
  }
  pcVar5 = *(code **)(this + 0x2a0);
  if (pcVar5 == (code *)0x0) {
    if (_gdvirtual__set_transfer_channel_call(int)::first_print != '\0') {
      local_128 = 0;
      local_f8 = 0x10f020;
      iStack_f4 = 0;
      uStack_f0 = 0x23;
      uStack_ec = 0;
      String::parse_latin1((StrRange *)&local_128);
      local_138 = 0;
      local_f8 = 0x1095c3;
      iStack_f4 = 0;
      uStack_f0 = 0x15;
      uStack_ec = 0;
      String::parse_latin1((StrRange *)&local_138);
      local_f8 = 0x10dd3a;
      iStack_f4 = 0;
      local_148 = 0;
      uStack_f0 = 2;
      uStack_ec = 0;
      String::parse_latin1((StrRange *)&local_148);
      (**(code **)(*(long *)this + 0x48))(local_158,this);
      operator+((char *)local_150,(String *)"Required virtual method ");
      String::operator+(local_140,(String *)local_150);
      String::operator+((String *)&local_130,local_140);
      String::operator+((String *)&local_f8,(String *)&local_130);
      _err_print_error("_gdvirtual__set_transfer_channel_call","scene/main/multiplayer_peer.h",0x86,
                       (String *)&local_f8,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_140);
      CowData<char32_t>::_unref(local_150);
      CowData<char32_t>::_unref(local_158);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
      _gdvirtual__set_transfer_channel_call(int)::first_print = '\0';
    }
  }
  else {
    local_58[0] = &local_f8;
    iStack_f4 = param_1 >> 0x1f;
    local_f8 = param_1;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar5)(*(undefined8 *)(this + 0x10),local_58,0);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x290,pcVar5,local_58,0);
    }
  }
LAB_00113d1a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MultiplayerPeerExtension::set_transfer_mode(MultiplayerPeer::TransferMode) */

void __thiscall
MultiplayerPeerExtension::set_transfer_mode(MultiplayerPeerExtension *this,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  CowData<char32_t> local_158 [8];
  CowData<char32_t> local_150 [8];
  undefined8 local_148;
  String local_140 [8];
  undefined8 local_138;
  long local_130;
  undefined8 local_128;
  long local_120 [5];
  int local_f8 [4];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8 [2];
  undefined8 local_a8;
  undefined8 local_a0;
  Vector<int> local_98 [8];
  undefined8 local_90;
  Variant *local_80;
  int local_78 [8];
  int *local_58 [3];
  long local_40;
  
  plVar4 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar4 != (long *)0x0) {
    local_f8[0] = 0;
    local_f8[1] = 0;
    local_f8[2] = 0;
    Variant::Variant((Variant *)local_78,param_2);
    local_80 = (Variant *)local_78;
    (**(code **)(*plVar4 + 0x60))(local_58,plVar4,this + 0x2c0,&local_80,1,local_f8);
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_f8[0] == 0) {
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_001142fa;
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x2c8] == (MultiplayerPeerExtension)0x0)) {
    local_f8[0] = 0;
    local_f8[1] = 0;
    local_e8 = (undefined1  [16])0x0;
    local_f8[2] = 0;
    local_f8[3] = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 6;
    local_c0 = 1;
    local_b8[0] = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_90 = 0;
    String::parse_latin1((String *)local_f8,"_set_transfer_mode");
    local_c0 = CONCAT44(local_c0._4_4_,0x88);
    GetTypeInfo<MultiplayerPeer::TransferMode,void>::get_class_info
              ((GetTypeInfo<MultiplayerPeer::TransferMode,void> *)&local_128);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_b8,(PropertyInfo *)&local_128);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
    Vector<int>::push_back(local_98,0);
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar3 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x2d0) = 0;
    pcVar5 = *(code **)(lVar3 + 0xd8);
    if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
       (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
      local_138 = 0;
      String::parse_latin1((String *)&local_138,"MultiplayerPeerExtension");
      StringName::StringName((StringName *)&local_130,(String *)&local_138,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_128,(StringName *)&local_130);
      if (local_120[0] == 0) {
        lVar3 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_120);
        if (StringName::configured != '\0') goto LAB_001146b5;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
LAB_001146d2:
        lVar3 = *(long *)(this + 8);
        pcVar5 = *(code **)(lVar3 + 200);
        if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
           (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 == (code *)0x0)) goto LAB_00114609;
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x2c0);
        *(undefined8 *)(this + 0x2d0) = uVar2;
      }
      else {
        lVar3 = *(long *)(local_120[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_120);
        if (StringName::configured != '\0') {
LAB_001146b5:
          if (local_130 != 0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
        if (lVar3 == 0) goto LAB_001146d2;
      }
      lVar3 = *(long *)(this + 8);
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x2c0,uVar1);
      *(undefined8 *)(this + 0x2d0) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
LAB_00114609:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = (long)(this + 0x2d0);
      plVar4[1] = (long)(this + 0x2c8);
      plVar4[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar4;
    }
    this[0x2c8] = (MultiplayerPeerExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_f8);
  }
  pcVar5 = *(code **)(this + 0x2d0);
  if (pcVar5 == (code *)0x0) {
    if (_gdvirtual__set_transfer_mode_call(MultiplayerPeer::TransferMode)::first_print != '\0') {
      local_128 = 0;
      local_f8[0] = 0x10f020;
      local_f8[1] = 0;
      local_f8[2] = 0x23;
      local_f8[3] = 0;
      String::parse_latin1((StrRange *)&local_128);
      local_138 = 0;
      local_f8[0] = 0x1095e0;
      local_f8[1] = 0;
      local_f8[2] = 0x12;
      local_f8[3] = 0;
      String::parse_latin1((StrRange *)&local_138);
      local_f8[0] = 0x10dd3a;
      local_f8[1] = 0;
      local_148 = 0;
      local_f8[2] = 2;
      local_f8[3] = 0;
      String::parse_latin1((StrRange *)&local_148);
      (**(code **)(*(long *)this + 0x48))(local_158,this);
      operator+((char *)local_150,(String *)"Required virtual method ");
      String::operator+(local_140,(String *)local_150);
      String::operator+((String *)&local_130,local_140);
      String::operator+((String *)local_f8,(String *)&local_130);
      _err_print_error("_gdvirtual__set_transfer_mode_call","scene/main/multiplayer_peer.h",0x88,
                       (String *)local_f8,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_140);
      CowData<char32_t>::_unref(local_150);
      CowData<char32_t>::_unref(local_158);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
      _gdvirtual__set_transfer_mode_call(MultiplayerPeer::TransferMode)::first_print = '\0';
    }
  }
  else {
    local_58[0] = local_f8;
    local_f8[1] = 0;
    local_f8[0] = param_2;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar5)(*(undefined8 *)(this + 0x10),local_58,0);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x2c0,pcVar5,local_58,0);
    }
  }
LAB_001142fa:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MultiplayerPeerExtension::set_target_peer(int) */

void __thiscall
MultiplayerPeerExtension::set_target_peer(MultiplayerPeerExtension *this,int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  CowData<char32_t> local_158 [8];
  CowData<char32_t> local_150 [8];
  undefined8 local_148;
  String local_140 [8];
  undefined8 local_138;
  long local_130;
  undefined8 local_128;
  long local_120 [5];
  int local_f8;
  int iStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8 [2];
  undefined8 local_a8;
  undefined8 local_a0;
  Vector<int> local_98 [8];
  undefined8 local_90;
  Variant *local_80;
  int local_78 [8];
  int *local_58 [3];
  long local_40;
  
  plVar4 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar4 != (long *)0x0) {
    local_f8 = 0;
    iStack_f4 = 0;
    uStack_f0 = 0;
    Variant::Variant((Variant *)local_78,param_1);
    local_80 = (Variant *)local_78;
    (**(code **)(*plVar4 + 0x60))(local_58,plVar4,this + 0x2f0,&local_80,1,&local_f8);
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_f8 == 0) {
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_001148da;
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x2f8] == (MultiplayerPeerExtension)0x0)) {
    local_f8 = 0;
    iStack_f4 = 0;
    local_e8 = (undefined1  [16])0x0;
    uStack_f0 = 0;
    uStack_ec = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 6;
    local_c0 = 1;
    local_b8[0] = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_90 = 0;
    String::parse_latin1((String *)&local_f8,"_set_target_peer");
    local_c0 = CONCAT44(local_c0._4_4_,0x88);
    GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_128);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_b8,(PropertyInfo *)&local_128);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
    Vector<int>::push_back(local_98,3);
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar3 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x300) = 0;
    pcVar5 = *(code **)(lVar3 + 0xd8);
    if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
       (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
      local_138 = 0;
      String::parse_latin1((String *)&local_138,"MultiplayerPeerExtension");
      StringName::StringName((StringName *)&local_130,(String *)&local_138,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_128,(StringName *)&local_130);
      if (local_120[0] == 0) {
        lVar3 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_120);
        if (StringName::configured != '\0') goto LAB_00114c95;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
LAB_00114cb2:
        lVar3 = *(long *)(this + 8);
        pcVar5 = *(code **)(lVar3 + 200);
        if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
           (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 == (code *)0x0)) goto LAB_00114bec;
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x2f0);
        *(undefined8 *)(this + 0x300) = uVar2;
      }
      else {
        lVar3 = *(long *)(local_120[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_120);
        if (StringName::configured != '\0') {
LAB_00114c95:
          if (local_130 != 0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
        if (lVar3 == 0) goto LAB_00114cb2;
      }
      lVar3 = *(long *)(this + 8);
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x2f0,uVar1);
      *(undefined8 *)(this + 0x300) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
LAB_00114bec:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = (long)(this + 0x300);
      plVar4[1] = (long)(this + 0x2f8);
      plVar4[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar4;
    }
    this[0x2f8] = (MultiplayerPeerExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_f8);
  }
  pcVar5 = *(code **)(this + 0x300);
  if (pcVar5 == (code *)0x0) {
    if (_gdvirtual__set_target_peer_call(int)::first_print != '\0') {
      local_128 = 0;
      local_f8 = 0x10f020;
      iStack_f4 = 0;
      uStack_f0 = 0x23;
      uStack_ec = 0;
      String::parse_latin1((StrRange *)&local_128);
      local_138 = 0;
      local_f8 = 0x1095fa;
      iStack_f4 = 0;
      uStack_f0 = 0x10;
      uStack_ec = 0;
      String::parse_latin1((StrRange *)&local_138);
      local_f8 = 0x10dd3a;
      iStack_f4 = 0;
      local_148 = 0;
      uStack_f0 = 2;
      uStack_ec = 0;
      String::parse_latin1((StrRange *)&local_148);
      (**(code **)(*(long *)this + 0x48))(local_158,this);
      operator+((char *)local_150,(String *)"Required virtual method ");
      String::operator+(local_140,(String *)local_150);
      String::operator+((String *)&local_130,local_140);
      String::operator+((String *)&local_f8,(String *)&local_130);
      _err_print_error("_gdvirtual__set_target_peer_call","scene/main/multiplayer_peer.h",0x8a,
                       (String *)&local_f8,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_140);
      CowData<char32_t>::_unref(local_150);
      CowData<char32_t>::_unref(local_158);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
      _gdvirtual__set_target_peer_call(int)::first_print = '\0';
    }
  }
  else {
    local_58[0] = &local_f8;
    iStack_f4 = param_1 >> 0x1f;
    local_f8 = param_1;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar5)(*(undefined8 *)(this + 0x10),local_58,0);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x2f0,pcVar5,local_58,0);
    }
  }
LAB_001148da:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MultiplayerPeerExtension::disconnect_peer(int, bool) */

void __thiscall
MultiplayerPeerExtension::disconnect_peer(MultiplayerPeerExtension *this,int param_1,bool param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  CowData<char32_t> local_178 [8];
  CowData<char32_t> local_170 [8];
  undefined8 local_168;
  String local_160 [8];
  undefined8 local_158;
  long local_150;
  undefined8 local_148;
  long local_140 [5];
  int local_118;
  int iStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8 [2];
  undefined8 local_c8;
  undefined8 local_c0;
  Vector<int> local_b8 [8];
  undefined8 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  int local_98 [8];
  int *local_78;
  undefined8 *puStack_70;
  int local_60 [8];
  long local_40;
  
  plVar4 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar4 != (long *)0x0) {
    local_118 = 0;
    iStack_114 = 0;
    uStack_110 = 0;
    Variant::Variant((Variant *)&local_78,param_1);
    Variant::Variant((Variant *)local_60,param_2);
    local_a8 = (Variant *)&local_78;
    pVStack_a0 = (Variant *)local_60;
    (**(code **)(*plVar4 + 0x60))(local_98,plVar4,this + 0x398,&local_a8,2,&local_118);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_118 == 0) {
      if (Variant::needs_deinit[local_60[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00114f09;
    }
    if (Variant::needs_deinit[local_60[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x3a0] == (MultiplayerPeerExtension)0x0)) {
    local_118 = 0;
    iStack_114 = 0;
    local_108 = (undefined1  [16])0x0;
    uStack_110 = 0;
    uStack_10c = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_e8 = 6;
    local_e0 = 1;
    local_d8[0] = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_b0 = 0;
    String::parse_latin1((String *)&local_118,"_disconnect_peer");
    local_e0 = CONCAT44(local_e0._4_4_,0x88);
    GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_148);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_d8,(PropertyInfo *)&local_148);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
    Vector<int>::push_back(local_b8,3);
    GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_148);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_d8,(PropertyInfo *)&local_148);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
    Vector<int>::push_back(local_b8,0);
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar3 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x3a8) = 0;
    pcVar5 = *(code **)(lVar3 + 0xd8);
    if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
       (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
      local_158 = 0;
      String::parse_latin1((String *)&local_158,"MultiplayerPeerExtension");
      StringName::StringName((StringName *)&local_150,(String *)&local_158,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_148,(StringName *)&local_150);
      if (local_140[0] == 0) {
        lVar3 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_140);
        if (StringName::configured != '\0') goto LAB_00115341;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
LAB_00115360:
        lVar3 = *(long *)(this + 8);
        pcVar5 = *(code **)(lVar3 + 200);
        if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
           (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 == (code *)0x0)) goto LAB_00115268;
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x398);
        *(undefined8 *)(this + 0x3a8) = uVar2;
      }
      else {
        lVar3 = *(long *)(local_140[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_140);
        if (StringName::configured != '\0') {
LAB_00115341:
          if (local_150 != 0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
        if (lVar3 == 0) goto LAB_00115360;
      }
      lVar3 = *(long *)(this + 8);
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x398,uVar1);
      *(undefined8 *)(this + 0x3a8) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
LAB_00115268:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = (long)(this + 0x3a8);
      plVar4[1] = (long)(this + 0x3a0);
      plVar4[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar4;
    }
    this[0x3a0] = (MultiplayerPeerExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_118);
  }
  pcVar5 = *(code **)(this + 0x3a8);
  if (pcVar5 == (code *)0x0) {
    if (_gdvirtual__disconnect_peer_call(int,bool)::first_print != '\0') {
      local_148 = 0;
      local_118 = 0x10f020;
      iStack_114 = 0;
      uStack_110 = 0x23;
      uStack_10c = 0;
      String::parse_latin1((StrRange *)&local_148);
      local_158 = 0;
      local_118 = 0x109613;
      iStack_114 = 0;
      uStack_110 = 0x10;
      uStack_10c = 0;
      String::parse_latin1((StrRange *)&local_158);
      local_118 = 0x10dd3a;
      iStack_114 = 0;
      local_168 = 0;
      uStack_110 = 2;
      uStack_10c = 0;
      String::parse_latin1((StrRange *)&local_168);
      (**(code **)(*(long *)this + 0x48))(local_178,this);
      operator+((char *)local_170,(String *)"Required virtual method ");
      String::operator+(local_160,(String *)local_170);
      String::operator+((String *)&local_150,local_160);
      String::operator+((String *)&local_118,(String *)&local_150);
      _err_print_error("_gdvirtual__disconnect_peer_call","scene/main/multiplayer_peer.h",0x91,
                       (String *)&local_118,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_160);
      CowData<char32_t>::_unref(local_170);
      CowData<char32_t>::_unref(local_178);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
      _gdvirtual__disconnect_peer_call(int,bool)::first_print = '\0';
    }
  }
  else {
    puStack_70 = &local_148;
    local_148 = CONCAT71(local_148._1_7_,param_2);
    local_78 = &local_118;
    iStack_114 = param_1 >> 0x1f;
    local_118 = param_1;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar5)(*(undefined8 *)(this + 0x10),&local_78,0);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x398,pcVar5,&local_78,0);
    }
  }
LAB_00114f09:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x001155a8) */
/* WARNING: Removing unreachable block (ram,0x0011573d) */
/* WARNING: Removing unreachable block (ram,0x00115749) */
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



/* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  bool bVar4;
  long *plVar6;
  undefined4 in_register_00000014;
  long *plVar7;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar5;
  
  plVar7 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar7 != (long *)0x0) && (plVar7[1] != 0)) && (*(char *)(plVar7[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar7[1] == 0) {
      plVar6 = (long *)plVar7[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    else {
      plVar6 = (long *)(plVar7[1] + 0x20);
    }
    if (local_58 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC138,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_58 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar7 = (long *)(local_60 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00115940;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar5 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar5 & 1) != 0) {
        pVVar5 = *(Variant **)(pVVar5 + *(long *)((long)plVar7 + (long)pVVar1) + -1);
      }
      bVar4 = (bool)(*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,bVar4);
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
LAB_00115940:
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
  long lVar1;
  char *pcVar2;
  Variant VVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar4;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00115c32;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar3 = (Variant)(*pcVar4)(param_1 + *(long *)(this + 0x60));
  param_3[8] = VVar3;
LAB_00115c32:
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
  long lVar1;
  char *pcVar2;
  undefined1 uVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar4;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00115e31;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(undefined1 *)param_3 = uVar3;
LAB_00115e31:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<bool>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar4 = param_2[0x23];
      if (pVVar4 == (Variant *)0x0) {
        pVVar4 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar4 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar4) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
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
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001161f5;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00116039. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)param_3 + 8));
    return;
  }
LAB_001161f5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      pcVar2 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_38 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar3 = (long *)(local_40 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00116415;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011625e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3 != '\0');
    return;
  }
LAB_00116415:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<unsigned int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<unsigned_int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  uint uVar4;
  long *plVar6;
  undefined4 in_register_00000014;
  long *plVar7;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar5;
  
  plVar7 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar7 != (long *)0x0) && (plVar7[1] != 0)) && (*(char *)(plVar7[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar7[1] == 0) {
      plVar6 = (long *)plVar7[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    else {
      plVar6 = (long *)(plVar7[1] + 0x20);
    }
    if (local_58 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC138,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_58 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar7 = (long *)(local_60 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001164e0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar5 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar5 & 1) != 0) {
        pVVar5 = *(Variant **)(pVVar5 + *(long *)((long)plVar7 + (long)pVVar1) + -1);
      }
      uVar4 = (*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,uVar4);
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
LAB_001164e0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<unsigned int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<unsigned_int>::validated_call
          (MethodBindTRC<unsigned_int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar4;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00116744;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar3;
LAB_00116744:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<unsigned int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<unsigned_int>::ptrcall
          (MethodBindTRC<unsigned_int> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar4;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00116943;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar3;
LAB_00116943:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<MultiplayerPeer::ConnectionStatus>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<MultiplayerPeer::ConnectionStatus>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  long *plVar6;
  undefined4 in_register_00000014;
  long *plVar7;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar5;
  
  plVar7 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar7 != (long *)0x0) && (plVar7[1] != 0)) && (*(char *)(plVar7[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar7[1] == 0) {
      plVar6 = (long *)plVar7[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    else {
      plVar6 = (long *)(plVar7[1] + 0x20);
    }
    if (local_58 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC138,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_58 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar7 = (long *)(local_60 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00116bc0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar5 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar5 & 1) != 0) {
        pVVar5 = *(Variant **)(pVVar5 + *(long *)((long)plVar7 + (long)pVVar1) + -1);
      }
      iVar4 = (*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,iVar4);
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
LAB_00116bc0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<MultiplayerPeer::ConnectionStatus>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTRC<MultiplayerPeer::ConnectionStatus>::validated_call
          (MethodBindTRC<MultiplayerPeer::ConnectionStatus> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar4;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00116e24;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar3;
LAB_00116e24:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<MultiplayerPeer::ConnectionStatus>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<MultiplayerPeer::ConnectionStatus>::ptrcall
          (MethodBindTRC<MultiplayerPeer::ConnectionStatus> *this,Object *param_1,void **param_2,
          void *param_3)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar4;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00117023;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar3;
LAB_00117023:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int,bool>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar4 = param_2[0x23];
      if (pVVar4 == (Variant *)0x0) {
        pVVar4 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar4 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar4) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
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
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001173fd;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00117242. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8),*(undefined1 *)(*(long *)(param_3 + 8) + 8));
    return;
  }
LAB_001173fd:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int,bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      pcVar2 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_38 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar3 = (long *)(local_40 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00117635;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x00117476. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               **(char **)((long)param_3 + 8) != '\0');
    return;
  }
LAB_00117635:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC138,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar3 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_48 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar6 = (long *)(local_50 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00117760;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
      (*(code *)pVVar4)();
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
LAB_00117760:
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
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar4 = param_2[0x23];
      if (pVVar4 == (Variant *)0x0) {
        pVVar4 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar4 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar4) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_30 = 0x35;
      local_40 = 0;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0,0);
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
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00117b5b;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001179c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00117b5b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_30 = 0x35;
      local_40 = 0;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0,0);
      pcVar2 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_38 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar3 = (long *)(local_40 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00117d4b;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00117bb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00117d4b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<MultiplayerPeer::TransferMode>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<MultiplayerPeer::TransferMode>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  long *plVar6;
  undefined4 in_register_00000014;
  long *plVar7;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar5;
  
  plVar7 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar7 != (long *)0x0) && (plVar7[1] != 0)) && (*(char *)(plVar7[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar7[1] == 0) {
      plVar6 = (long *)plVar7[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    else {
      plVar6 = (long *)(plVar7[1] + 0x20);
    }
    if (local_58 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC138,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_58 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar7 = (long *)(local_60 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00117e10;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar5 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar5 & 1) != 0) {
        pVVar5 = *(Variant **)(pVVar5 + *(long *)((long)plVar7 + (long)pVVar1) + -1);
      }
      iVar4 = (*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,iVar4);
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
LAB_00117e10:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<MultiplayerPeer::TransferMode>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTRC<MultiplayerPeer::TransferMode>::validated_call
          (MethodBindTRC<MultiplayerPeer::TransferMode> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar4;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00118074;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar3;
LAB_00118074:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<MultiplayerPeer::TransferMode>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<MultiplayerPeer::TransferMode>::ptrcall
          (MethodBindTRC<MultiplayerPeer::TransferMode> *this,Object *param_1,void **param_2,
          void *param_3)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar4;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00118273;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar3;
LAB_00118273:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<MultiplayerPeer::TransferMode>::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<MultiplayerPeer::TransferMode>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar4 = param_2[0x23];
      if (pVVar4 == (Variant *)0x0) {
        pVVar4 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar4 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar4) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
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
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00118645;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00118488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00118645:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<MultiplayerPeer::TransferMode>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<MultiplayerPeer::TransferMode>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      pcVar2 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_38 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar3 = (long *)(local_40 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00118865;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001186a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00118865:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  long *plVar6;
  undefined4 in_register_00000014;
  long *plVar7;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar5;
  
  plVar7 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar7 != (long *)0x0) && (plVar7[1] != 0)) && (*(char *)(plVar7[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar7[1] == 0) {
      plVar6 = (long *)plVar7[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    else {
      plVar6 = (long *)(plVar7[1] + 0x20);
    }
    if (local_58 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC138,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_58 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar7 = (long *)(local_60 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00118930;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar5 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar5 & 1) != 0) {
        pVVar5 = *(Variant **)(pVVar5 + *(long *)((long)plVar7 + (long)pVVar1) + -1);
      }
      iVar4 = (*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,iVar4);
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
LAB_00118930:
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
  long lVar1;
  char *pcVar2;
  int iVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar4;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00118b94;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(long *)(param_3 + 8) = (long)iVar3;
LAB_00118b94:
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
  long lVar1;
  char *pcVar2;
  int iVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar4;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00118d93;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(long *)param_3 = (long)iVar3;
LAB_00118d93:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar4 = param_2[0x23];
      if (pVVar4 == (Variant *)0x0) {
        pVVar4 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar4 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar4) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
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
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00119165;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00118fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00119165:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      pcVar2 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_38 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar3 = (long *)(local_40 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00119385;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001191c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00119385:
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
    goto LAB_0011947d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_001194e0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_001194e0:
      uVar6 = 4;
LAB_0011947d:
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
      goto LAB_001193fb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_001193fb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
  uVar4 = _LC143;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_bool(this);
                    /* WARNING: Could not recover jumptable at 0x00119457. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(SUB81(param_1 + (long)param_3,0));
  return;
}



/* MethodBindT<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC138,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00119546;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,bool>
            (p_Var4,(_func_void_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00119546:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
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
    goto LAB_0011987d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  iVar6 = 2 - uVar10;
  if (lVar1 == 0) {
    if (iVar6 == 0) {
      this = (Variant *)*plVar8;
LAB_001198ad:
      this_00 = (Variant *)plVar8[1];
      goto LAB_001197e5;
    }
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    iVar11 = (int)lVar2;
    if (iVar6 <= iVar11) {
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar2 <= lVar9) goto LAB_001198c8;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_001198ad;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar9) {
LAB_001198c8:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar9 * 0x18);
LAB_001197e5:
      *(undefined4 *)param_6 = 0;
      if (((ulong)param_2 & 1) != 0) {
        param_2 = *(_func_void_int_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,1);
      uVar4 = _LC144;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      Variant::operator_cast_to_bool(this_00);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
      uVar4 = _LC145;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      iVar6 = Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x0011986c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*param_2)((int)(param_1 + (long)param_3),SUB41(iVar6,0));
      return;
    }
  }
  uVar7 = 4;
LAB_0011987d:
  *(undefined4 *)param_6 = uVar7;
  *(undefined4 *)(param_6 + 8) = 2;
  return;
}



/* MethodBindT<int, bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<int,bool>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC138,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00119966;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int,bool>
            (p_Var4,(_func_void_int_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00119966:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass,
   MultiplayerPeer::TransferMode>(__UnexistingClass*, void
   (__UnexistingClass::*)(MultiplayerPeer::TransferMode), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,MultiplayerPeer::TransferMode>
               (__UnexistingClass *param_1,_func_void_TransferMode *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

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
    goto LAB_00119c6d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00119cd0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00119cd0:
      uVar6 = 4;
LAB_00119c6d:
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
      goto LAB_00119beb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_00119beb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_TransferMode **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC145;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x00119c46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<MultiplayerPeer::TransferMode>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<MultiplayerPeer::TransferMode>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC138,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00119d36;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,MultiplayerPeer::TransferMode>
            (p_Var4,(_func_void_TransferMode *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00119d36:
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
    goto LAB_0011a03d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0011a0a0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0011a0a0:
      uVar6 = 4;
LAB_0011a03d:
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
      goto LAB_00119fbb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_00119fbb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC145;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x0011a016. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((int)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC138,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011a106;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int>
            (p_Var4,(_func_void_int *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,in_R9
            );
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011a106:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodInfo::~MethodInfo() */

void __thiscall MethodInfo::~MethodInfo(MethodInfo *this)

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
/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MultiplayerPeerExtension::~MultiplayerPeerExtension() */

void __thiscall MultiplayerPeerExtension::~MultiplayerPeerExtension(MultiplayerPeerExtension *this)

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
/* MethodBindTRC<unsigned int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<unsigned_int>::~MethodBindTRC(MethodBindTRC<unsigned_int> *this)

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
/* MethodBindTRC<MultiplayerPeer::ConnectionStatus>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<MultiplayerPeer::ConnectionStatus>::~MethodBindTRC
          (MethodBindTRC<MultiplayerPeer::ConnectionStatus> *this)

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
/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<MultiplayerPeer::TransferMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<MultiplayerPeer::TransferMode>::~MethodBindTRC
          (MethodBindTRC<MultiplayerPeer::TransferMode> *this)

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
/* MethodBindT<MultiplayerPeer::TransferMode>::~MethodBindT() */

void __thiscall
MethodBindT<MultiplayerPeer::TransferMode>::~MethodBindT
          (MethodBindT<MultiplayerPeer::TransferMode> *this)

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


