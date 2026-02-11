
/* Engine::get_physics_ticks_per_second() const */

undefined4 __thiscall Engine::get_physics_ticks_per_second(Engine *this)

{
  return *(undefined4 *)(this + 0x28);
}



/* Engine::get_max_physics_steps_per_frame() const */

undefined4 __thiscall Engine::get_max_physics_steps_per_frame(Engine *this)

{
  return *(undefined4 *)(this + 0x58);
}



/* Engine::get_max_fps() const */

undefined4 __thiscall Engine::get_max_fps(Engine *this)

{
  return *(undefined4 *)(this + 0x40);
}



/* Engine::set_audio_output_latency(int) */

void __thiscall Engine::set_audio_output_latency(Engine *this,int param_1)

{
  if (param_1 < 1) {
    param_1 = 1;
  }
  *(int *)(this + 0x44) = param_1;
  return;
}



/* Engine::get_audio_output_latency() const */

undefined4 __thiscall Engine::get_audio_output_latency(Engine *this)

{
  return *(undefined4 *)(this + 0x44);
}



/* Engine::set_max_fps(int) */

void __thiscall Engine::set_max_fps(Engine *this,int param_1)

{
  long lVar1;
  
  if (param_1 < 0) {
    param_1 = 0;
  }
  *(int *)(this + 0x40) = param_1;
  lVar1 = RenderingDevice::get_singleton();
  if (lVar1 != 0) {
    RenderingDevice::_set_max_fps((int)lVar1);
    return;
  }
  return;
}



/* Engine::set_physics_ticks_per_second(int) */

void __thiscall Engine::set_physics_ticks_per_second(Engine *this,int param_1)

{
  if (0 < param_1) {
    *(int *)(this + 0x28) = param_1;
    return;
  }
  _err_print_error("set_physics_ticks_per_second","core/config/engine.cpp",0x2a,
                   "Condition \"p_ips <= 0\" is true.",
                   "Engine iterations per second must be greater than 0.",0,0);
  return;
}



/* Engine::set_max_physics_steps_per_frame(int) */

void __thiscall Engine::set_max_physics_steps_per_frame(Engine *this,int param_1)

{
  if (0 < param_1) {
    *(int *)(this + 0x58) = param_1;
    return;
  }
  _err_print_error("set_max_physics_steps_per_frame","core/config/engine.cpp",0x33,
                   "Condition \"p_max_physics_steps <= 0\" is true.",
                   "Maximum number of physics steps per frame must be greater than 0.",0,0);
  return;
}



/* array_from_info_count(char const* const*, int) */

