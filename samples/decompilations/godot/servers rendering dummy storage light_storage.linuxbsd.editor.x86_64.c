
/* RendererDummy::LightStorage::lightmap_instance_free(RID) */

void __thiscall
RendererDummy::LightStorage::lightmap_instance_free(LightStorage *this,ulong param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  if (*(uint *)(this + 0x7c) <= (uint)param_2) {
    _err_print_error(&_LC3,"./core/templates/rid_owner.h",0x161,"Method/function failed.",0,0);
    return;
  }
  lVar3 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x78)) * 0x10 +
          *(long *)(*(long *)(this + 0x68) +
                   ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x78)) * 8);
  iVar1 = *(int *)(lVar3 + 8);
  if (-1 < iVar1) {
    if ((int)(param_2 >> 0x20) == iVar1) {
      *(undefined4 *)(lVar3 + 8) = 0xffffffff;
      uVar2 = *(int *)(this + 0x80) - 1;
      *(uint *)(this + 0x80) = uVar2;
      *(uint *)(*(long *)(*(long *)(this + 0x70) +
                         ((ulong)uVar2 / (ulong)*(uint *)(this + 0x78)) * 8) +
               ((ulong)uVar2 % (ulong)*(uint *)(this + 0x78)) * 4) = (uint)param_2;
      return;
    }
    _err_print_error(&_LC3,"./core/templates/rid_owner.h",0x171,"Method/function failed.",0,0);
    return;
  }
  _err_print_error(&_LC3,"./core/templates/rid_owner.h",0x16c,"Method/function failed.",
                   "Attempted to free an uninitialized or invalid RID",0,0);
  return;
}



/* RendererDummy::LightStorage::lightmap_initialize(RID) */

void __thiscall RendererDummy::LightStorage::lightmap_initialize(LightStorage *this,ulong param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  char *pcVar5;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar1 = *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 8;
    uVar2 = *(uint *)(lVar1 + 4);
    if ((int)uVar2 < 0) {
      uVar4 = (uint)(param_2 >> 0x20);
      if (uVar4 == (uVar2 & 0x7fffffff)) {
        *(uint *)(lVar1 + 4) = uVar4;
        return;
      }
      pcVar5 = "Attempting to initialize the wrong RID";
      uVar3 = 0xfc;
    }
    else {
      pcVar5 = "Initializing already initialized RID";
      uVar3 = 0xf8;
    }
    _err_print_error("get_or_null","./core/templates/rid_owner.h",uVar3,
                     "Method/function failed. Returning: nullptr",pcVar5,0,0);
  }
  _err_print_error("initialize_rid","./core/templates/rid_owner.h",0x128,
                   "Parameter \"mem\" is null.",0,0);
  return;
}



/* RendererDummy::LightStorage::lightmap_free(RID) */

int __thiscall RendererDummy::LightStorage::lightmap_free(LightStorage *this,ulong param_2)

{
  pthread_mutex_t *__mutex;
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  
  if (*(code **)(*(long *)this + 0x2e8) != lightmap_set_textures) {
    (**(code **)(*(long *)this + 0x2e8))(this,param_2,0,0);
  }
  __mutex = (pthread_mutex_t *)(this + 0x38);
  iVar2 = pthread_mutex_lock(__mutex);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar2);
  }
  if ((uint)param_2 < *(uint *)(this + 0x24)) {
    lVar1 = *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 8;
    iVar2 = *(int *)(lVar1 + 4);
    if (iVar2 < 0) {
      pthread_mutex_unlock(__mutex);
      _err_print_error(&_LC3,"./core/templates/rid_owner.h",0x16c,"Method/function failed.",
                       "Attempted to free an uninitialized or invalid RID",0);
      return 0;
    }
    if ((int)(param_2 >> 0x20) == iVar2) {
      *(undefined4 *)(lVar1 + 4) = 0xffffffff;
      uVar3 = *(int *)(this + 0x28) - 1;
      *(uint *)(this + 0x28) = uVar3;
      *(uint *)(*(long *)(*(long *)(this + 0x18) +
                         ((ulong)uVar3 / (ulong)*(uint *)(this + 0x20)) * 8) +
               ((ulong)uVar3 % (ulong)*(uint *)(this + 0x20)) * 4) = (uint)param_2;
      iVar2 = pthread_mutex_unlock(__mutex);
      return iVar2;
    }
    pthread_mutex_unlock(__mutex);
    uVar4 = 0x171;
  }
  else {
    pthread_mutex_unlock(__mutex);
    uVar4 = 0x161;
  }
  iVar2 = _err_print_error(&_LC3,"./core/templates/rid_owner.h",uVar4,"Method/function failed.",0,0)
  ;
  return iVar2;
}



/* RendererDummy::LightStorage::get_singleton() */

undefined8 RendererDummy::LightStorage::get_singleton(void)

{
  return singleton;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererDummy::LightStorage::LightStorage() */

void __thiscall RendererDummy::LightStorage::LightStorage(LightStorage *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = _UNK_001031f8;
  uVar2 = __LC11;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined ***)this = &PTR__LightStorage_00102de8;
  *(undefined ***)(this + 8) = &PTR__RID_Alloc_00102da8;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
  *(undefined4 *)(this + 0x48) = 1;
  *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x20) = uVar2;
  *(undefined8 *)(this + 0x28) = uVar1;
  uVar2 = Memory::alloc_static(0x28,false);
  *(undefined8 *)(this + 0x10) = uVar2;
  uVar2 = Memory::alloc_static((ulong)*(uint *)(this + 0x2c) << 3,false);
  *(undefined8 *)(this + 0x18) = uVar2;
  *(undefined1 (*) [16])(this + 0xa0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x90) = (undefined1  [16])0x0;
  uVar1 = _UNK_00103208;
  uVar2 = __LC12;
  *(undefined ***)(this + 0x60) = &PTR__RID_Alloc_00102dc8;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xa0) = 1;
  singleton = this;
  *(undefined8 *)(this + 0x78) = uVar2;
  *(undefined8 *)(this + 0x80) = uVar1;
  return;
}



/* RendererDummy::LightStorage::free(RID) */

