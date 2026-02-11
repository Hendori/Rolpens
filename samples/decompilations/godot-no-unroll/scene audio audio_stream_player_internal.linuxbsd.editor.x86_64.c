
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



/* AudioStreamPlayerInternal::_set_process(bool) */

void AudioStreamPlayerInternal::_set_process(bool param_1)

{
  bool bVar1;
  undefined7 in_register_00000039;
  
  bVar1 = SUB81(*(undefined8 *)(CONCAT71(in_register_00000039,param_1) + 0x178),0);
  if (*(char *)(CONCAT71(in_register_00000039,param_1) + 0x1a0) != '\0') {
    Node::set_physics_process_internal(bVar1);
    return;
  }
  Node::set_process_internal(bVar1);
  return;
}



/* AudioStreamPlayerInternal::get_stream_paused() const */

undefined4 __thiscall AudioStreamPlayerInternal::get_stream_paused(AudioStreamPlayerInternal *this)

{
  long lVar1;
  long *plVar2;
  Object *pOVar3;
  code *pcVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  Object *local_28;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x1e0) == 0) {
    uVar6 = 0;
LAB_00100140:
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar6;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar7 = AudioServer::get_singleton();
  plVar2 = *(long **)(this + 0x1e0);
  if (plVar2 == (long *)0x0) {
    lVar8 = 0;
  }
  else {
    lVar8 = plVar2[-1];
    if (0 < lVar8) {
      local_28 = (Object *)0x0;
      pOVar3 = (Object *)*plVar2;
      if (pOVar3 != (Object *)0x0) {
        cVar5 = RefCounted::reference();
        local_28 = pOVar3;
        if (cVar5 == '\0') {
          local_28 = (Object *)0x0;
        }
      }
      uVar6 = AudioServer::is_playback_paused(uVar7);
      if (local_28 != (Object *)0x0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          cVar5 = predelete_handler(local_28);
          if (cVar5 != '\0') {
            (**(code **)(*(long *)local_28 + 0x140))(local_28);
            Memory::free_static(local_28,false);
          }
        }
      }
      goto LAB_00100140;
    }
  }
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,0,lVar8,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* AudioStreamPlayerInternal::validate_property(PropertyInfo&) const */

void __thiscall
AudioStreamPlayerInternal::validate_property(AudioStreamPlayerInternal *this,PropertyInfo *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long in_FS_OFFSET;
  long local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar3 = String::operator==((String *)(param_1 + 8),"bus");
  if (cVar3 != '\0') {
    local_40 = 0;
    iVar5 = 0;
    AudioServer::get_singleton();
    iVar4 = AudioServer::get_bus_count();
    if (0 < iVar4) {
      while( true ) {
        AudioServer::get_singleton();
        AudioServer::get_bus_name((int)(String *)&local_38);
        String::operator+=((String *)&local_40,(String *)&local_38);
        lVar2 = local_38;
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
        AudioServer::get_singleton();
        iVar5 = iVar5 + 1;
        iVar4 = AudioServer::get_bus_count();
        if (iVar4 <= iVar5) break;
        String::operator+=((String *)&local_40,",");
      }
    }
    if (*(long *)(param_1 + 0x20) != local_40) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(param_1 + 0x20),(CowData *)&local_40);
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
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* AudioStreamPlayerInternal::get(StringName const&, Variant&) const */

undefined8 __thiscall
AudioStreamPlayerInternal::get(AudioStreamPlayerInternal *this,StringName *param_1,Variant *param_2)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  
  if (*(long *)(this + 0x1b0) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x1d4) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1d0) * 4);
    uVar16 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1d0) * 8);
    if (*(long *)param_1 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(*(long *)param_1 + 0x20);
    }
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar11 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar16;
    lVar13 = SUB168(auVar3 * auVar7,8);
    uVar14 = *(uint *)(*(long *)(this + 0x1b8) + lVar13 * 4);
    uVar12 = SUB164(auVar3 * auVar7,8);
    if (uVar14 != 0) {
      uVar15 = 0;
      do {
        if ((uVar11 == uVar14) &&
           (*(long *)(*(long *)(*(long *)(this + 0x1b0) + lVar13 * 8) + 0x10) == *(long *)param_1))
        {
          Variant::operator=(param_2,(Variant *)
                                     (*(long *)(*(long *)(this + 0x1b0) + (ulong)uVar12 * 8) + 0x20)
                            );
          return 1;
        }
        uVar15 = uVar15 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar12 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar16;
        lVar13 = SUB168(auVar4 * auVar8,8);
        uVar14 = *(uint *)(*(long *)(this + 0x1b8) + lVar13 * 4);
        uVar12 = SUB164(auVar4 * auVar8,8);
      } while ((uVar14 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar14 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar16, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + uVar12) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar16, uVar15 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
}



/* AudioStreamPlayerInternal::is_playing() const */

undefined4 __thiscall AudioStreamPlayerInternal::is_playing(AudioStreamPlayerInternal *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long in_FS_OFFSET;
  Object *local_38;
  
  plVar7 = *(long **)(this + 0x1e0);
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + plVar7[-1];
    for (; plVar1 != plVar7; plVar7 = plVar7 + 1) {
      uVar6 = AudioServer::get_singleton();
      local_38 = (Object *)0x0;
      pOVar3 = (Object *)*plVar7;
      if ((pOVar3 != (Object *)0x0) &&
         (cVar4 = RefCounted::reference(), local_38 = pOVar3, cVar4 == '\0')) {
        local_38 = (Object *)0x0;
      }
      uVar5 = AudioServer::is_playback_active(uVar6);
      if (((local_38 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
         (cVar4 = predelete_handler(local_38), cVar4 != '\0')) {
        (**(code **)(*(long *)local_38 + 0x140))(local_38);
        Memory::free_static(local_38,false);
      }
      if ((char)uVar5 != '\0') goto LAB_00100578;
    }
  }
  uVar5 = 0;
LAB_00100578:
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



/* AudioStreamPlayerInternal::get_playback_position() */

void __thiscall AudioStreamPlayerInternal::get_playback_position(AudioStreamPlayerInternal *this)

{
  long lVar1;
  long lVar2;
  Object *pOVar3;
  code *pcVar4;
  char cVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  Object *local_28;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x1e0) == 0) {
LAB_00100650:
    if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  uVar6 = AudioServer::get_singleton();
  lVar2 = *(long *)(this + 0x1e0);
  if (lVar2 == 0) {
    lVar8 = 0;
    lVar7 = -1;
  }
  else {
    lVar8 = *(long *)(lVar2 + -8);
    lVar7 = lVar8 + -1;
    if (-1 < lVar7) {
      local_28 = (Object *)0x0;
      pOVar3 = *(Object **)(lVar2 + lVar7 * 8);
      if ((pOVar3 != (Object *)0x0) &&
         (cVar5 = RefCounted::reference(), local_28 = pOVar3, cVar5 == '\0')) {
        local_28 = (Object *)0x0;
      }
      AudioServer::get_playback_position(uVar6);
      if (((local_28 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
         (cVar5 = predelete_handler(local_28), cVar5 != '\0')) {
        (**(code **)(*(long *)local_28 + 0x140))(local_28);
        Memory::free_static(local_28,false);
      }
      goto LAB_00100650;
    }
  }
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar8,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* AudioStreamPlayerInternal::is_active() const */

bool __thiscall AudioStreamPlayerInternal::is_active(AudioStreamPlayerInternal *this)

{
  return this[0x1f0] != (AudioStreamPlayerInternal)0x0;
}



/* AudioStreamPlayerInternal::set_max_polyphony(int) */

void __thiscall
AudioStreamPlayerInternal::set_max_polyphony(AudioStreamPlayerInternal *this,int param_1)

{
  if (0 < param_1) {
    *(int *)(this + 0x208) = param_1;
  }
  return;
}



/* AudioStreamPlayerInternal::has_stream_playback() */

bool __thiscall AudioStreamPlayerInternal::has_stream_playback(AudioStreamPlayerInternal *this)

{
  return *(long *)(this + 0x1e0) != 0;
}



/* AudioStreamPlayerInternal::get_stream_playback() */

void AudioStreamPlayerInternal::get_stream_playback(void)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  long lVar4;
  long in_RSI;
  long *in_RDI;
  
  lVar1 = *(long *)(in_RSI + 0x1e0);
  if (lVar1 == 0) {
    _err_print_error("get_stream_playback","scene/audio/audio_stream_player_internal.cpp",0x149,
                     "Condition \"stream_playbacks.is_empty()\" is true. Returning: Ref<AudioStreamPlayback>()"
                     ,"Player is inactive. Call play() before requesting get_stream_playback().",0,0
                    );
    *in_RDI = 0;
    return;
  }
  lVar4 = *(long *)(lVar1 + -8) + -1;
  if (-1 < lVar4) {
    *in_RDI = 0;
    lVar1 = *(long *)(lVar1 + lVar4 * 8);
    if (lVar1 != 0) {
      *in_RDI = lVar1;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *in_RDI = 0;
      }
    }
    return;
  }
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar4,*(long *)(lVar1 + -8),"p_index","size()",
             "",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* AudioStreamPlayerInternal::set_playback_type(AudioServer::PlaybackType) */

void __thiscall
AudioStreamPlayerInternal::set_playback_type(AudioStreamPlayerInternal *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x1a4) = param_2;
  return;
}



/* AudioStreamPlayerInternal::get_playback_type() const */

undefined4 __thiscall AudioStreamPlayerInternal::get_playback_type(AudioStreamPlayerInternal *this)

{
  return *(undefined4 *)(this + 0x1a4);
}



/* AudioStreamPlayerInternal::get_bus() const */

void AudioStreamPlayerInternal::get_bus(void)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  long in_RSI;
  StringName *in_RDI;
  long in_FS_OFFSET;
  bool bVar9;
  long local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  lVar2 = *(long *)(in_RSI + 0x200);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar2 == 0) {
    local_50 = 0;
  }
  else {
    pcVar3 = *(char **)(lVar2 + 8);
    local_50 = 0;
    if (pcVar3 == (char *)0x0) {
      plVar1 = (long *)(*(long *)(lVar2 + 0x10) + -0x10);
      if (*(long *)(lVar2 + 0x10) != 0) {
        do {
          lVar4 = *plVar1;
          if (lVar4 == 0) goto LAB_001008bd;
          LOCK();
          lVar7 = *plVar1;
          bVar9 = lVar4 == lVar7;
          if (bVar9) {
            *plVar1 = lVar4 + 1;
            lVar7 = lVar4;
          }
          UNLOCK();
        } while (!bVar9);
        if (lVar7 != -1) {
          local_50 = *(long *)(lVar2 + 0x10);
        }
      }
    }
    else {
      local_40 = strlen(pcVar3);
      local_48 = pcVar3;
      String::parse_latin1((StrRange *)&local_50);
    }
  }
LAB_001008bd:
  iVar8 = 0;
  do {
    AudioServer::get_singleton();
    iVar6 = AudioServer::get_bus_count();
    if (iVar6 <= iVar8) {
      StringName::StringName(in_RDI,(StringName *)(SceneStringNames::singleton + 0x208));
LAB_00100950:
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
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    AudioServer::get_singleton();
    AudioServer::get_bus_name((int)(String *)&local_48);
    cVar5 = String::operator==((String *)&local_48,(String *)&local_50);
    pcVar3 = local_48;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
    if (cVar5 != '\0') {
      StringName::StringName(in_RDI,(StringName *)(in_RSI + 0x200));
      goto LAB_00100950;
    }
    iVar8 = iVar8 + 1;
  } while( true );
}



/* AudioStreamPlayerInternal::get_property_list(List<PropertyInfo, DefaultAllocator>*) const */

void __thiscall
AudioStreamPlayerInternal::get_property_list(AudioStreamPlayerInternal *this,List *param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  char cVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined1 (*pauVar15) [16];
  uint uVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  undefined4 *puVar20;
  ulong uVar21;
  long in_FS_OFFSET;
  undefined8 *local_88;
  long local_80;
  undefined4 local_78;
  long local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  uint local_50;
  long local_40;
  
  plVar2 = *(long **)(this + 0x1e8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar2 != (long *)0x0) {
    local_88 = (undefined8 *)0x0;
    (**(code **)(*plVar2 + 0x208))
              (plVar2,(List<AudioStream::Parameter,DefaultAllocator> *)&local_88);
    if ((local_88 != (undefined8 *)0x0) &&
       (puVar20 = (undefined4 *)*local_88, puVar20 != (undefined4 *)0x0)) {
      do {
        local_78 = *puVar20;
        local_70 = 0;
        if (*(long *)(puVar20 + 2) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(puVar20 + 2));
        }
        StringName::StringName((StringName *)&local_68,(StringName *)(puVar20 + 4));
        local_60 = puVar20[6];
        local_58 = 0;
        if (*(long *)(puVar20 + 8) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(puVar20 + 8));
        }
        local_50 = puVar20[10];
        String::operator+((String *)&local_80,(String *)&PARAM_PREFIX);
        lVar17 = local_70;
        lVar3 = local_80;
        if (local_70 == local_80) {
          if (local_70 != 0) {
            LOCK();
            plVar2 = (long *)(local_70 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              local_80 = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
        }
        else {
          if (local_70 != 0) {
            LOCK();
            plVar2 = (long *)(local_70 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              local_70 = 0;
              Memory::free_static((void *)(lVar17 + -0x10),false);
            }
          }
          local_70 = local_80;
        }
        StringName::StringName((StringName *)&local_80,(String *)&local_70,false);
        if ((*(long *)(this + 0x1b0) != 0) && (*(int *)(this + 0x1d4) != 0)) {
          uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1d0) * 4);
          uVar21 = CONCAT44(0,uVar1);
          lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1d0) * 8);
          if (local_80 == 0) {
            uVar13 = StringName::get_empty_hash();
          }
          else {
            uVar13 = *(uint *)(local_80 + 0x20);
          }
          if (uVar13 == 0) {
            uVar13 = 1;
          }
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)uVar13 * lVar3;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = uVar21;
          lVar17 = SUB168(auVar4 * auVar8,8);
          uVar18 = *(uint *)(*(long *)(this + 0x1b8) + lVar17 * 4);
          uVar16 = SUB164(auVar4 * auVar8,8);
          if (uVar18 != 0) {
            uVar19 = 0;
            do {
              if ((uVar18 == uVar13) &&
                 (*(long *)(*(long *)(*(long *)(this + 0x1b0) + lVar17 * 8) + 0x10) == local_80)) {
                lVar3 = *(long *)(*(long *)(this + 0x1b0) + (ulong)uVar16 * 8);
                if ((StringName::configured != '\0') && (local_80 != 0)) {
                  StringName::unref();
                }
                cVar12 = Variant::operator==((Variant *)(lVar3 + 0x20),(Variant *)(puVar20 + 0xc));
                if (cVar12 != '\0') {
                  local_50 = local_50 & 0xfffffffd;
                }
                goto LAB_00100ca3;
              }
              uVar19 = uVar19 + 1;
              auVar5._8_8_ = 0;
              auVar5._0_8_ = (ulong)(uVar16 + 1) * lVar3;
              auVar9._8_8_ = 0;
              auVar9._0_8_ = uVar21;
              lVar17 = SUB168(auVar5 * auVar9,8);
              uVar18 = *(uint *)(*(long *)(this + 0x1b8) + lVar17 * 4);
              uVar16 = SUB164(auVar5 * auVar9,8);
            } while ((uVar18 != 0) &&
                    (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar18 * lVar3, auVar10._8_8_ = 0,
                    auVar10._0_8_ = uVar21, auVar7._8_8_ = 0,
                    auVar7._0_8_ = (ulong)((uVar1 + uVar16) - SUB164(auVar6 * auVar10,8)) * lVar3,
                    auVar11._8_8_ = 0, auVar11._0_8_ = uVar21, uVar19 <= SUB164(auVar7 * auVar11,8))
                    );
          }
        }
        if ((StringName::configured == '\0') || (local_80 == 0)) {
LAB_00100ca3:
          lVar3 = *(long *)param_1;
        }
        else {
          StringName::unref();
          lVar3 = *(long *)param_1;
        }
        if (lVar3 == 0) {
          pauVar15 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
          *(undefined1 (**) [16])param_1 = pauVar15;
          *(undefined4 *)pauVar15[1] = 0;
          *pauVar15 = (undefined1  [16])0x0;
        }
        puVar14 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
        *(undefined1 (*) [16])(puVar14 + 2) = (undefined1  [16])0x0;
        *puVar14 = 0;
        puVar14[6] = 0;
        *(undefined8 *)(puVar14 + 8) = 0;
        puVar14[10] = 6;
        *(undefined8 *)(puVar14 + 0x10) = 0;
        *(undefined1 (*) [16])(puVar14 + 0xc) = (undefined1  [16])0x0;
        *puVar14 = local_78;
        if (local_70 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar14 + 2),(CowData *)&local_70);
        }
        StringName::operator=((StringName *)(puVar14 + 4),(StringName *)&local_68);
        puVar14[6] = local_60;
        if (*(long *)(puVar14 + 8) != local_58) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar14 + 8),(CowData *)&local_58);
        }
        lVar17 = local_58;
        puVar14[10] = local_50;
        plVar2 = *(long **)param_1;
        lVar3 = plVar2[1];
        *(undefined8 *)(puVar14 + 0xc) = 0;
        *(long **)(puVar14 + 0x10) = plVar2;
        *(long *)(puVar14 + 0xe) = lVar3;
        if (lVar3 != 0) {
          *(undefined4 **)(lVar3 + 0x30) = puVar14;
        }
        plVar2[1] = (long)puVar14;
        if (*plVar2 == 0) {
          *plVar2 = (long)puVar14;
        }
        *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
        if (local_58 != 0) {
          LOCK();
          plVar2 = (long *)(local_58 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            local_58 = 0;
            Memory::free_static((void *)(lVar17 + -0x10),false);
          }
        }
        if ((StringName::configured != '\0') && (local_68 != 0)) {
          StringName::unref();
        }
        lVar3 = local_70;
        if (local_70 != 0) {
          LOCK();
          plVar2 = (long *)(local_70 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            local_70 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
        puVar20 = *(undefined4 **)(puVar20 + 0x12);
      } while (puVar20 != (undefined4 *)0x0);
    }
    List<AudioStream::Parameter,DefaultAllocator>::~List
              ((List<AudioStream::Parameter,DefaultAllocator> *)&local_88);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamPlayerInternal::_update_stream_parameters() */

