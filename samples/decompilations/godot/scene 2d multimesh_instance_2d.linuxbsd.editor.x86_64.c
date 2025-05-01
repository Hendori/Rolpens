
/* MultiMeshInstance2D::_edit_get_rect() const */

undefined1  [16] __thiscall MultiMeshInstance2D::_edit_get_rect(MultiMeshInstance2D *this)

{
  undefined1 auVar1 [16];
  long in_FS_OFFSET;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  if (*(long **)(this + 0x580) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x580) + 0x1c8))(&local_28);
    local_38 = local_28;
    uStack_34 = local_24;
    uStack_30 = local_1c;
    uStack_2c = local_18;
  }
  auVar1._4_4_ = uStack_34;
  auVar1._0_4_ = local_38;
  auVar1._8_4_ = uStack_30;
  auVar1._12_4_ = uStack_2c;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MultiMeshInstance2D::get_texture() const */

void MultiMeshInstance2D::get_texture(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0x588) != 0) {
    *in_RDI = *(long *)(in_RSI + 0x588);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* MultiMeshInstance2D::get_multimesh() const */

void MultiMeshInstance2D::get_multimesh(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0x580) != 0) {
    *in_RDI = *(long *)(in_RSI + 0x580);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* MultiMeshInstance2D::~MultiMeshInstance2D() */

void __thiscall MultiMeshInstance2D::~MultiMeshInstance2D(MultiMeshInstance2D *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0010b208;
  if (*(long *)(this + 0x588) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x588);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0x580) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x580);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  *(code **)this = predelete_handler;
  CanvasItem::~CanvasItem((CanvasItem *)this);
  return;
}



/* MultiMeshInstance2D::~MultiMeshInstance2D() */

void __thiscall MultiMeshInstance2D::~MultiMeshInstance2D(MultiMeshInstance2D *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0010b208;
  if (*(long *)(this + 0x588) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x588);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0x580) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x580);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  *(code **)this = predelete_handler;
  CanvasItem::~CanvasItem((CanvasItem *)this);
  operator_delete(this,0x590);
  return;
}



/* MultiMeshInstance2D::set_texture(Ref<Texture2D> const&) */

void __thiscall MultiMeshInstance2D::set_texture(MultiMeshInstance2D *this,Ref *param_1)

{
  Object *pOVar1;
  Object *pOVar2;
  long lVar3;
  char cVar4;
  long in_FS_OFFSET;
  
  pOVar1 = *(Object **)param_1;
  pOVar2 = *(Object **)(this + 0x588);
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  if (pOVar2 != pOVar1) {
    *(Object **)(this + 0x588) = pOVar1;
    if (pOVar1 != (Object *)0x0) {
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        *(undefined8 *)(this + 0x588) = 0;
      }
    }
    if (pOVar2 != (Object *)0x0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        cVar4 = predelete_handler(pOVar2);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
    }
    CanvasItem::queue_redraw();
    (**(code **)(*(long *)this + 0xd0))(this,SceneStringNames::singleton + 0x1d0,0,0);
    if (Variant::needs_deinit[0] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* MultiMeshInstance2D::_notification(int) */

void __thiscall MultiMeshInstance2D::_notification(MultiMeshInstance2D *this,int param_1)

{
  if ((param_1 == 0x1e) && (*(long *)(this + 0x580) != 0)) {
    CanvasItem::draw_multimesh((Ref *)this,(Ref *)(this + 0x580));
    return;
  }
  return;
}



/* MultiMeshInstance2D::navmesh_parse_init() */

void MultiMeshInstance2D::navmesh_parse_init(void)

{
  long lVar1;
  CallableCustom *this;
  long *plVar2;
  long in_FS_OFFSET;
  Callable aCStack_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = NavigationServer2D::get_singleton();
  if (lVar1 == 0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("navmesh_parse_init","scene/2d/multimesh_instance_2d.cpp",0x6e,
                       "Parameter \"NavigationServer2D::get_singleton()\" is null.",0,0);
      return;
    }
  }
  else if (_navmesh_source_geometry_parser == 0) {
    this = (CallableCustom *)operator_new(0x30,"");
    CallableCustom::CallableCustom(this);
    *(undefined **)(this + 0x20) = &_LC13;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined ***)this = &PTR_hash_0010b588;
    *(code **)(this + 0x28) = navmesh_parse_source_geometry;
    CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
    *(char **)(this + 0x20) = "MultiMeshInstance2D::navmesh_parse_source_geometry";
    Callable::Callable(aCStack_38,this);
    Callable::operator=((Callable *)_navmesh_source_geometry_parsing_callback,aCStack_38);
    Callable::~Callable(aCStack_38);
    plVar2 = (long *)NavigationServer2D::get_singleton();
    _navmesh_source_geometry_parser = (**(code **)(*plVar2 + 0x548))(plVar2);
    plVar2 = (long *)NavigationServer2D::get_singleton();
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001007ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x550))
                (plVar2,_navmesh_source_geometry_parser,_navmesh_source_geometry_parsing_callback);
      return;
    }
  }
  else if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MultiMeshInstance2D::MultiMeshInstance2D() */

void __thiscall MultiMeshInstance2D::MultiMeshInstance2D(MultiMeshInstance2D *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  CanvasItem::CanvasItem((CanvasItem *)this);
  *(code **)this = predelete_handler;
  this[0x548] = (MultiMeshInstance2D)0x0;
  *(undefined8 *)(this + 0x56c) = 0x3f80000000000000;
  *(undefined8 *)(this + 0x54c) = 0;
  uVar2 = _UNK_0010b838;
  uVar1 = __LC15;
  *(undefined ***)this = &PTR__initialize_classv_0010b208;
  *(undefined8 *)(this + 0x564) = 0x3f800000;
  *(undefined8 *)(this + 0x554) = uVar1;
  *(undefined8 *)(this + 0x55c) = uVar2;
  *(undefined8 *)(this + 0x574) = 0;
  *(undefined1 (*) [16])(this + 0x580) = (undefined1  [16])0x0;
  return;
}



/* MultiMeshInstance2D::set_multimesh(Ref<MultiMesh> const&) */

void __thiscall MultiMeshInstance2D::set_multimesh(MultiMeshInstance2D *this,Ref *param_1)

{
  Callable *pCVar1;
  Object *pOVar2;
  char cVar3;
  Object *pOVar4;
  long in_FS_OFFSET;
  CanvasItem aCStack_48 [24];
  long local_30;
  
  pCVar1 = *(Callable **)(this + 0x580);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (pCVar1 == (Callable *)0x0) {
    if (*(long *)param_1 == 0) goto LAB_00100960;
    *(long *)(this + 0x580) = *(long *)param_1;
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      pOVar4 = (Object *)0x0;
LAB_00100900:
      *(undefined8 *)(this + 0x580) = 0;
      goto LAB_0010090b;
    }
LAB_00100920:
    pOVar4 = *(Object **)(this + 0x580);
  }
  else {
    create_custom_callable_function_pointer<CanvasItem>
              (aCStack_48,(char *)this,(_func_void *)"&CanvasItem::queue_redraw");
    Resource::disconnect_changed(pCVar1);
    Callable::~Callable((Callable *)aCStack_48);
    pOVar2 = *(Object **)param_1;
    pOVar4 = *(Object **)(this + 0x580);
    if (pOVar2 != pOVar4) {
      *(Object **)(this + 0x580) = pOVar2;
      if (pOVar2 == (Object *)0x0) {
LAB_0010090b:
        if (pOVar4 == (Object *)0x0) goto LAB_00100960;
      }
      else {
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') goto LAB_00100900;
        if (pOVar4 == (Object *)0x0) goto LAB_00100920;
      }
      cVar3 = RefCounted::unreference();
      if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar4), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
      goto LAB_00100920;
    }
  }
  if (pOVar4 != (Object *)0x0) {
    create_custom_callable_function_pointer<CanvasItem>
              (aCStack_48,(char *)this,(_func_void *)"&CanvasItem::queue_redraw");
    Resource::connect_changed((Callable *)pOVar4,(uint)aCStack_48);
    Callable::~Callable((Callable *)aCStack_48);
  }
LAB_00100960:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  CanvasItem::queue_redraw();
  return;
}



/* MultiMeshInstance2D::_bind_methods() */

