
/* WebRTCMultiplayerPeer::set_target_peer(int) */

void __thiscall WebRTCMultiplayerPeer::set_target_peer(WebRTCMultiplayerPeer *this,int param_1)

{
  *(int *)(this + 0x1a8) = param_1;
  return;
}



/* WebRTCMultiplayerPeer::get_packet_peer() const */

undefined4 __thiscall WebRTCMultiplayerPeer::get_packet_peer(WebRTCMultiplayerPeer *this)

{
  return *(undefined4 *)(this + 0x1b4);
}



/* WebRTCMultiplayerPeer::get_packet_channel() const */

int __thiscall WebRTCMultiplayerPeer::get_packet_channel(WebRTCMultiplayerPeer *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x1b8);
  if (iVar1 < 2) {
    iVar1 = 2;
  }
  return iVar1 + -2;
}



/* WebRTCMultiplayerPeer::is_server() const */

bool __thiscall WebRTCMultiplayerPeer::is_server(WebRTCMultiplayerPeer *this)

{
  return *(int *)(this + 0x1a4) == 1;
}



/* WebRTCMultiplayerPeer::get_connection_status() const */

undefined4 __thiscall WebRTCMultiplayerPeer::get_connection_status(WebRTCMultiplayerPeer *this)

{
  return *(undefined4 *)(this + 0x1b0);
}



/* WebRTCMultiplayerPeer::is_server_relay_supported() const */

undefined4 __thiscall WebRTCMultiplayerPeer::is_server_relay_supported(WebRTCMultiplayerPeer *this)

{
  return CONCAT31((int3)(*(int *)(this + 0x1bc) - 1U >> 8),*(int *)(this + 0x1bc) - 1U < 2);
}



/* WebRTCMultiplayerPeer::get_max_packet_size() const */

undefined8 WebRTCMultiplayerPeer::get_max_packet_size(void)

{
  return 0x4b0;
}



/* WebRTCMultiplayerPeer::get_unique_id() const */

undefined4 __thiscall WebRTCMultiplayerPeer::get_unique_id(WebRTCMultiplayerPeer *this)

{
  if (*(int *)(this + 0x1b0) != 0) {
    return *(undefined4 *)(this + 0x1a4);
  }
  _err_print_error("get_unique_id","modules/webrtc/webrtc_multiplayer_peer.cpp",0xfd,
                   "Condition \"connection_status == CONNECTION_DISCONNECTED\" is true. Returning: 1"
                   ,0,0);
  return 1;
}



/* WebRTCMultiplayerPeer::get_available_packet_count() const */

int __thiscall WebRTCMultiplayerPeer::get_available_packet_count(WebRTCMultiplayerPeer *this)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  long *plVar5;
  
  iVar4 = *(int *)(this + 0x1b4);
  if (iVar4 != 0) {
    iVar4 = 0;
    for (plVar5 = *(long **)(this + 0x1d8); plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      while (((*(char *)(plVar5[3] + 400) == '\0' ||
              (plVar1 = *(long **)(plVar5[3] + 0x188), plVar1 == (long *)0x0)) ||
             (puVar3 = (undefined8 *)*plVar1, puVar3 == (undefined8 *)0x0))) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return iVar4;
        }
      }
      do {
        iVar2 = (**(code **)(*(long *)*puVar3 + 0x150))();
        puVar3 = (undefined8 *)puVar3[1];
        iVar4 = iVar4 + iVar2;
      } while (puVar3 != (undefined8 *)0x0);
    }
  }
  return iVar4;
}



/* WebRTCMultiplayerPeer::get_packet_mode() const */

undefined4 __thiscall WebRTCMultiplayerPeer::get_packet_mode(WebRTCMultiplayerPeer *this)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  long lVar5;
  
  iVar1 = *(int *)(this + 0x1b8);
  puVar2 = *(undefined8 **)(this + 0x1f0);
  if (iVar1 < 0) {
    if (puVar2 != (undefined8 *)0x0) {
      lVar5 = (long)*(int *)(puVar2 + 2);
      goto LAB_001001a3;
    }
  }
  else if (puVar2 != (undefined8 *)0x0) {
    lVar5 = (long)*(int *)(puVar2 + 2);
    if (iVar1 < *(int *)(puVar2 + 2)) {
      puVar4 = (undefined4 *)*puVar2;
      if (iVar1 != 0) {
        iVar3 = 0;
        do {
          iVar3 = iVar3 + 1;
          puVar4 = *(undefined4 **)(puVar4 + 2);
        } while (iVar1 != iVar3);
      }
      return *puVar4;
    }
    goto LAB_001001a3;
  }
  lVar5 = 0;
LAB_001001a3:
  _err_print_index_error
            ("get_packet_mode","modules/webrtc/webrtc_multiplayer_peer.cpp",0x3a,(long)iVar1,lVar5,
             "next_packet_channel","channels_modes.size()","",false,false);
  return 2;
}



/* WebRTCMultiplayerPeer::close() */

void __thiscall WebRTCMultiplayerPeer::close(WebRTCMultiplayerPeer *this)

{
  uint uVar1;
  void *pvVar2;
  Dictionary *this_00;
  long lVar3;
  Object *pOVar4;
  char cVar5;
  long lVar6;
  long *plVar7;
  
  if ((*(long *)(this + 0x1c8) != 0) && (*(int *)(this + 0x1ec) != 0)) {
    lVar6 = 0;
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e8) * 4);
    if (uVar1 != 0) {
      do {
        if (*(int *)(*(long *)(this + 0x1d0) + lVar6) != 0) {
          *(int *)(*(long *)(this + 0x1d0) + lVar6) = 0;
          pvVar2 = *(void **)(*(long *)(this + 0x1c8) + lVar6 * 2);
          if (*(long *)((long)pvVar2 + 0x18) != 0) {
            cVar5 = RefCounted::unreference();
            if (cVar5 != '\0') {
              pOVar4 = *(Object **)((long)pvVar2 + 0x18);
              cVar5 = predelete_handler(pOVar4);
              if (cVar5 != '\0') {
                (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
                Memory::free_static(pOVar4,false);
              }
            }
          }
          Memory::free_static(pvVar2,false);
          *(undefined8 *)(*(long *)(this + 0x1c8) + lVar6 * 2) = 0;
        }
        lVar6 = lVar6 + 4;
      } while ((ulong)uVar1 << 2 != lVar6);
    }
    *(undefined4 *)(this + 0x1ec) = 0;
    *(undefined1 (*) [16])(this + 0x1d8) = (undefined1  [16])0x0;
  }
  plVar7 = *(long **)(this + 0x1f8);
  if (plVar7 != (long *)0x0) {
    do {
      this_00 = (Dictionary *)*plVar7;
      if (this_00 == (Dictionary *)0x0) goto LAB_0010034c;
      if (plVar7 == *(long **)(this_00 + 0x18)) {
        lVar6 = *(long *)(this_00 + 8);
        lVar3 = *(long *)(this_00 + 0x10);
        *plVar7 = lVar6;
        if (this_00 == (Dictionary *)plVar7[1]) {
          plVar7[1] = lVar3;
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 8) = lVar6;
          lVar6 = *(long *)(this_00 + 8);
        }
        if (lVar6 != 0) {
          *(long *)(lVar6 + 0x10) = lVar3;
        }
        Dictionary::~Dictionary(this_00);
        Memory::free_static(this_00,false);
        *(int *)(plVar7 + 2) = (int)plVar7[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar7 = *(long **)(this + 0x1f8);
    } while ((int)plVar7[2] != 0);
    Memory::free_static(plVar7,false);
    *(undefined8 *)(this + 0x1f8) = 0;
  }
LAB_0010034c:
  *(undefined8 *)(this + 0x1a4) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  return;
}



/* WebRTCMultiplayerPeer::~WebRTCMultiplayerPeer() */

void __thiscall WebRTCMultiplayerPeer::~WebRTCMultiplayerPeer(WebRTCMultiplayerPeer *this)

{
  uint uVar1;
  Dictionary *this_00;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  
  *(undefined ***)this = &PTR__initialize_classv_0010fb68;
  close(this);
  plVar5 = *(long **)(this + 0x1f8);
  if (plVar5 != (long *)0x0) {
    do {
      this_00 = (Dictionary *)*plVar5;
      if (this_00 == (Dictionary *)0x0) {
        if ((int)plVar5[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_00100497;
        }
        break;
      }
      if (*(long **)(this_00 + 0x18) == plVar5) {
        lVar6 = *(long *)(this_00 + 8);
        lVar2 = *(long *)(this_00 + 0x10);
        *plVar5 = lVar6;
        if (this_00 == (Dictionary *)plVar5[1]) {
          plVar5[1] = lVar2;
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 8) = lVar6;
          lVar6 = *(long *)(this_00 + 8);
        }
        if (lVar6 != 0) {
          *(long *)(lVar6 + 0x10) = lVar2;
        }
        Dictionary::~Dictionary(this_00);
        Memory::free_static(this_00,false);
        *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar5 = *(long **)(this + 0x1f8);
    } while ((int)plVar5[2] != 0);
    Memory::free_static(plVar5,false);
  }
LAB_00100497:
  plVar5 = *(long **)(this + 0x1f0);
  if (plVar5 != (long *)0x0) {
    do {
      pvVar7 = (void *)*plVar5;
      if (pvVar7 == (void *)0x0) {
        if ((int)plVar5[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_00100509;
        }
        break;
      }
      if (*(long **)((long)pvVar7 + 0x18) == plVar5) {
        lVar6 = *(long *)((long)pvVar7 + 8);
        lVar2 = *(long *)((long)pvVar7 + 0x10);
        *plVar5 = lVar6;
        if (pvVar7 == (void *)plVar5[1]) {
          plVar5[1] = lVar2;
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 8) = lVar6;
          lVar6 = *(long *)((long)pvVar7 + 8);
        }
        if (lVar6 != 0) {
          *(long *)(lVar6 + 0x10) = lVar2;
        }
        Memory::free_static(pvVar7,false);
        *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar5 = *(long **)(this + 0x1f0);
    } while ((int)plVar5[2] != 0);
    Memory::free_static(plVar5,false);
  }
LAB_00100509:
  pvVar7 = *(void **)(this + 0x1c8);
  if (pvVar7 != (void *)0x0) {
    if (*(int *)(this + 0x1ec) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e8) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x1ec) = 0;
        *(undefined1 (*) [16])(this + 0x1d8) = (undefined1  [16])0x0;
      }
      else {
        lVar6 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x1d0) + lVar6) != 0) {
            pvVar7 = *(void **)((long)pvVar7 + lVar6 * 2);
            *(int *)(*(long *)(this + 0x1d0) + lVar6) = 0;
            if (*(long *)((long)pvVar7 + 0x18) != 0) {
              cVar4 = RefCounted::unreference();
              if (cVar4 != '\0') {
                pOVar3 = *(Object **)((long)pvVar7 + 0x18);
                cVar4 = predelete_handler(pOVar3);
                if (cVar4 != '\0') {
                  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                  Memory::free_static(pOVar3,false);
                }
              }
            }
            Memory::free_static(pvVar7,false);
            pvVar7 = *(void **)(this + 0x1c8);
            *(undefined8 *)((long)pvVar7 + lVar6 * 2) = 0;
          }
          lVar6 = lVar6 + 4;
        } while (lVar6 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x1ec) = 0;
        *(undefined1 (*) [16])(this + 0x1d8) = (undefined1  [16])0x0;
        if (pvVar7 == (void *)0x0) goto LAB_001005c5;
      }
    }
    Memory::free_static(pvVar7,false);
    Memory::free_static(*(void **)(this + 0x1d0),false);
  }
LAB_001005c5:
  *(undefined **)this = &__dso_handle;
  if (*(long *)(this + 400) != 0) {
    LOCK();
    plVar5 = (long *)(*(long *)(this + 400) + -0x10);
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      lVar6 = *(long *)(this + 400);
      *(undefined8 *)(this + 400) = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_0010f8a8;
  Object::~Object((Object *)this);
  return;
}



/* WebRTCMultiplayerPeer::~WebRTCMultiplayerPeer() */

void __thiscall WebRTCMultiplayerPeer::~WebRTCMultiplayerPeer(WebRTCMultiplayerPeer *this)

{
  ~WebRTCMultiplayerPeer(this);
  operator_delete(this,0x200);
  return;
}



/* WebRTCMultiplayerPeer::has_peer(int) */

undefined8 __thiscall WebRTCMultiplayerPeer::has_peer(WebRTCMultiplayerPeer *this,int param_1)

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
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  if ((*(long *)(this + 0x1c8) == 0) || (*(int *)(this + 0x1ec) == 0)) {
    return 0;
  }
  uVar1 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1e8) * 8);
  uVar10 = ((uint)param_1 >> 0x10 ^ param_1) * -0x7a143595;
  uVar10 = (uVar10 ^ uVar10 >> 0xd) * -0x3d4d51cb;
  uVar14 = uVar10 ^ uVar10 >> 0x10;
  if (uVar10 == uVar10 >> 0x10) {
    uVar14 = 1;
    uVar12 = uVar1;
  }
  else {
    uVar12 = uVar14 * uVar1;
  }
  uVar15 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e8) * 4));
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar15;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar12;
  lVar13 = SUB168(auVar2 * auVar6,8);
  uVar10 = *(uint *)(*(long *)(this + 0x1d0) + lVar13 * 4);
  iVar11 = SUB164(auVar2 * auVar6,8);
  if (uVar10 != 0) {
    uVar16 = 0;
    do {
      if ((uVar14 == uVar10) &&
         (*(int *)(*(long *)(*(long *)(this + 0x1c8) + lVar13 * 8) + 0x10) == param_1)) {
        return 1;
      }
      uVar16 = uVar16 + 1;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (iVar11 + 1) * uVar1;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar15;
      lVar13 = SUB168(auVar3 * auVar7,8);
      uVar10 = *(uint *)(*(long *)(this + 0x1d0) + lVar13 * 4);
      iVar11 = SUB164(auVar3 * auVar7,8);
    } while ((uVar10 != 0) &&
            (auVar4._8_8_ = 0, auVar4._0_8_ = uVar10 * uVar1, auVar8._8_8_ = 0,
            auVar8._0_8_ = uVar15, auVar5._8_8_ = 0,
            auVar5._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e8) * 4)
                            + iVar11) - SUB164(auVar4 * auVar8,8)) * uVar1, auVar9._8_8_ = 0,
            auVar9._0_8_ = uVar15, uVar16 <= SUB164(auVar5 * auVar9,8)));
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



/* HashMap<int, Ref<WebRTCMultiplayerPeer::ConnectedPeer>, HashMapHasherDefault,
   HashMapComparatorDefault<int>, DefaultTypedAllocator<HashMapElement<int,
   Ref<WebRTCMultiplayerPeer::ConnectedPeer> > > >::erase(int const&) [clone .isra.0] */

void __thiscall
HashMap<int,Ref<WebRTCMultiplayerPeer::ConnectedPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<WebRTCMultiplayerPeer::ConnectedPeer>>>>
::erase(HashMap<int,Ref<WebRTCMultiplayerPeer::ConnectedPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<WebRTCMultiplayerPeer::ConnectedPeer>>>>
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
  Object *pOVar10;
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
  char cVar29;
  uint uVar30;
  uint uVar31;
  ulong uVar32;
  ulong uVar33;
  uint uVar34;
  uint uVar35;
  long *plVar36;
  ulong uVar37;
  ulong uVar38;
  uint uVar39;
  uint *puVar40;
  ulong uVar41;
  
  lVar6 = *(long *)(this + 8);
  if ((lVar6 != 0) && (*(int *)(this + 0x2c) != 0)) {
    uVar35 = *param_1;
    uVar5 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar41 = CONCAT44(0,uVar5);
    uVar7 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar30 = (uVar35 >> 0x10 ^ uVar35) * -0x7a143595;
    uVar30 = (uVar30 ^ uVar30 >> 0xd) * -0x3d4d51cb;
    uVar34 = uVar30 ^ uVar30 >> 0x10;
    if (uVar30 == uVar30 >> 0x10) {
      uVar34 = 1;
      uVar32 = uVar7;
    }
    else {
      uVar32 = uVar34 * uVar7;
    }
    lVar8 = *(long *)(this + 0x10);
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar41;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar32;
    uVar32 = SUB168(auVar11 * auVar20,8);
    uVar30 = *(uint *)(lVar8 + uVar32 * 4);
    uVar37 = (ulong)SUB164(auVar11 * auVar20,8);
    if (uVar30 != 0) {
      uVar39 = 0;
      do {
        auVar14._8_8_ = 0;
        auVar14._0_8_ = ((int)uVar37 + 1) * uVar7;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar41;
        uVar33 = SUB168(auVar14 * auVar23,8);
        uVar31 = SUB164(auVar14 * auVar23,8);
        if ((uVar34 == uVar30) && (uVar35 == *(uint *)(*(long *)(lVar6 + uVar32 * 8) + 0x10))) {
          puVar40 = (uint *)(lVar8 + uVar33 * 4);
          uVar35 = *puVar40;
          if ((uVar35 != 0) &&
             (auVar15._8_8_ = 0, auVar15._0_8_ = uVar35 * uVar7, auVar24._8_8_ = 0,
             auVar24._0_8_ = uVar41, auVar16._8_8_ = 0,
             auVar16._0_8_ = ((uVar31 + uVar5) - SUB164(auVar15 * auVar24,8)) * uVar7,
             auVar25._8_8_ = 0, auVar25._0_8_ = uVar41, uVar32 = (ulong)uVar31, uVar38 = uVar37,
             SUB164(auVar16 * auVar25,8) != 0)) {
            while( true ) {
              uVar37 = uVar32;
              puVar1 = (uint *)(lVar8 + uVar38 * 4);
              *puVar40 = *puVar1;
              puVar2 = (undefined8 *)(lVar6 + uVar33 * 8);
              *puVar1 = uVar35;
              puVar3 = (undefined8 *)(lVar6 + uVar38 * 8);
              uVar9 = *puVar2;
              *puVar2 = *puVar3;
              *puVar3 = uVar9;
              auVar19._8_8_ = 0;
              auVar19._0_8_ = ((int)uVar37 + 1) * uVar7;
              auVar28._8_8_ = 0;
              auVar28._0_8_ = uVar41;
              uVar33 = SUB168(auVar19 * auVar28,8);
              puVar40 = (uint *)(lVar8 + uVar33 * 4);
              uVar35 = *puVar40;
              if ((uVar35 == 0) ||
                 (auVar17._8_8_ = 0, auVar17._0_8_ = uVar35 * uVar7, auVar26._8_8_ = 0,
                 auVar26._0_8_ = uVar41, auVar18._8_8_ = 0,
                 auVar18._0_8_ =
                      ((SUB164(auVar19 * auVar28,8) + uVar5) - SUB164(auVar17 * auVar26,8)) * uVar7,
                 auVar27._8_8_ = 0, auVar27._0_8_ = uVar41, SUB164(auVar18 * auVar27,8) == 0))
              break;
              uVar32 = uVar33 & 0xffffffff;
              uVar38 = uVar37;
            }
          }
          plVar4 = (long *)(lVar6 + uVar37 * 8);
          *(undefined4 *)(lVar8 + uVar37 * 4) = 0;
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
          if ((plVar36[3] != 0) && (cVar29 = RefCounted::unreference(), cVar29 != '\0')) {
            pOVar10 = (Object *)plVar36[3];
            cVar29 = predelete_handler(pOVar10);
            if (cVar29 != '\0') {
              (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
              Memory::free_static(pOVar10,false);
            }
          }
          Memory::free_static(plVar36,false);
          *(undefined8 *)(*(long *)(this + 8) + uVar37 * 8) = 0;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + -1;
          return;
        }
        uVar30 = *(uint *)(lVar8 + uVar33 * 4);
        uVar37 = uVar33 & 0xffffffff;
        uVar39 = uVar39 + 1;
      } while ((uVar30 != 0) &&
              (auVar12._8_8_ = 0, auVar12._0_8_ = uVar30 * uVar7, auVar21._8_8_ = 0,
              auVar21._0_8_ = uVar41, auVar13._8_8_ = 0,
              auVar13._0_8_ = ((uVar5 + uVar31) - SUB164(auVar12 * auVar21,8)) * uVar7,
              auVar22._8_8_ = 0, auVar22._0_8_ = uVar41, uVar32 = uVar33,
              uVar39 <= SUB164(auVar13 * auVar22,8)));
    }
  }
  return;
}



/* WebRTCMultiplayerPeer::_find_next_peer() */

void __thiscall WebRTCMultiplayerPeer::_find_next_peer(WebRTCMultiplayerPeer *this)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  undefined8 *puVar20;
  uint uVar21;
  int iVar22;
  ulong uVar23;
  undefined8 *puVar24;
  
  lVar2 = *(long *)(this + 0x1c8);
  uVar1 = *(uint *)(this + 0x1b4);
  if ((lVar2 != 0) && (*(int *)(this + 0x1ec) != 0)) {
    uVar23 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e8) * 4));
    uVar3 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1e8) * 8);
    uVar13 = (uVar1 >> 0x10 ^ uVar1) * -0x7a143595;
    uVar13 = (uVar13 ^ uVar13 >> 0xd) * -0x3d4d51cb;
    uVar19 = uVar13 ^ uVar13 >> 0x10;
    if (uVar13 == uVar13 >> 0x10) {
      uVar19 = 1;
      uVar17 = uVar3;
    }
    else {
      uVar17 = uVar19 * uVar3;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar23;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar17;
    lVar18 = SUB168(auVar5 * auVar9,8);
    uVar13 = *(uint *)(*(long *)(this + 0x1d0) + lVar18 * 4);
    uVar16 = SUB164(auVar5 * auVar9,8);
    if (uVar13 != 0) {
      uVar21 = 0;
      while ((uVar19 != uVar13 || (uVar1 != *(uint *)(*(long *)(lVar2 + lVar18 * 8) + 0x10)))) {
        uVar21 = uVar21 + 1;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (uVar16 + 1) * uVar3;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar23;
        lVar18 = SUB168(auVar6 * auVar10,8);
        uVar13 = *(uint *)(*(long *)(this + 0x1d0) + lVar18 * 4);
        uVar16 = SUB164(auVar6 * auVar10,8);
        if ((uVar13 == 0) ||
           (auVar7._8_8_ = 0, auVar7._0_8_ = uVar13 * uVar3, auVar11._8_8_ = 0,
           auVar11._0_8_ = uVar23, auVar8._8_8_ = 0,
           auVar8._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e8) * 4) +
                           uVar16) - SUB164(auVar7 * auVar11,8)) * uVar3, auVar12._8_8_ = 0,
           auVar12._0_8_ = uVar23, SUB164(auVar8 * auVar12,8) < uVar21)) goto LAB_00100da0;
      }
      puVar24 = *(undefined8 **)(lVar2 + (ulong)uVar16 * 8);
      if (puVar24 != (undefined8 *)0x0) {
        for (puVar24 = (undefined8 *)*puVar24; puVar24 != (undefined8 *)0x0;
            puVar24 = (undefined8 *)*puVar24) {
          if (((*(char *)(puVar24[3] + 400) != '\0') &&
              (plVar4 = *(long **)(puVar24[3] + 0x188), plVar4 != (long *)0x0)) &&
             (puVar20 = (undefined8 *)*plVar4, puVar20 != (undefined8 *)0x0)) {
            iVar22 = 0;
            do {
              iVar14 = (**(code **)(*(long *)*puVar20 + 0x150))();
              if (iVar14 != 0) goto LAB_00100d7d;
              puVar20 = (undefined8 *)puVar20[1];
              iVar22 = iVar22 + 1;
            } while (puVar20 != (undefined8 *)0x0);
          }
        }
      }
    }
  }