undefined8 __thiscall RendererDummy::LightStorage::free(LightStorage *this,ulong param_2)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  __mutex = (pthread_mutex_t *)(this + 0x38);
  iVar1 = pthread_mutex_lock(__mutex);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar1);
  }
  uVar2 = (uint)param_2;
  uVar3 = (uint)(param_2 >> 0x20);
  if (uVar2 < *(uint *)(this + 0x24)) {
    if (param_2 >> 0x20 == 0x7fffffff) {
      pthread_mutex_unlock(__mutex);
      return 0;
    }
    if ((*(uint *)(*(long *)(*(long *)(this + 0x10) +
                            ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8) + 4 +
                  ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 8) & 0x7fffffff) ==
        uVar3) {
      pthread_mutex_unlock(__mutex);
      (**(code **)(*(long *)this + 0x2e0))(this,param_2);
      return 1;
    }
    pthread_mutex_unlock(__mutex);
    if (*(uint *)(this + 0x7c) <= uVar2) {
      return 0;
    }
  }
  else {
    pthread_mutex_unlock(__mutex);
    if (*(uint *)(this + 0x7c) <= uVar2) {
      return 0;
    }
    if (param_2 >> 0x20 == 0x7fffffff) {
      return 0;
    }
  }
  if ((*(uint *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x78)) * 0x10 +
                 *(long *)(*(long *)(this + 0x68) +
                          ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x78)) * 8) + 8) &
      0x7fffffff) != uVar3) {
    return 0;
  }
  (**(code **)(*(long *)this + 0x378))(this,param_2);
  return 1;
}



/* RendererDummy::LightStorage::~LightStorage() */

void __thiscall RendererDummy::LightStorage::~LightStorage(LightStorage *this)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  uVar3 = *(uint *)(this + 0x80);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__LightStorage_00102de8;
  singleton = 0;
  *(undefined ***)(this + 0x60) = &PTR__RID_Alloc_00102dc8;
  if (uVar3 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String_conflict *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String_conflict *)&local_48);
    pcVar5 = local_48;
    lVar6 = local_50;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
        lVar6 = local_50;
      }
    }
    local_50 = lVar6;
    if (lVar6 != 0) {
      LOCK();
      plVar1 = (long *)(lVar6 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  uVar3 = *(uint *)(this + 0x7c);
  uVar4 = *(uint *)(this + 0x78);
  if (uVar4 <= uVar3) {
    lVar6 = 0;
    do {
      Memory::free_static(*(void **)(*(long *)(this + 0x68) + lVar6 * 8),false);
      lVar2 = lVar6 * 8;
      lVar6 = lVar6 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x70) + lVar2),false);
    } while ((uint)lVar6 < uVar3 / uVar4);
  }
  if (*(void **)(this + 0x68) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 0x68),false);
    Memory::free_static(*(void **)(this + 0x70),false);
  }
  *(undefined ***)(this + 8) = &PTR__RID_Alloc_00102da8;
  uVar3 = *(uint *)(this + 0x28);
  if (uVar3 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String_conflict *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String_conflict *)&local_48);
    pcVar5 = local_48;
    lVar6 = local_50;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
        lVar6 = local_50;
      }
    }
    local_50 = lVar6;
    if (lVar6 != 0) {
      LOCK();
      plVar1 = (long *)(lVar6 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  uVar3 = *(uint *)(this + 0x24);
  uVar4 = *(uint *)(this + 0x20);
  if (uVar4 <= uVar3) {
    lVar6 = 0;
    do {
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar6 * 8),false);
      lVar2 = lVar6 * 8;
      lVar6 = lVar6 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x18) + lVar2),false);
    } while ((uint)lVar6 < uVar3 / uVar4);
  }
  if (*(void **)(this + 0x10) == (void *)0x0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    Memory::free_static(*(void **)(this + 0x10),false);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(*(void **)(this + 0x18),false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererDummy::LightStorage::~LightStorage() */

void __thiscall RendererDummy::LightStorage::~LightStorage(LightStorage *this)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  uVar3 = *(uint *)(this + 0x80);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__LightStorage_00102de8;
  singleton = 0;
  *(undefined ***)(this + 0x60) = &PTR__RID_Alloc_00102dc8;
  if (uVar3 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String_conflict *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String_conflict *)&local_48);
    pcVar5 = local_48;
    lVar6 = local_50;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
        lVar6 = local_50;
      }
    }
    local_50 = lVar6;
    if (lVar6 != 0) {
      LOCK();
      plVar1 = (long *)(lVar6 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  uVar3 = *(uint *)(this + 0x7c);
  uVar4 = *(uint *)(this + 0x78);
  if (uVar4 <= uVar3) {
    lVar6 = 0;
    do {
      Memory::free_static(*(void **)(*(long *)(this + 0x68) + lVar6 * 8),false);
      lVar2 = lVar6 * 8;
      lVar6 = lVar6 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x70) + lVar2),false);
    } while ((uint)lVar6 < uVar3 / uVar4);
  }
  if (*(void **)(this + 0x68) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 0x68),false);
    Memory::free_static(*(void **)(this + 0x70),false);
  }
  *(undefined ***)(this + 8) = &PTR__RID_Alloc_00102da8;
  uVar3 = *(uint *)(this + 0x28);
  if (uVar3 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String_conflict *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String_conflict *)&local_48);
    pcVar5 = local_48;
    lVar6 = local_50;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
        lVar6 = local_50;
      }
    }
    local_50 = lVar6;
    if (lVar6 != 0) {
      LOCK();
      plVar1 = (long *)(lVar6 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  uVar3 = *(uint *)(this + 0x24);
  uVar4 = *(uint *)(this + 0x20);
  if (uVar4 <= uVar3) {
    lVar6 = 0;
    do {
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar6 * 8),false);
      lVar2 = lVar6 * 8;
      lVar6 = lVar6 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x18) + lVar2),false);
    } while ((uint)lVar6 < uVar3 / uVar4);
  }
  if (*(void **)(this + 0x10) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 0x10),false);
    Memory::free_static(*(void **)(this + 0x18),false);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  operator_delete(this,0xb8);
  return;
}



/* RendererDummy::LightStorage::lightmap_instance_create(RID) */