void __thiscall
AudioStreamPlayerInternal::_update_stream_parameters(AudioStreamPlayerInternal *this)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
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
  long lVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  long in_FS_OFFSET;
  long *local_80;
  long local_78;
  long local_70;
  long local_68;
  int local_60 [2];
  undefined1 local_58 [16];
  long local_40;
  
  plVar2 = *(long **)(this + 0x1e8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar2 != (long *)0x0) {
    local_80 = (long *)0x0;
    (**(code **)(*plVar2 + 0x208))
              (plVar2,(List<AudioStream::Parameter,DefaultAllocator> *)&local_80);
    if ((local_80 != (long *)0x0) && (lVar15 = *local_80, lVar15 != 0)) {
      do {
        String::operator+((String *)&local_70,(String *)&PARAM_PREFIX);
        StringName::StringName((StringName *)&local_78,(String *)&local_70,false);
        lVar3 = local_70;
        if (local_70 != 0) {
          LOCK();
          plVar2 = (long *)(local_70 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            local_70 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
        if ((*(long *)(this + 0x1b0) != 0) && (*(int *)(this + 0x1d4) != 0)) {
          uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1d0) * 4);
          lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1d0) * 8);
          if (local_78 == 0) {
            uVar12 = StringName::get_empty_hash();
          }
          else {
            uVar12 = *(uint *)(local_78 + 0x20);
          }
          uVar17 = CONCAT44(0,uVar1);
          if (uVar12 == 0) {
            uVar12 = 1;
          }
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)uVar12 * lVar3;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = uVar17;
          lVar14 = SUB168(auVar4 * auVar8,8);
          uVar16 = *(uint *)(*(long *)(this + 0x1b8) + lVar14 * 4);
          iVar13 = SUB164(auVar4 * auVar8,8);
          if (uVar16 != 0) {
            uVar18 = 0;
            do {
              if ((uVar12 == uVar16) &&
                 (*(long *)(*(long *)(*(long *)(this + 0x1b0) + lVar14 * 8) + 0x10) == local_78))
              goto LAB_001010d4;
              uVar18 = uVar18 + 1;
              auVar5._8_8_ = 0;
              auVar5._0_8_ = (ulong)(iVar13 + 1) * lVar3;
              auVar9._8_8_ = 0;
              auVar9._0_8_ = uVar17;
              lVar14 = SUB168(auVar5 * auVar9,8);
              uVar16 = *(uint *)(*(long *)(this + 0x1b8) + lVar14 * 4);
              iVar13 = SUB164(auVar5 * auVar9,8);
            } while ((uVar16 != 0) &&
                    (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar16 * lVar3, auVar10._8_8_ = 0,
                    auVar10._0_8_ = uVar17, auVar7._8_8_ = 0,
                    auVar7._0_8_ = (ulong)((uVar1 + iVar13) - SUB164(auVar6 * auVar10,8)) * lVar3,
                    auVar11._8_8_ = 0, auVar11._0_8_ = uVar17, uVar18 <= SUB164(auVar7 * auVar11,8))
                    );
          }
        }
        local_68 = 0;
        local_60[0] = 0;
        local_58 = (undefined1  [16])0x0;
        StringName::StringName((StringName *)&local_70,(String *)(lVar15 + 8),false);
        if (local_68 == local_70) {
          if ((StringName::configured != '\0') && (local_70 != 0)) {
            StringName::unref();
          }
        }
        else {
          StringName::unref();
          local_68 = local_70;
        }
        Variant::operator=((Variant *)local_60,(Variant *)(lVar15 + 0x30));
        HashMap<StringName,AudioStreamPlayerInternal::ParameterData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,AudioStreamPlayerInternal::ParameterData>>>
        ::insert((StringName *)&local_70,(ParameterData *)(this + 0x1a8),
                 SUB81((StringName *)&local_78,0));
        if (Variant::needs_deinit[local_60[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (StringName::configured != '\0') {
          if (local_68 != 0) {
            StringName::unref();
LAB_001010d4:
            if (StringName::configured == '\0') goto LAB_001010f1;
          }
          if (local_78 != 0) {
            StringName::unref();
          }
        }
LAB_001010f1:
        lVar15 = *(long *)(lVar15 + 0x48);
      } while (lVar15 != 0);
    }
    List<AudioStream::Parameter,DefaultAllocator>::~List
              ((List<AudioStream::Parameter,DefaultAllocator> *)&local_80);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* AudioStreamPlayerInternal::set_playing(bool) */

void __thiscall AudioStreamPlayerInternal::set_playing(AudioStreamPlayerInternal *this,bool param_1)

{
  char cVar1;
  long lVar2;
  long in_FS_OFFSET;
  int local_28;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1) {
    Callable::call<double>(0.0);
    cVar1 = Variant::needs_deinit[local_28];
  }
  else {
    Callable::call<>();
    cVar1 = Variant::needs_deinit[local_28];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* AudioStreamPlayerInternal::seek(float) */

void __thiscall AudioStreamPlayerInternal::seek(AudioStreamPlayerInternal *this,float param_1)

{
  char cVar1;
  long in_FS_OFFSET;
  Variant *local_98 [2];
  int local_88 [2];
  undefined1 local_80 [16];
  int local_68 [6];
  int local_50 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = is_playing(this);
  if (cVar1 != '\0') {
    Callable::call<>();
    if (Variant::needs_deinit[local_68[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_68,param_1);
    Variant::Variant((Variant *)local_50,0);
    local_88[0] = 0;
    local_80 = (undefined1  [16])0x0;
    local_98[0] = (Variant *)local_68;
    Callable::callp((Variant **)(this + 0x180),(int)local_98,(Variant *)0x1,(CallError *)local_88);
    if (Variant::needs_deinit[local_50[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_68[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamPlayerInternal::set_stream(Ref<AudioStream>) */

void __thiscall AudioStreamPlayerInternal::set_stream(AudioStreamPlayerInternal *this,long *param_2)

{
  long *plVar1;
  code *pcVar2;
  Object *pOVar3;
  Object *pOVar4;
  char cVar5;
  int iVar6;
  long in_FS_OFFSET;
  AudioStreamPlayerInternal local_68 [16];
  int local_58;
  long local_40;
  
  plVar1 = *(long **)(this + 0x1e8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x110);
    create_custom_callable_function_pointer<AudioStreamPlayerInternal>
              (local_68,(char *)this,
               (_func_void *)"&AudioStreamPlayerInternal::_update_stream_parameters");
    if (set_stream(Ref<AudioStream>)::{lambda()#1}::operator()()::sname == '\0') {
      iVar6 = __cxa_guard_acquire(&set_stream(Ref<AudioStream>)::{lambda()#1}::operator()()::sname);
      if (iVar6 != 0) {
        _scs_create((char *)&set_stream(Ref<AudioStream>)::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &set_stream(Ref<AudioStream>)::{lambda()#1}::operator()()::sname,&__dso_handle)
        ;
        __cxa_guard_release(&set_stream(Ref<AudioStream>)::{lambda()#1}::operator()()::sname);
      }
    }
    (*pcVar2)(plVar1,&set_stream(Ref<AudioStream>)::{lambda()#1}::operator()()::sname,local_68);
    Callable::~Callable((Callable *)local_68);
  }
  Callable::call<>();
  if (Variant::needs_deinit[local_58] != '\0') {
    Variant::_clear_internal();
  }
  pOVar3 = (Object *)*param_2;
  pOVar4 = *(Object **)(this + 0x1e8);
  if (pOVar3 != pOVar4) {
    *(Object **)(this + 0x1e8) = pOVar3;
    if (pOVar3 != (Object *)0x0) {
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
        *(undefined8 *)(this + 0x1e8) = 0;
      }
    }
    if (pOVar4 != (Object *)0x0) {
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
  _update_stream_parameters(this);
  plVar1 = *(long **)(this + 0x1e8);
  if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x108);
    create_custom_callable_function_pointer<AudioStreamPlayerInternal>
              (local_68,(char *)this,
               (_func_void *)"&AudioStreamPlayerInternal::_update_stream_parameters");
    if (set_stream(Ref<AudioStream>)::{lambda()#2}::operator()()::sname == '\0') {
      iVar6 = __cxa_guard_acquire(&set_stream(Ref<AudioStream>)::{lambda()#2}::operator()()::sname);
      if (iVar6 != 0) {
        _scs_create((char *)&set_stream(Ref<AudioStream>)::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &set_stream(Ref<AudioStream>)::{lambda()#2}::operator()()::sname,&__dso_handle)
        ;
        __cxa_guard_release(&set_stream(Ref<AudioStream>)::{lambda()#2}::operator()()::sname);
      }
    }
    (*pcVar2)(plVar1,&set_stream(Ref<AudioStream>)::{lambda()#2}::operator()()::sname,local_68,0);
    Callable::~Callable((Callable *)local_68);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Object::notify_property_list_changed();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamPlayerInternal::AudioStreamPlayerInternal(Node*, Callable const&, Callable const&,
   bool) */

void __thiscall
AudioStreamPlayerInternal::AudioStreamPlayerInternal
          (AudioStreamPlayerInternal *this,Node *param_1,Callable *param_2,Callable *param_3,
          bool param_4)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_70;
  long local_68 [2];
  Object local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Object::Object((Object *)this);
  *(undefined ***)this = &PTR__initialize_classv_00108678;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  this[0x1a0] = (AudioStreamPlayerInternal)0x0;
  *(undefined4 *)(this + 0x1a4) = 0;
  *(undefined8 *)(this + 0x1d0) = 2;
  *(undefined1 (*) [16])(this + 0x178) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1b0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1c0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1e0) = (undefined1  [16])0x0;
  this[0x1f0] = (AudioStreamPlayerInternal)0x0;
  *(Node **)(this + 0x178) = param_1;
  *(undefined8 *)(this + 500) = 0x3f800000;
  this[0x1fc] = (AudioStreamPlayerInternal)0x0;
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined4 *)(this + 0x208) = 1;
  Callable::operator=((Callable *)(this + 0x180),param_2);
  Callable::operator=((Callable *)(this + 400),param_3);
  this[0x1a0] = (AudioStreamPlayerInternal)param_4;
  StringName::operator=
            ((StringName *)(this + 0x200),(StringName *)(SceneStringNames::singleton + 0x208));
  plVar2 = (long *)AudioServer::get_singleton();
  pcVar1 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<Object>
            (local_58,*(char **)(this + 0x178),(_func_void *)"&Object::notify_property_list_changed"
            );
  StringName::StringName((StringName *)local_68,"bus_layout_changed",false);
  (*pcVar1)(plVar2,(StringName *)local_68,local_58,0);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_58);
  plVar2 = (long *)AudioServer::get_singleton();
  pcVar1 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<Object>
            (local_58,*(char **)(this + 0x178),(_func_void *)"&Object::notify_property_list_changed"
            );
  Callable::unbind((int)(StringName *)local_68);
  StringName::StringName((StringName *)&local_70,"bus_renamed",false);
  (*pcVar1)(plVar2,(StringName *)&local_70,(StringName *)local_68,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)local_58);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Ref<AudioStreamPlayback> >::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<Ref<AudioStreamPlayback>>::_copy_on_write(CowData<Ref<AudioStreamPlayback>> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar1 * 8 != 0) {
    uVar7 = lVar1 * 8 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar8 = 0;
  *puVar5 = 1;
  puVar5[1] = lVar1;
  plVar6 = puVar5 + 2;
  if (lVar1 != 0) {
    do {
      lVar2 = *(long *)this;
      *plVar6 = 0;
      lVar2 = *(long *)(lVar2 + lVar8 * 8);
      if (lVar2 != 0) {
        *plVar6 = lVar2;
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          *plVar6 = 0;
        }
      }
      lVar8 = lVar8 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar1 != lVar8);
  }
  _unref(this);
  *(undefined8 **)this = puVar5 + 2;
  return;
}



/* AudioStreamPlayerInternal::set_stream_paused(bool) */

void __thiscall
AudioStreamPlayerInternal::set_stream_paused(AudioStreamPlayerInternal *this,bool param_1)

{
  Object *pOVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  Ref *pRVar5;
  long *plVar6;
  long *plVar7;
  long in_FS_OFFSET;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  CowData<Ref<AudioStreamPlayback>>::_copy_on_write
            ((CowData<Ref<AudioStreamPlayback>> *)(this + 0x1e0));
  plVar6 = *(long **)(this + 0x1e0);
  CowData<Ref<AudioStreamPlayback>>::_copy_on_write
            ((CowData<Ref<AudioStreamPlayback>> *)(this + 0x1e0));
  plVar7 = *(long **)(this + 0x1e0);
  if (plVar7 != (long *)0x0) {
    plVar7 = plVar7 + plVar7[-1];
  }
  do {
    while( true ) {
      if (plVar6 == plVar7) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      uVar4 = AudioServer::get_singleton();
      local_48 = (Object *)0x0;
      if (((Object *)*plVar6 != (Object *)0x0) &&
         (local_48 = (Object *)*plVar6, cVar2 = RefCounted::reference(), cVar2 == '\0')) {
        local_48 = (Object *)0x0;
      }
      AudioServer::set_playback_paused(uVar4,&local_48,param_1);
      if (((local_48 != (Object *)0x0) &&
          (cVar2 = RefCounted::unreference(), pOVar1 = local_48, cVar2 != '\0')) &&
         (cVar2 = predelete_handler(local_48), cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
      AudioServer::get_singleton();
      iVar3 = AudioServer::get_default_playback_type();
      if ((((iVar3 == 2) && (*(int *)(this + 0x1a4) == 0)) || (*(int *)(this + 0x1a4) == 2)) &&
         ((**(code **)(*(long *)*plVar6 + 0x1b0))(&local_48), local_48 != (Object *)0x0)) break;
LAB_00101aa5:
      plVar6 = plVar6 + 1;
    }
    cVar2 = RefCounted::unreference();
    pOVar1 = local_48;
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(local_48), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
    pRVar5 = (Ref *)AudioServer::get_singleton();
    (**(code **)(*(long *)*plVar6 + 0x1b0))(&local_48);
    AudioServer::set_sample_playback_pause(pRVar5,SUB81(&local_48,0));
    if (((local_48 == (Object *)0x0) ||
        (cVar2 = RefCounted::unreference(), pOVar1 = local_48, cVar2 == '\0')) ||
       (cVar2 = predelete_handler(local_48), cVar2 == '\0')) goto LAB_00101aa5;
    plVar6 = plVar6 + 1;
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
  } while( true );
}



/* AudioStreamPlayerInternal::set_pitch_scale(float) */

void __thiscall
AudioStreamPlayerInternal::set_pitch_scale(AudioStreamPlayerInternal *this,float param_1)

{
  undefined4 uVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long in_FS_OFFSET;
  Object *local_38;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 <= 0.0) {
    if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("set_pitch_scale","scene/audio/audio_stream_player_internal.cpp",0x136,
                       "Condition \"p_pitch_scale <= 0.0\" is true.",0,0);
      return;
    }
  }
  else {
    *(float *)(this + 500) = param_1;
    CowData<Ref<AudioStreamPlayback>>::_copy_on_write
              ((CowData<Ref<AudioStreamPlayback>> *)(this + 0x1e0));
    plVar6 = *(long **)(this + 0x1e0);
    CowData<Ref<AudioStreamPlayback>>::_copy_on_write
              ((CowData<Ref<AudioStreamPlayback>> *)(this + 0x1e0));
    plVar7 = *(long **)(this + 0x1e0);
    if (plVar7 != (long *)0x0) {
      plVar7 = plVar7 + plVar7[-1];
    }
    for (; plVar7 != plVar6; plVar6 = plVar6 + 1) {
      while( true ) {
        uVar5 = AudioServer::get_singleton();
        local_38 = (Object *)0x0;
        pOVar3 = (Object *)*plVar6;
        uVar1 = *(undefined4 *)(this + 500);
        if ((pOVar3 != (Object *)0x0) &&
           (cVar4 = RefCounted::reference(), local_38 = pOVar3, cVar4 == '\0')) {
          local_38 = (Object *)0x0;
        }
        AudioServer::set_playback_pitch_scale(uVar1,uVar5);
        if (((local_38 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
           (cVar4 = predelete_handler(local_38), cVar4 != '\0')) break;
        plVar6 = plVar6 + 1;
        if (plVar7 == plVar6) goto LAB_00101d80;
      }
      (**(code **)(*(long *)local_38 + 0x140))(local_38);
      Memory::free_static(local_38,false);
    }
LAB_00101d80:
    if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamPlayerInternal::set(StringName const&, Variant const&) */

undefined8 __thiscall
AudioStreamPlayerInternal::set(AudioStreamPlayerInternal *this,StringName *param_1,Variant *param_2)

{
  Variant *this_00;
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  uint uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  
  if (*(long *)(this + 0x1b0) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x1d4) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1d0) * 4);
    uVar18 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1d0) * 8);
    if (*(long *)param_1 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(*(long *)param_1 + 0x20);
    }
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar11 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar18;
    lVar13 = SUB168(auVar3 * auVar7,8);
    uVar16 = *(uint *)(*(long *)(this + 0x1b8) + lVar13 * 4);
    uVar12 = SUB164(auVar3 * auVar7,8);
    if (uVar16 != 0) {
      uVar17 = 0;
      do {
        if ((uVar11 == uVar16) &&
           (*(long *)(*(long *)(*(long *)(this + 0x1b0) + lVar13 * 8) + 0x10) == *(long *)param_1))
        {
          lVar2 = *(long *)(*(long *)(this + 0x1b0) + (ulong)uVar12 * 8);
          this_00 = (Variant *)(lVar2 + 0x20);
          Variant::operator=(this_00,param_2);
          CowData<Ref<AudioStreamPlayback>>::_copy_on_write
                    ((CowData<Ref<AudioStreamPlayback>> *)(this + 0x1e0));
          puVar14 = *(undefined8 **)(this + 0x1e0);
          CowData<Ref<AudioStreamPlayback>>::_copy_on_write
                    ((CowData<Ref<AudioStreamPlayback>> *)(this + 0x1e0));
          puVar15 = *(undefined8 **)(this + 0x1e0);
          if (puVar15 != (undefined8 *)0x0) {
            puVar15 = puVar15 + puVar15[-1];
          }
          for (; puVar14 != puVar15; puVar14 = puVar14 + 1) {
            (**(code **)(*(long *)*puVar14 + 0x188))((long *)*puVar14,lVar2 + 0x18,this_00);
          }
          return 1;
        }
        uVar17 = uVar17 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar12 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar18;
        lVar13 = SUB168(auVar4 * auVar8,8);
        uVar16 = *(uint *)(*(long *)(this + 0x1b8) + lVar13 * 4);
        uVar12 = SUB164(auVar4 * auVar8,8);
      } while ((uVar16 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar16 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar18, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + uVar12) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar18, uVar17 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
}



/* AudioStreamPlayerInternal::stop_basic() */

void __thiscall AudioStreamPlayerInternal::stop_basic(AudioStreamPlayerInternal *this)

{
  CowData<Ref<AudioStreamPlayback>> *this_00;
  long lVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long in_FS_OFFSET;
  Object *local_48;
  
  this_00 = (CowData<Ref<AudioStreamPlayback>> *)(this + 0x1e0);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  CowData<Ref<AudioStreamPlayback>>::_copy_on_write(this_00);
  plVar7 = *(long **)(this + 0x1e0);
  CowData<Ref<AudioStreamPlayback>>::_copy_on_write(this_00);
  lVar2 = *(long *)(this + 0x1e0);
  if (lVar2 == 0) {
    plVar8 = (long *)0x0;
    if (plVar7 == (long *)0x0) goto LAB_001020c5;
LAB_00102029:
    do {
      while( true ) {
        uVar5 = AudioServer::get_singleton();
        local_48 = (Object *)0x0;
        pOVar3 = (Object *)*plVar7;
        if ((pOVar3 != (Object *)0x0) &&
           (cVar4 = RefCounted::reference(), local_48 = pOVar3, cVar4 == '\0')) {
          local_48 = (Object *)0x0;
        }
        AudioServer::stop_playback_stream(uVar5);
        if (((local_48 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
           (cVar4 = predelete_handler(local_48), cVar4 != '\0')) break;
        plVar7 = plVar7 + 1;
        if (plVar8 == plVar7) goto LAB_001020a8;
      }
      plVar7 = plVar7 + 1;
      (**(code **)(*(long *)local_48 + 0x140))(local_48);
      Memory::free_static(local_48,false);
    } while (plVar8 != plVar7);
LAB_001020a8:
    if (*(long *)(this + 0x1e0) == 0) goto LAB_001020c5;
    lVar6 = *(long *)(*(long *)(this + 0x1e0) + -8);
  }
  else {
    lVar6 = *(long *)(lVar2 + -8);
    plVar8 = (long *)(lVar2 + lVar6 * 8);
    if (plVar7 != plVar8) goto LAB_00102029;
  }
  if (lVar6 != 0) {
    CowData<Ref<AudioStreamPlayback>>::_unref(this_00);
  }
LAB_001020c5:
  this[0x1f0] = (AudioStreamPlayerInternal)0x0;
  if (this[0x1a0] == (AudioStreamPlayerInternal)0x0) {
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node::set_process_internal(SUB81(*(undefined8 *)(this + 0x178),0));
      return;
    }
  }
  else if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node::set_physics_process_internal(SUB81(*(undefined8 *)(this + 0x178),0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Vector<Ref<AudioStreamPlayback> >::push_back(Ref<AudioStreamPlayback>) [clone .isra.0] */

void __thiscall
Vector<Ref<AudioStreamPlayback>>::push_back(Vector<Ref<AudioStreamPlayback>> *this,long *param_2)

{
  long *plVar1;
  Object *pOVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)(this + 8) == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar5 = CowData<Ref<AudioStreamPlayback>>::resize<false>
                    ((CowData<Ref<AudioStreamPlayback>> *)(this + 8),lVar6);
  if (iVar5 != 0) {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
    return;
  }
  if (*(long *)(this + 8) == 0) {
    lVar7 = -1;
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(*(long *)(this + 8) + -8);
    lVar7 = lVar6 + -1;
    if (-1 < lVar7) {
      CowData<Ref<AudioStreamPlayback>>::_copy_on_write
                ((CowData<Ref<AudioStreamPlayback>> *)(this + 8));
      pOVar2 = (Object *)*param_2;
      plVar1 = (long *)(*(long *)(this + 8) + lVar7 * 8);
      pOVar3 = (Object *)*plVar1;
      if (pOVar2 == pOVar3) {
        return;
      }
      *plVar1 = (long)pOVar2;
      if ((pOVar2 != (Object *)0x0) && (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
        *plVar1 = 0;
      }
      if (pOVar3 == (Object *)0x0) {
        return;
      }
      cVar4 = RefCounted::unreference();
      if (cVar4 == '\0') {
        return;
      }
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 == '\0') {
        return;
      }
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
      return;
    }
  }
  _err_print_index_error
            ("set","./core/templates/cowdata.h",0xcf,lVar7,lVar6,"p_index","size()","",false,false);
  return;
}



/* AudioStreamPlayerInternal::play_basic() */

void AudioStreamPlayerInternal::play_basic(void)

{
  undefined8 uVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  Ref *pRVar5;
  RefCounted *this;
  long lVar6;
  Object *pOVar7;
  long *plVar8;
  Object *pOVar9;
  AudioStreamPlayerInternal *in_RSI;
  long *in_RDI;
  long *plVar10;
  RefCounted *pRVar11;
  long in_FS_OFFSET;
  byte bVar12;
  NodePath aNStack_78 [8];
  long local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58;
  long local_40;
  
  bVar12 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *in_RDI = 0;
  if (*(long **)(in_RSI + 0x1e8) == (long *)0x0) goto LAB_00102460;
  if ((*(byte *)(*(long *)(in_RSI + 0x178) + 0x2fa) & 0x40) == 0) {
    _err_print_error("play_basic","scene/audio/audio_stream_player_internal.cpp",0x8d,
                     "Condition \"!node->is_inside_tree()\" is true. Returning: stream_playback",
                     "Playback can only happen when a node is inside the scene tree",0,0);
    goto LAB_00102460;
  }
  cVar3 = (**(code **)(**(long **)(in_RSI + 0x1e8) + 0x200))();
  if (((cVar3 != '\0') && (cVar3 = is_playing(in_RSI), cVar3 != '\0')) &&
     (Callable::call<>(), Variant::needs_deinit[local_58] != '\0')) {
    Variant::_clear_internal();
  }
  (**(code **)(**(long **)(in_RSI + 0x1e8) + 0x1c8))(&local_68);
  pOVar9 = (Object *)*in_RDI;
  pOVar7 = pOVar9;
  if (local_68 == pOVar9) {
LAB_00102383:
    if (((pOVar7 != (Object *)0x0) &&
        (cVar3 = RefCounted::unreference(), pOVar9 = local_68, cVar3 != '\0')) &&
       (cVar3 = predelete_handler(local_68), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
      Memory::free_static(pOVar9,false);
    }
    plVar10 = (long *)*in_RDI;
    if (plVar10 != (long *)0x0) {
      plVar8 = *(long **)(in_RSI + 0x1c0);
      if (plVar8 != (long *)0x0) {
        while( true ) {
          (**(code **)(*plVar10 + 0x188))(plVar10,plVar8 + 3,plVar8 + 4);
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) break;
          plVar10 = (long *)*in_RDI;
        }
      }
      AudioServer::get_singleton();
      iVar4 = AudioServer::get_default_playback_type();
      if (((iVar4 == 2) && (*(int *)(in_RSI + 0x1a4) == 0)) || (*(int *)(in_RSI + 0x1a4) == 2)) {
        lVar6 = **(long **)(in_RSI + 0x1e8);
        if (*(code **)(lVar6 + 0x210) == AudioStream::can_be_sampled) {
LAB_001025aa:
          cVar3 = (**(code **)(lVar6 + 0x220))();
          if (cVar3 == '\0') {
            Node::get_path();
            local_68 = (Object *)0x106860;
            local_70 = 0;
            local_60 = 0x43;
            String::parse_latin1((StrRange *)&local_70);
            vformat<NodePath>(&local_68,(StrRange *)&local_70,aNStack_78);
            _err_print_error("play_basic","scene/audio/audio_stream_player_internal.cpp",0xa7,
                             &local_68,0,1);
            pOVar9 = local_68;
            if (local_68 != (Object *)0x0) {
              LOCK();
              pOVar7 = local_68 + -0x10;
              *(long *)pOVar7 = *(long *)pOVar7 + -1;
              UNLOCK();
              if (*(long *)pOVar7 == 0) {
                local_68 = (Object *)0x0;
                Memory::free_static(pOVar9 + -0x10,false);
              }
            }
            lVar6 = local_70;
            if (local_70 != 0) {
              LOCK();
              plVar10 = (long *)(local_70 + -0x10);
              *plVar10 = *plVar10 + -1;
              UNLOCK();
              if (*plVar10 == 0) {
                local_70 = 0;
                Memory::free_static((void *)(lVar6 + -0x10),false);
              }
            }
            NodePath::~NodePath(aNStack_78);
          }
          goto LAB_001023fc;
        }
        cVar3 = (**(code **)(lVar6 + 0x210))();
        if (cVar3 == '\0') {
          lVar6 = **(long **)(in_RSI + 0x1e8);
          goto LAB_001025aa;
        }
        pOVar9 = (Object *)*in_RDI;
        lVar6 = *(long *)pOVar9;
        if (*(code **)(lVar6 + 0x1a0) != AudioStreamPlayback::set_is_sample) {
          (**(code **)(lVar6 + 0x1a0))(pOVar9,1);
          pOVar9 = (Object *)*in_RDI;
          lVar6 = *(long *)pOVar9;
        }
        if (*(code **)(lVar6 + 0x1a8) != AudioStreamPlayback::get_is_sample) {
          cVar3 = (**(code **)(lVar6 + 0x1a8))(pOVar9);
          if (cVar3 == '\0') goto LAB_001023fc;
          (**(code **)(*(long *)*in_RDI + 0x1b0))(&local_68);
          if (local_68 == (Object *)0x0) {
            pRVar5 = (Ref *)AudioServer::get_singleton();
            cVar3 = AudioServer::is_stream_registered_as_sample(pRVar5);
            if (cVar3 == '\0') {
              pRVar5 = (Ref *)AudioServer::get_singleton();
              AudioServer::register_stream_as_sample(pRVar5);
            }
            local_68 = (Object *)0x0;
            this = (RefCounted *)operator_new(0x1b0,"");
            pRVar11 = this;
            for (lVar6 = 0x36; lVar6 != 0; lVar6 = lVar6 + -1) {
              *(undefined8 *)pRVar11 = 0;
              pRVar11 = pRVar11 + (ulong)bVar12 * -0x10 + 8;
            }
            RefCounted::RefCounted(this);
            *(undefined ***)this = &PTR__initialize_classv_001087d8;
            uVar1 = _LC67;
            *(undefined1 (*) [16])(this + 0x180) = (undefined1  [16])0x0;
            *(undefined8 *)(this + 400) = uVar1;
            *(undefined1 (*) [16])(this + 0x1a0) = (undefined1  [16])0x0;
            postinitialize_handler((Object *)this);
            cVar3 = RefCounted::init_ref();
            pOVar9 = local_68;
            if (cVar3 == '\0') {
              if (local_68 != (Object *)0x0) {
                local_68 = (Object *)0x0;
                cVar3 = RefCounted::unreference();
                if (cVar3 != '\0') {
                  cVar3 = predelete_handler(pOVar9);
                  this = (RefCounted *)0x0;
                  if (cVar3 != '\0') goto LAB_00102a33;
                }
              }
            }
            else {
              pOVar7 = local_68;
              if (this != (RefCounted *)local_68) {
                local_68 = (Object *)this;
                cVar3 = RefCounted::reference();
                if (cVar3 == '\0') {
                  local_68 = (Object *)0x0;
                }
                pOVar7 = (Object *)this;
                if (((pOVar9 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')
                    ) && (cVar3 = predelete_handler(pOVar9), cVar3 != '\0')) {
LAB_00102a33:
                  (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
                  Memory::free_static(pOVar9,false);
                  pOVar7 = (Object *)this;
                  if (this == (RefCounted *)0x0) goto LAB_001028ac;
                }
              }
              cVar3 = RefCounted::unreference();
              if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar7), cVar3 != '\0')) {
                (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
                Memory::free_static(pOVar7,false);
              }
            }
LAB_001028ac:
            pOVar2 = local_68;
            pOVar9 = *(Object **)(in_RSI + 0x1e8);
            pOVar7 = *(Object **)(local_68 + 0x180);
            if (pOVar9 != pOVar7) {
              *(Object **)(local_68 + 0x180) = pOVar9;
              if ((pOVar9 != (Object *)0x0) && (cVar3 = RefCounted::reference(), cVar3 == '\0')) {
                *(undefined8 *)(pOVar2 + 0x180) = 0;
              }
              if (((pOVar7 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0'))
                 && (cVar3 = predelete_handler(pOVar7), cVar3 != '\0')) {
                (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
                Memory::free_static(pOVar7,false);
              }
            }
            plVar10 = (long *)*in_RDI;
            *(undefined4 *)(local_68 + 0x194) = *(undefined4 *)(in_RSI + 500);
            if ((*(code **)(*plVar10 + 0x1b8) != AudioStreamPlayback::set_sample_playback) &&
               ((**(code **)(*plVar10 + 0x1b8))(), local_68 == (Object *)0x0)) goto LAB_001023fc;
            cVar3 = RefCounted::unreference();
            pOVar9 = local_68;
          }
          else {
            cVar3 = RefCounted::unreference();
            pOVar9 = local_68;
          }
          if ((cVar3 != '\0') &&
             (local_68 = pOVar9, cVar3 = predelete_handler(pOVar9), cVar3 != '\0')) {
            (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
            Memory::free_static(pOVar9,false);
          }
          goto LAB_001023fc;
        }
LAB_0010240d:
        local_68 = pOVar9;
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') goto LAB_00102422;
        Vector<Ref<AudioStreamPlayback>>::push_back
                  ((Vector<Ref<AudioStreamPlayback>> *)(in_RSI + 0x1d8));
        cVar3 = RefCounted::unreference();
        if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar9), cVar3 != '\0')) {
          (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
          Memory::free_static(pOVar9,false);
        }
      }
      else {
LAB_001023fc:
        pOVar9 = (Object *)*in_RDI;
        if (pOVar9 != (Object *)0x0) goto LAB_0010240d;
LAB_00102422:
        local_68 = (Object *)0x0;
        Vector<Ref<AudioStreamPlayback>>::push_back
                  ((Vector<Ref<AudioStreamPlayback>> *)(in_RSI + 0x1d8),&local_68);
      }
      in_RSI[0x1f0] = (AudioStreamPlayerInternal)0x1;
      if (in_RSI[0x1a0] == (AudioStreamPlayerInternal)0x0) {
        Node::set_process_internal(SUB81(*(undefined8 *)(in_RSI + 0x178),0));
      }
      else {
        Node::set_physics_process_internal(SUB81(*(undefined8 *)(in_RSI + 0x178),0));
      }
      goto LAB_00102460;
    }
  }
  else {
    *in_RDI = (long)local_68;
    if (local_68 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *in_RDI = 0;
      }
      pOVar7 = local_68;
      if (pOVar9 != (Object *)0x0) goto LAB_0010236e;
      goto LAB_00102383;
    }
    if (pOVar9 != (Object *)0x0) {
LAB_0010236e:
      cVar3 = RefCounted::unreference();
      pOVar7 = local_68;
      if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar9), pOVar7 = local_68, cVar3 != '\0'))
      {
        (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
        Memory::free_static(pOVar9,false);
        pOVar7 = local_68;
      }
      goto LAB_00102383;
    }
  }
  _err_print_error("play_basic","scene/audio/audio_stream_player_internal.cpp",0x92,
                   "Condition \"stream_playback.is_null()\" is true. Returning: stream_playback",
                   "Failed to instantiate playback.",0,0);
LAB_00102460:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamPlayerInternal::process() */

void __thiscall AudioStreamPlayerInternal::process(AudioStreamPlayerInternal *this)

{
  CowData<Ref<AudioStreamPlayback>> *this_00;
  long lVar1;
  long lVar2;
  Object *pOVar3;
  Object *pOVar4;
  byte bVar5;
  char cVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long in_FS_OFFSET;
  long *local_98;
  Object *local_78;
  Object *local_70;
  Vector<Ref<AudioStreamPlayback>> local_68 [8];
  long *local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (CowData<Ref<AudioStreamPlayback>> *)(this + 0x1e0);
  local_60 = (long *)0x0;
  CowData<Ref<AudioStreamPlayback>>::_copy_on_write(this_00);
  plVar8 = *(long **)(this + 0x1e0);
  CowData<Ref<AudioStreamPlayback>>::_copy_on_write(this_00);
  plVar9 = *(long **)(this + 0x1e0);
  if (plVar9 != (long *)0x0) {
    plVar9 = plVar9 + plVar9[-1];
  }
joined_r0x00102af3:
  if (plVar8 != plVar9) {
    do {
      if (*plVar8 != 0) {
        uVar7 = AudioServer::get_singleton();
        local_78 = (Object *)0x0;
        pOVar3 = (Object *)*plVar8;
        if ((pOVar3 != (Object *)0x0) &&
           (cVar6 = RefCounted::reference(), local_78 = pOVar3, cVar6 == '\0')) {
          local_78 = (Object *)0x0;
        }
        cVar6 = AudioServer::is_playback_active(uVar7);
        if (cVar6 == '\0') {
          uVar7 = AudioServer::get_singleton();
          local_70 = (Object *)0x0;
          pOVar3 = (Object *)*plVar8;
          if ((pOVar3 != (Object *)0x0) &&
             (cVar6 = RefCounted::reference(), local_70 = pOVar3, cVar6 == '\0')) {
            local_70 = (Object *)0x0;
          }
          bVar5 = AudioServer::is_playback_paused(uVar7);
          bVar5 = bVar5 ^ 1;
          if (((local_70 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
             (cVar6 = predelete_handler(local_70), cVar6 != '\0')) {
            (**(code **)(*(long *)local_70 + 0x140))(local_70);
            Memory::free_static(local_70,false);
          }
          if (((local_78 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
             (cVar6 = predelete_handler(local_78), cVar6 != '\0')) {
LAB_00102ec2:
            (**(code **)(*(long *)local_78 + 0x140))(local_78);
            Memory::free_static(local_78,false);
          }
          if (bVar5 != 0) {
            pOVar3 = (Object *)*plVar8;
            if ((pOVar3 == (Object *)0x0) || (cVar6 = RefCounted::reference(), cVar6 == '\0'))
            goto LAB_00102c20;
            Vector<Ref<AudioStreamPlayback>>::push_back(local_68);
            cVar6 = RefCounted::unreference();
            if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar3), cVar6 != '\0')) {
              (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
              Memory::free_static(pOVar3,false);
            }
          }
        }
        else if ((local_78 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0'))
        {
          bVar5 = 0;
          cVar6 = predelete_handler(local_78);
          if (cVar6 != '\0') goto LAB_00102ec2;
        }
      }
      plVar8 = plVar8 + 1;
      if (plVar9 == plVar8) break;
    } while( true );
  }
  CowData<Ref<AudioStreamPlayback>>::_copy_on_write((CowData<Ref<AudioStreamPlayback>> *)&local_60);
  plVar9 = local_60;
  CowData<Ref<AudioStreamPlayback>>::_copy_on_write((CowData<Ref<AudioStreamPlayback>> *)&local_60);
  plVar8 = local_60;
  if (local_60 == (long *)0x0) {
    if (plVar9 == (long *)0x0) goto LAB_00102dfd;
    local_98 = (long *)0x0;
LAB_00102c90:
    do {
      lVar1 = *(long *)(this + 0x1e0);
      if ((lVar1 != 0) && (lVar2 = *(long *)(lVar1 + -8), 0 < lVar2)) {
        lVar10 = 0;
        do {
          if (*plVar9 == *(long *)(lVar1 + lVar10 * 8)) {
            if (lVar10 < lVar2) {
              CowData<Ref<AudioStreamPlayback>>::_copy_on_write(this_00);
              lVar1 = *(long *)(this + 0x1e0);
              if (lVar1 == 0) {
                CowData<Ref<AudioStreamPlayback>>::resize<false>(this_00,-1);
              }
              else {
                lVar2 = *(long *)(lVar1 + -8) + -1;
                if (lVar10 < lVar2) {
                  do {
                    pOVar3 = *(Object **)(lVar1 + 8 + lVar10 * 8);
                    pOVar4 = *(Object **)(lVar1 + lVar10 * 8);
                    if (pOVar3 != pOVar4) {
                      *(Object **)(lVar1 + lVar10 * 8) = pOVar3;
                      if ((pOVar3 != (Object *)0x0) &&
                         (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
                        *(undefined8 *)(lVar1 + lVar10 * 8) = 0;
                      }
                      if (((pOVar4 != (Object *)0x0) &&
                          (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
                         (cVar6 = predelete_handler(pOVar4), cVar6 != '\0')) {
                        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
                        Memory::free_static(pOVar4,false);
                      }
                    }
                    lVar10 = lVar10 + 1;
                  } while (lVar2 != lVar10);
                }
                CowData<Ref<AudioStreamPlayback>>::resize<false>(this_00,lVar2);
              }
            }
            else {
              _err_print_index_error
                        ("remove_at","./core/templates/cowdata.h",0xe4,lVar10,lVar2,"p_index",
                         "size()","",false,false);
            }
            break;
          }
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
      }
      plVar9 = plVar9 + 1;
    } while (local_98 != plVar9);
    if (plVar8 == (long *)0x0) goto LAB_00102dfd;
  }
  else {
    local_98 = local_60 + local_60[-1];
    if (local_98 != plVar9) goto LAB_00102c90;
  }
  if (*(long *)(this + 0x1e0) == 0) {
    this[0x1f0] = (AudioStreamPlayerInternal)0x0;
    if (this[0x1a0] == (AudioStreamPlayerInternal)0x0) {
      Node::set_process_internal(SUB81(*(undefined8 *)(this + 0x178),0));
    }
    else {
      Node::set_physics_process_internal(SUB81(*(undefined8 *)(this + 0x178),0));
    }
    if (local_60 == (long *)0x0) goto LAB_00102dfd;
  }
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  (**(code **)(**(long **)(this + 0x178) + 0xd0))
            (*(long **)(this + 0x178),SceneStringNames::singleton + 0xf8,0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
LAB_00102dfd:
  CowData<Ref<AudioStreamPlayback>>::_unref((CowData<Ref<AudioStreamPlayback>> *)&local_60);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_00102c20:
  plVar8 = plVar8 + 1;
  Vector<Ref<AudioStreamPlayback>>::push_back(local_68);
  goto joined_r0x00102af3;
}



/* AudioStreamPlayerInternal::notification(int) */

void __thiscall AudioStreamPlayerInternal::notification(AudioStreamPlayerInternal *this,int param_1)

{
  CowData<Ref<AudioStreamPlayback>> *this_00;
  long lVar1;
  Object *pOVar2;
  char cVar3;
  byte bVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long in_FS_OFFSET;
  Object *local_60;
  int local_58;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < 0x1a) {
    switch(param_1) {
    case 1:
      this_00 = (CowData<Ref<AudioStreamPlayback>> *)(this + 0x1e0);
      CowData<Ref<AudioStreamPlayback>>::_copy_on_write(this_00);
      plVar8 = *(long **)(this + 0x1e0);
      CowData<Ref<AudioStreamPlayback>>::_copy_on_write(this_00);
      lVar7 = *(long *)(this + 0x1e0);
      if (lVar7 == 0) {
        plVar9 = (long *)0x0;
        if (plVar8 != (long *)0x0) goto LAB_001031ad;
      }
      else {
        lVar6 = *(long *)(lVar7 + -8);
        plVar9 = (long *)(lVar7 + lVar6 * 8);
        if (plVar8 != plVar9) {
LAB_001031ad:
          do {
            while( true ) {
              uVar5 = AudioServer::get_singleton();
              local_60 = (Object *)0x0;
              pOVar2 = (Object *)*plVar8;
              if ((pOVar2 != (Object *)0x0) &&
                 (cVar3 = RefCounted::reference(), local_60 = pOVar2, cVar3 == '\0')) {
                local_60 = (Object *)0x0;
              }
              AudioServer::stop_playback_stream(uVar5);
              if (((local_60 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')
                  ) && (cVar3 = predelete_handler(local_60), cVar3 != '\0')) break;
              plVar8 = plVar8 + 1;
              if (plVar9 == plVar8) goto LAB_00103230;
            }
            plVar8 = plVar8 + 1;
            (**(code **)(*(long *)local_60 + 0x140))(local_60);
            Memory::free_static(local_60,false);
          } while (plVar9 != plVar8);
LAB_00103230:
          if (*(long *)(this + 0x1e0) == 0) break;
          lVar6 = *(long *)(*(long *)(this + 0x1e0) + -8);
        }
        if (lVar6 != 0) {
          if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
            CowData<Ref<AudioStreamPlayback>>::_unref(this_00);
            return;
          }
          goto LAB_00103308;
        }
      }
      break;
    case 10:
      if (((this[0x1fc] != (AudioStreamPlayerInternal)0x0) &&
          (lVar7 = Engine::get_singleton(), *(char *)(lVar7 + 0xc0) == '\0')) &&
         (Callable::call<double>(0.0), Variant::needs_deinit[local_58] != '\0')) {
        Variant::_clear_internal();
      }
      bVar4 = Node::can_process();
      if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00103308;
      bVar4 = bVar4 ^ 1;
      goto LAB_001030a9;
    case 0xb:
switchD_00103013_caseD_b:
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        bVar4 = true;
LAB_001030a9:
        set_stream_paused(this,(bool)bVar4);
        return;
      }
      goto LAB_00103308;
    case 0xe:
switchD_00103013_caseD_e:
      cVar3 = Node::can_process();
      if (cVar3 == '\0') goto switchD_00103013_caseD_b;
      break;
    case 0xf:
switchD_00103013_caseD_f:
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        bVar4 = false;
        goto LAB_001030a9;
      }
      goto LAB_00103308;
    case 0x19:
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        process(this);
        return;
      }
      goto LAB_00103308;
    }
  }
  else {
    if (param_1 == 0x232b) goto switchD_00103013_caseD_e;
    if (param_1 == 0x232c) {
      if (*(long *)(*(long *)(this + 0x178) + 0x240) == 0) {
        _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0
                         ,0);
      }
      cVar3 = SceneTree::is_paused();
      if (cVar3 == '\0') goto switchD_00103013_caseD_f;
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103308:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamPlayerInternal::ensure_playback_limit() */

void __thiscall AudioStreamPlayerInternal::ensure_playback_limit(AudioStreamPlayerInternal *this)

{
  long lVar1;
  CowData<Ref<AudioStreamPlayback>> *this_00;
  long lVar2;
  long *plVar3;
  Object *pOVar4;
  Object *pOVar5;
  code *pcVar6;
  char cVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long in_FS_OFFSET;
  Object *local_48;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
LAB_00103335:
  lVar8 = *(long *)(this + 0x1e0);
  if (lVar8 == 0) goto LAB_001034a3;
LAB_00103345:
  if (*(long *)(lVar8 + -8) <= (long)*(int *)(this + 0x208)) {
LAB_001034b5:
    if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  do {
    uVar9 = AudioServer::get_singleton();
    plVar3 = *(long **)(this + 0x1e0);
    if (plVar3 == (long *)0x0) {
      lVar8 = 0;
LAB_00103563:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,0,lVar8,"p_index","size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    lVar8 = plVar3[-1];
    if (lVar8 < 1) goto LAB_00103563;
    local_48 = (Object *)0x0;
    pOVar4 = (Object *)*plVar3;
    if (pOVar4 != (Object *)0x0) {
      cVar7 = RefCounted::reference();
      local_48 = pOVar4;
      if (cVar7 == '\0') {
        local_48 = (Object *)0x0;
      }
    }
    AudioServer::stop_playback_stream(uVar9);
    if (local_48 != (Object *)0x0) {
      cVar7 = RefCounted::unreference();
      if (cVar7 != '\0') {
        cVar7 = predelete_handler(local_48);
        if (cVar7 != '\0') {
          (**(code **)(*(long *)local_48 + 0x140))(local_48);
          Memory::free_static(local_48,false);
        }
      }
    }
    this_00 = (CowData<Ref<AudioStreamPlayback>> *)(this + 0x1e0);
    if (*(long *)(this + 0x1e0) == 0) {
      lVar8 = 0;
LAB_001034e3:
      _err_print_index_error
                ("remove_at","./core/templates/cowdata.h",0xe4,0,lVar8,"p_index","size()","",false,
                 false);
      goto LAB_00103335;
    }
    lVar8 = *(long *)(*(long *)(this + 0x1e0) + -8);
    if (lVar8 < 1) goto LAB_001034e3;
    CowData<Ref<AudioStreamPlayback>>::_copy_on_write(this_00);
    lVar8 = *(long *)(this + 0x1e0);
    if (lVar8 == 0) {
      CowData<Ref<AudioStreamPlayback>>::resize<false>(this_00,-1);
    }
    else {
      lVar1 = *(long *)(lVar8 + -8) + -1;
      if (0 < lVar1) {
        lVar10 = 0;
LAB_00103421:
        do {
          pOVar4 = *(Object **)(lVar8 + 8 + lVar10 * 8);
          pOVar5 = *(Object **)(lVar8 + lVar10 * 8);
          if (pOVar4 != pOVar5) {
            *(Object **)(lVar8 + lVar10 * 8) = pOVar4;
            if (pOVar4 != (Object *)0x0) {
              cVar7 = RefCounted::reference();
              if (cVar7 == '\0') {
                *(undefined8 *)(lVar8 + lVar10 * 8) = 0;
              }
            }
            if (pOVar5 != (Object *)0x0) {
              cVar7 = RefCounted::unreference();
              if (cVar7 != '\0') {
                cVar7 = predelete_handler(pOVar5);
                if (cVar7 != '\0') {
                  lVar10 = lVar10 + 1;
                  (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                  Memory::free_static(pOVar5,false);
                  if (lVar1 == lVar10) break;
                  goto LAB_00103421;
                }
              }
            }
          }
          lVar10 = lVar10 + 1;
        } while (lVar1 != lVar10);
      }
      CowData<Ref<AudioStreamPlayback>>::resize<false>(this_00,lVar1);
    }
    lVar8 = *(long *)(this + 0x1e0);
    if (lVar8 != 0) goto LAB_00103345;
LAB_001034a3:
    if (-1 < *(int *)(this + 0x208)) goto LAB_001034b5;
  } while( true );
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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x108b,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x108a,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* AudioStreamPlayerInternal::is_class_ptr(void*) const */

uint __thiscall
AudioStreamPlayerInternal::is_class_ptr(AudioStreamPlayerInternal *this,void *param_1)

{
  return (uint)CONCAT71(0x108b,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x108a,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* AudioStreamPlayerInternal::_getv(StringName const&, Variant&) const */

undefined8 AudioStreamPlayerInternal::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioStreamPlayerInternal::_setv(StringName const&, Variant const&) */

undefined8 AudioStreamPlayerInternal::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioStreamPlayerInternal::_validate_propertyv(PropertyInfo&) const */

void AudioStreamPlayerInternal::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* AudioStreamPlayerInternal::_property_can_revertv(StringName const&) const */

undefined8 AudioStreamPlayerInternal::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* AudioStreamPlayerInternal::_property_get_revertv(StringName const&, Variant&) const */

undefined8 AudioStreamPlayerInternal::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioStreamPlayerInternal::_notificationv(int, bool) */

void AudioStreamPlayerInternal::_notificationv(int param_1,bool param_2)

{
  return;
}



/* AudioSamplePlayback::is_class_ptr(void*) const */

uint __thiscall AudioSamplePlayback::is_class_ptr(AudioSamplePlayback *this,void *param_1)

{
  return (uint)CONCAT71(0x108a,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x108a,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x108b,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* AudioSamplePlayback::_getv(StringName const&, Variant&) const */

undefined8 AudioSamplePlayback::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioSamplePlayback::_setv(StringName const&, Variant const&) */

undefined8 AudioSamplePlayback::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioSamplePlayback::_validate_propertyv(PropertyInfo&) const */

void AudioSamplePlayback::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* AudioSamplePlayback::_property_can_revertv(StringName const&) const */

undefined8 AudioSamplePlayback::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* AudioSamplePlayback::_property_get_revertv(StringName const&, Variant&) const */

undefined8 AudioSamplePlayback::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioSamplePlayback::_notificationv(int, bool) */

void AudioSamplePlayback::_notificationv(int param_1,bool param_2)

{
  return;
}



/* AudioStreamPlayback::set_is_sample(bool) */

void AudioStreamPlayback::set_is_sample(bool param_1)

{
  return;
}



/* AudioStreamPlayback::get_is_sample() const */

undefined8 AudioStreamPlayback::get_is_sample(void)

{
  return 0;
}



/* AudioStreamPlayback::set_sample_playback(Ref<AudioSamplePlayback> const&) */

void AudioStreamPlayback::set_sample_playback(Ref *param_1)

{
  return;
}



/* AudioStream::can_be_sampled() const */

undefined8 AudioStream::can_be_sampled(void)

{
  return 0;
}



/* CallableCustomMethodPointer<Object, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Object,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Object,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<AudioStreamPlayerInternal, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AudioStreamPlayerInternal,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AudioStreamPlayerInternal,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<Object, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Object,void>::get_argument_count
          (CallableCustomMethodPointer<Object,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<AudioStreamPlayerInternal, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<AudioStreamPlayerInternal,void>::get_argument_count
          (CallableCustomMethodPointer<AudioStreamPlayerInternal,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<AudioStreamPlayerInternal, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AudioStreamPlayerInternal,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AudioStreamPlayerInternal,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<Object, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Object,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Object,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00108518;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00108518;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
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
LAB_00103963:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00103963;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_001039ce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_001039ce:
  return &_get_class_namev()::_class_name_static;
}



/* CallableCustomMethodPointer<AudioStreamPlayerInternal, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AudioStreamPlayerInternal,void>::get_object
          (CallableCustomMethodPointer<AudioStreamPlayerInternal,void> *this)

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
      goto LAB_00103afd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00103afd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00103afd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<Object, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Object,void>::get_object(CallableCustomMethodPointer<Object,void> *this)

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
      goto LAB_00103bfd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00103bfd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00103bfd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* AudioSamplePlayback::_get_class_namev() const */

undefined8 * AudioSamplePlayback::_get_class_namev(void)

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
LAB_00103cc3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00103cc3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"AudioSamplePlayback");
      goto LAB_00103d2e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"AudioSamplePlayback");
LAB_00103d2e:
  return &_get_class_namev()::_class_name_static;
}



/* AudioStreamPlayerInternal::_get_class_namev() const */

undefined8 * AudioStreamPlayerInternal::_get_class_namev(void)

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
LAB_00103db3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00103db3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"AudioStreamPlayerInternal");
      goto LAB_00103e1e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"AudioStreamPlayerInternal");
LAB_00103e1e:
  return &_get_class_namev()::_class_name_static;
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



/* AudioSamplePlayback::~AudioSamplePlayback() */

void __thiscall AudioSamplePlayback::~AudioSamplePlayback(AudioSamplePlayback *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  bool bVar5;
  
  bVar5 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_001087d8;
  if ((bVar5) && (*(long *)(this + 0x1a8) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 0x1a0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1a0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x1a0);
      *(undefined8 *)(this + 0x1a0) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x188) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x188);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
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
  *(undefined ***)this = &PTR__initialize_classv_00108518;
  Object::~Object((Object *)this);
  return;
}



/* AudioSamplePlayback::~AudioSamplePlayback() */

void __thiscall AudioSamplePlayback::~AudioSamplePlayback(AudioSamplePlayback *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  bool bVar5;
  
  bVar5 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_001087d8;
  if ((bVar5) && (*(long *)(this + 0x1a8) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 0x1a0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1a0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x1a0);
      *(undefined8 *)(this + 0x1a0) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x188) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x188);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
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
  *(undefined ***)this = &PTR__initialize_classv_00108518;
  Object::~Object((Object *)this);
  operator_delete(this,0x1b0);
  return;
}



/* String::~String() */

void __thiscall String::~String(String *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
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



/* AudioStreamPlayerInternal::get_class() const */

void AudioStreamPlayerInternal::get_class(void)

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



/* AudioSamplePlayback::get_class() const */

void AudioSamplePlayback::get_class(void)

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



/* AudioStreamPlayerInternal::is_class(String const&) const */

undefined8 __thiscall
AudioStreamPlayerInternal::is_class(AudioStreamPlayerInternal *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010443f;
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
LAB_0010443f:
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
    if (cVar6 != '\0') goto LAB_001044f3;
  }
  cVar6 = String::operator==(param_1,"AudioStreamPlayerInternal");
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
              if (lVar5 == 0) goto LAB_001045a3;
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
LAB_001045a3:
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
      if (cVar6 != '\0') goto LAB_001044f3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_001044f3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
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
            if (lVar5 == 0) goto LAB_001046cf;
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
LAB_001046cf:
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
    if (cVar6 != '\0') goto LAB_00104783;
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
              if (lVar5 == 0) goto LAB_00104833;
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
LAB_00104833:
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
      if (cVar6 != '\0') goto LAB_00104783;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00104783:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioSamplePlayback::is_class(String const&) const */

undefined8 __thiscall AudioSamplePlayback::is_class(AudioSamplePlayback *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010495f;
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
LAB_0010495f:
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
    if (cVar5 != '\0') goto LAB_00104a13;
  }
  cVar5 = String::operator==(param_1,"AudioSamplePlayback");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00104a13:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(this + 0x18);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x3c) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x38) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x20) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0x20) + lVar4) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar5 + 0x48)] != '\0') {
              Variant::_clear_internal();
            }
            if (*(long *)((long)pvVar5 + 0x38) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x38) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x38);
                *(undefined8 *)((long)pvVar5 + 0x38) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + 0x28) != 0)) {
              StringName::unref();
            }
            if (*(long *)((long)pvVar5 + 0x20) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x20) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x20);
                *(undefined8 *)((long)pvVar5 + 0x20) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            if (*(long *)((long)pvVar5 + 0x10) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x10) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x10);
                *(undefined8 *)((long)pvVar5 + 0x10) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x18);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_00104bc4;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00104bc4:
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
      return;
    }
  }
  return;
}



/* AudioStreamPlayerInternal::_initialize_classv() */

void AudioStreamPlayerInternal::_initialize_classv(void)

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
    local_38 = "AudioStreamPlayerInternal";
    local_50 = 0;
    local_30 = 0x19;
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
        initialize_class()::initialized = '\x01';
        goto LAB_00104c75;
      }
    }
    initialize_class()::initialized = '\x01';
  }
LAB_00104c75:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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
LAB_001050e8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001050e8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00105106;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00105106:
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



/* AudioStreamPlayerInternal::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void AudioStreamPlayerInternal::_get_property_listv(List *param_1,bool param_2)

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
  local_78 = "AudioStreamPlayerInternal";
  local_70 = 0x19;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AudioStreamPlayerInternal";
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
LAB_001054d8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001054d8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x001054f6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x001054f6:
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
  StringName::StringName((StringName *)&local_78,"AudioStreamPlayerInternal",false);
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



/* AudioSamplePlayback::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
AudioSamplePlayback::_get_property_listv(AudioSamplePlayback *this,List *param_1,bool param_2)

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
  local_78 = "AudioSamplePlayback";
  local_70 = 0x13;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AudioSamplePlayback";
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
LAB_001058d8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001058d8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001058f5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001058f5:
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
  StringName::StringName((StringName *)&local_78,"AudioSamplePlayback",false);
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



/* AudioSamplePlayback::_initialize_classv() */

void AudioSamplePlayback::_initialize_classv(void)

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
  if (initialize_class()::initialized != '\0') goto LAB_00105d04;
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
    if (local_58 == 0) {
LAB_00105e0e:
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
LAB_00105e1e:
        RefCounted::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_00105e0e;
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) goto LAB_00105e1e;
    }
    RefCounted::initialize_class()::initialized = '\x01';
  }
  local_48 = "RefCounted";
  local_58 = 0;
  local_40 = 10;
  String::parse_latin1((StrRange *)&local_58);
  StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
  local_48 = "AudioSamplePlayback";
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
LAB_00105d04:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<AudioStreamPlayerInternal, void>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AudioStreamPlayerInternal,void>::call
          (CallableCustomMethodPointer<AudioStreamPlayerInternal,void> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  uint uVar5;
  ulong *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar7 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar7 << 8);
      LOCK();
      bVar8 = (char)ObjectDB::spin_lock == '\0';
      if (bVar8) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar8) break;
      local_48 = (char *)(uVar7 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar6 = (ulong *)((ulong)uVar5 * 0x10 + ObjectDB::object_slots);
    uVar7 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar7 != (*puVar6 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010607f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar6[1] == 0) goto LAB_0010607f;
    lVar2 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar3 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar2 + lVar3) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00106058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar2 + lVar3),uVar7,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_001061e5;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010607f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)&local_60);
    operator+((char *)&local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)&local_58);
    _err_print_error(&_LC11,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_48,0,0);
    pcVar4 = local_48;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
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
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001061e5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<Object, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Object,void>::call
          (CallableCustomMethodPointer<Object,void> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  uint uVar5;
  ulong *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar7 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar7 << 8);
      LOCK();
      bVar8 = (char)ObjectDB::spin_lock == '\0';
      if (bVar8) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar8) break;
      local_48 = (char *)(uVar7 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar6 = (ulong *)((ulong)uVar5 * 0x10 + ObjectDB::object_slots);
    uVar7 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar7 != (*puVar6 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010633f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar6[1] == 0) goto LAB_0010633f;
    lVar2 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar3 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar2 + lVar3) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00106318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar2 + lVar3),uVar7,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_001064a5;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010633f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)&local_60);
    operator+((char *)&local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)&local_58);
    _err_print_error(&_LC11,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_48,0,0);
    pcVar4 = local_48;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
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
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001064a5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* List<AudioStream::Parameter, DefaultAllocator>::~List() */

void __thiscall
List<AudioStream::Parameter,DefaultAllocator>::~List
          (List<AudioStream::Parameter,DefaultAllocator> *this)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)this;
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  do {
    pvVar2 = (void *)*puVar4;
    if (pvVar2 == (void *)0x0) {
      if (*(int *)(puVar4 + 2) != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(undefined8 **)((long)pvVar2 + 0x58) == puVar4) {
      *puVar4 = *(undefined8 *)((long)pvVar2 + 0x48);
      if (pvVar2 == (void *)puVar4[1]) {
        puVar4[1] = *(undefined8 *)((long)pvVar2 + 0x50);
      }
      if (*(long *)((long)pvVar2 + 0x50) != 0) {
        *(undefined8 *)(*(long *)((long)pvVar2 + 0x50) + 0x48) =
             *(undefined8 *)((long)pvVar2 + 0x48);
      }
      if (*(long *)((long)pvVar2 + 0x48) != 0) {
        *(undefined8 *)(*(long *)((long)pvVar2 + 0x48) + 0x50) =
             *(undefined8 *)((long)pvVar2 + 0x50);
      }
      if (Variant::needs_deinit[*(int *)((long)pvVar2 + 0x30)] != '\0') {
        Variant::_clear_internal();
      }
      if (*(long *)((long)pvVar2 + 0x20) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)((long)pvVar2 + 0x20) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar3 = *(long *)((long)pvVar2 + 0x20);
          *(undefined8 *)((long)pvVar2 + 0x20) = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
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
          lVar3 = *(long *)((long)pvVar2 + 8);
          *(undefined8 *)((long)pvVar2 + 8) = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      Memory::free_static(pvVar2,false);
      *(int *)(puVar4 + 2) = *(int *)(puVar4 + 2) + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    puVar4 = *(undefined8 **)this;
  } while (*(int *)(puVar4 + 2) != 0);
  Memory::free_static(puVar4,false);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, AudioStreamPlayerInternal::ParameterData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   AudioStreamPlayerInternal::ParameterData> > >::insert(StringName const&,
   AudioStreamPlayerInternal::ParameterData const&, bool) */

StringName *
HashMap<StringName,AudioStreamPlayerInternal::ParameterData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,AudioStreamPlayerInternal::ParameterData>>>
::insert(StringName *param_1,ParameterData *param_2,bool param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  void *pvVar5;
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
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  uint uVar30;
  uint uVar31;
  ulong uVar32;
  undefined8 uVar33;
  void *__s_00;
  long lVar34;
  void *pvVar35;
  StringName *in_RCX;
  int iVar36;
  undefined7 in_register_00000011;
  StringName *pSVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  ulong uVar41;
  undefined8 uVar42;
  char in_R8B;
  uint uVar43;
  uint uVar44;
  ulong uVar45;
  uint uVar46;
  undefined8 *puVar47;
  long in_FS_OFFSET;
  undefined8 *local_c0;
  long local_68;
  long local_60;
  int local_58 [6];
  long local_40;
  
  pSVar37 = (StringName *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (*(long *)(param_2 + 8) == 0) {
    uVar41 = (ulong)uVar30;
    uVar32 = uVar41 * 4;
    uVar45 = uVar41 * 8;
    uVar33 = Memory::alloc_static(uVar32,false);
    *(undefined8 *)(param_2 + 0x10) = uVar33;
    pvVar35 = (void *)Memory::alloc_static(uVar45,false);
    *(void **)(param_2 + 8) = pvVar35;
    if (uVar30 != 0) {
      pvVar5 = *(void **)(param_2 + 0x10);
      if ((pvVar5 < (void *)((long)pvVar35 + uVar45)) && (pvVar35 < (void *)((long)pvVar5 + uVar32))
         ) {
        uVar32 = 0;
        do {
          *(undefined4 *)((long)pvVar5 + uVar32 * 4) = 0;
          *(undefined8 *)((long)pvVar35 + uVar32 * 8) = 0;
          uVar32 = uVar32 + 1;
        } while (uVar41 != uVar32);
      }
      else {
        memset(pvVar5,0,uVar32);
        memset(pvVar35,0,uVar45);
      }
      goto LAB_00106c15;
    }
    iVar36 = *(int *)(param_2 + 0x2c);
    if (pvVar35 == (void *)0x0) goto LAB_00106d27;
    if (*(int *)(param_2 + 0x2c) != 0) goto LAB_00106c21;
LAB_00106d4d:
    uVar30 = *(uint *)(param_2 + 0x28);
    if (uVar30 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_c0 = (undefined8 *)0x0;
      goto LAB_0010712c;
    }
    uVar32 = (ulong)(uVar30 + 1);
    *(undefined4 *)(param_2 + 0x2c) = 0;
    uVar4 = *(uint *)(hash_table_size_primes + (ulong)uVar30 * 4);
    if (uVar30 + 1 < 2) {
      uVar32 = 2;
    }
    uVar30 = *(uint *)(hash_table_size_primes + uVar32 * 4);
    uVar41 = (ulong)uVar30;
    *(int *)(param_2 + 0x28) = (int)uVar32;
    pvVar35 = *(void **)(param_2 + 8);
    uVar32 = uVar41 * 4;
    uVar45 = uVar41 * 8;
    pvVar5 = *(void **)(param_2 + 0x10);
    uVar33 = Memory::alloc_static(uVar32,false);
    *(undefined8 *)(param_2 + 0x10) = uVar33;
    __s_00 = (void *)Memory::alloc_static(uVar45,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar30 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar45)) && (__s_00 < (void *)((long)__s + uVar32))) {
        uVar32 = 0;
        do {
          *(undefined4 *)((long)__s + uVar32 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar32 * 8) = 0;
          uVar32 = uVar32 + 1;
        } while (uVar32 != uVar41);
      }
      else {
        memset(__s,0,uVar32);
        memset(__s_00,0,uVar45);
      }
    }
    if (uVar4 != 0) {
      uVar32 = 0;
      do {
        uVar30 = *(uint *)((long)pvVar5 + uVar32 * 4);
        if (uVar30 != 0) {
          lVar34 = *(long *)(param_2 + 0x10);
          uVar43 = 0;
          uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
          uVar45 = CONCAT44(0,uVar31);
          lVar38 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (ulong)uVar30 * lVar38;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar45;
          lVar39 = SUB168(auVar10 * auVar22,8);
          puVar1 = (uint *)(lVar34 + lVar39 * 4);
          iVar36 = SUB164(auVar10 * auVar22,8);
          uVar44 = *puVar1;
          uVar33 = *(undefined8 *)((long)pvVar35 + uVar32 * 8);
          while (uVar44 != 0) {
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)uVar44 * lVar38;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar45;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)((iVar36 + uVar31) - SUB164(auVar11 * auVar23,8)) * lVar38;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar45;
            uVar46 = SUB164(auVar12 * auVar24,8);
            uVar42 = uVar33;
            if (uVar46 < uVar43) {
              *puVar1 = uVar30;
              puVar2 = (undefined8 *)((long)__s_00 + lVar39 * 8);
              uVar42 = *puVar2;
              *puVar2 = uVar33;
              uVar30 = uVar44;
              uVar43 = uVar46;
            }
            uVar43 = uVar43 + 1;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)(iVar36 + 1) * lVar38;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar45;
            lVar39 = SUB168(auVar13 * auVar25,8);
            puVar1 = (uint *)(lVar34 + lVar39 * 4);
            iVar36 = SUB164(auVar13 * auVar25,8);
            uVar33 = uVar42;
            uVar44 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar39 * 8) = uVar33;
          *puVar1 = uVar30;
          *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
        }
        uVar32 = uVar32 + 1;
      } while (uVar4 != uVar32);
      Memory::free_static(pvVar35,false);
      Memory::free_static(pvVar5,false);
    }
  }
  else {
LAB_00106c15:
    iVar36 = *(int *)(param_2 + 0x2c);
    if (iVar36 != 0) {
LAB_00106c21:
      uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
      uVar32 = CONCAT44(0,uVar4);
      lVar34 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      if (*(long *)pSVar37 == 0) {
        uVar31 = StringName::get_empty_hash();
      }
      else {
        uVar31 = *(uint *)(*(long *)pSVar37 + 0x20);
      }
      if (uVar31 == 0) {
        uVar31 = 1;
      }
      uVar46 = 0;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (ulong)uVar31 * lVar34;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar32;
      lVar38 = SUB168(auVar6 * auVar18,8);
      uVar44 = *(uint *)(*(long *)(param_2 + 0x10) + lVar38 * 4);
      uVar43 = SUB164(auVar6 * auVar18,8);
      if (uVar44 != 0) {
        do {
          if ((uVar31 == uVar44) &&
             (*(long *)(*(long *)(*(long *)(param_2 + 8) + lVar38 * 8) + 0x10) == *(long *)pSVar37))
          {
            lVar34 = *(long *)(*(long *)(param_2 + 8) + (ulong)uVar43 * 8);
            StringName::operator=((StringName *)(lVar34 + 0x18),in_RCX);
            Variant::operator=((Variant *)(lVar34 + 0x20),(Variant *)(in_RCX + 8));
            local_c0 = *(undefined8 **)(*(long *)(param_2 + 8) + (ulong)uVar43 * 8);
            goto LAB_0010712c;
          }
          uVar46 = uVar46 + 1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (ulong)(uVar43 + 1) * lVar34;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = uVar32;
          lVar38 = SUB168(auVar7 * auVar19,8);
          uVar44 = *(uint *)(*(long *)(param_2 + 0x10) + lVar38 * 4);
          uVar43 = SUB164(auVar7 * auVar19,8);
        } while ((uVar44 != 0) &&
                (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar44 * lVar34, auVar20._8_8_ = 0,
                auVar20._0_8_ = uVar32, auVar9._8_8_ = 0,
                auVar9._0_8_ = (ulong)((uVar4 + uVar43) - SUB164(auVar8 * auVar20,8)) * lVar34,
                auVar21._8_8_ = 0, auVar21._0_8_ = uVar32, uVar46 <= SUB164(auVar9 * auVar21,8)));
      }
      iVar36 = *(int *)(param_2 + 0x2c);
    }
LAB_00106d27:
    if ((float)uVar30 * __LC29 < (float)(iVar36 + 1)) goto LAB_00106d4d;
  }
  StringName::StringName((StringName *)&local_68,pSVar37);
  StringName::StringName((StringName *)&local_60,in_RCX);
  Variant::Variant((Variant *)local_58,(Variant *)(in_RCX + 8));
  local_c0 = (undefined8 *)operator_new(0x38,"");
  *local_c0 = 0;
  local_c0[1] = 0;
  StringName::StringName((StringName *)(local_c0 + 2),(StringName *)&local_68);
  StringName::StringName((StringName *)(local_c0 + 3),(StringName *)&local_60);
  Variant::Variant((Variant *)(local_c0 + 4),(Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') &&
     (((local_60 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_68 != 0)))
     ) {
    StringName::unref();
  }
  if (*(undefined8 **)(param_2 + 0x20) == (undefined8 *)0x0) {
    *(undefined8 **)(param_2 + 0x18) = local_c0;
    *(undefined8 **)(param_2 + 0x20) = local_c0;
LAB_00107047:
    lVar34 = *(long *)pSVar37;
    if (lVar34 != 0) goto LAB_00107053;
LAB_00107194:
    uVar30 = StringName::get_empty_hash();
  }
  else {
    if (in_R8B == '\0') {
      **(undefined8 **)(param_2 + 0x20) = local_c0;
      local_c0[1] = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 **)(param_2 + 0x20) = local_c0;
      goto LAB_00107047;
    }
    *(undefined8 **)(*(long *)(param_2 + 0x18) + 8) = local_c0;
    *local_c0 = *(undefined8 *)(param_2 + 0x18);
    lVar34 = *(long *)pSVar37;
    *(undefined8 **)(param_2 + 0x18) = local_c0;
    if (lVar34 == 0) goto LAB_00107194;
LAB_00107053:
    uVar30 = *(uint *)(lVar34 + 0x20);
  }
  lVar34 = *(long *)(param_2 + 0x10);
  if (uVar30 == 0) {
    uVar30 = 1;
  }
  uVar32 = (ulong)uVar30;
  uVar44 = 0;
  uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar45 = CONCAT44(0,uVar4);
  lVar38 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar32 * lVar38;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar45;
  lVar40 = SUB168(auVar14 * auVar26,8);
  lVar39 = *(long *)(param_2 + 8);
  puVar1 = (uint *)(lVar34 + lVar40 * 4);
  iVar36 = SUB164(auVar14 * auVar26,8);
  uVar31 = *puVar1;
  puVar2 = local_c0;
  while (uVar31 != 0) {
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)uVar31 * lVar38;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar45;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)((uVar4 + iVar36) - SUB164(auVar15 * auVar27,8)) * lVar38;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar45;
    uVar30 = SUB164(auVar16 * auVar28,8);
    puVar47 = puVar2;
    if (uVar30 < uVar44) {
      *puVar1 = (uint)uVar32;
      uVar32 = (ulong)uVar31;
      puVar3 = (undefined8 *)(lVar39 + lVar40 * 8);
      puVar47 = (undefined8 *)*puVar3;
      *puVar3 = puVar2;
      uVar44 = uVar30;
    }
    uVar30 = (uint)uVar32;
    uVar44 = uVar44 + 1;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)(iVar36 + 1) * lVar38;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar45;
    lVar40 = SUB168(auVar17 * auVar29,8);
    puVar1 = (uint *)(lVar34 + lVar40 * 4);
    iVar36 = SUB164(auVar17 * auVar29,8);
    puVar2 = puVar47;
    uVar31 = *puVar1;
  }
  *(undefined8 **)(lVar39 + lVar40 * 8) = puVar2;
  *puVar1 = uVar30;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_0010712c:
  *(undefined8 **)param_1 = local_c0;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* Variant Callable::call<double>(double) const */

