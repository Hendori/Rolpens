
/* RendererDummy::Utilities::~Utilities() */

void __thiscall RendererDummy::Utilities::~Utilities(Utilities *this)

{
  singleton = 0;
  return;
}



/* RendererDummy::Utilities::free(RID) */

undefined4 __thiscall RendererDummy::Utilities::free(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  
  uVar4 = RendererDummy::LightStorage::get_singleton();
  uVar3 = RendererDummy::LightStorage::free(uVar4,param_2);
  if ((char)uVar3 != '\0') {
    return 1;
  }
  uVar5 = (uint)param_2;
  uVar7 = param_2 & 0xffffffff;
  uVar6 = (uint)(param_2 >> 0x20);
  if (uVar5 < *(uint *)((long)TextureStorage::singleton + 0x34)) {
    if (param_2 >> 0x20 == 0x7fffffff) {
      uVar1 = *(uint *)((long)MeshStorage::singleton + 0xbc);
joined_r0x0010023a:
      if (uVar5 < uVar1) {
        return uVar3;
      }
      if (uVar5 < *(uint *)((long)MaterialStorage::singleton + 0x54)) {
        return uVar3;
      }
    }
    else {
      if ((*(uint *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(TextureStorage::singleton + 6)) *
                     0x10 + *(long *)(TextureStorage::singleton[4] +
                                     ((param_2 & 0xffffffff) /
                                     (ulong)*(uint *)(TextureStorage::singleton + 6)) * 8) + 8) &
          0x7fffffff) == uVar6) {
        (**(code **)(*TextureStorage::singleton + 0x50))(TextureStorage::singleton,param_2);
        return 1;
      }
      if (uVar5 < *(uint *)((long)MeshStorage::singleton + 100)) {
LAB_0010008e:
        if ((*(uint *)((uVar7 % (ulong)*(uint *)(MeshStorage::singleton + 0xc)) * 0x60 +
                       *(long *)(MeshStorage::singleton[10] +
                                (uVar7 / *(uint *)(MeshStorage::singleton + 0xc)) * 8) + 0x58) &
            0x7fffffff) == uVar6) {
          (**(code **)(*MeshStorage::singleton + 0x20))(MeshStorage::singleton,param_2);
          return 1;
        }
        if (uVar5 < *(uint *)((long)MeshStorage::singleton + 0xbc)) goto LAB_001000c7;
      }
      else {
        if (*(uint *)((long)MeshStorage::singleton + 0xbc) <= uVar5) goto LAB_00100262;
LAB_001000c7:
        if ((*(uint *)(*(long *)(MeshStorage::singleton[0x15] +
                                (uVar7 / *(uint *)(MeshStorage::singleton + 0x17)) * 8) +
                       (uVar7 % (ulong)*(uint *)(MeshStorage::singleton + 0x17)) * 0x18 + 0x10) &
            0x7fffffff) == uVar6) {
          (**(code **)(*MeshStorage::singleton + 0x118))(MeshStorage::singleton,param_2);
          return 1;
        }
      }
      if (uVar5 < *(uint *)((long)MaterialStorage::singleton + 0x54)) goto LAB_0010010e;
    }
LAB_001001a8:
    if (*(uint *)((long)MaterialStorage::singleton + 0x5b4) <= uVar5) {
      return uVar3;
    }
    uVar2 = (ulong)*(uint *)(MaterialStorage::singleton + 0xb6);
    uVar5 = (uint)(uVar7 % uVar2);
    if (param_2 >> 0x20 == 0x7fffffff) {
      return uVar3;
    }
  }
  else {
    if (uVar5 < *(uint *)((long)MeshStorage::singleton + 100)) {
      if (param_2 >> 0x20 != 0x7fffffff) goto LAB_0010008e;
      uVar1 = *(uint *)((long)MeshStorage::singleton + 0xbc);
      goto joined_r0x0010023a;
    }
    if (uVar5 < *(uint *)((long)MeshStorage::singleton + 0xbc)) {
      if (param_2 >> 0x20 == 0x7fffffff) {
        return uVar3;
      }
      goto LAB_001000c7;
    }
LAB_00100262:
    if (*(uint *)((long)MaterialStorage::singleton + 0x54) <= uVar5) goto LAB_001001a8;
    if (param_2 >> 0x20 == 0x7fffffff) {
      return uVar3;
    }
LAB_0010010e:
    if (uVar6 == (*(uint *)(*(long *)(MaterialStorage::singleton[8] +
                                     (uVar7 / *(uint *)(MaterialStorage::singleton + 10)) * 8) +
                            (uVar7 % (ulong)*(uint *)(MaterialStorage::singleton + 10)) * 0x38 +
                           0x30) & 0x7fffffff)) {
      (**(code **)(*MaterialStorage::singleton + 0x80))(MaterialStorage::singleton,param_2);
      return 1;
    }
    if (*(uint *)((long)MaterialStorage::singleton + 0x5b4) <= uVar5) {
      return uVar3;
    }
    uVar2 = (ulong)*(uint *)(MaterialStorage::singleton + 0xb6);
    uVar5 = (uint)(uVar7 % uVar2);
  }
  if ((*(uint *)(*(long *)(MaterialStorage::singleton[0xb4] + (uVar7 / uVar2) * 8) +
                 (ulong)uVar5 * 0x18 + 0x10) & 0x7fffffff) != uVar6) {
    return uVar3;
  }
  (**(code **)(*MaterialStorage::singleton + 0xd8))(MaterialStorage::singleton,param_2);
  return 1;
}