void __thiscall
RendererDummy::LightStorage::lightmap_instance_create(LightStorage *this,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = param_2;
  RID_Alloc<RendererDummy::LightStorage::LightmapInstance,false>::make_rid
            ((RID_Alloc<RendererDummy::LightStorage::LightmapInstance,false> *)(this + 0x60),
             (LightmapInstance *)&local_18);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererDummy::LightStorage::lightmap_allocate() */

void __thiscall RendererDummy::LightStorage::lightmap_allocate(LightStorage *this)

{
  RID_Alloc<RendererDummy::LightStorage::Lightmap,true>::allocate_rid
            ((RID_Alloc<RendererDummy::LightStorage::Lightmap,true> *)(this + 8));
  return;
}



/* RendererLightStorage::light_instances_can_render_shadow_cube() const */

undefined8 RendererLightStorage::light_instances_can_render_shadow_cube(void)

{
  return 1;
}



/* RendererDummy::LightStorage::directional_light_allocate() */

undefined8 RendererDummy::LightStorage::directional_light_allocate(void)

{
  return 0;
}



/* RendererDummy::LightStorage::directional_light_initialize(RID) */

void RendererDummy::LightStorage::directional_light_initialize(void)

{
  return;
}



/* RendererDummy::LightStorage::omni_light_allocate() */

undefined8 RendererDummy::LightStorage::omni_light_allocate(void)

{
  return 0;
}



/* RendererDummy::LightStorage::omni_light_initialize(RID) */

void RendererDummy::LightStorage::omni_light_initialize(void)

{
  return;
}



/* RendererDummy::LightStorage::spot_light_allocate() */

undefined8 RendererDummy::LightStorage::spot_light_allocate(void)

{
  return 0;
}



/* RendererDummy::LightStorage::spot_light_initialize(RID) */

void RendererDummy::LightStorage::spot_light_initialize(void)

{
  return;
}



/* RendererDummy::LightStorage::light_free(RID) */

void RendererDummy::LightStorage::light_free(void)

{
  return;
}



/* RendererDummy::LightStorage::light_set_color(RID, Color const&) */

void RendererDummy::LightStorage::light_set_color(void)

{
  return;
}



/* RendererDummy::LightStorage::light_set_param(RID, RenderingServer::LightParam, float) */

void RendererDummy::LightStorage::light_set_param(void)

{
  return;
}



/* RendererDummy::LightStorage::light_set_shadow(RID, bool) */

void RendererDummy::LightStorage::light_set_shadow(void)

{
  return;
}



/* RendererDummy::LightStorage::light_set_projector(RID, RID) */

void RendererDummy::LightStorage::light_set_projector(void)

{
  return;
}



/* RendererDummy::LightStorage::light_set_negative(RID, bool) */

void RendererDummy::LightStorage::light_set_negative(void)

{
  return;
}



/* RendererDummy::LightStorage::light_set_cull_mask(RID, unsigned int) */

void RendererDummy::LightStorage::light_set_cull_mask(void)

{
  return;
}



/* RendererDummy::LightStorage::light_set_distance_fade(RID, bool, float, float, float) */

void RendererDummy::LightStorage::light_set_distance_fade(void)

{
  return;
}



/* RendererDummy::LightStorage::light_set_reverse_cull_face_mode(RID, bool) */

void RendererDummy::LightStorage::light_set_reverse_cull_face_mode(void)

{
  return;
}



/* RendererDummy::LightStorage::light_set_shadow_caster_mask(RID, unsigned int) */

void RendererDummy::LightStorage::light_set_shadow_caster_mask(void)

{
  return;
}



/* RendererDummy::LightStorage::light_get_shadow_caster_mask(RID) const */

undefined8 RendererDummy::LightStorage::light_get_shadow_caster_mask(void)

{
  return 0xffffffff;
}



/* RendererDummy::LightStorage::light_set_bake_mode(RID, RenderingServer::LightBakeMode) */

void RendererDummy::LightStorage::light_set_bake_mode(void)

{
  return;
}



/* RendererDummy::LightStorage::light_set_max_sdfgi_cascade(RID, unsigned int) */

void RendererDummy::LightStorage::light_set_max_sdfgi_cascade(void)

{
  return;
}



/* RendererDummy::LightStorage::light_omni_set_shadow_mode(RID,
   RenderingServer::LightOmniShadowMode) */

void RendererDummy::LightStorage::light_omni_set_shadow_mode(void)

{
  return;
}



/* RendererDummy::LightStorage::light_directional_set_shadow_mode(RID,
   RenderingServer::LightDirectionalShadowMode) */

void RendererDummy::LightStorage::light_directional_set_shadow_mode(void)

{
  return;
}



/* RendererDummy::LightStorage::light_directional_set_blend_splits(RID, bool) */

void RendererDummy::LightStorage::light_directional_set_blend_splits(void)

{
  return;
}



/* RendererDummy::LightStorage::light_directional_get_blend_splits(RID) const */

undefined8 RendererDummy::LightStorage::light_directional_get_blend_splits(void)

{
  return 0;
}



/* RendererDummy::LightStorage::light_directional_set_sky_mode(RID,
   RenderingServer::LightDirectionalSkyMode) */

void RendererDummy::LightStorage::light_directional_set_sky_mode(void)

{
  return;
}



/* RendererDummy::LightStorage::light_directional_get_sky_mode(RID) const */

undefined8 RendererDummy::LightStorage::light_directional_get_sky_mode(void)

{
  return 0;
}



/* RendererDummy::LightStorage::light_directional_get_shadow_mode(RID) */

undefined8 RendererDummy::LightStorage::light_directional_get_shadow_mode(void)

{
  return 0;
}



/* RendererDummy::LightStorage::light_omni_get_shadow_mode(RID) */

undefined8 RendererDummy::LightStorage::light_omni_get_shadow_mode(void)

{
  return 0;
}



/* RendererDummy::LightStorage::light_has_shadow(RID) const */

undefined8 RendererDummy::LightStorage::light_has_shadow(void)

{
  return 0;
}



/* RendererDummy::LightStorage::light_has_projector(RID) const */

undefined8 RendererDummy::LightStorage::light_has_projector(void)

{
  return 0;
}



/* RendererDummy::LightStorage::light_get_type(RID) const */

undefined8 RendererDummy::LightStorage::light_get_type(void)

{
  return 1;
}



/* RendererDummy::LightStorage::light_get_aabb(RID) const */

undefined8 * RendererDummy::LightStorage::light_get_aabb(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return param_1;
}



/* RendererDummy::LightStorage::light_get_param(RID, RenderingServer::LightParam) */

undefined8 RendererDummy::LightStorage::light_get_param(void)

{
  return 0;
}



/* RendererDummy::LightStorage::light_get_color(RID) */

undefined1  [16] RendererDummy::LightStorage::light_get_color(void)

{
  return ZEXT816(0x3f80000000000000) << 0x40;
}



/* RendererDummy::LightStorage::light_get_reverse_cull_face_mode(RID) const */

undefined8 RendererDummy::LightStorage::light_get_reverse_cull_face_mode(void)

{
  return 0;
}



/* RendererDummy::LightStorage::light_get_bake_mode(RID) */

undefined8 RendererDummy::LightStorage::light_get_bake_mode(void)

{
  return 0;
}



/* RendererDummy::LightStorage::light_get_max_sdfgi_cascade(RID) */

undefined8 RendererDummy::LightStorage::light_get_max_sdfgi_cascade(void)

{
  return 0;
}



/* RendererDummy::LightStorage::light_get_version(RID) const */

undefined8 RendererDummy::LightStorage::light_get_version(void)

{
  return 0;
}



/* RendererDummy::LightStorage::light_get_cull_mask(RID) const */

undefined8 RendererDummy::LightStorage::light_get_cull_mask(void)

{
  return 0;
}



/* RendererDummy::LightStorage::light_instance_create(RID) */

undefined8 RendererDummy::LightStorage::light_instance_create(void)

{
  return 0;
}



/* RendererDummy::LightStorage::light_instance_free(RID) */

void RendererDummy::LightStorage::light_instance_free(void)

{
  return;
}



/* RendererDummy::LightStorage::light_instance_set_transform(RID, Transform3D const&) */

void RendererDummy::LightStorage::light_instance_set_transform(void)

{
  return;
}



/* RendererDummy::LightStorage::light_instance_set_aabb(RID, AABB const&) */

void RendererDummy::LightStorage::light_instance_set_aabb(void)

{
  return;
}



/* RendererDummy::LightStorage::light_instance_set_shadow_transform(RID, Projection const&,
   Transform3D const&, float, float, int, float, float, float, Vector2 const&) */

void RendererDummy::LightStorage::light_instance_set_shadow_transform(void)

{
  return;
}



/* RendererDummy::LightStorage::light_instance_mark_visible(RID) */

void RendererDummy::LightStorage::light_instance_mark_visible(void)

{
  return;
}



/* RendererDummy::LightStorage::light_instance_is_shadow_visible_at_position(RID, Vector3 const&)
   const */

undefined8 RendererDummy::LightStorage::light_instance_is_shadow_visible_at_position(void)

{
  return 0;
}



/* RendererDummy::LightStorage::reflection_probe_allocate() */

undefined8 RendererDummy::LightStorage::reflection_probe_allocate(void)

{
  return 0;
}



/* RendererDummy::LightStorage::reflection_probe_initialize(RID) */

void RendererDummy::LightStorage::reflection_probe_initialize(void)

{
  return;
}



/* RendererDummy::LightStorage::reflection_probe_free(RID) */

void RendererDummy::LightStorage::reflection_probe_free(void)

{
  return;
}



/* RendererDummy::LightStorage::reflection_probe_set_update_mode(RID,
   RenderingServer::ReflectionProbeUpdateMode) */

void RendererDummy::LightStorage::reflection_probe_set_update_mode(void)

{
  return;
}



/* RendererDummy::LightStorage::reflection_probe_set_intensity(RID, float) */

void RendererDummy::LightStorage::reflection_probe_set_intensity(void)

{
  return;
}



/* RendererDummy::LightStorage::reflection_probe_set_blend_distance(RID, float) */

void RendererDummy::LightStorage::reflection_probe_set_blend_distance(void)

{
  return;
}



/* RendererDummy::LightStorage::reflection_probe_set_ambient_mode(RID,
   RenderingServer::ReflectionProbeAmbientMode) */

void RendererDummy::LightStorage::reflection_probe_set_ambient_mode(void)

{
  return;
}



/* RendererDummy::LightStorage::reflection_probe_set_ambient_color(RID, Color const&) */

void RendererDummy::LightStorage::reflection_probe_set_ambient_color(void)

{
  return;
}



/* RendererDummy::LightStorage::reflection_probe_set_ambient_energy(RID, float) */

void RendererDummy::LightStorage::reflection_probe_set_ambient_energy(void)

{
  return;
}



/* RendererDummy::LightStorage::reflection_probe_set_max_distance(RID, float) */

void RendererDummy::LightStorage::reflection_probe_set_max_distance(void)

{
  return;
}



/* RendererDummy::LightStorage::reflection_probe_set_size(RID, Vector3 const&) */

void RendererDummy::LightStorage::reflection_probe_set_size(void)

{
  return;
}



/* RendererDummy::LightStorage::reflection_probe_set_origin_offset(RID, Vector3 const&) */

void RendererDummy::LightStorage::reflection_probe_set_origin_offset(void)

{
  return;
}



/* RendererDummy::LightStorage::reflection_probe_set_as_interior(RID, bool) */

void RendererDummy::LightStorage::reflection_probe_set_as_interior(void)

{
  return;
}



/* RendererDummy::LightStorage::reflection_probe_set_enable_box_projection(RID, bool) */

void RendererDummy::LightStorage::reflection_probe_set_enable_box_projection(void)

{
  return;
}



/* RendererDummy::LightStorage::reflection_probe_set_enable_shadows(RID, bool) */

void RendererDummy::LightStorage::reflection_probe_set_enable_shadows(void)

{
  return;
}



/* RendererDummy::LightStorage::reflection_probe_set_cull_mask(RID, unsigned int) */

void RendererDummy::LightStorage::reflection_probe_set_cull_mask(void)

{
  return;
}



/* RendererDummy::LightStorage::reflection_probe_set_reflection_mask(RID, unsigned int) */

void RendererDummy::LightStorage::reflection_probe_set_reflection_mask(void)

{
  return;
}



/* RendererDummy::LightStorage::reflection_probe_set_resolution(RID, int) */

void RendererDummy::LightStorage::reflection_probe_set_resolution(void)

{
  return;
}



/* RendererDummy::LightStorage::reflection_probe_set_mesh_lod_threshold(RID, float) */

void RendererDummy::LightStorage::reflection_probe_set_mesh_lod_threshold(void)

{
  return;
}



/* RendererDummy::LightStorage::reflection_probe_get_mesh_lod_threshold(RID) const */

undefined8 RendererDummy::LightStorage::reflection_probe_get_mesh_lod_threshold(void)

{
  return 0;
}



/* RendererDummy::LightStorage::reflection_probe_get_aabb(RID) const */

undefined8 * RendererDummy::LightStorage::reflection_probe_get_aabb(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return param_1;
}



/* RendererDummy::LightStorage::reflection_probe_get_update_mode(RID) const */

undefined8 RendererDummy::LightStorage::reflection_probe_get_update_mode(void)

{
  return 0;
}



/* RendererDummy::LightStorage::reflection_probe_get_cull_mask(RID) const */

undefined8 RendererDummy::LightStorage::reflection_probe_get_cull_mask(void)

{
  return 0;
}



/* RendererDummy::LightStorage::reflection_probe_get_reflection_mask(RID) const */

undefined8 RendererDummy::LightStorage::reflection_probe_get_reflection_mask(void)

{
  return 0;
}



/* RendererDummy::LightStorage::reflection_probe_get_size(RID) const */

undefined1  [16] RendererDummy::LightStorage::reflection_probe_get_size(void)

{
  long in_FS_OFFSET;
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return ZEXT816(0);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererDummy::LightStorage::reflection_probe_get_origin_offset(RID) const */

undefined1  [16] RendererDummy::LightStorage::reflection_probe_get_origin_offset(void)

{
  long in_FS_OFFSET;
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return ZEXT816(0);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererDummy::LightStorage::reflection_probe_get_origin_max_distance(RID) const */

undefined8 RendererDummy::LightStorage::reflection_probe_get_origin_max_distance(void)

{
  return 0;
}



/* RendererDummy::LightStorage::reflection_probe_renders_shadows(RID) const */

undefined8 RendererDummy::LightStorage::reflection_probe_renders_shadows(void)

{
  return 0;
}



/* RendererDummy::LightStorage::reflection_atlas_create() */

undefined8 RendererDummy::LightStorage::reflection_atlas_create(void)

{
  return 0;
}



/* RendererDummy::LightStorage::reflection_atlas_free(RID) */

void RendererDummy::LightStorage::reflection_atlas_free(void)

{
  return;
}



/* RendererDummy::LightStorage::reflection_atlas_get_size(RID) const */

undefined8 RendererDummy::LightStorage::reflection_atlas_get_size(void)

{
  return 0;
}



/* RendererDummy::LightStorage::reflection_atlas_set_size(RID, int, int) */

void RendererDummy::LightStorage::reflection_atlas_set_size(void)

{
  return;
}



/* RendererDummy::LightStorage::reflection_probe_instance_create(RID) */

undefined8 RendererDummy::LightStorage::reflection_probe_instance_create(void)

{
  return 0;
}



/* RendererDummy::LightStorage::reflection_probe_instance_free(RID) */

void RendererDummy::LightStorage::reflection_probe_instance_free(void)

{
  return;
}



/* RendererDummy::LightStorage::reflection_probe_instance_set_transform(RID, Transform3D const&) */

void RendererDummy::LightStorage::reflection_probe_instance_set_transform(void)

{
  return;
}



/* RendererDummy::LightStorage::reflection_probe_has_atlas_index(RID) */

undefined8 RendererDummy::LightStorage::reflection_probe_has_atlas_index(void)

{
  return 0;
}



/* RendererDummy::LightStorage::reflection_probe_release_atlas_index(RID) */

void RendererDummy::LightStorage::reflection_probe_release_atlas_index(void)

{
  return;
}



/* RendererDummy::LightStorage::reflection_probe_instance_needs_redraw(RID) */

undefined8 RendererDummy::LightStorage::reflection_probe_instance_needs_redraw(void)

{
  return 0;
}



/* RendererDummy::LightStorage::reflection_probe_instance_has_reflection(RID) */

undefined8 RendererDummy::LightStorage::reflection_probe_instance_has_reflection(void)

{
  return 0;
}



/* RendererDummy::LightStorage::reflection_probe_instance_begin_render(RID, RID) */

undefined8 RendererDummy::LightStorage::reflection_probe_instance_begin_render(void)

{
  return 0;
}



/* RendererDummy::LightStorage::reflection_probe_atlas_get_render_buffers(RID) */

undefined8 *
RendererDummy::LightStorage::reflection_probe_atlas_get_render_buffers(undefined8 *param_1)

{
  *param_1 = 0;
  return param_1;
}



/* RendererDummy::LightStorage::reflection_probe_instance_postprocess_step(RID) */

undefined8 RendererDummy::LightStorage::reflection_probe_instance_postprocess_step(void)

{
  return 1;
}



/* RendererDummy::LightStorage::lightmap_set_textures(RID, RID, bool) */

void RendererDummy::LightStorage::lightmap_set_textures(void)

{
  return;
}



/* RendererDummy::LightStorage::lightmap_set_probe_bounds(RID, AABB const&) */

void RendererDummy::LightStorage::lightmap_set_probe_bounds(void)

{
  return;
}



/* RendererDummy::LightStorage::lightmap_set_probe_interior(RID, bool) */

void RendererDummy::LightStorage::lightmap_set_probe_interior(void)

{
  return;
}



/* RendererDummy::LightStorage::lightmap_set_probe_capture_data(RID, Vector<Vector3> const&,
   Vector<Color> const&, Vector<int> const&, Vector<int> const&) */

void RendererDummy::LightStorage::lightmap_set_probe_capture_data(void)

{
  return;
}



/* RendererDummy::LightStorage::lightmap_set_baked_exposure_normalization(RID, float) */

void RendererDummy::LightStorage::lightmap_set_baked_exposure_normalization(void)

{
  return;
}



/* RendererDummy::LightStorage::lightmap_get_probe_capture_points(RID) const */

long RendererDummy::LightStorage::lightmap_get_probe_capture_points(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}



/* RendererDummy::LightStorage::lightmap_get_probe_capture_sh(RID) const */

long RendererDummy::LightStorage::lightmap_get_probe_capture_sh(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}



/* RendererDummy::LightStorage::lightmap_get_probe_capture_tetrahedra(RID) const */

long RendererDummy::LightStorage::lightmap_get_probe_capture_tetrahedra(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}



/* RendererDummy::LightStorage::lightmap_get_probe_capture_bsp_tree(RID) const */

long RendererDummy::LightStorage::lightmap_get_probe_capture_bsp_tree(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}



/* RendererDummy::LightStorage::lightmap_get_aabb(RID) const */

undefined8 * RendererDummy::LightStorage::lightmap_get_aabb(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return param_1;
}



/* RendererDummy::LightStorage::lightmap_tap_sh_light(RID, Vector3 const&, Color*) */

void RendererDummy::LightStorage::lightmap_tap_sh_light(void)

{
  return;
}



/* RendererDummy::LightStorage::lightmap_is_interior(RID) const */

undefined8 RendererDummy::LightStorage::lightmap_is_interior(void)

{
  return 0;
}



/* RendererDummy::LightStorage::lightmap_set_probe_capture_update_speed(float) */

void RendererDummy::LightStorage::lightmap_set_probe_capture_update_speed(float param_1)

{
  return;
}



/* RendererDummy::LightStorage::lightmap_get_probe_capture_update_speed() const */

undefined8 RendererDummy::LightStorage::lightmap_get_probe_capture_update_speed(void)

{
  return 0;
}



/* RendererDummy::LightStorage::lightmap_set_shadowmask_textures(RID, RID) */

void RendererDummy::LightStorage::lightmap_set_shadowmask_textures(void)

{
  return;
}



/* RendererDummy::LightStorage::lightmap_get_shadowmask_mode(RID) */

undefined8 RendererDummy::LightStorage::lightmap_get_shadowmask_mode(void)

{
  return 0;
}



/* RendererDummy::LightStorage::lightmap_set_shadowmask_mode(RID, RenderingServer::ShadowmaskMode)
    */

void RendererDummy::LightStorage::lightmap_set_shadowmask_mode(void)

{
  return;
}



/* RendererDummy::LightStorage::lightmap_instance_set_transform(RID, Transform3D const&) */

void RendererDummy::LightStorage::lightmap_instance_set_transform(void)

{
  return;
}



/* RendererDummy::LightStorage::shadow_atlas_create() */

undefined8 RendererDummy::LightStorage::shadow_atlas_create(void)

{
  return 0;
}



/* RendererDummy::LightStorage::shadow_atlas_free(RID) */

void RendererDummy::LightStorage::shadow_atlas_free(void)

{
  return;
}



/* RendererDummy::LightStorage::shadow_atlas_set_size(RID, int, bool) */

void RendererDummy::LightStorage::shadow_atlas_set_size(void)

{
  return;
}



/* RendererDummy::LightStorage::shadow_atlas_set_quadrant_subdivision(RID, int, int) */

void RendererDummy::LightStorage::shadow_atlas_set_quadrant_subdivision(void)

{
  return;
}



/* RendererDummy::LightStorage::shadow_atlas_update_light(RID, RID, float, unsigned long) */

undefined8 RendererDummy::LightStorage::shadow_atlas_update_light(void)

{
  return 0;
}



/* RendererDummy::LightStorage::shadow_atlas_update(RID) */

void RendererDummy::LightStorage::shadow_atlas_update(void)

{
  return;
}



/* RendererDummy::LightStorage::directional_shadow_atlas_set_size(int, bool) */

void RendererDummy::LightStorage::directional_shadow_atlas_set_size(int param_1,bool param_2)

{
  return;
}



/* RendererDummy::LightStorage::get_directional_light_shadow_size(RID) */

undefined8 RendererDummy::LightStorage::get_directional_light_shadow_size(void)

{
  return 0;
}



/* RendererDummy::LightStorage::set_directional_shadow_count(int) */

void RendererDummy::LightStorage::set_directional_shadow_count(int param_1)

{
  return;
}



/* WARNING: Removing unreachable block (ram,0x00101700) */
/* WARNING: Removing unreachable block (ram,0x00101830) */
/* WARNING: Removing unreachable block (ram,0x001019a9) */
/* WARNING: Removing unreachable block (ram,0x0010183c) */
/* WARNING: Removing unreachable block (ram,0x00101846) */
/* WARNING: Removing unreachable block (ram,0x0010198b) */
/* WARNING: Removing unreachable block (ram,0x00101852) */
/* WARNING: Removing unreachable block (ram,0x0010185c) */
/* WARNING: Removing unreachable block (ram,0x0010196d) */
/* WARNING: Removing unreachable block (ram,0x00101868) */
/* WARNING: Removing unreachable block (ram,0x00101872) */
/* WARNING: Removing unreachable block (ram,0x0010194f) */
/* WARNING: Removing unreachable block (ram,0x0010187e) */
/* WARNING: Removing unreachable block (ram,0x00101888) */
/* WARNING: Removing unreachable block (ram,0x00101931) */
/* WARNING: Removing unreachable block (ram,0x00101894) */
/* WARNING: Removing unreachable block (ram,0x0010189e) */
/* WARNING: Removing unreachable block (ram,0x00101913) */
/* WARNING: Removing unreachable block (ram,0x001018a6) */
/* WARNING: Removing unreachable block (ram,0x001018b0) */
/* WARNING: Removing unreachable block (ram,0x001018f8) */
/* WARNING: Removing unreachable block (ram,0x001018b8) */
/* WARNING: Removing unreachable block (ram,0x001018ce) */
/* WARNING: Removing unreachable block (ram,0x001018da) */
/* String vformat<unsigned int, char const*>(String const&, unsigned int const, char const* const)
    */

String_conflict *
vformat<unsigned_int,char_const*>(String_conflict *param_1,uint param_2,char *param_3)

{
  Variant *pVVar1;
  Variant *pVVar2;
  char *in_RCX;
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
  Variant::Variant(local_88,(uint)param_3);
  Variant::Variant(local_70,in_RCX);
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



/* RID_Alloc<RendererDummy::LightStorage::Lightmap, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererDummy::LightStorage::Lightmap,true>::~RID_Alloc
          (RID_Alloc<RendererDummy::LightStorage::Lightmap,true> *this)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_00102da8;
  uVar3 = *(uint *)(this + 0x20);
  if (uVar3 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String_conflict *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String_conflict *)&local_48);
    pcVar5 = local_48;
    lVar6 = local_50;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
        lVar6 = local_50;
      }
    }
    local_50 = lVar6;
    if (lVar6 != 0) {
      LOCK();
      plVar1 = (long *)(lVar6 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  uVar3 = *(uint *)(this + 0x1c);
  uVar4 = *(uint *)(this + 0x18);
  if (uVar4 <= uVar3) {
    lVar6 = 0;
    do {
      Memory::free_static(*(void **)(*(long *)(this + 8) + lVar6 * 8),false);
      lVar2 = lVar6 * 8;
      lVar6 = lVar6 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar2),false);
    } while ((uint)lVar6 < uVar3 / uVar4);
  }
  if (*(void **)(this + 8) == (void *)0x0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    Memory::free_static(*(void **)(this + 8),false);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(*(void **)(this + 0x10),false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RID_Alloc<RendererDummy::LightStorage::LightmapInstance, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererDummy::LightStorage::LightmapInstance,false>::~RID_Alloc
          (RID_Alloc<RendererDummy::LightStorage::LightmapInstance,false> *this)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  uVar3 = *(uint *)(this + 0x20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_00102dc8;
  if (uVar3 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String_conflict *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String_conflict *)&local_48);
    pcVar5 = local_48;
    lVar6 = local_50;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
        lVar6 = local_50;
      }
    }
    local_50 = lVar6;
    if (lVar6 != 0) {
      LOCK();
      plVar1 = (long *)(lVar6 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  uVar3 = *(uint *)(this + 0x1c);
  uVar4 = *(uint *)(this + 0x18);
  if (uVar4 <= uVar3) {
    lVar6 = 0;
    do {
      Memory::free_static(*(void **)(*(long *)(this + 8) + lVar6 * 8),false);
      lVar2 = lVar6 * 8;
      lVar6 = lVar6 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar2),false);
    } while ((uint)lVar6 < uVar3 / uVar4);
  }
  if (*(void **)(this + 8) == (void *)0x0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    Memory::free_static(*(void **)(this + 8),false);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(*(void **)(this + 0x10),false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RID_Alloc<RendererDummy::LightStorage::LightmapInstance, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererDummy::LightStorage::LightmapInstance,false>::~RID_Alloc
          (RID_Alloc<RendererDummy::LightStorage::LightmapInstance,false> *this)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  uVar3 = *(uint *)(this + 0x20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_00102dc8;
  if (uVar3 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String_conflict *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String_conflict *)&local_48);
    pcVar5 = local_48;
    lVar6 = local_50;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
        lVar6 = local_50;
      }
    }
    local_50 = lVar6;
    if (lVar6 != 0) {
      LOCK();
      plVar1 = (long *)(lVar6 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  uVar3 = *(uint *)(this + 0x1c);
  uVar4 = *(uint *)(this + 0x18);
  if (uVar4 <= uVar3) {
    lVar6 = 0;
    do {
      Memory::free_static(*(void **)(*(long *)(this + 8) + lVar6 * 8),false);
      lVar2 = lVar6 * 8;
      lVar6 = lVar6 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar2),false);
    } while ((uint)lVar6 < uVar3 / uVar4);
  }
  if (*(void **)(this + 8) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 8),false);
    Memory::free_static(*(void **)(this + 0x10),false);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  operator_delete(this,0x58);
  return;
}



/* RID_Alloc<RendererDummy::LightStorage::Lightmap, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererDummy::LightStorage::Lightmap,true>::~RID_Alloc
          (RID_Alloc<RendererDummy::LightStorage::Lightmap,true> *this)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_00102da8;
  uVar3 = *(uint *)(this + 0x20);
  if (uVar3 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String_conflict *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String_conflict *)&local_48);
    pcVar5 = local_48;
    lVar6 = local_50;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
        lVar6 = local_50;
      }
    }
    local_50 = lVar6;
    if (lVar6 != 0) {
      LOCK();
      plVar1 = (long *)(lVar6 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  uVar3 = *(uint *)(this + 0x1c);
  uVar4 = *(uint *)(this + 0x18);
  if (uVar4 <= uVar3) {
    lVar6 = 0;
    do {
      Memory::free_static(*(void **)(*(long *)(this + 8) + lVar6 * 8),false);
      lVar2 = lVar6 * 8;
      lVar6 = lVar6 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar2),false);
    } while ((uint)lVar6 < uVar3 / uVar4);
  }
  if (*(void **)(this + 8) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 8),false);
    Memory::free_static(*(void **)(this + 0x10),false);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  operator_delete(this,0x58);
  return;
}



/* RID_Alloc<RendererDummy::LightStorage::LightmapInstance,
   false>::make_rid(RendererDummy::LightStorage::LightmapInstance const&) */

ulong __thiscall
RID_Alloc<RendererDummy::LightStorage::LightmapInstance,false>::make_rid
          (RID_Alloc<RendererDummy::LightStorage::LightmapInstance,false> *this,
          LightmapInstance *param_1)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  char *pcVar15;
  ulong uVar16;
  
  uVar13 = *(uint *)(this + 0x20);
  if (uVar13 == *(uint *)(this + 0x1c)) {
    if (uVar13 == 0) {
      lVar12 = 0;
      uVar16 = 8;
    }
    else {
      uVar16 = (ulong)((int)((ulong)uVar13 / (ulong)*(uint *)(this + 0x18)) + 1) << 3;
      lVar12 = ((ulong)uVar13 / (ulong)*(uint *)(this + 0x18)) * 8;
    }
    lVar5 = Memory::realloc_static(*(void **)(this + 8),uVar16,false);
    *(long *)(this + 8) = lVar5;
    uVar11 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) << 4,false);
    pvVar2 = *(void **)(this + 0x10);
    *(undefined8 *)(lVar5 + lVar12) = uVar11;
    lVar5 = Memory::realloc_static(pvVar2,uVar16,false);
    *(long *)(this + 0x10) = lVar5;
    uVar11 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) << 2,false);
    iVar1 = *(int *)(this + 0x18);
    *(undefined8 *)(lVar5 + lVar12) = uVar11;
    if (iVar1 == 0) {
      lVar5 = *(long *)(this + 0x10);
      uVar7 = 0;
    }
    else {
      lVar5 = *(long *)(this + 0x10);
      lVar3 = *(long *)(lVar5 + lVar12);
      lVar12 = *(long *)(*(long *)(this + 8) + lVar12);
      lVar6 = 0;
      do {
        *(undefined4 *)(lVar12 + 8 + lVar6 * 0x10) = 0xffffffff;
        *(int *)(lVar3 + lVar6 * 4) = *(int *)(this + 0x20) + (int)lVar6;
        uVar7 = *(uint *)(this + 0x18);
        lVar6 = lVar6 + 1;
      } while ((uint)lVar6 < uVar7);
    }
    *(uint *)(this + 0x1c) = *(int *)(this + 0x1c) + uVar7;
    uVar13 = *(uint *)(this + 0x20);
  }
  else {
    lVar5 = *(long *)(this + 0x10);
    uVar7 = *(uint *)(this + 0x18);
  }
  uVar13 = *(uint *)(*(long *)(lVar5 + ((ulong)uVar13 / (ulong)uVar7) * 8) +
                    ((ulong)uVar13 % (ulong)uVar7) * 4);
  uVar16 = (ulong)uVar13;
  LOCK();
  UNLOCK();
  uVar8 = (int)RID_AllocBase::base_id + 1;
  uVar9 = uVar8 & 0x7fffffff;
  if (uVar9 != 0x7fffffff) {
    lVar12 = *(long *)(this + 8);
    RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
    *(uint *)((uVar16 % (ulong)uVar7) * 0x10 + *(long *)(lVar12 + (uVar16 / uVar7) * 8) + 8) =
         uVar9 | 0x80000000;
    *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
    uVar14 = CONCAT44(uVar8,uVar13) & 0x7fffffffffffffff;
    if ((uVar14 != 0) && ((uint)uVar14 < *(uint *)(this + 0x1c))) {
      puVar10 = (undefined8 *)
                ((uVar16 % (ulong)*(uint *)(this + 0x18)) * 0x10 +
                *(long *)(lVar12 + (uVar16 / *(uint *)(this + 0x18)) * 8));
      if ((int)*(uint *)(puVar10 + 1) < 0) {
        uVar13 = (uint)(uVar14 >> 0x20);
        if (uVar13 == (*(uint *)(puVar10 + 1) & 0x7fffffff)) {
          uVar11 = *(undefined8 *)param_1;
          *(uint *)(puVar10 + 1) = uVar13;
          *puVar10 = uVar11;
          return uVar14;
        }
        pcVar15 = "Attempting to initialize the wrong RID";
        uVar11 = 0xfc;
      }
      else {
        pcVar15 = "Initializing already initialized RID";
        uVar11 = 0xf8;
      }
      _err_print_error("get_or_null","./core/templates/rid_owner.h",uVar11,
                       "Method/function failed. Returning: nullptr",pcVar15,0,0);
    }
    _err_print_error("initialize_rid","./core/templates/rid_owner.h",0x128,
                     "Parameter \"mem\" is null.",0,0);
    return uVar14;
  }
  RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
  _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0xa9,
                   "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.",
                   "Overflow in RID validator",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* WARNING: Removing unreachable block (ram,0x001024d8) */
