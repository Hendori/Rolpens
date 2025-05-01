
/* StaticRaycasterEmbree::intersect(StaticRaycaster::Ray&) */

bool __thiscall StaticRaycasterEmbree::intersect(StaticRaycasterEmbree *this,Ray *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined4 *local_30;
  undefined1 local_28 [16];
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (undefined1  [16])0x0;
  local_14 = 0xffffffff;
  local_38 = _LC0;
  local_30 = &local_14;
  rtcIntersect1(*(undefined8 *)(this + 0x180),param_1,&local_38);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return *(int *)(param_1 + 0x48) != -1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StaticRaycasterEmbree::add_mesh(Vector<Vector3> const&, Vector<int> const&, unsigned int) */

void __thiscall
StaticRaycasterEmbree::add_mesh
          (StaticRaycasterEmbree *this,Vector *param_1,Vector *param_2,uint param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  long lVar3;
  void *__dest;
  undefined4 *puVar4;
  ulong uVar5;
  size_t __n;
  ulong uVar6;
  int iVar7;
  
  uVar1 = rtcNewGeometry(embree_device,0);
  if (*(long *)(param_1 + 8) == 0) {
    rtcSetNewGeometryBuffer(uVar1,1,0,0x9003,0xc,0);
    lVar3 = *(long *)(param_2 + 8);
    if (lVar3 == 0) {
      rtcSetNewGeometryBuffer(uVar1,0,0,0x5003,0xc,0);
      goto LAB_00100158;
    }
  }
  else {
    iVar7 = (int)*(undefined8 *)(*(long *)(param_1 + 8) + -8);
    uVar6 = (ulong)iVar7;
    pvVar2 = (void *)rtcSetNewGeometryBuffer(uVar1,1,0,0x9003,0xc,uVar6);
    memcpy(pvVar2,*(void **)(param_1 + 8),uVar6 * 0xc);
    lVar3 = *(long *)(param_2 + 8);
    if (lVar3 == 0) {
      if (0x55555554 < iVar7 * -0x55555555 + 0x2aaaaaaaU) {
        _err_print_error("add_mesh","modules/raycast/static_raycaster_embree.cpp",0x51,
                         "Condition \"vertex_count % 3 != 0\" is true.",0,0);
        return;
      }
      puVar4 = (undefined4 *)rtcSetNewGeometryBuffer(uVar1,0,0,0x5003,0xc,(long)(iVar7 / 3));
      if (0 < iVar7) {
        uVar5 = 0;
        if ((uVar6 & 1) != 0) {
          uVar5 = 1;
          *puVar4 = 0;
          if (uVar6 == 1) goto LAB_00100158;
        }
        do {
          puVar4[uVar5] = (int)uVar5;
          lVar3 = uVar5 + 1;
          uVar5 = uVar5 + 2;
          puVar4[lVar3] = (int)lVar3;
        } while (uVar5 != uVar6);
      }
      goto LAB_00100158;
    }
  }
  __dest = (void *)rtcSetNewGeometryBuffer(uVar1,0,0,0x5003,0xc,*(long *)(lVar3 + -8) / 3);
  pvVar2 = *(void **)(param_2 + 8);
  if (pvVar2 == (void *)0x0) {
    __n = 0;
  }
  else {
    __n = *(long *)((long)pvVar2 + -8) * 4;
  }
  memcpy(__dest,pvVar2,__n);
LAB_00100158:
  rtcCommitGeometry(uVar1);
  rtcAttachGeometryByID(*(undefined8 *)(this + 0x180),uVar1,param_3);
  rtcReleaseGeometry(uVar1);
  return;
}



/* StaticRaycasterEmbree::commit() */

void __thiscall StaticRaycasterEmbree::commit(StaticRaycasterEmbree *this)

{
  rtcCommitScene(*(undefined8 *)(this + 0x180));
  return;
}



/* StaticRaycasterEmbree::set_mesh_filter(HashSet<int, HashMapHasherDefault,
   HashMapComparatorDefault<int> > const&) */

void __thiscall StaticRaycasterEmbree::set_mesh_filter(StaticRaycasterEmbree *this,HashSet *param_1)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 != 0) {
    iVar12 = 0;
    while( true ) {
      uVar8 = rtcGetGeometry(*(undefined8 *)(this + 0x180));
      rtcDisableGeometry(uVar8);
      if (iVar1 <= iVar12 + 1) break;
      iVar12 = iVar12 + 1;
    }
  }
  rtcCommitScene(*(undefined8 *)(this + 0x180));
  if (param_1 != (HashSet *)(this + 0x188)) {
    pvVar3 = *(void **)(this + 0x188);
    if (pvVar3 != (void *)0x0) {
      if (*(int *)(this + 0x1ac) != 0) {
        if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a8) * 4) != 0) {
          memset(*(void **)(this + 0x1a0),0,
                 (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a8) * 4) * 4);
        }
        *(undefined4 *)(this + 0x1ac) = 0;
      }
      Memory::free_static(pvVar3,false);
      Memory::free_static(*(void **)(this + 0x198),false);
      Memory::free_static(*(void **)(this + 400),false);
      Memory::free_static(*(void **)(this + 0x1a0),false);
      *(undefined1 (*) [16])(this + 0x188) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
    }
    uVar13 = *(ulong *)(param_1 + 0x20);
    *(ulong *)(this + 0x1a8) = uVar13;
    if ((int)(uVar13 >> 0x20) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (uVar13 & 0xffffffff) * 4);
      uVar13 = (ulong)uVar2 << 2;
      uVar8 = Memory::alloc_static(uVar13,false);
      *(undefined8 *)(this + 0x1a0) = uVar8;
      uVar8 = Memory::alloc_static(uVar13,false);
      *(undefined8 *)(this + 0x188) = uVar8;
      uVar8 = Memory::alloc_static(uVar13,false);
      *(undefined8 *)(this + 0x198) = uVar8;
      lVar9 = Memory::alloc_static(uVar13,false);
      *(long *)(this + 400) = lVar9;
      if (*(int *)(this + 0x1ac) != 0) {
        lVar4 = *(long *)(this + 0x188);
        lVar5 = *(long *)param_1;
        lVar10 = 0;
        lVar6 = *(long *)(param_1 + 0x10);
        lVar7 = *(long *)(this + 0x198);
        do {
          *(undefined4 *)(lVar4 + lVar10 * 4) = *(undefined4 *)(lVar5 + lVar10 * 4);
          *(undefined4 *)(lVar7 + lVar10 * 4) = *(undefined4 *)(lVar6 + lVar10 * 4);
          lVar10 = lVar10 + 1;
        } while ((uint)lVar10 < *(uint *)(this + 0x1ac));
      }
      if (uVar2 != 0) {
        lVar4 = *(long *)(param_1 + 0x18);
        lVar5 = *(long *)(this + 0x1a0);
        uVar11 = 0;
        lVar6 = *(long *)(param_1 + 8);
        do {
          *(undefined4 *)(lVar5 + uVar11) = *(undefined4 *)(lVar4 + uVar11);
          *(undefined4 *)(lVar9 + uVar11) = *(undefined4 *)(lVar6 + uVar11);
          uVar11 = uVar11 + 4;
        } while (uVar11 != uVar13);
        return;
      }
    }
  }
  return;
}