char ** array_from_info_count(char **param_1,int param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  int in_EDX;
  undefined8 *puVar4;
  undefined4 in_register_00000034;
  long in_FS_OFFSET;
  long local_60;
  int local_58 [6];
  long local_40;
  
  puVar4 = (undefined8 *)CONCAT44(in_register_00000034,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Array::Array((Array *)param_1);
  if (0 < in_EDX) {
    puVar2 = puVar4 + in_EDX;
    do {
      String::utf8((char *)&local_60,(int)*puVar4);
      Variant::Variant((Variant *)local_58,(String *)&local_60);
      Array::push_back((Variant *)param_1);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
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
      puVar4 = puVar4 + 1;
    } while (puVar4 != puVar2);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* array_from_info(char const* const*) */

char ** array_from_info(char **param_1)

{
  long *plVar1;
  long *plVar2;
  long *in_RSI;
  long lVar3;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Array::Array((Array *)param_1);
  lVar3 = *in_RSI;
  if (lVar3 != 0) {
    plVar2 = in_RSI + 1;
    do {
      String::utf8((char *)&local_50,(int)lVar3);
      Variant::Variant((Variant *)local_48,(String *)&local_50);
      Array::push_back((Variant *)param_1);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
      lVar3 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar1 = (long *)(local_50 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      lVar3 = *plVar2;
      plVar2 = plVar2 + 1;
    } while (lVar3 != 0);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
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



/* Engine::~Engine() */

void __thiscall Engine::~Engine(Engine *this)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  long *plVar6;
  bool bVar7;
  
  bVar7 = singleton == this;
  *(undefined ***)this = &PTR_set_physics_ticks_per_second_0011d060;
  if (bVar7) {
    singleton = (Engine *)0x0;
  }
  if (*(long *)(this + 0xd0) != 0) {
    LOCK();
    plVar6 = (long *)(*(long *)(this + 0xd0) + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      lVar4 = *(long *)(this + 0xd0);
      *(undefined8 *)(this + 0xd0) = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if (*(long *)(this + 200) != 0) {
    LOCK();
    plVar6 = (long *)(*(long *)(this + 200) + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      lVar4 = *(long *)(this + 200);
      *(undefined8 *)(this + 200) = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  pvVar5 = *(void **)(this + 0x98);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0xbc) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xb8) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0xbc) = 0;
        *(undefined1 (*) [16])(this + 0xa8) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xa0) + lVar4) != 0) {
            bVar7 = StringName::configured != '\0';
            *(int *)(*(long *)(this + 0xa0) + lVar4) = 0;
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            if ((bVar7) && (*(long *)((long)pvVar5 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x98);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0xbc) = 0;
        *(undefined1 (*) [16])(this + 0xa8) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_00100491;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0xa0),false);
  }
LAB_00100491:
  plVar6 = *(long **)(this + 0x88);
  if (plVar6 == (long *)0x0) {
    return;
  }
  do {
    plVar2 = (long *)*plVar6;
    if (plVar2 == (long *)0x0) {
      if ((int)plVar6[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (plVar6 == (long *)plVar2[6]) {
      lVar4 = plVar2[4];
      lVar3 = plVar2[5];
      *plVar6 = lVar4;
      if (plVar2 == (long *)plVar6[1]) {
        plVar6[1] = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x20) = lVar4;
        lVar4 = plVar2[4];
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x28) = lVar3;
      }
      if (StringName::configured != '\0') {
        if (plVar2[2] != 0) {
          StringName::unref();
          if (StringName::configured == '\0') goto LAB_00100515;
        }
        if (*plVar2 != 0) {
          StringName::unref();
        }
      }
LAB_00100515:
      Memory::free_static(plVar2,false);
      *(int *)(plVar6 + 2) = (int)plVar6[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar6 = *(long **)(this + 0x88);
  } while ((int)plVar6[2] != 0);
  Memory::free_static(plVar6,false);
  return;
}



/* Engine::~Engine() */

void __thiscall Engine::~Engine(Engine *this)

{
  ~Engine(this);
  operator_delete(this,0xe0);
  return;
}



/* Engine::set_physics_jitter_fix(double) */

void __thiscall Engine::set_physics_jitter_fix(Engine *this,double param_1)

{
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  *(double *)(this + 0x30) = param_1;
  return;
}



/* Engine::get_physics_jitter_fix() const */

undefined8 __thiscall Engine::get_physics_jitter_fix(Engine *this)

{
  return *(undefined8 *)(this + 0x30);
}



/* Engine::increment_frames_drawn() */

void __thiscall Engine::increment_frames_drawn(Engine *this)

{
  int iVar1;
  
  iVar1 = 0;
  if (this[0xdc] != (Engine)0x0) {
    iVar1 = *(int *)(this + 0xd8) + 1;
  }
  *(long *)(this + 8) = *(long *)(this + 8) + 1;
  *(int *)(this + 0xd8) = iVar1;
  this[0xdc] = (Engine)0x0;
  return;
}



/* Engine::get_frames_drawn() */

undefined8 __thiscall Engine::get_frames_drawn(Engine *this)

{
  return *(undefined8 *)(this + 8);
}



/* Engine::set_frame_delay(unsigned int) */

void __thiscall Engine::set_frame_delay(Engine *this,uint param_1)

{
  *(uint *)(this + 0x10) = param_1;
  return;
}



/* Engine::get_frame_delay() const */

undefined4 __thiscall Engine::get_frame_delay(Engine *this)

{
  return *(undefined4 *)(this + 0x10);
}



/* Engine::set_time_scale(double) */

void __thiscall Engine::set_time_scale(Engine *this,double param_1)

{
  *(double *)(this + 0x48) = param_1;
  return;
}



/* Engine::get_time_scale() const */

undefined8 __thiscall Engine::get_time_scale(Engine *this)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (this[0xdd] == (Engine)0x0) {
    uVar1 = *(undefined8 *)(this + 0x48);
  }
  return uVar1;
}



/* Engine::get_unfrozen_time_scale() const */

undefined8 __thiscall Engine::get_unfrozen_time_scale(Engine *this)

{
  return *(undefined8 *)(this + 0x48);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Engine::get_version_info() const */

Engine * __thiscall Engine::get_version_info(Engine *this)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  char *pcVar4;
  int iVar5;
  Variant *pVVar6;
  long lVar7;
  long in_FS_OFFSET;
  bool bVar8;
  String *local_100;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  char *local_88;
  size_t local_80;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary((Dictionary *)this);
  Variant::Variant((Variant *)local_58,4);
  Variant::Variant((Variant *)local_78,"major");
  pVVar6 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar6 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar6] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar6 = 0;
    *(int *)pVVar6 = local_58[0];
    *(undefined8 *)(pVVar6 + 8) = local_50;
    *(undefined8 *)(pVVar6 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar2 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,4);
  Variant::Variant((Variant *)local_78,"minor");
  pVVar6 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar6 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar6] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar6 = 0;
    *(int *)pVVar6 = local_58[0];
    *(undefined8 *)(pVVar6 + 8) = local_50;
    *(undefined8 *)(pVVar6 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar2 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,1);
  Variant::Variant((Variant *)local_78,"patch");
  pVVar6 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar6 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar6] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar6 = 0;
    *(int *)pVVar6 = local_58[0];
    *(undefined8 *)(pVVar6 + 8) = local_50;
    *(undefined8 *)(pVVar6 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar2 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,0x40401);
  Variant::Variant((Variant *)local_78,"hex");
  pVVar6 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar6 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar6] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar6 = 0;
    *(int *)pVVar6 = local_58[0];
    *(undefined8 *)(pVVar6 + 8) = local_50;
    *(undefined8 *)(pVVar6 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar2 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,"stable");
  Variant::Variant((Variant *)local_78,"status");
  pVVar6 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar6 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar6] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar6 = 0;
    *(int *)pVVar6 = local_58[0];
    *(undefined8 *)(pVVar6 + 8) = local_50;
    *(undefined8 *)(pVVar6 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,"custom_build");
  Variant::Variant((Variant *)local_78,"build");
  pVVar6 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar6 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar6] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar6 = 0;
    *(int *)pVVar6 = local_58[0];
    *(undefined8 *)(pVVar6 + 8) = local_50;
    *(undefined8 *)(pVVar6 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  pcVar4 = _VERSION_HASH;
  local_80 = 0;
  local_d0 = 0;
  if (_VERSION_HASH != (char *)0x0) {
    local_80 = strlen(_VERSION_HASH);
  }
  local_88 = pcVar4;
  String::parse_latin1((StrRange *)&local_d0);
  if ((local_d0 == 0) || (*(uint *)(local_d0 + -8) < 2)) {
    local_90 = 0;
    local_88 = "unknown";
    local_80 = 7;
    String::parse_latin1((StrRange *)&local_90);
  }
  else {
    local_90 = 0;
    plVar1 = (long *)(local_d0 + -0x10);
    do {
      lVar3 = *plVar1;
      if (lVar3 == 0) goto LAB_00100b8b;
      LOCK();
      lVar7 = *plVar1;
      bVar8 = lVar3 == lVar7;
      if (bVar8) {
        *plVar1 = lVar3 + 1;
        lVar7 = lVar3;
      }
      UNLOCK();
    } while (!bVar8);
    if (lVar7 != -1) {
      local_90 = local_d0;
    }
  }
LAB_00100b8b:
  local_100 = (String *)&local_90;
  Variant::Variant((Variant *)local_58,local_100);
  Variant::Variant((Variant *)local_78,"hash");
  pVVar6 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar6 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar6] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar6 = 0;
    *(int *)pVVar6 = local_58[0];
    *(undefined8 *)(pVVar6 + 8) = local_50;
    *(undefined8 *)(pVVar6 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar2 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  lVar3 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  Variant::Variant((Variant *)local_58,_VERSION_TIMESTAMP);
  Variant::Variant((Variant *)local_78,"timestamp");
  pVVar6 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar6 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar6] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar6 = 0;
    *(int *)pVVar6 = local_58[0];
    *(undefined8 *)(pVVar6 + 8) = local_50;
    *(undefined8 *)(pVVar6 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar2 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,"minor");
  Dictionary::operator[]((Variant *)this);
  Variant::operator_cast_to_String((Variant *)local_100);
  local_98 = 0;
  local_88 = ".";
  local_80 = 1;
  String::parse_latin1((StrRange *)&local_98);
  Variant::Variant((Variant *)local_78,"major");
  Dictionary::operator[]((Variant *)this);
  Variant::operator_cast_to_String((Variant *)&local_a0);
  String::operator+((String *)&local_88,(String *)&local_a0);
  String::operator+((String *)&local_c8,(String *)&local_88);
  pcVar4 = local_88;
  if (local_88 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_88 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_88 = (undefined *)0x0;
      Memory::free_static(pcVar4 + -0x10,false);
    }
  }
  lVar3 = local_a0;
  if (local_a0 == 0) {
LAB_00100d8a:
    cVar2 = Variant::needs_deinit[local_78[0]];
  }
  else {
    LOCK();
    plVar1 = (long *)(local_a0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_00100d8a;
    local_a0 = 0;
    Memory::free_static((void *)(lVar3 + -0x10),false);
    cVar2 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  lVar3 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_90;
  if (local_90 == 0) {
LAB_00100dc8:
    cVar2 = Variant::needs_deinit[local_58[0]];
  }
  else {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_00100dc8;
    local_90 = 0;
    Memory::free_static((void *)(lVar3 + -0x10),false);
    cVar2 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,"patch");
  pVVar6 = (Variant *)Dictionary::operator[]((Variant *)this);
  iVar5 = Variant::operator_cast_to_int(pVVar6);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (iVar5 != 0) {
    Variant::Variant((Variant *)local_58,"patch");
    Dictionary::operator[]((Variant *)this);
    Variant::operator_cast_to_String((Variant *)local_100);
    operator+((char *)&local_88,(String *)&_LC24);
    String::operator+=((String *)&local_c8,(String *)&local_88);
    pcVar4 = local_88;
    if (local_88 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_88 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_88 = (undefined *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
    lVar3 = local_90;
    if (local_90 == 0) {
LAB_001013df:
      cVar2 = Variant::needs_deinit[local_58[0]];
    }
    else {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_001013df;
      local_90 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      cVar2 = Variant::needs_deinit[local_58[0]];
    }
    if (cVar2 != '\0') {
      Variant::_clear_internal();
    }
  }
  local_90 = 0;
  local_88 = ")";
  local_80 = 1;
  String::parse_latin1((StrRange *)local_100);
  Variant::Variant((Variant *)local_58,"build");
  Dictionary::operator[]((Variant *)this);
  Variant::operator_cast_to_String((Variant *)&local_a0);
  local_88 = " (";
  local_b0 = 0;
  local_80 = 2;
  String::parse_latin1((StrRange *)&local_b0);
  Variant::Variant((Variant *)local_78,"status");
  Dictionary::operator[]((Variant *)this);
  Variant::operator_cast_to_String((Variant *)&local_c0);
  operator+((char *)&local_b8,(String *)&_LC27);
  String::operator+((String *)&local_a8,(String *)&local_b8);
  String::operator+((String *)&local_98,(String *)&local_a8);
  String::operator+((String *)&local_88,(String *)&local_98);
  String::operator+=((String *)&local_c8,(String *)&local_88);
  pcVar4 = local_88;
  if (local_88 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_88 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_88 = (undefined *)0x0;
      Memory::free_static(pcVar4 + -0x10,false);
    }
  }
  lVar3 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_a8;
  if (local_a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a8 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_b8;
  if (local_b8 != 0) {
    LOCK();
    plVar1 = (long *)(local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_c0;
  if (local_c0 == 0) {
LAB_00100fb1:
    cVar2 = Variant::needs_deinit[local_78[0]];
  }
  else {
    LOCK();
    plVar1 = (long *)(local_c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_00100fb1;
    local_c0 = 0;
    Memory::free_static((void *)(lVar3 + -0x10),false);
    cVar2 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  lVar3 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    plVar1 = (long *)(local_b0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar1 = (long *)(local_a0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      cVar2 = Variant::needs_deinit[local_58[0]];
      goto joined_r0x00100ffb;
    }
  }
  cVar2 = Variant::needs_deinit[local_58[0]];
joined_r0x00100ffb:
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  lVar3 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  Variant::Variant((Variant *)local_58,(String *)&local_c8);
  Variant::Variant((Variant *)local_78,"string");
  pVVar6 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar6 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar6] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar6 = 0;
    *(int *)pVVar6 = local_58[0];
    *(undefined8 *)(pVVar6 + 8) = local_50;
    *(undefined8 *)(pVVar6 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar2 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  lVar3 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    plVar1 = (long *)(local_c8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_d0;
  if (local_d0 != 0) {
    LOCK();
    plVar1 = (long *)(local_d0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* Engine::get_author_info() const */

Engine * __thiscall Engine::get_author_info(Engine *this)

{
  char cVar1;
  Variant *pVVar2;
  long in_FS_OFFSET;
  Array local_80 [8];
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary((Dictionary *)this);
  array_from_info((char **)local_80);
  Variant::Variant((Variant *)local_58,local_80);
  Variant::Variant((Variant *)local_78,"lead_developers");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
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
  array_from_info((char **)local_80);
  Variant::Variant((Variant *)local_58,local_80);
  Variant::Variant((Variant *)local_78,"project_managers");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
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
  array_from_info((char **)local_80);
  Variant::Variant((Variant *)local_58,local_80);
  Variant::Variant((Variant *)local_78,"founders");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
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
  array_from_info((char **)local_80);
  Variant::Variant((Variant *)local_58,local_80);
  Variant::Variant((Variant *)local_78,"developers");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
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
  return this;
}



/* Engine::get_copyright_info() const */

Engine * __thiscall Engine::get_copyright_info(Engine *this)

{
  long *plVar1;
  long lVar2;
  Variant *pVVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  undefined **local_b8;
  Dictionary local_98 [8];
  Array local_90 [8];
  Dictionary local_88 [8];
  long local_80;
  int local_78 [8];
  ulong local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Array::Array((Array *)this);
  local_58 = 0;
  local_80 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::set_typed((uint)this,(StringName *)0x1b,(Variant *)&local_80);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  local_b8 = &COPYRIGHT_INFO;
  do {
    Dictionary::Dictionary(local_98);
    String::utf8((char *)&local_80,(int)*local_b8);
    Variant::Variant((Variant *)&local_58,(String *)&local_80);
    Variant::Variant((Variant *)local_78,"name");
    pVVar3 = (Variant *)Dictionary::operator[]((Variant *)local_98);
    if (pVVar3 != (Variant *)&local_58) {
      if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar3 = 0;
      *(int *)pVVar3 = (int)local_58;
      *(undefined8 *)(pVVar3 + 8) = local_50._0_8_;
      *(undefined8 *)(pVVar3 + 0x10) = local_50._8_8_;
      local_58 = local_58 & 0xffffffff00000000;
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
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
    Array::Array(local_90);
    if (0 < *(int *)(local_b8 + 2)) {
      puVar5 = (undefined8 *)local_b8[1];
      puVar4 = puVar5 + (long)*(int *)(local_b8 + 2) * 4;
      do {
        Dictionary::Dictionary(local_88);
        array_from_info_count((char **)&local_80,(int)puVar5[1]);
        Variant::Variant((Variant *)&local_58,(Array *)&local_80);
        Variant::Variant((Variant *)local_78,"files");
        pVVar3 = (Variant *)Dictionary::operator[]((Variant *)local_88);
        if (pVVar3 != (Variant *)&local_58) {
          if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar3 = 0;
          *(int *)pVVar3 = (int)local_58;
          *(undefined8 *)(pVVar3 + 8) = local_50._0_8_;
          *(undefined8 *)(pVVar3 + 0x10) = local_50._8_8_;
          local_58 = local_58 & 0xffffffff00000000;
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        Array::~Array((Array *)&local_80);
        array_from_info_count((char **)&local_80,(int)puVar5[2]);
        Variant::Variant((Variant *)&local_58,(Array *)&local_80);
        Variant::Variant((Variant *)local_78,"copyright");
        pVVar3 = (Variant *)Dictionary::operator[]((Variant *)local_88);
        if (pVVar3 != (Variant *)&local_58) {
          if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar3 = 0;
          *(int *)pVVar3 = (int)local_58;
          *(undefined8 *)(pVVar3 + 8) = local_50._0_8_;
          *(undefined8 *)(pVVar3 + 0x10) = local_50._8_8_;
          local_58 = local_58 & 0xffffffff00000000;
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        Array::~Array((Array *)&local_80);
        String::utf8((char *)&local_80,(int)*puVar5);
        Variant::Variant((Variant *)&local_58,(String *)&local_80);
        Variant::Variant((Variant *)local_78,"license");
        pVVar3 = (Variant *)Dictionary::operator[]((Variant *)local_88);
        if (pVVar3 != (Variant *)&local_58) {
          if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar3 = 0;
          *(int *)pVVar3 = (int)local_58;
          *(undefined8 *)(pVVar3 + 8) = local_50._0_8_;
          *(undefined8 *)(pVVar3 + 0x10) = local_50._8_8_;
          local_58 = local_58 & 0xffffffff00000000;
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
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
        Variant::Variant((Variant *)&local_58,local_88);
        Array::push_back((Variant *)local_90);
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        puVar5 = puVar5 + 4;
        Dictionary::~Dictionary(local_88);
      } while (puVar4 != puVar5);
    }
    Variant::Variant((Variant *)&local_58,local_90);
    Variant::Variant((Variant *)local_78,"parts");
    pVVar3 = (Variant *)Dictionary::operator[]((Variant *)local_98);
    if (pVVar3 != (Variant *)&local_58) {
      if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar3 = 0;
      *(int *)pVVar3 = (int)local_58;
      *(undefined8 *)(pVVar3 + 8) = local_50._0_8_;
      *(undefined8 *)(pVVar3 + 0x10) = local_50._8_8_;
      local_58 = local_58 & 0xffffffff00000000;
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)&local_58,local_98);
    Array::push_back((Variant *)this);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    Array::~Array(local_90);
    Dictionary::~Dictionary(local_98);
    local_b8 = local_b8 + 3;
  } while (local_b8 != &COPYRIGHT_PROJECT_PARTS);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Engine::get_donor_info() const */

Engine * __thiscall Engine::get_donor_info(Engine *this)

{
  char cVar1;
  Variant *pVVar2;
  long in_FS_OFFSET;
  Array local_80 [8];
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary((Dictionary *)this);
  array_from_info((char **)local_80);
  Variant::Variant((Variant *)local_58,local_80);
  Variant::Variant((Variant *)local_78,"patrons");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
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
  array_from_info((char **)local_80);
  Variant::Variant((Variant *)local_58,local_80);
  Variant::Variant((Variant *)local_78,"platinum_sponsors");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
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
  array_from_info((char **)local_80);
  Variant::Variant((Variant *)local_58,local_80);
  Variant::Variant((Variant *)local_78,"gold_sponsors");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
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
  array_from_info((char **)local_80);
  Variant::Variant((Variant *)local_58,local_80);
  Variant::Variant((Variant *)local_78,"silver_sponsors");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
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
  array_from_info((char **)local_80);
  Variant::Variant((Variant *)local_58,local_80);
  Variant::Variant((Variant *)local_78,"diamond_members");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
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
  array_from_info((char **)local_80);
  Variant::Variant((Variant *)local_58,local_80);
  Variant::Variant((Variant *)local_78,"titanium_members");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
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
  array_from_info((char **)local_80);
  Variant::Variant((Variant *)local_58,local_80);
  Variant::Variant((Variant *)local_78,"platinum_members");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
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
  array_from_info((char **)local_80);
  Variant::Variant((Variant *)local_58,local_80);
  Variant::Variant((Variant *)local_78,"gold_members");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
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
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Engine::get_license_info() const */

Engine * __thiscall Engine::get_license_info(Engine *this)

{
  char cVar1;
  Variant *pVVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long in_FS_OFFSET;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  ppuVar4 = &LICENSE_BODIES;
  ppuVar3 = &LICENSE_NAMES;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary((Dictionary *)this);
  do {
    Variant::Variant((Variant *)local_58,*ppuVar4);
    Variant::Variant((Variant *)local_78,*ppuVar3);
    pVVar2 = (Variant *)Dictionary::operator[]((Variant *)this);
    if (pVVar2 != (Variant *)local_58) {
      if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar2 = 0;
      *(int *)pVVar2 = local_58[0];
      local_58[0] = 0;
      *(undefined8 *)(pVVar2 + 8) = local_50;
      *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
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
    ppuVar4 = ppuVar4 + 1;
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar4 != (undefined **)&DAT_0011d138);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* Engine::get_license_text() const */

Engine * __thiscall Engine::get_license_text(Engine *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Engine::get_architecture_name() const */

Engine * __thiscall Engine::get_architecture_name(Engine *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Engine::is_abort_on_gpu_errors_enabled() const */

Engine __thiscall Engine::is_abort_on_gpu_errors_enabled(Engine *this)

{
  return this[0x68];
}



/* Engine::get_gpu_index() const */

undefined4 __thiscall Engine::get_gpu_index(Engine *this)

{
  return *(undefined4 *)(this + 0x70);
}



/* Engine::is_validation_layers_enabled() const */

Engine __thiscall Engine::is_validation_layers_enabled(Engine *this)

{
  return this[0x69];
}



/* Engine::is_generate_spirv_debug_info_enabled() const */

Engine __thiscall Engine::is_generate_spirv_debug_info_enabled(Engine *this)

{
  return this[0x6a];
}



/* Engine::is_extra_gpu_memory_tracking_enabled() const */

Engine __thiscall Engine::is_extra_gpu_memory_tracking_enabled(Engine *this)

{
  return this[0x6b];
}



/* Engine::is_accurate_breadcrumbs_enabled() const */

Engine __thiscall Engine::is_accurate_breadcrumbs_enabled(Engine *this)

{
  return this[0x6c];
}



/* Engine::set_print_to_stdout(bool) */

void __thiscall Engine::set_print_to_stdout(Engine *this,bool param_1)

{
  CoreGlobals::print_line_enabled._0_1_ = param_1;
  return;
}



/* Engine::is_printing_to_stdout() const */

undefined1 Engine::is_printing_to_stdout(void)

{
  return (undefined1)CoreGlobals::print_line_enabled;
}



/* Engine::set_print_error_messages(bool) */

void __thiscall Engine::set_print_error_messages(Engine *this,bool param_1)

{
  CoreGlobals::print_error_enabled._0_1_ = param_1;
  return;
}



/* Engine::is_printing_error_messages() const */

undefined1 Engine::is_printing_error_messages(void)

{
  return (undefined1)CoreGlobals::print_error_enabled;
}



/* Engine::print_header(String const&) const */

void __thiscall Engine::print_header(Engine *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0xc5] != (Engine)0x0) {
    Variant::Variant((Variant *)local_38,param_1);
    stringify_variants((Variant *)&local_40);
    __print_line((String *)&local_40);
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
    if (Variant::needs_deinit[local_38[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Engine::print_header_rich(String const&) const */

void __thiscall Engine::print_header_rich(Engine *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0xc5] != (Engine)0x0) {
    Variant::Variant((Variant *)local_38,param_1);
    stringify_variants((Variant *)&local_40);
    __print_line_rich((String *)&local_40);
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
    if (Variant::needs_deinit[local_38[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Engine::is_singleton_user_created(StringName const&) const */

char __thiscall Engine::is_singleton_user_created(Engine *this,StringName *param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
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
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  
  if ((*(long *)(this + 0x98) != 0) && (*(int *)(this + 0xbc) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xb8) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xb8) * 8);
    if (*(long *)param_1 == 0) {
      uVar12 = StringName::get_empty_hash();
    }
    else {
      uVar12 = *(uint *)(*(long *)param_1 + 0x20);
    }
    uVar16 = CONCAT44(0,uVar1);
    if (uVar12 == 0) {
      uVar12 = 1;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (ulong)uVar12 * lVar2;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar16;
    lVar14 = SUB168(auVar4 * auVar8,8);
    uVar15 = *(uint *)(*(long *)(this + 0xa0) + lVar14 * 4);
    iVar13 = SUB164(auVar4 * auVar8,8);
    if (uVar15 != 0) {
      uVar17 = 0;
      do {
        if ((uVar12 == uVar15) &&
           (lVar14 = *(long *)(*(long *)(*(long *)(this + 0x98) + lVar14 * 8) + 0x10),
           lVar14 == *(long *)param_1)) {
          if (*(undefined8 **)(this + 0x88) == (undefined8 *)0x0) {
            return '\0';
          }
          plVar3 = (long *)**(undefined8 **)(this + 0x88);
          while( true ) {
            if (plVar3 == (long *)0x0) {
              return '\0';
            }
            if ((*plVar3 == lVar14) && ((char)plVar3[3] != '\0')) break;
            plVar3 = (long *)plVar3[4];
          }
          return (char)plVar3[3];
        }
        uVar17 = uVar17 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)(iVar13 + 1) * lVar2;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar16;
        lVar14 = SUB168(auVar5 * auVar9,8);
        uVar15 = *(uint *)(*(long *)(this + 0xa0) + lVar14 * 4);
        iVar13 = SUB164(auVar5 * auVar9,8);
      } while ((uVar15 != 0) &&
              (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar15 * lVar2, auVar10._8_8_ = 0,
              auVar10._0_8_ = uVar16, auVar7._8_8_ = 0,
              auVar7._0_8_ = (ulong)((uVar1 + iVar13) - SUB164(auVar6 * auVar10,8)) * lVar2,
              auVar11._8_8_ = 0, auVar11._0_8_ = uVar16, uVar17 <= SUB164(auVar7 * auVar11,8)));
    }
  }
  _err_print_error("is_singleton_user_created","core/config/engine.cpp",0x151,
                   "Condition \"!singleton_ptrs.has(p_name)\" is true. Returning: false",0,0);
  return '\0';
}



/* Engine::is_singleton_editor_only(StringName const&) const */

char __thiscall Engine::is_singleton_editor_only(Engine *this,StringName *param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
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
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  
  if ((*(long *)(this + 0x98) != 0) && (*(int *)(this + 0xbc) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xb8) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xb8) * 8);
    if (*(long *)param_1 == 0) {
      uVar12 = StringName::get_empty_hash();
    }
    else {
      uVar12 = *(uint *)(*(long *)param_1 + 0x20);
    }
    uVar16 = CONCAT44(0,uVar1);
    if (uVar12 == 0) {
      uVar12 = 1;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (ulong)uVar12 * lVar2;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar16;
    lVar14 = SUB168(auVar4 * auVar8,8);
    uVar15 = *(uint *)(*(long *)(this + 0xa0) + lVar14 * 4);
    iVar13 = SUB164(auVar4 * auVar8,8);
    if (uVar15 != 0) {
      uVar17 = 0;
      do {
        if ((uVar12 == uVar15) &&
           (lVar14 = *(long *)(*(long *)(*(long *)(this + 0x98) + lVar14 * 8) + 0x10),
           lVar14 == *(long *)param_1)) {
          if (*(undefined8 **)(this + 0x88) == (undefined8 *)0x0) {
            return '\0';
          }
          plVar3 = (long *)**(undefined8 **)(this + 0x88);
          while( true ) {
            if (plVar3 == (long *)0x0) {
              return '\0';
            }
            if ((*plVar3 == lVar14) && (*(char *)((long)plVar3 + 0x19) != '\0')) break;
            plVar3 = (long *)plVar3[4];
          }
          return *(char *)((long)plVar3 + 0x19);
        }
        uVar17 = uVar17 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)(iVar13 + 1) * lVar2;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar16;
        lVar14 = SUB168(auVar5 * auVar9,8);
        uVar15 = *(uint *)(*(long *)(this + 0xa0) + lVar14 * 4);
        iVar13 = SUB164(auVar5 * auVar9,8);
      } while ((uVar15 != 0) &&
              (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar15 * lVar2, auVar10._8_8_ = 0,
              auVar10._0_8_ = uVar16, auVar7._8_8_ = 0,
              auVar7._0_8_ = (ulong)((uVar1 + iVar13) - SUB164(auVar6 * auVar10,8)) * lVar2,
              auVar11._8_8_ = 0, auVar11._0_8_ = uVar16, uVar17 <= SUB164(auVar7 * auVar11,8)));
    }
  }
  _err_print_error("is_singleton_editor_only","core/config/engine.cpp",0x15d,
                   "Condition \"!singleton_ptrs.has(p_name)\" is true. Returning: false",0,0);
  return '\0';
}



/* Engine::remove_singleton(StringName const&) */

ulong __thiscall Engine::remove_singleton(Engine *this,StringName *param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  uint *puVar5;
  uint uVar6;
  long lVar7;
  ulong *puVar8;
  ulong *puVar9;
  long lVar10;
  undefined8 uVar11;
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
  uint uVar40;
  ulong uVar41;
  ulong uVar42;
  int iVar43;
  uint uVar44;
  long lVar45;
  long lVar46;
  ulong uVar47;
  ulong *puVar48;
  long *plVar49;
  uint uVar50;
  uint uVar51;
  ulong uVar52;
  uint *puVar53;
  
  if ((*(long *)(this + 0x98) != 0) && (*(int *)(this + 0xbc) != 0)) {
    uVar6 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xb8) * 4);
    uVar41 = CONCAT44(0,uVar6);
    lVar7 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xb8) * 8);
    if (*(long *)param_1 == 0) {
      uVar40 = StringName::get_empty_hash();
    }
    else {
      uVar40 = *(uint *)(*(long *)param_1 + 0x20);
    }
    if (uVar40 == 0) {
      uVar40 = 1;
    }
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)uVar40 * lVar7;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar41;
    lVar45 = SUB168(auVar12 * auVar26,8);
    uVar44 = *(uint *)(*(long *)(this + 0xa0) + lVar45 * 4);
    iVar43 = SUB164(auVar12 * auVar26,8);
    if (uVar44 != 0) {
      uVar51 = 0;
      do {
        if ((uVar40 == uVar44) &&
           (uVar42 = *(ulong *)(*(long *)(*(long *)(this + 0x98) + lVar45 * 8) + 0x10),
           uVar42 == *(ulong *)param_1)) {
          puVar8 = *(ulong **)(this + 0x88);
          if (puVar8 == (ulong *)0x0) {
            return uVar42;
          }
          puVar9 = (ulong *)*puVar8;
          puVar48 = puVar9;
          if (puVar9 == (ulong *)0x0) {
            return uVar42;
          }
          while (*puVar48 != uVar42) {
            puVar1 = puVar48 + 4;
            puVar48 = (ulong *)*puVar1;
            if ((ulong *)*puVar1 == (ulong *)0x0) {
              return uVar42;
            }
          }
          if (puVar8 == (ulong *)puVar48[6]) {
            uVar41 = puVar48[4];
            if (puVar9 == puVar48) {
              *puVar8 = uVar41;
            }
            uVar42 = puVar48[5];
            if ((ulong *)puVar8[1] == puVar48) {
              puVar8[1] = uVar42;
            }
            if (uVar42 != 0) {
              *(ulong *)(uVar42 + 0x20) = uVar41;
              uVar41 = puVar48[4];
            }
            if (uVar41 != 0) {
              *(ulong *)(uVar41 + 0x28) = uVar42;
            }
            if ((StringName::configured != '\0') &&
               (((puVar48[2] == 0 || (StringName::unref(), StringName::configured != '\0')) &&
                (*puVar48 != 0)))) {
              StringName::unref();
            }
            uVar41 = Memory::free_static(puVar48,false);
            *(int *)(puVar8 + 2) = (int)puVar8[2] + -1;
          }
          else {
            uVar41 = _err_print_error("erase","./core/templates/list.h",0xe7,
                                      "Condition \"p_I->data != this\" is true. Returning: false",0)
            ;
          }
          if (*(int *)((long)*(void **)(this + 0x88) + 0x10) == 0) {
            uVar41 = Memory::free_static(*(void **)(this + 0x88),false);
            *(undefined8 *)(this + 0x88) = 0;
          }
          if (*(long *)(this + 0x98) == 0) {
            return uVar41;
          }
          if (*(uint *)(this + 0xbc) == 0) {
            return (ulong)*(uint *)(this + 0xbc);
          }
          uVar6 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xb8) * 4);
          lVar7 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xb8) * 8);
          if (*(long *)param_1 == 0) {
            uVar40 = StringName::get_empty_hash();
          }
          else {
            uVar40 = *(uint *)(*(long *)param_1 + 0x20);
          }
          uVar41 = CONCAT44(0,uVar6);
          lVar45 = *(long *)(this + 0xa0);
          if (uVar40 == 0) {
            uVar40 = 1;
          }
          auVar16._8_8_ = 0;
          auVar16._0_8_ = (ulong)uVar40 * lVar7;
          auVar30._8_8_ = 0;
          auVar30._0_8_ = uVar41;
          auVar16 = auVar16 * auVar30;
          lVar46 = auVar16._8_8_;
          uVar44 = *(uint *)(lVar45 + lVar46 * 4);
          uVar51 = auVar16._8_4_;
          if (uVar44 == 0) {
            return auVar16._0_8_;
          }
          uVar50 = 0;
          do {
            uVar42 = (ulong)uVar51;
            if ((uVar40 == uVar44) &&
               (lVar10 = *(long *)(this + 0x98),
               *(long *)(*(long *)(lVar10 + lVar46 * 8) + 0x10) == *(long *)param_1)) {
              uVar6 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xb8) * 4);
              uVar52 = CONCAT44(0,uVar6);
              lVar7 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xb8) * 8);
              auVar20._8_8_ = 0;
              auVar20._0_8_ = (ulong)(uVar51 + 1) * lVar7;
              auVar34._8_8_ = 0;
              auVar34._0_8_ = uVar52;
              uVar47 = SUB168(auVar20 * auVar34,8);
              puVar53 = (uint *)(lVar45 + uVar47 * 4);
              uVar44 = SUB164(auVar20 * auVar34,8);
              uVar41 = (ulong)uVar44;
              uVar40 = *puVar53;
              if ((uVar40 != 0) &&
                 (auVar21._8_8_ = 0, auVar21._0_8_ = (ulong)uVar40 * lVar7, auVar35._8_8_ = 0,
                 auVar35._0_8_ = uVar52, auVar22._8_8_ = 0,
                 auVar22._0_8_ = (ulong)((uVar6 + uVar44) - SUB164(auVar21 * auVar35,8)) * lVar7,
                 auVar36._8_8_ = 0, auVar36._0_8_ = uVar52, SUB164(auVar22 * auVar36,8) != 0)) {
                while( true ) {
                  puVar5 = (uint *)(lVar45 + uVar42 * 4);
                  *puVar53 = *puVar5;
                  puVar2 = (undefined8 *)(lVar10 + uVar47 * 8);
                  *puVar5 = uVar40;
                  puVar3 = (undefined8 *)(lVar10 + uVar42 * 8);
                  uVar11 = *puVar2;
                  *puVar2 = *puVar3;
                  uVar51 = (uint)uVar41;
                  *puVar3 = uVar11;
                  auVar25._8_8_ = 0;
                  auVar25._0_8_ = (ulong)(uVar51 + 1) * lVar7;
                  auVar39._8_8_ = 0;
                  auVar39._0_8_ = uVar52;
                  uVar47 = SUB168(auVar25 * auVar39,8);
                  puVar53 = (uint *)(lVar45 + uVar47 * 4);
                  uVar40 = *puVar53;
                  if ((uVar40 == 0) ||
                     (auVar23._8_8_ = 0, auVar23._0_8_ = (ulong)uVar40 * lVar7, auVar37._8_8_ = 0,
                     auVar37._0_8_ = uVar52, auVar24._8_8_ = 0,
                     auVar24._0_8_ =
                          (ulong)((SUB164(auVar25 * auVar39,8) + uVar6) -
                                 SUB164(auVar23 * auVar37,8)) * lVar7, auVar38._8_8_ = 0,
                     auVar38._0_8_ = uVar52, SUB164(auVar24 * auVar38,8) == 0)) break;
                  uVar42 = uVar41;
                  uVar41 = uVar47 & 0xffffffff;
                }
              }
              uVar41 = (ulong)uVar51;
              *(undefined4 *)(lVar45 + uVar41 * 4) = 0;
              plVar4 = (long *)(lVar10 + uVar41 * 8);
              plVar49 = (long *)*plVar4;
              if (*(long **)(this + 0xa8) == plVar49) {
                *(long *)(this + 0xa8) = *plVar49;
                plVar49 = (long *)*plVar4;
              }
              if (*(long **)(this + 0xb0) == plVar49) {
                *(long *)(this + 0xb0) = plVar49[1];
                plVar49 = (long *)*plVar4;
              }
              if ((long *)plVar49[1] != (long *)0x0) {
                *(long *)plVar49[1] = *plVar49;
                plVar49 = (long *)*plVar4;
              }
              if (*plVar49 != 0) {
                *(long *)(*plVar49 + 8) = plVar49[1];
                plVar49 = (long *)*plVar4;
              }
              if ((StringName::configured != '\0') && (plVar49[2] != 0)) {
                StringName::unref();
              }
              Memory::free_static(plVar49,false);
              uVar42 = *(ulong *)(this + 0x98);
              *(undefined8 *)(uVar42 + uVar41 * 8) = 0;
              *(int *)(this + 0xbc) = *(int *)(this + 0xbc) + -1;
              return uVar42;
            }
            uVar50 = uVar50 + 1;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = (ulong)(uVar51 + 1) * lVar7;
            auVar31._8_8_ = 0;
            auVar31._0_8_ = uVar41;
            auVar17 = auVar17 * auVar31;
            lVar46 = auVar17._8_8_;
            uVar42 = auVar17._0_8_;
            uVar44 = *(uint *)(lVar45 + lVar46 * 4);
            uVar51 = auVar17._8_4_;
          } while ((uVar44 != 0) &&
                  (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)uVar44 * lVar7, auVar32._8_8_ = 0,
                  auVar32._0_8_ = uVar41, auVar19._8_8_ = 0,
                  auVar19._0_8_ = (ulong)((uVar6 + uVar51) - SUB164(auVar18 * auVar32,8)) * lVar7,
                  auVar33._8_8_ = 0, auVar33._0_8_ = uVar41, uVar42 = SUB168(auVar19 * auVar33,0),
                  uVar50 <= SUB164(auVar19 * auVar33,8)));
          return uVar42;
        }
        uVar51 = uVar51 + 1;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = (ulong)(iVar43 + 1) * lVar7;
        auVar27._8_8_ = 0;
        auVar27._0_8_ = uVar41;
        lVar45 = SUB168(auVar13 * auVar27,8);
        uVar44 = *(uint *)(*(long *)(this + 0xa0) + lVar45 * 4);
        iVar43 = SUB164(auVar13 * auVar27,8);
      } while ((uVar44 != 0) &&
              (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar44 * lVar7, auVar28._8_8_ = 0,
              auVar28._0_8_ = uVar41, auVar15._8_8_ = 0,
              auVar15._0_8_ = (ulong)((uVar6 + iVar43) - SUB164(auVar14 * auVar28,8)) * lVar7,
              auVar29._8_8_ = 0, auVar29._0_8_ = uVar41, uVar51 <= SUB164(auVar15 * auVar29,8)));
    }
  }
  uVar41 = _err_print_error("remove_singleton","core/config/engine.cpp",0x169,
                            "Condition \"!singleton_ptrs.has(p_name)\" is true.",0,0);
  return uVar41;
}



/* Engine::has_singleton(StringName const&) const */

undefined8 __thiscall Engine::has_singleton(Engine *this,StringName *param_1)

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
  int iVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  if (*(long *)(this + 0x98) == 0) {
    return 0;
  }
  if (*(int *)(this + 0xbc) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xb8) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xb8) * 8);
    if (*(long *)param_1 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(*(long *)param_1 + 0x20);
    }
    uVar15 = CONCAT44(0,uVar1);
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar11 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar15;
    lVar13 = SUB168(auVar3 * auVar7,8);
    uVar14 = *(uint *)(*(long *)(this + 0xa0) + lVar13 * 4);
    iVar12 = SUB164(auVar3 * auVar7,8);
    if (uVar14 != 0) {
      uVar16 = 0;
      do {
        if ((uVar11 == uVar14) &&
           (*(long *)(*(long *)(*(long *)(this + 0x98) + lVar13 * 8) + 0x10) == *(long *)param_1)) {
          return 1;
        }
        uVar16 = uVar16 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar12 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar15;
        lVar13 = SUB168(auVar4 * auVar8,8);
        uVar14 = *(uint *)(*(long *)(this + 0xa0) + lVar13 * 4);
        iVar12 = SUB164(auVar4 * auVar8,8);
      } while ((uVar14 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar14 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar15, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + iVar12) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar15, uVar16 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
}



/* Engine::get_write_movie_path() const */

void Engine::get_write_movie_path(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 200) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 200));
  }
  return;
}



/* Engine::set_write_movie_path(String const&) */

void __thiscall Engine::set_write_movie_path(Engine *this,String *param_1)

{
  if (*(long *)(this + 200) != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 200),(CowData *)param_1);
    return;
  }
  return;
}



/* Engine::set_shader_cache_path(String const&) */

void __thiscall Engine::set_shader_cache_path(Engine *this,String *param_1)

{
  if (*(long *)(this + 0xd0) != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0xd0),(CowData *)param_1);
    return;
  }
  return;
}



