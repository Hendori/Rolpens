
/* CameraServer::get_feed_count() */

undefined4 __thiscall CameraServer::get_feed_count(CameraServer *this)

{
  if (*(long *)(this + 0x1a8) != 0) {
    return *(undefined4 *)(*(long *)(this + 0x1a8) + -8);
  }
  return 0;
}



/* CameraServer::get_feed(int) */

long * CameraServer::get_feed(int param_1)

{
  long lVar1;
  char cVar2;
  long lVar3;
  int in_EDX;
  long in_RSI;
  undefined4 in_register_0000003c;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)CONCAT44(in_register_0000003c,param_1);
  lVar3 = (long)in_EDX;
  lVar1 = *(long *)(in_RSI + 0x1a8);
  if (in_EDX < 0) {
    if (lVar1 != 0) {
      lVar5 = *(long *)(lVar1 + -8);
      goto LAB_00100079;
    }
  }
  else if (lVar1 != 0) {
    lVar5 = *(long *)(lVar1 + -8);
    if (lVar3 < lVar5) {
      *plVar4 = 0;
      lVar1 = *(long *)(lVar1 + lVar3 * 8);
      if (lVar1 != 0) {
        *plVar4 = lVar1;
        cVar2 = RefCounted::reference();
        if (cVar2 == '\0') {
          *plVar4 = 0;
        }
      }
      return plVar4;
    }
    goto LAB_00100079;
  }
  lVar5 = 0;
LAB_00100079:
  _err_print_index_error
            ("get_feed","servers/camera_server.cpp",0x84,lVar3,lVar5,"p_index","feeds.size()","",
             false,false);
  *plVar4 = 0;
  return plVar4;
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



/* CameraServer::get_feeds() */

void CameraServer::get_feeds(void)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  Variant *pVVar5;
  long lVar6;
  long in_RSI;
  uint uVar7;
  Array *in_RDI;
  long in_FS_OFFSET;
  long local_70;
  Object *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Array::Array(in_RDI);
  local_68 = (Object *)0x104381;
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  local_70 = 0;
  local_60 = 10;
  String::parse_latin1((StrRange *)&local_70);
  StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
  uVar7 = (uint)in_RDI;
  Array::set_typed(uVar7,(StringName *)0x18,(Variant *)&local_68);
  if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
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
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  Array::resize(uVar7);
  lVar2 = *(long *)(in_RSI + 0x1a8);
  for (lVar6 = 0; (lVar2 != 0 && (lVar6 < *(long *)(lVar2 + -8))); lVar6 = lVar6 + 1) {
    get_feed((int)(StringName *)&local_68);
    pOVar3 = local_68;
    Variant::Variant((Variant *)&local_58,local_68);
    pVVar5 = (Variant *)Array::operator[](uVar7);
    if (pVVar5 == (Variant *)&local_58) {
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
    }
    else {
      if (Variant::needs_deinit[*(int *)pVVar5] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar5 = 0;
      *(int *)pVVar5 = (int)local_58;
      *(undefined8 *)(pVVar5 + 8) = local_50._0_8_;
      *(undefined8 *)(pVVar5 + 0x10) = local_50._8_8_;
    }
    if (((pOVar3 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
       (cVar4 = predelete_handler(pOVar3), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
    lVar2 = *(long *)(in_RSI + 0x1a8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CameraServer::get_singleton() */

undefined8 CameraServer::get_singleton(void)

{
  return singleton;
}



/* CameraServer::get_free_id() */

int __thiscall CameraServer::get_free_id(CameraServer *this)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = 0;
  lVar2 = *(long *)(this + 0x1a8);
LAB_00100408:
  do {
    iVar4 = iVar4 + 1;
    if (lVar2 == 0) {
      return iVar4;
    }
    lVar3 = 0;
    bVar5 = false;
    do {
      if (*(long *)(lVar2 + -8) <= lVar3) break;
      if (bVar5) goto LAB_00100408;
      iVar1 = CameraFeed::get_id();
      bVar5 = iVar1 == iVar4;
      lVar2 = *(long *)(this + 0x1a8);
      lVar3 = lVar3 + 1;
    } while (lVar2 != 0);
    if (!bVar5) {
      return iVar4;
    }
  } while( true );
}



/* CameraServer::get_feed_index(int) */

ulong __thiscall CameraServer::get_feed_index(CameraServer *this,int param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *(long *)(this + 0x1a8);
  if (lVar2 == 0) {
    return 0xffffffff;
  }
  uVar3 = 0;
  while( true ) {
    if (*(long *)(lVar2 + -8) <= (long)uVar3) {
      return 0xffffffff;
    }
    iVar1 = CameraFeed::get_id();
    if (iVar1 == param_1) break;
    lVar2 = *(long *)(this + 0x1a8);
    uVar3 = uVar3 + 1;
    if (lVar2 == 0) {
      return 0xffffffff;
    }
  }
  return uVar3 & 0xffffffff;
}



/* CameraServer::get_feed_by_id(int) */

long * CameraServer::get_feed_by_id(int param_1)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int in_EDX;
  long lVar5;
  long in_RSI;
  undefined4 in_register_0000003c;
  long *plVar6;
  long lVar7;
  
  plVar6 = (long *)CONCAT44(in_register_0000003c,param_1);
  lVar5 = 0;
  lVar1 = *(long *)(in_RSI + 0x1a8);
  while( true ) {
    if ((lVar1 == 0) || (*(long *)(lVar1 + -8) <= lVar5)) {
      *plVar6 = 0;
      return plVar6;
    }
    iVar4 = CameraFeed::get_id();
    if (in_EDX == iVar4) break;
    lVar1 = *(long *)(in_RSI + 0x1a8);
    lVar5 = lVar5 + 1;
  }
  lVar1 = *(long *)(in_RSI + 0x1a8);
  lVar5 = (long)(int)lVar5;
  if (lVar1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(lVar1 + -8);
    if (lVar5 < lVar7) {
      *plVar6 = 0;
      lVar1 = *(long *)(lVar1 + lVar5 * 8);
      if (lVar1 == 0) {
        return plVar6;
      }
      *plVar6 = lVar1;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *plVar6 = 0;
        return plVar6;
      }
      return plVar6;
    }
  }
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar5,lVar7,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* CameraServer::feed_texture(int, CameraServer::FeedImage) */

undefined8 CameraServer::feed_texture(long param_1,int param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = *(long *)(param_1 + 0x1a8);
  if (lVar3 != 0) {
    lVar5 = 0;
    while (lVar5 < *(long *)(lVar3 + -8)) {
      iVar2 = CameraFeed::get_id();
      if (param_2 == iVar2) {
        get_feed((int)&local_38);
        uVar4 = CameraFeed::get_texture(local_38);
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(local_38);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)local_38 + 0x140))(local_38);
            Memory::free_static(local_38,false);
          }
        }
        goto LAB_00100653;
      }
      lVar3 = *(long *)(param_1 + 0x1a8);
      lVar5 = lVar5 + 1;
      if (lVar3 == 0) break;
    }
  }
  uVar4 = 0;
  _err_print_error("feed_texture","servers/camera_server.cpp",0x9b,
                   "Condition \"index == -1\" is true. Returning: RID()",0,0);
LAB_00100653:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CameraServer::CameraServer() */

void __thiscall CameraServer::CameraServer(CameraServer *this)

{
  Object::Object((Object *)this);
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined1 (*) [16])(this + 0x188) = (undefined1  [16])0x0;
  *(undefined ***)this = &PTR__initialize_classv_00108e30;
  *(undefined4 *)(this + 0x188) = 1;
  *(undefined8 *)(this + 0x1a8) = 0;
  singleton = this;
  *(undefined1 (*) [16])(this + 0x178) = (undefined1  [16])0x0;
  return;
}



/* CameraServer::_bind_methods() */