/* WARNING: Removing unreachable block (ram,0x00102608) */
/* WARNING: Removing unreachable block (ram,0x001027d0) */
/* WARNING: Removing unreachable block (ram,0x00102614) */
/* WARNING: Removing unreachable block (ram,0x0010261e) */
/* WARNING: Removing unreachable block (ram,0x001027b0) */
/* WARNING: Removing unreachable block (ram,0x0010262a) */
/* WARNING: Removing unreachable block (ram,0x00102634) */
/* WARNING: Removing unreachable block (ram,0x00102790) */
/* WARNING: Removing unreachable block (ram,0x00102640) */
/* WARNING: Removing unreachable block (ram,0x0010264a) */
/* WARNING: Removing unreachable block (ram,0x00102770) */
/* WARNING: Removing unreachable block (ram,0x00102656) */
/* WARNING: Removing unreachable block (ram,0x00102660) */
/* WARNING: Removing unreachable block (ram,0x00102750) */
/* WARNING: Removing unreachable block (ram,0x0010266c) */
/* WARNING: Removing unreachable block (ram,0x00102676) */
/* WARNING: Removing unreachable block (ram,0x00102730) */
/* WARNING: Removing unreachable block (ram,0x00102682) */
/* WARNING: Removing unreachable block (ram,0x0010268c) */
/* WARNING: Removing unreachable block (ram,0x00102710) */
/* WARNING: Removing unreachable block (ram,0x00102694) */
/* WARNING: Removing unreachable block (ram,0x001026aa) */
/* WARNING: Removing unreachable block (ram,0x001026b6) */
/* String vformat<String>(String const&, String const) */