void Callable::call<double>(double param_1)

{
  char cVar1;
  Variant **in_RSI;
  CallError *in_RDI;
  long in_FS_OFFSET;
  Variant *local_78 [2];
  int local_68 [6];
  int local_50 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_68,param_1);
  Variant::Variant((Variant *)local_50,0);
  *(undefined4 *)in_RDI = 0;
  *(undefined1 (*) [16])(in_RDI + 8) = (undefined1  [16])0x0;
  local_78[0] = (Variant *)local_68;
  Callable::callp(in_RSI,(int)local_78,(Variant *)0x1,in_RDI);
  if (Variant::needs_deinit[local_50[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_68[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_68[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Variant Callable::call<>() const */

void Callable::call<>(void)

{
  Variant **in_RSI;
  CallError *in_RDI;
  long in_FS_OFFSET;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_38,0);
  *(undefined4 *)in_RDI = 0;
  *(undefined1 (*) [16])(in_RDI + 8) = (undefined1  [16])0x0;
  Callable::callp(in_RSI,0,(Variant *)0x0,in_RDI);
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00107638) */
/* WARNING: Removing unreachable block (ram,0x00107768) */
/* WARNING: Removing unreachable block (ram,0x00107930) */
/* WARNING: Removing unreachable block (ram,0x00107774) */
/* WARNING: Removing unreachable block (ram,0x0010777e) */
/* WARNING: Removing unreachable block (ram,0x00107910) */
/* WARNING: Removing unreachable block (ram,0x0010778a) */
/* WARNING: Removing unreachable block (ram,0x00107794) */
/* WARNING: Removing unreachable block (ram,0x001078f0) */
/* WARNING: Removing unreachable block (ram,0x001077a0) */
/* WARNING: Removing unreachable block (ram,0x001077aa) */
/* WARNING: Removing unreachable block (ram,0x001078d0) */
/* WARNING: Removing unreachable block (ram,0x001077b6) */
/* WARNING: Removing unreachable block (ram,0x001077c0) */
/* WARNING: Removing unreachable block (ram,0x001078b0) */
/* WARNING: Removing unreachable block (ram,0x001077cc) */
/* WARNING: Removing unreachable block (ram,0x001077d6) */
/* WARNING: Removing unreachable block (ram,0x00107890) */
/* WARNING: Removing unreachable block (ram,0x001077e2) */
/* WARNING: Removing unreachable block (ram,0x001077ec) */
/* WARNING: Removing unreachable block (ram,0x00107870) */
/* WARNING: Removing unreachable block (ram,0x001077f4) */
/* WARNING: Removing unreachable block (ram,0x0010780a) */
/* WARNING: Removing unreachable block (ram,0x00107816) */
/* String vformat<NodePath>(String const&, NodePath const) */

undefined8 * vformat<NodePath>(undefined8 *param_1,bool *param_2,NodePath *param_3)

{
  char cVar1;
  Variant *this;
  int iVar2;
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
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
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



/* Callable
   create_custom_callable_function_pointer<AudioStreamPlayerInternal>(AudioStreamPlayerInternal*,
   char const*, void (AudioStreamPlayerInternal::*)()) */

AudioStreamPlayerInternal *
create_custom_callable_function_pointer<AudioStreamPlayerInternal>
          (AudioStreamPlayerInternal *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC15;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00108938;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable create_custom_callable_function_pointer<Object>(Object*, char const*, void
   (Object::*)()) */

Object * create_custom_callable_function_pointer<Object>
                   (Object *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC15;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_001089c8;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* CowData<Ref<AudioStreamPlayback> >::_unref() */

void __thiscall CowData<Ref<AudioStreamPlayback>>::_unref(CowData<Ref<AudioStreamPlayback>> *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  code *pcVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  
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
  plVar1 = *(long **)this;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = plVar1[-1];
  *(undefined8 *)this = 0;
  if (lVar2 != 0) {
    lVar7 = 0;
    plVar6 = plVar1;
LAB_00107b3d:
    do {
      if (*plVar6 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pOVar3 = (Object *)*plVar6;
          cVar5 = predelete_handler(pOVar3);
          if (cVar5 != '\0') {
            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 1;
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
            if (lVar2 == lVar7) break;
            goto LAB_00107b3d;
          }
        }
      }
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar2 != lVar7);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
}



/* AudioStreamPlayerInternal::~AudioStreamPlayerInternal() */

void __thiscall
AudioStreamPlayerInternal::~AudioStreamPlayerInternal(AudioStreamPlayerInternal *this)

{
  uint uVar1;
  Object *pOVar2;
  char cVar3;
  long lVar4;
  void *pvVar5;
  bool bVar6;
  
  bVar6 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_00108678;
  if ((bVar6) && (*(long *)(this + 0x200) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 0x1e8) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      pOVar2 = *(Object **)(this + 0x1e8);
      cVar3 = predelete_handler(pOVar2);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  CowData<Ref<AudioStreamPlayback>>::_unref((CowData<Ref<AudioStreamPlayback>> *)(this + 0x1e0));
  pvVar5 = *(void **)(this + 0x1b0);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x1d4) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1d0) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x1d4) = 0;
        *(undefined1 (*) [16])(this + 0x1c0) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x1b8) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0x1b8) + lVar4) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar5 + 0x20)] != '\0') {
              Variant::_clear_internal();
            }
            if (StringName::configured != '\0') {
              if (*(long *)((long)pvVar5 + 0x18) != 0) {
                StringName::unref();
                if (StringName::configured == '\0') goto LAB_00107cd4;
              }
              if (*(long *)((long)pvVar5 + 0x10) != 0) {
                StringName::unref();
              }
            }