/* Engine::get_shader_cache_path() const */

void Engine::get_shader_cache_path(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0xd0) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0xd0));
  }
  return;
}



/* Engine::get_singleton() */

undefined8 Engine::get_singleton(void)

{
  return singleton;
}



/* Engine::notify_frame_server_synced() */

bool __thiscall Engine::notify_frame_server_synced(Engine *this)

{
  this[0xdc] = (Engine)0x1;
  return 5 < *(int *)(this + 0xd8);
}



/* Engine::set_freeze_time_scale(bool) */

void __thiscall Engine::set_freeze_time_scale(Engine *this,bool param_1)

{
  this[0xdd] = (Engine)param_1;
  return;
}



/* Engine::set_embedded_in_editor(bool) */

void __thiscall Engine::set_embedded_in_editor(Engine *this,bool param_1)

{
  this[0xc3] = (Engine)param_1;
  return;
}



/* Engine::is_embedded_in_editor() const */

Engine __thiscall Engine::is_embedded_in_editor(Engine *this)

{
  return this[0xc3];
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Engine::Engine() */

void __thiscall Engine::Engine(Engine *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = _LC54;
  uVar1 = __LC53;
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR_set_physics_ticks_per_second_0011d060;
  uVar3 = _LC54;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = uVar2;
  *(undefined8 *)(this + 0x48) = uVar3;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x3c;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x58) = 8;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  this[0x6c] = (Engine)0x0;
  *(undefined4 *)(this + 0x70) = 0xffffffff;
  *(undefined8 *)(this + 0x78) = 0;
  this[0x80] = (Engine)0x0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0xb8) = 2;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined2 *)(this + 0xc4) = 0x100;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined2 *)(this + 0xdc) = 0;
  singleton = this;
  *(undefined1 (*) [16])(this + 0x98) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 200) = (undefined1  [16])0x0;
  return;
}