/* RendererDummy::Utilities::~Utilities() */

void __thiscall RendererDummy::Utilities::~Utilities(Utilities *this)

{
  singleton = 0;
  operator_delete(this,0x10);
  return;
}



/* RendererDummy::Utilities::get_base_type(RID) const */

undefined ** __thiscall RendererDummy::Utilities::get_base_type(undefined8 param_1,ulong param_2)

{
  pthread_mutex_t *__mutex;
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  
  uVar5 = (uint)param_2;
  uVar4 = param_2 & 0xffffffff;
  uVar6 = (uint)(param_2 >> 0x20);
  if (uVar5 < *(uint *)(MeshStorage::singleton + 100)) {
    if (param_2 >> 0x20 == 0x7fffffff) goto LAB_00100384;
    if (uVar6 == (*(uint *)(((param_2 & 0xffffffff) %
                            (ulong)*(uint *)(MeshStorage::singleton + 0x60)) * 0x60 +
                            *(long *)(*(long *)(MeshStorage::singleton + 0x50) +
                                     ((param_2 & 0xffffffff) /
                                     (ulong)*(uint *)(MeshStorage::singleton + 0x60)) * 8) + 0x58) &
                 0x7fffffff)) {
      return (undefined **)0x1;
    }
    if (*(uint *)(MeshStorage::singleton + 0xbc) <= uVar5) goto LAB_00100384;
    uVar1 = (uint)(uVar4 / *(uint *)(MeshStorage::singleton + 0xb8));
    uVar3 = (uint)(uVar4 % (ulong)*(uint *)(MeshStorage::singleton + 0xb8));
  }
  else {
    if (*(uint *)(MeshStorage::singleton + 0xbc) <= uVar5) goto LAB_00100384;
    uVar1 = (uint)((param_2 & 0xffffffff) / (ulong)*(uint *)(MeshStorage::singleton + 0xb8));
    uVar3 = (uint)((param_2 & 0xffffffff) % (ulong)*(uint *)(MeshStorage::singleton + 0xb8));
    if (param_2 >> 0x20 == 0x7fffffff) goto LAB_00100384;
  }
  if ((*(uint *)(*(long *)(*(long *)(MeshStorage::singleton + 0xa8) + (ulong)uVar1 * 8) +
                 (ulong)uVar3 * 0x18 + 0x10) & 0x7fffffff) == uVar6) {
    return (undefined **)0x2;
  }
LAB_00100384:
  lVar2 = RendererDummy::LightStorage::get_singleton();
  __mutex = (pthread_mutex_t *)(lVar2 + 0x38);
  uVar1 = pthread_mutex_lock(__mutex);
  if (uVar1 != 0) {
    puVar7 = (undefined8 *)(ulong)uVar1;
    std::__throw_system_error(uVar1);
    *(undefined1 *)(puVar7 + 1) = 0;
    *puVar7 = &PTR__Utilities_00101788;
    singleton = puVar7;
    return &PTR__Utilities_00101788;
  }
  if (((uVar5 < *(uint *)(lVar2 + 0x24)) && (param_2 >> 0x20 != 0x7fffffff)) &&
     ((*(uint *)(*(long *)(*(long *)(lVar2 + 0x10) + (uVar4 / *(uint *)(lVar2 + 0x20)) * 8) + 4 +
                (uVar4 % (ulong)*(uint *)(lVar2 + 0x20)) * 8) & 0x7fffffff) == uVar6)) {
    pthread_mutex_unlock(__mutex);
    return (undefined **)0x9;
  }
  pthread_mutex_unlock(__mutex);
  return (undefined **)0x0;
}



/* RendererDummy::Utilities::Utilities() */

void __thiscall RendererDummy::Utilities::Utilities(Utilities *this)

{
  this[8] = (Utilities)0x0;
  *(undefined ***)this = &PTR__Utilities_00101788;
  singleton = this;
  return;
}



/* RendererDummy::Utilities::base_update_dependency(RID, DependencyTracker*) */