LAB_00107cd4:
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x1b0);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x1d4) = 0;
        *(undefined1 (*) [16])(this + 0x1c0) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_00107d14;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x1b8),false);
  }
LAB_00107d14:
  Callable::~Callable((Callable *)(this + 400));
  Callable::~Callable((Callable *)(this + 0x180));
  Object::~Object((Object *)this);
  return;
}



/* AudioStreamPlayerInternal::~AudioStreamPlayerInternal() */

void __thiscall
AudioStreamPlayerInternal::~AudioStreamPlayerInternal(AudioStreamPlayerInternal *this)

{
  ~AudioStreamPlayerInternal(this);
  operator_delete(this,0x210);
  return;
}



/* CowData<Ref<AudioStreamPlayback> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Ref<AudioStreamPlayback>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Ref<AudioStreamPlayback> >::_realloc(long) */

undefined8 __thiscall
CowData<Ref<AudioStreamPlayback>>::_realloc(CowData<Ref<AudioStreamPlayback>> *this,long param_1)

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
/* Error CowData<Ref<AudioStreamPlayback> >::resize<false>(long) */

undefined8 __thiscall
CowData<Ref<AudioStreamPlayback>>::resize<false>
          (CowData<Ref<AudioStreamPlayback>> *this,long param_1)