/* Engine::Singleton::Singleton(StringName const&, Object*, StringName const&) */

void __thiscall
Engine::Singleton::Singleton
          (Singleton *this,StringName *param_1,Object *param_2,StringName *param_3)

{
  long lVar1;
  
  StringName::StringName((StringName *)this,param_1);
  *(Object **)(this + 8) = param_2;
  StringName::StringName((StringName *)(this + 0x10),param_3);
  *(undefined2 *)(this + 0x18) = 0;
  if (param_2 != (Object *)0x0) {
    lVar1 = __dynamic_cast(param_2,&Object::typeinfo,&RefCounted::typeinfo,0);
    if ((lVar1 != 0) && (*(int *)(lVar1 + 0x178) == 1)) {
      _err_print_error("Singleton","core/config/engine.cpp",0x1bb,
                       "You must use Ref<> to ensure the lifetime of a RefCounted object intended to be used as a singleton."
                       ,0,1);
      return;
    }
  }
  return;
}



/* Engine::get_singletons(List<Engine::Singleton, DefaultAllocator>*) */

void __thiscall Engine::get_singletons(Engine *this,List *param_1)

{
  StringName *pSVar1;
  long *plVar2;
  long lVar3;
  Singleton *this_00;
  undefined1 (*pauVar4) [16];
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(undefined8 **)(this + 0x88) != (undefined8 *)0x0) {
    for (pSVar1 = (StringName *)**(undefined8 **)(this + 0x88); pSVar1 != (StringName *)0x0;
        pSVar1 = *(StringName **)(pSVar1 + 0x20)) {
      if ((this[0xc0] != (Engine)0x0) || (pSVar1[0x19] == (StringName)0x0)) {
        if (*(long *)param_1 == 0) {
          pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
          *(undefined1 (**) [16])param_1 = pauVar4;
          *(undefined4 *)pauVar4[1] = 0;
          *pauVar4 = (undefined1  [16])0x0;
        }
        this_00 = (Singleton *)operator_new(0x38,DefaultAllocator::alloc);
        local_48 = 0;
        local_50 = 0;
        Singleton::Singleton(this_00,(StringName *)&local_50,(Object *)0x0,(StringName *)&local_48);
        if ((StringName::configured != '\0') &&
           (((local_50 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
            (local_48 != 0)))) {
          StringName::unref();
        }
        *(undefined8 *)(this_00 + 0x30) = 0;
        *(undefined1 (*) [16])(this_00 + 0x20) = (undefined1  [16])0x0;
        StringName::operator=((StringName *)this_00,pSVar1);
        *(undefined8 *)(this_00 + 8) = *(undefined8 *)(pSVar1 + 8);
        StringName::operator=((StringName *)(this_00 + 0x10),pSVar1 + 0x10);
        *(undefined2 *)(this_00 + 0x18) = *(undefined2 *)(pSVar1 + 0x18);
        plVar2 = *(long **)param_1;
        lVar3 = plVar2[1];
        *(undefined8 *)(this_00 + 0x20) = 0;
        *(long **)(this_00 + 0x30) = plVar2;
        *(long *)(this_00 + 0x28) = lVar3;
        if (lVar3 != 0) {
          *(Singleton **)(lVar3 + 0x20) = this_00;
        }
        plVar2[1] = (long)this_00;
        if (*plVar2 == 0) {
          *plVar2 = (long)this_00;
        }
        *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Engine::get_singleton_object(StringName const&) const */

undefined8 __thiscall Engine::get_singleton_object(Engine *this,StringName *param_1)

{
  long *plVar1;
  uint uVar2;
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
  char cVar13;
  uint uVar14;
  undefined8 uVar15;
  uint uVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0x98) != 0) && (*(int *)(this + 0xbc) != 0)) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xb8) * 4);
    uVar20 = CONCAT44(0,uVar2);
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xb8) * 8);
    if (*(long *)param_1 == 0) {
      uVar14 = StringName::get_empty_hash();
    }
    else {
      uVar14 = *(uint *)(*(long *)param_1 + 0x20);
    }
    if (uVar14 == 0) {
      uVar14 = 1;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (ulong)uVar14 * lVar3;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar20;
    lVar17 = SUB168(auVar4 * auVar8,8);
    uVar18 = *(uint *)(*(long *)(this + 0xa0) + lVar17 * 4);
    uVar16 = SUB164(auVar4 * auVar8,8);
    if (uVar18 != 0) {
      uVar19 = 0;
      while ((uVar18 != uVar14 ||
             (*(long *)(*(long *)(*(long *)(this + 0x98) + lVar17 * 8) + 0x10) != *(long *)param_1))
            ) {
        uVar19 = uVar19 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)(uVar16 + 1) * lVar3;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar20;
        lVar17 = SUB168(auVar5 * auVar9,8);
        uVar18 = *(uint *)(*(long *)(this + 0xa0) + lVar17 * 4);
        uVar16 = SUB164(auVar5 * auVar9,8);
        if ((uVar18 == 0) ||
           (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar18 * lVar3, auVar10._8_8_ = 0,
           auVar10._0_8_ = uVar20, auVar7._8_8_ = 0,
           auVar7._0_8_ = (ulong)((uVar2 + uVar16) - SUB164(auVar6 * auVar10,8)) * lVar3,
           auVar11._8_8_ = 0, auVar11._0_8_ = uVar20, SUB164(auVar7 * auVar11,8) < uVar19))
        goto LAB_00103b00;
      }
      lVar3 = *(long *)(*(long *)(this + 0x98) + (ulong)uVar16 * 8);
      if (lVar3 != 0) {
        if ((this[0xc0] != (Engine)0x0) ||
           (cVar13 = is_singleton_editor_only(this,param_1), cVar13 == '\0')) {
          uVar15 = *(undefined8 *)(lVar3 + 0x18);
          goto LAB_00103ad9;
        }
        StringName::StringName((StringName *)&local_50,param_1);
        local_48 = "Can\'t retrieve singleton \'%s\' outside of editor.";
        local_58 = 0;
        local_40 = 0x30;
        String::parse_latin1((StrRange *)&local_58);
        vformat<StringName>(&local_48,&local_58,(StringName *)&local_50);
        _err_print_error("get_singleton_object","core/config/engine.cpp",0x149,
                         "Method/function failed. Returning: nullptr",&local_48,0,0);
        if (local_48 == (char *)0x0) goto LAB_00103b98;
        goto LAB_00103b86;
      }
    }
  }