LAB_00100da0:
  for (puVar24 = *(undefined8 **)(this + 0x1d8); puVar24 != (undefined8 *)0x0;
      puVar24 = (undefined8 *)*puVar24) {
    while (*(char *)(puVar24[3] + 400) != '\0') {
      plVar4 = *(long **)(puVar24[3] + 0x188);
      if ((plVar4 != (long *)0x0) && (puVar20 = (undefined8 *)*plVar4, puVar20 != (undefined8 *)0x0)
         ) {
        iVar22 = 0;
        do {
          iVar14 = (**(code **)(*(long *)*puVar20 + 0x150))();
          if (iVar14 != 0) goto LAB_00100d7d;
          puVar20 = (undefined8 *)puVar20[1];
          iVar22 = iVar22 + 1;
        } while (puVar20 != (undefined8 *)0x0);
      }
      if ((*(int *)(puVar24 + 2) == *(int *)(this + 0x1b4)) ||
         (puVar24 = (undefined8 *)*puVar24, puVar24 == (undefined8 *)0x0)) goto LAB_00100dc2;
    }
  }
LAB_00100dc2:
  *(undefined4 *)(this + 0x1b8) = 0;
  uVar15 = 0;
LAB_00100d88:
  *(undefined4 *)(this + 0x1b4) = uVar15;
  return;
LAB_00100d7d:
  *(int *)(this + 0x1b8) = iVar22;
  uVar15 = *(undefined4 *)(puVar24 + 2);
  goto LAB_00100d88;
}



/* WebRTCMultiplayerPeer::_peer_to_dict(Ref<WebRTCMultiplayerPeer::ConnectedPeer>, Dictionary&) */

void __thiscall
WebRTCMultiplayerPeer::_peer_to_dict(undefined8 param_1,long *param_2,Variant *param_3)

{
  char cVar1;
  long lVar2;
  Variant *pVVar3;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  Array local_80 [8];
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Array::Array(local_80);
  lVar2 = *param_2;
  if (*(long **)(lVar2 + 0x188) != (long *)0x0) {
    puVar4 = (undefined8 *)**(long **)(lVar2 + 0x188);
    if (puVar4 != (undefined8 *)0x0) {
      do {
        Variant::Variant((Variant *)local_58,(Object *)*puVar4);
        Array::push_back((Variant *)local_80);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        puVar4 = (undefined8 *)puVar4[1];
      } while (puVar4 != (undefined8 *)0x0);
      lVar2 = *param_2;
    }
  }
  Variant::Variant((Variant *)local_58,*(Object **)(lVar2 + 0x180));
  Variant::Variant((Variant *)local_78,"connection");
  pVVar3 = (Variant *)Dictionary::operator[](param_3);
  if (pVVar3 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
      Variant::_clear_internal();
    }
    *(int *)pVVar3 = 0;
    *(int *)pVVar3 = local_58[0];
    *(undefined8 *)(pVVar3 + 8) = local_50;
    *(undefined8 *)(pVVar3 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,*(bool *)(*param_2 + 400));
  Variant::Variant((Variant *)local_78,"connected");
  pVVar3 = (Variant *)Dictionary::operator[](param_3);
  if (pVVar3 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
      Variant::_clear_internal();
    }
    *(int *)pVVar3 = 0;
    *(int *)pVVar3 = local_58[0];
    *(undefined8 *)(pVVar3 + 8) = local_50;
    *(undefined8 *)(pVVar3 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,local_80);
  Variant::Variant((Variant *)local_78,"channels");
  pVVar3 = (Variant *)Dictionary::operator[](param_3);
  if (pVVar3 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
      Variant::_clear_internal();
    }
    *(int *)pVVar3 = 0;
    *(int *)pVVar3 = local_58[0];
    *(undefined8 *)(pVVar3 + 8) = local_50;
    *(undefined8 *)(pVVar3 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Array::~Array(local_80);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WebRTCMultiplayerPeer::get_peers() */

Dictionary * WebRTCMultiplayerPeer::get_peers(void)

{
  Object *pOVar1;
  char cVar2;
  Variant *pVVar3;
  long *plVar4;
  WebRTCMultiplayerPeer *in_RSI;
  Dictionary *in_RDI;
  long in_FS_OFFSET;
  Dictionary local_88 [8];
  Object *local_80;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(in_RDI);
  plVar4 = *(long **)(in_RSI + 0x1d8);
  if (plVar4 != (long *)0x0) {
    do {
      Dictionary::Dictionary(local_88);
      pOVar1 = (Object *)plVar4[3];
      if ((pOVar1 == (Object *)0x0) ||
         (local_80 = pOVar1, cVar2 = RefCounted::reference(), cVar2 == '\0')) {
        local_80 = (Object *)0x0;
        _peer_to_dict(in_RSI,&local_80,local_88);
      }
      else {
        _peer_to_dict(in_RSI,&local_80,local_88);
        cVar2 = RefCounted::unreference();
        if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
      Variant::Variant((Variant *)local_58,local_88);
      Variant::Variant((Variant *)local_78,(int)plVar4[2]);
      pVVar3 = (Variant *)Dictionary::operator[]((Variant *)in_RDI);
      if (pVVar3 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar3 = 0;
        *(int *)pVVar3 = local_58[0];
        local_58[0] = 0;
        *(undefined8 *)(pVVar3 + 8) = local_50;
        *(undefined8 *)(pVVar3 + 0x10) = uStack_48;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Dictionary::~Dictionary(local_88);
      plVar4 = (long *)*plVar4;
    } while (plVar4 != (long *)0x0);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return in_RDI;
}



/* WebRTCMultiplayerPeer::get_peer(int) */

Dictionary * WebRTCMultiplayerPeer::get_peer(int param_1)

{
  ulong uVar1;
  Object *pOVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  char cVar11;
  uint uVar12;
  undefined8 *puVar13;
  uint in_EDX;
  int iVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  long in_RSI;
  undefined4 in_register_0000003c;
  Dictionary *this;
  ulong uVar18;
  uint uVar19;
  long in_FS_OFFSET;
  int local_5c [3];
  Dictionary local_50 [8];
  Object *local_48;
  long local_40;
  
  this = (Dictionary *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(in_RSI + 0x1c8) != 0) && (*(int *)(in_RSI + 0x1ec) != 0)) {
    uVar1 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 0x1e8) * 8);
    uVar12 = (in_EDX >> 0x10 ^ in_EDX) * -0x7a143595;
    uVar12 = (uVar12 ^ uVar12 >> 0xd) * -0x3d4d51cb;
    uVar17 = uVar12 ^ uVar12 >> 0x10;
    if (uVar12 == uVar12 >> 0x10) {
      uVar17 = 1;
      uVar15 = uVar1;
    }
    else {
      uVar15 = uVar17 * uVar1;
    }
    uVar18 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x1e8) * 4));
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar18;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar15;
    lVar16 = SUB168(auVar3 * auVar7,8);
    uVar12 = *(uint *)(*(long *)(in_RSI + 0x1d0) + lVar16 * 4);
    iVar14 = SUB164(auVar3 * auVar7,8);
    if (uVar12 != 0) {
      uVar19 = 0;
      do {
        if ((uVar17 == uVar12) &&
           (in_EDX == *(uint *)(*(long *)(*(long *)(in_RSI + 0x1c8) + lVar16 * 8) + 0x10))) {
          Dictionary::Dictionary(local_50);
          puVar13 = (undefined8 *)
                    HashMap<int,Ref<WebRTCMultiplayerPeer::ConnectedPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<WebRTCMultiplayerPeer::ConnectedPeer>>>>
                    ::operator[]((HashMap<int,Ref<WebRTCMultiplayerPeer::ConnectedPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<WebRTCMultiplayerPeer::ConnectedPeer>>>>
                                  *)(in_RSI + 0x1c0),local_5c);
          pOVar2 = (Object *)*puVar13;
          if ((pOVar2 == (Object *)0x0) ||
             (local_48 = pOVar2, cVar11 = RefCounted::reference(), cVar11 == '\0')) {
            local_48 = (Object *)0x0;
            _peer_to_dict();
          }
          else {
            _peer_to_dict();
            cVar11 = RefCounted::unreference();
            if ((cVar11 != '\0') && (cVar11 = predelete_handler(pOVar2), cVar11 != '\0')) {
              (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
              Memory::free_static(pOVar2,false);
            }
          }
          Dictionary::Dictionary(this,local_50);
          Dictionary::~Dictionary(local_50);
          goto LAB_00101531;
        }
        uVar19 = uVar19 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (iVar14 + 1) * uVar1;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar18;
        lVar16 = SUB168(auVar4 * auVar8,8);
        uVar12 = *(uint *)(*(long *)(in_RSI + 0x1d0) + lVar16 * 4);
        iVar14 = SUB164(auVar4 * auVar8,8);
      } while ((uVar12 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = uVar12 * uVar1, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar18, auVar6._8_8_ = 0,
              auVar6._0_8_ = ((*(uint *)(hash_table_size_primes +
                                        (ulong)*(uint *)(in_RSI + 0x1e8) * 4) + iVar14) -
                             SUB164(auVar5 * auVar9,8)) * uVar1, auVar10._8_8_ = 0,
              auVar10._0_8_ = uVar18, uVar19 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  _err_print_error("get_peer","modules/webrtc/webrtc_multiplayer_peer.cpp",0x110,
                   "Condition \"!peer_map.has(p_peer_id)\" is true. Returning: Dictionary()",0,0);
  Dictionary::Dictionary(this);
LAB_00101531:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* WebRTCMultiplayerPeer::remove_peer(int) */

void __thiscall WebRTCMultiplayerPeer::remove_peer(WebRTCMultiplayerPeer *this,int param_1)

{
  HashMap<int,Ref<WebRTCMultiplayerPeer::ConnectedPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<WebRTCMultiplayerPeer::ConnectedPeer>>>>
  *this_00;
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  char cVar10;
  uint uVar11;
  int iVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  HashMap<int,Ref<WebRTCMultiplayerPeer::ConnectedPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<WebRTCMultiplayerPeer::ConnectedPeer>>>>
  *pHVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  Object *pOVar20;
  long in_FS_OFFSET;
  int local_8c;
  Variant *local_88 [2];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (HashMap<int,Ref<WebRTCMultiplayerPeer::ConnectedPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<WebRTCMultiplayerPeer::ConnectedPeer>>>>
             *)(this + 0x1c0);
  local_8c = param_1;
  if ((*(long *)(this + 0x1c8) != 0) && (*(int *)(this + 0x1ec) != 0)) {
    uVar1 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1e8) * 8);
    uVar11 = ((uint)param_1 >> 0x10 ^ param_1) * -0x7a143595;
    uVar11 = (uVar11 ^ uVar11 >> 0xd) * -0x3d4d51cb;
    uVar19 = uVar11 ^ uVar11 >> 0x10;
    if (uVar11 == uVar11 >> 0x10) {
      uVar19 = 1;
      uVar14 = uVar1;
    }
    else {
      uVar14 = uVar19 * uVar1;
    }
    uVar17 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e8) * 4));
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar17;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar14;
    lVar15 = SUB168(auVar2 * auVar6,8);
    uVar11 = *(uint *)(*(long *)(this + 0x1d0) + lVar15 * 4);
    iVar12 = SUB164(auVar2 * auVar6,8);
    if (uVar11 != 0) {
      uVar18 = 0;
      do {
        if ((uVar19 == uVar11) &&
           (param_1 == *(int *)(*(long *)(*(long *)(this + 0x1c8) + lVar15 * 8) + 0x10))) {
          pHVar16 = this_00;
          plVar13 = (long *)HashMap<int,Ref<WebRTCMultiplayerPeer::ConnectedPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<WebRTCMultiplayerPeer::ConnectedPeer>>>>
                            ::operator[](this_00,&local_8c);
          pOVar20 = (Object *)*plVar13;
          if (pOVar20 == (Object *)0x0) {
            remove_peer((int)pHVar16);
            return;
          }
          cVar10 = RefCounted::reference();
          if (cVar10 == '\0') {
            pOVar20 = (Object *)0x0;
          }
          HashMap<int,Ref<WebRTCMultiplayerPeer::ConnectedPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<WebRTCMultiplayerPeer::ConnectedPeer>>>>
          ::erase(this_00,&local_8c);
          if (pOVar20[400] != (Object)0x0) {
            pOVar20[400] = (Object)0x0;
            if (remove_peer(int)::{lambda()#1}::operator()()::sname == '\0') {
              iVar12 = __cxa_guard_acquire(&remove_peer(int)::{lambda()#1}::operator()()::sname);
              if (iVar12 != 0) {
                _scs_create((char *)&remove_peer(int)::{lambda()#1}::operator()()::sname,true);
                __cxa_atexit(StringName::~StringName,
                             &remove_peer(int)::{lambda()#1}::operator()()::sname,&__dso_handle);
                __cxa_guard_release(&remove_peer(int)::{lambda()#1}::operator()()::sname);
              }
            }
            Variant::Variant((Variant *)local_78,param_1);
            local_60 = 0;
            local_58 = (undefined1  [16])0x0;
            local_88[0] = (Variant *)local_78;
            (**(code **)(*(long *)this + 0xd0))
                      (this,&remove_peer(int)::{lambda()#1}::operator()()::sname,local_88,1);
            if (Variant::needs_deinit[(int)local_60] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_78[0]] != '\0') {
              Variant::_clear_internal();
            }
            if ((*(int *)(this + 0x1bc) == 2) && (param_1 == 1)) {
              *(undefined4 *)(this + 0x1b0) = 0;
            }
          }
          cVar10 = RefCounted::unreference();
          if (cVar10 != '\0') {
            cVar10 = predelete_handler(pOVar20);
            if (cVar10 != '\0') {
              (**(code **)(*(long *)pOVar20 + 0x140))(pOVar20);
              Memory::free_static(pOVar20,false);
            }
          }
          goto LAB_0010175f;
        }
        uVar18 = uVar18 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (iVar12 + 1) * uVar1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar17;
        lVar15 = SUB168(auVar3 * auVar7,8);
        uVar11 = *(uint *)(*(long *)(this + 0x1d0) + lVar15 * 4);
        iVar12 = SUB164(auVar3 * auVar7,8);
      } while ((uVar11 != 0) &&
              (auVar4._8_8_ = 0, auVar4._0_8_ = uVar11 * uVar1, auVar8._8_8_ = 0,
              auVar8._0_8_ = uVar17, auVar5._8_8_ = 0,
              auVar5._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e8) * 4
                                        ) + iVar12) - SUB164(auVar4 * auVar8,8)) * uVar1,
              auVar9._8_8_ = 0, auVar9._0_8_ = uVar17, uVar18 <= SUB164(auVar5 * auVar9,8)));
    }
  }
  _err_print_error("remove_peer","modules/webrtc/webrtc_multiplayer_peer.cpp",0x14d,
                   "Condition \"!peer_map.has(p_peer_id)\" is true.",0,0);
LAB_0010175f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WebRTCMultiplayerPeer::poll() */

void __thiscall WebRTCMultiplayerPeer::poll(WebRTCMultiplayerPeer *this)

{
  undefined1 (*pauVar1) [16];
  Object *pOVar2;
  int *piVar3;
  void *pvVar4;
  long lVar5;
  code *pcVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  long *plVar12;
  long lVar13;
  undefined1 (*pauVar14) [16];
  Object *pOVar15;
  long *plVar16;
  undefined8 *puVar17;
  long in_FS_OFFSET;
  undefined1 (*local_a0) [16];
  int local_98;
  Variant *local_88 [2];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0x1ec) != 0) {
    plVar16 = *(long **)(this + 0x1d8);
    if (plVar16 == (long *)0x0) {
      pauVar14 = (undefined1 (*) [16])0x0;
LAB_00101e31:
      local_a0 = (undefined1 (*) [16])0x0;
    }
    else {
      local_a0 = (undefined1 (*) [16])0x0;
      pauVar14 = (undefined1 (*) [16])0x0;
LAB_00101985:
      do {
        pOVar15 = (Object *)plVar16[3];
        if (pOVar15 == (Object *)0x0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        cVar7 = RefCounted::reference();
        if (cVar7 == '\0') {
          pOVar15 = (Object *)0x0;
        }
        (**(code **)(**(long **)(pOVar15 + 0x180) + 0x198))();
        uVar8 = (**(code **)(**(long **)(pOVar15 + 0x180) + 0x150))();
        if (1 < uVar8) {
          if (uVar8 == 2) {
            plVar12 = *(long **)(pOVar15 + 0x188);
            if (plVar12 != (long *)0x0) {
              puVar17 = (undefined8 *)*plVar12;
              iVar10 = 0;
              local_98 = 0;
              if (puVar17 != (undefined8 *)0x0) {
                do {
                  pOVar2 = (Object *)*puVar17;
                  if (pOVar2 == (Object *)0x0) {
LAB_00101a9f:
                    plVar12 = *(long **)(pOVar15 + 0x188);
                    local_98 = iVar10;
                    goto joined_r0x00101aa9;
                  }
                  cVar7 = RefCounted::reference();
                  if (cVar7 == '\0') {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)invalidInstructionException();
                    (*pcVar6)();
                  }
                  iVar9 = (**(code **)(*(long *)pOVar2 + 0x1a8))(pOVar2);
                  if (iVar9 != 0) {
                    if (iVar9 != 1) {
                      if (pauVar14 == (undefined1 (*) [16])0x0) {
                        pauVar14 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
                        *(undefined4 *)pauVar14[1] = 0;
                        *pauVar14 = (undefined1  [16])0x0;
                      }
                      puVar11 = (undefined4 *)operator_new(0x20,DefaultAllocator::alloc);
                      lVar13 = plVar16[2];
                      *(undefined8 *)(puVar11 + 2) = 0;
                      *puVar11 = (int)lVar13;
                      lVar13 = *(long *)(*pauVar14 + 8);
                      *(undefined1 (**) [16])(puVar11 + 6) = pauVar14;
                      *(long *)(puVar11 + 4) = lVar13;
                      if (lVar13 != 0) {
                        *(undefined4 **)(lVar13 + 8) = puVar11;
                      }
                      lVar13 = *(long *)*pauVar14;
                      iVar9 = *(int *)pauVar14[1];
                      *(undefined4 **)(*pauVar14 + 8) = puVar11;
                      if (lVar13 == 0) {
                        *(undefined4 **)*pauVar14 = puVar11;
                      }
                      *(int *)pauVar14[1] = iVar9 + 1;
                      cVar7 = RefCounted::unreference();
                      if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar2), cVar7 != '\0')) {
                        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                        Memory::free_static(pOVar2,false);
                      }
                      goto LAB_00101a9f;
                    }
                    iVar10 = iVar10 + 1;
                  }
                  cVar7 = RefCounted::unreference();
                  if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar2), cVar7 != '\0')) {
                    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                    Memory::free_static(pOVar2,false);
                  }
                  puVar17 = (undefined8 *)puVar17[1];
                } while (puVar17 != (undefined8 *)0x0);
                plVar12 = *(long **)(pOVar15 + 0x188);
                local_98 = iVar10;
joined_r0x00101aa9:
                if (plVar12 == (long *)0x0) {
                  if (local_98 != 0) goto LAB_00101ac0;
                  goto LAB_00101cf0;
                }
              }
              if ((int)plVar12[2] != local_98) goto LAB_00101ac0;
            }
LAB_00101cf0:
            if (pOVar15[400] == (Object)0x0) {
              pOVar15[400] = (Object)0x1;
              if (local_a0 == (undefined1 (*) [16])0x0) {
                local_a0 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
                *(undefined4 *)local_a0[1] = 0;
                *local_a0 = (undefined1  [16])0x0;
              }
              puVar11 = (undefined4 *)operator_new(0x20,DefaultAllocator::alloc);
              lVar13 = plVar16[2];
              *(undefined8 *)(puVar11 + 2) = 0;
              *puVar11 = (int)lVar13;
              lVar13 = *(long *)(*local_a0 + 8);
              *(undefined1 (**) [16])(puVar11 + 6) = local_a0;
              *(long *)(puVar11 + 4) = lVar13;
              if (lVar13 != 0) {
                *(undefined4 **)(lVar13 + 8) = puVar11;
              }
              lVar13 = *(long *)*local_a0;
              *(undefined4 **)(*local_a0 + 8) = puVar11;
              if (lVar13 == 0) {
                *(undefined4 **)*local_a0 = puVar11;
              }
              *(int *)local_a0[1] = *(int *)local_a0[1] + 1;
            }
          }
          else {
            if (pauVar14 == (undefined1 (*) [16])0x0) {
              pauVar14 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
              *(undefined4 *)pauVar14[1] = 0;
              *pauVar14 = (undefined1  [16])0x0;
            }
            puVar11 = (undefined4 *)operator_new(0x20,DefaultAllocator::alloc);
            lVar13 = plVar16[2];
            *(undefined8 *)(puVar11 + 2) = 0;
            *puVar11 = (int)lVar13;
            lVar13 = *(long *)(*pauVar14 + 8);
            *(undefined1 (**) [16])(puVar11 + 6) = pauVar14;
            *(long *)(puVar11 + 4) = lVar13;
            if (lVar13 != 0) {
              *(undefined4 **)(lVar13 + 8) = puVar11;
            }
            lVar13 = *(long *)*pauVar14;
            *(undefined4 **)(*pauVar14 + 8) = puVar11;
            if (lVar13 == 0) {
              *(undefined4 **)*pauVar14 = puVar11;
            }
            *(int *)pauVar14[1] = *(int *)pauVar14[1] + 1;
          }
        }
LAB_00101ac0:
        cVar7 = RefCounted::unreference();
        if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar15), cVar7 != '\0')) {
          (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
          Memory::free_static(pOVar15,false);
          plVar16 = (long *)*plVar16;
          if (plVar16 == (long *)0x0) break;
          goto LAB_00101985;
        }
        plVar16 = (long *)*plVar16;
      } while (plVar16 != (long *)0x0);
      if (pauVar14 != (undefined1 (*) [16])0x0) {
        for (piVar3 = *(int **)*pauVar14; piVar3 != (int *)0x0; piVar3 = *(int **)(piVar3 + 2)) {
          remove_peer(this,*piVar3);
          if (*(int *)(this + 0x1b4) == *piVar3) {
            *(undefined4 *)(this + 0x1b4) = 0;
          }
        }
      }
      if (local_a0 == (undefined1 (*) [16])0x0) goto LAB_00101e31;
      for (piVar3 = *(int **)*local_a0; piVar3 != (int *)0x0; piVar3 = *(int **)(piVar3 + 2)) {
        iVar10 = *piVar3;
        if (*(int *)(this + 0x1bc) == 2) {
          if (iVar10 == 1) {
            *(undefined4 *)(this + 0x1b0) = 2;
            if ((poll()::{lambda()#1}::operator()()::sname == '\0') &&
               (iVar10 = __cxa_guard_acquire(&poll()::{lambda()#1}::operator()()::sname),
               iVar10 != 0)) {
              _scs_create((char *)&poll()::{lambda()#1}::operator()()::sname,true);
              __cxa_atexit(StringName::~StringName,&poll()::{lambda()#1}::operator()()::sname,
                           &__dso_handle);
              __cxa_guard_release(&poll()::{lambda()#1}::operator()()::sname);
            }
            puVar17 = &poll()::{lambda()#1}::operator()()::sname;
            iVar10 = 1;
            goto LAB_00101ba3;
          }
          _err_print_error(&_LC33,"modules/webrtc/webrtc_multiplayer_peer.cpp",0x7c,
                           "Condition \"E != TARGET_PEER_SERVER\" is true. Continuing.",0,0);
        }
        else {
          if ((poll()::{lambda()#2}::operator()()::sname == '\0') &&
             (iVar9 = __cxa_guard_acquire(&poll()::{lambda()#2}::operator()()::sname), iVar9 != 0))
          {
            _scs_create((char *)&poll()::{lambda()#2}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,&poll()::{lambda()#2}::operator()()::sname,
                         &__dso_handle);
            __cxa_guard_release(&poll()::{lambda()#2}::operator()()::sname);
          }
          puVar17 = &poll()::{lambda()#2}::operator()()::sname;
LAB_00101ba3:
          Variant::Variant((Variant *)local_78,iVar10);
          local_60 = 0;
          local_58 = (undefined1  [16])0x0;
          local_88[0] = (Variant *)local_78;
          (**(code **)(*(long *)this + 0xd0))(this,puVar17,local_88,1);
          if (Variant::needs_deinit[(int)local_60] == '\0') {
            cVar7 = Variant::needs_deinit[local_78[0]];
          }
          else {
            Variant::_clear_internal();
            cVar7 = Variant::needs_deinit[local_78[0]];
          }
          if (cVar7 != '\0') {
            Variant::_clear_internal();
          }
        }
      }
    }
    if (*(int *)(this + 0x1b4) == 0) {
      _find_next_peer(this);
    }
    if (local_a0 != (undefined1 (*) [16])0x0) {
      do {
        while( true ) {
          pvVar4 = *(void **)*local_a0;
          if (pvVar4 == (void *)0x0) {
            if (*(int *)local_a0[1] != 0) {
              _err_print_error("~List","./core/templates/list.h",0x316,
                               "Condition \"_data->size_cache\" is true.",0,0);
              goto LAB_00101ecd;
            }
            goto LAB_00101ec1;
          }
          if (*(undefined1 (**) [16])((long)pvVar4 + 0x18) != local_a0) break;
          lVar13 = *(long *)((long)pvVar4 + 8);
          lVar5 = *(long *)((long)pvVar4 + 0x10);
          *(long *)*local_a0 = lVar13;
          if (pvVar4 == *(void **)(*local_a0 + 8)) {
            *(long *)(*local_a0 + 8) = lVar5;
          }
          if (lVar5 != 0) {
            *(long *)(lVar5 + 8) = lVar13;
            lVar13 = *(long *)((long)pvVar4 + 8);
          }
          if (lVar13 != 0) {
            *(long *)(lVar13 + 0x10) = lVar5;
          }
          Memory::free_static(pvVar4,false);
          iVar10 = *(int *)local_a0[1] + -1;
          *(int *)local_a0[1] = iVar10;
          if (iVar10 == 0) goto LAB_00101ec1;
        }
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      } while (*(int *)local_a0[1] != 0);
LAB_00101ec1:
      Memory::free_static(local_a0,false);
    }
LAB_00101ecd:
    if (pauVar14 != (undefined1 (*) [16])0x0) {
      do {
        while( true ) {
          pvVar4 = *(void **)*pauVar14;
          if (pvVar4 == (void *)0x0) {
            if (*(int *)pauVar14[1] != 0) {
              if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                _err_print_error("~List","./core/templates/list.h",0x316,
                                 "Condition \"_data->size_cache\" is true.",0,0);
                return;
              }
              goto LAB_0010222f;
            }
            goto LAB_00101f29;
          }
          if (*(undefined1 (**) [16])((long)pvVar4 + 0x18) != pauVar14) break;
          lVar13 = *(long *)((long)pvVar4 + 8);
          lVar5 = *(long *)((long)pvVar4 + 0x10);
          *(long *)*pauVar14 = lVar13;
          if (pvVar4 == *(void **)(*pauVar14 + 8)) {
            *(long *)(*pauVar14 + 8) = lVar5;
          }
          if (lVar5 != 0) {
            *(long *)(lVar5 + 8) = lVar13;
            lVar13 = *(long *)((long)pvVar4 + 8);
          }
          if (lVar13 != 0) {
            *(long *)(lVar13 + 0x10) = lVar5;
          }
          Memory::free_static(pvVar4,false);
          pauVar1 = pauVar14 + 1;
          *(int *)*pauVar1 = *(int *)*pauVar1 + -1;
          if (*(int *)*pauVar1 == 0) goto LAB_00101f29;
        }
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      } while (*(int *)pauVar14[1] != 0);
LAB_00101f29:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pauVar14,false);
        return;
      }
      goto LAB_0010222f;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010222f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WebRTCMultiplayerPeer::disconnect_peer(int, bool) */

void __thiscall
WebRTCMultiplayerPeer::disconnect_peer(WebRTCMultiplayerPeer *this,int param_1,bool param_2)

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
  long *plVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  int local_3c [3];
  
  local_3c[0] = param_1;
  if ((*(long *)(this + 0x1c8) != 0) && (*(int *)(this + 0x1ec) != 0)) {
    uVar1 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1e8) * 8);
    uVar10 = ((uint)param_1 >> 0x10 ^ param_1) * -0x7a143595;
    uVar10 = (uVar10 ^ uVar10 >> 0xd) * -0x3d4d51cb;
    uVar15 = uVar10 ^ uVar10 >> 0x10;
    if (uVar10 == uVar10 >> 0x10) {
      uVar15 = 1;
      uVar13 = uVar1;
    }
    else {
      uVar13 = uVar15 * uVar1;
    }
    uVar16 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e8) * 4));
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar16;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar13;
    lVar14 = SUB168(auVar2 * auVar6,8);
    uVar10 = *(uint *)(*(long *)(this + 0x1d0) + lVar14 * 4);
    iVar12 = SUB164(auVar2 * auVar6,8);
    if (uVar10 != 0) {
      uVar17 = 0;
      do {
        if ((uVar15 == uVar10) &&
           (param_1 == *(int *)(*(long *)(*(long *)(this + 0x1c8) + lVar14 * 8) + 0x10))) {
          if (param_2) {
            HashMap<int,Ref<WebRTCMultiplayerPeer::ConnectedPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<WebRTCMultiplayerPeer::ConnectedPeer>>>>
            ::erase((HashMap<int,Ref<WebRTCMultiplayerPeer::ConnectedPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<WebRTCMultiplayerPeer::ConnectedPeer>>>>
                     *)(this + 0x1c0),local_3c);
            if ((*(int *)(this + 0x1bc) == 2) && (param_1 == 1)) {
              *(undefined4 *)(this + 0x1b0) = 0;
            }
            return;
          }
          plVar11 = (long *)HashMap<int,Ref<WebRTCMultiplayerPeer::ConnectedPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<WebRTCMultiplayerPeer::ConnectedPeer>>>>
                            ::operator[]((HashMap<int,Ref<WebRTCMultiplayerPeer::ConnectedPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<WebRTCMultiplayerPeer::ConnectedPeer>>>>
                                          *)(this + 0x1c0),local_3c);
          (**(code **)(**(long **)(*plVar11 + 0x180) + 0x1a0))();
          return;
        }
        uVar17 = uVar17 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (iVar12 + 1) * uVar1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar16;
        lVar14 = SUB168(auVar3 * auVar7,8);
        uVar10 = *(uint *)(*(long *)(this + 0x1d0) + lVar14 * 4);
        iVar12 = SUB164(auVar3 * auVar7,8);
      } while ((uVar10 != 0) &&
              (auVar4._8_8_ = 0, auVar4._0_8_ = uVar10 * uVar1, auVar8._8_8_ = 0,
              auVar8._0_8_ = uVar16, auVar5._8_8_ = 0,
              auVar5._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e8) * 4
                                        ) + iVar12) - SUB164(auVar4 * auVar8,8)) * uVar1,
              auVar9._8_8_ = 0, auVar9._0_8_ = uVar16, uVar17 <= SUB164(auVar5 * auVar9,8)));
    }
  }
  _err_print_error("disconnect_peer","modules/webrtc/webrtc_multiplayer_peer.cpp",0x15a,
                   "Condition \"!peer_map.has(p_peer_id)\" is true.",0,0);
  return;
}



/* WebRTCMultiplayerPeer::get_packet(unsigned char const**, int&) */

undefined4 __thiscall
WebRTCMultiplayerPeer::get_packet(WebRTCMultiplayerPeer *this,uchar **param_1,int *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  
  uVar1 = *(uint *)(this + 0x1b4);
  if (((uVar1 != 0) && (*(long *)(this + 0x1c8) != 0)) && (*(int *)(this + 0x1ec) != 0)) {
    uVar2 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1e8) * 8);
    uVar12 = (uVar1 >> 0x10 ^ uVar1) * -0x7a143595;
    uVar12 = (uVar12 ^ uVar12 >> 0xd) * -0x3d4d51cb;
    uVar18 = uVar12 ^ uVar12 >> 0x10;
    if (uVar12 == uVar12 >> 0x10) {
      uVar18 = 1;
      uVar16 = uVar2;
    }
    else {
      uVar16 = uVar18 * uVar2;
    }
    uVar19 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e8) * 4));
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar19;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar16;
    lVar17 = SUB168(auVar4 * auVar8,8);
    uVar12 = *(uint *)(*(long *)(this + 0x1d0) + lVar17 * 4);
    iVar13 = SUB164(auVar4 * auVar8,8);
    if (uVar12 != 0) {
      uVar20 = 0;
      do {
        if ((uVar18 == uVar12) &&
           (uVar1 == *(uint *)(*(long *)(*(long *)(this + 0x1c8) + lVar17 * 8) + 0x10))) {
          plVar15 = (long *)HashMap<int,Ref<WebRTCMultiplayerPeer::ConnectedPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<WebRTCMultiplayerPeer::ConnectedPeer>>>>
                            ::operator[]((HashMap<int,Ref<WebRTCMultiplayerPeer::ConnectedPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<WebRTCMultiplayerPeer::ConnectedPeer>>>>
                                          *)(this + 0x1c0),(int *)(this + 0x1b4));
          if (*(undefined8 **)(*plVar15 + 0x188) != (undefined8 *)0x0) {
            for (puVar3 = (undefined8 *)**(undefined8 **)(*plVar15 + 0x188);
                puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)puVar3[1]) {
              iVar13 = (**(code **)(*(long *)*puVar3 + 0x150))();
              if (iVar13 != 0) {
                uVar14 = (**(code **)(*(long *)*puVar3 + 0x158))((long *)*puVar3,param_1,param_2);
                _find_next_peer(this);
                return uVar14;
              }
            }
          }
          _find_next_peer(this);
          _err_print_error("get_packet","modules/webrtc/webrtc_multiplayer_peer.cpp",0x174,
                           "Method/function failed. Returning: ERR_BUG",0,0);
          return 0x2f;
        }
        uVar20 = uVar20 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (iVar13 + 1) * uVar2;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar19;
        lVar17 = SUB168(auVar5 * auVar9,8);
        uVar12 = *(uint *)(*(long *)(this + 0x1d0) + lVar17 * 4);
        iVar13 = SUB164(auVar5 * auVar9,8);
      } while ((uVar12 != 0) &&
              (auVar6._8_8_ = 0, auVar6._0_8_ = uVar12 * uVar2, auVar10._8_8_ = 0,
              auVar10._0_8_ = uVar19, auVar7._8_8_ = 0,
              auVar7._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e8) * 4
                                        ) + iVar13) - SUB164(auVar6 * auVar10,8)) * uVar2,
              auVar11._8_8_ = 0, auVar11._0_8_ = uVar19, uVar20 <= SUB164(auVar7 * auVar11,8)));
    }
  }
  _find_next_peer(this);
  _err_print_error("get_packet","modules/webrtc/webrtc_multiplayer_peer.cpp",0x169,
                   "Method/function failed. Returning: ERR_UNAVAILABLE",0,0);
  return 2;
}