/* StaticRaycasterEmbree::clear_mesh_filter() */

void __thiscall StaticRaycasterEmbree::clear_mesh_filter(StaticRaycasterEmbree *this)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar1 = *(int *)(this + 0x1ac);
  if (iVar1 != 0) {
    iVar3 = 0;
    while( true ) {
      uVar2 = rtcGetGeometry(*(undefined8 *)(this + 0x180));
      rtcEnableGeometry(uVar2);
      if (iVar1 <= iVar3 + 1) break;
      iVar3 = iVar3 + 1;
    }
  }
  rtcCommitScene(*(undefined8 *)(this + 0x180));
  if ((*(long *)(this + 0x188) != 0) && (*(int *)(this + 0x1ac) != 0)) {
    if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a8) * 4) != 0) {
      memset(*(void **)(this + 0x1a0),0,
             (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a8) * 4) * 4);
    }
    *(undefined4 *)(this + 0x1ac) = 0;
  }
  return;
}



/* StaticRaycasterEmbree::~StaticRaycasterEmbree() */

void __thiscall StaticRaycasterEmbree::~StaticRaycasterEmbree(StaticRaycasterEmbree *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &PTR__initialize_classv_00102ad0;
  if (*(long *)(this + 0x180) != 0) {
    rtcReleaseScene();
  }
  pvVar1 = *(void **)(this + 0x188);
  if (pvVar1 != (void *)0x0) {
    if (*(int *)(this + 0x1ac) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a8) * 4) != 0) {
        memset(*(void **)(this + 0x1a0),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a8) * 4) << 2);
      }
      *(undefined4 *)(this + 0x1ac) = 0;
    }
    Memory::free_static(pvVar1,false);
    Memory::free_static(*(void **)(this + 0x198),false);
    Memory::free_static(*(void **)(this + 400),false);
    Memory::free_static(*(void **)(this + 0x1a0),false);
  }
  *(undefined ***)this = &PTR__initialize_classv_00102970;
  Object::~Object((Object *)this);
  return;
}



/* StaticRaycasterEmbree::~StaticRaycasterEmbree() */