LAB_00103b00:
  StringName::StringName((StringName *)&local_50,param_1);
  local_48 = "Failed to retrieve non-existent singleton \'%s\'.";
  local_58 = 0;
  local_40 = 0x2f;
  String::parse_latin1((StrRange *)&local_58);
  vformat<StringName>(&local_48,&local_58,(StringName *)&local_50);
  _err_print_error("get_singleton_object","core/config/engine.cpp",0x145,
                   "Condition \"!E\" is true. Returning: nullptr",&local_48,0,0);
  if (local_48 != (char *)0x0) {
LAB_00103b86:
    pcVar12 = local_48;
    LOCK();
    plVar1 = (long *)(local_48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_48 = (char *)0x0;
      Memory::free_static(pcVar12 + -0x10,false);
    }
  }
LAB_00103b98:
  lVar3 = local_58;
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
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  uVar15 = 0;
LAB_00103ad9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar15;
}



/* Engine::add_singleton(Engine::Singleton const&) */

void __thiscall Engine::add_singleton(Engine *this,Singleton *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  char *pcVar13;
  uint uVar14;
  Singleton *this_00;
  undefined8 *puVar15;
  undefined1 (*pauVar16) [16];
  int iVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0x98) != 0) && (*(int *)(this + 0xbc) != 0)) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xb8) * 4);
    uVar21 = CONCAT44(0,uVar2);
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xb8) * 8);
    if (*(long *)param_1 == 0) {
      uVar14 = StringName::get_empty_hash();
    }
    else {
      uVar14 = *(uint *)(*(long *)param_1 + 0x20);
    }
    if (uVar14 == 0) {
      uVar14 = 1;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (ulong)uVar14 * lVar3;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar21;
    lVar18 = SUB168(auVar5 * auVar9,8);
    uVar19 = *(uint *)(*(long *)(this + 0xa0) + lVar18 * 4);
    iVar17 = SUB164(auVar5 * auVar9,8);
    if (uVar19 != 0) {
      uVar20 = 0;
      do {
        if ((uVar19 == uVar14) &&
           (*(long *)(*(long *)(*(long *)(this + 0x98) + lVar18 * 8) + 0x10) == *(long *)param_1)) {
          StringName::StringName((StringName *)&local_60,(StringName *)param_1);
          local_50 = 0x38;
          local_58 = "Can\'t register singleton \'%s\' because it already exists.";
          local_68 = 0;
          String::parse_latin1((StrRange *)&local_68);
          vformat<StringName>(&local_58,&local_68,(StringName *)&local_60);
          _err_print_error("add_singleton","core/config/engine.cpp",0x13e,
                           "Condition \"singleton_ptrs.has(p_singleton.name)\" is true.",&local_58,0
                           ,0);
          pcVar13 = local_58;
          if (local_58 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_58 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_58 = (char *)0x0;
              Memory::free_static(pcVar13 + -0x10,false);
            }
          }
          lVar3 = local_68;
          if (local_68 != 0) {
            LOCK();
            plVar1 = (long *)(local_68 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_68 = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
          }
          goto LAB_00103fc1;
        }
        uVar20 = uVar20 + 1;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (ulong)(iVar17 + 1) * lVar3;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar21;
        lVar18 = SUB168(auVar6 * auVar10,8);
        uVar19 = *(uint *)(*(long *)(this + 0xa0) + lVar18 * 4);
        iVar17 = SUB164(auVar6 * auVar10,8);
      } while ((uVar19 != 0) &&
              (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar19 * lVar3, auVar11._8_8_ = 0,
              auVar11._0_8_ = uVar21, auVar8._8_8_ = 0,
              auVar8._0_8_ = (ulong)((uVar2 + iVar17) - SUB164(auVar7 * auVar11,8)) * lVar3,
              auVar12._8_8_ = 0, auVar12._0_8_ = uVar21, uVar20 <= SUB164(auVar8 * auVar12,8)));
    }
  }
  if (*(long *)(this + 0x88) == 0) {
    pauVar16 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])(this + 0x88) = pauVar16;
    *(undefined4 *)pauVar16[1] = 0;
    *pauVar16 = (undefined1  [16])0x0;
  }
  this_00 = (Singleton *)operator_new(0x38,DefaultAllocator::alloc);
  local_58 = (char *)0x0;
  local_60 = 0;
  Singleton::Singleton(this_00,(StringName *)&local_60,(Object *)0x0,(StringName *)&local_58);
  if (StringName::configured != '\0') {
    if (local_60 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103f40;
    }
    if (local_58 != (char *)0x0) {
      StringName::unref();
    }
  }