{
  long *plVar1;
  Object *pOVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  
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
    lVar7 = 0;
    lVar8 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar7) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar8 = lVar7 * 8;
    if (lVar8 != 0) {
      uVar9 = lVar8 - 1U | lVar8 - 1U >> 1;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = uVar9 | uVar9 >> 0x10;
      lVar8 = (uVar9 | uVar9 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_001081e0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar9 = param_1 * 8 - 1;
  uVar9 = uVar9 >> 1 | uVar9;
  uVar9 = uVar9 | uVar9 >> 2;
  uVar9 = uVar9 | uVar9 >> 4;
  uVar9 = uVar9 | uVar9 >> 8;
  uVar9 = uVar9 | uVar9 >> 0x10;
  uVar9 = uVar9 | uVar9 >> 0x20;
  lVar11 = uVar9 + 1;
  if (lVar11 == 0) goto LAB_001081e0;
  if (param_1 <= lVar7) {
    lVar7 = *(long *)this;
    uVar9 = param_1;
    while (lVar7 != 0) {
      if (*(ulong *)(lVar7 + -8) <= uVar9) {
LAB_0010808a:
        if (lVar11 != lVar8) {
          uVar5 = _realloc(this,lVar11);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          lVar7 = *(long *)this;
          if (lVar7 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar7 + -8) = param_1;
        return 0;
      }
      while (plVar1 = (long *)(lVar7 + uVar9 * 8), *plVar1 == 0) {
        uVar9 = uVar9 + 1;
        if (*(ulong *)(lVar7 + -8) <= uVar9) goto LAB_0010808a;
      }
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        pOVar2 = (Object *)*plVar1;
        cVar4 = predelete_handler(pOVar2);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
      uVar9 = uVar9 + 1;
      lVar7 = *(long *)this;
    }
    goto LAB_00108050;
  }
  if (lVar11 == lVar8) {
LAB_0010815b:
    puVar10 = *(undefined8 **)this;
    if (puVar10 == (undefined8 *)0x0) {
LAB_00108050:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar7 = puVar10[-1];
    if (param_1 <= lVar7) goto LAB_0010813b;
  }
  else {
    if (lVar7 != 0) {
      uVar5 = _realloc(this,lVar11);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_0010815b;
    }
    puVar6 = (undefined8 *)Memory::alloc_static(uVar9 + 0x11,false);
    if (puVar6 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar10 = puVar6 + 2;
    *puVar6 = 1;
    puVar6[1] = 0;
    *(undefined8 **)this = puVar10;
    lVar7 = 0;
  }
  memset(puVar10 + lVar7,0,(param_1 - lVar7) * 8);
LAB_0010813b:
  puVar10[-1] = param_1;
  return 0;
}



/* AudioStreamPlayerInternal::_set_process(bool) */

void AudioStreamPlayerInternal::_GLOBAL__sub_I__set_process(void)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (PARAM_PREFIX == '\0') {
    PARAM_PREFIX = 0;
    PARAM_PREFIX = '\x01';
    String::parse_latin1((StrRange *)&PARAM_PREFIX);
    __cxa_atexit(String::~String,&PARAM_PREFIX,&__dso_handle);
  }
  if (AudioStreamRandomizer::base_property_helper == '\0') {
    AudioStreamRandomizer::base_property_helper = '\x01';
    AudioStreamRandomizer::base_property_helper._56_8_ = 2;
    AudioStreamRandomizer::base_property_helper._64_8_ = 0;
    AudioStreamRandomizer::base_property_helper._0_16_ = (undefined1  [16])0x0;
    AudioStreamRandomizer::base_property_helper._24_16_ = (undefined1  [16])0x0;
    AudioStreamRandomizer::base_property_helper._40_16_ = (undefined1  [16])0x0;
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      __cxa_atexit(PropertyListHelper::~PropertyListHelper,
                   AudioStreamRandomizer::base_property_helper,&__dso_handle);
      return;
    }
  }
  else if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AudioStreamPlayerInternal::~AudioStreamPlayerInternal() */

void __thiscall
AudioStreamPlayerInternal::~AudioStreamPlayerInternal(AudioStreamPlayerInternal *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<AudioStream::Parameter, DefaultAllocator>::~List() */

void __thiscall
List<AudioStream::Parameter,DefaultAllocator>::~List
          (List<AudioStream::Parameter,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* String::~String() */

void __thiscall String::~String(String *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AudioSamplePlayback::~AudioSamplePlayback() */

void __thiscall AudioSamplePlayback::~AudioSamplePlayback(AudioSamplePlayback *this)

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
/* CallableCustomMethodPointer<AudioStreamPlayerInternal, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AudioStreamPlayerInternal,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AudioStreamPlayerInternal,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Object, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Object,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Object,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