void __thiscall StaticRaycasterEmbree::~StaticRaycasterEmbree(StaticRaycasterEmbree *this)

{
  ~StaticRaycasterEmbree(this);
  operator_delete(this,0x1b0);
  return;
}



/* StaticRaycasterEmbree::intersect(Vector<StaticRaycaster::Ray>&) */

void __thiscall StaticRaycasterEmbree::intersect(StaticRaycasterEmbree *this,Vector *param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *__dest;
  long lVar4;
  size_t __n;
  ulong uVar5;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined4 *local_60;
  undefined1 local_58 [16];
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 8) == 0) goto LAB_00100760;
  if (*(ulong *)(*(long *)(param_1 + 8) + -0x10) < 2) {
LAB_001006c1:
    __dest = *(undefined8 **)(param_1 + 8);
    if (__dest == (undefined8 *)0x0) goto LAB_00100760;
  }
  else {
    if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar4 = *(long *)(*(long *)(param_1 + 8) + -8);
    uVar5 = 0x10;
    __n = lVar4 * 0x50;
    if (__n != 0) {
      uVar5 = __n - 1 | __n - 1 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
    }
    puVar3 = (undefined8 *)Memory::alloc_static(uVar5,false);
    if (puVar3 == (undefined8 *)0x0) {
      _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                       "Parameter \"mem_new\" is null.",0,0);
      goto LAB_001006c1;
    }
    __dest = puVar3 + 2;
    *puVar3 = 1;
    puVar3[1] = lVar4;
    memcpy(__dest,*(void **)(param_1 + 8),__n);
    if (*(long *)(param_1 + 8) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(param_1 + 8) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar4 = *(long *)(param_1 + 8);
        *(undefined8 *)(param_1 + 8) = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    *(undefined8 **)(param_1 + 8) = __dest;
  }
  lVar4 = 0;
  puVar3 = __dest;
  do {
    if ((long)__dest[-1] <= lVar4) break;
    if (*(code **)(*(long *)this + 0x150) == intersect) {
      local_44 = 0xffffffff;
      local_68 = _LC0;
      local_58 = (undefined1  [16])0x0;
      local_60 = &local_44;
      rtcIntersect1(*(undefined8 *)(this + 0x180),puVar3,&local_68);
    }
    else {
      (**(code **)(*(long *)this + 0x150))(this,puVar3);
    }
    __dest = *(undefined8 **)(param_1 + 8);
    lVar4 = lVar4 + 1;
    puVar3 = puVar3 + 10;
  } while (__dest != (undefined8 *)0x0);
LAB_00100760:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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



/* embree_error_handler(void*, RTCError, char const*) */

void embree_error_handler(undefined8 param_1,undefined8 param_2,char *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  size_t local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  local_40 = 0;
  if (param_3 != (char *)0x0) {
    local_30 = strlen(param_3);
  }
  local_38 = param_3;
  String::parse_latin1((StrRange *)&local_40);
  operator+((char *)&local_38,(String *)"Embree error: ");
  print_error((String *)&local_38);
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StaticRaycasterEmbree::make_default_raycaster() */

void StaticRaycasterEmbree::make_default_raycaster(void)

{
  StaticRaycaster::create_function = create_embree_raycaster;
  return;
}



/* StaticRaycasterEmbree::free() */

void StaticRaycasterEmbree::free(void)

{
  if (embree_device != 0) {
    rtcReleaseDevice();
    return;
  }
  return;
}



/* StaticRaycasterEmbree::StaticRaycasterEmbree() */

void __thiscall StaticRaycasterEmbree::StaticRaycasterEmbree(StaticRaycasterEmbree *this)

{
  undefined8 uVar1;
  
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined8 *)(this + 0x1a8) = 2;
  *(undefined ***)this = &PTR__initialize_classv_00102ad0;
  *(undefined1 (*) [16])(this + 0x188) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
  MXCSR = MXCSR | 0x8040;
  if (embree_device == 0) {
    embree_device = rtcNewDevice();
    rtcSetDeviceErrorFunction(embree_device,embree_error_handler,0);
  }
  uVar1 = rtcNewScene(embree_device);
  *(undefined8 *)(this + 0x180) = uVar1;
  return;
}



/* StaticRaycasterEmbree::create_embree_raycaster() */

StaticRaycasterEmbree * StaticRaycasterEmbree::create_embree_raycaster(void)