LAB_00103f40:
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined1 (*) [16])(this_00 + 0x20) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)this_00,(StringName *)param_1);
  *(undefined8 *)(this_00 + 8) = *(undefined8 *)(param_1 + 8);
  StringName::operator=((StringName *)(this_00 + 0x10),(StringName *)(param_1 + 0x10));
  *(undefined2 *)(this_00 + 0x18) = *(undefined2 *)(param_1 + 0x18);
  plVar1 = *(long **)(this + 0x88);
  lVar3 = plVar1[1];
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(long **)(this_00 + 0x30) = plVar1;
  *(long *)(this_00 + 0x28) = lVar3;
  if (lVar3 != 0) {
    *(Singleton **)(lVar3 + 0x20) = this_00;
  }
  plVar1[1] = (long)this_00;
  if (*plVar1 == 0) {
    *plVar1 = (long)this_00;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  uVar4 = *(undefined8 *)(param_1 + 8);
  puVar15 = (undefined8 *)
            HashMap<StringName,Object*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Object*>>>
            ::operator[]((HashMap<StringName,Object*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Object*>>>
                          *)(this + 0x90),(StringName *)param_1);
  *puVar15 = uVar4;
LAB_00103fc1:
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



/* Engine::get_frames_per_second() const */

undefined8 __thiscall Engine::get_frames_per_second(Engine *this)

{
  return *(undefined8 *)(this + 0x38);
}



/* WARNING: Removing unreachable block (ram,0x0011c4c8) */
/* WARNING: Removing unreachable block (ram,0x0011c5f8) */
/* WARNING: Removing unreachable block (ram,0x0011c7c0) */
/* WARNING: Removing unreachable block (ram,0x0011c604) */
/* WARNING: Removing unreachable block (ram,0x0011c60e) */
/* WARNING: Removing unreachable block (ram,0x0011c7a0) */
/* WARNING: Removing unreachable block (ram,0x0011c61a) */
/* WARNING: Removing unreachable block (ram,0x0011c624) */
/* WARNING: Removing unreachable block (ram,0x0011c780) */
/* WARNING: Removing unreachable block (ram,0x0011c630) */
/* WARNING: Removing unreachable block (ram,0x0011c63a) */
/* WARNING: Removing unreachable block (ram,0x0011c760) */
/* WARNING: Removing unreachable block (ram,0x0011c646) */
/* WARNING: Removing unreachable block (ram,0x0011c650) */
/* WARNING: Removing unreachable block (ram,0x0011c740) */
/* WARNING: Removing unreachable block (ram,0x0011c65c) */
/* WARNING: Removing unreachable block (ram,0x0011c666) */
/* WARNING: Removing unreachable block (ram,0x0011c720) */
/* WARNING: Removing unreachable block (ram,0x0011c672) */
/* WARNING: Removing unreachable block (ram,0x0011c67c) */
/* WARNING: Removing unreachable block (ram,0x0011c700) */
/* WARNING: Removing unreachable block (ram,0x0011c684) */
/* WARNING: Removing unreachable block (ram,0x0011c69a) */
/* WARNING: Removing unreachable block (ram,0x0011c6a6) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, Object*, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Object*> > >::operator[](StringName const&) */

undefined8 * __thiscall
HashMap<StringName,Object*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Object*>>>
::operator[](HashMap<StringName,Object*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Object*>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
  undefined8 *puVar4;
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
  uint uVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined8 *puVar42;
  long lVar43;
  void *pvVar44;
  ulong uVar45;
  int iVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  ulong uVar50;
  undefined8 uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  undefined8 *puVar55;
  long in_FS_OFFSET;
  bool bVar56;
  long local_58;
  undefined8 local_50;
  long local_40;
  
  lVar43 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar40 = CONCAT44(0,uVar38);
  if (lVar43 == 0) {
LAB_0011cef8:
    uVar45 = uVar40 * 4;
    uVar50 = uVar40 * 8;
    uVar41 = Memory::alloc_static(uVar45,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    pvVar44 = (void *)Memory::alloc_static(uVar50,false);
    *(void **)(this + 8) = pvVar44;
    if ((int)uVar40 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)pvVar44 + uVar50)) && (pvVar44 < (void *)((long)pvVar3 + uVar45))
         ) {
        uVar45 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar45 * 4) = 0;
          *(undefined8 *)((long)pvVar44 + uVar45 * 8) = 0;
          uVar45 = uVar45 + 1;
        } while (uVar40 != uVar45);
        goto LAB_0011cda8;
      }
      memset(pvVar3,0,uVar45);
      memset(pvVar44,0,uVar50);
      iVar46 = *(int *)(this + 0x2c);