void CameraServer::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  char *pcVar4;
  int *piVar5;
  MethodBind *pMVar6;
  undefined4 *puVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  int *piVar11;
  long in_FS_OFFSET;
  long local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  char *local_118;
  undefined8 local_110;
  long local_108;
  long local_100;
  undefined *local_f8;
  int local_f0;
  long local_e8;
  undefined4 local_e0;
  char *local_d8;
  long local_d0;
  long *plStack_c8;
  long lStack_c0;
  long local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 (*local_98 [2]) [16];
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
  local_68 = "index";
  uVar8 = (uint)&local_58;
  local_58 = &local_68;
  D_METHODP((char *)&local_d8,(char ***)"get_feed",uVar8);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar6 = create_method_bind<CameraServer,Ref<CameraFeed>,int>(get_feed);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = plStack_c8;
  if (plStack_c8 != (long *)0x0) {
    LOCK();
    plVar10 = plStack_c8 + -2;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      if (plStack_c8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = plStack_c8[-1];
      lVar9 = 0;
      plStack_c8 = (long *)0x0;
      plVar10 = plVar1;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar10 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar10 = plVar10 + 1;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_d8,(char ***)"get_feed_count",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar6 = create_method_bind<CameraServer,int>(get_feed_count);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = plStack_c8;
  if (plStack_c8 != (long *)0x0) {
    LOCK();
    plVar10 = plStack_c8 + -2;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      if (plStack_c8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = plStack_c8[-1];
      lVar9 = 0;
      plStack_c8 = (long *)0x0;
      plVar10 = plVar1;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar10 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar10 = plVar10 + 1;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_d8,(char ***)"feeds",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar6 = create_method_bind<CameraServer,TypedArray<CameraFeed>>(get_feeds);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = plStack_c8;
  if (plStack_c8 != (long *)0x0) {
    LOCK();
    plVar10 = plStack_c8 + -2;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      if (plStack_c8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = plStack_c8[-1];
      lVar9 = 0;
      plStack_c8 = (long *)0x0;
      plVar10 = plVar1;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar10 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar10 = plVar10 + 1;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  local_68 = "feed";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_d8,(char ***)"add_feed",uVar8);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar6 = create_method_bind<CameraServer,Ref<CameraFeed>const&>(add_feed);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = plStack_c8;
  if (plStack_c8 != (long *)0x0) {
    LOCK();
    plVar10 = plStack_c8 + -2;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      if (plStack_c8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = plStack_c8[-1];
      lVar9 = 0;
      plStack_c8 = (long *)0x0;
      plVar10 = plVar1;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar10 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar10 = plVar10 + 1;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  local_68 = "feed";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_d8,(char ***)"remove_feed",uVar8);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar6 = create_method_bind<CameraServer,Ref<CameraFeed>const&>(remove_feed);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = plStack_c8;
  if (plStack_c8 != (long *)0x0) {
    LOCK();
    plVar10 = plStack_c8 + -2;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      if (plStack_c8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = plStack_c8[-1];
      lVar9 = 0;
      plStack_c8 = (long *)0x0;
      plVar10 = plVar1;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar10 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar10 = plVar10 + 1;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  local_128 = 0;
  local_d8 = "";
  local_130 = 0;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_130);
  local_138 = 0;
  local_d8 = "id";
  local_d0 = 2;
  String::parse_latin1((StrRange *)&local_138);
  local_108 = CONCAT44(local_108._4_4_,2);
  local_100 = 0;
  if (local_138 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)&local_138);
  }
  local_f8 = (undefined *)0x0;
  local_f0 = 0;
  local_e8 = 0;
  if (local_130 == 0) {
LAB_00100e43:
    local_e0 = 6;
    StringName::operator=((StringName *)&local_f8,(StringName *)&local_128);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_130);
    local_e0 = 6;
    if (local_f0 != 0x11) goto LAB_00100e43;
    StringName::StringName((StringName *)&local_d8,(String *)&local_e8,false);
    if (local_f8 == local_d8) {
      if ((StringName::configured != '\0') && (local_d8 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_f8 = local_d8;
    }
  }
  local_120 = 0;
  local_d8 = "camera_feed_added";
  local_d0 = 0x11;
  String::parse_latin1((StrRange *)&local_120);
  local_d8 = (char *)0x0;
  local_d0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 6;
  local_a0 = 1;
  local_98[0] = (undefined1 (*) [16])0x0;
  local_88 = (int *)0x0;
  local_80 = 0;
  local_70 = 0;
  plStack_c8 = (long *)0x0;
  lStack_c0 = 0;
  if ((local_120 == 0) ||
     (CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_120),
     local_98[0] == (undefined1 (*) [16])0x0)) {
    local_98[0] = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined4 *)local_98[0][1] = 0;
    *local_98[0] = (undefined1  [16])0x0;
  }
  puVar7 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar7 + 8) = 0;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  *puVar7 = 0;
  puVar7[6] = 0;
  puVar7[10] = 6;
  *(undefined8 *)(puVar7 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar7 + 0xc) = (undefined1  [16])0x0;
  *puVar7 = (undefined4)local_108;
  if (local_100 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 2),(CowData *)&local_100);
  }
  StringName::operator=((StringName *)(puVar7 + 4),(StringName *)&local_f8);
  puVar7[6] = local_f0;
  if (*(long *)(puVar7 + 8) != local_e8) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 8),(CowData *)&local_e8);
  }
  puVar7[10] = local_e0;
  lVar2 = *(long *)(*local_98[0] + 8);
  *(undefined8 *)(puVar7 + 0xc) = 0;
  *(undefined1 (**) [16])(puVar7 + 0x10) = local_98[0];
  *(long *)(puVar7 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar7;
  }
  lVar2 = *(long *)*local_98[0];
  *(undefined4 **)(*local_98[0] + 8) = puVar7;
  if (lVar2 == 0) {
    *(undefined4 **)*local_98[0] = puVar7;
  }
  *(int *)local_98[0][1] = *(int *)local_98[0][1] + 1;
  local_118 = "CameraServer";
  local_140 = 0;
  local_110 = 0xc;
  String::parse_latin1((StrRange *)&local_140);
  StringName::StringName((StringName *)&local_118,(String *)&local_140,false);
  ClassDB::add_signal((StringName *)&local_118,(MethodInfo *)&local_d8);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_140;
  if (local_140 != 0) {
    LOCK();
    plVar1 = (long *)(local_140 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_140 = 0;
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
  piVar5 = local_88;
  if (local_88 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_88 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_88 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_88 + -2);
      lVar9 = 0;
      local_88 = (int *)0x0;
      piVar11 = piVar5;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar11] != '\0') {
            Variant::_clear_internal();
          }
          lVar9 = lVar9 + 1;
          piVar11 = piVar11 + 6;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(piVar5 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_98);
  lVar2 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    plVar1 = (long *)(local_b0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (lStack_c0 != 0)) {
    StringName::unref();
  }
  plVar1 = plStack_c8;
  if (plStack_c8 != (long *)0x0) {
    LOCK();
    plVar10 = (long *)((long)plStack_c8 + -0x10);
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      plStack_c8 = (long *)0x0;
      Memory::free_static((void *)((long)plVar1 + -0x10),false);
    }
  }
  pcVar4 = local_d8;
  if (local_d8 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar4 + -0x10),false);
    }
  }
  lVar2 = local_120;
  if (local_120 != 0) {
    LOCK();
    plVar1 = (long *)(local_120 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_120 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_e8;
  if (local_e8 != 0) {
    LOCK();
    plVar1 = (long *)(local_e8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_f8 != (undefined *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_100;
  if (local_100 != 0) {
    LOCK();
    plVar1 = (long *)(local_100 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_100 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_138;
  if (local_138 != 0) {
    LOCK();
    plVar1 = (long *)(local_138 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_138 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_130;
  if (local_130 != 0) {
    LOCK();
    plVar1 = (long *)(local_130 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_130 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_128 != 0)) {
    StringName::unref();
  }
  local_128 = 0;
  local_d8 = "";
  local_130 = 0;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_130);
  local_138 = 0;
  local_d8 = "id";
  local_d0 = 2;
  String::parse_latin1((StrRange *)&local_138);
  local_108 = CONCAT44(local_108._4_4_,2);
  local_100 = 0;
  if (local_138 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)&local_138);
  }
  local_f8 = (undefined *)0x0;
  local_f0 = 0;
  local_e8 = 0;
  if (local_130 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_130);
    local_e0 = 6;
    if (local_f0 == 0x11) {
      StringName::StringName((StringName *)&local_d8,(String *)&local_e8,false);
      if (local_f8 == local_d8) {
        if ((StringName::configured != '\0') && (local_d8 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_f8 = local_d8;
      }
      goto LAB_001013cb;
    }
  }
  local_e0 = 6;
  StringName::operator=((StringName *)&local_f8,(StringName *)&local_128);
LAB_001013cb:
  local_120 = 0;
  local_d8 = "camera_feed_removed";
  local_d0 = 0x13;
  String::parse_latin1((StrRange *)&local_120);
  local_d8 = (char *)0x0;
  local_d0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 6;
  local_a0 = 1;
  local_98[0] = (undefined1 (*) [16])0x0;
  local_88 = (int *)0x0;
  local_80 = 0;
  local_70 = 0;
  plStack_c8 = (long *)0x0;
  lStack_c0 = 0;
  if ((local_120 == 0) ||
     (CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_120),
     local_98[0] == (undefined1 (*) [16])0x0)) {
    local_98[0] = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined4 *)local_98[0][1] = 0;
    *local_98[0] = (undefined1  [16])0x0;
  }
  puVar7 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar7 + 8) = 0;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  *puVar7 = 0;
  puVar7[6] = 0;
  puVar7[10] = 6;
  *(undefined8 *)(puVar7 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar7 + 0xc) = (undefined1  [16])0x0;
  *puVar7 = (undefined4)local_108;
  if (local_100 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 2),(CowData *)&local_100);
  }
  StringName::operator=((StringName *)(puVar7 + 4),(StringName *)&local_f8);
  puVar7[6] = local_f0;
  if (*(long *)(puVar7 + 8) != local_e8) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 8),(CowData *)&local_e8);
  }
  puVar7[10] = local_e0;
  lVar2 = *(long *)(*local_98[0] + 8);
  *(undefined8 *)(puVar7 + 0xc) = 0;
  *(undefined1 (**) [16])(puVar7 + 0x10) = local_98[0];
  *(long *)(puVar7 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar7;
  }
  lVar2 = *(long *)*local_98[0];
  *(undefined4 **)(*local_98[0] + 8) = puVar7;
  if (lVar2 == 0) {
    *(undefined4 **)*local_98[0] = puVar7;
  }
  *(int *)local_98[0][1] = *(int *)local_98[0][1] + 1;
  local_118 = "CameraServer";
  local_140 = 0;
  local_110 = 0xc;
  String::parse_latin1((StrRange *)&local_140);
  StringName::StringName((StringName *)&local_118,(String *)&local_140,false);
  ClassDB::add_signal((StringName *)&local_118,(MethodInfo *)&local_d8);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_140;
  if (local_140 != 0) {
    LOCK();
    plVar1 = (long *)(local_140 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_140 = 0;
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
  piVar5 = local_88;
  if (local_88 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_88 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_88 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_88 + -2);
      lVar9 = 0;
      local_88 = (int *)0x0;
      piVar11 = piVar5;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar11] != '\0') {
            Variant::_clear_internal();
          }
          lVar9 = lVar9 + 1;
          piVar11 = piVar11 + 6;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(piVar5 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_98);
  lVar2 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    plVar1 = (long *)(local_b0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (lStack_c0 != 0)) {
    StringName::unref();
  }
  plVar1 = plStack_c8;
  if (plStack_c8 != (long *)0x0) {
    LOCK();
    plVar10 = (long *)((long)plStack_c8 + -0x10);
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      plStack_c8 = (long *)0x0;
      Memory::free_static((void *)((long)plVar1 + -0x10),false);
    }
  }
  pcVar4 = local_d8;
  if (local_d8 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar4 + -0x10),false);
    }
  }
  lVar2 = local_120;
  if (local_120 != 0) {
    LOCK();
    plVar1 = (long *)(local_120 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_120 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_e8;
  if (local_e8 != 0) {
    LOCK();
    plVar1 = (long *)(local_e8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_f8 != (undefined *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_100;
  if (local_100 != 0) {
    LOCK();
    plVar1 = (long *)(local_100 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_100 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_138;
  if (local_138 != 0) {
    LOCK();
    plVar1 = (long *)(local_138 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_138 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_130;
  if (local_130 != 0) {
    LOCK();
    plVar1 = (long *)(local_130 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_130 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_128 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_128,"FEED_RGBA_IMAGE",false);
  local_d8 = "FEED_RGBA_IMAGE";
  local_130 = 0;
  local_d0 = 0xf;
  String::parse_latin1((StrRange *)&local_130);
  local_120 = 0;
  local_d8 = "CameraServer::FeedImage";
  local_d0 = 0x17;
  String::parse_latin1((StrRange *)&local_120);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_118,(String *)&local_120)
  ;
  StringName::StringName((StringName *)&local_108,(String *)&local_118,false);
  local_d8 = (char *)0x2;
  lStack_c0 = 0;
  local_b8 = 0;
  local_b0 = CONCAT44(local_b0._4_4_,0x10006);
  local_d0 = 0;
  plStack_c8 = (long *)0x0;
  StringName::operator=((StringName *)&plStack_c8,(StringName *)&local_108);
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  pcVar4 = local_118;
  if (local_118 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_118 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_118 = (char *)0x0;
      Memory::free_static(pcVar4 + -0x10,false);
    }
  }
  lVar2 = local_120;
  if (local_120 != 0) {
    LOCK();
    plVar1 = (long *)(local_120 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_120 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_b8;
  local_108 = (long)plStack_c8;
  plStack_c8 = (long *)0x0;
  if (local_b8 != 0) {
    LOCK();
    plVar1 = (long *)(local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (plStack_c8 != (long *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_d0;
  if (local_d0 != 0) {
    LOCK();
    plVar1 = (long *)(local_d0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  local_118 = (char *)0x0;
  local_d8 = "CameraServer";
  local_d0 = 0xc;
  String::parse_latin1((StrRange *)&local_118);
  StringName::StringName((StringName *)&local_d8,(String *)&local_118,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_108,(StringName *)&local_128,0,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  pcVar4 = local_118;
  if (local_118 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_118 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_118 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar4 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  lVar2 = local_130;
  if (local_130 != 0) {
    LOCK();
    plVar1 = (long *)(local_130 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_130 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_128 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_128,"FEED_YCBCR_IMAGE",false);
  local_d8 = "FEED_YCBCR_IMAGE";
  local_130 = 0;
  local_d0 = 0x10;
  String::parse_latin1((StrRange *)&local_130);
  local_120 = 0;
  local_d8 = "CameraServer::FeedImage";
  local_d0 = 0x17;
  String::parse_latin1((StrRange *)&local_120);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_118,(String *)&local_120)
  ;
  StringName::StringName((StringName *)&local_108,(String *)&local_118,false);
  local_d8 = (char *)0x2;
  lStack_c0 = 0;
  local_b8 = 0;
  local_b0 = CONCAT44(local_b0._4_4_,0x10006);
  local_d0 = 0;
  plStack_c8 = (long *)0x0;
  StringName::operator=((StringName *)&plStack_c8,(StringName *)&local_108);
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  pcVar4 = local_118;
  if (local_118 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_118 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_118 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar4 + -0x10),false);
    }
  }
  lVar2 = local_120;
  if (local_120 != 0) {
    LOCK();
    plVar1 = (long *)(local_120 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_120 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_b8;
  local_108 = (long)plStack_c8;
  plStack_c8 = (long *)0x0;
  if (local_b8 != 0) {
    LOCK();
    plVar1 = (long *)(local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (plStack_c8 != (long *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_d0;
  if (local_d0 != 0) {
    LOCK();
    plVar1 = (long *)(local_d0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  local_118 = (char *)0x0;
  local_d8 = "CameraServer";
  local_d0 = 0xc;
  String::parse_latin1((StrRange *)&local_118);
  StringName::StringName((StringName *)&local_d8,(String *)&local_118,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_108,(StringName *)&local_128,0,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  pcVar4 = local_118;
  if (local_118 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_118 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_118 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar4 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  lVar2 = local_130;
  if (local_130 != 0) {
    LOCK();
    plVar1 = (long *)(local_130 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_130 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_128 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_128,"FEED_Y_IMAGE",false);
  local_d8 = "FEED_Y_IMAGE";
  local_130 = 0;
  local_d0 = 0xc;
  String::parse_latin1((StrRange *)&local_130);
  local_120 = 0;
  local_d8 = "CameraServer::FeedImage";
  local_d0 = 0x17;
  String::parse_latin1((StrRange *)&local_120);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_118,(String *)&local_120)
  ;
  StringName::StringName((StringName *)&local_108,(String *)&local_118,false);
  local_d8 = (char *)0x2;
  lStack_c0 = 0;
  local_b8 = 0;
  local_b0 = CONCAT44(local_b0._4_4_,0x10006);
  local_d0 = 0;
  plStack_c8 = (long *)0x0;
  StringName::operator=((StringName *)&plStack_c8,(StringName *)&local_108);
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  pcVar4 = local_118;
  if (local_118 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_118 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_118 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar4 + -0x10),false);
    }
  }
  lVar2 = local_120;
  if (local_120 != 0) {
    LOCK();
    plVar1 = (long *)(local_120 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_120 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_b8;
  local_108 = (long)plStack_c8;
  plStack_c8 = (long *)0x0;
  if (local_b8 != 0) {
    LOCK();
    plVar1 = (long *)(local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (plStack_c8 != (long *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_d0;
  if (local_d0 != 0) {
    LOCK();
    plVar1 = (long *)(local_d0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  local_118 = (char *)0x0;
  local_d8 = "CameraServer";
  local_d0 = 0xc;
  String::parse_latin1((StrRange *)&local_118);
  StringName::StringName((StringName *)&local_d8,(String *)&local_118,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_108,(StringName *)&local_128,0,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  pcVar4 = local_118;
  if (local_118 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_118 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_118 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar4 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  lVar2 = local_130;
  if (local_130 != 0) {
    LOCK();
    plVar1 = (long *)(local_130 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_130 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_128 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_128,"FEED_CBCR_IMAGE",false);
  local_d8 = "FEED_CBCR_IMAGE";
  local_130 = 0;
  local_d0 = 0xf;
  String::parse_latin1((StrRange *)&local_130);
  local_d8 = "CameraServer::FeedImage";
  local_120 = 0;
  local_d0 = 0x17;
  String::parse_latin1((StrRange *)&local_120);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_118,(String *)&local_120)
  ;
  StringName::StringName((StringName *)&local_108,(String *)&local_118,false);
  local_d8 = (char *)0x2;
  lStack_c0 = 0;
  local_b8 = 0;
  local_b0 = CONCAT44(local_b0._4_4_,0x10006);
  local_d0 = 0;
  plStack_c8 = (long *)0x0;
  StringName::operator=((StringName *)&plStack_c8,(StringName *)&local_108);
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  pcVar4 = local_118;
  if (local_118 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_118 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_118 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar4 + -0x10),false);
    }
  }
  lVar2 = local_120;
  if (local_120 != 0) {
    LOCK();
    plVar1 = (long *)(local_120 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_120 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_b8;
  local_108 = (long)plStack_c8;
  plStack_c8 = (long *)0x0;
  if (local_b8 != 0) {
    LOCK();
    plVar1 = (long *)(local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (plStack_c8 != (long *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_d0;
  if (local_d0 != 0) {
    LOCK();
    plVar1 = (long *)(local_d0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  local_118 = (char *)0x0;
  local_d8 = "CameraServer";
  local_d0 = 0xc;
  String::parse_latin1((StrRange *)&local_118);
  StringName::StringName((StringName *)&local_d8,(String *)&local_118,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_108,(StringName *)&local_128,1,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  pcVar4 = local_118;
  if (local_118 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_118 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_118 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar4 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  lVar2 = local_130;
  if (local_130 != 0) {
    LOCK();
    plVar1 = (long *)(local_130 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_130 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_128 != 0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CameraServer::~CameraServer() */

void __thiscall CameraServer::~CameraServer(CameraServer *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00108e30;
  singleton = 0;
  CowData<Ref<CameraFeed>>::_unref((CowData<Ref<CameraFeed>> *)(this + 0x1a8));
  Object::~Object((Object *)this);
  return;
}



/* CowData<Ref<CameraFeed> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Ref<CameraFeed>>::_copy_on_write(CowData<Ref<CameraFeed>> *this)

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



/* CameraServer::~CameraServer() */

void __thiscall CameraServer::~CameraServer(CameraServer *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00108e30;
  singleton = 0;
  CowData<Ref<CameraFeed>>::_unref((CowData<Ref<CameraFeed>> *)(this + 0x1a8));
  Object::~Object((Object *)this);
  operator_delete(this,0x1b0);
  return;
}



/* CameraServer::remove_feed(Ref<CameraFeed> const&) */

void __thiscall CameraServer::remove_feed(CameraServer *this,Ref *param_1)

{
  long *plVar1;
  Object *pOVar2;
  Object *pOVar3;
  char *pcVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long in_FS_OFFSET;
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
  char *local_98;
  undefined8 local_90;
  Variant *local_88 [2];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  lVar9 = *(long *)(this + 0x1a8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar9 == 0) goto LAB_00102ca5;
  lVar8 = 0;
  do {
    lVar10 = lVar8;
    if (*(long *)(lVar9 + -8) <= lVar10) goto LAB_00102ca5;
    lVar8 = lVar10 + 1;
  } while (*(long *)(lVar9 + lVar10 * 8) != *(long *)param_1);
  iVar6 = CameraFeed::get_id();
  cVar5 = is_print_verbose_enabled();
  if (cVar5 != '\0') {
    CameraFeed::get_position();
    itos((long)&local_a8);
    local_b8 = 0;
    local_98 = " and position ";
    local_90 = 0xe;
    String::parse_latin1((StrRange *)&local_b8);
    itos((long)&local_c8);
    local_98 = " with ID ";
    local_d8 = 0;
    local_90 = 9;
    String::parse_latin1((StrRange *)&local_d8);
    CameraFeed::get_name();
    operator+((char *)&local_e0,(String *)"CameraServer: Removed camera ");
    String::operator+((String *)&local_d0,(String *)&local_e0);
    String::operator+((String *)&local_c0,(String *)&local_d0);
    String::operator+((String *)&local_b0,(String *)&local_c0);
    String::operator+((String *)&local_a0,(String *)&local_b0);
    Variant::Variant((Variant *)local_78,(String *)&local_a0);
    stringify_variants((Variant *)&local_98);
    __print_line((String *)&local_98);
    pcVar4 = local_98;
    if (local_98 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_98 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_98 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    lVar9 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      plVar1 = (long *)(local_a0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a0 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    lVar9 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      plVar1 = (long *)(local_b0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_b0 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    lVar9 = local_c0;
    if (local_c0 != 0) {
      LOCK();
      plVar1 = (long *)(local_c0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    lVar9 = local_d0;
    if (local_d0 != 0) {
      LOCK();
      plVar1 = (long *)(local_d0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d0 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    lVar9 = local_e0;
    if (local_e0 != 0) {
      LOCK();
      plVar1 = (long *)(local_e0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_e0 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    if (local_e8 != 0) {
      LOCK();
      plVar1 = (long *)(local_e8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_e8 + -0x10),false);
      }
    }
    lVar9 = local_d8;
    if (local_d8 != 0) {
      LOCK();
      plVar1 = (long *)(local_d8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d8 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    lVar9 = local_c8;
    if (local_c8 != 0) {
      LOCK();
      plVar1 = (long *)(local_c8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c8 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    lVar9 = local_b8;
    if (local_b8 != 0) {
      LOCK();
      plVar1 = (long *)(local_b8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_b8 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    lVar9 = local_a8;
    if (local_a8 != 0) {
      LOCK();
      plVar1 = (long *)(local_a8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a8 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
  }
  if (*(long *)(this + 0x1a8) == 0) {
    lVar9 = 0;
LAB_0010307f:
    _err_print_index_error
              ("remove_at","./core/templates/cowdata.h",0xe4,lVar10,lVar9,"p_index","size()","",
               false,false);
  }
  else {
    lVar9 = *(long *)(*(long *)(this + 0x1a8) + -8);
    if (lVar9 <= lVar10) goto LAB_0010307f;
    CowData<Ref<CameraFeed>>::_copy_on_write((CowData<Ref<CameraFeed>> *)(this + 0x1a8));
    lVar9 = *(long *)(this + 0x1a8);
    if (lVar9 == 0) {
      lVar8 = -1;
    }
    else {
      lVar8 = *(long *)(lVar9 + -8) + -1;
      if (lVar10 < lVar8) {
        do {
          while( true ) {
            pOVar2 = *(Object **)(lVar9 + 8 + lVar10 * 8);
            pOVar3 = *(Object **)(lVar9 + lVar10 * 8);
            if (pOVar2 != pOVar3) break;
LAB_00102ba0:
            lVar10 = lVar10 + 1;
            if (lVar10 == lVar8) goto LAB_00102c10;
          }
          *(Object **)(lVar9 + lVar10 * 8) = pOVar2;
          if ((pOVar2 != (Object *)0x0) && (cVar5 = RefCounted::reference(), cVar5 == '\0')) {
            *(undefined8 *)(lVar9 + lVar10 * 8) = 0;
          }
          if (((pOVar3 == (Object *)0x0) || (cVar5 = RefCounted::unreference(), cVar5 == '\0')) ||
             (cVar5 = predelete_handler(pOVar3), cVar5 == '\0')) goto LAB_00102ba0;
          lVar10 = lVar10 + 1;
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
        } while (lVar10 != lVar8);
      }
    }
LAB_00102c10:
    CowData<Ref<CameraFeed>>::resize<false>((CowData<Ref<CameraFeed>> *)(this + 0x1a8),lVar8);
  }
  if ((remove_feed(Ref<CameraFeed>const&)::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar7 = __cxa_guard_acquire(&remove_feed(Ref<CameraFeed>const&)::{lambda()#1}::operator()()::
                                   sname), iVar7 != 0)) {
    _scs_create((char *)&remove_feed(Ref<CameraFeed>const&)::{lambda()#1}::operator()()::sname,true)
    ;
    __cxa_atexit(StringName::~StringName,
                 &remove_feed(Ref<CameraFeed>const&)::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&remove_feed(Ref<CameraFeed>const&)::{lambda()#1}::operator()()::sname);
  }
  Variant::Variant((Variant *)local_78,iVar6);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88[0] = (Variant *)local_78;
  (**(code **)(*(long *)this + 0xd0))
            (this,&remove_feed(Ref<CameraFeed>const&)::{lambda()#1}::operator()()::sname,local_88,1)
  ;
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_00102ca5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CameraServer::add_feed(Ref<CameraFeed> const&) */

void __thiscall CameraServer::add_feed(CameraServer *this,Ref *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  Object *pOVar3;
  char *pcVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  Object *pOVar8;
  long lVar9;
  long lVar10;
  long in_FS_OFFSET;
  long local_108;
  long local_100;
  long local_f8;
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
  char *local_98;
  undefined8 local_90;
  Variant *local_88 [2];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  pOVar8 = *(Object **)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (pOVar8 == (Object *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("add_feed","servers/camera_server.cpp",0x67,
                       "Condition \"p_feed.is_null()\" is true.",0,0);
      return;
    }
    goto LAB_00103a6c;
  }
  cVar5 = RefCounted::reference();
  if (cVar5 == '\0') {
    pOVar8 = (Object *)0x0;
  }
  if (*(long *)(this + 0x1a8) == 0) {
    lVar9 = 1;
  }
  else {
    lVar9 = *(long *)(*(long *)(this + 0x1a8) + -8) + 1;
  }
  iVar6 = CowData<Ref<CameraFeed>>::resize<false>((CowData<Ref<CameraFeed>> *)(this + 0x1a8),lVar9);
  if (iVar6 == 0) {
    if (*(long *)(this + 0x1a8) == 0) {
      lVar10 = -1;
      lVar9 = 0;
LAB_001039fa:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar10,lVar9,"p_index","size()","",false,
                 false);
      goto LAB_00103210;
    }
    lVar9 = *(long *)(*(long *)(this + 0x1a8) + -8);
    lVar10 = lVar9 + -1;
    if (lVar10 < 0) goto LAB_001039fa;
    CowData<Ref<CameraFeed>>::_copy_on_write((CowData<Ref<CameraFeed>> *)(this + 0x1a8));
    puVar2 = (undefined8 *)(*(long *)(this + 0x1a8) + lVar10 * 8);
    pOVar3 = (Object *)*puVar2;
    if (pOVar3 == pOVar8) goto LAB_00103210;
    *puVar2 = pOVar8;
    if (pOVar8 != (Object *)0x0) {
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
        *puVar2 = 0;
      }
      if (((pOVar3 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
         (cVar5 = predelete_handler(pOVar3), cVar5 != '\0')) goto LAB_001031f1;
      goto LAB_00103215;
    }
    if (((pOVar3 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
       (cVar5 = predelete_handler(pOVar3), cVar5 != '\0')) {
LAB_001031f1:
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
      goto LAB_00103210;
    }
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
LAB_00103210:
    if (pOVar8 != (Object *)0x0) {
LAB_00103215:
      cVar5 = RefCounted::unreference();
      if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar8), cVar5 != '\0')) {
        (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
        Memory::free_static(pOVar8,false);
      }
    }
  }
  cVar5 = is_print_verbose_enabled();
  if (cVar5 != '\0') {
    itos((long)&local_a8);
    local_98 = " at index ";
    local_b8 = 0;
    local_90 = 10;
    String::parse_latin1((StrRange *)&local_b8);
    CameraFeed::get_position();
    itos((long)&local_c8);
    local_98 = " and position ";
    local_d8 = 0;
    local_90 = 0xe;
    String::parse_latin1((StrRange *)&local_d8);
    CameraFeed::get_id();
    itos((long)&local_e8);
    local_98 = " with ID ";
    local_f8 = 0;
    local_90 = 9;
    String::parse_latin1((StrRange *)&local_f8);
    CameraFeed::get_name();
    operator+((char *)&local_100,(String *)"CameraServer: Registered camera ");
    String::operator+((String *)&local_f0,(String *)&local_100);
    String::operator+((String *)&local_e0,(String *)&local_f0);
    String::operator+((String *)&local_d0,(String *)&local_e0);
    String::operator+((String *)&local_c0,(String *)&local_d0);
    String::operator+((String *)&local_b0,(String *)&local_c0);
    String::operator+((String *)&local_a0,(String *)&local_b0);
    Variant::Variant((Variant *)local_78,(String *)&local_a0);
    stringify_variants((Variant *)&local_98);
    __print_line((String *)&local_98);
    pcVar4 = local_98;
    if (local_98 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_98 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_98 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    lVar9 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      plVar1 = (long *)(local_a0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a0 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    lVar9 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      plVar1 = (long *)(local_b0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_b0 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    lVar9 = local_c0;
    if (local_c0 != 0) {
      LOCK();
      plVar1 = (long *)(local_c0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    lVar9 = local_d0;
    if (local_d0 != 0) {
      LOCK();
      plVar1 = (long *)(local_d0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d0 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    lVar9 = local_e0;
    if (local_e0 != 0) {
      LOCK();
      plVar1 = (long *)(local_e0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_e0 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    lVar9 = local_f0;
    if (local_f0 != 0) {
      LOCK();
      plVar1 = (long *)(local_f0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_f0 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    lVar9 = local_100;
    if (local_100 != 0) {
      LOCK();
      plVar1 = (long *)(local_100 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_100 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    if (local_108 != 0) {
      LOCK();
      plVar1 = (long *)(local_108 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_108 + -0x10),false);
      }
    }
    lVar9 = local_f8;
    if (local_f8 != 0) {
      LOCK();
      plVar1 = (long *)(local_f8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_f8 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    lVar9 = local_e8;
    if (local_e8 != 0) {
      LOCK();
      plVar1 = (long *)(local_e8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_e8 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    lVar9 = local_d8;
    if (local_d8 != 0) {
      LOCK();
      plVar1 = (long *)(local_d8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d8 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    lVar9 = local_c8;
    if (local_c8 != 0) {
      LOCK();
      plVar1 = (long *)(local_c8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c8 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    lVar9 = local_b8;
    if (local_b8 != 0) {
      LOCK();
      plVar1 = (long *)(local_b8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_b8 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    lVar9 = local_a8;
    if (local_a8 != 0) {
      LOCK();
      plVar1 = (long *)(local_a8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a8 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
  }
  iVar6 = CameraFeed::get_id();
  if ((add_feed(Ref<CameraFeed>const&)::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar7 = __cxa_guard_acquire(&add_feed(Ref<CameraFeed>const&)::{lambda()#1}::operator()()::
                                   sname), iVar7 != 0)) {
    _scs_create((char *)&add_feed(Ref<CameraFeed>const&)::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &add_feed(Ref<CameraFeed>const&)::{lambda()#1}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&add_feed(Ref<CameraFeed>const&)::{lambda()#1}::operator()()::sname);
  }
  Variant::Variant((Variant *)local_78,iVar6);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88[0] = (Variant *)local_78;
  (**(code **)(*(long *)this + 0xd0))
            (this,&add_feed(Ref<CameraFeed>const&)::{lambda()#1}::operator()()::sname,local_88,1);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103a6c:
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



/* CameraServer::is_class_ptr(void*) const */

uint __thiscall CameraServer::is_class_ptr(CameraServer *this,void *param_1)

{
  return (uint)CONCAT71(0x1091,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1091,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* CameraServer::_getv(StringName const&, Variant&) const */

undefined8 CameraServer::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CameraServer::_setv(StringName const&, Variant const&) */

undefined8 CameraServer::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CameraServer::_validate_propertyv(PropertyInfo&) const */

void CameraServer::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* CameraServer::_property_can_revertv(StringName const&) const */

undefined8 CameraServer::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* CameraServer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 CameraServer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CameraServer::_notificationv(int, bool) */

void CameraServer::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MethodBindT<Ref<CameraFeed> const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Ref<CameraFeed>const&>::_gen_argument_type
          (MethodBindT<Ref<CameraFeed>const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x18;
}



/* MethodBindT<Ref<CameraFeed> const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Ref<CameraFeed>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<TypedArray<CameraFeed>>::_gen_argument_type(int) const */

undefined8 MethodBindTR<TypedArray<CameraFeed>>::_gen_argument_type(int param_1)

{
  return 0x1c;
}



/* MethodBindTR<TypedArray<CameraFeed>>::get_argument_meta(int) const */

undefined8 MethodBindTR<TypedArray<CameraFeed>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<int>::_gen_argument_type(int) const */

undefined8 MethodBindTR<int>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTR<int>::get_argument_meta(int) const */

uint __thiscall MethodBindTR<int>::get_argument_meta(MethodBindTR<int> *this,int param_1)

{
  return param_1 >> 0x1f & 3;
}



/* MethodBindTR<Ref<CameraFeed>, int>::_gen_argument_type(int) const */

int __thiscall
MethodBindTR<Ref<CameraFeed>,int>::_gen_argument_type
          (MethodBindTR<Ref<CameraFeed>,int> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffea) + 0x18;
}



/* MethodBindTR<Ref<CameraFeed>, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTR<Ref<CameraFeed>,int>::get_argument_meta
          (MethodBindTR<Ref<CameraFeed>,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTR<Ref<CameraFeed>, int>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<CameraFeed>,int>::~MethodBindTR(MethodBindTR<Ref<CameraFeed>,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00108f90;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Ref<CameraFeed>, int>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<CameraFeed>,int>::~MethodBindTR(MethodBindTR<Ref<CameraFeed>,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00108f90;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<int>::~MethodBindTR() */

void __thiscall MethodBindTR<int>::~MethodBindTR(MethodBindTR<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00108ff0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<int>::~MethodBindTR() */

void __thiscall MethodBindTR<int>::~MethodBindTR(MethodBindTR<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00108ff0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<TypedArray<CameraFeed>>::~MethodBindTR() */

void __thiscall
MethodBindTR<TypedArray<CameraFeed>>::~MethodBindTR(MethodBindTR<TypedArray<CameraFeed>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00109050;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<TypedArray<CameraFeed>>::~MethodBindTR() */

void __thiscall
MethodBindTR<TypedArray<CameraFeed>>::~MethodBindTR(MethodBindTR<TypedArray<CameraFeed>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00109050;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Ref<CameraFeed> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<CameraFeed>const&>::~MethodBindT(MethodBindT<Ref<CameraFeed>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001090b0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<CameraFeed> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<CameraFeed>const&>::~MethodBindT(MethodBindT<Ref<CameraFeed>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001090b0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* CameraServer::_get_class_namev() const */

undefined8 * CameraServer::_get_class_namev(void)

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
LAB_00103de3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00103de3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"CameraServer");
      goto LAB_00103e4e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"CameraServer");
LAB_00103e4e:
  return &_get_class_namev()::_class_name_static;
}



/* CameraServer::get_class() const */

void CameraServer::get_class(void)

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



/* CameraServer::is_class(String const&) const */

undefined8 __thiscall CameraServer::is_class(CameraServer *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010416f;
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
LAB_0010416f:
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
    if (cVar6 != '\0') goto LAB_00104223;
  }
  cVar6 = String::operator==(param_1,"CameraServer");
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
              if (lVar5 == 0) goto LAB_001042d3;
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
LAB_001042d3:
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
      if (cVar6 != '\0') goto LAB_00104223;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00104223:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<TypedArray<CameraFeed>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<TypedArray<CameraFeed>>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = "CameraFeed";
  local_40 = 10;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x1c;
  puVar3[6] = 0x1f;
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
      if (*(char **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(char **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x001044cc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001044cc:
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



/* MethodBindTR<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<int>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC4;
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
      goto joined_r0x0010464c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010464c:
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



/* CameraServer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void CameraServer::_get_property_listv(List *param_1,bool param_2)

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
  local_78 = "CameraServer";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "CameraServer";
  local_98 = 0;
  local_70 = 0xc;
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
LAB_001047f8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001047f8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00104816;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00104816:
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
  StringName::StringName((StringName *)&local_78,"CameraServer",false);
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



/* MethodBindT<Ref<CameraFeed> const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Ref<CameraFeed>const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined1 local_50 [16];
  int local_40;
  long local_38;
  undefined4 local_30;
  long local_20;
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar7 = 0;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  puVar7[10] = 6;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00104ac7;
  local_68 = 0;
  local_58 = "CameraFeed";
  local_70 = 0;
  local_50._0_8_ = 10;
  String::parse_latin1((StrRange *)&local_70);
  local_58 = (char *)CONCAT44(local_58._4_4_,0x18);
  local_40 = 0x11;
  local_38 = 0;
  local_50 = (undefined1  [16])0x0;
  if (local_70 == 0) {
LAB_00104ccd:
    local_30 = 6;
    StringName::StringName((StringName *)&local_60,(String *)&local_38,false);
    if (local_50._8_8_ == local_60) {
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_50._8_8_ = local_60;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_38,(CowData *)&local_70);
    local_30 = 6;
    if (local_40 == 0x11) goto LAB_00104ccd;
    StringName::operator=((StringName *)(local_50 + 8),(StringName *)&local_68);
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
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  *puVar7 = local_58._0_4_;
  lVar2 = *(long *)(puVar7 + 2);
  if (lVar2 != local_50._0_8_) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(puVar7 + 2);
        *(undefined8 *)(puVar7 + 2) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 *)(puVar7 + 2) = local_50._0_8_;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = local_50._8_8_;
    local_50 = auVar4 << 0x40;
  }
  if (*(long *)(puVar7 + 4) != local_50._8_8_) {
    StringName::unref();
    uVar5 = local_50._8_8_;
    local_50._8_8_ = 0;
    *(undefined8 *)(puVar7 + 4) = uVar5;
  }
  lVar6 = local_38;
  puVar7[6] = local_40;
  lVar2 = *(long *)(puVar7 + 8);
  if (lVar2 == local_38) {
    puVar7[10] = local_30;
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_38 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
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
        lVar2 = *(long *)(puVar7 + 8);
        *(undefined8 *)(puVar7 + 8) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(long *)(puVar7 + 8) = local_38;
    puVar7[10] = local_30;
  }
  if ((StringName::configured != '\0') && (local_50._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_50._0_8_;
  if (local_50._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_50._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_50._8_8_;
      local_50 = auVar3 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
LAB_00104ac7:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



/* MethodBindTR<Ref<CameraFeed>, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Ref<CameraFeed>,int>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar8;
  long in_FS_OFFSET;
  long local_b0;
  long local_a8;
  ulong local_a0;
  long local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  char *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_60._8_8_ = local_60._0_8_;
  puVar8 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = 0;
  if (in_EDX != 0) {
    local_a0 = 0;
    local_60._0_8_ = 10;
    local_68 = "CameraFeed";
    String::parse_latin1((StrRange *)&local_a0);
    *puVar8 = 0x18;
    puVar8[6] = 0x11;
    *(undefined8 *)(puVar8 + 8) = 0;
    *(undefined1 (*) [16])(puVar8 + 2) = (undefined1  [16])0x0;
    if (local_a0 == 0) {
      puVar8[10] = 6;
LAB_0010515f:
      StringName::StringName((StringName *)&local_68,(String *)(puVar8 + 8),false);
      if (*(char **)(puVar8 + 4) == local_68) {
        if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(char **)(puVar8 + 4) = local_68;
      }
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar8 + 8),(CowData *)&local_a0);
      puVar8[10] = 6;
      if (puVar8[6] == 0x11) goto LAB_0010515f;
      StringName::operator=((StringName *)(puVar8 + 4),(StringName *)&local_98);
    }
    uVar5 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      plVar1 = (long *)(local_a0 - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a0 = 0;
        Memory::free_static((void *)(uVar5 - 0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_98 != 0)) {
      StringName::unref();
    }
    goto LAB_00104f97;
  }
  local_80 = 0;
  local_90 = (undefined1  [16])0x0;
  local_78 = 0;
  local_70 = 6;
  local_a8 = 0;
  local_b0 = 0;
  local_68 = "";
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_b0);
  local_68 = (char *)CONCAT44(local_68._4_4_,2);
  local_50 = 0;
  local_48 = 0;
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  if (local_b0 == 0) {
LAB_00104fe8:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_a8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_b0);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00104fe8;
    StringName::StringName((StringName *)&local_a0,(String *)&local_48,false);
    if (local_60._8_8_ == local_a0) {
      if ((StringName::configured != '\0') && (local_a0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_a0;
    }
  }
  lVar4 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    plVar1 = (long *)(local_b0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b0 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_a8 != 0)) {
    StringName::unref();
  }
  local_98 = CONCAT44(local_98._4_4_,local_68._0_4_);
  uVar6 = local_90._0_8_;
  if (local_90._0_8_ != local_60._0_8_) {
    if (local_90._0_8_ != 0) {
      LOCK();
      plVar1 = (long *)(local_90._0_8_ + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = local_90._8_8_;
        local_90 = auVar3 << 0x40;
        Memory::free_static((void *)(uVar6 + -0x10),false);
      }
    }
    local_90._0_8_ = local_60._0_8_;
    local_60._0_8_ = 0;
  }
  if (local_90._8_8_ != local_60._8_8_) {
    StringName::unref();
    uVar6 = local_60._8_8_;
    local_60._8_8_ = 0;
    local_90._8_8_ = uVar6;
  }
  lVar7 = local_48;
  lVar4 = local_78;
  local_80 = CONCAT44(local_80._4_4_,local_50);
  if (local_78 == local_48) {
    local_70 = local_40;
    if (local_78 != 0) {
      LOCK();
      plVar1 = (long *)(local_78 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
  }
  else {
    if (local_78 != 0) {
      LOCK();
      plVar1 = (long *)(local_78 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_78 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    local_78 = local_48;
    local_70 = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar6 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60._0_8_ = 0;
      Memory::free_static((void *)(uVar6 + -0x10),false);
    }
  }
  *puVar8 = (undefined4)local_98;
  *(undefined8 *)(puVar8 + 2) = local_90._0_8_;
  *(undefined8 *)(puVar8 + 4) = local_90._8_8_;
  puVar8[6] = (undefined4)local_80;
  *(long *)(puVar8 + 8) = local_78;
  puVar8[10] = local_70;
LAB_00104f97:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar8;
}



/* godot::details::enum_qualified_name_to_class_info_name(String const&) */

details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  long local_60;
  char local_58 [8];
  long *local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::split(local_58,SUB81(param_1,0),0x105268);
  if ((local_50 != (long *)0x0) && (2 < local_50[-1])) {
    local_60 = 0;
    local_48 = &_LC9;
    local_40 = 1;
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == (long *)0x0) {
      lVar8 = 0;
      lVar7 = -2;
    }
    else {
      lVar8 = local_50[-1];
      lVar7 = lVar8 + -2;
      if (-1 < lVar7) {
        String::operator+((String *)&local_48,(String *)(local_50 + lVar7));
        String::operator+((String *)this,(String *)&local_48);
        puVar5 = local_48;
        lVar8 = local_60;
        if (local_48 != (undefined *)0x0) {
          LOCK();
          plVar1 = (long *)(local_48 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_48 = (undefined *)0x0;
            Memory::free_static(puVar5 + -0x10,false);
            lVar8 = local_60;
          }
        }
        goto joined_r0x0010533a;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar8,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  local_60 = 0;
  local_48 = &_LC9;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)this);
  lVar8 = local_60;
joined_r0x0010533a:
  local_60 = lVar8;
  if (lVar8 != 0) {
    LOCK();
    plVar1 = (long *)(lVar8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  plVar1 = local_50;
  if (local_50 != (long *)0x0) {
    LOCK();
    plVar6 = local_50 + -2;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      if (local_50 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar8 = local_50[-1];
      local_50 = (long *)0x0;
      if (lVar8 != 0) {
        lVar7 = 0;
        plVar6 = plVar1;
        do {
          if (*plVar6 != 0) {
            LOCK();
            plVar2 = (long *)(*plVar6 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar3 = *plVar6;
              *plVar6 = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar8 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
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



/* MethodBind* create_method_bind<CameraServer, Ref<CameraFeed>, int>(Ref<CameraFeed>
   (CameraServer::*)(int)) */

MethodBind * create_method_bind<CameraServer,Ref<CameraFeed>,int>(_func_Ref_int *param_1)

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
  *(_func_Ref_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00108f90;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "CameraServer";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<CameraServer, int>(int (CameraServer::*)()) */

MethodBind * create_method_bind<CameraServer,int>(_func_int *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00108ff0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "CameraServer";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<CameraServer, TypedArray<CameraFeed>>(TypedArray<CameraFeed>
   (CameraServer::*)()) */

MethodBind * create_method_bind<CameraServer,TypedArray<CameraFeed>>(_func_TypedArray *param_1)

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
  *(_func_TypedArray **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00109050;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "CameraServer";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<CameraServer, Ref<CameraFeed> const&>(void
   (CameraServer::*)(Ref<CameraFeed> const&)) */

MethodBind * create_method_bind<CameraServer,Ref<CameraFeed>const&>(_func_void_Ref_ptr *param_1)

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
  *(_func_void_Ref_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001090b0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "CameraServer";
  local_30 = 0xc;
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



/* CameraServer::_bind_methods() [clone .cold] */

void CameraServer::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Ref<CameraFeed> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Ref<CameraFeed>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CameraServer::_initialize_classv() */

void CameraServer::_initialize_classv(void)

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
    local_38 = "CameraServer";
    local_50 = 0;
    local_30 = 0xc;
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
        _bind_methods();
        initialize_class()::initialized = '\x01';
        goto LAB_00105d05;
      }
    }
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
LAB_00105d05:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Ref<CameraFeed> >::_unref() */

void __thiscall CowData<Ref<CameraFeed>>::_unref(CowData<Ref<CameraFeed>> *this)

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
LAB_00105edd:
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
            goto LAB_00105edd;
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



/* CowData<Ref<CameraFeed> >::_realloc(long) */

undefined8 __thiscall
CowData<Ref<CameraFeed>>::_realloc(CowData<Ref<CameraFeed>> *this,long param_1)

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
/* Error CowData<Ref<CameraFeed> >::resize<false>(long) */

undefined8 __thiscall
CowData<Ref<CameraFeed>>::resize<false>(CowData<Ref<CameraFeed>> *this,long param_1)

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
LAB_00106340:
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
  if (lVar11 == 0) goto LAB_00106340;
  if (param_1 <= lVar7) {
    lVar7 = *(long *)this;
    uVar9 = param_1;
    while (lVar7 != 0) {
      if (*(ulong *)(lVar7 + -8) <= uVar9) {
LAB_001061ea:
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
        if (*(ulong *)(lVar7 + -8) <= uVar9) goto LAB_001061ea;
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
    goto LAB_001061b0;
  }
  if (lVar11 == lVar8) {
LAB_001062bb:
    puVar10 = *(undefined8 **)this;
    if (puVar10 == (undefined8 *)0x0) {
LAB_001061b0:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar7 = puVar10[-1];
    if (param_1 <= lVar7) goto LAB_0010629b;
  }
  else {
    if (lVar7 != 0) {
      uVar5 = _realloc(this,lVar11);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_001062bb;
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
LAB_0010629b:
  puVar10[-1] = param_1;
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x00106528) */
/* WARNING: Removing unreachable block (ram,0x00106658) */
/* WARNING: Removing unreachable block (ram,0x00106820) */
/* WARNING: Removing unreachable block (ram,0x00106664) */
/* WARNING: Removing unreachable block (ram,0x0010666e) */
/* WARNING: Removing unreachable block (ram,0x00106800) */
/* WARNING: Removing unreachable block (ram,0x0010667a) */
/* WARNING: Removing unreachable block (ram,0x00106684) */
/* WARNING: Removing unreachable block (ram,0x001067e0) */
/* WARNING: Removing unreachable block (ram,0x00106690) */
/* WARNING: Removing unreachable block (ram,0x0010669a) */
/* WARNING: Removing unreachable block (ram,0x001067c0) */
/* WARNING: Removing unreachable block (ram,0x001066a6) */
/* WARNING: Removing unreachable block (ram,0x001066b0) */
/* WARNING: Removing unreachable block (ram,0x001067a0) */
/* WARNING: Removing unreachable block (ram,0x001066bc) */
/* WARNING: Removing unreachable block (ram,0x001066c6) */
/* WARNING: Removing unreachable block (ram,0x00106780) */
/* WARNING: Removing unreachable block (ram,0x001066d2) */
/* WARNING: Removing unreachable block (ram,0x001066dc) */
/* WARNING: Removing unreachable block (ram,0x00106760) */
/* WARNING: Removing unreachable block (ram,0x001066e4) */
/* WARNING: Removing unreachable block (ram,0x001066fa) */
/* WARNING: Removing unreachable block (ram,0x00106706) */
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



/* MethodBindTR<TypedArray<CameraFeed>>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTR<TypedArray<CameraFeed>>::call
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
      _err_print_error(&_LC61,"./core/object/method_bind.h",0x207,
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
      goto LAB_00106a00;
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
      (*(code *)pVVar4)((Array *)&local_58);
      Variant::Variant((Variant *)local_48,(Array *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      Array::~Array((Array *)&local_58);
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
LAB_00106a00:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC61,"./core/object/method_bind.h",0x207,
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
      goto LAB_00106ce0;
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
LAB_00106ce0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<int>::validated_call
          (MethodBindTR<int> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
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
      goto LAB_00106fd4;
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
LAB_00106fd4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<int>::ptrcall(MethodBindTR<int> *this,Object *param_1,void **param_2,void *param_3)

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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
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
      goto LAB_001071d3;
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
LAB_001071d3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<CameraFeed> const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Ref<CameraFeed>const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  Object *pOVar5;
  Variant *pVVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  Object *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar6 = param_2[0x23];
      if (pVVar6 == (Variant *)0x0) {
        pVVar6 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar6 = param_2[1] + 0x20;
    }
    if (local_58 == (Object *)*(long *)pVVar6) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x106848;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0);
      pOVar3 = local_58;
      if (local_58 != (Object *)0x0) {
        LOCK();
        pOVar5 = local_58 + -0x10;
        *(long *)pOVar5 = *(long *)pOVar5 + -1;
        UNLOCK();
        if (*(long *)pOVar5 == 0) {
          local_58 = (Object *)0x0;
          Memory::free_static(pOVar3 + -0x10,false);
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
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00107488;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar7 = *(code **)(param_1 + 0x58);
  lVar2 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar7 & 1) != 0) {
    pcVar7 = *(code **)(pcVar7 + *(long *)((long)param_2 + lVar2) + -1);
  }
  Variant::Variant((Variant *)local_48,*(Object **)(*(long *)param_3 + 0x10));
  local_58 = (Object *)0x0;
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar3 = local_58;
  if (pOVar5 != local_58) {
    if (pOVar5 == (Object *)0x0) {
      if (local_58 != (Object *)0x0) {
        local_58 = (Object *)0x0;
LAB_00107446:
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          cVar4 = predelete_handler(pOVar3);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
      }
    }
    else {
      pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&CameraFeed::typeinfo,0);
      if (pOVar3 != pOVar5) {
        local_58 = pOVar5;
        if (pOVar5 != (Object *)0x0) {
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            local_58 = (Object *)0x0;
          }
        }
        if (pOVar3 != (Object *)0x0) goto LAB_00107446;
      }
    }
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar7)((long *)((long)param_2 + lVar2));
  if (local_58 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_58;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_58);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
LAB_00107488:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<CameraFeed> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<CameraFeed>const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  Object *pOVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar5 = (long *)param_2[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar5 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x106848;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pOVar3 = local_48;
      if (local_48 != (Object *)0x0) {
        LOCK();
        pOVar1 = local_48 + -0x10;
        *(long *)pOVar1 = *(long *)pOVar1 + -1;
        UNLOCK();
        if (*(long *)pOVar1 == 0) {
          local_48 = (Object *)0x0;
          Memory::free_static(pOVar3 + -0x10,false);
        }
      }
      lVar2 = local_50;
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
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010779c;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  lVar2 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar2) + -1);
  }
  if ((*param_3 == (long *)0x0) || (local_48 = (Object *)**param_3, local_48 == (Object *)0x0)) {
LAB_00107778:
    local_48 = (Object *)0x0;
  }
  else {
    cVar4 = RefCounted::init_ref();
    if (cVar4 == '\0') goto LAB_00107778;
  }
  (*pcVar6)((long *)((long)param_2 + lVar2));
  if (local_48 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_48;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_48);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
LAB_0010779c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<TypedArray<CameraFeed>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<TypedArray<CameraFeed>>::validated_call
          (MethodBindTR<TypedArray<CameraFeed>> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  Variant **ppVVar1;
  long lVar2;
  Variant **ppVVar3;
  code *pcVar4;
  long *plVar5;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  Variant **local_48;
  undefined8 local_40;
  long local_30;
  
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
    if (local_48 == (Variant **)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x106848;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      ppVVar3 = local_48;
      if (local_48 != (Variant **)0x0) {
        LOCK();
        ppVVar1 = local_48 + -2;
        *ppVVar1 = *ppVVar1 + -1;
        UNLOCK();
        if (*ppVVar1 == (Variant *)0x0) {
          local_48 = (Variant **)0x0;
          Memory::free_static(ppVVar3 + -2,false);
        }
      }
      lVar2 = local_50;
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
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001079f9;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar4 = *(code **)(pcVar4 + (long)param_2 + -1);
  }
  (*pcVar4)((Array *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Array::operator=((Array *)(param_3 + 8),(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_001079f9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<TypedArray<CameraFeed>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<TypedArray<CameraFeed>>::ptrcall
          (MethodBindTR<TypedArray<CameraFeed>> *this,Object *param_1,void **param_2,void *param_3)

{
  void **ppvVar1;
  long lVar2;
  void **ppvVar3;
  code *pcVar4;
  long *plVar5;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  void **local_48;
  undefined8 local_40;
  long local_30;
  
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
    if (local_48 == (void **)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x106848;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      ppvVar3 = local_48;
      if (local_48 != (void **)0x0) {
        LOCK();
        ppvVar1 = local_48 + -2;
        *ppvVar1 = (void *)((long)*ppvVar1 + -1);
        UNLOCK();
        if (*ppvVar1 == (void *)0x0) {
          local_48 = (void **)0x0;
          Memory::free_static(ppvVar3 + -2,false);
        }
      }
      lVar2 = local_50;
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
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00107c0a;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar4 = *(code **)(pcVar4 + (long)param_2 + -1);
  }
  (*pcVar4)((Array *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Array::operator=((Array *)param_3,(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_00107c0a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<CameraFeed>, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Ref<CameraFeed>,int>::ptrcall
          (MethodBindTR<Ref<CameraFeed>,int> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char cVar2;
  code *pcVar3;
  Object *pOVar4;
  long *plVar5;
  Object *pOVar6;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
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
    if (local_48 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x106848;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pOVar6 = local_48;
      if (local_48 != (Object *)0x0) {
        LOCK();
        pOVar4 = local_48 + -0x10;
        *(long *)pOVar4 = *(long *)pOVar4 + -1;
        UNLOCK();
        if (*(long *)pOVar4 == 0) {
          local_48 = (Object *)0x0;
          Memory::free_static(pOVar6 + -0x10,false);
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
      goto LAB_00107e7b;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar3)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),**param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar6 = *param_3;
    if (pOVar6 == (Object *)0x0) goto LAB_00107e7b;
    *(undefined8 *)param_3 = 0;
    goto LAB_00107ec1;
  }
  pOVar4 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar6 = *param_3;
  if (pOVar6 != pOVar4) {
    *(Object **)param_3 = pOVar4;
    if (pOVar4 == (Object *)0x0) {
      if (pOVar6 != (Object *)0x0) goto LAB_00107ec1;
    }
    else {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar6 != (Object *)0x0) {
LAB_00107ec1:
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          cVar2 = predelete_handler(pOVar6);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
            Memory::free_static(pOVar6,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_00107e7b;
    }
  }
  cVar2 = RefCounted::unreference();
  pOVar6 = local_48;
  if (cVar2 != '\0') {
    cVar2 = predelete_handler(local_48);
    if (cVar2 != '\0') {
      (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
      Memory::free_static(pOVar6,false);
    }
  }
LAB_00107e7b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<CameraFeed> const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<Ref<CameraFeed>const&>::call
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
  long local_50;
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
      local_48 = (Object *)0x106848;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC61,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0);
      pOVar5 = local_48;
      if (local_48 != (Object *)0x0) {
        LOCK();
        pOVar8 = local_48 + -0x10;
        *(long *)pOVar8 = *(long *)pOVar8 + -1;
        UNLOCK();
        if (*(long *)pOVar8 == 0) {
          local_48 = (Object *)0x0;
          Memory::free_static(pOVar5 + -0x10,false);
        }
      }
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar11 = (long *)(local_50 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00108310;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar7 = 3;
LAB_00108305:
    *in_R9 = uVar7;
    in_R9[2] = 1;
    goto LAB_00108310;
  }
  pVVar12 = param_2[5];
  if (pVVar12 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_00108360;
LAB_00108350:
    pVVar12 = *(Variant **)param_4;
  }
  else {
    lVar2 = *(long *)(pVVar12 + -8);
    if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00108360:
      uVar7 = 4;
      goto LAB_00108305;
    }
    if (in_R8D == 1) goto LAB_00108350;
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
  uVar4 = _LC66;
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
LAB_0010847d:
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
      pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&CameraFeed::typeinfo,0);
      if (pOVar5 != pOVar8) {
        local_48 = pOVar8;
        if (pOVar8 != (Object *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_48 = (Object *)0x0;
          }
        }
        if (pOVar5 != (Object *)0x0) goto LAB_0010847d;
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
LAB_00108310:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<CameraFeed>, int>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTR<Ref<CameraFeed>,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Object *pOVar1;
  Variant *pVVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  Object *pOVar6;
  char cVar7;
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
  long local_60;
  Object *local_58;
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
    if (local_58 == (Object *)*plVar10) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x106848;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC61,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0);
      pOVar6 = local_58;
      if (local_58 != (Object *)0x0) {
        LOCK();
        pOVar1 = local_58 + -0x10;
        *(long *)pOVar1 = *(long *)pOVar1 + -1;
        UNLOCK();
        if (*(long *)pOVar1 == 0) {
          local_58 = (Object *)0x0;
          Memory::free_static(pOVar6 + -0x10,false);
        }
      }
      lVar3 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar12 = (long *)(local_60 + -0x10);
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00108770;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar14 = param_2[0xb];
  pVVar2 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar13 = param_2[5];
    if (pVVar13 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_001087b0;
LAB_001087a0:
      pVVar13 = *(Variant **)param_4;
    }
    else {
      lVar3 = *(long *)(pVVar13 + -8);
      if ((int)lVar3 < (int)(in_R8D ^ 1)) {
LAB_001087b0:
        uVar9 = 4;
        goto LAB_00108765;
      }
      if (in_R8D == 1) goto LAB_001087a0;
      lVar11 = (long)((int)lVar3 + -1);
      if (lVar3 <= lVar11) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar3,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      pVVar13 = pVVar13 + lVar11 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar14 & 1) != 0) {
      pVVar14 = *(Variant **)(pVVar14 + *(long *)((long)plVar12 + (long)pVVar2) + -1);
    }
    cVar7 = Variant::can_convert_strict(*(undefined4 *)pVVar13,2);
    uVar5 = _LC68;
    if (cVar7 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar5;
    }
    iVar8 = Variant::operator_cast_to_int(pVVar13);
    (*(code *)pVVar14)(&local_58,(Variant *)((long)plVar12 + (long)pVVar2),iVar8);
    Variant::Variant((Variant *)local_48,local_58);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
    if (local_58 != (Object *)0x0) {
      cVar7 = RefCounted::unreference();
      pOVar6 = local_58;
      if (cVar7 != '\0') {
        cVar7 = predelete_handler(local_58);
        if (cVar7 != '\0') {
          (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
          Memory::free_static(pOVar6,false);
        }
      }
    }
  }
  else {
    uVar9 = 3;
LAB_00108765:
    *in_R9 = uVar9;
    in_R9[2] = 1;
  }
LAB_00108770:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<CameraFeed>, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Ref<CameraFeed>,int>::validated_call
          (MethodBindTR<Ref<CameraFeed>,int> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  Object *pOVar1;
  Object *pOVar2;
  char *pcVar3;
  char cVar4;
  code *pcVar5;
  long *plVar6;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  char *local_48;
  Object *local_40;
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
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
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
      pOVar2 = local_50;
      if (local_50 != (Object *)0x0) {
        LOCK();
        pOVar1 = local_50 + -0x10;
        *(long *)pOVar1 = *(long *)pOVar1 + -1;
        UNLOCK();
        if (*(long *)pOVar1 == 0) {
          local_50 = (Object *)0x0;
          Memory::free_static(pOVar2 + -0x10,false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00108a7c;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar5 = *(code **)(this + 0x58);
  if (((ulong)pcVar5 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar5)(&local_50,param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(char **)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar2 = local_50;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_50);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_00108a7c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
/* MethodBindT<Ref<CameraFeed> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<CameraFeed>const&>::~MethodBindT(MethodBindT<Ref<CameraFeed>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<TypedArray<CameraFeed>>::~MethodBindTR() */

void __thiscall
MethodBindTR<TypedArray<CameraFeed>>::~MethodBindTR(MethodBindTR<TypedArray<CameraFeed>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<int>::~MethodBindTR() */

void __thiscall MethodBindTR<int>::~MethodBindTR(MethodBindTR<int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Ref<CameraFeed>, int>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<CameraFeed>,int>::~MethodBindTR(MethodBindTR<Ref<CameraFeed>,int> *this)

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