{
  StaticRaycasterEmbree *this;
  
  this = (StaticRaycasterEmbree *)operator_new(0x1b0,"");
  StaticRaycasterEmbree(this);
  postinitialize_handler((Object *)this);
  return this;
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
  return (uint)CONCAT71(0x102c,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x102c,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* StaticRaycasterEmbree::is_class_ptr(void*) const */

uint __thiscall StaticRaycasterEmbree::is_class_ptr(StaticRaycasterEmbree *this,void *param_1)

{
  return (uint)CONCAT71(0x102c,(undefined4 *)param_1 ==
                               &StaticRaycaster::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x102c,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x102c,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x102c,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* StaticRaycasterEmbree::_getv(StringName const&, Variant&) const */

undefined8 StaticRaycasterEmbree::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* StaticRaycasterEmbree::_setv(StringName const&, Variant const&) */

undefined8 StaticRaycasterEmbree::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* StaticRaycasterEmbree::_validate_propertyv(PropertyInfo&) const */

void StaticRaycasterEmbree::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* StaticRaycasterEmbree::_property_can_revertv(StringName const&) const */

undefined8 StaticRaycasterEmbree::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* StaticRaycasterEmbree::_property_get_revertv(StringName const&, Variant&) const */

undefined8 StaticRaycasterEmbree::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* StaticRaycasterEmbree::_notificationv(int, bool) */

void StaticRaycasterEmbree::_notificationv(int param_1,bool param_2)

{
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00102970;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00102970;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* StaticRaycasterEmbree::_get_class_namev() const */

undefined8 * StaticRaycasterEmbree::_get_class_namev(void)

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
LAB_00100e23:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00100e23;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"StaticRaycasterEmbree");
      goto LAB_00100e8e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"StaticRaycasterEmbree");
LAB_00100e8e:
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
LAB_00100f03:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00100f03;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_00100f6e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_00100f6e:
  return &_get_class_namev()::_class_name_static;
}



/* StaticRaycasterEmbree::intersect(Vector<StaticRaycaster::Ray>&) [clone .cold] */

void StaticRaycasterEmbree::intersect(Vector *param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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



/* StaticRaycasterEmbree::get_class() const */

void StaticRaycasterEmbree::get_class(void)

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
            if (lVar5 == 0) goto LAB_001011cf;
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
LAB_001011cf:
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
    if (cVar6 != '\0') goto LAB_00101283;
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
              if (lVar5 == 0) goto LAB_00101333;
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
LAB_00101333:
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
      if (cVar6 != '\0') goto LAB_00101283;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00101283:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StaticRaycasterEmbree::is_class(String const&) const */

undefined8 __thiscall StaticRaycasterEmbree::is_class(StaticRaycasterEmbree *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010146f;
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
LAB_0010146f:
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
    if (cVar6 != '\0') goto LAB_00101523;
  }
  cVar6 = String::operator==(param_1,"StaticRaycasterEmbree");
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
              if (lVar5 == 0) goto LAB_001015e3;
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
LAB_001015e3:
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
      if (cVar6 != '\0') goto LAB_00101523;
    }
    cVar6 = String::operator==(param_1,"StaticRaycaster");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_0010168c;
    }
  }
LAB_00101523:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010168c:
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
LAB_001019a8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001019a8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x001019c6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x001019c6:
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



/* StaticRaycasterEmbree::_initialize_classv() */

void StaticRaycasterEmbree::_initialize_classv(void)

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
  if (initialize_class()::initialized != '\0') goto LAB_00101e8a;
  if (StaticRaycaster::initialize_class()::initialized == '\0') {
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
    local_48 = "StaticRaycaster";
    local_60 = 0;
    local_40 = 0xf;
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
        StaticRaycaster::initialize_class()::initialized = '\x01';
        goto LAB_00101d8b;
      }
    }
    StaticRaycaster::initialize_class()::initialized = '\x01';
  }
LAB_00101d8b:
  local_48 = "StaticRaycaster";
  local_58 = 0;
  local_40 = 0xf;
  String::parse_latin1((StrRange *)&local_58);
  StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
  local_48 = "StaticRaycasterEmbree";
  local_60 = 0;
  local_40 = 0x15;
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
LAB_00101e8a:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* StaticRaycaster::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
StaticRaycaster::_get_property_listv(StaticRaycaster *this,List *param_1,bool param_2)

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
  local_78 = "StaticRaycaster";
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "StaticRaycaster";
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
LAB_001021b8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001021b8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001021d5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001021d5:
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
  StringName::StringName((StringName *)&local_78,"StaticRaycaster",false);
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



/* StaticRaycasterEmbree::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
StaticRaycasterEmbree::_get_property_listv(StaticRaycasterEmbree *this,List *param_1,bool param_2)

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
    StaticRaycaster::_get_property_listv((StaticRaycaster *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "StaticRaycasterEmbree";
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "StaticRaycasterEmbree";
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
LAB_00102608:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00102608;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00102625;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00102625:
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
  StringName::StringName((StringName *)&local_78,"StaticRaycasterEmbree",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      StaticRaycaster::_get_property_listv((StaticRaycaster *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