void __thiscall
RendererDummy::Utilities::base_update_dependency
          (undefined8 param_1,ulong param_2,Dependency *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  long lVar3;
  long in_FS_OFFSET;
  Dependency *local_48 [3];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(uint *)(MeshStorage::singleton + 100) <= (uint)param_2) || (param_2 >> 0x20 == 0x7fffffff))
  goto LAB_001004e8;
  lVar3 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(MeshStorage::singleton + 0x60)) * 0x60 +
          *(long *)(*(long *)(MeshStorage::singleton + 0x50) +
                   ((param_2 & 0xffffffff) / (ulong)*(uint *)(MeshStorage::singleton + 0x60)) * 8);
  if ((*(uint *)(lVar3 + 0x58) & 0x7fffffff) != (uint)(param_2 >> 0x20)) goto LAB_001004e8;
  if (param_2 == 0) {
LAB_00100589:
    lVar3 = 0;
  }
  else if ((int)*(uint *)(lVar3 + 0x58) < 0) {
    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                     "Method/function failed. Returning: nullptr",
                     "Attempting to use an uninitialized RID",0,0);
    goto LAB_00100589;
  }
  HashSet<Dependency*,HashMapHasherDefault,HashMapComparatorDefault<Dependency*>>::insert(local_48);
  uVar1 = *(undefined4 *)(param_3 + 0x18);
  local_48[0] = param_3;
  puVar2 = (undefined4 *)
           HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>
           ::operator[]((HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>
                         *)(lVar3 + 0x28),(DependencyTracker **)local_48);
  *puVar2 = uVar1;
LAB_001004e8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererDummy::Utilities::visibility_notifier_allocate() */

undefined8 RendererDummy::Utilities::visibility_notifier_allocate(void)

{
  return 0;
}



/* RendererDummy::Utilities::visibility_notifier_initialize(RID) */

void RendererDummy::Utilities::visibility_notifier_initialize(void)

{
  return;
}



/* RendererDummy::Utilities::visibility_notifier_free(RID) */

void RendererDummy::Utilities::visibility_notifier_free(void)

{
  return;
}



/* RendererDummy::Utilities::visibility_notifier_set_aabb(RID, AABB const&) */

void RendererDummy::Utilities::visibility_notifier_set_aabb(void)

{
  return;
}



/* RendererDummy::Utilities::visibility_notifier_set_callbacks(RID, Callable const&, Callable
   const&) */

void RendererDummy::Utilities::visibility_notifier_set_callbacks(void)

{
  return;
}



/* RendererDummy::Utilities::visibility_notifier_get_aabb(RID) const */

undefined8 * RendererDummy::Utilities::visibility_notifier_get_aabb(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return param_1;
}



/* RendererDummy::Utilities::visibility_notifier_call(RID, bool, bool) */

void RendererDummy::Utilities::visibility_notifier_call(void)

{
  return;
}



/* RendererDummy::Utilities::capture_timestamps_begin() */

void RendererDummy::Utilities::capture_timestamps_begin(void)

{
  return;
}



/* RendererDummy::Utilities::capture_timestamp(String const&) */

void RendererDummy::Utilities::capture_timestamp(String *param_1)

{
  return;
}



/* RendererDummy::Utilities::get_captured_timestamps_count() const */

undefined8 RendererDummy::Utilities::get_captured_timestamps_count(void)

{
  return 0;
}



/* RendererDummy::Utilities::get_captured_timestamps_frame() const */

undefined8 RendererDummy::Utilities::get_captured_timestamps_frame(void)

{
  return 0;
}



/* RendererDummy::Utilities::get_captured_timestamp_gpu_time(unsigned int) const */

undefined8 RendererDummy::Utilities::get_captured_timestamp_gpu_time(uint param_1)

{
  return 0;
}



/* RendererDummy::Utilities::get_captured_timestamp_cpu_time(unsigned int) const */

undefined8 RendererDummy::Utilities::get_captured_timestamp_cpu_time(uint param_1)

{
  return 0;
}



/* RendererDummy::Utilities::get_captured_timestamp_name(unsigned int) const */

undefined8 RendererDummy::Utilities::get_captured_timestamp_name(uint param_1)

{
  undefined4 in_register_0000003c;
  
  *(undefined8 *)CONCAT44(in_register_0000003c,param_1) = 0;
  return CONCAT44(in_register_0000003c,param_1);
}



/* RendererDummy::Utilities::update_dirty_resources() */

void RendererDummy::Utilities::update_dirty_resources(void)

{
  return;
}



/* RendererDummy::Utilities::set_debug_generate_wireframes(bool) */

void RendererDummy::Utilities::set_debug_generate_wireframes(bool param_1)

{
  return;
}



/* RendererDummy::Utilities::update_memory_info() */

void RendererDummy::Utilities::update_memory_info(void)

{
  return;
}



/* RendererDummy::Utilities::get_rendering_info(RenderingServer::RenderingInfo) */