/* WebRTCMultiplayerPeer::put_packet(unsigned char const*, int) */

undefined8 __thiscall
WebRTCMultiplayerPeer::put_packet(WebRTCMultiplayerPeer *this,uchar *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  code *pcVar12;
  int iVar13;
  uint uVar14;
  undefined8 uVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  long in_FS_OFFSET;
  bool bVar28;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0x1b0) == 0) {
    _err_print_error("put_packet","modules/webrtc/webrtc_multiplayer_peer.cpp",0x178,
                     "Condition \"connection_status == CONNECTION_DISCONNECTED\" is true. Returning: ERR_UNCONFIGURED"
                     ,0,0);
    uVar15 = 3;
  }
  else {
    iVar13 = (**(code **)(*(long *)this + 0x198))();
    uVar19 = iVar13 + 2;
    if (iVar13 == 0) {
      uVar19 = 2;
      iVar13 = (**(code **)(*(long *)this + 0x1a8))(this);
      if (iVar13 != 0) {
        uVar19 = (uint)(iVar13 == 1);
      }
    }
    uVar25 = *(uint *)(this + 0x1a8);
    if ((int)uVar25 < 1) {
      plVar22 = *(long **)(this + 0x1d8);
      iVar13 = -uVar25;
      if (plVar22 != (long *)0x0) {
        do {
          if ((uVar25 == 0) || ((int)plVar22[2] != iVar13)) {
            puVar2 = *(undefined8 **)(plVar22[3] + 0x188);
            if (puVar2 == (undefined8 *)0x0) {
              if ((int)uVar19 < 0) {
                lVar23 = 0;
                goto LAB_00102987;
              }
            }
            else {
              iVar1 = *(int *)(puVar2 + 2);
              if ((int)uVar19 < iVar1) {
                if (-1 < (int)uVar19) {
                  plVar21 = (long *)*puVar2;
                  plVar20 = plVar21;
                  uVar25 = 0;
                  if (uVar19 == 0) {
                    plVar21 = (long *)*plVar21;
                    if (plVar21 == (long *)0x0) goto LAB_00102b88;
                    if (iVar1 < 1) {
                      lVar23 = (long)iVar1;
                      lVar16 = 0;
                      goto LAB_001029a5;
                    }
                  }
                  else {
                    do {
                      uVar14 = uVar25;
                      uVar25 = uVar14 + 1;
                      plVar20 = (long *)plVar20[1];
                    } while (uVar19 != uVar25);
                    uVar25 = 0;
                    if (*plVar20 == 0) {
LAB_00102b88:
                      _err_print_error("put_packet","modules/webrtc/webrtc_multiplayer_peer.cpp",
                                       0x19d);
                      goto LAB_0010279a;
                    }
                    do {
                      plVar21 = (long *)plVar21[1];
                      bVar28 = uVar14 != uVar25;
                      uVar25 = uVar25 + 1;
                    } while (bVar28);
                    plVar21 = (long *)*plVar21;
                  }
                  (**(code **)(*plVar21 + 0x160))(plVar21,param_1,param_2);
                  goto LAB_0010279a;
                }
                lVar23 = (long)iVar1;
LAB_00102987:
                lVar16 = (long)(int)uVar19;
LAB_001029a5:
                _err_print_index_error
                          ("get","./core/templates/list.h",0x21c,lVar16,lVar23,"p_index","size()",""
                           ,false,true);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar12 = (code *)invalidInstructionException();
                (*pcVar12)();
              }
            }
            local_60 = 0;
            local_58 = "Unable to send packet on channel %d, max channels: %d";
            local_50 = 0x35;
            String::parse_latin1((StrRange *)&local_60);
            vformat<int,int>((String *)&local_58,(int)(StrRange *)&local_60,uVar19);
            _err_print_error("put_packet","modules/webrtc/webrtc_multiplayer_peer.cpp",0x19c,
                             "Condition \"F.value->channels.size() <= ch\" is true. Continuing.",
                             (String *)&local_58,0,0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          }
LAB_0010279a:
          plVar22 = (long *)*plVar22;
          if (plVar22 == (long *)0x0) break;
          uVar25 = *(uint *)(this + 0x1a8);
        } while( true );
      }
      uVar15 = 0;
    }
    else {
      lVar23 = *(long *)(this + 0x1c8);
      if ((lVar23 != 0) && (*(int *)(this + 0x1ec) != 0)) {
        uVar27 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e8) * 4));
        uVar3 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1e8) * 8);
        uVar14 = (uVar25 >> 0x10 ^ uVar25) * -0x7a143595;
        uVar14 = (uVar14 ^ uVar14 >> 0xd) * -0x3d4d51cb;
        uVar26 = uVar14 ^ uVar14 >> 0x10;
        if (uVar14 == uVar14 >> 0x10) {
          uVar26 = 1;
          uVar18 = uVar3;
        }
        else {
          uVar18 = uVar26 * uVar3;
        }
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar27;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar18;
        lVar16 = SUB168(auVar4 * auVar8,8);
        uVar14 = *(uint *)(*(long *)(this + 0x1d0) + lVar16 * 4);
        uVar17 = SUB164(auVar4 * auVar8,8);
        if (uVar14 != 0) {
          uVar24 = 0;
          while ((uVar26 != uVar14 || (uVar25 != *(uint *)(*(long *)(lVar23 + lVar16 * 8) + 0x10))))
          {
            uVar24 = uVar24 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (uVar17 + 1) * uVar3;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar27;
            lVar16 = SUB168(auVar5 * auVar9,8);
            uVar14 = *(uint *)(*(long *)(this + 0x1d0) + lVar16 * 4);
            uVar17 = SUB164(auVar5 * auVar9,8);
            if ((uVar14 == 0) ||
               (auVar6._8_8_ = 0, auVar6._0_8_ = uVar14 * uVar3, auVar10._8_8_ = 0,
               auVar10._0_8_ = uVar27, auVar7._8_8_ = 0,
               auVar7._0_8_ = ((*(uint *)(hash_table_size_primes +
                                         (ulong)*(uint *)(this + 0x1e8) * 4) + uVar17) -
                              SUB164(auVar6 * auVar10,8)) * uVar3, auVar11._8_8_ = 0,
               auVar11._0_8_ = uVar27, SUB164(auVar7 * auVar11,8) < uVar24)) goto LAB_00102bd0;
          }
          lVar23 = *(long *)(lVar23 + (ulong)uVar17 * 8);
          if (lVar23 != 0) {
            puVar2 = *(undefined8 **)(*(long *)(lVar23 + 0x18) + 0x188);
            if (puVar2 == (undefined8 *)0x0) {
              lVar23 = 0;
              if ((int)uVar19 < 0) goto LAB_00102987;
            }
            else {
              iVar13 = *(int *)(puVar2 + 2);
              if ((int)uVar19 < iVar13) {
                if ((int)uVar19 < 0) {
                  lVar23 = (long)iVar13;
                  goto LAB_00102987;
                }
                plVar22 = (long *)*puVar2;
                plVar20 = plVar22;
                uVar25 = 0;
                if (uVar19 != 0) goto LAB_00102910;
                plVar22 = (long *)*plVar22;
                if (plVar22 == (long *)0x0) goto LAB_00102cc4;
                if (0 < iVar13) goto LAB_00102940;
                lVar23 = (long)iVar13;
                lVar16 = 0;
                goto LAB_001029a5;
              }
            }
            local_60 = 0;
            local_50 = 0x35;
            local_58 = "Unable to send packet on channel %d, max channels: %d";
            String::parse_latin1((StrRange *)&local_60);
            vformat<int,int>((String *)&local_58,(int)(StrRange *)&local_60,uVar19);
            _err_print_error("put_packet","modules/webrtc/webrtc_multiplayer_peer.cpp",399,
                             "Condition \"E->value->channels.size() <= ch\" is true. Returning: ERR_INVALID_PARAMETER"
                             ,(String *)&local_58,0,0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            goto LAB_00102b14;
          }
        }
      }