LAB_0011cdac:
      if (iVar46 != 0) {
LAB_0011cdb4:
        uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar45 = CONCAT44(0,uVar38);
        lVar43 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        if (*(long *)param_1 == 0) {
          uVar39 = StringName::get_empty_hash();
        }
        else {
          uVar39 = *(uint *)(*(long *)param_1 + 0x20);
        }
        if (uVar39 == 0) {
          uVar39 = 1;
        }
        uVar54 = 0;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = (ulong)uVar39 * lVar43;
        auVar33._8_8_ = 0;
        auVar33._0_8_ = uVar45;
        lVar49 = SUB168(auVar17 * auVar33,8);
        uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar49 * 4);
        uVar53 = SUB164(auVar17 * auVar33,8);
        if (uVar52 != 0) {
          do {
            if ((uVar39 == uVar52) &&
               (*(long *)(*(long *)(*(long *)(this + 8) + lVar49 * 8) + 0x10) == *(long *)param_1))
            {
              puVar42 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar53 * 8);
              puVar42[3] = 0;
              goto LAB_0011c9ac;
            }
            uVar54 = uVar54 + 1;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = (ulong)(uVar53 + 1) * lVar43;
            auVar34._8_8_ = 0;
            auVar34._0_8_ = uVar45;
            lVar49 = SUB168(auVar18 * auVar34,8);
            uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar49 * 4);
            uVar53 = SUB164(auVar18 * auVar34,8);
          } while ((uVar52 != 0) &&
                  (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar52 * lVar43, auVar35._8_8_ = 0,
                  auVar35._0_8_ = uVar45, auVar20._8_8_ = 0,
                  auVar20._0_8_ = (ulong)((uVar38 + uVar53) - SUB164(auVar19 * auVar35,8)) * lVar43,
                  auVar36._8_8_ = 0, auVar36._0_8_ = uVar45, uVar54 <= SUB164(auVar20 * auVar36,8)))
          ;
        }
        iVar46 = *(int *)(this + 0x2c);
      }
      goto LAB_0011c9e3;
    }
    iVar46 = *(int *)(this + 0x2c);
    if (pvVar44 == (void *)0x0) goto LAB_0011c9e3;
    if (iVar46 != 0) goto LAB_0011cdb4;