undefined8 RendererDummy::Utilities::get_rendering_info(void)

{
  return 0;
}



/* RendererDummy::Utilities::get_video_adapter_name() const */

Utilities * __thiscall RendererDummy::Utilities::get_video_adapter_name(Utilities *this)

{
  *(undefined8 *)this = 0;
  return this;
}



/* RendererDummy::Utilities::get_video_adapter_vendor() const */

Utilities * __thiscall RendererDummy::Utilities::get_video_adapter_vendor(Utilities *this)

{
  *(undefined8 *)this = 0;
  return this;
}



/* RendererDummy::Utilities::get_video_adapter_type() const */

undefined8 RendererDummy::Utilities::get_video_adapter_type(void)

{
  return 0;
}



/* RendererDummy::Utilities::get_video_adapter_api_version() const */

Utilities * __thiscall RendererDummy::Utilities::get_video_adapter_api_version(Utilities *this)

{
  *(undefined8 *)this = 0;
  return this;
}



/* RendererDummy::Utilities::get_maximum_viewport_size() const */

undefined8 RendererDummy::Utilities::get_maximum_viewport_size(void)

{
  return 0;
}



/* RendererDummy::Utilities::get_maximum_shader_varyings() const */

undefined8 RendererDummy::Utilities::get_maximum_shader_varyings(void)

{
  return 0x1f;
}



/* RendererDummy::Utilities::get_maximum_uniform_buffer_size() const */

undefined8 RendererDummy::Utilities::get_maximum_uniform_buffer_size(void)

{
  return 0x10000;
}



/* RendererDummy::Utilities::has_os_feature(String const&) const */