void MultiMeshInstance2D::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  int *piVar8;
  MethodBind *pMVar9;
  long lVar10;
  long *plVar11;
  int *piVar12;
  long in_FS_OFFSET;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  long local_100;
  long local_f8;
  long local_f0;
  char *local_e8;
  undefined8 local_e0;
  char *local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98 [2];
  int *local_88;
  undefined8 local_80;
  long local_70;
  char *local_68;
  undefined8 local_60;
  char **local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_68 = "multimesh";
  local_58 = &local_68;
  D_METHODP((char *)&local_d8,(char ***)"set_multimesh",(uint)&local_58);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar9 = create_method_bind<MultiMeshInstance2D,Ref<MultiMesh>const&>(set_multimesh);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  uVar7 = local_c8._0_8_;
  if ((long *)local_c8._0_8_ != (long *)0x0) {
    LOCK();
    plVar11 = (long *)(local_c8._0_8_ + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      if ((long *)local_c8._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_c8._0_8_ + -8);
      lVar10 = 0;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_c8._8_8_;
      local_c8 = auVar3 << 0x40;
      plVar11 = (long *)uVar7;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar11 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar11 = plVar11 + 1;
        } while (lVar1 != lVar10);
      }
      Memory::free_static((long *)(uVar7 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_d8,(char ***)"get_multimesh",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar9 = create_method_bind<MultiMeshInstance2D,Ref<MultiMesh>>(get_multimesh);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  uVar7 = local_c8._0_8_;
  if ((long *)local_c8._0_8_ != (long *)0x0) {
    LOCK();
    plVar11 = (long *)(local_c8._0_8_ + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      if ((long *)local_c8._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_c8._0_8_ + -8);
      lVar10 = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_c8._8_8_;
      local_c8 = auVar4 << 0x40;
      plVar11 = (long *)uVar7;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar11 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar11 = plVar11 + 1;
        } while (lVar1 != lVar10);
      }
      Memory::free_static((long *)(uVar7 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  local_68 = "texture";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_d8,(char ***)"set_texture",(uint)&local_58);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar9 = create_method_bind<MultiMeshInstance2D,Ref<Texture2D>const&>(set_texture);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  uVar7 = local_c8._0_8_;
  if ((long *)local_c8._0_8_ != (long *)0x0) {
    LOCK();
    plVar11 = (long *)(local_c8._0_8_ + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      if ((long *)local_c8._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_c8._0_8_ + -8);
      lVar10 = 0;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_c8._8_8_;
      local_c8 = auVar5 << 0x40;
      plVar11 = (long *)uVar7;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar11 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar11 = plVar11 + 1;
        } while (lVar1 != lVar10);
      }
      Memory::free_static((long *)(uVar7 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_d8,(char ***)"get_texture",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar9 = create_method_bind<MultiMeshInstance2D,Ref<Texture2D>>(get_texture);
  ClassDB::bind_methodfi(1,pMVar9,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  uVar7 = local_c8._0_8_;
  if ((long *)local_c8._0_8_ != (long *)0x0) {
    LOCK();
    plVar11 = (long *)(local_c8._0_8_ + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      if ((long *)local_c8._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_c8._0_8_ + -8);
      lVar10 = 0;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = local_c8._8_8_;
      local_c8 = auVar6 << 0x40;
      plVar11 = (long *)uVar7;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar11 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar11 = plVar11 + 1;
        } while (lVar1 != lVar10);
      }
      Memory::free_static((long *)(uVar7 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  local_f0 = 0;
  local_d8 = "texture_changed";
  local_d0 = 0xf;
  String::parse_latin1((StrRange *)&local_f0);
  local_c8 = (undefined1  [16])0x0;
  local_d8 = (char *)0x0;
  local_d0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 6;
  local_a0 = 1;
  local_98[0] = 0;
  local_88 = (int *)0x0;
  local_80 = 0;
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_f0);
  local_f8 = 0;
  local_e8 = "MultiMeshInstance2D";
  local_e0 = 0x13;
  String::parse_latin1((StrRange *)&local_f8);
  StringName::StringName((StringName *)&local_e8,(String *)&local_f8,false);
  ClassDB::add_signal((StringName *)&local_e8,(MethodInfo *)&local_d8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  lVar1 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar11 = (long *)(local_70 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  piVar8 = local_88;
  if (local_88 != (int *)0x0) {
    LOCK();
    plVar11 = (long *)(local_88 + -4);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      if (local_88 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_88 + -2);
      lVar10 = 0;
      local_88 = (int *)0x0;
      piVar12 = piVar8;
      if (lVar1 != 0) {
        do {
          if (Variant::needs_deinit[*piVar12] != '\0') {
            Variant::_clear_internal();
          }
          lVar10 = lVar10 + 1;
          piVar12 = piVar12 + 6;
        } while (lVar1 != lVar10);
      }
      Memory::free_static(piVar8 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  _scs_create((char *)&local_f0,true);
  _scs_create((char *)&local_f8,true);
  local_d8 = "MultiMesh";
  local_100 = 0;
  local_108 = 0;
  local_d0 = 9;
  String::parse_latin1((StrRange *)&local_108);
  local_d8 = "multimesh";
  local_110 = 0;
  local_d0 = 9;
  String::parse_latin1((StrRange *)&local_110);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,0x18,(StrRange *)&local_110,0x11,(StrRange *)&local_108,6,
             &local_100);
  local_e8 = "MultiMeshInstance2D";
  local_118 = 0;
  local_e0 = 0x13;
  String::parse_latin1((StrRange *)&local_118);
  StringName::StringName((StringName *)&local_e8,(String *)&local_118,false);
  ClassDB::add_property
            ((StringName *)&local_e8,(PropertyInfo *)&local_d8,(StringName *)&local_f8,
             (StringName *)&local_f0,-1);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((((StringName::configured != '\0') &&
       ((local_100 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_f8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_f0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_f0,true);
  _scs_create((char *)&local_f8,true);
  local_d8 = "Texture2D";
  local_100 = 0;
  local_108 = 0;
  local_d0 = 9;
  String::parse_latin1((StrRange *)&local_108);
  local_d8 = "texture";
  local_110 = 0;
  local_d0 = 7;
  String::parse_latin1((StrRange *)&local_110);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,0x18,(StrRange *)&local_110,0x11,(StrRange *)&local_108,6,
             &local_100);
  local_e8 = "MultiMeshInstance2D";
  local_118 = 0;
  local_e0 = 0x13;
  String::parse_latin1((StrRange *)&local_118);
  StringName::StringName((StringName *)&local_e8,(String *)&local_118,false);
  ClassDB::add_property
            ((StringName *)&local_e8,(PropertyInfo *)&local_d8,(StringName *)&local_f8,
             (StringName *)&local_f0,-1);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if (((StringName::configured != '\0') &&
      ((local_100 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_f8 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_f0 != 0)))
     ) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<Vector2>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector2>::_copy_on_write(CowData<Vector2> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar4 = 0x10;
  __n = lVar1 * 8;
  if (__n != 0) {
    uVar4 = __n - 1 | __n - 1 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = (uVar4 | uVar4 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar4,false);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 1;
    puVar3[1] = lVar1;
    memcpy(puVar3 + 2,*(void **)this,__n);
    _unref(this);
    *(undefined8 **)this = puVar3 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* MultiMeshInstance2D::navmesh_parse_source_geometry(Ref<NavigationPolygon> const&,
   Ref<NavigationMeshSourceGeometryData2D>, Node*) */

void MultiMeshInstance2D::navmesh_parse_source_geometry
               (undefined8 param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long *plVar13;
  ulong uVar14;
  void *pvVar15;
  double *pdVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 *puVar20;
  long *plVar21;
  long *plVar22;
  double *pdVar23;
  undefined1 (*pauVar24) [16];
  int *piVar25;
  int *piVar26;
  long in_FS_OFFSET;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  long local_140;
  Object *local_138;
  Array local_130 [8];
  Variant local_128 [8];
  undefined8 *local_120;
  Variant local_118 [8];
  int *local_110;
  double local_108;
  double dStack_100;
  undefined1 local_f8 [16];
  undefined1 (*local_e8) [16];
  undefined1 local_d8 [16];
  long local_c8;
  undefined1 local_b8 [16];
  double *local_a8;
  Transform2D local_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_3 != 0) &&
      (plVar13 = (long *)__dynamic_cast(param_3,&Object::typeinfo,&typeinfo,0),
      plVar13 != (long *)0x0)) &&
     (uVar9 = NavigationPolygon::get_parsed_geometry_type(), (uVar9 & 0xfffffffd) == 0)) {
    local_140 = 0;
    if (plVar13[0xb0] != 0) {
      local_140 = plVar13[0xb0];
      cVar8 = RefCounted::reference();
      if (cVar8 == '\0') {
        local_140 = 0;
      }
      else {
        iVar10 = MultiMesh::get_transform_format();
        if ((iVar10 == 0) && (MultiMesh::get_mesh(), local_138 != (Object *)0x0)) {
          local_e8 = (undefined1 (*) [16])0x0;
          local_c8 = 0;
          local_f8 = (undefined1  [16])0x0;
          local_d8 = (undefined1  [16])0x0;
          for (iVar10 = 0; iVar11 = (**(code **)(*(long *)local_138 + 0x1c8))(), iVar10 < iVar11;
              iVar10 = iVar10 + 1) {
            iVar11 = (**(code **)(*(long *)local_138 + 0x200))(local_138,iVar10);
            if ((iVar11 == 3) &&
               (uVar14 = (**(code **)(*(long *)local_138 + 0x1f8))(local_138,iVar10),
               (uVar14 & 0x2000000) != 0)) {
              local_a8 = (double *)0x0;
              local_b8 = (undefined1  [16])0x0;
              uVar14 = (**(code **)(*(long *)local_138 + 0x1f8))(local_138,iVar10);
              if ((uVar14 & 0x1000) == 0) {
                iVar11 = (**(code **)(*(long *)local_138 + 0x1d0))(local_138,iVar10);
              }
              else {
                iVar11 = (**(code **)(*(long *)local_138 + 0x1d8))();
              }
              if ((iVar11 == 0) || (0x55555554 < iVar11 * -0x55555555 + 0x2aaaaaaaU)) {
                _err_print_error("navmesh_parse_source_geometry",
                                 "scene/2d/multimesh_instance_2d.cpp",0xa2,
                                 "Condition \"(index_count == 0 || (index_count % 3) != 0)\" is true. Continuing."
                                 ,0,0);
              }
              else {
                (**(code **)(*(long *)local_138 + 0x1e0))(local_130,local_138,iVar10);
                iVar11 = (int)local_130;
                Array::operator[](iVar11);
                Variant::operator_cast_to_Vector(local_128);
                uVar9 = (**(code **)(*(long *)local_138 + 0x1f8))(local_138,iVar10);
                plVar22 = (long *)(ulong)(uVar9 & 0x1000);
                if ((uVar9 & 0x1000) == 0) {
                  CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_120);
                  puVar18 = local_120;
                  CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_120);
                  puVar20 = local_120;
                  if (local_120 != (undefined8 *)0x0) {
                    puVar20 = local_120 + local_120[-1];
                  }
                  if (puVar18 != puVar20) {
                    pdVar16 = (double *)0x0;
                    pdVar23 = (double *)0x0;
                    while( true ) {
                      local_108 = (double)(float)*puVar18;
                      dStack_100 = (double)(float)((ulong)*puVar18 >> 0x20);
                      if (pdVar23 == pdVar16) {
                        std::
                        vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>
                        ::_M_realloc_insert<Clipper2Lib::Point<double>const&>
                                  ((vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>
                                    *)local_b8,pdVar23,&local_108);
                      }
                      else {
                        *pdVar16 = local_108;
                        pdVar16[1] = dStack_100;
                        local_b8._8_8_ = pdVar16 + 2;
                      }
                      puVar18 = puVar18 + 1;
                      if (puVar20 == puVar18) break;
                      pdVar16 = (double *)local_b8._8_8_;
                      pdVar23 = local_a8;
                    }
                    goto LAB_00101840;
                  }
                  plVar21 = (long *)0x0;
                  if (local_e8 != (undefined1 (*) [16])local_f8._8_8_) {
                    *(undefined8 *)*(undefined1 (*) [16])(local_f8._8_8_ + 0x10) = 0;
                    plVar21 = (long *)0x0;
                    pvVar15 = (void *)0x0;
                    *(undefined1 (*) [16])local_f8._8_8_ = (undefined1  [16])0x0;
                    *(undefined8 *)(undefined1 *)local_f8._8_8_ = 0;
                    pauVar24 = (undefined1 (*) [16])local_f8._8_8_;
                    goto LAB_001018f2;
                  }
LAB_00101ab5:
                  std::
                  vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
                  ::
                  _M_realloc_insert<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>const&>
                            ((vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
                              *)local_f8,local_f8._8_8_,local_b8);
                }
                else {
                  Array::operator[](iVar11);
                  Variant::operator_cast_to_Vector(local_118);
                  CowData<int>::_copy_on_write((CowData<int> *)&local_110);
                  piVar26 = local_110;
                  CowData<int>::_copy_on_write((CowData<int> *)&local_110);
                  if (local_110 == (int *)0x0) {
                    piVar25 = (int *)0x0;
                    if (piVar26 == (int *)0x0) goto LAB_00101840;
LAB_001017a3:
                    do {
                      lVar17 = (long)*piVar26;
                      if (lVar17 < 0) {
                        if (local_120 != (undefined8 *)0x0) {
LAB_001019f0:
                          lVar19 = local_120[-1];
                          goto LAB_001019f4;
                        }
LAB_00101a9d:
                        lVar19 = 0;
LAB_001019f4:
                        _err_print_index_error
                                  ("get","./core/templates/cowdata.h",0xdb,lVar17,lVar19,"p_index",
                                   "size()","",false,true);
                        _err_flush_stdout();
                    /* WARNING: Does not return */
                        pcVar2 = (code *)invalidInstructionException();
                        (*pcVar2)();
                      }
                      if (local_120 == (undefined8 *)0x0) goto LAB_00101a9d;
                      if ((long)local_120[-1] <= lVar17) goto LAB_001019f0;
                      local_108 = (double)(float)local_120[lVar17];
                      dStack_100 = (double)(float)((ulong)local_120[lVar17] >> 0x20);
                      if ((double *)local_b8._8_8_ == local_a8) {
                        std::
                        vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>
                        ::_M_realloc_insert<Clipper2Lib::Point<double>const&>
                                  ((vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>
                                    *)local_b8,local_b8._8_8_,&local_108);
                      }
                      else {
                        *(double *)local_b8._8_8_ = local_108;
                        *(double *)(local_b8._8_8_ + 8) = dStack_100;
                        local_b8._8_8_ = (double *)(local_b8._8_8_ + 0x10);
                      }
                      piVar26 = piVar26 + 1;
                    } while (piVar25 != piVar26);
                    if (local_110 == (int *)0x0) goto LAB_00101840;
                  }
                  else {
                    piVar25 = local_110 + *(long *)(local_110 + -2);
                    if (piVar25 != piVar26) goto LAB_001017a3;
                  }
                  piVar26 = local_110;
                  LOCK();
                  plVar21 = (long *)(local_110 + -4);
                  *plVar21 = *plVar21 + -1;
                  UNLOCK();
                  if (*plVar21 == 0) {
                    local_110 = (int *)0x0;
                    Memory::free_static(piVar26 + -4,false);
                  }
LAB_00101840:
                  pauVar24 = (undefined1 (*) [16])local_f8._8_8_;
                  plVar21 = (long *)local_b8._0_8_;
                  if ((undefined1 (*) [16])local_f8._8_8_ == local_e8) {
                    plVar22 = (long *)((long)local_a8 - local_b8._0_8_);
                    goto LAB_00101ab5;
                  }
                  uVar7 = local_b8._8_8_;
                  *(undefined8 *)*(undefined1 (*) [16])(local_f8._8_8_ + 0x10) = 0;
                  *(undefined1 (*) [16])local_f8._8_8_ = (undefined1  [16])0x0;
                  uVar14 = local_b8._8_8_ - local_b8._0_8_;
                  if (uVar14 == 0) {
                    lVar17 = 0;
                    pvVar15 = (void *)0x0;
                    plVar22 = (long *)((long)local_a8 - local_b8._0_8_);
                  }
                  else {
                    if (0x7ffffffffffffff0 < uVar14) {
                      if (-1 < (long)uVar14) {
                        std::__throw_bad_alloc();
                        goto LAB_00101f97;
                      }
                      std::__throw_bad_array_new_length();
                      param_2 = plVar21;
                      plVar13 = plVar22;
                      goto LAB_00101f82;
                    }
                    pvVar15 = operator_new(uVar14);
                    lVar17 = uVar14 + (long)pvVar15;
                    plVar22 = (long *)((long)local_a8 - (long)plVar21);
                  }
                  *(long *)*(undefined1 (*) [16])((undefined8)pauVar24 + 1) = lVar17;
                  lVar17 = 0;
                  *(void **)*pauVar24 = pvVar15;
                  if (plVar21 != (long *)uVar7) {
                    do {
                      uVar1 = ((undefined8 *)((long)plVar21 + lVar17))[1];
                      *(undefined8 *)((long)pvVar15 + lVar17) =
                           *(undefined8 *)((long)plVar21 + lVar17);
                      ((undefined8 *)((long)pvVar15 + lVar17))[1] = uVar1;
                      lVar17 = lVar17 + 0x10;
                    } while (lVar17 != uVar7 - (long)plVar21);
                    pvVar15 = (void *)((long)pvVar15 + lVar17);
                  }
LAB_001018f2:
                  *(void **)(*pauVar24 + 8) = pvVar15;
                  local_f8._8_8_ = pauVar24[1] + 8;
                }
                CowData<Vector2>::_unref((CowData<Vector2> *)&local_120);
                Array::~Array(local_130);
                if (plVar21 != (long *)0x0) {
                  operator_delete(plVar21,(ulong)plVar22);
                }
              }
            }
          }
          Clipper2Lib::BooleanOp((Clipper2Lib *)local_b8,2,1,local_f8,local_d8,2);
          iVar10 = MultiMesh::get_visible_instance_count();
          if (iVar10 == -1) {
LAB_00101f82:
            iVar10 = MultiMesh::get_instance_count();
          }
          (**(code **)(*plVar13 + 0x298))(local_58,plVar13);
          iVar11 = 0;
          Transform2D::operator*(local_98,(Transform2D *)(*param_2 + 0x2c0));
          if (0 < iVar10) {
            do {
              MultiMesh::get_instance_transform_2d((int)local_58);
              Transform2D::operator*((Transform2D *)&local_78,local_98);
              uVar7 = local_b8._8_8_;
              for (plVar13 = (long *)local_b8._0_8_; (long *)uVar7 != plVar13; plVar13 = plVar13 + 3
                  ) {
                pdVar16 = (double *)plVar13[1];
                pdVar23 = (double *)*plVar13;
                dStack_100 = 0.0;
                if (pdVar16 != pdVar23) {
                  do {
                    dVar3 = *pdVar23;
                    dVar4 = pdVar23[1];
                    if (dStack_100 == 0.0) {
                      lVar17 = 1;
                    }
                    else {
                      lVar17 = *(long *)((long)dStack_100 + -8) + 1;
                    }
                    iVar12 = CowData<Vector2>::resize<false>((CowData<Vector2> *)&dStack_100,lVar17)
                    ;
                    if (iVar12 == 0) {
                      if (dStack_100 == 0.0) {
                        lVar19 = -1;
                        lVar17 = 0;
                      }
                      else {
                        lVar17 = *(long *)((long)dStack_100 + -8);
                        lVar19 = lVar17 + -1;
                        if (-1 < lVar19) {
                          CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&dStack_100);
                          *(ulong *)((long)dStack_100 + lVar19 * 8) =
                               CONCAT44((float)dVar4,(float)dVar3);
                          goto LAB_00101c7a;
                        }
                      }
                      _err_print_index_error
                                ("set","./core/templates/cowdata.h",0xcf,lVar19,lVar17,"p_index",
                                 "size()","",false,false);
                    }
                    else {
                      _err_print_error("push_back","./core/templates/vector.h",0x142,
                                       "Condition \"err\" is true. Returning: true",0,0);
                    }
LAB_00101c7a:
                    pdVar23 = pdVar23 + 2;
                  } while (pdVar16 != pdVar23);
                  if (dStack_100 != 0.0) {
                    lVar17 = 0;
                    do {
                      if (*(long *)((long)dStack_100 + -8) <= lVar17) break;
                      uVar1 = *(undefined8 *)((long)dStack_100 + lVar17 * 8);
                      fVar27 = (float)uVar1;
                      fVar28 = (float)((ulong)uVar1 >> 0x20);
                      fVar30 = (float)local_70;
                      uVar14 = (ulong)local_70 >> 0x20;
                      fVar31 = (float)local_78;
                      uVar5 = (ulong)local_78 >> 0x20;
                      fVar29 = (float)local_68;
                      uVar6 = (ulong)local_68 >> 0x20;
                      CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&dStack_100);
                      *(ulong *)((long)dStack_100 + lVar17 * 8) =
                           CONCAT44((float)uVar6 + fVar27 * (float)uVar5 + fVar28 * (float)uVar14,
                                    fVar29 + fVar27 * fVar31 + fVar28 * fVar30);
                      lVar17 = lVar17 + 1;
                    } while (dStack_100 != 0.0);
                  }
                }
                NavigationMeshSourceGeometryData2D::add_obstruction_outline((Vector *)*param_2);
                dVar3 = dStack_100;
                if (dStack_100 != 0.0) {
                  LOCK();
                  plVar22 = (long *)((long)dStack_100 + -0x10);
                  *plVar22 = *plVar22 + -1;
                  UNLOCK();
                  if (*plVar22 == 0) {
                    dStack_100 = 0.0;
                    Memory::free_static((void *)((long)dVar3 + -0x10),false);
                  }
                }
              }
              iVar11 = iVar11 + 1;
            } while (iVar10 != iVar11);
          }
          uVar7 = local_b8._8_8_;
          puVar20 = (undefined8 *)local_b8._0_8_;
          if (local_b8._8_8_ != local_b8._0_8_) {
            do {
              pvVar15 = (void *)*puVar20;
              if (pvVar15 != (void *)0x0) {
                operator_delete(pvVar15,puVar20[2] - (long)pvVar15);
              }
              puVar20 = puVar20 + 3;
            } while ((undefined8 *)uVar7 != puVar20);
          }
          if ((undefined8 *)local_b8._0_8_ != (undefined8 *)0x0) {
            operator_delete((void *)local_b8._0_8_,(long)local_a8 - local_b8._0_8_);
          }
          uVar7 = local_d8._0_8_;
          uVar1 = local_d8._8_8_;
          for (puVar20 = (undefined8 *)local_d8._0_8_; (undefined8 *)uVar1 != puVar20;
              puVar20 = puVar20 + 3) {
            pvVar15 = (void *)*puVar20;
            if (pvVar15 != (void *)0x0) {
              operator_delete(pvVar15,puVar20[2] - (long)pvVar15);
            }
          }
          if ((undefined8 *)uVar7 != (undefined8 *)0x0) {
            operator_delete((void *)uVar7,local_c8 - uVar7);
          }
          uVar7 = local_f8._0_8_;
          uVar1 = local_f8._8_8_;
          for (puVar20 = (undefined8 *)local_f8._0_8_; (undefined8 *)uVar1 != puVar20;
              puVar20 = puVar20 + 3) {
            pvVar15 = (void *)*puVar20;
            if (pvVar15 != (void *)0x0) {
              operator_delete(pvVar15,puVar20[2] - (long)pvVar15);
            }
          }
          if ((undefined8 *)uVar7 != (undefined8 *)0x0) {
            operator_delete((void *)uVar7,(long)local_e8 - uVar7);
          }
          if (((local_138 != (Object *)0x0) && (cVar8 = RefCounted::unreference(), cVar8 != '\0'))
             && (cVar8 = predelete_handler(local_138), cVar8 != '\0')) {
            (**(code **)(*(long *)local_138 + 0x140))(local_138);
            Memory::free_static(local_138,false);
          }
        }
      }
    }
    Ref<MultiMesh>::unref((Ref<MultiMesh> *)&local_140);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101f97:
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



/* Object::_bind_compatibility_methods() */

void Object::_bind_compatibility_methods(void)

{
  return;
}



/* Object::_set(StringName const&, Variant const&) */

undefined8 Object::_set(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_get(StringName const&, Variant&) const */

undefined8 Object::_get(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */

void Object::_get_property_list(List *param_1)

{
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



/* Resource::set_last_modified_time(unsigned long) */

void __thiscall Resource::set_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x198) = param_1;
  return;
}



/* Resource::set_import_last_modified_time(unsigned long) */

void __thiscall Resource::set_import_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x1a0) = param_1;
  return;
}



/* CanvasItem::_edit_get_minimum_size() const */

undefined8 CanvasItem::_edit_get_minimum_size(void)

{
  return 0xbf800000bf800000;
}



/* CanvasItem::_edit_use_pivot() const */

undefined8 CanvasItem::_edit_use_pivot(void)

{
  return 0;
}



/* CanvasItem::_edit_set_pivot(Vector2 const&) */

void CanvasItem::_edit_set_pivot(Vector2 *param_1)

{
  return;
}



/* CanvasItem::_edit_get_pivot() const */

undefined8 CanvasItem::_edit_get_pivot(void)

{
  return 0;
}



/* CanvasItem::_edit_use_rect() const */

undefined8 CanvasItem::_edit_use_rect(void)

{
  return 0;
}



/* CanvasItem::get_anchorable_rect() const */

undefined1  [16] CanvasItem::get_anchorable_rect(void)

{
  return ZEXT816(0);
}



/* MultiMeshInstance2D::is_class_ptr(void*) const */

uint __thiscall MultiMeshInstance2D::is_class_ptr(MultiMeshInstance2D *this,void *param_1)

{
  return (uint)CONCAT71(0x10b7,(undefined4 *)param_1 == &Node2D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b7,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b7,(undefined4 *)param_1 == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b7,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b7,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* MultiMeshInstance2D::_property_can_revertv(StringName const&) const */

undefined8 MultiMeshInstance2D::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* MultiMeshInstance2D::_property_get_revertv(StringName const&, Variant&) const */

undefined8 MultiMeshInstance2D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* NavigationMeshSourceGeometryData2D::is_class_ptr(void*) const */

uint __thiscall
NavigationMeshSourceGeometryData2D::is_class_ptr
          (NavigationMeshSourceGeometryData2D *this,void *param_1)

{
  return (uint)CONCAT71(0x10b7,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b7,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b7,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b7,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* NavigationMeshSourceGeometryData2D::_validate_propertyv(PropertyInfo&) const */

void NavigationMeshSourceGeometryData2D::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* NavigationMeshSourceGeometryData2D::_property_can_revertv(StringName const&) const */

undefined8 NavigationMeshSourceGeometryData2D::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* NavigationMeshSourceGeometryData2D::_property_get_revertv(StringName const&, Variant&) const */

undefined8
NavigationMeshSourceGeometryData2D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* NavigationMeshSourceGeometryData2D::_notificationv(int, bool) */

void NavigationMeshSourceGeometryData2D::_notificationv(int param_1,bool param_2)

{
  return;
}



/* CallableCustomStaticMethodPointer<void, Ref<NavigationPolygon> const&,
   Ref<NavigationMeshSourceGeometryData2D>, Node*>::~CallableCustomStaticMethodPointer() */

void __thiscall
CallableCustomStaticMethodPointer<void,Ref<NavigationPolygon>const&,Ref<NavigationMeshSourceGeometryData2D>,Node*>
::~CallableCustomStaticMethodPointer
          (CallableCustomStaticMethodPointer<void,Ref<NavigationPolygon>const&,Ref<NavigationMeshSourceGeometryData2D>,Node*>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<CanvasItem, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CanvasItem,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CanvasItem,void> *this)

{
  return;
}



/* MethodBindTRC<Ref<Texture2D>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Ref<Texture2D>>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTRC<Ref<Texture2D>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Ref<Texture2D>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Ref<Texture2D> const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Ref<Texture2D>const&>::_gen_argument_type
          (MethodBindT<Ref<Texture2D>const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x18;
}



/* MethodBindT<Ref<Texture2D> const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Ref<Texture2D>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Ref<MultiMesh>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Ref<MultiMesh>>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTRC<Ref<MultiMesh>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Ref<MultiMesh>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Ref<MultiMesh> const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Ref<MultiMesh>const&>::_gen_argument_type
          (MethodBindT<Ref<MultiMesh>const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x18;
}



/* MethodBindT<Ref<MultiMesh> const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Ref<MultiMesh>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* CallableCustomStaticMethodPointer<void, Ref<NavigationPolygon> const&,
   Ref<NavigationMeshSourceGeometryData2D>, Node*>::is_valid() const */

undefined8
CallableCustomStaticMethodPointer<void,Ref<NavigationPolygon>const&,Ref<NavigationMeshSourceGeometryData2D>,Node*>
::is_valid(void)

{
  return 1;
}



/* CallableCustomStaticMethodPointer<void, Ref<NavigationPolygon> const&,
   Ref<NavigationMeshSourceGeometryData2D>, Node*>::get_object() const */

undefined8
CallableCustomStaticMethodPointer<void,Ref<NavigationPolygon>const&,Ref<NavigationMeshSourceGeometryData2D>,Node*>
::get_object(void)

{
  return 0;
}



/* CallableCustomStaticMethodPointer<void, Ref<NavigationPolygon> const&,
   Ref<NavigationMeshSourceGeometryData2D>, Node*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomStaticMethodPointer<void,Ref<NavigationPolygon>const&,Ref<NavigationMeshSourceGeometryData2D>,Node*>
::get_argument_count
          (CallableCustomStaticMethodPointer<void,Ref<NavigationPolygon>const&,Ref<NavigationMeshSourceGeometryData2D>,Node*>
           *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointer<CanvasItem, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<CanvasItem,void>::get_argument_count
          (CallableCustomMethodPointer<CanvasItem,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<CanvasItem, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CanvasItem,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CanvasItem,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomStaticMethodPointer<void, Ref<NavigationPolygon> const&,
   Ref<NavigationMeshSourceGeometryData2D>, Node*>::~CallableCustomStaticMethodPointer() */

void __thiscall
CallableCustomStaticMethodPointer<void,Ref<NavigationPolygon>const&,Ref<NavigationMeshSourceGeometryData2D>,Node*>
::~CallableCustomStaticMethodPointer
          (CallableCustomStaticMethodPointer<void,Ref<NavigationPolygon>const&,Ref<NavigationMeshSourceGeometryData2D>,Node*>
           *this)

{
  operator_delete(this,0x30);
  return;
}



/* MethodBindT<Ref<MultiMesh> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<MultiMesh>const&>::~MethodBindT(MethodBindT<Ref<MultiMesh>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010b618;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<MultiMesh> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<MultiMesh>const&>::~MethodBindT(MethodBindT<Ref<MultiMesh>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010b618;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Ref<MultiMesh>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<MultiMesh>>::~MethodBindTRC(MethodBindTRC<Ref<MultiMesh>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010b678;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Ref<MultiMesh>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<MultiMesh>>::~MethodBindTRC(MethodBindTRC<Ref<MultiMesh>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010b678;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Ref<Texture2D> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Texture2D>const&>::~MethodBindT(MethodBindT<Ref<Texture2D>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010b6d8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<Texture2D> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Texture2D>const&>::~MethodBindT(MethodBindT<Ref<Texture2D>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010b6d8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Ref<Texture2D>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Texture2D>>::~MethodBindTRC(MethodBindTRC<Ref<Texture2D>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010b738;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Ref<Texture2D>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Texture2D>>::~MethodBindTRC(MethodBindTRC<Ref<Texture2D>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010b738;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
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



/* NavigationMeshSourceGeometryData2D::_getv(StringName const&, Variant&) const */

undefined8 NavigationMeshSourceGeometryData2D::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_get) {
    uVar1 = NavigationMeshSourceGeometryData2D::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* NavigationMeshSourceGeometryData2D::_setv(StringName const&, Variant const&) */

undefined8 NavigationMeshSourceGeometryData2D::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_0010f008 != Object::_set) {
    uVar1 = NavigationMeshSourceGeometryData2D::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* Clipper2Lib::ClipperD::~ClipperD() */

void __thiscall Clipper2Lib::ClipperD::~ClipperD(ClipperD *this)

{
  *(undefined ***)this = &PTR__ClipperD_0010b1e8;
  Clipper2Lib::ClipperBase::~ClipperBase((ClipperBase *)this);
  return;
}



/* Clipper2Lib::ClipperD::~ClipperD() */

void __thiscall Clipper2Lib::ClipperD::~ClipperD(ClipperD *this)

{
  *(undefined ***)this = &PTR__ClipperD_0010b1e8;
  Clipper2Lib::ClipperBase::~ClipperBase((ClipperBase *)this);
  operator_delete(this,0x110);
  return;
}



/* MultiMeshInstance2D::_getv(StringName const&, Variant&) const */

undefined8 MultiMeshInstance2D::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_0010f010 != Object::_get) {
    uVar1 = CanvasItem::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* MultiMeshInstance2D::_setv(StringName const&, Variant const&) */

undefined8 MultiMeshInstance2D::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_0010f018 != Object::_set) {
    uVar1 = CanvasItem::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* CallableCustomMethodPointer<CanvasItem, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<CanvasItem,void>::get_object
          (CallableCustomMethodPointer<CanvasItem,void> *this)

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
      goto LAB_0010269d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010269d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010269d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* MultiMeshInstance2D::_validate_propertyv(PropertyInfo&) const */

void MultiMeshInstance2D::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  if ((code *)PTR__validate_property_0010f020 == Node::_validate_property) {
    return;
  }
  CanvasItem::_validate_property(param_1);
  return;
}



/* MultiMeshInstance2D::_notificationv(int, bool) */

void __thiscall
MultiMeshInstance2D::_notificationv(MultiMeshInstance2D *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((param_1 == 0x1e) && (*(long *)(this + 0x580) != 0)) {
      CanvasItem::draw_multimesh((Ref *)this,(Ref *)(this + 0x580));
    }
    if ((code *)PTR__notification_0010f028 != CanvasItem::_notification) {
      Node2D::_notification(iVar1);
    }
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  if ((code *)PTR__notification_0010f028 != CanvasItem::_notification) {
    Node2D::_notification(iVar1);
  }
  if ((param_1 == 0x1e) && (*(long *)(this + 0x580) != 0)) {
    CanvasItem::draw_multimesh((Ref *)this,(Ref *)(this + 0x580));
    return;
  }
  return;
}



/* Resource::get_base_extension() const */

Resource * __thiscall Resource::get_base_extension(Resource *this)

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



/* NavigationMeshSourceGeometryData2D::_get_class_namev() const */

undefined8 * NavigationMeshSourceGeometryData2D::_get_class_namev(void)

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
LAB_001029a3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001029a3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "NavigationMeshSourceGeometryData2D");
      goto LAB_00102a0e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "NavigationMeshSourceGeometryData2D");
LAB_00102a0e:
  return &_get_class_namev()::_class_name_static;
}



/* MultiMeshInstance2D::_get_class_namev() const */

undefined8 * MultiMeshInstance2D::_get_class_namev(void)

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
LAB_00102a93:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00102a93;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"MultiMeshInstance2D");
      goto LAB_00102afe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"MultiMeshInstance2D");
LAB_00102afe:
  return &_get_class_namev()::_class_name_static;
}



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* MultiMeshInstance2D::_bind_methods() [clone .cold] */

void MultiMeshInstance2D::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector2>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector2>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* MultiMeshInstance2D::get_class() const */

void MultiMeshInstance2D::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* NavigationMeshSourceGeometryData2D::get_class() const */

void NavigationMeshSourceGeometryData2D::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* std::vector<std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> > >,
   std::allocator<std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> > >
   > >::reserve(unsigned long) */

void __thiscall
std::
vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
::reserve(vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
          *this,ulong param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  if (0x555555555555555 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::reserve");
  }
  lVar1 = *(long *)this;
  if (param_1 <= (ulong)((*(long *)(this + 0x10) - lVar1 >> 3) * -0x5555555555555555)) {
    return;
  }
  lVar2 = *(long *)(this + 8);
  puVar8 = (undefined8 *)operator_new(param_1 * 0x18);
  puVar3 = *(undefined8 **)(this + 8);
  puVar4 = *(undefined8 **)this;
  puVar7 = puVar8;
  for (puVar9 = puVar4; puVar3 != puVar9; puVar9 = puVar9 + 3) {
    uVar6 = puVar9[1];
    uVar5 = puVar9[2];
    *puVar7 = *puVar9;
    puVar7[1] = uVar6;
    puVar7[2] = uVar5;
    puVar7 = puVar7 + 3;
  }
  if (puVar4 != (undefined8 *)0x0) {
    operator_delete(puVar4,*(long *)(this + 0x10) - (long)puVar4);
  }
  *(undefined8 **)this = puVar8;
  *(long *)(this + 8) = (lVar2 - lVar1) + (long)puVar8;
  *(undefined8 **)(this + 0x10) = puVar8 + param_1 * 3;
  return;
}



/* Callable create_custom_callable_function_pointer<CanvasItem>(CanvasItem*, char const*, void
   (CanvasItem::*)()) */

CanvasItem *
create_custom_callable_function_pointer<CanvasItem>
          (CanvasItem *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC13;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0010b4f8;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 8));
  return;
}



/* MethodBindTRC<Ref<Texture2D>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Ref<Texture2D>>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = "Texture2D";
  local_40 = 9;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar1 = 0x18;
  puVar1[6] = 0x11;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_58);
    puVar1[10] = 6;
    if (puVar1[6] != 0x11) {
      StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
      goto LAB_001033c5;
    }
  }
  StringName::StringName((StringName *)&local_48,(String *)(puVar1 + 8),false);
  if (*(char **)(puVar1 + 4) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(char **)(puVar1 + 4) = local_48;
  }
LAB_001033c5:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<MultiMesh>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Ref<MultiMesh>>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = "MultiMesh";
  local_40 = 9;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar1 = 0x18;
  puVar1[6] = 0x11;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_58);
    puVar1[10] = 6;
    if (puVar1[6] != 0x11) {
      StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
      goto LAB_00103535;
    }
  }
  StringName::StringName((StringName *)&local_48,(String *)(puVar1 + 8),false);
  if (*(char **)(puVar1 + 4) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(char **)(puVar1 + 4) = local_48;
  }
LAB_00103535:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<CanvasItem, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<CanvasItem,void>::call
          (CallableCustomMethodPointer<CanvasItem,void> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar5 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar5 << 8);
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      local_48 = (char *)(uVar5 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    uVar5 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar5 != (*puVar4 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_001037cf;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_001037cf;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001037a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00103891;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_001037cf:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC25,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00103891:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CanvasItem::is_class(String const&) const */

undefined8 __thiscall CanvasItem::is_class(CanvasItem *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010391f;
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
LAB_0010391f:
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
    if (cVar6 != '\0') goto LAB_001039d3;
  }
  cVar6 = String::operator==(param_1,"CanvasItem");
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
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_001039d3;
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
                if (lVar5 == 0) goto LAB_00103b33;
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
LAB_00103b33:
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
        if (cVar6 != '\0') goto LAB_001039d3;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
      goto LAB_00103bdc;
    }
  }
LAB_001039d3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00103bdc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MultiMeshInstance2D::is_class(String const&) const */

undefined8 __thiscall MultiMeshInstance2D::is_class(MultiMeshInstance2D *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_00103c5f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_00103c5f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_00103d13;
  }
  cVar6 = String::operator==(param_1,"MultiMeshInstance2D");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_00103d13;
    }
    cVar6 = String::operator==(param_1,"Node2D");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = CanvasItem::is_class((CanvasItem *)this,param_1);
        return uVar8;
      }
      goto LAB_00103e1e;
    }
  }