undefined8 * vformat<String>(undefined8 *param_1,bool *param_2,String_conflict *param_3)

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



/* RID_Alloc<RendererDummy::LightStorage::Lightmap, true>::allocate_rid() */

ulong __thiscall
RID_Alloc<RendererDummy::LightStorage::Lightmap,true>::allocate_rid
          (RID_Alloc<RendererDummy::LightStorage::Lightmap,true> *this)

{
  pthread_mutex_t *__mutex;
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  __mutex = (pthread_mutex_t *)(this + 0x30);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar7 = pthread_mutex_lock(__mutex);
  if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar7);
  }
  uVar8 = *(uint *)(this + 0x20);
  if (uVar8 == *(uint *)(this + 0x1c)) {
    if (uVar8 != 0) {
      uVar8 = uVar8 / *(uint *)(this + 0x18);
    }
    if (*(uint *)(this + 0x24) == uVar8) {
      pthread_mutex_unlock(__mutex);
      pcVar5 = *(char **)(this + 0x28);
      if (pcVar5 == (char *)0x0) {
        uVar13 = 0;
        _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0x85,
                         "Method/function failed. Returning: RID()","Element limit reached.",0,0);
      }
      else {
        local_50 = 0;
        local_40 = strlen(pcVar5);
        local_48 = pcVar5;
        String::parse_latin1((StrRange *)&local_50);
        local_40 = 0x2b;
        local_48 = "Element limit for RID of type \'%s\' reached.";
        local_58 = 0;
        String::parse_latin1((StrRange *)&local_58);
        vformat<String>(&local_48,&local_58,(StrRange *)&local_50);
        _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0x83,
                         "Method/function failed. Returning: RID()",&local_48,0,0);
        pcVar5 = local_48;
        if (local_48 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_48 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_48 = (char *)0x0;
            Memory::free_static(pcVar5 + -0x10,false);
          }
        }
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
        lVar3 = local_50;
        if (local_50 != 0) {
          LOCK();
          plVar1 = (long *)(local_50 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            uVar13 = 0;
            local_50 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
            goto LAB_001029ae;
          }
        }
        uVar13 = 0;
      }
      goto LAB_001029ae;
    }
    lVar3 = *(long *)(this + 8);
    uVar13 = (ulong)uVar8;
    uVar9 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) << 3,false);
    uVar8 = *(uint *)(this + 0x18);
    lVar4 = *(long *)(this + 0x10);
    *(undefined8 *)(lVar3 + uVar13 * 8) = uVar9;
    uVar9 = Memory::alloc_static((ulong)uVar8 << 2,false);
    uVar8 = *(uint *)(this + 0x18);
    *(undefined8 *)(uVar13 * 8 + lVar4) = uVar9;
    if (uVar8 != 0) {
      lVar3 = *(long *)(*(long *)(this + 8) + uVar13 * 8);
      lVar4 = *(long *)(*(long *)(this + 0x10) + uVar13 * 8);
      lVar10 = 0;
      do {
        *(undefined4 *)(lVar3 + 4 + lVar10 * 8) = 0xffffffff;
        *(int *)(lVar4 + lVar10 * 4) = *(int *)(this + 0x20) + (int)lVar10;
        uVar8 = *(uint *)(this + 0x18);
        lVar10 = lVar10 + 1;
      } while ((uint)lVar10 < uVar8);
    }
    *(uint *)(this + 0x1c) = uVar8 + *(int *)(this + 0x1c);
    uVar8 = *(uint *)(this + 0x20);
  }
  uVar2 = *(uint *)(this + 0x18);
  uVar8 = *(uint *)(*(long *)(*(long *)(this + 0x10) + ((ulong)uVar8 / (ulong)uVar2) * 8) +
                   ((ulong)uVar8 % (ulong)uVar2) * 4);
  LOCK();
  UNLOCK();
  uVar11 = (int)RID_AllocBase::base_id + 1;
  uVar12 = uVar11 & 0x7fffffff;
  if (uVar12 == 0x7fffffff) {
    RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
    _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0xa9,
                     "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.",
                     "Overflow in RID validator",0,0);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  uVar13 = CONCAT44(uVar11,uVar8) & 0x7fffffffffffffff;
  RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
  *(uint *)(*(long *)(*(long *)(this + 8) + ((ulong)uVar8 / (ulong)uVar2) * 8) + 4 +
           ((ulong)uVar8 % (ulong)uVar2) * 8) = uVar12 | 0x80000000;
  *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
  pthread_mutex_unlock(__mutex);
LAB_001029ae:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<RendererDummy::LightStorage::LightmapInstance, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererDummy::LightStorage::LightmapInstance,false>::~RID_Alloc
          (RID_Alloc<RendererDummy::LightStorage::LightmapInstance,false> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<RendererDummy::LightStorage::Lightmap, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererDummy::LightStorage::Lightmap,true>::~RID_Alloc
          (RID_Alloc<RendererDummy::LightStorage::Lightmap,true> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