undefined8 __thiscall RendererDummy::Utilities::has_os_feature(Utilities *this,String *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = String::operator==(param_1,"rgtc");
  if (cVar1 == '\0') {
    cVar1 = String::operator==(param_1,"bptc");
    if (cVar1 == '\0') {
      cVar1 = String::operator==(param_1,"s3tc");
      if (cVar1 == '\0') {
        uVar2 = String::operator==(param_1,"etc2");
        return uVar2;
      }
    }
  }
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<Dependency*, HashMapHasherDefault, HashMapComparatorDefault<Dependency*>
   >::insert(Dependency* const&) */

undefined1  [16]
HashSet<Dependency*,HashMapHasherDefault,HashMapComparatorDefault<Dependency*>>::insert
          (Dependency **param_1)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
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
  uint uVar31;
  uint uVar32;
  ulong uVar33;
  long lVar34;
  int iVar35;
  long *in_RDX;
  long lVar36;
  long *in_RSI;
  uint uVar37;
  ulong uVar38;
  uint uVar39;
  ulong uVar40;
  undefined4 uVar41;
  ulong uVar42;
  ulong uVar43;
  uint uVar44;
  undefined1 auVar45 [16];
  ulong uStack_98;
  Dependency *local_88;
  ulong local_70;
  
  uVar32 = *(uint *)(in_RSI + 4);
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
  local_88 = (Dependency *)*in_RSI;
  if (local_88 == (Dependency *)0x0) {
    uVar33 = (ulong)uVar31 * 4;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[3] = lVar34;
    lVar34 = Memory::alloc_static((ulong)uVar31 * 8,false);
    *in_RSI = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[2] = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[1] = lVar34;
    if (uVar31 != 0) {
      memset((void *)in_RSI[3],0,uVar33);
    }
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    uVar32 = *(uint *)(in_RSI + 4);
    lVar34 = *in_RDX;
    local_88 = (Dependency *)*in_RSI;
    if (local_88 != (Dependency *)0x0) goto LAB_001008cf;
  }
  else {
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    lVar34 = *in_RDX;
LAB_001008cf:
    if (uVar44 != 0) {
      uVar43 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)uVar32 * 4));
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)uVar32 * 8);
      uVar33 = lVar34 * 0x3ffff - 1;
      uVar33 = (uVar33 ^ uVar33 >> 0x1f) * 0x15;
      uVar33 = (uVar33 ^ uVar33 >> 0xb) * 0x41;
      uVar33 = uVar33 >> 0x16 ^ uVar33;
      uVar42 = uVar33 & 0xffffffff;
      if ((int)uVar33 == 0) {
        uVar42 = 1;
      }
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar42 * lVar3;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar43;
      lVar36 = SUB168(auVar7 * auVar19,8);
      uVar39 = *(uint *)(in_RSI[3] + lVar36 * 4);
      uVar33 = (ulong)uVar39;
      iVar35 = SUB164(auVar7 * auVar19,8);
      if (uVar39 != 0) {
        uVar39 = 0;
        do {
          if ((int)uVar42 == (int)uVar33) {
            uVar37 = *(uint *)(in_RSI[1] + lVar36 * 4);
            uStack_98 = (ulong)uVar37;
            if (*(long *)(local_88 + uStack_98 * 8) == lVar34) goto LAB_00100d71;
          }
          uVar39 = uVar39 + 1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)(iVar35 + 1) * lVar3;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar43;
          lVar36 = SUB168(auVar8 * auVar20,8);
          uVar37 = *(uint *)(in_RSI[3] + lVar36 * 4);
          uVar33 = (ulong)uVar37;
          iVar35 = SUB164(auVar8 * auVar20,8);
        } while ((uVar37 != 0) &&
                (auVar9._8_8_ = 0, auVar9._0_8_ = uVar33 * lVar3, auVar21._8_8_ = 0,
                auVar21._0_8_ = uVar43, auVar10._8_8_ = 0,
                auVar10._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes + (ulong)uVar32 * 4) + iVar35) -
                            SUB164(auVar9 * auVar21,8)) * lVar3, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar43, uVar39 <= SUB164(auVar10 * auVar22,8)));
      }
    }
  }
  if ((float)uVar31 * __LC4 < (float)(uVar44 + 1)) {
    if (uVar32 == 0x1c) {
      uStack_98 = 0;
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0);
      uVar44 = *(uint *)((long)in_RSI + 0x24);
      uVar37 = 0xffffffff;
      local_88 = (Dependency *)*in_RSI;
      goto LAB_00100d71;
    }
    uVar33 = (ulong)(uVar32 + 1);
    if (uVar32 + 1 < 2) {
      uVar33 = 2;
    }
    uVar31 = *(uint *)(hash_table_size_primes + uVar33 * 4);
    *(int *)(in_RSI + 4) = (int)uVar33;
    pvVar4 = (void *)in_RSI[3];
    uVar33 = (ulong)uVar31 * 4;
    pvVar5 = (void *)in_RSI[2];
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[3] = lVar34;
    lVar34 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar31 * 8,false);
    *in_RSI = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[2] = lVar34;
    lVar34 = Memory::realloc_static((void *)in_RSI[1],uVar33,false);
    in_RSI[1] = lVar34;
    if (uVar31 != 0) {
      memset((void *)in_RSI[3],0,uVar33);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      lVar3 = in_RSI[2];
      lVar36 = in_RSI[3];
      local_70 = 0;
      do {
        uVar39 = 0;
        uVar43 = local_70 & 0xffffffff;
        uVar41 = (undefined4)local_70;
        uVar31 = *(uint *)((long)pvVar4 + (ulong)*(uint *)((long)pvVar5 + local_70 * 4) * 4);
        uVar33 = (ulong)uVar31;
        uVar32 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar38 = CONCAT44(0,uVar32);
        lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar33 * lVar6;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar38;
        lVar2 = SUB168(auVar11 * auVar23,8) * 4;
        iVar35 = SUB164(auVar11 * auVar23,8);
        puVar1 = (uint *)(lVar36 + lVar2);
        uVar44 = *puVar1;
        uVar42 = local_70;
        while (uVar44 != 0) {
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)uVar44 * lVar6;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar38;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)((uVar32 + iVar35) - SUB164(auVar12 * auVar24,8)) * lVar6;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar38;
          uVar31 = SUB164(auVar13 * auVar25,8);
          if (uVar31 < uVar39) {
            *(int *)(lVar3 + uVar43 * 4) = iVar35;
            uVar44 = *puVar1;
            *puVar1 = (uint)uVar33;
            uVar39 = *(uint *)(lVar2 + lVar34);
            uVar33 = (ulong)uVar44;
            *(uint *)(lVar2 + lVar34) = (uint)uVar43;
            uVar43 = (ulong)uVar39;
            uVar39 = uVar31;
          }
          uVar41 = (undefined4)uVar43;
          uVar31 = (uint)uVar33;
          uVar39 = uVar39 + 1;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = (ulong)(iVar35 + 1) * lVar6;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar38;
          lVar2 = SUB168(auVar14 * auVar26,8) * 4;
          iVar35 = SUB164(auVar14 * auVar26,8);
          puVar1 = (uint *)(lVar36 + lVar2);
          uVar42 = uVar43;
          uVar44 = *puVar1;
        }
        *puVar1 = uVar31;
        *(int *)(lVar3 + uVar42 * 4) = iVar35;
        local_70 = local_70 + 1;
        *(undefined4 *)(lVar34 + lVar2) = uVar41;
      } while ((uint)local_70 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar4,false);
    Memory::free_static(pvVar5,false);
    uVar32 = *(uint *)(in_RSI + 4);
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    local_88 = (Dependency *)*in_RSI;
    lVar34 = *in_RDX;
  }
  uVar42 = (ulong)uVar44;
  lVar3 = in_RSI[3];
  *(long *)(local_88 + uVar42 * 8) = lVar34;
  uVar33 = lVar34 * 0x3ffff - 1;
  uVar33 = (uVar33 ^ uVar33 >> 0x1f) * 0x15;
  uVar33 = (uVar33 ^ uVar33 >> 0xb) * 0x41;
  uVar33 = uVar33 >> 0x16 ^ uVar33;
  uVar43 = uVar33 & 0xffffffff;
  if ((int)uVar33 == 0) {
    uVar43 = 1;
  }
  uVar37 = 0;
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
  uVar40 = CONCAT44(0,uVar31);
  uVar39 = (uint)uVar43;
  lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)uVar32 * 8);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar43 * lVar36;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar40;
  lVar34 = SUB168(auVar15 * auVar27,8) * 4;
  iVar35 = SUB164(auVar15 * auVar27,8);
  lVar2 = in_RSI[2];
  puVar1 = (uint *)(lVar3 + lVar34);
  uVar33 = in_RSI[1];
  uVar32 = *puVar1;
  uStack_98 = uVar33;
  uVar38 = uVar42;
  while (uVar32 != 0) {
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)uVar32 * lVar36;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar40;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)((uVar31 + iVar35) - SUB164(auVar16 * auVar28,8)) * lVar36;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar40;
    uVar32 = SUB164(auVar17 * auVar29,8);
    if (uVar32 < uVar37) {
      *(int *)(lVar2 + uVar42 * 4) = iVar35;
      uVar44 = *puVar1;
      *puVar1 = (uint)uVar43;
      uVar39 = *(uint *)(lVar34 + uVar33);
      uVar43 = (ulong)uVar44;
      *(uint *)(lVar34 + uVar33) = (uint)uVar38;
      uVar42 = (ulong)uVar39;
      uVar38 = uVar42;
      uVar37 = uVar32;
    }
    uVar44 = (uint)uVar38;
    uVar39 = (uint)uVar43;
    uVar37 = uVar37 + 1;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)(iVar35 + 1) * lVar36;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar40;
    uStack_98 = SUB168(auVar18 * auVar30,8);
    lVar34 = uStack_98 * 4;
    iVar35 = SUB164(auVar18 * auVar30,8);
    puVar1 = (uint *)(lVar3 + lVar34);
    uVar32 = *puVar1;
  }
  *puVar1 = uVar39;
  *(int *)(lVar2 + uVar42 * 4) = iVar35;
  *(uint *)(uVar33 + lVar34) = uVar44;
  uVar37 = *(uint *)((long)in_RSI + 0x24);
  uVar44 = uVar37 + 1;
  *(uint *)((long)in_RSI + 0x24) = uVar44;