LAB_00102bd0:
      local_60 = 0;
      local_50 = 1;
      local_58 = ".";
      String::parse_latin1((StrRange *)&local_60);
      itos((long)local_70);
      operator+((char *)local_68,(String *)"Invalid target peer: ");
      String::operator+((String *)&local_58,(String *)local_68);
      _err_print_error("put_packet","modules/webrtc/webrtc_multiplayer_peer.cpp",0x18d,
                       "Condition \"!E\" is true. Returning: ERR_INVALID_PARAMETER",
                       (String *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref(local_68);
      CowData<char32_t>::_unref(local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_00102b14:
      uVar15 = 0x1f;
    }
  }
LAB_001029d2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar15;
  }
LAB_00102cfb:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00102910:
  do {
    uVar14 = uVar25;
    uVar25 = uVar14 + 1;
    plVar21 = plVar20 + 1;
    plVar20 = (long *)*plVar21;
  } while (uVar19 != uVar25);
  uVar19 = 0;
  if (*(long *)*plVar21 != 0) {
    do {
      plVar22 = (long *)plVar22[1];
      bVar28 = uVar19 != uVar14;
      uVar19 = uVar19 + 1;
    } while (bVar28);
    plVar22 = (long *)*plVar22;
LAB_00102940:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00102975. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar15 = (**(code **)(*plVar22 + 0x160))(plVar22,param_1,param_2);
      return uVar15;
    }
    goto LAB_00102cfb;
  }
LAB_00102cc4:
  _err_print_error("put_packet","modules/webrtc/webrtc_multiplayer_peer.cpp",400,
                   "Condition \"E->value->channels.get(ch).is_null()\" is true. Returning: ERR_BUG",
                   0,0);
  uVar15 = 0x2f;
  goto LAB_001029d2;
}



/* WebRTCMultiplayerPeer::_initialize(int, WebRTCMultiplayerPeer::NetworkMode, Array) */

undefined8 __thiscall
WebRTCMultiplayerPeer::_initialize(WebRTCMultiplayerPeer *this,int param_1,int param_3,int param_4)

{
  char cVar1;
  long lVar2;
  void *pvVar3;
  int iVar4;
  long lVar5;
  undefined1 (*pauVar6) [16];
  undefined4 *puVar7;
  int *piVar8;
  Variant *pVVar9;
  undefined8 uVar10;
  Dictionary *pDVar11;
  long *plVar12;
  int iVar13;
  long in_FS_OFFSET;
  Dictionary local_98 [8];
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < 1) {
    _err_print_error("_initialize","modules/webrtc/webrtc_multiplayer_peer.cpp",0xcc,
                     "Condition \"p_self_id < 1 || p_self_id > ~(1 << 31)\" is true. Returning: ERR_INVALID_PARAMETER"
                     ,0,0);
LAB_001031c5:
    uVar10 = 0x1f;
  }
  else {
    plVar12 = *(long **)(this + 0x1f8);
    if (plVar12 != (long *)0x0) {
      do {
        pDVar11 = (Dictionary *)*plVar12;
        if (pDVar11 == (Dictionary *)0x0) goto LAB_00102dc2;
        if (*(long **)(pDVar11 + 0x18) == plVar12) {
          lVar5 = *(long *)(pDVar11 + 8);
          lVar2 = *(long *)(pDVar11 + 0x10);
          *plVar12 = lVar5;
          if (pDVar11 == (Dictionary *)plVar12[1]) {
            plVar12[1] = lVar2;
          }
          if (lVar2 != 0) {
            *(long *)(lVar2 + 8) = lVar5;
            lVar5 = *(long *)(pDVar11 + 8);
          }
          if (lVar5 != 0) {
            *(long *)(lVar5 + 0x10) = lVar2;
          }
          Dictionary::~Dictionary(pDVar11);
          Memory::free_static(pDVar11,false);
          *(int *)(plVar12 + 2) = (int)plVar12[2] + -1;
        }
        else {
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        }
        plVar12 = *(long **)(this + 0x1f8);
      } while ((int)plVar12[2] != 0);
      Memory::free_static(plVar12,false);
      *(undefined8 *)(this + 0x1f8) = 0;
    }
LAB_00102dc2:
    plVar12 = *(long **)(this + 0x1f0);
    if (plVar12 != (long *)0x0) {
      do {
        pvVar3 = (void *)*plVar12;
        if (pvVar3 == (void *)0x0) goto LAB_00102e6b;
        if (*(long **)((long)pvVar3 + 0x18) == plVar12) {
          lVar5 = *(long *)((long)pvVar3 + 8);
          lVar2 = *(long *)((long)pvVar3 + 0x10);
          *plVar12 = lVar5;
          if (pvVar3 == (void *)plVar12[1]) {
            plVar12[1] = lVar2;
          }
          if (lVar2 != 0) {
            *(long *)(lVar2 + 8) = lVar5;
            lVar5 = *(long *)((long)pvVar3 + 8);
          }
          if (lVar5 != 0) {
            *(long *)(lVar5 + 0x10) = lVar2;
          }
          Memory::free_static(pvVar3,false);
          *(int *)(plVar12 + 2) = (int)plVar12[2] + -1;
        }
        else {
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        }
        plVar12 = *(long **)(this + 0x1f0);
      } while ((int)plVar12[2] != 0);
      Memory::free_static(plVar12,false);
      *(undefined8 *)(this + 0x1f0) = 0;
    }
    pauVar6 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])(this + 0x1f0) = pauVar6;
    *(undefined4 *)pauVar6[1] = 0;
    *pauVar6 = (undefined1  [16])0x0;