LAB_0011ca09:
    uVar38 = *(uint *)(this + 0x28);
    if (uVar38 == 0x1c) {
      puVar42 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0011c9ac;
    }
    uVar40 = (ulong)(uVar38 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar39 = *(uint *)(hash_table_size_primes + (ulong)uVar38 * 4);
    if (uVar38 + 1 < 2) {
      uVar40 = 2;
    }
    uVar38 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar50 = (ulong)uVar38;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar44 = *(void **)(this + 8);
    uVar40 = uVar50 * 4;
    uVar45 = uVar50 * 8;
    pvVar3 = *(void **)(this + 0x10);
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar45,false);
    *(void **)(this + 8) = __s_00;
    if (uVar38 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar45)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar40 != uVar50);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar45);
      }
    }
    if (uVar39 != 0) {
      uVar40 = 0;
      do {
        uVar38 = *(uint *)((long)pvVar3 + uVar40 * 4);
        if (uVar38 != 0) {
          lVar43 = *(long *)(this + 0x10);
          uVar54 = 0;
          uVar52 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar45 = CONCAT44(0,uVar52);
          lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)uVar38 * lVar49;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar45;
          lVar47 = SUB168(auVar9 * auVar25,8);
          puVar1 = (uint *)(lVar43 + lVar47 * 4);
          iVar46 = SUB164(auVar9 * auVar25,8);
          uVar53 = *puVar1;
          uVar41 = *(undefined8 *)((long)pvVar44 + uVar40 * 8);
          while (uVar53 != 0) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar53 * lVar49;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar45;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)((uVar52 + iVar46) - SUB164(auVar10 * auVar26,8)) * lVar49;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar45;
            uVar37 = SUB164(auVar11 * auVar27,8);
            uVar51 = uVar41;
            if (uVar37 < uVar54) {
              *puVar1 = uVar38;
              puVar42 = (undefined8 *)((long)__s_00 + lVar47 * 8);
              uVar51 = *puVar42;
              *puVar42 = uVar41;
              uVar38 = uVar53;
              uVar54 = uVar37;
            }
            uVar54 = uVar54 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(iVar46 + 1) * lVar49;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar45;
            lVar47 = SUB168(auVar12 * auVar28,8);
            puVar1 = (uint *)(lVar43 + lVar47 * 4);
            iVar46 = SUB164(auVar12 * auVar28,8);
            uVar41 = uVar51;
            uVar53 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar47 * 8) = uVar41;
          *puVar1 = uVar38;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar39 != uVar40);
      Memory::free_static(pvVar44,false);
      Memory::free_static(pvVar3,false);
    }
  }
  else {
    iVar46 = *(int *)(this + 0x2c);
    if (iVar46 != 0) {
      lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar39 = StringName::get_empty_hash();
        lVar43 = *(long *)(this + 8);
      }
      else {
        uVar39 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar39 == 0) {
        uVar39 = 1;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar39 * lVar49;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar40;
      lVar47 = SUB168(auVar5 * auVar21,8);
      uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
      uVar53 = SUB164(auVar5 * auVar21,8);
      if (uVar52 != 0) {
        uVar54 = 0;
        do {
          if ((uVar39 == uVar52) &&
             (*(long *)(*(long *)(lVar43 + lVar47 * 8) + 0x10) == *(long *)param_1)) {
            puVar42 = *(undefined8 **)(lVar43 + (ulong)uVar53 * 8);
            goto LAB_0011c9ac;
          }
          uVar54 = uVar54 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar53 + 1) * lVar49;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar40;
          lVar47 = SUB168(auVar6 * auVar22,8);
          uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
          uVar53 = SUB164(auVar6 * auVar22,8);
        } while ((uVar52 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar52 * lVar49, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar40, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar53 + uVar38) - SUB164(auVar7 * auVar23,8)) * lVar49,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar40, uVar54 <= SUB164(auVar8 * auVar24,8)));
      }
      uVar40 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar43 == 0) goto LAB_0011cef8;
LAB_0011cda8:
      iVar46 = *(int *)(this + 0x2c);
      goto LAB_0011cdac;
    }
LAB_0011c9e3:
    if ((float)uVar40 * __LC70 < (float)(iVar46 + 1)) goto LAB_0011ca09;
  }
  StringName::StringName((StringName *)&local_58,param_1);
  local_50 = 0;
  puVar42 = (undefined8 *)operator_new(0x20,"");
  *puVar42 = 0;
  puVar42[1] = 0;
  StringName::StringName((StringName *)(puVar42 + 2),(StringName *)&local_58);
  bVar56 = StringName::configured != '\0';
  puVar42[3] = local_50;
  if ((bVar56) && (local_58 != 0)) {
    StringName::unref();
  }
  puVar4 = *(undefined8 **)(this + 0x20);
  if (puVar4 == (undefined8 *)0x0) {
    lVar43 = *(long *)param_1;
    *(undefined8 **)(this + 0x18) = puVar42;
    *(undefined8 **)(this + 0x20) = puVar42;
    if (lVar43 == 0) goto LAB_0011cebd;
LAB_0011cc97:
    uVar38 = *(uint *)(lVar43 + 0x20);
  }
  else {
    *puVar4 = puVar42;
    puVar42[1] = puVar4;
    lVar43 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar42;
    if (lVar43 != 0) goto LAB_0011cc97;
LAB_0011cebd:
    uVar38 = StringName::get_empty_hash();
  }
  if (uVar38 == 0) {
    uVar38 = 1;
  }
  uVar40 = (ulong)uVar38;
  lVar43 = *(long *)(this + 0x10);
  uVar53 = 0;
  lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar45 = CONCAT44(0,uVar39);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar40 * lVar49;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar45;
  lVar48 = SUB168(auVar13 * auVar29,8);
  lVar47 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar43 + lVar48 * 4);
  iVar46 = SUB164(auVar13 * auVar29,8);
  uVar52 = *puVar1;
  puVar4 = puVar42;
  while (uVar52 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar52 * lVar49;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar45;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar39 + iVar46) - SUB164(auVar14 * auVar30,8)) * lVar49;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar45;
    uVar38 = SUB164(auVar15 * auVar31,8);
    puVar55 = puVar4;
    if (uVar38 < uVar53) {
      *puVar1 = (uint)uVar40;
      uVar40 = (ulong)uVar52;
      puVar2 = (undefined8 *)(lVar47 + lVar48 * 8);
      puVar55 = (undefined8 *)*puVar2;
      *puVar2 = puVar4;
      uVar53 = uVar38;
    }
    uVar38 = (uint)uVar40;
    uVar53 = uVar53 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar46 + 1) * lVar49;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar45;
    lVar48 = SUB168(auVar16 * auVar32,8);
    puVar1 = (uint *)(lVar43 + lVar48 * 4);
    iVar46 = SUB164(auVar16 * auVar32,8);
    puVar4 = puVar55;
    uVar52 = *puVar1;
  }
  *(undefined8 **)(lVar47 + lVar48 * 8) = puVar4;
  *puVar1 = uVar38;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0011c9ac:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar42 + 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