LAB_00100d71:
  *(uint *)((long)param_1 + 0xc) = uVar37;
  *param_1 = local_88;
  *(uint *)(param_1 + 1) = uVar44;
  auVar45._8_8_ = uStack_98;
  auVar45._0_8_ = param_1;
  return auVar45;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<DependencyTracker*, unsigned int, HashMapHasherDefault,
   HashMapComparatorDefault<DependencyTracker*>,
   DefaultTypedAllocator<HashMapElement<DependencyTracker*, unsigned int> >
   >::operator[](DependencyTracker* const&) */

undefined1  [16] __thiscall
HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>
::operator[](HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>
             *this,DependencyTracker **param_1)

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
  undefined8 uVar48;
  uint uVar49;
  uint uVar50;
  ulong uVar51;
  long lVar52;
  uint uVar53;
  ulong uVar54;
  ulong uVar55;
  DependencyTracker *pDVar56;
  undefined1 (*pauVar57) [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  long lStack_90;
  void *local_70;
  
  local_70 = *(void **)(this + 8);
  uVar40 = (ulong)*(uint *)(this + 0x28);
  pDVar56 = *param_1;
  uVar47 = *(uint *)(hash_table_size_primes + uVar40 * 4);
  uVar55 = CONCAT44(0,uVar47);
  if (local_70 == (void *)0x0) {
    uVar40 = uVar55 * 4;
    uVar39 = uVar55 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    lStack_90 = 0x101542;
    local_70 = (void *)Memory::alloc_static(uVar39,false);
    *(void **)(this + 8) = local_70;
    if (uVar47 == 0) {
      iVar43 = *(int *)(this + 0x2c);
      pDVar56 = *param_1;
      if (local_70 == (void *)0x0) goto LAB_0010106b;
    }
    else {
      pvVar4 = *(void **)(this + 0x10);
      if ((pvVar4 < (void *)((long)local_70 + uVar39)) &&
         (local_70 < (void *)((long)pvVar4 + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar40 * 4) = 0;
          *(undefined8 *)((long)local_70 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar55 != uVar40);
        iVar43 = *(int *)(this + 0x2c);
        pDVar56 = *param_1;
      }
      else {
        memset(pvVar4,0,uVar40);
        lStack_90 = 0x10158a;
        memset(local_70,0,uVar39);
        iVar43 = *(int *)(this + 0x2c);
        pDVar56 = *param_1;
      }
    }
    if (iVar43 != 0) {
      uVar40 = (ulong)*(uint *)(this + 0x28);
      lVar52 = *(long *)(this + 0x10);
      goto LAB_00101413;
    }
  }
  else {
    iVar43 = *(int *)(this + 0x2c);
    if (iVar43 != 0) {
      lVar52 = *(long *)(this + 0x10);
      lVar3 = *(long *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar39 = (long)pDVar56 * 0x3ffff - 1;
      uVar39 = (uVar39 ^ uVar39 >> 0x1f) * 0x15;
      uVar39 = (uVar39 ^ uVar39 >> 0xb) * 0x41;
      uVar39 = uVar39 >> 0x16 ^ uVar39;
      uVar54 = uVar39 & 0xffffffff;
      if ((int)uVar39 == 0) {
        uVar54 = 1;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar54 * lVar3;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar55;
      lVar45 = SUB168(auVar5 * auVar21,8);
      uVar44 = *(uint *)(lVar52 + lVar45 * 4);
      uVar53 = SUB164(auVar5 * auVar21,8);
      if (uVar44 != 0) {
        uVar50 = 0;
        lVar46 = lVar45;
        do {
          if (((uint)uVar54 == uVar44) &&
             (pDVar56 == *(DependencyTracker **)(*(long *)((long)local_70 + lVar45 * 8) + 0x10))) {
            auVar58._0_8_ = *(long *)((long)local_70 + (ulong)uVar53 * 8) + 0x18;
            auVar58._8_8_ = lVar46;
            return auVar58;
          }
          uVar50 = uVar50 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar53 + 1) * lVar3;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar55;
          lVar45 = SUB168(auVar6 * auVar22,8);
          uVar44 = *(uint *)(lVar52 + lVar45 * 4);
          uVar53 = SUB164(auVar6 * auVar22,8);
        } while ((uVar44 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar44 * lVar3, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar55, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar53 + uVar47) - SUB164(auVar7 * auVar23,8)) * lVar3,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar55, lVar46 = SUB168(auVar8 * auVar24,8),
                uVar50 <= SUB164(auVar8 * auVar24,8)));
      }
LAB_00101413:
      uVar51 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar40 * 4));
      lVar3 = *(long *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar39 = (long)pDVar56 * 0x3ffff - 1;
      uVar39 = (uVar39 ^ uVar39 >> 0x1f) * 0x15;
      uVar39 = (uVar39 ^ uVar39 >> 0xb) * 0x41;
      uVar39 = uVar39 >> 0x16 ^ uVar39;
      uVar54 = uVar39 & 0xffffffff;
      if ((int)uVar39 == 0) {
        uVar54 = 1;
      }
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar54 * lVar3;
      auVar33._8_8_ = 0;
      auVar33._0_8_ = uVar51;
      lVar45 = SUB168(auVar17 * auVar33,8);
      uVar47 = *(uint *)(lVar52 + lVar45 * 4);
      uVar44 = SUB164(auVar17 * auVar33,8);
      if (uVar47 != 0) {
        uVar53 = 0;
        lVar46 = lVar45;
        do {
          if (((uint)uVar54 == uVar47) &&
             (*(DependencyTracker **)(*(long *)((long)local_70 + lVar45 * 8) + 0x10) == pDVar56)) {
            pauVar42 = *(undefined1 (**) [16])((long)local_70 + (ulong)uVar44 * 8);
            *(undefined4 *)(pauVar42[1] + 8) = 0;
            lStack_90 = lVar46;
            goto LAB_001013f4;
          }
          uVar53 = uVar53 + 1;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = (ulong)(uVar44 + 1) * lVar3;
          auVar34._8_8_ = 0;
          auVar34._0_8_ = uVar51;
          lVar45 = SUB168(auVar18 * auVar34,8);
          uVar47 = *(uint *)(lVar52 + lVar45 * 4);
          uVar44 = SUB164(auVar18 * auVar34,8);
        } while ((uVar47 != 0) &&
                (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar47 * lVar3, auVar35._8_8_ = 0,
                auVar35._0_8_ = uVar51, auVar20._8_8_ = 0,
                auVar20._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes + uVar40 * 4) + uVar44) -
                            SUB164(auVar19 * auVar35,8)) * lVar3, auVar36._8_8_ = 0,
                auVar36._0_8_ = uVar51, lVar46 = SUB168(auVar20 * auVar36,8),
                uVar53 <= SUB164(auVar20 * auVar36,8)));
      }
    }
  }