LAB_00102e6b:
    puVar7 = (undefined4 *)operator_new(0x20,DefaultAllocator::alloc);
    plVar12 = *(long **)(this + 0x1f0);
    *(undefined8 *)(puVar7 + 2) = 0;
    lVar5 = plVar12[1];
    *puVar7 = 2;
    *(long **)(puVar7 + 6) = plVar12;
    *(long *)(puVar7 + 4) = lVar5;
    if (lVar5 != 0) {
      *(undefined4 **)(lVar5 + 8) = puVar7;
    }
    plVar12[1] = (long)puVar7;
    if (*plVar12 == 0) {
      *plVar12 = (long)puVar7;
    }
    *(int *)(plVar12 + 2) = (int)plVar12[2] + 1;
    puVar7 = (undefined4 *)operator_new(0x20,DefaultAllocator::alloc);
    plVar12 = *(long **)(this + 0x1f0);
    *(undefined8 *)(puVar7 + 2) = 0;
    lVar5 = plVar12[1];
    *puVar7 = 1;
    *(long **)(puVar7 + 6) = plVar12;
    *(long *)(puVar7 + 4) = lVar5;
    if (lVar5 != 0) {
      *(undefined4 **)(lVar5 + 8) = puVar7;
    }
    plVar12[1] = (long)puVar7;
    if (*plVar12 == 0) {
      *plVar12 = (long)puVar7;
    }
    *(int *)(plVar12 + 2) = (int)plVar12[2] + 1;
    puVar7 = (undefined4 *)operator_new(0x20,DefaultAllocator::alloc);
    plVar12 = *(long **)(this + 0x1f0);
    *(undefined8 *)(puVar7 + 2) = 0;
    lVar5 = plVar12[1];
    *puVar7 = 0;
    *(long **)(puVar7 + 6) = plVar12;
    *(long *)(puVar7 + 4) = lVar5;
    if (lVar5 != 0) {
      *(undefined4 **)(lVar5 + 8) = puVar7;
    }
    plVar12[1] = (long)puVar7;
    if (*plVar12 == 0) {
      *plVar12 = (long)puVar7;
    }
    *(int *)(plVar12 + 2) = (int)plVar12[2] + 1;
    for (iVar13 = 0; iVar4 = Array::size(), iVar13 < iVar4; iVar13 = iVar13 + 1) {
      piVar8 = (int *)Array::operator[](param_4);
      if (*piVar8 != 2) {
        _err_print_error("_initialize","modules/webrtc/webrtc_multiplayer_peer.cpp",0xd3,
                         "Condition \"p_channels_config[i].get_type() != Variant::INT\" is true. Returning: ERR_INVALID_PARAMETER"
                         ,
                         "The \'channels_config\' array must contain only enum values from \'MultiplayerPeer.TransferMode\'"
                         ,0,0);
        goto LAB_001031c5;
      }
      pVVar9 = (Variant *)Array::operator[](param_4);
      iVar4 = Variant::operator_cast_to_int(pVVar9);
      Dictionary::Dictionary(local_98);
      Variant::Variant((Variant *)local_58,iVar13 + 4);
      Variant::Variant((Variant *)local_78,"id");
      pVVar9 = (Variant *)Dictionary::operator[]((Variant *)local_98);
      if (pVVar9 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar9] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar9 = 0;
        *(int *)pVVar9 = local_58[0];
        *(undefined8 *)(pVVar9 + 8) = local_50;
        *(undefined8 *)(pVVar9 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,true);
      Variant::Variant((Variant *)local_78,"negotiated");
      pVVar9 = (Variant *)Dictionary::operator[]((Variant *)local_98);
      if (pVVar9 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar9] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar9 = 0;
        *(int *)pVVar9 = local_58[0];
        *(undefined8 *)(pVVar9 + 8) = local_50;
        *(undefined8 *)(pVVar9 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,true);
      Variant::Variant((Variant *)local_78,"ordered");
      pVVar9 = (Variant *)Dictionary::operator[]((Variant *)local_98);
      if (pVVar9 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar9] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar9 = 0;
        *(int *)pVVar9 = local_58[0];
        *(undefined8 *)(pVVar9 + 8) = local_50;
        *(undefined8 *)(pVVar9 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (iVar4 == 1) {
        Variant::Variant((Variant *)local_58,1);
        Variant::Variant((Variant *)local_78,"maxPacketLifetime");
        pVVar9 = (Variant *)Dictionary::operator[]((Variant *)local_98);
        if (pVVar9 != (Variant *)local_58) {
          if (Variant::needs_deinit[*(int *)pVVar9] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar9 = 0;
          *(int *)pVVar9 = local_58[0];
          *(undefined8 *)(pVVar9 + 8) = local_50;
          *(undefined8 *)(pVVar9 + 0x10) = uStack_48;
          local_58[0] = 0;
        }
LAB_0010324f:
        if (Variant::needs_deinit[local_78[0]] == '\0') {
LAB_0010325e:
          cVar1 = Variant::needs_deinit[local_58[0]];
        }
        else {
LAB_0010342c:
          Variant::_clear_internal();
          cVar1 = Variant::needs_deinit[local_58[0]];
        }
        if (cVar1 == '\0') goto LAB_0010326d;
        Variant::_clear_internal();
        lVar5 = *(long *)(this + 0x1f8);
      }
      else {
        if (iVar4 != 2) {
          if (iVar4 == 0) {
            Variant::Variant((Variant *)local_58,1);
            Variant::Variant((Variant *)local_78,"maxPacketLifetime");
            pVVar9 = (Variant *)Dictionary::operator[]((Variant *)local_98);
            if (pVVar9 != (Variant *)local_58) {
              if (Variant::needs_deinit[*(int *)pVVar9] != '\0') {
                Variant::_clear_internal();
              }
              *(undefined4 *)pVVar9 = 0;
              *(int *)pVVar9 = local_58[0];
              *(undefined8 *)(pVVar9 + 8) = local_50;
              *(undefined8 *)(pVVar9 + 0x10) = uStack_48;
              local_58[0] = 0;
            }
            if (Variant::needs_deinit[local_78[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            Variant::Variant((Variant *)local_58,false);
            Variant::Variant((Variant *)local_78,"ordered");
            pVVar9 = (Variant *)Dictionary::operator[]((Variant *)local_98);
            if (pVVar9 == (Variant *)local_58) goto LAB_0010324f;
            if (Variant::needs_deinit[*(int *)pVVar9] != '\0') {
              Variant::_clear_internal();
            }
            *(undefined4 *)pVVar9 = 0;
            *(int *)pVVar9 = local_58[0];
            *(undefined8 *)(pVVar9 + 8) = local_50;
            *(undefined8 *)(pVVar9 + 0x10) = uStack_48;
            local_58[0] = 0;
            if (Variant::needs_deinit[local_78[0]] == '\0') goto LAB_0010325e;
            goto LAB_0010342c;
          }
          local_90 = 0;
          local_80 = 0x66;
          local_88 = 
          "The \'channels_config\' array must contain only enum values from \'MultiplayerPeer.TransferMode\'. Got: %d"
          ;
          String::parse_latin1((StrRange *)&local_90);
          vformat<int>((String *)&local_88,(int)(StrRange *)&local_90);
          _err_print_error("_initialize","modules/webrtc/webrtc_multiplayer_peer.cpp",0xe6,
                           "Method/function failed. Returning: ERR_INVALID_PARAMETER",
                           (String *)&local_88,0,0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
          Dictionary::~Dictionary(local_98);
          goto LAB_001031c5;
        }
LAB_0010326d:
        lVar5 = *(long *)(this + 0x1f8);
      }
      if (lVar5 == 0) {
        pauVar6 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined1 (**) [16])(this + 0x1f8) = pauVar6;
        *(undefined4 *)pauVar6[1] = 0;
        *pauVar6 = (undefined1  [16])0x0;
      }
      pDVar11 = (Dictionary *)operator_new(0x20,DefaultAllocator::alloc);
      Dictionary::Dictionary(pDVar11);
      *(undefined8 *)(pDVar11 + 0x18) = 0;
      *(undefined1 (*) [16])(pDVar11 + 8) = (undefined1  [16])0x0;
      Dictionary::operator=(pDVar11,local_98);
      plVar12 = *(long **)(this + 0x1f8);
      lVar5 = plVar12[1];
      *(undefined8 *)(pDVar11 + 8) = 0;
      *(long **)(pDVar11 + 0x18) = plVar12;
      *(long *)(pDVar11 + 0x10) = lVar5;
      if (lVar5 != 0) {
        *(Dictionary **)(lVar5 + 8) = pDVar11;
      }
      plVar12[1] = (long)pDVar11;
      if (*plVar12 == 0) {
        *(int *)(plVar12 + 2) = (int)plVar12[2] + 1;
        lVar5 = *(long *)(this + 0x1f0);
        *plVar12 = (long)pDVar11;
      }
      else {
        *(int *)(plVar12 + 2) = (int)plVar12[2] + 1;
        lVar5 = *(long *)(this + 0x1f0);
      }
      if (lVar5 == 0) {
        pauVar6 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined1 (**) [16])(this + 0x1f0) = pauVar6;
        *(undefined4 *)pauVar6[1] = 0;
        *pauVar6 = (undefined1  [16])0x0;
      }
      piVar8 = (int *)operator_new(0x20,DefaultAllocator::alloc);
      plVar12 = *(long **)(this + 0x1f0);
      piVar8[2] = 0;
      piVar8[3] = 0;
      *piVar8 = iVar4;
      lVar5 = plVar12[1];
      *(long **)(piVar8 + 6) = plVar12;
      *(long *)(piVar8 + 4) = lVar5;
      if (lVar5 != 0) {
        *(int **)(lVar5 + 8) = piVar8;
      }
      plVar12[1] = (long)piVar8;
      if (*plVar12 == 0) {
        *plVar12 = (long)piVar8;
      }
      *(int *)(plVar12 + 2) = (int)plVar12[2] + 1;
      Dictionary::~Dictionary(local_98);
    }
    *(int *)(this + 0x1a4) = param_1;
    *(int *)(this + 0x1bc) = param_3;
    *(uint *)(this + 0x1b0) = (param_3 != 2) + 1;
    uVar10 = 0;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}



/* WebRTCMultiplayerPeer::create_server(Array) */

undefined4 __thiscall
WebRTCMultiplayerPeer::create_server(WebRTCMultiplayerPeer *this,Array *param_2)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  Array aAStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Array::Array(aAStack_28,param_2);
  uVar1 = _initialize(this,1,1,aAStack_28);
  Array::~Array(aAStack_28);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WebRTCMultiplayerPeer::create_client(int, Array) */

undefined4 __thiscall
WebRTCMultiplayerPeer::create_client(WebRTCMultiplayerPeer *this,int param_1,Array *param_3)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  Array aAStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 1) {
    uVar1 = 0x1f;
    _err_print_error("create_client","modules/webrtc/webrtc_multiplayer_peer.cpp",0xc3,
                     "Condition \"p_self_id == 1\" is true. Returning: ERR_INVALID_PARAMETER",
                     "Clients cannot have ID 1.",0,0);
  }
  else {
    Array::Array(aAStack_28,param_3);
    uVar1 = _initialize(this,param_1,2,aAStack_28);
    Array::~Array(aAStack_28);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WebRTCMultiplayerPeer::create_mesh(int, Array) */

undefined4 __thiscall
WebRTCMultiplayerPeer::create_mesh(WebRTCMultiplayerPeer *this,undefined4 param_1,Array *param_3)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  Array aAStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Array::Array(aAStack_28,param_3);
  uVar1 = _initialize(this,param_1,3,aAStack_28);
  Array::~Array(aAStack_28);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WebRTCMultiplayerPeer::add_peer(Ref<WebRTCPeerConnection>, int, int) */

undefined4 __thiscall
WebRTCMultiplayerPeer::add_peer(WebRTCMultiplayerPeer *this,long *param_2,int param_3,int param_4)

{
  long *plVar1;
  Object *pOVar2;
  code *pcVar3;
  Dictionary *pDVar4;
  char cVar5;
  int iVar6;
  RefCounted *this_00;
  undefined1 (*pauVar7) [16];
  undefined8 *puVar8;
  Variant *pVVar9;
  long lVar10;
  long lVar11;
  char *pcVar12;
  Object *pOVar13;
  undefined8 uVar14;
  long in_FS_OFFSET;
  undefined4 local_b0;
  int local_ac [3];
  Dictionary local_a0 [8];
  Object *local_98;
  Dictionary local_90 [8];
  Object *local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = *(int *)(this + 0x1bc);
  local_ac[0] = param_3;
  if (iVar6 == 0) {
    _err_print_error("add_peer","modules/webrtc/webrtc_multiplayer_peer.cpp",0x121,
                     "Condition \"network_mode == MODE_NONE\" is true. Returning: ERR_UNCONFIGURED",
                     0,0);
    local_b0 = 3;
    goto LAB_001045fd;
  }
  if (iVar6 == 2) {
    if (param_3 == 1) {
LAB_00103983:
      if (param_4 < 0) {
        _err_print_error("add_peer","modules/webrtc/webrtc_multiplayer_peer.cpp",0x125,
                         "Condition \"p_unreliable_lifetime < 0\" is true. Returning: ERR_INVALID_PARAMETER"
                         ,0,0);
      }
      else {
        cVar5 = (**(code **)(*(long *)this + 0x1b8))();
        if (cVar5 != '\0') {
          _err_print_error("add_peer","modules/webrtc/webrtc_multiplayer_peer.cpp",0x126,
                           "Condition \"is_refusing_new_connections()\" is true. Returning: ERR_UNAUTHORIZED"
                           ,0,0);
          local_b0 = 4;
          goto LAB_001045fd;
        }
        if ((long *)*param_2 == (long *)0x0) {
          _err_print_error("add_peer","modules/webrtc/webrtc_multiplayer_peer.cpp",0x128,
                           "Condition \"p_peer.is_null()\" is true. Returning: ERR_INVALID_PARAMETER"
                           ,0,0);
        }
        else {
          iVar6 = (**(code **)(*(long *)*param_2 + 0x150))();
          if (iVar6 == 0) {
            iVar6 = 3;
            this_00 = (RefCounted *)operator_new(0x198,"");
            RefCounted::RefCounted(this_00);
            this_00[400] = (RefCounted)0x0;
            *(undefined ***)this_00 = &PTR__initialize_classv_0010fa08;
            *(undefined1 (*) [16])(this_00 + 0x180) = (undefined1  [16])0x0;
            pauVar7 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
            *(undefined1 (**) [16])(this_00 + 0x188) = pauVar7;
            *(undefined4 *)pauVar7[1] = 0;
            *pauVar7 = (undefined1  [16])0x0;
            do {
              puVar8 = (undefined8 *)operator_new(0x20,DefaultAllocator::alloc);
              plVar1 = *(long **)(this_00 + 0x188);
              *puVar8 = 0;
              lVar10 = *plVar1;
              puVar8[2] = 0;
              puVar8[3] = plVar1;
              puVar8[1] = lVar10;
              if (lVar10 != 0) {
                *(undefined8 **)(lVar10 + 0x10) = puVar8;
              }
              *plVar1 = (long)puVar8;
              if (plVar1[1] == 0) {
                plVar1[1] = (long)puVar8;
              }
              *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
            postinitialize_handler((Object *)this_00);
            cVar5 = RefCounted::init_ref();
            if (cVar5 == '\0') {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            pOVar2 = *(Object **)(this_00 + 0x180);
            pOVar13 = (Object *)*param_2;
            if (pOVar13 != pOVar2) {
              *(Object **)(this_00 + 0x180) = pOVar13;
              if ((pOVar13 != (Object *)0x0) && (cVar5 = RefCounted::reference(), cVar5 == '\0')) {
                *(undefined8 *)(this_00 + 0x180) = 0;
              }
              if (((pOVar2 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0'))
                 && (cVar5 = predelete_handler(pOVar2), cVar5 != '\0')) {
                (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                Memory::free_static(pOVar2,false);
              }
            }
            Dictionary::Dictionary(local_a0);
            Variant::Variant((Variant *)local_58,true);
            Variant::Variant((Variant *)local_78,"negotiated");
            pVVar9 = (Variant *)Dictionary::operator[]((Variant *)local_a0);
            if (pVVar9 != (Variant *)local_58) {
              if (Variant::needs_deinit[*(int *)pVVar9] != '\0') {
                Variant::_clear_internal();
              }
              *(undefined4 *)pVVar9 = 0;
              *(int *)pVVar9 = local_58[0];
              *(undefined8 *)(pVVar9 + 8) = local_50;
              *(undefined8 *)(pVVar9 + 0x10) = uStack_48;
              local_58[0] = 0;
            }
            if (Variant::needs_deinit[local_78[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            Variant::Variant((Variant *)local_58,true);
            Variant::Variant((Variant *)local_78,"ordered");
            pVVar9 = (Variant *)Dictionary::operator[]((Variant *)local_a0);
            if (pVVar9 != (Variant *)local_58) {
              if (Variant::needs_deinit[*(int *)pVVar9] != '\0') {
                Variant::_clear_internal();
              }
              *(undefined4 *)pVVar9 = 0;
              *(int *)pVVar9 = local_58[0];
              *(undefined8 *)(pVVar9 + 8) = local_50;
              *(undefined8 *)(pVVar9 + 0x10) = uStack_48;
              local_58[0] = 0;
            }
            if (Variant::needs_deinit[local_78[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            Variant::Variant((Variant *)local_58,1);
            Variant::Variant((Variant *)local_78,"id");
            pVVar9 = (Variant *)Dictionary::operator[]((Variant *)local_a0);
            if (pVVar9 != (Variant *)local_58) {
              if (Variant::needs_deinit[*(int *)pVVar9] != '\0') {
                Variant::_clear_internal();
              }
              *(undefined4 *)pVVar9 = 0;
              *(int *)pVVar9 = local_58[0];
              *(undefined8 *)(pVVar9 + 8) = local_50;
              *(undefined8 *)(pVVar9 + 0x10) = uStack_48;
              local_58[0] = 0;
            }
            if (Variant::needs_deinit[local_78[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            plVar1 = (long *)*param_2;
            pcVar3 = *(code **)(*plVar1 + 0x170);
            Dictionary::Dictionary(local_90,local_a0);
            local_98 = (Object *)0x0;
            local_88 = (Object *)0x1068b6;
            local_80 = 8;
            String::parse_latin1((StrRange *)&local_98);
            (*pcVar3)((Dictionary *)&local_88,plVar1,(StrRange *)&local_98);
            puVar8 = *(undefined8 **)(this_00 + 0x188);
            if (puVar8 == (undefined8 *)0x0) {
LAB_00104400:
              lVar10 = 0;
            }
            else {
              iVar6 = *(int *)(puVar8 + 2);
              if (0 < iVar6) {
                puVar8 = (undefined8 *)*puVar8;
                pOVar2 = (Object *)*puVar8;
                pOVar13 = pOVar2;
                if (local_88 != pOVar2) {
                  *puVar8 = local_88;
                  if ((local_88 != (Object *)0x0) &&
                     (cVar5 = RefCounted::reference(), cVar5 == '\0')) {
                    *puVar8 = 0;
                  }
                  pOVar13 = local_88;
                  if (((pOVar2 != (Object *)0x0) &&
                      (cVar5 = RefCounted::unreference(), pOVar13 = local_88, cVar5 != '\0')) &&
                     (cVar5 = predelete_handler(pOVar2), pOVar13 = local_88, cVar5 != '\0')) {
                    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                    Memory::free_static(pOVar2,false);
                    pOVar13 = local_88;
                  }
                }
                if (((pOVar13 != (Object *)0x0) &&
                    (cVar5 = RefCounted::unreference(), pOVar2 = local_88, cVar5 != '\0')) &&
                   (cVar5 = predelete_handler(local_88), cVar5 != '\0')) {
                  (**(code **)(*(long *)pOVar2 + 0x140))();
                  Memory::free_static(pOVar2,false);
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                Dictionary::~Dictionary(local_90);
                puVar8 = *(undefined8 **)(this_00 + 0x188);
                if (puVar8 == (undefined8 *)0x0) goto LAB_00104400;
                iVar6 = *(int *)(puVar8 + 2);
                if (0 < iVar6) {
                  if (*(long *)*puVar8 == 0) {
                    uVar14 = 0x135;
                    pcVar12 = 
                    "Condition \"peer->channels.get(CH_RELIABLE).is_null()\" is true. Returning: FAILED"
                    ;
LAB_001049cf:
                    _err_print_error("add_peer","modules/webrtc/webrtc_multiplayer_peer.cpp",uVar14,
                                     pcVar12,0,0);
LAB_001047c0:
                    Dictionary::~Dictionary(local_a0);
                    local_b0 = 1;
LAB_001047d2:
                    cVar5 = RefCounted::unreference();
                    if ((cVar5 != '\0') &&
                       (cVar5 = predelete_handler((Object *)this_00), cVar5 != '\0')) {
                      (**(code **)(*(long *)this_00 + 0x140))(this_00);
                      Memory::free_static(this_00,false);
                    }
                    goto LAB_001045fd;
                  }
                  Variant::Variant((Variant *)local_58,2);
                  Variant::Variant((Variant *)local_78,"id");
                  pVVar9 = (Variant *)Dictionary::operator[]((Variant *)local_a0);
                  if (pVVar9 != (Variant *)local_58) {
                    if (Variant::needs_deinit[*(int *)pVVar9] != '\0') {
                      Variant::_clear_internal();
                    }
                    *(undefined4 *)pVVar9 = 0;
                    *(int *)pVVar9 = local_58[0];
                    *(undefined8 *)(pVVar9 + 8) = local_50;
                    *(undefined8 *)(pVVar9 + 0x10) = uStack_48;
                    local_58[0] = 0;
                  }
                  if (Variant::needs_deinit[local_78[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  Variant::Variant((Variant *)local_58,param_4);
                  Variant::Variant((Variant *)local_78,"maxPacketLifetime");
                  pVVar9 = (Variant *)Dictionary::operator[]((Variant *)local_a0);
                  if (pVVar9 != (Variant *)local_58) {
                    if (Variant::needs_deinit[*(int *)pVVar9] != '\0') {
                      Variant::_clear_internal();
                    }
                    *(undefined4 *)pVVar9 = 0;
                    *(int *)pVVar9 = local_58[0];
                    *(undefined8 *)(pVVar9 + 8) = local_50;
                    *(undefined8 *)(pVVar9 + 0x10) = uStack_48;
                    local_58[0] = 0;
                  }
                  if (Variant::needs_deinit[local_78[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  plVar1 = (long *)*param_2;
                  pcVar3 = *(code **)(*plVar1 + 0x170);
                  Dictionary::Dictionary(local_90,local_a0);
                  local_88 = (Object *)0x10686b;
                  local_98 = (Object *)0x0;
                  local_80 = 7;
                  String::parse_latin1((StrRange *)&local_98);
                  (*pcVar3)((Dictionary *)&local_88,plVar1,(StrRange *)&local_98,local_90);
                  plVar1 = *(long **)(this_00 + 0x188);
                  if (plVar1 == (long *)0x0) {
LAB_00104470:
                    lVar10 = 0;
                  }
                  else {
                    iVar6 = (int)plVar1[2];
                    if (1 < iVar6) {
                      puVar8 = *(undefined8 **)(*plVar1 + 8);
                      pOVar2 = (Object *)*puVar8;
                      pOVar13 = pOVar2;
                      if (local_88 != pOVar2) {
                        *puVar8 = local_88;
                        if ((local_88 != (Object *)0x0) &&
                           (cVar5 = RefCounted::reference(), cVar5 == '\0')) {
                          *puVar8 = 0;
                        }
                        pOVar13 = local_88;
                        if (((pOVar2 != (Object *)0x0) &&
                            (cVar5 = RefCounted::unreference(), pOVar13 = local_88, cVar5 != '\0'))
                           && (cVar5 = predelete_handler(pOVar2), pOVar13 = local_88, cVar5 != '\0')
                           ) {
                          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                          Memory::free_static(pOVar2,false);
                          pOVar13 = local_88;
                        }
                      }
                      if (((pOVar13 != (Object *)0x0) &&
                          (cVar5 = RefCounted::unreference(), pOVar2 = local_88, cVar5 != '\0')) &&
                         (cVar5 = predelete_handler(local_88), cVar5 != '\0')) {
                        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                        Memory::free_static(pOVar2,false);
                      }
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                      Dictionary::~Dictionary(local_90);
                      plVar1 = *(long **)(this_00 + 0x188);
                      if (plVar1 == (long *)0x0) goto LAB_00104470;
                      iVar6 = (int)plVar1[2];
                      if (1 < iVar6) {
                        if (**(long **)(*plVar1 + 8) == 0) {
                          uVar14 = 0x13a;
                          pcVar12 = 
                          "Condition \"peer->channels.get(CH_ORDERED).is_null()\" is true. Returning: FAILED"
                          ;
                          goto LAB_001049cf;
                        }
                        Variant::Variant((Variant *)local_58,3);
                        Variant::Variant((Variant *)local_78,"id");
                        pVVar9 = (Variant *)Dictionary::operator[]((Variant *)local_a0);
                        if (pVVar9 != (Variant *)local_58) {
                          if (Variant::needs_deinit[*(int *)pVVar9] != '\0') {
                            Variant::_clear_internal();
                          }
                          *(undefined4 *)pVVar9 = 0;
                          *(int *)pVVar9 = local_58[0];
                          *(undefined8 *)(pVVar9 + 8) = local_50;
                          *(undefined8 *)(pVVar9 + 0x10) = uStack_48;
                          local_58[0] = 0;
                        }
                        if (Variant::needs_deinit[local_78[0]] != '\0') {
                          Variant::_clear_internal();
                        }
                        if (Variant::needs_deinit[local_58[0]] != '\0') {
                          Variant::_clear_internal();
                        }
                        Variant::Variant((Variant *)local_58,false);
                        Variant::Variant((Variant *)local_78,"ordered");
                        pVVar9 = (Variant *)Dictionary::operator[]((Variant *)local_a0);
                        if (pVVar9 != (Variant *)local_58) {
                          if (Variant::needs_deinit[*(int *)pVVar9] != '\0') {
                            Variant::_clear_internal();
                          }
                          *(undefined4 *)pVVar9 = 0;
                          *(int *)pVVar9 = local_58[0];
                          *(undefined8 *)(pVVar9 + 8) = local_50;
                          *(undefined8 *)(pVVar9 + 0x10) = uStack_48;
                          local_58[0] = 0;
                        }
                        if (Variant::needs_deinit[local_78[0]] != '\0') {
                          Variant::_clear_internal();
                        }
                        if (Variant::needs_deinit[local_58[0]] != '\0') {
                          Variant::_clear_internal();
                        }
                        plVar1 = (long *)*param_2;
                        pcVar3 = *(code **)(*plVar1 + 0x170);
                        Dictionary::Dictionary(local_90,local_a0);
                        local_88 = (Object *)0x1068bf;
                        local_98 = (Object *)0x0;
                        local_80 = 10;
                        String::parse_latin1((StrRange *)&local_98);
                        (*pcVar3)((Dictionary *)&local_88,plVar1,(StrRange *)&local_98,local_90);
                        plVar1 = *(long **)(this_00 + 0x188);
                        if (plVar1 == (long *)0x0) {
LAB_00104630:
                          lVar10 = 0;
                        }
                        else {
                          iVar6 = (int)plVar1[2];
                          if (2 < iVar6) {
                            puVar8 = *(undefined8 **)(*(long *)(*plVar1 + 8) + 8);
                            pOVar2 = (Object *)*puVar8;
                            pOVar13 = pOVar2;
                            if (local_88 != pOVar2) {
                              *puVar8 = local_88;
                              if ((local_88 != (Object *)0x0) &&
                                 (cVar5 = RefCounted::reference(), cVar5 == '\0')) {
                                *puVar8 = 0;
                              }
                              pOVar13 = local_88;
                              if (((pOVar2 != (Object *)0x0) &&
                                  (cVar5 = RefCounted::unreference(), pOVar13 = local_88,
                                  cVar5 != '\0')) &&
                                 (cVar5 = predelete_handler(pOVar2), pOVar13 = local_88,
                                 cVar5 != '\0')) {
                                (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                                Memory::free_static(pOVar2,false);
                                pOVar13 = local_88;
                              }
                            }
                            if (((pOVar13 != (Object *)0x0) &&
                                (cVar5 = RefCounted::unreference(), pOVar2 = local_88, cVar5 != '\0'
                                )) && (cVar5 = predelete_handler(local_88), cVar5 != '\0')) {
                              (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                              Memory::free_static(pOVar2,false);
                            }
                            CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                            Dictionary::~Dictionary(local_90);
                            plVar1 = *(long **)(this_00 + 0x188);
                            if (plVar1 == (long *)0x0) goto LAB_00104630;
                            iVar6 = (int)plVar1[2];
                            if (2 < iVar6) {
                              if (**(long **)(*(long *)(*plVar1 + 8) + 8) == 0) {
                                uVar14 = 0x13f;
                                pcVar12 = 
                                "Condition \"peer->channels.get(CH_UNRELIABLE).is_null()\" is true. Returning: FAILED"
                                ;
                                goto LAB_001049cf;
                              }
                              if (*(undefined8 **)(this + 0x1f8) != (undefined8 *)0x0) {
                                for (pDVar4 = (Dictionary *)**(undefined8 **)(this + 0x1f8);
                                    pDVar4 != (Dictionary *)0x0;
                                    pDVar4 = *(Dictionary **)(pDVar4 + 8)) {
                                  plVar1 = (long *)*param_2;
                                  pcVar3 = *(code **)(*plVar1 + 0x170);
                                  Dictionary::Dictionary((Dictionary *)&local_88,pDVar4);
                                  Variant::Variant((Variant *)local_58,"id");
                                  pVVar9 = (Variant *)Dictionary::operator[]((Variant *)pDVar4);
                                  lVar10 = Variant::operator_cast_to_long(pVVar9);
                                  String::num_int64((long)local_90,(int)lVar10,true);
                                  (*pcVar3)((StrRange *)&local_98,plVar1,local_90,
                                            (Dictionary *)&local_88);
                                  CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
                                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                                    Variant::_clear_internal();
                                  }
                                  Dictionary::~Dictionary((Dictionary *)&local_88);
                                  if (local_98 == (Object *)0x0) {
                                    _err_print_error("add_peer",
                                                     "modules/webrtc/webrtc_multiplayer_peer.cpp",
                                                     0x143,
                                                  "Condition \"ch.is_null()\" is true. Returning: FAILED"
                                                  ,0,0);
                                    if (((local_98 != (Object *)0x0) &&
                                        (cVar5 = RefCounted::unreference(), pOVar2 = local_98,
                                        cVar5 != '\0')) &&
                                       (cVar5 = predelete_handler(local_98), cVar5 != '\0')) {
                                      (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                                      Memory::free_static(pOVar2,false);
                                    }
                                    goto LAB_001047c0;
                                  }
                                  if (*(long *)(this_00 + 0x188) == 0) {
                                    pauVar7 = (undefined1 (*) [16])
                                              operator_new(0x18,DefaultAllocator::alloc);
                                    *(undefined1 (**) [16])(this_00 + 0x188) = pauVar7;
                                    *(undefined4 *)pauVar7[1] = 0;
                                    *pauVar7 = (undefined1  [16])0x0;
                                  }
                                  pauVar7 = (undefined1 (*) [16])
                                            operator_new(0x20,DefaultAllocator::alloc);
                                  *pauVar7 = (undefined1  [16])0x0;
                                  pauVar7[1] = (undefined1  [16])0x0;
                                  if (local_98 != (Object *)0x0) {
                                    *(Object **)*pauVar7 = local_98;
                                    cVar5 = RefCounted::reference();
                                    if (cVar5 == '\0') {
                                      *(undefined8 *)*pauVar7 = 0;
                                    }
                                  }
                                  plVar1 = *(long **)(this_00 + 0x188);
                                  lVar10 = plVar1[1];
                                  *(undefined8 *)(*pauVar7 + 8) = 0;
                                  *(long **)(pauVar7[1] + 8) = plVar1;
                                  *(long *)pauVar7[1] = lVar10;
                                  if (lVar10 != 0) {
                                    *(undefined1 (**) [16])(lVar10 + 8) = pauVar7;
                                  }
                                  plVar1[1] = (long)pauVar7;
                                  if (*plVar1 == 0) {
                                    *plVar1 = (long)pauVar7;
                                  }
                                  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
                                  if (((local_98 != (Object *)0x0) &&
                                      (cVar5 = RefCounted::unreference(), pOVar2 = local_98,
                                      cVar5 != '\0')) &&
                                     (cVar5 = predelete_handler(local_98), cVar5 != '\0')) {
                                    (**(code **)(*(long *)pOVar2 + 0x140))();
                                    Memory::free_static(pOVar2,false);
                                  }
                                }
                              }
                              puVar8 = (undefined8 *)
                                       HashMap<int,Ref<WebRTCMultiplayerPeer::ConnectedPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<WebRTCMultiplayerPeer::ConnectedPeer>>>>
                                       ::operator[]((
                                                  HashMap<int,Ref<WebRTCMultiplayerPeer::ConnectedPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<WebRTCMultiplayerPeer::ConnectedPeer>>>>
                                                  *)(this + 0x1c0),local_ac);
                              pOVar2 = (Object *)*puVar8;
                              if (this_00 != (RefCounted *)pOVar2) {
                                *puVar8 = this_00;
                                cVar5 = RefCounted::reference();
                                if (cVar5 == '\0') {
                                  *puVar8 = 0;
                                }
                                if (((pOVar2 != (Object *)0x0) &&
                                    (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
                                   (cVar5 = predelete_handler(pOVar2), cVar5 != '\0')) {
                                  (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                                  Memory::free_static(pOVar2,false);
                                }
                              }
                              Dictionary::~Dictionary(local_a0);
                              local_b0 = 0;
                              goto LAB_001047d2;
                            }
                          }
                          lVar10 = (long)iVar6;
                        }
                        lVar11 = 2;
                        goto LAB_00104420;
                      }
                    }
                    lVar10 = (long)iVar6;
                  }
                  lVar11 = 1;
                  goto LAB_00104420;
                }
              }
              lVar10 = (long)iVar6;
            }
            lVar11 = 0;
LAB_00104420:
            _err_print_index_error
                      ("get","./core/templates/list.h",0x21c,lVar11,lVar10,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          _err_print_error("add_peer","modules/webrtc/webrtc_multiplayer_peer.cpp",0x129,
                           "Condition \"p_peer->get_connection_state() != WebRTCPeerConnection::STATE_NEW\" is true. Returning: ERR_INVALID_PARAMETER"
                           ,0,0);
        }
      }
    }
    else {
      _err_print_error("add_peer","modules/webrtc/webrtc_multiplayer_peer.cpp",0x122,
                       "Condition \"network_mode == MODE_CLIENT && p_peer_id != 1\" is true. Returning: ERR_INVALID_PARAMETER"
                       ,0,0);
    }
  }
  else if ((iVar6 == 1) && (param_3 == 1)) {
    _err_print_error("add_peer","modules/webrtc/webrtc_multiplayer_peer.cpp",0x123,
                     "Condition \"network_mode == MODE_SERVER && p_peer_id == 1\" is true. Returning: ERR_INVALID_PARAMETER"
                     ,0,0);
  }
  else {
    if (0 < param_3) goto LAB_00103983;
    _err_print_error("add_peer","modules/webrtc/webrtc_multiplayer_peer.cpp",0x124,
                     "Condition \"p_peer_id < 1 || p_peer_id > ~(1 << 31)\" is true. Returning: ERR_INVALID_PARAMETER"
                     ,0,0);
  }
  local_b0 = 0x1f;
LAB_001045fd:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WebRTCMultiplayerPeer::_bind_methods() */

void WebRTCMultiplayerPeer::_bind_methods(void)

{
  char cVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long *plVar5;
  MethodBind *pMVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  long in_FS_OFFSET;
  Array local_110 [8];
  long local_108 [2];
  long *local_f8;
  Variant *local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  char *pcStack_d0;
  undefined8 local_c8;
  Variant *local_b8;
  char *pcStack_b0;
  undefined8 local_a8;
  Variant *local_98;
  undefined *puStack_90;
  char *local_88;
  undefined8 local_80;
  Variant **local_78;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  puVar4 = PTR__LC90_00110240;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Array::Array(local_110);
  local_e8 = (Variant *)0x1068d7;
  local_e0 = 0;
  uVar8 = (uint)(Variant *)&local_78;
  local_78 = &local_e8;
  D_METHODP((char *)local_108,(char ***)"create_server",uVar8);
  Variant::Variant((Variant *)&local_78,local_110);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_e8 = (Variant *)&local_78;
  pMVar6 = create_method_bind<WebRTCMultiplayerPeer,Error,Array>(create_server);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)local_108,&local_e8,1);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar7 = local_f8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_f8[-1];
      local_f8 = (long *)0x0;
      if (lVar2 != 0) {
        lVar9 = 0;
        plVar7 = plVar5;
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108[0] != 0)) {
    StringName::unref();
  }
  Array::~Array(local_110);
  Array::Array(local_110);
  local_a8 = 0;
  local_b8 = (Variant *)puVar4;
  pcStack_b0 = "channels_config";
  auStack_70._0_8_ = &pcStack_b0;
  local_78 = &local_b8;
  D_METHODP((char *)local_108,(char ***)"create_client",uVar8);
  Variant::Variant((Variant *)&local_78,local_110);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_b8 = (Variant *)&local_78;
  pMVar6 = create_method_bind<WebRTCMultiplayerPeer,Error,int,Array>(create_client);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)local_108,&local_b8,1);
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
  plVar5 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar7 = local_f8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_f8[-1];
      local_f8 = (long *)0x0;
      if (lVar2 != 0) {
        lVar9 = 0;
        plVar7 = plVar5;
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108[0] != 0)) {
    StringName::unref();
  }
  Array::~Array(local_110);
  Array::Array(local_110);
  local_c8 = 0;
  local_d8 = puVar4;
  pcStack_d0 = "channels_config";
  auStack_70._0_8_ = &pcStack_d0;
  local_78 = (Variant **)&local_d8;
  D_METHODP((char *)local_108,(char ***)"create_mesh",uVar8);
  Variant::Variant((Variant *)&local_78,local_110);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_b8 = (Variant *)&local_78;
  pMVar6 = create_method_bind<WebRTCMultiplayerPeer,Error,int,Array>(create_mesh);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)local_108,&local_b8,1);
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
  plVar5 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar7 = local_f8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_f8[-1];
      local_f8 = (long *)0x0;
      if (lVar2 != 0) {
        lVar9 = 0;
        plVar7 = plVar5;
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108[0] != 0)) {
    StringName::unref();
  }
  Array::~Array(local_110);
  local_88 = "unreliable_lifetime";
  local_98 = (Variant *)&_LC91;
  puStack_90 = puVar4;
  auStack_70._8_8_ = &local_88;
  auStack_70._0_8_ = &puStack_90;
  local_80 = 0;
  local_78 = &local_98;
  D_METHODP((char *)local_108,(char ***)"add_peer",uVar8);
  Variant::Variant((Variant *)&local_78,1);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_98 = (Variant *)&local_78;
  pMVar6 = create_method_bind<WebRTCMultiplayerPeer,Error,Ref<WebRTCPeerConnection>,int,int>
                     (add_peer);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)local_108,&local_98,1);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar7 = local_f8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_f8[-1];
      local_f8 = (long *)0x0;
      if (lVar2 != 0) {
        lVar9 = 0;
        plVar7 = plVar5;
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108[0] != 0)) {
    StringName::unref();
  }
  local_98 = (Variant *)0x1068ca;
  puStack_90 = (undefined *)0x0;
  local_78 = &local_98;
  D_METHODP((char *)local_108,(char ***)"remove_peer",uVar8);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar6 = create_method_bind<WebRTCMultiplayerPeer,int>(remove_peer);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar7 = local_f8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_f8[-1];
      local_f8 = (long *)0x0;
      if (lVar2 != 0) {
        lVar9 = 0;
        plVar7 = plVar5;
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108[0] != 0)) {
    StringName::unref();
  }
  local_98 = (Variant *)0x1068ca;
  puStack_90 = (undefined *)0x0;
  local_78 = &local_98;
  D_METHODP((char *)local_108,(char ***)"has_peer",uVar8);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar6 = create_method_bind<WebRTCMultiplayerPeer,bool,int>(has_peer);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar7 = local_f8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_f8[-1];
      local_f8 = (long *)0x0;
      if (lVar2 != 0) {
        lVar9 = 0;
        plVar7 = plVar5;
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108[0] != 0)) {
    StringName::unref();
  }
  local_98 = (Variant *)0x1068ca;
  puStack_90 = (undefined *)0x0;
  local_78 = &local_98;
  D_METHODP((char *)local_108,(char ***)"get_peer",uVar8);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar6 = create_method_bind<WebRTCMultiplayerPeer,Dictionary,int>(get_peer);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar7 = local_f8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_f8[-1];
      local_f8 = (long *)0x0;
      if (lVar2 != 0) {
        lVar9 = 0;
        plVar7 = plVar5;
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_108,(char ***)"get_peers",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar6 = create_method_bind<WebRTCMultiplayerPeer,Dictionary>(get_peers);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)local_108,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = local_f8;
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar7 = local_f8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_f8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_f8[-1];
      local_f8 = (long *)0x0;
      if (lVar2 != 0) {
        lVar9 = 0;
        plVar7 = plVar5;
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_108[0] != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  return (uint)CONCAT71(0x1100,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1100,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* WebRTCMultiplayerPeer::is_class_ptr(void*) const */

uint __thiscall WebRTCMultiplayerPeer::is_class_ptr(WebRTCMultiplayerPeer *this,void *param_1)

{
  return (uint)CONCAT71(0x1100,(undefined4 *)param_1 ==
                               &MultiplayerPeer::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1100,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1100,(undefined4 *)param_1 == &PacketPeer::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1100,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1100,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* WebRTCMultiplayerPeer::_getv(StringName const&, Variant&) const */

undefined8 WebRTCMultiplayerPeer::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* WebRTCMultiplayerPeer::_setv(StringName const&, Variant const&) */

undefined8 WebRTCMultiplayerPeer::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* WebRTCMultiplayerPeer::_validate_propertyv(PropertyInfo&) const */

void WebRTCMultiplayerPeer::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* WebRTCMultiplayerPeer::_property_can_revertv(StringName const&) const */

undefined8 WebRTCMultiplayerPeer::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* WebRTCMultiplayerPeer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 WebRTCMultiplayerPeer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* WebRTCMultiplayerPeer::_notificationv(int, bool) */

void WebRTCMultiplayerPeer::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MethodBindTR<Dictionary>::_gen_argument_type(int) const */

undefined8 MethodBindTR<Dictionary>::_gen_argument_type(int param_1)

{
  return 0x1b;
}



/* MethodBindTR<Dictionary>::get_argument_meta(int) const */

undefined8 MethodBindTR<Dictionary>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Dictionary, int>::_gen_argument_type(int) const */

int __thiscall
MethodBindTR<Dictionary,int>::_gen_argument_type(MethodBindTR<Dictionary,int> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffe7) + 0x1b;
}



/* MethodBindTR<Dictionary, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTR<Dictionary,int>::get_argument_meta(MethodBindTR<Dictionary,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTR<bool, int>::_gen_argument_type(int) const */

char __thiscall MethodBindTR<bool,int>::_gen_argument_type(MethodBindTR<bool,int> *this,int param_1)

{
  return (param_1 == 0) + '\x01';
}



/* MethodBindTR<bool, int>::get_argument_meta(int) const */

byte __thiscall MethodBindTR<bool,int>::get_argument_meta(MethodBindTR<bool,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
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



/* MethodBindTR<Error, Ref<WebRTCPeerConnection>, int, int>::_gen_argument_type(int) const */

char __thiscall
MethodBindTR<Error,Ref<WebRTCPeerConnection>,int,int>::_gen_argument_type
          (MethodBindTR<Error,Ref<WebRTCPeerConnection>,int,int> *this,int param_1)

{
  return (-(param_1 == 0) & 0x16U) + 2;
}



/* MethodBindTR<Error, Ref<WebRTCPeerConnection>, int, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTR<Error,Ref<WebRTCPeerConnection>,int,int>::get_argument_meta
          (MethodBindTR<Error,Ref<WebRTCPeerConnection>,int,int> *this,int param_1)

{
  return -(param_1 - 1U < 2) & 3;
}



/* MethodBindTR<Error, int, Array>::_gen_argument_type(int) const */

undefined8 __thiscall
MethodBindTR<Error,int,Array>::_gen_argument_type(MethodBindTR<Error,int,Array> *this,int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_1 == 1) {
    uVar1 = 0x1c;
  }
  return uVar1;
}



/* MethodBindTR<Error, int, Array>::get_argument_meta(int) const */

byte __thiscall
MethodBindTR<Error,int,Array>::get_argument_meta(MethodBindTR<Error,int,Array> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTR<Error, Array>::_gen_argument_type(int) const */

char __thiscall
MethodBindTR<Error,Array>::_gen_argument_type(MethodBindTR<Error,Array> *this,int param_1)

{
  return (-(param_1 == 0) & 0x1aU) + 2;
}



/* MethodBindTR<Error, Array>::get_argument_meta(int) const */

undefined8 MethodBindTR<Error,Array>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Error, Array>::~MethodBindTR() */

void __thiscall MethodBindTR<Error,Array>::~MethodBindTR(MethodBindTR<Error,Array> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010fd90;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Error, Array>::~MethodBindTR() */

void __thiscall MethodBindTR<Error,Array>::~MethodBindTR(MethodBindTR<Error,Array> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010fd90;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Error, int, Array>::~MethodBindTR() */

void __thiscall MethodBindTR<Error,int,Array>::~MethodBindTR(MethodBindTR<Error,int,Array> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010fdf0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Error, int, Array>::~MethodBindTR() */

void __thiscall MethodBindTR<Error,int,Array>::~MethodBindTR(MethodBindTR<Error,int,Array> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010fdf0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Error, Ref<WebRTCPeerConnection>, int, int>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,Ref<WebRTCPeerConnection>,int,int>::~MethodBindTR
          (MethodBindTR<Error,Ref<WebRTCPeerConnection>,int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010fe50;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Error, Ref<WebRTCPeerConnection>, int, int>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,Ref<WebRTCPeerConnection>,int,int>::~MethodBindTR
          (MethodBindTR<Error,Ref<WebRTCPeerConnection>,int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010fe50;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010feb0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010feb0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<bool, int>::~MethodBindTR() */

void __thiscall MethodBindTR<bool,int>::~MethodBindTR(MethodBindTR<bool,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010ff10;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<bool, int>::~MethodBindTR() */

void __thiscall MethodBindTR<bool,int>::~MethodBindTR(MethodBindTR<bool,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010ff10;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Dictionary, int>::~MethodBindTR() */

void __thiscall MethodBindTR<Dictionary,int>::~MethodBindTR(MethodBindTR<Dictionary,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010ff70;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Dictionary, int>::~MethodBindTR() */

void __thiscall MethodBindTR<Dictionary,int>::~MethodBindTR(MethodBindTR<Dictionary,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010ff70;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Dictionary>::~MethodBindTR() */

void __thiscall MethodBindTR<Dictionary>::~MethodBindTR(MethodBindTR<Dictionary> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010ffd0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Dictionary>::~MethodBindTR() */

void __thiscall MethodBindTR<Dictionary>::~MethodBindTR(MethodBindTR<Dictionary> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010ffd0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010f8a8;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010f8a8;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* WebRTCMultiplayerPeer::_get_class_namev() const */

undefined8 * WebRTCMultiplayerPeer::_get_class_namev(void)

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
LAB_00106973:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00106973;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"WebRTCMultiplayerPeer");
      goto LAB_001069de;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"WebRTCMultiplayerPeer");
LAB_001069de:
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
LAB_00106a53:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00106a53;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_00106abe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_00106abe:
  return &_get_class_namev()::_class_name_static;
}



/* WebRTCMultiplayerPeer::get_class() const */

void WebRTCMultiplayerPeer::get_class(void)

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
            if (lVar5 == 0) goto LAB_00106d1f;
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
LAB_00106d1f:
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
    if (cVar6 != '\0') goto LAB_00106dd3;
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
              if (lVar5 == 0) goto LAB_00106e83;
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
LAB_00106e83:
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
      if (cVar6 != '\0') goto LAB_00106dd3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00106dd3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Dictionary>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Dictionary>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC5;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x1b;
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
      goto joined_r0x0010707c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010707c:
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
LAB_001073c8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001073c8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x001073e6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x001073e6:
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
LAB_001077c8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001077c8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001077e5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001077e5:
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
            if (lVar5 == 0) goto LAB_00107b1f;
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
LAB_00107b1f:
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
    if (cVar6 != '\0') goto LAB_00107bd3;
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
              if (lVar5 == 0) goto LAB_00107c93;
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
LAB_00107c93:
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
      if (cVar6 != '\0') goto LAB_00107bd3;
    }
    cVar6 = String::operator==(param_1,"PacketPeer");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_00107d3c;
    }
  }
LAB_00107bd3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00107d3c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WebRTCMultiplayerPeer::is_class(String const&) const */

undefined8 __thiscall WebRTCMultiplayerPeer::is_class(WebRTCMultiplayerPeer *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_00107dbf;
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
LAB_00107dbf:
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
    if (cVar5 != '\0') goto LAB_00107e73;
  }
  cVar5 = String::operator==(param_1,"WebRTCMultiplayerPeer");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = MultiplayerPeer::is_class((MultiplayerPeer *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00107e73:
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
LAB_00108048:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00108048;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00108065;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00108065:
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



/* WebRTCMultiplayerPeer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
WebRTCMultiplayerPeer::_get_property_listv(WebRTCMultiplayerPeer *this,List *param_1,bool param_2)

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
  local_78 = "WebRTCMultiplayerPeer";
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "WebRTCMultiplayerPeer";
  local_98 = 0;
  local_70 = 0x15;
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
LAB_00108498:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00108498;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001084b5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001084b5:
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
  StringName::StringName((StringName *)&local_78,"WebRTCMultiplayerPeer",false);
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



/* List<Ref<WebRTCDataChannel>, DefaultAllocator>::~List() */

undefined8 __thiscall
List<Ref<WebRTCDataChannel>,DefaultAllocator>::~List
          (List<Ref<WebRTCDataChannel>,DefaultAllocator> *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uStack_28;
  
  plVar7 = *(long **)this;
  if (plVar7 == (long *)0x0) {
    return uStack_28;
  }
  do {
    plVar1 = (long *)*plVar7;
    if (plVar1 == (long *)0x0) {
      if ((int)plVar7[2] != 0) {
        uVar6 = _err_print_error("~List","./core/templates/list.h",0x316,
                                 "Condition \"_data->size_cache\" is true.",0,0);
        return uVar6;
      }
      break;
    }
    if ((long *)plVar1[3] == plVar7) {
      lVar5 = plVar1[1];
      lVar2 = plVar1[2];
      *plVar7 = lVar5;
      if (plVar1 == (long *)plVar7[1]) {
        plVar7[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar5;
        lVar5 = plVar1[1];
      }
      if (lVar5 != 0) {
        *(long *)(lVar5 + 0x10) = lVar2;
      }
      if (*plVar1 != 0) {
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          pOVar3 = (Object *)*plVar1;
          cVar4 = predelete_handler(pOVar3);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
      }
      Memory::free_static(plVar1,false);
      *(int *)(plVar7 + 2) = (int)plVar7[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar7 = *(long **)this;
  } while ((int)plVar7[2] != 0);
  uVar6 = Memory::free_static(plVar7,false);
  return uVar6;
}



/* WebRTCMultiplayerPeer::ConnectedPeer::~ConnectedPeer() */

void __thiscall WebRTCMultiplayerPeer::ConnectedPeer::~ConnectedPeer(ConnectedPeer *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0010fa08;
  List<Ref<WebRTCDataChannel>,DefaultAllocator>::~List
            ((List<Ref<WebRTCDataChannel>,DefaultAllocator> *)(this + 0x188));
  if (*(long *)(this + 0x180) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x180);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_0010f8a8;
  Object::~Object((Object *)this);
  return;
}



/* WebRTCMultiplayerPeer::ConnectedPeer::~ConnectedPeer() */

void __thiscall WebRTCMultiplayerPeer::ConnectedPeer::~ConnectedPeer(ConnectedPeer *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0010fa08;
  List<Ref<WebRTCDataChannel>,DefaultAllocator>::~List
            ((List<Ref<WebRTCDataChannel>,DefaultAllocator> *)(this + 0x188));
  if (*(long *)(this + 0x180) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x180);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_0010f8a8;
  Object::~Object((Object *)this);
  operator_delete(this,0x198);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<int, Ref<WebRTCMultiplayerPeer::ConnectedPeer>, HashMapHasherDefault,
   HashMapComparatorDefault<int>, DefaultTypedAllocator<HashMapElement<int,
   Ref<WebRTCMultiplayerPeer::ConnectedPeer> > > >::operator[](int const&) */

undefined1 * __thiscall
HashMap<int,Ref<WebRTCMultiplayerPeer::ConnectedPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<WebRTCMultiplayerPeer::ConnectedPeer>>>>
::operator[](HashMap<int,Ref<WebRTCMultiplayerPeer::ConnectedPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<WebRTCMultiplayerPeer::ConnectedPeer>>>>
             *this,int *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
  Object *pOVar4;
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
  char cVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  ulong uVar42;
  undefined8 uVar43;
  void *__s_00;
  undefined1 (*pauVar44) [16];
  ulong uVar45;
  int iVar46;
  ulong uVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  ulong uVar51;
  undefined8 uVar52;
  uint uVar53;
  ulong uVar54;
  long lVar55;
  uint uVar56;
  uint uVar57;
  undefined1 (*pauVar58) [16];
  void *local_70;
  
  local_70 = *(void **)(this + 8);
  uVar42 = (ulong)*(uint *)(this + 0x28);
  uVar40 = *param_1;
  uVar41 = *(uint *)(hash_table_size_primes + uVar42 * 4);
  uVar54 = CONCAT44(0,uVar41);
  if (local_70 == (void *)0x0) {
    uVar42 = uVar54 * 4;
    uVar51 = uVar54 * 8;
    uVar43 = Memory::alloc_static(uVar42,false);
    *(undefined8 *)(this + 0x10) = uVar43;
    local_70 = (void *)Memory::alloc_static(uVar51,false);
    *(void **)(this + 8) = local_70;
    if (uVar41 == 0) {
      iVar46 = *(int *)(this + 0x2c);
      uVar40 = *param_1;
      if (local_70 == (void *)0x0) goto LAB_00108bf3;
    }
    else {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)local_70 + uVar51)) &&
         (local_70 < (void *)((long)pvVar3 + uVar42))) {
        uVar42 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar42 * 4) = 0;
          *(undefined8 *)((long)local_70 + uVar42 * 8) = 0;
          uVar42 = uVar42 + 1;
        } while (uVar54 != uVar42);
        iVar46 = *(int *)(this + 0x2c);
        uVar40 = *param_1;
      }
      else {
        memset(pvVar3,0,uVar42);
        memset(local_70,0,uVar51);
        iVar46 = *(int *)(this + 0x2c);
        uVar40 = *param_1;
      }
    }
    if (iVar46 != 0) {
      uVar42 = (ulong)*(uint *)(this + 0x28);
      lVar55 = *(long *)(this + 0x10);
      goto LAB_00108f6b;
    }
  }
  else {
    iVar46 = *(int *)(this + 0x2c);
    if (iVar46 != 0) {
      uVar51 = *(ulong *)(hash_table_size_primes_inv + uVar42 * 8);
      uVar39 = (uVar40 >> 0x10 ^ uVar40) * -0x7a143595;
      uVar39 = (uVar39 ^ uVar39 >> 0xd) * -0x3d4d51cb;
      uVar56 = uVar39 ^ uVar39 >> 0x10;
      if (uVar39 == uVar39 >> 0x10) {
        uVar56 = 1;
        uVar47 = uVar51;
      }
      else {
        uVar47 = uVar56 * uVar51;
      }
      lVar55 = *(long *)(this + 0x10);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar54;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar47;
      lVar48 = SUB168(auVar5 * auVar21,8);
      uVar39 = *(uint *)(lVar55 + lVar48 * 4);
      uVar57 = SUB164(auVar5 * auVar21,8);
      if (uVar39 != 0) {
        uVar53 = 0;
        do {
          if ((uVar56 == uVar39) &&
             (uVar40 == *(uint *)(*(long *)((long)local_70 + lVar48 * 8) + 0x10))) {
            return (undefined1 *)(*(long *)((long)local_70 + (ulong)uVar57 * 8) + 0x18);
          }
          uVar53 = uVar53 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (uVar57 + 1) * uVar51;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar54;
          lVar48 = SUB168(auVar6 * auVar22,8);
          uVar39 = *(uint *)(lVar55 + lVar48 * 4);
          uVar57 = SUB164(auVar6 * auVar22,8);
        } while ((uVar39 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = uVar39 * uVar51, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar54, auVar8._8_8_ = 0,
                auVar8._0_8_ = ((uVar57 + uVar41) - SUB164(auVar7 * auVar23,8)) * uVar51,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar54, uVar53 <= SUB164(auVar8 * auVar24,8)));
      }
LAB_00108f6b:
      uVar47 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar42 * 4));
      uVar51 = *(ulong *)(hash_table_size_primes_inv + uVar42 * 8);
      uVar41 = (uVar40 >> 0x10 ^ uVar40) * -0x7a143595;
      uVar41 = (uVar41 ^ uVar41 >> 0xd) * -0x3d4d51cb;
      uVar39 = uVar41 ^ uVar41 >> 0x10;
      if (uVar41 == uVar41 >> 0x10) {
        uVar39 = 1;
        uVar45 = uVar51;
      }
      else {
        uVar45 = uVar39 * uVar51;
      }
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar47;
      auVar33._8_8_ = 0;
      auVar33._0_8_ = uVar45;
      lVar48 = SUB168(auVar17 * auVar33,8);
      uVar41 = *(uint *)(lVar55 + lVar48 * 4);
      uVar56 = SUB164(auVar17 * auVar33,8);
      if (uVar41 != 0) {
        uVar57 = 0;
        do {
          if ((uVar39 == uVar41) &&
             (*(uint *)(*(long *)((long)local_70 + lVar48 * 8) + 0x10) == uVar40)) {
            lVar55 = *(long *)((long)local_70 + (ulong)uVar56 * 8);
            pOVar4 = *(Object **)(lVar55 + 0x18);
            if (pOVar4 != (Object *)0x0) {
              *(undefined8 *)(lVar55 + 0x18) = 0;
              cVar38 = RefCounted::unreference();
              if ((cVar38 != '\0') && (cVar38 = predelete_handler(pOVar4), cVar38 != '\0')) {
                (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
                Memory::free_static(pOVar4,false);
              }
            }
            pauVar44 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar56 * 8);
            goto LAB_00108f51;
          }
          uVar57 = uVar57 + 1;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = (uVar56 + 1) * uVar51;
          auVar34._8_8_ = 0;
          auVar34._0_8_ = uVar47;
          lVar48 = SUB168(auVar18 * auVar34,8);
          uVar41 = *(uint *)(lVar55 + lVar48 * 4);
          uVar56 = SUB164(auVar18 * auVar34,8);
        } while ((uVar41 != 0) &&
                (auVar19._8_8_ = 0, auVar19._0_8_ = uVar41 * uVar51, auVar35._8_8_ = 0,
                auVar35._0_8_ = uVar47, auVar20._8_8_ = 0,
                auVar20._0_8_ =
                     ((*(uint *)(hash_table_size_primes + uVar42 * 4) + uVar56) -
                     SUB164(auVar19 * auVar35,8)) * uVar51, auVar36._8_8_ = 0,
                auVar36._0_8_ = uVar47, uVar57 <= SUB164(auVar20 * auVar36,8)));
      }
    }
  }
LAB_00108bf3:
  if ((float)uVar54 * __LC20 < (float)(iVar46 + 1)) {
    uVar40 = *(uint *)(this + 0x28);
    if (uVar40 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      pauVar44 = (undefined1 (*) [16])0x0;
      goto LAB_00108f51;
    }
    uVar42 = (ulong)(uVar40 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar41 = *(uint *)(hash_table_size_primes + (ulong)uVar40 * 4);
    if (uVar40 + 1 < 2) {
      uVar42 = 2;
    }
    uVar40 = *(uint *)(hash_table_size_primes + uVar42 * 4);
    uVar51 = (ulong)uVar40;
    *(int *)(this + 0x28) = (int)uVar42;
    pvVar3 = *(void **)(this + 0x10);
    uVar42 = uVar51 * 4;
    uVar54 = uVar51 * 8;
    uVar43 = Memory::alloc_static(uVar42,false);
    *(undefined8 *)(this + 0x10) = uVar43;
    __s_00 = (void *)Memory::alloc_static(uVar54,false);
    *(void **)(this + 8) = __s_00;
    if (uVar40 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar54)) && (__s_00 < (void *)((long)__s + uVar42))) {
        uVar42 = 0;
        do {
          *(undefined4 *)((long)__s + uVar42 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar42 * 8) = 0;
          uVar42 = uVar42 + 1;
        } while (uVar42 != uVar51);
      }
      else {
        memset(__s,0,uVar42);
        memset(__s_00,0,uVar54);
      }
    }
    if (uVar41 != 0) {
      uVar42 = 0;
      do {
        uVar40 = *(uint *)((long)pvVar3 + uVar42 * 4);
        if (uVar40 != 0) {
          lVar55 = *(long *)(this + 0x10);
          uVar57 = 0;
          uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar54 = CONCAT44(0,uVar39);
          lVar48 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)uVar40 * lVar48;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar54;
          lVar49 = SUB168(auVar9 * auVar25,8);
          puVar1 = (uint *)(lVar55 + lVar49 * 4);
          iVar46 = SUB164(auVar9 * auVar25,8);
          uVar56 = *puVar1;
          uVar43 = *(undefined8 *)((long)local_70 + uVar42 * 8);
          while (uVar56 != 0) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar56 * lVar48;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar54;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)((uVar39 + iVar46) - SUB164(auVar10 * auVar26,8)) * lVar48;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar54;
            uVar53 = SUB164(auVar11 * auVar27,8);
            uVar52 = uVar43;
            if (uVar53 < uVar57) {
              *puVar1 = uVar40;
              puVar2 = (undefined8 *)((long)__s_00 + lVar49 * 8);
              uVar52 = *puVar2;
              *puVar2 = uVar43;
              uVar40 = uVar56;
              uVar57 = uVar53;
            }
            uVar57 = uVar57 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(iVar46 + 1) * lVar48;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar54;
            lVar49 = SUB168(auVar12 * auVar28,8);
            puVar1 = (uint *)(lVar55 + lVar49 * 4);
            iVar46 = SUB164(auVar12 * auVar28,8);
            uVar43 = uVar52;
            uVar56 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar49 * 8) = uVar43;
          *puVar1 = uVar40;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar42 = uVar42 + 1;
      } while (uVar41 != uVar42);
      Memory::free_static(local_70,false);
      Memory::free_static(pvVar3,false);
    }
  }
  iVar46 = *param_1;
  pauVar44 = (undefined1 (*) [16])operator_new(0x20,"");
  *(int *)pauVar44[1] = iVar46;
  *(undefined8 *)(pauVar44[1] + 8) = 0;
  *pauVar44 = (undefined1  [16])0x0;
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar44;
  }
  else {
    *puVar2 = pauVar44;
    *(undefined8 **)(*pauVar44 + 8) = puVar2;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar44;
  uVar40 = ((uint)*param_1 >> 0x10 ^ *param_1) * -0x7a143595;
  uVar41 = (uVar40 ^ uVar40 >> 0xd) * -0x3d4d51cb;
  uVar40 = uVar41 ^ uVar41 >> 0x10;
  if (uVar41 == uVar41 >> 0x10) {
    uVar42 = 1;
    uVar40 = 1;
  }
  else {
    uVar42 = (ulong)uVar40;
  }
  lVar55 = *(long *)(this + 0x10);
  uVar56 = 0;
  uVar41 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar54 = CONCAT44(0,uVar41);
  lVar48 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar42 * lVar48;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar54;
  lVar50 = SUB168(auVar13 * auVar29,8);
  lVar49 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar55 + lVar50 * 4);
  iVar46 = SUB164(auVar13 * auVar29,8);
  uVar39 = *puVar1;
  pauVar37 = pauVar44;
  while (uVar39 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar39 * lVar48;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar54;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar41 + iVar46) - SUB164(auVar14 * auVar30,8)) * lVar48;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar54;
    uVar57 = SUB164(auVar15 * auVar31,8);
    pauVar58 = pauVar37;
    if (uVar57 < uVar56) {
      *puVar1 = uVar40;
      puVar2 = (undefined8 *)(lVar49 + lVar50 * 8);
      pauVar58 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar37;
      uVar40 = uVar39;
      uVar56 = uVar57;
    }
    uVar56 = uVar56 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar46 + 1) * lVar48;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar54;
    lVar50 = SUB168(auVar16 * auVar32,8);
    puVar1 = (uint *)(lVar55 + lVar50 * 4);
    iVar46 = SUB164(auVar16 * auVar32,8);
    pauVar37 = pauVar58;
    uVar39 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar49 + lVar50 * 8) = pauVar37;
  *puVar1 = uVar40;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00108f51:
  return pauVar44[1] + 8;
}



/* WebRTCMultiplayerPeer::remove_peer(int) [clone .cold] */

void WebRTCMultiplayerPeer::remove_peer(int param_1)

{
  code *pcVar1;
  int *unaff_R13;
  HashMap<int,Ref<WebRTCMultiplayerPeer::ConnectedPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<WebRTCMultiplayerPeer::ConnectedPeer>>>>
  *unaff_retaddr;
  
  HashMap<int,Ref<WebRTCMultiplayerPeer::ConnectedPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<WebRTCMultiplayerPeer::ConnectedPeer>>>>
  ::erase(unaff_retaddr,unaff_R13);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WebRTCMultiplayerPeer::poll() [clone .cold] */

void WebRTCMultiplayerPeer::poll(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WebRTCMultiplayerPeer::add_peer(Ref<WebRTCPeerConnection>, int, int) [clone .cold] */

void WebRTCMultiplayerPeer::add_peer(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WebRTCMultiplayerPeer::_bind_methods() [clone .cold] */

void WebRTCMultiplayerPeer::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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



/* WARNING: Removing unreachable block (ram,0x001094a8) */
/* WARNING: Removing unreachable block (ram,0x0010963d) */
/* WARNING: Removing unreachable block (ram,0x00109649) */
/* String vformat<int>(String const&, int const) */

String * vformat<int>(String *param_1,int param_2)

{
  Variant *this;
  int in_EDX;
  undefined4 in_register_00000034;
  int iVar1;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,in_EDX);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar1 = (int)local_c8;
  Array::resize(iVar1);
  this = (Variant *)Array::operator[](iVar1);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,(bool *)CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)param_1 = local_c0[0];
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



/* WARNING: Removing unreachable block (ram,0x001097e0) */
/* WARNING: Removing unreachable block (ram,0x00109975) */
/* WARNING: Removing unreachable block (ram,0x00109981) */
/* String vformat<int, int>(String const&, int const, int const) */

String * vformat<int,int>(String *param_1,int param_2,int param_3)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int in_ECX;
  undefined4 in_register_00000034;
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
  Variant::Variant(local_70,in_ECX);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,(bool *)CONCAT44(in_register_00000034,param_2));
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
  String::split(local_58,SUB81(param_1,0),0x1099b2);
  if ((local_50 != (long *)0x0) && (2 < local_50[-1])) {
    local_60 = 0;
    local_48 = &_LC40;
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
        goto LAB_00109a8d;
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
  local_48 = &_LC40;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)this);
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
LAB_00109a8d:
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
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
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



/* MethodBind* create_method_bind<WebRTCMultiplayerPeer, Error, Array>(Error
   (WebRTCMultiplayerPeer::*)(Array)) */

MethodBind * create_method_bind<WebRTCMultiplayerPeer,Error,Array>(_func_Error_Array *param_1)

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
  *(_func_Error_Array **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010fd90;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "WebRTCMultiplayerPeer";
  local_30 = 0x15;
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



/* MethodBind* create_method_bind<WebRTCMultiplayerPeer, Error, int, Array>(Error
   (WebRTCMultiplayerPeer::*)(int, Array)) */

MethodBind *
create_method_bind<WebRTCMultiplayerPeer,Error,int,Array>(_func_Error_int_Array *param_1)

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
  *(_func_Error_int_Array **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010fdf0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "WebRTCMultiplayerPeer";
  local_30 = 0x15;
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



/* MethodBind* create_method_bind<WebRTCMultiplayerPeer, Error, Ref<WebRTCPeerConnection>, int,
   int>(Error (WebRTCMultiplayerPeer::*)(Ref<WebRTCPeerConnection>, int, int)) */

MethodBind *
create_method_bind<WebRTCMultiplayerPeer,Error,Ref<WebRTCPeerConnection>,int,int>
          (_func_Error_Ref_int_int *param_1)

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
  *(_func_Error_Ref_int_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010fe50;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 3;
  local_40 = 0;
  local_38 = "WebRTCMultiplayerPeer";
  local_30 = 0x15;
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



/* MethodBind* create_method_bind<WebRTCMultiplayerPeer, int>(void (WebRTCMultiplayerPeer::*)(int))
    */

MethodBind * create_method_bind<WebRTCMultiplayerPeer,int>(_func_void_int *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0010feb0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "WebRTCMultiplayerPeer";
  local_30 = 0x15;
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



/* MethodBind* create_method_bind<WebRTCMultiplayerPeer, bool, int>(bool
   (WebRTCMultiplayerPeer::*)(int)) */

MethodBind * create_method_bind<WebRTCMultiplayerPeer,bool,int>(_func_bool_int *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0010ff10;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "WebRTCMultiplayerPeer";
  local_30 = 0x15;
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



/* MethodBind* create_method_bind<WebRTCMultiplayerPeer, Dictionary, int>(Dictionary
   (WebRTCMultiplayerPeer::*)(int)) */

MethodBind * create_method_bind<WebRTCMultiplayerPeer,Dictionary,int>(_func_Dictionary_int *param_1)

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
  *(_func_Dictionary_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010ff70;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "WebRTCMultiplayerPeer";
  local_30 = 0x15;
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



/* MethodBind* create_method_bind<WebRTCMultiplayerPeer, Dictionary>(Dictionary
   (WebRTCMultiplayerPeer::*)()) */

MethodBind * create_method_bind<WebRTCMultiplayerPeer,Dictionary>(_func_Dictionary *param_1)

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
  *(_func_Dictionary **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010ffd0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "WebRTCMultiplayerPeer";
  local_30 = 0x15;
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



/* WebRTCMultiplayerPeer::_initialize_classv() */

void WebRTCMultiplayerPeer::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_70;
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
          if ((code *)PTR__bind_methods_00114010 != RefCounted::_bind_methods) {
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
      if ((code *)PTR__bind_methods_00114008 != PacketPeer::_bind_methods) {
        MultiplayerPeer::_bind_methods();
      }
      MultiplayerPeer::initialize_class()::initialized = '\x01';
    }
    local_58 = "MultiplayerPeer";
    local_68 = 0;
    local_50 = 0xf;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "WebRTCMultiplayerPeer";
    local_70 = 0;
    local_50 = 0x15;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
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
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x0010ab18) */
/* WARNING: Removing unreachable block (ram,0x0010acad) */
/* WARNING: Removing unreachable block (ram,0x0010acb9) */
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



/* MethodBindTR<Dictionary>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<Dictionary>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
  long local_68;
  long local_60;
  char *local_58;
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
    if (local_58 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC103,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_58 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar6 = (long *)(local_60 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010aec0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
      (*(code *)pVVar4)((Dictionary *)&local_58);
      Variant::Variant((Variant *)local_48,(Dictionary *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      Dictionary::~Dictionary((Dictionary *)&local_58);
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
LAB_0010aec0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Dictionary>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Dictionary>::validated_call
          (MethodBindTR<Dictionary> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant **ppVVar1;
  Variant **ppVVar2;
  code *pcVar3;
  long *plVar4;
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
      local_48 = (Variant **)0x10ad08;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Dictionary *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Dictionary *)&local_48,0,0);
      ppVVar2 = local_48;
      if (local_48 != (Variant **)0x0) {
        LOCK();
        ppVVar1 = local_48 + -2;
        *ppVVar1 = *ppVVar1 + -1;
        UNLOCK();
        if (*ppVVar1 == (Variant *)0x0) {
          local_48 = (Variant **)0x0;
          Memory::free_static(ppVVar2 + -2,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010b1c9;
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
  (*pcVar3)((Dictionary *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Dictionary::operator=((Dictionary *)(param_3 + 8),(Dictionary *)&local_48);
  Dictionary::~Dictionary((Dictionary *)&local_48);
LAB_0010b1c9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Dictionary>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Dictionary>::ptrcall
          (MethodBindTR<Dictionary> *this,Object *param_1,void **param_2,void *param_3)

{
  void **ppvVar1;
  void **ppvVar2;
  code *pcVar3;
  long *plVar4;
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
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (void **)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x10ad08;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Dictionary *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Dictionary *)&local_48,0,0);
      ppvVar2 = local_48;
      if (local_48 != (void **)0x0) {
        LOCK();
        ppvVar1 = local_48 + -2;
        *ppvVar1 = (void *)((long)*ppvVar1 + -1);
        UNLOCK();
        if (*ppvVar1 == (void *)0x0) {
          local_48 = (void **)0x0;
          Memory::free_static(ppvVar2 + -2,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010b3ba;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar3 = *(code **)(pcVar3 + (long)param_2 + -1);
  }
  (*pcVar3)((Dictionary *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Dictionary::operator=((Dictionary *)param_3,(Dictionary *)&local_48);
  Dictionary::~Dictionary((Dictionary *)&local_48);
LAB_0010b3ba:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Dictionary, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Dictionary,int>::validated_call
          (MethodBindTR<Dictionary,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  char *pcVar1;
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
      vformat<StringName>((Dictionary *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Dictionary *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010b5af;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar2)((Dictionary *)&local_48,param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  Dictionary::operator=((Dictionary *)(param_3 + 8),(Dictionary *)&local_48);
  Dictionary::~Dictionary((Dictionary *)&local_48);
LAB_0010b5af:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Dictionary, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Dictionary,int>::ptrcall
          (MethodBindTR<Dictionary,int> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
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
      vformat<StringName>((Dictionary *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Dictionary *)&local_48,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
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
      goto LAB_0010b7bd;
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
  (*pcVar2)((Dictionary *)&local_48,param_1 + *(long *)(this + 0x60),**param_2);
  Dictionary::operator=((Dictionary *)param_3,(Dictionary *)&local_48);
  Dictionary::~Dictionary((Dictionary *)&local_48);
LAB_0010b7bd:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<bool,int>::validated_call
          (MethodBindTR<bool,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  char *pcVar1;
  Variant VVar2;
  code *pcVar3;
  long *plVar4;
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
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
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
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010b9b8;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar2 = (Variant)(*pcVar3)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  param_3[8] = VVar2;
LAB_0010b9b8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<bool,int>::ptrcall
          (MethodBindTR<bool,int> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  undefined1 uVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
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
    if (local_48 == (char *)*plVar4) {
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
                       ,(StringName *)&local_48,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010bbb7;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  uVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60),**param_2);
  *(undefined1 *)param_3 = uVar2;
LAB_0010bbb7:
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
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar3;
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
      pVVar3 = param_2[0x23];
      if (pVVar3 == (Variant *)0x0) {
        pVVar3 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar3 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar3) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010bf64;
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
                    /* WARNING: Could not recover jumptable at 0x0010bdcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0010bf64:
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
      goto LAB_0010c185;
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
                    /* WARNING: Could not recover jumptable at 0x0010bfc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0010c185:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, int, Array>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Error,int,Array>::validated_call
          (MethodBindTR<Error,int,Array> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  code *pcVar4;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0x35;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((Array *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      lVar1 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar3 = (long *)(local_60 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c204;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  lVar1 = *(long *)(this + 0x60);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + lVar1) + -1);
  }
  Array::Array((Array *)&local_58,(Array *)(param_2[1] + 8));
  uVar2 = (*pcVar4)(param_1 + lVar1,*(undefined4 *)(*param_2 + 8),(Array *)&local_58);
  *(ulong *)(param_3 + 8) = (ulong)uVar2;
  Array::~Array((Array *)&local_58);
LAB_0010c204:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, int, Array>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Error,int,Array>::ptrcall
          (MethodBindTR<Error,int,Array> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  code *pcVar4;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0x35;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((Array *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      lVar1 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar3 = (long *)(local_60 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c40e;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  lVar1 = *(long *)(this + 0x60);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + lVar1) + -1);
  }
  Array::Array((Array *)&local_58,(Array *)param_2[1]);
                    /* WARNING: Load size is inaccurate */
  uVar2 = (*pcVar4)(param_1 + lVar1,**param_2,(Array *)&local_58);
  *(ulong *)param_3 = (ulong)uVar2;
  Array::~Array((Array *)&local_58);
LAB_0010c40e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, Array>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Error,Array>::validated_call
          (MethodBindTR<Error,Array> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
  long *plVar4;
  code *pcVar5;
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
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c607;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar5 = *(code **)(this + 0x58);
  lVar1 = *(long *)(this + 0x60);
  if (((ulong)pcVar5 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)(param_1 + lVar1) + -1);
  }
  Array::Array((Array *)&local_48,(Array *)(*param_2 + 8));
  uVar3 = (*pcVar5)(param_1 + lVar1,(Array *)&local_48);
  *(ulong *)(param_3 + 8) = (ulong)uVar3;
  Array::~Array((Array *)&local_48);
LAB_0010c607:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, Array>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Error,Array>::ptrcall
          (MethodBindTR<Error,Array> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
  long *plVar4;
  code *pcVar5;
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
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c822;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar5 = *(code **)(this + 0x58);
  lVar1 = *(long *)(this + 0x60);
  if (((ulong)pcVar5 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)(param_1 + lVar1) + -1);
  }
  Array::Array((Array *)&local_48,(Array *)*param_2);
  uVar3 = (*pcVar5)(param_1 + lVar1,(Array *)&local_48);
  *(ulong *)param_3 = (ulong)uVar3;
  Array::~Array((Array *)&local_48);
LAB_0010c822:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, Ref<WebRTCPeerConnection>, int, int>::validated_call(Object*, Variant
   const**, Variant*) const */

void __thiscall
MethodBindTR<Error,Ref<WebRTCPeerConnection>,int,int>::validated_call
          (MethodBindTR<Error,Ref<WebRTCPeerConnection>,int,int> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  Object *pOVar4;
  char cVar5;
  uint uVar6;
  Object *pOVar7;
  long *plVar8;
  code *pcVar9;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar8 = *(long **)(param_1 + 0x118);
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar8 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_68 == (Object *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x10ad08;
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010caf3;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar9 = *(code **)(this + 0x58);
  lVar3 = *(long *)(this + 0x60);
  if (((ulong)pcVar9 & 1) != 0) {
    pcVar9 = *(code **)(pcVar9 + *(long *)(param_1 + lVar3) + -1);
  }
  uVar1 = *(undefined4 *)(param_2[2] + 8);
  uVar2 = *(undefined4 *)(param_2[1] + 8);
  Variant::Variant((Variant *)local_58,*(Object **)(*param_2 + 0x10));
  local_68 = (Object *)0x0;
  pOVar7 = (Object *)Variant::get_validated_object();
  pOVar4 = local_68;
  if (pOVar7 != local_68) {
    if (pOVar7 == (Object *)0x0) {
      if (local_68 != (Object *)0x0) {
        local_68 = (Object *)0x0;
LAB_0010caa4:
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          cVar5 = predelete_handler(pOVar4);
          if (cVar5 != '\0') {
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
            Memory::free_static(pOVar4,false);
          }
        }
      }
    }
    else {
      pOVar7 = (Object *)__dynamic_cast(pOVar7,&Object::typeinfo,&WebRTCPeerConnection::typeinfo,0);
      if (pOVar4 != pOVar7) {
        local_68 = pOVar7;
        if (pOVar7 != (Object *)0x0) {
          cVar5 = RefCounted::reference();
          if (cVar5 == '\0') {
            local_68 = (Object *)0x0;
          }
        }
        if (pOVar4 != (Object *)0x0) goto LAB_0010caa4;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  uVar6 = (*pcVar9)(param_1 + lVar3,(StringName *)&local_68,uVar2,uVar1);
  *(ulong *)(param_3 + 8) = (ulong)uVar6;
  if (local_68 != (Object *)0x0) {
    cVar5 = RefCounted::unreference();
    pOVar4 = local_68;
    if (cVar5 != '\0') {
      cVar5 = predelete_handler(local_68);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
LAB_0010caf3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, Ref<WebRTCPeerConnection>, int, int>::ptrcall(Object*, void const**, void*)
   const */

void __thiscall
MethodBindTR<Error,Ref<WebRTCPeerConnection>,int,int>::ptrcall
          (MethodBindTR<Error,Ref<WebRTCPeerConnection>,int,int> *this,Object *param_1,
          void **param_2,void *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  Object *pOVar4;
  char cVar5;
  uint uVar6;
  long *plVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar7 = *(long **)(param_1 + 0x118);
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar7 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (Object *)*plVar7) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x10ad08;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010cdda;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar8 = *(code **)(this + 0x58);
  lVar3 = *(long *)(this + 0x60);
  if (((ulong)pcVar8 & 1) != 0) {
    pcVar8 = *(code **)(pcVar8 + *(long *)(param_1 + lVar3) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  uVar1 = *param_2[2];
                    /* WARNING: Load size is inaccurate */
  uVar2 = *param_2[1];
                    /* WARNING: Load size is inaccurate */
  if (((long *)*param_2 == (long *)0x0) || (local_58 = **param_2, local_58 == (Object *)0x0)) {
LAB_0010cdaa:
    local_58 = (Object *)0x0;
  }
  else {
    cVar5 = RefCounted::init_ref();
    if (cVar5 == '\0') goto LAB_0010cdaa;
  }
  uVar6 = (*pcVar8)(param_1 + lVar3,(StringName *)&local_58,uVar2,uVar1);
  *(ulong *)param_3 = (ulong)uVar6;
  if (local_58 != (Object *)0x0) {
    cVar5 = RefCounted::unreference();
    pOVar4 = local_58;
    if (cVar5 != '\0') {
      cVar5 = predelete_handler(local_58);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
LAB_0010cdda:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<bool,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  long *plVar10;
  long lVar11;
  undefined4 in_register_00000014;
  long *plVar12;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar13;
  Variant *pVVar14;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar12 != (long *)0x0) && (plVar12[1] != 0)) && (*(char *)(plVar12[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar12[1] == 0) {
      plVar10 = (long *)plVar12[0x23];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
      }
    }
    else {
      plVar10 = (long *)(plVar12[1] + 0x20);
    }
    if (local_58 == (char *)*plVar10) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC103,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar5 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar12 = (long *)(local_58 + -0x10);
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d0c0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar14 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar13 = param_2[5];
    if (pVVar13 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010d100;
LAB_0010d0f0:
      pVVar13 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar13 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010d100:
        uVar9 = 4;
        goto LAB_0010d0b5;
      }
      if (in_R8D == 1) goto LAB_0010d0f0;
      lVar11 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar11) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar13 = pVVar13 + lVar11 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar14 & 1) != 0) {
      pVVar14 = *(Variant **)(pVVar14 + *(long *)((long)plVar12 + (long)pVVar1) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar13,2);
    uVar4 = _LC107;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar8 = Variant::operator_cast_to_int(pVVar13);
    bVar7 = (bool)(*(code *)pVVar14)((Variant *)((long)plVar12 + (long)pVVar1),iVar8);
    Variant::Variant((Variant *)local_48,bVar7);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar9 = 3;
LAB_0010d0b5:
    *in_R9 = uVar9;
    in_R9[2] = 1;
  }
LAB_0010d0c0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Dictionary, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<Dictionary,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
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
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_68 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC103,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      pcVar5 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar11 = (long *)(local_68 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d470;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar12 = param_2[5];
    if (pVVar12 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010d4c0;
LAB_0010d4b0:
      pVVar12 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010d4c0:
        uVar8 = 4;
        goto LAB_0010d465;
      }
      if (in_R8D == 1) goto LAB_0010d4b0;
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
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar12,2);
    uVar4 = _LC107;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar7 = Variant::operator_cast_to_int(pVVar12);
    (*(code *)pVVar13)((Dictionary *)&local_68,(Variant *)((long)plVar11 + (long)pVVar1),iVar7);
    Variant::Variant((Variant *)local_58,(Dictionary *)&local_68);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    Dictionary::~Dictionary((Dictionary *)&local_68);
  }
  else {
    uVar8 = 3;
LAB_0010d465:
    *in_R9 = uVar8;
    in_R9[2] = 1;
  }
LAB_0010d470:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<Error, Ref<WebRTCPeerConnection>, int, int>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Error,Ref<WebRTCPeerConnection>,int,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  Object *pOVar11;
  long *plVar12;
  uint uVar13;
  undefined4 in_register_00000014;
  long *plVar14;
  Variant *pVVar15;
  long lVar16;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar17;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  Object *local_88;
  undefined8 local_80;
  Variant *local_78 [4];
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar14 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar14 != (long *)0x0) && (plVar14[1] != 0)) && (*(char *)(plVar14[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_88,(StringName *)(param_2 + 3));
    if (plVar14[1] == 0) {
      plVar12 = (long *)plVar14[0x23];
      if (plVar12 == (long *)0x0) {
        plVar12 = (long *)(**(code **)(*plVar14 + 0x40))(plVar14);
      }
    }
    else {
      plVar12 = (long *)(plVar14[1] + 0x20);
    }
    if (local_88 == (Object *)*plVar12) {
      if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_88 = (Object *)0x10ad08;
      local_90 = 0;
      local_80 = 0x35;
      String::parse_latin1((StrRange *)&local_90);
      vformat<StringName>((StringName *)&local_88,(StrRange *)&local_90,&local_98);
      _err_print_error(&_LC103,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_88,0);
      pOVar5 = local_88;
      if (local_88 != (Object *)0x0) {
        LOCK();
        pOVar11 = local_88 + -0x10;
        *(long *)pOVar11 = *(long *)pOVar11 + -1;
        UNLOCK();
        if (*(long *)pOVar11 == 0) {
          local_88 = (Object *)0x0;
          Memory::free_static(pOVar5 + -0x10,false);
        }
      }
      lVar16 = local_90;
      if (local_90 != 0) {
        LOCK();
        plVar14 = (long *)(local_90 + -0x10);
        *plVar14 = *plVar14 + -1;
        UNLOCK();
        if (*plVar14 == 0) {
          local_90 = 0;
          Memory::free_static((void *)(lVar16 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_98 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d94a;
    }
    if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar17 = param_2[0xb];
  pVVar1 = param_2[0xc];
  uVar7 = 3;
  if (in_R8D < 4) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar8 = 0;
      lVar16 = 0;
    }
    else {
      lVar16 = *(long *)(pVVar2 + -8);
      iVar8 = (int)lVar16;
    }
    if ((int)(3 - in_R8D) <= iVar8) {
      lVar10 = 0;
      do {
        if ((int)lVar10 < (int)in_R8D) {
          pVVar15 = *(Variant **)(param_4 + lVar10 * 8);
        }
        else {
          uVar13 = iVar8 + -3 + (int)lVar10;
          if (lVar16 <= (int)uVar13) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar13,lVar16,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar15 = pVVar2 + (ulong)uVar13 * 0x18;
        }
        local_78[lVar10] = pVVar15;
        lVar10 = lVar10 + 1;
      } while (lVar10 != 3);
      *in_R9 = 0;
      if (((ulong)pVVar17 & 1) != 0) {
        pVVar17 = *(Variant **)(pVVar17 + *(long *)((long)plVar14 + (long)pVVar1) + -1);
      }
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_78[2],2);
      uVar4 = _LC109;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar8 = Variant::operator_cast_to_int(local_78[2]);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_78[1],2);
      uVar4 = _LC110;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar9 = Variant::operator_cast_to_int(local_78[1]);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_78[0]);
      uVar4 = _LC111;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      local_88 = (Object *)0x0;
      pOVar11 = (Object *)Variant::get_validated_object();
      pOVar5 = local_88;
      if (pOVar11 != local_88) {
        if (pOVar11 == (Object *)0x0) {
          if (local_88 != (Object *)0x0) {
            local_88 = (Object *)0x0;
LAB_0010d8a2:
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
          pOVar11 = (Object *)
                    __dynamic_cast(pOVar11,&Object::typeinfo,&WebRTCPeerConnection::typeinfo,0);
          if (pOVar5 != pOVar11) {
            local_88 = pOVar11;
            if (pOVar11 != (Object *)0x0) {
              cVar6 = RefCounted::reference();
              if (cVar6 == '\0') {
                local_88 = (Object *)0x0;
              }
            }
            if (pOVar5 != (Object *)0x0) goto LAB_0010d8a2;
          }
        }
      }
      iVar8 = (*(code *)pVVar17)((Variant *)((long)plVar14 + (long)pVVar1),&local_88,iVar9,iVar8);
      Variant::Variant((Variant *)local_58,iVar8);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_58[0];
      *(undefined8 *)(param_1 + 8) = local_50;
      *(undefined8 *)(param_1 + 0x10) = uStack_48;
      if (local_88 != (Object *)0x0) {
        cVar6 = RefCounted::unreference();
        pOVar5 = local_88;
        if (cVar6 != '\0') {
          cVar6 = predelete_handler(local_88);
          if (cVar6 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      goto LAB_0010d94a;
    }
    uVar7 = 4;
  }
  *in_R9 = uVar7;
  in_R9[2] = 3;
LAB_0010d94a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, Array>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<Error,Array>::call
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
  long local_78;
  long local_70;
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
      _err_print_error(&_LC103,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      lVar2 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar10 = (long *)(local_70 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010dd40;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010dd90;
LAB_0010dd80:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010dd90:
        uVar7 = 4;
        goto LAB_0010dd35;
      }
      if (in_R8D == 1) goto LAB_0010dd80;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,0x1c);
    uVar4 = _LC112;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Array((Variant *)&local_68);
    iVar6 = (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),(Variant *)&local_68);
    Variant::Variant((Variant *)local_58,iVar6);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    Array::~Array((Array *)&local_68);
  }
  else {
    uVar7 = 3;
LAB_0010dd35:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0010dd40:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<Error, int, Array>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindTR<Error,int,Array>::call
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
      _err_print_error(&_LC103,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e143;
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
      if (iVar6 != 0) goto LAB_0010e188;
      this = *(Variant **)param_4;
LAB_0010e19d:
      pVVar11 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      iVar12 = (int)lVar2;
      if (iVar12 < iVar6) {
LAB_0010e188:
        uVar7 = 4;
        goto LAB_0010e175;
      }
      if (in_R8D == 0) {
        lVar9 = (long)(iVar12 + -2);
        if (lVar2 <= lVar9) goto LAB_0010e260;
        this = pVVar11 + lVar9 * 0x18;
      }
      else {
        this = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_0010e19d;
      }
      lVar9 = (long)(int)((in_R8D ^ 1) + (iVar12 - iVar6));
      if (lVar2 <= lVar9) {
LAB_0010e260:
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,0x1c);
    uVar4 = _LC113;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Array((Variant *)&local_68);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar4 = _LC107;
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
    Array::~Array((Array *)&local_68);
  }
  else {
    uVar7 = 3;
LAB_0010e175:
    *in_R9 = uVar7;
    in_R9[2] = 2;
  }
LAB_0010e143:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
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
    goto LAB_0010e49d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0010e500;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0010e500:
      uVar6 = 4;
LAB_0010e49d:
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
      goto LAB_0010e41b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0010e41b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC107;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x0010e476. Too many branches */
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
      _err_print_error(&_LC103,"./core/object/method_bind.h",0x154,
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
      goto LAB_0010e5f6;
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
LAB_0010e5f6:
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
  iVar5 = *param_2;
  if (iVar5 != param_1) goto LAB_0010e837;
  local_78 = 0;
  local_68 = &_LC5;
  local_80 = 0;
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
LAB_0010e935:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010e935;
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
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(param_3 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_3 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  iVar5 = *param_2;
LAB_0010e837:
  *param_2 = iVar5 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
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



/* MethodBindTR<bool, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<bool,int>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<int>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_0010eb75;
  }
  local_70 = 0;
  local_68 = &_LC5;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 1;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_0010ec87:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_0010ec87;
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      lVar3 = local_78;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        lVar3 = local_78;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
      lVar3 = local_78;
    }
  }
  local_78 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_0010eb75:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Dictionary, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Dictionary,int>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<int>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_0010ed75;
  }
  local_70 = 0;
  local_68 = &_LC5;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 0x1b;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_0010ee87:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_0010ee87;
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      lVar3 = local_78;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        lVar3 = local_78;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
      lVar3 = local_78;
    }
  }
  local_78 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_0010ed75:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info<Ref<WebRTCPeerConnection>, int, int>(int, PropertyInfo&) */

void call_get_argument_type_info<Ref<WebRTCPeerConnection>,int,int>
               (int param_1,PropertyInfo *param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  int local_8c;
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
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = 0;
  if (param_1 != 0) goto LAB_0010ef32;
  local_78 = 0;
  local_68 = "WebRTCPeerConnection";
  local_80 = 0;
  local_60._0_8_ = 0x14;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (char *)CONCAT44(local_68._4_4_,0x18);
  local_50 = 0x11;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0010f11d:
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
    if (local_50 == 0x11) goto LAB_0010f11d;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_2 = local_68._0_4_;
  if (*(long *)(param_2 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
    uVar2 = local_60._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *(undefined8 *)(param_2 + 8) = uVar2;
  }
  if (*(long *)(param_2 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar2 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_2 + 0x10) = uVar2;
  }
  *(int *)(param_2 + 0x18) = local_50;
  if (*(long *)(param_2 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
    lVar3 = local_48;
    local_48 = 0;
    *(long *)(param_2 + 0x20) = lVar3;
  }
  *(undefined4 *)(param_2 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_0010ef32:
  local_8c = 1;
  call_get_argument_type_info_helper<int>(param_1,&local_8c,param_2);
  call_get_argument_type_info_helper<int>(param_1,&local_8c,param_2);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTR<Error, Ref<WebRTCPeerConnection>, int, int>::_gen_argument_type_info(int) const */

GetTypeInfo<Error,void> *
MethodBindTR<Error,Ref<WebRTCPeerConnection>,int,int>::_gen_argument_type_info(int param_1)

{
  uint in_EDX;
  undefined4 in_register_0000003c;
  GetTypeInfo<Error,void> *this;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined1 local_40 [16];
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  long local_10;
  
  this = (GetTypeInfo<Error,void> *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 3) {
    local_48 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 6;
    local_40 = (undefined1  [16])0x0;
    call_get_argument_type_info<Ref<WebRTCPeerConnection>,int,int>(in_EDX,(PropertyInfo *)&local_48)
    ;
    *(undefined4 *)this = (undefined4)local_48;
    *(undefined8 *)(this + 8) = local_40._0_8_;
    *(undefined8 *)(this + 0x10) = local_40._8_8_;
    *(undefined4 *)(this + 0x18) = (undefined4)local_30;
    *(undefined8 *)(this + 0x20) = local_28;
    *(undefined4 *)(this + 0x28) = local_20;
  }
  else {
    GetTypeInfo<Error,void>::get_class_info(this);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<Array>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Array>(int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int iVar5;
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
  iVar5 = *param_2;
  if (iVar5 != param_1) goto LAB_0010f257;
  local_78 = 0;
  local_68 = &_LC5;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x1c);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0010f355:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010f355;
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
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(param_3 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_3 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  iVar5 = *param_2;
LAB_0010f257:
  *param_2 = iVar5 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTR<Error, Array>::_gen_argument_type_info(int) const */

GetTypeInfo<Error,void> * MethodBindTR<Error,Array>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  GetTypeInfo<Error,void> *this;
  long in_FS_OFFSET;
  int local_4c;
  undefined8 local_48;
  undefined1 local_40 [16];
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  long local_10;
  
  this = (GetTypeInfo<Error,void> *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_48 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 6;
    local_4c = 0;
    local_40 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<Array>(0,&local_4c,(PropertyInfo *)&local_48);
    *(undefined4 *)this = (undefined4)local_48;
    *(undefined8 *)(this + 8) = local_40._0_8_;
    *(undefined8 *)(this + 0x10) = local_40._8_8_;
    *(undefined4 *)(this + 0x18) = (undefined4)local_30;
    *(undefined8 *)(this + 0x20) = local_28;
    *(undefined4 *)(this + 0x28) = local_20;
  }
  else {
    GetTypeInfo<Error,void>::get_class_info(this);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, int, Array>::_gen_argument_type_info(int) const */

GetTypeInfo<Error,void> * MethodBindTR<Error,int,Array>::_gen_argument_type_info(int param_1)

{
  uint in_EDX;
  undefined4 in_register_0000003c;
  GetTypeInfo<Error,void> *this;
  long in_FS_OFFSET;
  int local_6c;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  this = (GetTypeInfo<Error,void> *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_60 = (undefined1  [16])0x0;
    local_68 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_6c = 0;
    call_get_argument_type_info_helper<int>(in_EDX,&local_6c,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<Array>(in_EDX,&local_6c,(PropertyInfo *)&local_68);
    *(undefined4 *)this = (undefined4)local_68;
    *(undefined8 *)(this + 8) = local_60._0_8_;
    *(undefined8 *)(this + 0x10) = local_60._8_8_;
    *(undefined4 *)(this + 0x18) = (undefined4)local_50;
    *(undefined8 *)(this + 0x20) = local_48;
    *(undefined4 *)(this + 0x28) = local_40;
  }
  else {
    GetTypeInfo<Error,void>::get_class_info(this);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Dictionary>::~MethodBindTR() */

void __thiscall MethodBindTR<Dictionary>::~MethodBindTR(MethodBindTR<Dictionary> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Dictionary, int>::~MethodBindTR() */

void __thiscall MethodBindTR<Dictionary,int>::~MethodBindTR(MethodBindTR<Dictionary,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<bool, int>::~MethodBindTR() */

void __thiscall MethodBindTR<bool,int>::~MethodBindTR(MethodBindTR<bool,int> *this)

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
/* MethodBindTR<Error, Ref<WebRTCPeerConnection>, int, int>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,Ref<WebRTCPeerConnection>,int,int>::~MethodBindTR
          (MethodBindTR<Error,Ref<WebRTCPeerConnection>,int,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Error, int, Array>::~MethodBindTR() */

void __thiscall MethodBindTR<Error,int,Array>::~MethodBindTR(MethodBindTR<Error,int,Array> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Error, Array>::~MethodBindTR() */

void __thiscall MethodBindTR<Error,Array>::~MethodBindTR(MethodBindTR<Error,Array> *this)

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



/* WARNING: Control flow encountered bad instruction data */
/* WebRTCMultiplayerPeer::ConnectedPeer::~ConnectedPeer() */

void __thiscall WebRTCMultiplayerPeer::ConnectedPeer::~ConnectedPeer(ConnectedPeer *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<Ref<WebRTCDataChannel>, DefaultAllocator>::~List() */

void __thiscall
List<Ref<WebRTCDataChannel>,DefaultAllocator>::~List
          (List<Ref<WebRTCDataChannel>,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