LAB_00103d13:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00103e1e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::initialize_class() [clone .part.0] */

void Resource::initialize_class(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
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
    if ((code *)PTR__bind_methods_0010f038 != RefCounted::_bind_methods) {
      RefCounted::_bind_methods();
    }
    RefCounted::initialize_class()::initialized = '\x01';
  }
  local_58 = "RefCounted";
  local_68 = 0;
  local_50 = 10;
  String::parse_latin1((StrRange *)&local_68);
  StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
  local_58 = "Resource";
  local_70 = 0;
  local_50 = 8;
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
  if ((code *)PTR__bind_methods_0010f030 != RefCounted::_bind_methods) {
    Resource::_bind_methods();
  }
  initialize_class()::initialized = 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* NavigationMeshSourceGeometryData2D::_initialize_classv() */

void NavigationMeshSourceGeometryData2D::_initialize_classv(void)

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
    if (Resource::initialize_class()::initialized == '\0') {
      Resource::initialize_class();
    }
    local_58 = 0;
    local_40 = 8;
    local_48 = "Resource";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "NavigationMeshSourceGeometryData2D";
    local_60 = 0;
    local_40 = 0x22;
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
    if ((code *)PTR__bind_methods_0010f040 != Resource::_bind_methods) {
      NavigationMeshSourceGeometryData2D::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
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
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0010423f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010423f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_001042f3;
  }
  cVar6 = String::operator==(param_1,"RefCounted");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_001042f3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = String::operator==(param_1,"Object");
      return uVar8;
    }
  }
  else {
LAB_001042f3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::is_class(String const&) const */

undefined8 __thiscall Resource::is_class(Resource *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010446f;
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
LAB_0010446f:
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
    if (cVar5 != '\0') goto LAB_00104523;
  }
  cVar5 = String::operator==(param_1,"Resource");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00104523:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* NavigationMeshSourceGeometryData2D::is_class(String const&) const */

undefined8 __thiscall
NavigationMeshSourceGeometryData2D::is_class
          (NavigationMeshSourceGeometryData2D *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_001045ef;
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
LAB_001045ef:
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
    if (cVar5 != '\0') goto LAB_001046a3;
  }
  cVar5 = String::operator==(param_1,"NavigationMeshSourceGeometryData2D");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Resource::is_class((Resource *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_001046a3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void Node::_get_property_listv(List *param_1,bool param_2)

{
  undefined7 in_register_00000031;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = &_LC27;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC27;
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
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
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
      goto LAB_0010485c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010485c:
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)CONCAT71(in_register_00000031,param_2),
             (PropertyInfo *)&local_78);
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
  ClassDB::get_property_list
            ((StringName *)&local_78,(List *)CONCAT71(in_register_00000031,param_2),true,
             (Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  undefined7 in_register_00000031;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = "RefCounted";
  local_88 = 0;
  local_90 = 0;
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
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
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
      goto LAB_00104aac;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00104aac:
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)CONCAT71(in_register_00000031,param_2),
             (PropertyInfo *)&local_78);
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
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list
            ((StringName *)&local_78,(List *)CONCAT71(in_register_00000031,param_2),true,
             (Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Resource";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Resource";
  local_98 = 0;
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
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
      goto LAB_00104d11;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00104d11:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Resource",false);
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



/* NavigationMeshSourceGeometryData2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*,
   bool) const */

void __thiscall
NavigationMeshSourceGeometryData2D::_get_property_listv
          (NavigationMeshSourceGeometryData2D *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "NavigationMeshSourceGeometryData2D";
  local_70 = 0x22;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "NavigationMeshSourceGeometryData2D";
  local_98 = 0;
  local_70 = 0x22;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
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
      goto LAB_00104fc1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00104fc1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"NavigationMeshSourceGeometryData2D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Resource::_get_property_listv((Resource *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall CanvasItem::_get_property_listv(CanvasItem *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Node::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "CanvasItem";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "CanvasItem";
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
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
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
      goto LAB_00105271;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00105271:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"CanvasItem",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_0010f048 != Object::_get_property_list) {
    CanvasItem::_get_property_list((List *)this);
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Node2D::_get_property_listv(Node2D *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    CanvasItem::_get_property_listv((CanvasItem *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Node2D";
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Node2D";
  local_98 = 0;
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
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
      goto LAB_00105541;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00105541:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Node2D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      CanvasItem::_get_property_listv((CanvasItem *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MultiMeshInstance2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
MultiMeshInstance2D::_get_property_listv(MultiMeshInstance2D *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Node2D::_get_property_listv((Node2D *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "MultiMeshInstance2D";
  local_70 = 0x13;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "MultiMeshInstance2D";
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
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
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
      goto LAB_001057f1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001057f1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"MultiMeshInstance2D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node2D::_get_property_listv((Node2D *)this,param_1,true);
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
  void *pvVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)this;
  if (plVar4 == (long *)0x0) {
    return;
  }
  do {
    pvVar1 = (void *)*plVar4;
    if (pvVar1 == (void *)0x0) {
      if ((int)plVar4[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)((long)pvVar1 + 0x40) == plVar4) {
      lVar3 = *(long *)((long)pvVar1 + 0x30);
      lVar2 = *(long *)((long)pvVar1 + 0x38);
      *plVar4 = lVar3;
      if (pvVar1 == (void *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x30) = lVar3;
        lVar3 = *(long *)((long)pvVar1 + 0x30);
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x38) = lVar2;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 0x20));
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar1 + 0x10) != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 8));
      Memory::free_static(pvVar1,false);
      *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar4 = *(long **)this;
  } while ((int)plVar4[2] != 0);
  Memory::free_static(plVar4,false);
  return;
}



/* MethodBindT<Ref<MultiMesh> const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Ref<MultiMesh>const&>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  char *local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_70 = 0;
    local_78 = 0;
    local_68 = "MultiMesh";
    local_60 = 9;
    String::parse_latin1((StrRange *)&local_78);
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,0x18,(CowData<char32_t> *)&local_80,0x11,
               (StrRange *)&local_78,6,&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    *puVar2 = local_68._0_4_;
    if (*(long *)(puVar2 + 2) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_50;
    if (*(long *)(puVar2 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Texture2D> const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Ref<Texture2D>const&>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != 0) goto LAB_00105cf9;
  local_78 = 0;
  local_68 = "Texture2D";
  local_80 = 0;
  local_60._0_8_ = 9;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (char *)CONCAT44(local_68._4_4_,0x18);
  local_50 = 0x11;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00105eb5:
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
    if (local_50 == 0x11) goto LAB_00105eb5;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00105cf9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar4;
}



/* void std::vector<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > >,
   std::allocator<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double>
   > > > >::_M_realloc_insert<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > >
   const&>(__gnu_cxx::__normal_iterator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > >*,
   std::vector<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> >
   >, std::allocator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > > > >, std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > const&) */

void __thiscall
std::
vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
::
_M_realloc_insert<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>const&>
          (vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>
           *this,undefined8 *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  void *pvVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  long *extraout_RDX;
  long lVar14;
  undefined1 (*pauVar15) [16];
  ulong uVar16;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  lVar5 = (long)puVar1 - (long)puVar2 >> 3;
  uVar6 = lVar5 * -0x5555555555555555;
  if (uVar6 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  pauVar15 = (undefined1 (*) [16])((long)param_2 - (long)puVar2);
  if (puVar2 == puVar1) {
    if (uVar6 != 0xffffffffffffffff) {
      uVar16 = 0x555555555555555;
      if (uVar6 + 1 < 0x555555555555556) {
        uVar16 = uVar6 + 1;
      }
      uVar6 = uVar16 * 0x18;
      goto LAB_00106125;
    }
  }
  else {
    uVar16 = lVar5 * 0x5555555555555556;
    if (uVar6 <= uVar16) {
      if (uVar16 != 0) goto LAB_00106195;
      puVar11 = (undefined8 *)0x0;
      goto LAB_00105fb2;
    }
  }
  uVar6 = 0x7ffffffffffffff8;
  uVar16 = 0x555555555555555;
LAB_00106125:
  while( true ) {
    puVar11 = (undefined8 *)operator_new(uVar6);
LAB_00105fb2:
    lVar5 = param_3[1];
    lVar14 = *param_3;
    pauVar15 = (undefined1 (*) [16])(*pauVar15 + (long)puVar11);
    *(undefined8 *)pauVar15[1] = 0;
    *pauVar15 = (undefined1  [16])0x0;
    uVar6 = lVar5 - lVar14;
    if (uVar6 == 0) break;
    if (uVar6 < 0x7ffffffffffffff1) {
      pvVar7 = operator_new(uVar6);
      lVar5 = param_3[1];
      lVar14 = *param_3;
LAB_00106015:
      *(void **)*pauVar15 = pvVar7;
      *(ulong *)pauVar15[1] = uVar6 + (long)pvVar7;
      if (lVar5 != lVar14) {
        lVar12 = 0;
        do {
          uVar3 = ((undefined8 *)(lVar14 + lVar12))[1];
          *(undefined8 *)((long)pvVar7 + lVar12) = *(undefined8 *)(lVar14 + lVar12);
          ((undefined8 *)((long)pvVar7 + lVar12))[1] = uVar3;
          lVar12 = lVar12 + 0x10;
        } while (lVar5 - lVar14 != lVar12);
        pvVar7 = (void *)((long)pvVar7 + (lVar5 - lVar14));
      }
      *(void **)(*pauVar15 + 8) = pvVar7;
      puVar8 = puVar2;
      puVar13 = puVar11;
      if (param_2 != puVar2) {
        do {
          uVar4 = puVar8[1];
          uVar3 = puVar8[2];
          puVar9 = puVar8 + 3;
          *puVar13 = *puVar8;
          puVar13[1] = uVar4;
          puVar13[2] = uVar3;
          puVar8 = puVar9;
          puVar13 = puVar13 + 3;
        } while (param_2 != puVar9);
        puVar13 = (undefined8 *)
                  ((long)puVar11 +
                  ((long)param_2 + (-0x18 - (long)puVar2) & 0xfffffffffffffff8U) + 0x18);
      }
      puVar8 = puVar13 + 3;
      puVar9 = param_2;
      if (param_2 != puVar1) {
        do {
          uVar4 = puVar9[1];
          uVar3 = puVar9[2];
          puVar10 = puVar9 + 3;
          *puVar8 = *puVar9;
          puVar8[1] = uVar4;
          puVar8[2] = uVar3;
          puVar9 = puVar10;
          puVar8 = puVar8 + 3;
        } while (puVar1 != puVar10);
        puVar8 = (undefined8 *)
                 ((long)puVar13 +
                 ((long)puVar1 + (-0x18 - (long)param_2) & 0xfffffffffffffff8U) + 0x30);
      }
      if (puVar2 != (undefined8 *)0x0) {
        operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
      }
      *(undefined8 **)this = puVar11;
      *(undefined8 **)(this + 8) = puVar8;
      *(undefined8 **)(this + 0x10) = puVar11 + uVar16 * 3;
      return;
    }
    std::__throw_bad_array_new_length();
    param_3 = extraout_RDX;
LAB_00106195:
    if (0x555555555555555 < uVar16) {
      uVar16 = 0x555555555555555;
    }
    uVar6 = uVar16 * 0x18;
  }
  pvVar7 = (void *)0x0;
  goto LAB_00106015;
}



/* MethodBind* create_method_bind<MultiMeshInstance2D, Ref<MultiMesh> const&>(void
   (MultiMeshInstance2D::*)(Ref<MultiMesh> const&)) */

MethodBind *
create_method_bind<MultiMeshInstance2D,Ref<MultiMesh>const&>(_func_void_Ref_ptr *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_Ref_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010b618;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "MultiMeshInstance2D";
  local_30 = 0x13;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<MultiMeshInstance2D, Ref<MultiMesh>>(Ref<MultiMesh>
   (MultiMeshInstance2D::*)() const) */

MethodBind * create_method_bind<MultiMeshInstance2D,Ref<MultiMesh>>(_func_Ref *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010b678;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "MultiMeshInstance2D";
  local_30 = 0x13;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<MultiMeshInstance2D, Ref<Texture2D> const&>(void
   (MultiMeshInstance2D::*)(Ref<Texture2D> const&)) */

MethodBind *
create_method_bind<MultiMeshInstance2D,Ref<Texture2D>const&>(_func_void_Ref_ptr *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_Ref_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010b6d8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "MultiMeshInstance2D";
  local_30 = 0x13;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<MultiMeshInstance2D, Ref<Texture2D>>(Ref<Texture2D>
   (MultiMeshInstance2D::*)() const) */

MethodBind * create_method_bind<MultiMeshInstance2D,Ref<Texture2D>>(_func_Ref *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010b738;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "MultiMeshInstance2D";
  local_30 = 0x13;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MultiMeshInstance2D::_initialize_classv() */

void MultiMeshInstance2D::_initialize_classv(void)

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
    if (Node2D::initialize_class()::initialized == '\0') {
      if (CanvasItem::initialize_class()::initialized == '\0') {
        if (Node::initialize_class()::initialized == '\0') {
          Object::initialize_class();
          local_68 = 0;
          local_50 = 6;
          local_58 = "Object";
          String::parse_latin1((StrRange *)&local_68);
          StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
          local_58 = "Node";
          local_70 = 0;
          local_50 = 4;
          String::parse_latin1((StrRange *)&local_70);
          StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
          if ((StringName::configured != '\0') && (local_58 != (undefined *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          if ((code *)PTR__bind_methods_0010f038 != Node::_bind_methods) {
            Node::_bind_methods();
          }
          Node::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Node";
        local_50 = 4;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "CanvasItem";
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
        CanvasItem::_bind_methods();
        if ((code *)PTR__bind_compatibility_methods_0010f050 != Object::_bind_compatibility_methods)
        {
          CanvasItem::_bind_compatibility_methods();
        }
        CanvasItem::initialize_class()::initialized = '\x01';
      }
      local_58 = "CanvasItem";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "Node2D";
      local_70 = 0;
      local_50 = 6;
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
      if ((code *)PTR__bind_methods_0010f058 != CanvasItem::_bind_methods) {
        Node2D::_bind_methods();
      }
      Node2D::initialize_class()::initialized = '\x01';
    }
    local_58 = "Node2D";
    local_68 = 0;
    local_50 = 6;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "MultiMeshInstance2D";
    local_70 = 0;
    local_50 = 0x13;
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
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Ref<MultiMesh>::unref() */

void __thiscall Ref<MultiMesh>::unref(Ref<MultiMesh> *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)this != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)this;
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        *(undefined8 *)this = 0;
        return;
      }
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* void std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> >
   >::_M_realloc_insert<Clipper2Lib::Point<double>
   const&>(__gnu_cxx::__normal_iterator<Clipper2Lib::Point<double>*,
   std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> > > >,
   Clipper2Lib::Point<double> const&) */

void __thiscall
std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>::
_M_realloc_insert<Clipper2Lib::Point<double>const&>
          (vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>> *this,
          undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  uVar5 = (long)puVar1 - (long)puVar2 >> 4;
  if (uVar5 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  puVar8 = (undefined8 *)((long)param_2 - (long)puVar2);
  if (puVar2 == puVar1) {
    if (0xfffffffffffffffe < uVar5) goto LAB_00106bb8;
    uVar7 = 0x7ffffffffffffff;
    if (uVar5 + 1 < 0x800000000000000) {
      uVar7 = uVar5 + 1;
    }
    uVar7 = uVar7 << 4;
LAB_00106bc2:
    puVar6 = (undefined8 *)operator_new(uVar7);
    uVar3 = param_3[1];
    lVar11 = uVar7 + (long)puVar6;
    puVar10 = puVar6 + 2;
    *(undefined8 *)((long)puVar6 + (long)puVar8) = *param_3;
    ((undefined8 *)((long)puVar6 + (long)puVar8))[1] = uVar3;
    if (param_2 != puVar2) {
LAB_00106b2a:
      puVar8 = puVar6;
      puVar9 = puVar2;
      do {
        puVar10 = puVar8;
        uVar3 = *puVar9;
        uVar4 = puVar9[1];
        puVar9 = puVar9 + 2;
        *puVar10 = uVar3;
        puVar10[1] = uVar4;
        puVar8 = puVar10 + 2;
      } while (puVar10 + 2 != (undefined8 *)(((long)param_2 - (long)puVar2) + (long)puVar6));
      puVar10 = puVar10 + 4;
    }
    puVar8 = puVar10;
    if (param_2 == puVar1) goto LAB_00106b7c;
  }
  else {
    uVar7 = uVar5 * 2;
    if (uVar7 < uVar5) {
LAB_00106bb8:
      uVar7 = 0x7ffffffffffffff0;
      goto LAB_00106bc2;
    }
    if (uVar7 != 0) {
      if (0x7ffffffffffffff < uVar7) {
        uVar7 = 0x7ffffffffffffff;
      }
      uVar7 = uVar7 << 4;
      goto LAB_00106bc2;
    }
    uVar3 = param_3[1];
    lVar11 = 0;
    puVar6 = (undefined8 *)0x0;
    puVar10 = (undefined8 *)0x10;
    *puVar8 = *param_3;
    puVar8[1] = uVar3;
    if (param_2 != puVar2) goto LAB_00106b2a;
  }
  puVar8 = (undefined8 *)((long)puVar10 + ((long)puVar1 - (long)param_2));
  memcpy(puVar10,param_2,(long)puVar1 - (long)param_2);
LAB_00106b7c:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar6;
  *(undefined8 **)(this + 8) = puVar8;
  *(long *)(this + 0x10) = lVar11;
  return;
}



/* CowData<Vector2>::_unref() */

void __thiscall CowData<Vector2>::_unref(CowData<Vector2> *this)

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



/* CowData<Vector2>::_realloc(long) */

undefined8 __thiscall CowData<Vector2>::_realloc(CowData<Vector2> *this,long param_1)

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
/* Error CowData<Vector2>::resize<false>(long) */

undefined8 __thiscall CowData<Vector2>::resize<false>(CowData<Vector2> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  
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
    lVar8 = 0;
    lVar3 = 0;
  }
  else {
    lVar8 = *(long *)(lVar3 + -8);
    if (param_1 == lVar8) {
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
    lVar3 = lVar8 * 8;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00106ff0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 8 - 1;
  uVar4 = uVar4 >> 1 | uVar4;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar7 = uVar4 + 1;
  if (lVar7 == 0) goto LAB_00106ff0;
  if (param_1 <= lVar8) {
    if ((lVar7 != lVar3) && (uVar6 = _realloc(this,lVar7), (int)uVar6 != 0)) {
      return uVar6;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (lVar7 == lVar3) {
LAB_00106f5c:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_00106ef1;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_00106f5c;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar3 = 0;
  }
  memset(puVar9 + lVar3,0,(param_1 - lVar3) * 8);
LAB_00106ef1:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<Vector<Vector2> >::_unref() */

void __thiscall CowData<Vector<Vector2>>::_unref(CowData<Vector<Vector2>> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar2 = *(long *)this;
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        lVar6 = lVar2;
        do {
          if (*(long *)(lVar6 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 8);
              *(undefined8 *)(lVar6 + 8) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x10;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* NavigationMeshSourceGeometryData2D::~NavigationMeshSourceGeometryData2D() */

void __thiscall
NavigationMeshSourceGeometryData2D::~NavigationMeshSourceGeometryData2D
          (NavigationMeshSourceGeometryData2D *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  *(undefined ***)this = &PTR__initialize_classv_0010b010;
  NavigationMeshSourceGeometryData2D::clear();
  if (*(long *)(this + 0x2b8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x2b8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x2b8);
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)(this + 0x2b8) = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        lVar6 = lVar2;
        do {
          if (*(long *)(lVar6 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 8);
              *(undefined8 *)(lVar6 + 8) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x18;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(this + 0x290));
  CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(this + 0x280));
  Resource::~Resource((Resource *)this);
  return;
}



/* NavigationMeshSourceGeometryData2D::~NavigationMeshSourceGeometryData2D() */

void __thiscall
NavigationMeshSourceGeometryData2D::~NavigationMeshSourceGeometryData2D
          (NavigationMeshSourceGeometryData2D *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  *(undefined ***)this = &PTR__initialize_classv_0010b010;
  NavigationMeshSourceGeometryData2D::clear();
  if (*(long *)(this + 0x2b8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x2b8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x2b8);
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)(this + 0x2b8) = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        lVar6 = lVar2;
        do {
          if (*(long *)(lVar6 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 8);
              *(undefined8 *)(lVar6 + 8) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x18;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(this + 0x290));
  CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(this + 0x280));
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x2d8);
  return;
}



/* CallableCustomStaticMethodPointer<void, Ref<NavigationPolygon> const&,
   Ref<NavigationMeshSourceGeometryData2D>, Node*>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomStaticMethodPointer<void,Ref<NavigationPolygon>const&,Ref<NavigationMeshSourceGeometryData2D>,Node*>
::call(CallableCustomStaticMethodPointer<void,Ref<NavigationPolygon>const&,Ref<NavigationMeshSourceGeometryData2D>,Node*>
       *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long *plVar1;
  code *pcVar2;
  Variant *pVVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  char cVar7;
  Object *pOVar8;
  Object *pOVar9;
  Object *pOVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long in_FS_OFFSET;
  Object *local_50;
  Object *local_48;
  long local_40;
  
  pcVar2 = *(code **)(this + 0x28);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (3 < (uint)param_2) {
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 3;
    goto LAB_00107337;
  }
  if (param_2 != 3) {
    *(undefined4 *)param_4 = 4;
    *(undefined4 *)(param_4 + 8) = 3;
    goto LAB_00107337;
  }
  pVVar3 = param_1[2];
  *(undefined4 *)param_4 = 0;
  cVar7 = Variant::can_convert_strict(*(undefined4 *)pVVar3,0x18);
  if (cVar7 == '\0') {
LAB_00107382:
    uVar6 = _LC51;
    *(undefined4 *)param_4 = 2;
    *(undefined8 *)(param_4 + 4) = uVar6;
  }
  else {
    pVVar3 = param_1[2];
    pOVar8 = Variant::operator_cast_to_Object_(pVVar3);
    pOVar10 = Variant::operator_cast_to_Object_(pVVar3);
    if (((pOVar10 == (Object *)0x0) ||
        (lVar11 = __dynamic_cast(pOVar10,&Object::typeinfo,&Node::typeinfo,0), lVar11 == 0)) &&
       (pOVar8 != (Object *)0x0)) goto LAB_00107382;
  }
  pOVar8 = Variant::operator_cast_to_Object_(param_1[2]);
  if (pOVar8 != (Object *)0x0) {
    pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&Node::typeinfo,0);
  }
  cVar7 = Variant::can_convert_strict(*(undefined4 *)param_1[1]);
  uVar6 = _LC52;
  if (cVar7 == '\0') {
    *(undefined4 *)param_4 = 2;
    *(undefined8 *)(param_4 + 4) = uVar6;
  }
  local_50 = (Object *)0x0;
  pOVar9 = (Object *)Variant::get_validated_object();
  pOVar10 = local_50;
  if (pOVar9 != local_50) {
    if (pOVar9 == (Object *)0x0) {
      if (local_50 != (Object *)0x0) {
        local_50 = (Object *)0x0;
LAB_00107445:
        cVar7 = RefCounted::unreference();
        if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar10), cVar7 != '\0')) {
          if (*(code **)(*(long *)pOVar10 + 0x140) ==
              NavigationMeshSourceGeometryData2D::~NavigationMeshSourceGeometryData2D) {
            *(undefined ***)pOVar10 = &PTR__initialize_classv_0010b010;
            NavigationMeshSourceGeometryData2D::clear();
            if (*(long *)(pOVar10 + 0x2b8) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)(pOVar10 + 0x2b8) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar11 = *(long *)(pOVar10 + 0x2b8);
                if (lVar11 == 0) goto LAB_00107876;
                lVar4 = *(long *)(lVar11 + -8);
                *(undefined8 *)(pOVar10 + 0x2b8) = 0;
                if (lVar4 != 0) {
                  lVar13 = 0;
                  lVar12 = lVar11;
                  do {
                    if (*(long *)(lVar12 + 8) != 0) {
                      LOCK();
                      plVar1 = (long *)(*(long *)(lVar12 + 8) + -0x10);
                      *plVar1 = *plVar1 + -1;
                      UNLOCK();
                      if (*plVar1 == 0) {
                        lVar5 = *(long *)(lVar12 + 8);
                        *(undefined8 *)(lVar12 + 8) = 0;
                        Memory::free_static((void *)(lVar5 + -0x10),false);
                      }
                    }
                    lVar13 = lVar13 + 1;
                    lVar12 = lVar12 + 0x18;
                  } while (lVar4 != lVar13);
                }
                Memory::free_static((void *)(lVar11 + -0x10),false);
              }
            }
            CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(pOVar10 + 0x290));
            CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(pOVar10 + 0x280));
            Resource::~Resource((Resource *)pOVar10);
          }
          else {
            (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
          }
          Memory::free_static(pOVar10,false);
        }
      }
    }
    else {
      pOVar9 = (Object *)
               __dynamic_cast(pOVar9,&Object::typeinfo,&NavigationMeshSourceGeometryData2D::typeinfo
                              ,0);
      if (pOVar10 != pOVar9) {
        local_50 = pOVar9;
        if ((pOVar9 != (Object *)0x0) && (cVar7 = RefCounted::reference(), cVar7 == '\0')) {
          local_50 = (Object *)0x0;
        }
        if (pOVar10 != (Object *)0x0) goto LAB_00107445;
      }
    }
  }
  cVar7 = Variant::can_convert_strict(*(undefined4 *)*param_1);
  uVar6 = _LC53;
  if (cVar7 == '\0') {
    *(undefined4 *)param_4 = 2;
    *(undefined8 *)(param_4 + 4) = uVar6;
  }
  local_48 = (Object *)0x0;
  pOVar9 = (Object *)Variant::get_validated_object();
  pOVar10 = local_48;
  if (pOVar9 != local_48) {
    if (pOVar9 == (Object *)0x0) {
      if (local_48 != (Object *)0x0) {
        local_48 = (Object *)0x0;
LAB_001074db:
        cVar7 = RefCounted::unreference();
        if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar10), cVar7 != '\0')) {
          (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
          Memory::free_static(pOVar10,false);
        }
      }
    }
    else {
      pOVar9 = (Object *)__dynamic_cast(pOVar9,&Object::typeinfo,&NavigationPolygon::typeinfo,0);
      if (pOVar10 != pOVar9) {
        local_48 = pOVar9;
        if ((pOVar9 != (Object *)0x0) && (cVar7 = RefCounted::reference(), cVar7 == '\0')) {
          local_48 = (Object *)0x0;
        }
        if (pOVar10 != (Object *)0x0) goto LAB_001074db;
      }
    }
  }
  (*pcVar2)(&local_48,&local_50,pOVar8);
  if (((local_48 != (Object *)0x0) &&
      (cVar7 = RefCounted::unreference(), pOVar8 = local_48, cVar7 != '\0')) &&
     (cVar7 = predelete_handler(local_48), cVar7 != '\0')) {
    (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
    Memory::free_static(pOVar8,false);
  }
  if (((local_50 != (Object *)0x0) &&
      (cVar7 = RefCounted::unreference(), pOVar8 = local_50, cVar7 != '\0')) &&
     (cVar7 = predelete_handler(local_50), cVar7 != '\0')) {
    if (*(code **)(*(long *)pOVar8 + 0x140) ==
        NavigationMeshSourceGeometryData2D::~NavigationMeshSourceGeometryData2D) {
      *(undefined ***)pOVar8 = &PTR__initialize_classv_0010b010;
      NavigationMeshSourceGeometryData2D::clear();
      if (*(long *)(pOVar8 + 0x2b8) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(pOVar8 + 0x2b8) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar11 = *(long *)(pOVar8 + 0x2b8);
          if (lVar11 == 0) {
LAB_00107876:
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          lVar4 = *(long *)(lVar11 + -8);
          *(undefined8 *)(pOVar8 + 0x2b8) = 0;
          if (lVar4 != 0) {
            lVar13 = 0;
            lVar12 = lVar11;
            do {
              if (*(long *)(lVar12 + 8) != 0) {
                LOCK();
                plVar1 = (long *)(*(long *)(lVar12 + 8) + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  lVar5 = *(long *)(lVar12 + 8);
                  *(undefined8 *)(lVar12 + 8) = 0;
                  Memory::free_static((void *)(lVar5 + -0x10),false);
                }
              }
              lVar13 = lVar13 + 1;
              lVar12 = lVar12 + 0x18;
            } while (lVar4 != lVar13);
          }
          Memory::free_static((void *)(lVar11 + -0x10),false);
        }
      }
      CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(pOVar8 + 0x290));
      CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(pOVar8 + 0x280));
      Resource::~Resource((Resource *)pOVar8);
    }
    else {
      (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
    }
    Memory::free_static(pOVar8,false);
  }
LAB_00107337:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* void std::vector<Clipper2Lib::Point<long>, std::allocator<Clipper2Lib::Point<long> >
   >::_M_realloc_insert<Clipper2Lib::Point<long>
   >(__gnu_cxx::__normal_iterator<Clipper2Lib::Point<long>*, std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > >, Clipper2Lib::Point<long>&&) */

void __thiscall
std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::
_M_realloc_insert<Clipper2Lib::Point<long>>
          (vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>> *this,
          undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  uVar5 = (long)puVar1 - (long)puVar2 >> 4;
  if (uVar5 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  puVar8 = (undefined8 *)((long)param_2 - (long)puVar2);
  if (puVar2 == puVar1) {
    if (0xfffffffffffffffe < uVar5) goto LAB_00107988;
    uVar7 = 0x7ffffffffffffff;
    if (uVar5 + 1 < 0x800000000000000) {
      uVar7 = uVar5 + 1;
    }
    uVar7 = uVar7 << 4;
LAB_00107992:
    puVar6 = (undefined8 *)operator_new(uVar7);
    uVar3 = param_3[1];
    lVar11 = uVar7 + (long)puVar6;
    puVar10 = puVar6 + 2;
    *(undefined8 *)((long)puVar6 + (long)puVar8) = *param_3;
    ((undefined8 *)((long)puVar6 + (long)puVar8))[1] = uVar3;
    if (param_2 != puVar2) {
LAB_001078fa:
      puVar8 = puVar6;
      puVar9 = puVar2;
      do {
        puVar10 = puVar8;
        uVar3 = *puVar9;
        uVar4 = puVar9[1];
        puVar9 = puVar9 + 2;
        *puVar10 = uVar3;
        puVar10[1] = uVar4;
        puVar8 = puVar10 + 2;
      } while (puVar10 + 2 != (undefined8 *)(((long)param_2 - (long)puVar2) + (long)puVar6));
      puVar10 = puVar10 + 4;
    }
    puVar8 = puVar10;
    if (param_2 == puVar1) goto LAB_0010794c;
  }
  else {
    uVar7 = uVar5 * 2;
    if (uVar7 < uVar5) {
LAB_00107988:
      uVar7 = 0x7ffffffffffffff0;
      goto LAB_00107992;
    }
    if (uVar7 != 0) {
      if (0x7ffffffffffffff < uVar7) {
        uVar7 = 0x7ffffffffffffff;
      }
      uVar7 = uVar7 << 4;
      goto LAB_00107992;
    }
    uVar3 = param_3[1];
    lVar11 = 0;
    puVar6 = (undefined8 *)0x0;
    puVar10 = (undefined8 *)0x10;
    *puVar8 = *param_3;
    puVar8[1] = uVar3;
    if (param_2 != puVar2) goto LAB_001078fa;
  }
  puVar8 = (undefined8 *)((long)puVar10 + ((long)puVar1 - (long)param_2));
  memcpy(puVar10,param_2,(long)puVar1 - (long)param_2);
LAB_0010794c:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar6;
  *(undefined8 **)(this + 8) = puVar8;
  *(long *)(this + 0x10) = lVar11;
  return;
}



/* std::back_insert_iterator<std::vector<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > >, std::allocator<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > > > >
   std::transform<__gnu_cxx::__normal_iterator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > const*,
   std::vector<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> >
   >, std::allocator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > > > >,
   std::back_insert_iterator<std::vector<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > >, std::allocator<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > > > >, Clipper2Lib::ScalePaths<long,
   double>(std::vector<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > >,
   std::allocator<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double>
   > > > > const&, double, double, int&)::{lambda(auto:1
   const&)#1}>(__gnu_cxx::__normal_iterator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > const*,
   std::vector<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> >
   >, std::allocator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > > > >,
   __gnu_cxx::__normal_iterator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > const*,
   std::vector<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> >
   >, std::allocator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > > > >,
   std::back_insert_iterator<std::vector<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > >, std::allocator<std::vector<Clipper2Lib::Point<long>,
   std::allocator<Clipper2Lib::Point<long> > > > > >, Clipper2Lib::ScalePaths<long,
   double>(std::vector<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > >,
   std::allocator<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double>
   > > > > const&, double, double, int&)::{lambda(auto:1 const&)#1}) [clone .isra.0] */

void std::
     transform<__gnu_cxx::__normal_iterator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>const*,std::vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>>,std::back_insert_iterator<std::vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>>,Clipper2Lib::ScalePaths<long,double>(std::vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>const&,double,double,int&)::_lambda(auto:1_const&)_1_>
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  double *pdVar13;
  undefined8 *puVar14;
  double *pdVar15;
  long in_FS_OFFSET;
  double dVar16;
  double dVar17;
  uint *in_stack_00000008;
  double in_stack_00000010;
  double in_stack_00000018;
  double local_98;
  double local_90;
  long local_68;
  long lStack_60;
  undefined1 local_58 [16];
  long *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != param_2) {
    do {
      local_48 = (long *)0x0;
      local_58 = (undefined1  [16])0x0;
      if (in_stack_00000018 == 0.0 || in_stack_00000010 == 0.0) {
        *in_stack_00000008 = *in_stack_00000008 | 2;
        if (in_stack_00000010 == 0.0) {
          if (in_stack_00000018 == 0.0) {
            local_98 = _LC54;
            local_90 = local_98;
          }
          else {
            local_98 = _LC54;
            local_90 = in_stack_00000018;
          }
        }
        else {
          local_98 = in_stack_00000010;
          local_90 = _LC54;
        }
      }
      else {
        local_90 = in_stack_00000018;
        local_98 = in_stack_00000010;
      }
      pdVar15 = (double *)param_1[1];
      pdVar13 = (double *)*param_1;
      uVar12 = (long)pdVar15 - (long)pdVar13;
      if (0x7ffffffffffffff0 < uVar12) {
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("vector::reserve");
      }
      if (uVar12 != 0) {
        local_58._8_8_ = operator_new(uVar12);
        pdVar15 = (double *)param_1[1];
        local_48 = (long *)(local_58._8_8_ + uVar12);
        pdVar13 = (double *)*param_1;
        local_58._0_8_ = local_58._8_8_;
      }
      for (; pdVar15 != pdVar13; pdVar13 = pdVar13 + 2) {
        while( true ) {
          dVar16 = round(local_98 * *pdVar13);
          dVar17 = round(local_90 * pdVar13[1]);
          local_68 = (long)dVar16;
          lStack_60 = (long)dVar17;
          if ((long *)local_58._8_8_ != local_48) break;
          pdVar13 = pdVar13 + 2;
          vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>::
          _M_realloc_insert<Clipper2Lib::Point<long>>
                    ((vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>> *)
                     local_58,local_58._8_8_,&local_68);
          if (pdVar15 == pdVar13) goto LAB_00107bc0;
        }
        *(long *)local_58._8_8_ = local_68;
        *(long *)(local_58._8_8_ + 8) = lStack_60;
        local_58._8_8_ = (long *)(local_58._8_8_ + 0x10);
      }
LAB_00107bc0:
      puVar14 = (undefined8 *)param_3[1];
      puVar11 = (undefined8 *)param_3[2];
      if (puVar14 == puVar11) {
        puVar1 = (undefined8 *)*param_3;
        puVar9 = (undefined8 *)((long)puVar14 - (long)puVar1);
        uVar12 = ((long)puVar9 >> 3) * -0x5555555555555555;
        if (uVar12 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
          std::__throw_length_error("vector::_M_realloc_insert");
        }
        if (puVar14 == puVar1) {
          uVar7 = uVar12 + 1;
          if (0xfffffffffffffffe < uVar12) goto LAB_00107d65;
          if (0x555555555555555 < uVar7) {
            uVar7 = 0x555555555555555;
          }
          uVar7 = uVar7 * 0x18;
LAB_00107d6f:
          puVar6 = (undefined8 *)operator_new(uVar7);
          plVar4 = local_48;
          uVar2 = local_58._0_8_;
          uVar3 = local_58._8_8_;
          puVar11 = (undefined8 *)param_3[2];
          local_58 = (undefined1  [16])0x0;
          puVar9 = (undefined8 *)((long)puVar9 + (long)puVar6);
          lVar8 = uVar7 + (long)puVar6;
          local_48 = (long *)0x0;
          *puVar9 = uVar2;
          puVar9[1] = uVar3;
          puVar9[2] = plVar4;
          puVar9 = puVar1;
          puVar10 = puVar6;
          if (puVar14 != puVar1) goto LAB_00107d00;
          puVar14 = puVar6 + 3;
        }
        else {
          uVar7 = ((long)puVar9 >> 3) * 0x5555555555555556;
          if (uVar7 < uVar12) {
LAB_00107d65:
            uVar7 = 0x7ffffffffffffff8;
            goto LAB_00107d6f;
          }
          if (uVar7 != 0) {
            if (0x555555555555555 < uVar7) {
              uVar7 = 0x555555555555555;
            }
            uVar7 = uVar7 * 0x18;
            goto LAB_00107d6f;
          }
          lVar8 = 0;
          puVar9[2] = local_48;
          *puVar9 = local_58._0_8_;
          puVar9[1] = local_58._8_8_;
          puVar6 = (undefined8 *)0x0;
          puVar9 = puVar1;
          puVar10 = puVar6;
LAB_00107d00:
          do {
            uVar3 = puVar9[1];
            uVar2 = puVar9[2];
            puVar5 = puVar9 + 3;
            *puVar6 = *puVar9;
            puVar6[1] = uVar3;
            puVar6[2] = uVar2;
            puVar9 = puVar5;
            puVar6 = puVar6 + 3;
          } while (puVar14 != puVar5);
          puVar14 = (undefined8 *)
                    ((long)puVar10 +
                    ((long)puVar14 + (-0x18 - (long)puVar1) & 0xfffffffffffffff8U) + 0x30);
          puVar6 = puVar10;
        }
        if (puVar1 != (undefined8 *)0x0) {
          operator_delete(puVar1,(long)puVar11 - (long)puVar1);
        }
        *param_3 = puVar6;
        param_3[1] = puVar14;
        param_3[2] = lVar8;
      }
      else {
        *puVar14 = local_58._0_8_;
        puVar14[1] = local_58._8_8_;
        puVar14[2] = local_48;
        param_3[1] = puVar14 + 3;
      }
      param_1 = param_1 + 3;
    } while (param_2 != param_1);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Clipper2Lib::BooleanOp(Clipper2Lib::ClipType, Clipper2Lib::FillRule,
   std::vector<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> >
   >, std::allocator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > > > const&,
   std::vector<std::vector<Clipper2Lib::Point<double>, std::allocator<Clipper2Lib::Point<double> >
   >, std::allocator<std::vector<Clipper2Lib::Point<double>,
   std::allocator<Clipper2Lib::Point<double> > > > > const&, int) */

Clipper2Lib * __thiscall
Clipper2Lib::BooleanOp
          (Clipper2Lib *this,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
          undefined8 *param_5,int param_6)

{
  undefined8 *puVar1;
  void *pvVar2;
  double dVar3;
  double dVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  char cVar10;
  int iVar11;
  double *pdVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long in_FS_OFFSET;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 local_1b8 [16];
  long local_1a8;
  uint *local_198;
  double dStack_190;
  double dStack_188;
  undefined1 local_178 [16];
  double local_168;
  undefined **local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_80;
  uint local_7c;
  undefined1 local_77;
  undefined1 local_70 [16];
  undefined8 local_60;
  double local_58;
  double dStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x10 < param_6 + 8U) {
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined1 (*) [16])this = (undefined1  [16])0x0;
    goto LAB_00107e97;
  }
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x10) = 0;
  puVar15 = &local_150;
  for (lVar13 = 0x1c; lVar13 != 0; lVar13 = lVar13 + -1) {
    *puVar15 = 0;
    puVar15 = puVar15 + 1;
  }
  local_120 = (undefined1  [16])0x0;
  local_110 = (undefined1  [16])0x0;
  local_100 = (undefined1  [16])0x0;
  local_f0 = (undefined1  [16])0x0;
  local_e0 = (undefined1  [16])0x0;
  local_c8 = (undefined1  [16])0x0;
  local_b8 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  local_70 = (undefined1  [16])0x0;
  local_158 = &PTR__ClipperD_0010b1e8;
  local_148 = 2;
  local_80 = 1;
  local_77 = 1;
  local_60 = 0;
  dVar16 = pow(_LC58,(double)param_6);
  iVar11 = ilogb(dVar16);
  dVar17 = pow(_LC59,(double)(iVar11 + 1));
  dVar8 = _LC60;
  dVar6 = _LC57;
  dVar7 = _LC56;
  puVar15 = (undefined8 *)*param_4;
  puVar1 = (undefined8 *)param_4[1];
  local_178 = (undefined1  [16])0x0;
  local_168 = 0.0;
  dStack_50 = _LC54 / dVar17;
  puVar14 = puVar15;
  dVar19 = _LC56;
  dVar20 = _LC56;
  dVar18 = _LC57;
  dVar16 = _LC57;
  local_58 = dVar17;
  if (puVar15 == puVar1) {
LAB_001083a1:
    std::
    vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
    ::reserve((vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
               *)local_178,((long)puVar1 - (long)puVar15 >> 3) * -0x5555555555555555);
    local_198 = &local_7c;
    dStack_190 = dVar17;
    dStack_188 = dVar17;
    std::
    transform<__gnu_cxx::__normal_iterator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>const*,std::vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>>,std::back_insert_iterator<std::vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>>,Clipper2Lib::ScalePaths<long,double>(std::vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>const&,double,double,int&)::_lambda(auto:1_const&)_1_>
              (*param_4,param_4[1],
               (vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
                *)local_178);
  }
  else {
    do {
      pdVar5 = (double *)*puVar14;
      while (dVar4 = dVar16, pdVar5 != (double *)puVar14[1]) {
        dVar21 = *pdVar5;
        pdVar12 = pdVar5 + 2;
        dVar3 = dVar21;
        if (dVar21 <= dVar19) {
          dVar3 = dVar19;
        }
        if (dVar18 <= dVar21) {
          dVar21 = dVar18;
        }
        dVar16 = pdVar5[1];
        dVar18 = dVar16;
        if (dVar16 <= dVar20) {
          dVar18 = dVar20;
        }
        pdVar5 = pdVar12;
        dVar19 = dVar3;
        dVar20 = dVar18;
        dVar18 = dVar21;
        if (dVar4 <= dVar16) {
          dVar16 = dVar4;
        }
      }
      puVar14 = puVar14 + 3;
      dVar16 = dVar4;
    } while (puVar1 != puVar14);
    if ((((_LC60 <= dVar18 * dVar17) && (dVar19 * dVar17 <= _LC61)) && (_LC60 <= dVar4 * dVar17)) &&
       (dVar20 * dVar17 <= _LC61)) goto LAB_001083a1;
    local_7c = 0x40;
  }
  Clipper2Lib::ClipperBase::AddPaths((ClipperBase *)&local_158,local_178,0,0);
  uVar9 = local_178._8_8_;
  puVar15 = (undefined8 *)local_178._0_8_;
  if (local_178._8_8_ != local_178._0_8_) {
    do {
      pvVar2 = (void *)*puVar15;
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2,puVar15[2] - (long)pvVar2);
      }
      puVar15 = puVar15 + 3;
    } while ((undefined8 *)uVar9 != puVar15);
  }
  if ((undefined8 *)local_178._0_8_ != (undefined8 *)0x0) {
    operator_delete((void *)local_178._0_8_,(long)local_168 - local_178._0_8_);
  }
  dVar20 = local_58;
  local_1a8 = 0;
  local_1b8 = (undefined1  [16])0x0;
  dVar16 = dVar7;
  dVar19 = dVar6;
  for (puVar15 = (undefined8 *)*param_5; puVar15 != (undefined8 *)param_5[1]; puVar15 = puVar15 + 3)
  {
    pdVar5 = (double *)*puVar15;
    dVar18 = dVar19;
    while (dVar19 = dVar18, pdVar5 != (double *)puVar15[1]) {
      dVar17 = *pdVar5;
      pdVar12 = pdVar5 + 2;
      dVar4 = dVar17;
      if (dVar17 <= dVar7) {
        dVar4 = dVar7;
      }
      if (dVar6 <= dVar17) {
        dVar17 = dVar6;
      }
      dVar18 = pdVar5[1];
      dVar21 = dVar18;
      if (dVar18 <= dVar16) {
        dVar21 = dVar16;
      }
      pdVar5 = pdVar12;
      dVar6 = dVar17;
      dVar7 = dVar4;
      dVar16 = dVar21;
      if (dVar19 <= dVar18) {
        dVar18 = dVar19;
      }
    }
  }
  if (((dVar6 * local_58 < dVar8) || (_LC61 < dVar7 * local_58)) ||
     ((dVar19 * local_58 < dVar8 || (_LC61 < dVar16 * local_58)))) {
    local_7c = local_7c | 0x40;
  }
  else {
    std::
    vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
    ::reserve((vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
               *)local_1b8,((long)param_5[1] - (long)*param_5 >> 3) * -0x5555555555555555);
    local_178._8_8_ = dVar20;
    local_178._0_8_ = &local_7c;
    local_168 = dVar20;
    std::
    transform<__gnu_cxx::__normal_iterator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>const*,std::vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>>,std::back_insert_iterator<std::vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>>,Clipper2Lib::ScalePaths<long,double>(std::vector<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>,std::allocator<std::vector<Clipper2Lib::Point<double>,std::allocator<Clipper2Lib::Point<double>>>>>const&,double,double,int&)::_lambda(auto:1_const&)_1_>
              (*param_5,param_5[1],
               (vector<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>,std::allocator<std::vector<Clipper2Lib::Point<long>,std::allocator<Clipper2Lib::Point<long>>>>>
                *)local_1b8);
  }
  Clipper2Lib::ClipperBase::AddPaths((ClipperBase *)&local_158,local_1b8,1,0);
  uVar9 = local_1b8._8_8_;
  puVar15 = (undefined8 *)local_1b8._0_8_;
  if (local_1b8._8_8_ != local_1b8._0_8_) {
    do {
      pvVar2 = (void *)*puVar15;
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2,puVar15[2] - (long)pvVar2);
      }
      puVar15 = puVar15 + 3;
    } while ((undefined8 *)uVar9 != puVar15);
  }
  if ((undefined8 *)local_1b8._0_8_ != (undefined8 *)0x0) {
    operator_delete((void *)local_1b8._0_8_,local_1a8 - local_1b8._0_8_);
  }
  local_1b8 = (undefined1  [16])0x0;
  local_1a8 = 0;
  cVar10 = Clipper2Lib::ClipperBase::ExecuteInternal((ClipperBase *)&local_158,param_2,param_3,0);
  if (cVar10 != '\0') {
    Clipper2Lib::ClipperD::BuildPathsD((vector *)&local_158,(vector *)this);
  }
  Clipper2Lib::ClipperBase::CleanUp();
  uVar9 = local_1b8._8_8_;
  puVar15 = (undefined8 *)local_1b8._0_8_;
  if (local_1b8._8_8_ != local_1b8._0_8_) {
    do {
      pvVar2 = (void *)*puVar15;
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2,puVar15[2] - (long)pvVar2);
      }
      puVar15 = puVar15 + 3;
    } while ((undefined8 *)uVar9 != puVar15);
  }
  if ((undefined8 *)local_1b8._0_8_ != (undefined8 *)0x0) {
    operator_delete((void *)local_1b8._0_8_,local_1a8 - local_1b8._0_8_);
  }
  local_158 = &PTR__ClipperD_0010b1e8;
  Clipper2Lib::ClipperBase::~ClipperBase((ClipperBase *)&local_158);
LAB_00107e97:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* WARNING: Removing unreachable block (ram,0x00108618) */
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
  local_c0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
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



/* MethodBindTRC<Ref<Texture2D>>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Ref<Texture2D>>::call
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
      local_58 = (Object *)0x1087e8;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC25,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001089e0;
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
LAB_001089e0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Texture2D>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Ref<Texture2D>>::ptrcall
          (MethodBindTRC<Ref<Texture2D>> *this,Object *param_1,void **param_2,void *param_3)

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
      local_48 = (Object *)0x1087e8;
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
      goto LAB_00108cf6;
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
    if (pOVar5 == (Object *)0x0) goto LAB_00108cf6;
    *(undefined8 *)param_3 = 0;
    goto LAB_00108d39;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_00108d39;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_00108d39:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_00108cf6;
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
LAB_00108cf6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Texture2D> const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Ref<Texture2D>const&>::validated_call
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
      local_58 = (Object *)0x1087e8;
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
      goto LAB_00108ff8;
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
LAB_00108fb6:
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
      pOVar4 = (Object *)__dynamic_cast(pOVar4,&Object::typeinfo,&Texture2D::typeinfo,0);
      if (pOVar2 != pOVar4) {
        local_58 = pOVar4;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_58 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_00108fb6;
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
LAB_00108ff8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Texture2D> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<Texture2D>const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      local_48 = (Object *)0x1087e8;
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
      goto LAB_001092bc;
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
LAB_00109298:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_00109298;
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
LAB_001092bc:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<MultiMesh>>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Ref<MultiMesh>>::call
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
      local_58 = (Object *)0x1087e8;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC25,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00109580;
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
LAB_00109580:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<MultiMesh>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Ref<MultiMesh>>::ptrcall
          (MethodBindTRC<Ref<MultiMesh>> *this,Object *param_1,void **param_2,void *param_3)

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
      local_48 = (Object *)0x1087e8;
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
      goto LAB_00109806;
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
    if (pOVar5 == (Object *)0x0) goto LAB_00109806;
    *(undefined8 *)param_3 = 0;
    goto LAB_00109849;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_00109849;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_00109849:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_00109806;
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
LAB_00109806:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<MultiMesh> const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Ref<MultiMesh>const&>::validated_call
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
      local_58 = (Object *)0x1087e8;
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
      goto LAB_00109b08;
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
LAB_00109ac6:
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
      pOVar4 = (Object *)__dynamic_cast(pOVar4,&Object::typeinfo,&MultiMesh::typeinfo,0);
      if (pOVar2 != pOVar4) {
        local_58 = pOVar4;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_58 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_00109ac6;
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
LAB_00109b08:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<MultiMesh> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<MultiMesh>const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      local_48 = (Object *)0x1087e8;
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
      goto LAB_00109dcc;
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
LAB_00109da8:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_00109da8;
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
LAB_00109dcc:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Texture2D> const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<Ref<Texture2D>const&>::call
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
      local_48 = (Object *)0x1087e8;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC25,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010a1b0;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar7 = 3;
LAB_0010a1a5:
    *in_R9 = uVar7;
    in_R9[2] = 1;
    goto LAB_0010a1b0;
  }
  pVVar12 = param_2[5];
  if (pVVar12 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_0010a200;
LAB_0010a1f0:
    pVVar12 = *(Variant **)param_4;
  }
  else {
    lVar2 = *(long *)(pVVar12 + -8);
    if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010a200:
      uVar7 = 4;
      goto LAB_0010a1a5;
    }
    if (in_R8D == 1) goto LAB_0010a1f0;
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
  uVar4 = _LC53;
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
LAB_0010a31d:
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
      pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&Texture2D::typeinfo,0);
      if (pOVar5 != pOVar8) {
        local_48 = pOVar8;
        if (pOVar8 != (Object *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_48 = (Object *)0x0;
          }
        }
        if (pOVar5 != (Object *)0x0) goto LAB_0010a31d;
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
LAB_0010a1b0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<MultiMesh> const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<Ref<MultiMesh>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  char cVar6;
  undefined4 uVar7;
  char *pcVar8;
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
  char *local_50;
  char *local_48;
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
    if (local_48 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = (char *)0x0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC25,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010a5b8;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar7 = 3;
LAB_0010a5ad:
    *in_R9 = uVar7;
    in_R9[2] = 1;
    goto LAB_0010a5b8;
  }
  pVVar12 = param_2[5];
  if (pVVar12 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_0010a610;
LAB_0010a600:
    pVVar12 = *(Variant **)param_4;
  }
  else {
    lVar2 = *(long *)(pVVar12 + -8);
    if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010a610:
      uVar7 = 4;
      goto LAB_0010a5ad;
    }
    if (in_R8D == 1) goto LAB_0010a600;
    lVar10 = (long)((int)lVar2 + -1);
    if (lVar2 <= lVar10) {
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    pVVar12 = pVVar12 + lVar10 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar13 & 1) != 0) {
    pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
  }
  cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar12,0x18);
  uVar5 = _LC53;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar5;
  }
  local_50 = (char *)0x0;
  pcVar8 = (char *)Variant::get_validated_object();
  pcVar3 = local_50;
  if (pcVar8 != local_50) {
    if (pcVar8 == (char *)0x0) {
      if (local_50 != (char *)0x0) {
        local_50 = (char *)0x0;
        local_48 = pcVar3;
        goto LAB_0010a57f;
      }
    }
    else {
      pcVar8 = (char *)__dynamic_cast(pcVar8,&Object::typeinfo,&MultiMesh::typeinfo,0);
      if (pcVar3 != pcVar8) {
        local_48 = pcVar3;
        local_50 = pcVar8;
        if ((pcVar8 != (char *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
          local_50 = (char *)0x0;
        }
LAB_0010a57f:
        Ref<MultiMesh>::unref((Ref<MultiMesh> *)&local_48);
      }
    }
  }
  (*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),(Ref<MultiMesh> *)&local_50);
  Ref<MultiMesh>::unref((Ref<MultiMesh> *)&local_50);
LAB_0010a5b8:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<Ref<MultiMesh>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Ref<MultiMesh>>::validated_call
          (MethodBindTRC<Ref<MultiMesh>> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      local_48 = (Variant **)0x1087e8;
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
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
      goto LAB_0010a8a6;
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
LAB_0010a8a6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Texture2D>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Ref<Texture2D>>::validated_call
          (MethodBindTRC<Ref<Texture2D>> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      local_48 = (Variant **)0x1087e8;
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
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
      goto LAB_0010aad6;
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
LAB_0010aad6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MultiMeshInstance2D::_navmesh_source_geometry_parsing_callback */

void MultiMeshInstance2D::_GLOBAL__sub_I__navmesh_source_geometry_parsing_callback(void)

{
  _navmesh_source_geometry_parsing_callback._0_8_ = 0;
  _navmesh_source_geometry_parsing_callback._8_8_ = 0;
  __cxa_atexit(Callable::~Callable,_navmesh_source_geometry_parsing_callback,&__dso_handle);
  _navmesh_source_geometry_parser = 0;
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

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
/* Clipper2Lib::ClipperD::~ClipperD() */

void __thiscall Clipper2Lib::ClipperD::~ClipperD(ClipperD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Ref<Texture2D>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Texture2D>>::~MethodBindTRC(MethodBindTRC<Ref<Texture2D>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<Texture2D> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Texture2D>const&>::~MethodBindT(MethodBindT<Ref<Texture2D>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Ref<MultiMesh>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<MultiMesh>>::~MethodBindTRC(MethodBindTRC<Ref<MultiMesh>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<MultiMesh> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<MultiMesh>const&>::~MethodBindT(MethodBindT<Ref<MultiMesh>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<CanvasItem, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CanvasItem,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CanvasItem,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomStaticMethodPointer<void, Ref<NavigationPolygon> const&,
   Ref<NavigationMeshSourceGeometryData2D>, Node*>::~CallableCustomStaticMethodPointer() */

void __thiscall
CallableCustomStaticMethodPointer<void,Ref<NavigationPolygon>const&,Ref<NavigationMeshSourceGeometryData2D>,Node*>
::~CallableCustomStaticMethodPointer
          (CallableCustomStaticMethodPointer<void,Ref<NavigationPolygon>const&,Ref<NavigationMeshSourceGeometryData2D>,Node*>
           *this)

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
/* NavigationMeshSourceGeometryData2D::~NavigationMeshSourceGeometryData2D() */

void __thiscall
NavigationMeshSourceGeometryData2D::~NavigationMeshSourceGeometryData2D
          (NavigationMeshSourceGeometryData2D *this)

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