LAB_0010106b:
  if ((float)uVar55 * __LC4 < (float)(iVar43 + 1)) {
    uVar47 = *(uint *)(this + 0x28);
    if (uVar47 == 0x1c) {
      pauVar42 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_001013f4;
    }
    uVar40 = (ulong)(uVar47 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar44 = *(uint *)(hash_table_size_primes + (ulong)uVar47 * 4);
    if (uVar47 + 1 < 2) {
      uVar40 = 2;
    }
    uVar47 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar39 = (ulong)uVar47;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar4 = *(void **)(this + 0x10);
    uVar40 = uVar39 * 4;
    uVar55 = uVar39 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar55,false);
    *(void **)(this + 8) = __s_00;
    if (uVar47 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar55)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar39 != uVar40);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar55);
      }
    }
    if (uVar44 != 0) {
      uVar40 = 0;
      do {
        uVar47 = *(uint *)((long)pvVar4 + uVar40 * 4);
        if (uVar47 != 0) {
          lVar52 = *(long *)(this + 0x10);
          uVar49 = 0;
          uVar53 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar55 = CONCAT44(0,uVar53);
          lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)uVar47 * lVar3;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar55;
          lVar45 = SUB168(auVar9 * auVar25,8);
          puVar1 = (uint *)(lVar52 + lVar45 * 4);
          iVar43 = SUB164(auVar9 * auVar25,8);
          uVar50 = *puVar1;
          uVar41 = *(undefined8 *)((long)local_70 + uVar40 * 8);
          while (uVar50 != 0) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar50 * lVar3;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar55;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)((uVar53 + iVar43) - SUB164(auVar10 * auVar26,8)) * lVar3;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar55;
            uVar38 = SUB164(auVar11 * auVar27,8);
            uVar48 = uVar41;
            if (uVar38 < uVar49) {
              *puVar1 = uVar47;
              puVar2 = (undefined8 *)((long)__s_00 + lVar45 * 8);
              uVar48 = *puVar2;
              *puVar2 = uVar41;
              uVar47 = uVar50;
              uVar49 = uVar38;
            }
            uVar49 = uVar49 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(iVar43 + 1) * lVar3;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar55;
            lVar45 = SUB168(auVar12 * auVar28,8);
            puVar1 = (uint *)(lVar52 + lVar45 * 4);
            iVar43 = SUB164(auVar12 * auVar28,8);
            uVar41 = uVar48;
            uVar50 = *puVar1;
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
  pDVar56 = *param_1;
  pauVar42 = (undefined1 (*) [16])operator_new(0x20,"");
  *(DependencyTracker **)pauVar42[1] = pDVar56;
  *(undefined4 *)(pauVar42[1] + 8) = 0;
  *pauVar42 = (undefined1  [16])0x0;
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar42;
  }
  else {
    *puVar2 = pauVar42;
    *(undefined8 **)(*pauVar42 + 8) = puVar2;
  }
  lVar52 = *(long *)(this + 0x10);
  *(undefined1 (**) [16])(this + 0x20) = pauVar42;
  uVar40 = (long)*param_1 * 0x3ffff - 1;
  uVar40 = (uVar40 ^ uVar40 >> 0x1f) * 0x15;
  uVar40 = (uVar40 ^ uVar40 >> 0xb) * 0x41;
  uVar40 = uVar40 >> 0x16 ^ uVar40;
  uVar55 = uVar40 & 0xffffffff;
  if ((int)uVar40 == 0) {
    uVar55 = 1;
  }
  uVar50 = 0;
  lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar53 = (uint)uVar55;
  uVar47 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar40 = CONCAT44(0,uVar47);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar55 * lVar3;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar40;
  lStack_90 = SUB168(auVar13 * auVar29,8);
  lVar45 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar52 + lStack_90 * 4);
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
    uVar53 = SUB164(auVar15 * auVar31,8);
    pauVar57 = pauVar37;
    if (uVar53 < uVar50) {
      *puVar1 = (uint)uVar55;
      uVar55 = (ulong)uVar44;
      puVar2 = (undefined8 *)(lVar45 + lStack_90 * 8);
      pauVar57 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar37;
      uVar50 = uVar53;
    }
    uVar53 = (uint)uVar55;
    uVar50 = uVar50 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar43 + 1) * lVar3;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar40;
    lStack_90 = SUB168(auVar16 * auVar32,8);
    puVar1 = (uint *)(lVar52 + lStack_90 * 4);
    iVar43 = SUB164(auVar16 * auVar32,8);
    pauVar37 = pauVar57;
    uVar44 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar45 + lStack_90 * 8) = pauVar37;
  *puVar1 = uVar53;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_001013f4:
  auVar59._8_8_ = lStack_90;
  auVar59._0_8_ = pauVar42[1] + 8;
  return auVar59;
}


