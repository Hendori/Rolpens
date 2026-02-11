
/* PortableCompressedTexture2D::get_compression_mode() const */

undefined4 __thiscall
PortableCompressedTexture2D::get_compression_mode(PortableCompressedTexture2D *this)

{
  return *(undefined4 *)(this + 0x2e8);
}



/* PortableCompressedTexture2D::get_format() const */

undefined4 __thiscall PortableCompressedTexture2D::get_format(PortableCompressedTexture2D *this)

{
  return *(undefined4 *)(this + 0x314);
}



/* PortableCompressedTexture2D::get_width() const */

int __thiscall PortableCompressedTexture2D::get_width(PortableCompressedTexture2D *this)

{
  return (int)*(float *)(this + 0x300);
}



/* PortableCompressedTexture2D::get_height() const */

int __thiscall PortableCompressedTexture2D::get_height(PortableCompressedTexture2D *this)

{
  return (int)*(float *)(this + 0x304);
}



/* PortableCompressedTexture2D::has_alpha() const */

undefined4 __thiscall PortableCompressedTexture2D::has_alpha(PortableCompressedTexture2D *this)

{
  return CONCAT31((int3)((*(uint *)(this + 0x314) & 0xfffffffb) >> 8),
                  (*(uint *)(this + 0x314) & 0xfffffffb) == 1);
}



/* PortableCompressedTexture2D::get_size_override() const */

undefined8 __thiscall
PortableCompressedTexture2D::get_size_override(PortableCompressedTexture2D *this)

{
  return *(undefined8 *)(this + 0x308);
}



/* PortableCompressedTexture2D::set_keep_all_compressed_buffers(bool) */

void PortableCompressedTexture2D::set_keep_all_compressed_buffers(bool param_1)

{
  keep_all_compressed_buffers = param_1;
  return;
}



/* PortableCompressedTexture2D::is_keeping_all_compressed_buffers() */

undefined1 PortableCompressedTexture2D::is_keeping_all_compressed_buffers(void)

{
  return keep_all_compressed_buffers;
}



/* PortableCompressedTexture2D::is_keeping_compressed_buffer() const */

PortableCompressedTexture2D __thiscall
PortableCompressedTexture2D::is_keeping_compressed_buffer(PortableCompressedTexture2D *this)

{
  return this[0x2ec];
}



/* PortableCompressedTexture2D::draw_rect(RID, Rect2 const&, bool, Color const&, bool) const */

undefined1  [16] __thiscall
PortableCompressedTexture2D::draw_rect
          (PortableCompressedTexture2D *this,undefined8 param_2,undefined8 param_3,
          undefined1 param_4,undefined8 param_5,uint param_6)

{
  undefined1 auVar1 [16];
  undefined8 in_RAX;
  long *plVar2;
  undefined1 auVar3 [16];
  
  if ((*(float *)(this + 0x300) != 0.0) && (*(float *)(this + 0x304) != 0.0)) {
    plVar2 = (long *)RenderingServer::get_singleton();
    auVar1._4_4_ = 0;
    auVar1._0_4_ = param_6 & 0xff;
    (**(code **)(*plVar2 + 0xf20))
              (plVar2,param_2,param_3,*(undefined8 *)(this + 0x318),param_4,param_5);
    auVar1._8_8_ = 0x1000fd;
    return auVar1;
  }
  auVar3._8_8_ = param_3;
  auVar3._0_8_ = in_RAX;
  return auVar3;
}



/* PortableCompressedTexture2D::draw_rect_region(RID, Rect2 const&, Rect2 const&, Color const&,
   bool, bool) const */

undefined1  [16] __thiscall
PortableCompressedTexture2D::draw_rect_region
          (PortableCompressedTexture2D *this,undefined8 param_2,undefined8 param_3,
          undefined8 param_4,undefined8 param_5,uint param_6,uint param_7)

{
  undefined1 auVar1 [16];
  undefined8 in_RAX;
  long *plVar2;
  undefined1 auVar3 [16];
  
  if ((*(float *)(this + 0x300) != 0.0) && (*(float *)(this + 0x304) != 0.0)) {
    auVar1._4_4_ = 0;
    auVar1._0_4_ = param_6 & 0xff;
    plVar2 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar2 + 0xf28))
              (plVar2,param_2,param_3,*(undefined8 *)(this + 0x318),param_4,param_5);
    auVar1._8_4_ = param_7 & 0xff;
    auVar1._12_4_ = 0;
    return auVar1;
  }
  auVar3._8_4_ = param_7;
  auVar3._0_8_ = in_RAX;
  auVar3._12_4_ = 0;
  return auVar3;
}



/* PortableCompressedTexture2D::set_size_override(Vector2 const&) */

void __thiscall
PortableCompressedTexture2D::set_size_override(PortableCompressedTexture2D *this,Vector2 *param_1)

{
  long *plVar1;
  
  *(undefined8 *)(this + 0x308) = *(undefined8 *)param_1;
  plVar1 = (long *)RenderingServer::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x0010021c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x1e0))
            (plVar1,*(undefined8 *)(this + 0x318),(int)*(float *)(this + 0x308),
             (int)*(float *)(this + 0x30c));
  return;
}



/* PortableCompressedTexture2D::draw(RID, Vector2 const&, Color const&, bool) const */

void __thiscall
PortableCompressedTexture2D::draw
          (PortableCompressedTexture2D *this,undefined8 param_2,undefined8 *param_3,
          undefined8 param_4,undefined1 param_5)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(float *)(this + 0x300) != 0.0) && (*(float *)(this + 0x304) != 0.0)) {
    plVar1 = (long *)RenderingServer::get_singleton();
    local_48 = *param_3;
    local_40 = *(undefined8 *)(this + 0x300);
    (**(code **)(*plVar1 + 0xf20))
              (plVar1,param_2,&local_48,*(undefined8 *)(this + 0x318),0,param_4,param_5);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* PortableCompressedTexture2D::get_rid() const */

undefined8 __thiscall PortableCompressedTexture2D::get_rid(PortableCompressedTexture2D *this)

{
  long *plVar1;
  undefined8 uVar2;
  
  if (*(long *)(this + 0x318) != 0) {
    return *(undefined8 *)(this + 0x318);
  }
  plVar1 = (long *)RenderingServer::get_singleton();
  uVar2 = (**(code **)(*plVar1 + 0x1a8))(plVar1);
  *(undefined8 *)(this + 0x318) = uVar2;
  return *(undefined8 *)(this + 0x318);
}



/* PortableCompressedTexture2D::get_image() const */

void PortableCompressedTexture2D::get_image(void)

{
  long lVar1;
  long *plVar2;
  long in_RSI;
  undefined8 *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)(in_RSI + 0x328) == '\0') {
    *in_RDI = 0;
  }
  else {
    plVar2 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar2 + 0x1c0))();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PortableCompressedTexture2D::set_path(String const&, bool) */

void PortableCompressedTexture2D::set_path(String *param_1,bool param_2)

{
  long *plVar1;
  undefined7 in_register_00000031;
  
  if (*(long *)(param_1 + 0x318) != 0) {
    plVar1 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar1 + 0x1e8))
              (plVar1,*(undefined8 *)(param_1 + 0x318),CONCAT71(in_register_00000031,param_2));
  }
  Resource::set_path(param_1,param_2);
  return;
}



/* CowData<unsigned char>::_ref(CowData<unsigned char> const&) [clone .part.0] */

void __thiscall CowData<unsigned_char>::_ref(CowData<unsigned_char> *this,CowData *param_1)

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



/* PortableCompressedTexture2D::_get_data() const */

void PortableCompressedTexture2D::_get_data(void)

{
  long in_RSI;
  long in_RDI;
  
  *(undefined8 *)(in_RDI + 8) = 0;
  if (*(long *)(in_RSI + 0x2f8) != 0) {
    CowData<unsigned_char>::_ref((CowData<unsigned_char> *)(in_RDI + 8),(CowData *)(in_RSI + 0x2f8))
    ;
  }
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



/* PortableCompressedTexture2D::PortableCompressedTexture2D() */

void __thiscall
PortableCompressedTexture2D::PortableCompressedTexture2D(PortableCompressedTexture2D *this)

{
  Texture2D::Texture2D((Texture2D *)this);
  *(undefined4 *)(this + 0x2e8) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0010e2c8;
  this[0x2ec] = (PortableCompressedTexture2D)0x0;
  *(undefined8 *)(this + 0x2f8) = 0;
  *(undefined8 *)(this + 0x300) = 0;
  *(undefined8 *)(this + 0x308) = 0;
  this[0x310] = (PortableCompressedTexture2D)0x0;
  *(undefined4 *)(this + 0x314) = 0;
  *(undefined8 *)(this + 0x318) = 0;
  *(undefined8 *)(this + 800) = 0;
  this[0x328] = (PortableCompressedTexture2D)0x0;
  return;
}



/* PortableCompressedTexture2D::_bind_methods() */

void PortableCompressedTexture2D::_bind_methods(void)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  MethodBind *pMVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  Variant *pVVar9;
  long in_FS_OFFSET;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  long local_138;
  long local_130;
  long *local_128;
  long local_120;
  long local_118 [2];
  long *local_108;
  char *local_e8;
  char *pcStack_e0;
  char *local_d8;
  char *pcStack_d0;
  undefined8 local_c8;
  Variant *local_b8;
  Variant *pVStack_b0;
  char **local_a8;
  char **ppcStack_a0;
  Variant **local_88;
  undefined1 local_80 [16];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  local_c8 = 0;
  local_b8 = (Variant *)&local_e8;
  local_e8 = "image";
  pcStack_e0 = "compression_mode";
  local_d8 = "normal_map";
  pcStack_d0 = "lossy_quality";
  pVStack_b0 = (Variant *)&pcStack_e0;
  local_a8 = &local_d8;
  pVVar9 = (Variant *)local_40;
  ppcStack_a0 = &pcStack_d0;
  D_METHODP((char *)local_118,(char ***)"create_from_image",(uint)&local_b8);
  Variant::Variant((Variant *)&local_88,false);
  Variant::Variant(local_70,_LC24);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  local_b8 = (Variant *)&local_88;
  pVStack_b0 = local_70;
  pMVar5 = create_method_bind<PortableCompressedTexture2D,Ref<Image>const&,PortableCompressedTexture2D::CompressionMode,bool,float>
                     (create_from_image);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_118,&local_b8,2);
  do {
    pVVar1 = pVVar9 + -0x18;
    pVVar9 = pVVar9 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
    plVar4 = local_108;
  } while (pVVar9 != (Variant *)&local_88);
  if (local_108 != (long *)0x0) {
    LOCK();
    plVar7 = local_108 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_108 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_108[-1];
      lVar8 = 0;
      local_108 = (long *)0x0;
      plVar7 = plVar4;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_118[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_118,(char ***)"get_format",0);
  local_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar5 = create_method_bind<PortableCompressedTexture2D,Image::Format>(get_format);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_108;
  if (local_108 != (long *)0x0) {
    LOCK();
    plVar7 = local_108 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_108 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_108[-1];
      lVar8 = 0;
      local_108 = (long *)0x0;
      plVar7 = plVar4;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_118[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_118,(char ***)"get_compression_mode",0);
  local_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar5 = create_method_bind<PortableCompressedTexture2D,PortableCompressedTexture2D::CompressionMode>
                     (get_compression_mode);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_108;
  if (local_108 != (long *)0x0) {
    LOCK();
    plVar7 = local_108 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_108 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_108[-1];
      lVar8 = 0;
      local_108 = (long *)0x0;
      plVar7 = plVar4;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_118[0] != 0)) {
    StringName::unref();
  }
  local_b8 = (Variant *)&_LC27;
  pVStack_b0 = (Variant *)0x0;
  uVar6 = (uint)(Variant *)&local_88;
  local_88 = &local_b8;
  D_METHODP((char *)local_118,(char ***)"set_size_override",uVar6);
  local_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar5 = create_method_bind<PortableCompressedTexture2D,Vector2_const&>(set_size_override);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_108;
  if (local_108 != (long *)0x0) {
    LOCK();
    plVar7 = local_108 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_108 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_108[-1];
      lVar8 = 0;
      local_108 = (long *)0x0;
      plVar7 = plVar4;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_118[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_118,(char ***)"get_size_override",0);
  local_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar5 = create_method_bind<PortableCompressedTexture2D,Vector2>(get_size_override);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_108;
  if (local_108 != (long *)0x0) {
    LOCK();
    plVar7 = local_108 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_108 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_108[-1];
      lVar8 = 0;
      local_108 = (long *)0x0;
      plVar7 = plVar4;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_118[0] != 0)) {
    StringName::unref();
  }
  local_b8 = (Variant *)&_LC30;
  pVStack_b0 = (Variant *)0x0;
  local_88 = &local_b8;
  D_METHODP((char *)local_118,(char ***)"set_keep_compressed_buffer",uVar6);
  local_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar5 = create_method_bind<PortableCompressedTexture2D,bool>(set_keep_compressed_buffer);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_108;
  if (local_108 != (long *)0x0) {
    LOCK();
    plVar7 = local_108 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_108 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_108[-1];
      lVar8 = 0;
      local_108 = (long *)0x0;
      plVar7 = plVar4;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_118[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_118,(char ***)"is_keeping_compressed_buffer",0);
  local_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar5 = create_method_bind<PortableCompressedTexture2D,bool>(is_keeping_compressed_buffer);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_108;
  if (local_108 != (long *)0x0) {
    LOCK();
    plVar7 = local_108 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_108 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_108[-1];
      lVar8 = 0;
      local_108 = (long *)0x0;
      plVar7 = plVar4;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_118[0] != 0)) {
    StringName::unref();
  }
  local_b8 = (Variant *)&_LC33;
  pVStack_b0 = (Variant *)0x0;
  local_88 = &local_b8;
  D_METHODP((char *)local_118,(char ***)"_set_data",uVar6);
  local_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar5 = create_method_bind<PortableCompressedTexture2D,Vector<unsigned_char>const&>(_set_data);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_108;
  if (local_108 != (long *)0x0) {
    LOCK();
    plVar7 = local_108 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_108 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_108[-1];
      lVar8 = 0;
      local_108 = (long *)0x0;
      plVar7 = plVar4;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_118[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_118,(char ***)"_get_data",0);
  local_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar5 = create_method_bind<PortableCompressedTexture2D,Vector<unsigned_char>>(_get_data);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_108;
  if (local_108 != (long *)0x0) {
    LOCK();
    plVar7 = local_108 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_108 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_108[-1];
      lVar8 = 0;
      local_108 = (long *)0x0;
      plVar7 = plVar4;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_118[0] != 0)) {
    StringName::unref();
  }
  local_b8 = (Variant *)&_LC30;
  pVStack_b0 = (Variant *)0x0;
  local_88 = &local_b8;
  D_METHODP((char *)local_118,(char ***)"set_keep_all_compressed_buffers",uVar6);
  StringName::StringName((StringName *)&local_120,"PortableCompressedTexture2D",false);
  local_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar5 = (MethodBind *)operator_new(0x60,"");
  MethodBind::MethodBind(pMVar5);
  *(undefined ***)pMVar5 = &PTR__gen_argument_type_0010e858;
  *(code **)(pMVar5 + 0x58) = set_keep_all_compressed_buffers;
  MethodBind::_generate_argument_types((int)pMVar5);
  *(undefined4 *)(pMVar5 + 0x34) = 1;
  MethodBind::_set_static(SUB81(pMVar5,0));
  StringName::operator=((StringName *)(pMVar5 + 0x18),(StringName *)&local_120);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_120 != 0)) {
    StringName::unref();
  }
  plVar4 = local_108;
  if (local_108 != (long *)0x0) {
    LOCK();
    plVar7 = local_108 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_108 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_108[-1];
      lVar8 = 0;
      local_108 = (long *)0x0;
      plVar7 = plVar4;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_118[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_118,(char ***)"is_keeping_all_compressed_buffers",0);
  StringName::StringName((StringName *)&local_120,"PortableCompressedTexture2D",false);
  local_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar5 = (MethodBind *)operator_new(0x60,"");
  MethodBind::MethodBind(pMVar5);
  *(undefined ***)pMVar5 = &PTR__gen_argument_type_0010e8b8;
  *(code **)(pMVar5 + 0x58) = is_keeping_all_compressed_buffers;
  MethodBind::_generate_argument_types((int)pMVar5);
  *(undefined4 *)(pMVar5 + 0x34) = 0;
  MethodBind::_set_static(SUB81(pMVar5,0));
  MethodBind::_set_returns(SUB81(pMVar5,0));
  StringName::operator=((StringName *)(pMVar5 + 0x18),(StringName *)&local_120);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_118,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_120 != 0)) {
    StringName::unref();
  }
  plVar4 = local_108;
  if (local_108 != (long *)0x0) {
    LOCK();
    plVar7 = local_108 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_108 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_108[-1];
      lVar8 = 0;
      local_108 = (long *)0x0;
      plVar7 = plVar4;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_118[0] != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_128,true);
  _scs_create((char *)&local_130,true);
  local_138 = 0;
  local_140 = 0;
  String::parse_latin1((String *)&local_140,"");
  local_148 = 0;
  String::parse_latin1((String *)&local_148,"_data");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_118,0x1d,(String *)&local_148,0,(String *)&local_140,10,
             (String *)&local_138);
  local_150 = 0;
  String::parse_latin1((String *)&local_150,"PortableCompressedTexture2D");
  StringName::StringName((StringName *)&local_120,(String *)&local_150,false);
  ClassDB::add_property
            ((StringName *)&local_120,(PropertyInfo *)local_118,(StringName *)&local_130,
             (StringName *)&local_128,-1);
  if ((StringName::configured != '\0') && (local_120 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  if ((((StringName::configured != '\0') &&
       ((local_138 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_130 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_128 != (long *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_128,true);
  _scs_create((char *)&local_130,true);
  local_138 = 0;
  local_140 = 0;
  String::parse_latin1((String *)&local_140,"suffix:px");
  local_148 = 0;
  String::parse_latin1((String *)&local_148,"size_override");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_118,5,(String *)&local_148,0,(String *)&local_140,6,
             (String *)&local_138);
  local_150 = 0;
  String::parse_latin1((String *)&local_150,"PortableCompressedTexture2D");
  StringName::StringName((StringName *)&local_120,(String *)&local_150,false);
  ClassDB::add_property
            ((StringName *)&local_120,(PropertyInfo *)local_118,(StringName *)&local_130,
             (StringName *)&local_128,-1);
  if ((StringName::configured != '\0') && (local_120 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  if ((((StringName::configured != '\0') &&
       ((local_138 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_130 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_128 != (long *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_128,true);
  _scs_create((char *)&local_130,true);
  local_138 = 0;
  local_140 = 0;
  String::parse_latin1((String *)&local_140,"");
  local_148 = 0;
  String::parse_latin1((String *)&local_148,"keep_compressed_buffer");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_118,1,(String *)&local_148,0,(String *)&local_140,6,
             (String *)&local_138);
  local_150 = 0;
  String::parse_latin1((String *)&local_150,"PortableCompressedTexture2D");
  StringName::StringName((StringName *)&local_120,(String *)&local_150,false);
  ClassDB::add_property
            ((StringName *)&local_120,(PropertyInfo *)local_118,(StringName *)&local_130,
             (StringName *)&local_128,-1);
  if ((StringName::configured != '\0') && (local_120 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  if ((((StringName::configured != '\0') &&
       ((local_138 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_130 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_128 != (long *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_120,"COMPRESSION_MODE_LOSSLESS",false);
  local_130 = 0;
  String::parse_latin1((String *)&local_130,"COMPRESSION_MODE_LOSSLESS");
  GetTypeInfo<PortableCompressedTexture2D::CompressionMode,void>::get_class_info
            ((GetTypeInfo<PortableCompressedTexture2D::CompressionMode,void> *)local_118);
  local_128 = local_108;
  local_108 = (long *)0x0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_118);
  local_138 = 0;
  String::parse_latin1((String *)&local_138,"PortableCompressedTexture2D");
  StringName::StringName((StringName *)local_118,(String *)&local_138,false);
  ClassDB::bind_integer_constant
            ((StringName *)local_118,(StringName *)&local_128,(StringName *)&local_120,0,false);
  if ((StringName::configured != '\0') && (local_118[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  if ((StringName::configured != '\0') && (local_128 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  if ((StringName::configured != '\0') && (local_120 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_120,"COMPRESSION_MODE_LOSSY",false);
  local_130 = 0;
  String::parse_latin1((String *)&local_130,"COMPRESSION_MODE_LOSSY");
  GetTypeInfo<PortableCompressedTexture2D::CompressionMode,void>::get_class_info
            ((GetTypeInfo<PortableCompressedTexture2D::CompressionMode,void> *)local_118);
  local_128 = local_108;
  local_108 = (long *)0x0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_118);
  local_138 = 0;
  String::parse_latin1((String *)&local_138,"PortableCompressedTexture2D");
  StringName::StringName((StringName *)local_118,(String *)&local_138,false);
  ClassDB::bind_integer_constant
            ((StringName *)local_118,(StringName *)&local_128,(StringName *)&local_120,1,false);
  if ((StringName::configured != '\0') && (local_118[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  if ((StringName::configured != '\0') && (local_128 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  if ((StringName::configured != '\0') && (local_120 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_120,"COMPRESSION_MODE_BASIS_UNIVERSAL",false);
  local_130 = 0;
  String::parse_latin1((String *)&local_130,"COMPRESSION_MODE_BASIS_UNIVERSAL");
  GetTypeInfo<PortableCompressedTexture2D::CompressionMode,void>::get_class_info
            ((GetTypeInfo<PortableCompressedTexture2D::CompressionMode,void> *)local_118);
  local_128 = local_108;
  local_108 = (long *)0x0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_118);
  local_138 = 0;
  String::parse_latin1((String *)&local_138,"PortableCompressedTexture2D");
  StringName::StringName((StringName *)local_118,(String *)&local_138,false);
  ClassDB::bind_integer_constant
            ((StringName *)local_118,(StringName *)&local_128,(StringName *)&local_120,2,false);
  if ((StringName::configured != '\0') && (local_118[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  if ((StringName::configured != '\0') && (local_128 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  if ((StringName::configured != '\0') && (local_120 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_120,"COMPRESSION_MODE_S3TC",false);
  local_130 = 0;
  String::parse_latin1((String *)&local_130,"COMPRESSION_MODE_S3TC");
  GetTypeInfo<PortableCompressedTexture2D::CompressionMode,void>::get_class_info
            ((GetTypeInfo<PortableCompressedTexture2D::CompressionMode,void> *)local_118);
  local_128 = local_108;
  local_108 = (long *)0x0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_118);
  local_138 = 0;
  String::parse_latin1((String *)&local_138,"PortableCompressedTexture2D");
  StringName::StringName((StringName *)local_118,(String *)&local_138,false);
  ClassDB::bind_integer_constant
            ((StringName *)local_118,(StringName *)&local_128,(StringName *)&local_120,3,false);
  if ((StringName::configured != '\0') && (local_118[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  if ((StringName::configured != '\0') && (local_128 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  if ((StringName::configured != '\0') && (local_120 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_120,"COMPRESSION_MODE_ETC2",false);
  local_130 = 0;
  String::parse_latin1((String *)&local_130,"COMPRESSION_MODE_ETC2");
  GetTypeInfo<PortableCompressedTexture2D::CompressionMode,void>::get_class_info
            ((GetTypeInfo<PortableCompressedTexture2D::CompressionMode,void> *)local_118);
  local_128 = local_108;
  local_108 = (long *)0x0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_118);
  local_138 = 0;
  String::parse_latin1((String *)&local_138,"PortableCompressedTexture2D");
  StringName::StringName((StringName *)local_118,(String *)&local_138,false);
  ClassDB::bind_integer_constant
            ((StringName *)local_118,(StringName *)&local_128,(StringName *)&local_120,4,false);
  if ((StringName::configured != '\0') && (local_118[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  if ((StringName::configured != '\0') && (local_128 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  if ((StringName::configured != '\0') && (local_120 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_120,"COMPRESSION_MODE_BPTC",false);
  local_130 = 0;
  String::parse_latin1((String *)&local_130,"COMPRESSION_MODE_BPTC");
  GetTypeInfo<PortableCompressedTexture2D::CompressionMode,void>::get_class_info
            ((GetTypeInfo<PortableCompressedTexture2D::CompressionMode,void> *)local_118);
  local_128 = local_108;
  local_108 = (long *)0x0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_118);
  local_138 = 0;
  String::parse_latin1((String *)&local_138,"PortableCompressedTexture2D");
  StringName::StringName((StringName *)local_118,(String *)&local_138,false);
  ClassDB::bind_integer_constant
            ((StringName *)local_118,(StringName *)&local_128,(StringName *)&local_120,5,false);
  if ((StringName::configured != '\0') && (local_118[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  if ((StringName::configured != '\0') && (local_128 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  if ((StringName::configured != '\0') && (local_120 != 0)) {
    StringName::unref();
  }
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* PortableCompressedTexture2D::~PortableCompressedTexture2D() */

void __thiscall
PortableCompressedTexture2D::~PortableCompressedTexture2D(PortableCompressedTexture2D *this)

{
  Object *pOVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  bool bVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_0010e2c8;
  if (*(long *)(this + 0x318) != 0) {
    lVar3 = RenderingServer::get_singleton();
    if (lVar3 == 0) {
      _err_print_error("~PortableCompressedTexture2D",
                       "scene/resources/portable_compressed_texture.cpp",0x16c,
                       "Parameter \"RenderingServer::get_singleton()\" is null.",0,0);
      if (*(long *)(this + 800) != 0) {
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          pOVar1 = *(Object **)(this + 800);
          cVar2 = predelete_handler(pOVar1);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
            Memory::free_static(pOVar1,false);
          }
        }
      }
      CowData<unsigned_char>::_unref((CowData<unsigned_char> *)(this + 0x2f8));
      Texture2D::~Texture2D((Texture2D *)this);
      return;
    }
    plVar4 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar4 + 0x11b0))(plVar4);
  }
  if (*(long *)(this + 800) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 800);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  CowData<unsigned_char>::_unref((CowData<unsigned_char> *)(this + 0x2f8));
  bVar5 = StringName::configured != '\0';
  *(code **)this = String::split;
  if (bVar5) {
    if (*(long *)(this + 0x2d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010206b;
    }
    if (*(long *)(this + 0x2b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010206b;
    }
    if (*(long *)(this + 0x2a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010206b;
    }
    if (*(long *)(this + 0x288) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010206b;
    }
    if (*(long *)(this + 0x270) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010206b;
    }
    if (*(long *)(this + 600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010206b;
    }
    if (*(long *)(this + 0x240) != 0) {
      StringName::unref();
    }
  }
LAB_0010206b:
  *(undefined ***)this = &PTR__initialize_classv_0010e0f0;
  Resource::~Resource((Resource *)this);
  return;
}



/* PortableCompressedTexture2D::~PortableCompressedTexture2D() */

void __thiscall
PortableCompressedTexture2D::~PortableCompressedTexture2D(PortableCompressedTexture2D *this)

{
  ~PortableCompressedTexture2D(this);
  operator_delete(this,0x330);
  return;
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<unsigned_char>::_copy_on_write(CowData<unsigned_char> *this)

{
  size_t __n;
  code *pcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  __n = *(size_t *)(*(long *)this + -8);
  uVar3 = 0x10;
  if (__n != 0) {
    uVar3 = __n - 1 | __n - 1 >> 1;
    uVar3 = uVar3 | uVar3 >> 2;
    uVar3 = uVar3 | uVar3 >> 4;
    uVar3 = uVar3 | uVar3 >> 8;
    uVar3 = uVar3 | uVar3 >> 0x10;
    uVar3 = (uVar3 | uVar3 >> 0x20) + 0x11;
  }
  puVar2 = (undefined8 *)Memory::alloc_static(uVar3,false);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 1;
    puVar2[1] = __n;
    memcpy(puVar2 + 2,*(void **)this,__n);
    _unref(this);
    *(undefined8 **)this = puVar2 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* PortableCompressedTexture2D::set_keep_compressed_buffer(bool) */

void __thiscall
PortableCompressedTexture2D::set_keep_compressed_buffer
          (PortableCompressedTexture2D *this,bool param_1)

{
  this[0x2ec] = (PortableCompressedTexture2D)param_1;
  if (((!param_1) && (*(long *)(this + 0x2f8) != 0)) &&
     (*(long *)(*(long *)(this + 0x2f8) + -8) != 0)) {
    CowData<unsigned_char>::_unref((CowData<unsigned_char> *)(this + 0x2f8));
    return;
  }
  return;
}



/* PortableCompressedTexture2D::is_pixel_opaque(int, int) const */

undefined8 PortableCompressedTexture2D::is_pixel_opaque(int param_1,int param_2)

{
  Image *pIVar1;
  char cVar2;
  int iVar3;
  int extraout_var;
  undefined8 uVar4;
  long *plVar5;
  Image *pIVar6;
  BitMap *this;
  int iVar7;
  BitMap *pBVar8;
  undefined4 in_register_0000003c;
  long *plVar9;
  Object *pOVar10;
  long in_FS_OFFSET;
  Image *local_60;
  Image *local_58;
  Object *local_50;
  undefined8 local_48;
  long local_40;
  
  plVar9 = (long *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar9[100] == 0) {
    if (*(code **)(*plVar9 + 0x210) == get_image) {
      if ((char)plVar9[0x65] != '\0') {
        plVar5 = (long *)RenderingServer::get_singleton();
        (**(code **)(*plVar5 + 0x1c0))(&local_60,plVar5,plVar9[99]);
        goto LAB_001023d8;
      }
    }
    else {
      (**(code **)(*plVar9 + 0x210))(&local_60,plVar9);
LAB_001023d8:
      if (local_60 != (Image *)0x0) {
        cVar2 = Image::is_compressed();
        if (cVar2 != '\0') {
          pIVar6 = (Image *)0x0;
          (**(code **)(*(long *)local_60 + 0x198))(&local_50,local_60,0);
          local_58 = (Image *)0x0;
          if (local_50 != (Object *)0x0) {
            pIVar6 = (Image *)__dynamic_cast(local_50,&Object::typeinfo,&Image::typeinfo,0);
            if (pIVar6 != (Image *)0x0) {
              local_48 = 0;
              local_58 = pIVar6;
              cVar2 = RefCounted::reference();
              if (cVar2 == '\0') {
                local_58 = (Image *)0x0;
                pIVar6 = (Image *)0x0;
              }
              Ref<Image>::unref((Ref<Image> *)&local_48);
              if (local_50 == (Object *)0x0) goto LAB_001024c0;
            }
            cVar2 = RefCounted::unreference();
            if ((cVar2 != '\0') && (cVar2 = predelete_handler(local_50), cVar2 != '\0')) {
              (**(code **)(*(long *)local_50 + 0x140))();
              Memory::free_static(local_50,false);
            }
          }
LAB_001024c0:
          Image::decompress();
          pIVar1 = local_60;
          if (local_60 != pIVar6) {
            local_60 = pIVar6;
            cVar2 = RefCounted::reference();
            if (cVar2 == '\0') {
              local_60 = (Image *)0x0;
            }
            if ((pIVar1 != (Image *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) {
              memdelete<Image>(pIVar1);
            }
          }
          Ref<Image>::unref((Ref<Image> *)&local_58);
        }
        this = (BitMap *)operator_new(600,"");
        BitMap::BitMap(this);
        postinitialize_handler((Object *)this);
        cVar2 = RefCounted::init_ref();
        if (cVar2 == '\0') {
          pOVar10 = (Object *)plVar9[100];
          if (pOVar10 != (Object *)0x0) {
            plVar9[100] = 0;
            cVar2 = RefCounted::unreference();
            if (cVar2 != '\0') {
              cVar2 = predelete_handler(pOVar10);
              this = (BitMap *)0x0;
              if (cVar2 != '\0') goto LAB_001026b7;
            }
            goto LAB_00102588;
          }
        }
        else {
          pOVar10 = (Object *)plVar9[100];
          pBVar8 = (BitMap *)pOVar10;
          if (this != (BitMap *)pOVar10) {
            plVar9[100] = (long)this;
            cVar2 = RefCounted::reference();
            if (cVar2 == '\0') {
              plVar9[100] = 0;
            }
            pBVar8 = this;
            if (((pOVar10 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0'))
               && (cVar2 = predelete_handler(pOVar10), cVar2 != '\0')) {
LAB_001026b7:
              (**(code **)(*(long *)pOVar10 + 0x140))();
              Memory::free_static(pOVar10,false);
              pBVar8 = this;
              if (this == (BitMap *)0x0) goto LAB_00102588;
            }
          }
          cVar2 = RefCounted::unreference();
          if ((cVar2 != '\0') && (cVar2 = predelete_handler((Object *)pBVar8), cVar2 != '\0')) {
            (**(code **)(*(long *)pBVar8 + 0x140))(pBVar8);
            Memory::free_static(pBVar8,false);
          }
LAB_00102588:
          pOVar10 = (Object *)plVar9[100];
        }
        BitMap::create_from_image_alpha((Ref *)pOVar10,_LC55);
        if ((local_60 != (Image *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) {
          memdelete<Image>(local_60);
        }
      }
      if (plVar9[100] != 0) goto LAB_001022bb;
    }
  }
  else {
LAB_001022bb:
    iVar3 = BitMap::get_size();
    BitMap::get_size();
    if ((iVar3 != 0) && (extraout_var != 0)) {
      iVar7 = (int)((float)(param_2 * iVar3) / *(float *)(plVar9 + 0x60));
      if (iVar7 <= iVar3) {
        iVar3 = iVar7;
      }
      if (iVar7 < 0) {
        iVar3 = 0;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar4 = BitMap::get_bit((int)plVar9[100],iVar3);
        return uVar4;
      }
      goto LAB_001026f8;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001026f8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this,long param_1)

{
  CowData<unsigned_char> *pCVar1;
  int iVar2;
  ulong uVar3;
  CowData<unsigned_char> *pCVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  CowData<unsigned_char> *pCVar7;
  long lVar8;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
LAB_001028b6:
    lVar8 = 0;
    pCVar4 = (CowData<unsigned_char> *)0x0;
  }
  else {
    lVar8 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar8) {
      return;
    }
    if (param_1 == 0) {
      _unref(this);
      return;
    }
    _copy_on_write(this);
    if (lVar8 == 0) goto LAB_001028b6;
    uVar3 = lVar8 - 1U | lVar8 - 1U >> 1;
    uVar3 = uVar3 | uVar3 >> 2;
    uVar3 = uVar3 | uVar3 >> 4;
    uVar3 = uVar3 | uVar3 >> 8;
    uVar3 = uVar3 | uVar3 >> 0x10;
    pCVar4 = (CowData<unsigned_char> *)((uVar3 | uVar3 >> 0x20) + 1);
  }
  uVar3 = param_1 - 1U | param_1 - 1U >> 1;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 | uVar3 >> 0x10;
  pCVar7 = (CowData<unsigned_char> *)(uVar3 | uVar3 >> 0x20);
  pCVar1 = pCVar7 + 1;
  if (param_1 <= lVar8) {
    if ((pCVar1 != pCVar4) && (iVar2 = _realloc(this,(long)pCVar1), iVar2 != 0)) {
      return;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return;
    }
    FUN_00108e7e();
    return;
  }
  if (pCVar1 != pCVar4) {
    if (lVar8 == 0) {
      puVar5 = (undefined8 *)Memory::alloc_static((ulong)(pCVar7 + 0x11),false);
      if (puVar5 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
        return;
      }
      puVar6 = puVar5 + 2;
      *puVar5 = 1;
      puVar5[1] = 0;
      *(undefined8 **)this = puVar6;
      goto LAB_0010280c;
    }
    pCVar7 = this;
    iVar2 = _realloc(this,(long)pCVar1);
    if (iVar2 != 0) {
      return;
    }
  }
  puVar6 = *(undefined8 **)this;
  if (puVar6 == (undefined8 *)0x0) {
    resize<false>((long)pCVar7);
    return;
  }
LAB_0010280c:
  puVar6[-1] = param_1;
  return;
}



/* PortableCompressedTexture2D::_set_data(Vector<unsigned char> const&) */

void __thiscall
PortableCompressedTexture2D::_set_data(PortableCompressedTexture2D *this,Vector *param_1)

{
  byte *pbVar1;
  float fVar2;
  PortableCompressedTexture2D PVar3;
  ushort uVar4;
  ushort uVar5;
  float fVar6;
  char cVar7;
  int iVar8;
  long lVar9;
  Object *pOVar10;
  long *plVar11;
  undefined8 uVar12;
  Image *pIVar13;
  long lVar14;
  ulong uVar15;
  undefined4 uVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  undefined4 uVar20;
  long lVar21;
  uint uVar22;
  ushort *puVar23;
  long in_FS_OFFSET;
  bool bVar24;
  uint local_9c;
  Object **local_98;
  code *local_90;
  CowData<unsigned_char> *local_88;
  Object *local_78;
  Image *local_70;
  Vector<unsigned_char> local_68 [8];
  long local_60;
  Object *local_58;
  long local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar23 = *(ushort **)(param_1 + 8);
  if ((puVar23 != (ushort *)0x0) && (lVar9 = *(long *)(puVar23 + -4), lVar9 != 0)) {
    if ((uint)lVar9 < 0x14) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        _err_print_error("_set_data","scene/resources/portable_compressed_texture.cpp",0x2c,
                         "Condition \"data_size < 20\" is true.",0,0);
        return;
      }
      goto LAB_00103243;
    }
    uVar4 = *puVar23;
    uVar22 = 0;
    *(uint *)(this + 0x2e8) = (uint)uVar4;
    uVar5 = puVar23[1];
    lVar17 = 0;
    do {
      lVar14 = lVar17 + 4;
      cVar7 = (char)lVar17;
      lVar17 = lVar17 + 1;
      uVar22 = uVar22 | (uint)*(byte *)((long)puVar23 + lVar14) << (cVar7 * '\b' & 0x1fU);
    } while (lVar17 != 4);
    *(uint *)(this + 0x314) = uVar22;
    lVar17 = 0;
    uVar22 = 0;
    do {
      lVar14 = lVar17 + 8;
      cVar7 = (char)lVar17;
      lVar17 = lVar17 + 1;
      uVar22 = uVar22 | (uint)*(byte *)((long)puVar23 + lVar14) << (cVar7 * '\b' & 0x1fU);
    } while (lVar17 != 4);
    lVar17 = 0;
    uVar18 = 0;
    do {
      lVar14 = lVar17 + 0xc;
      cVar7 = (char)lVar17;
      lVar17 = lVar17 + 1;
      uVar18 = uVar18 | (uint)*(byte *)((long)puVar23 + lVar14) << (cVar7 * '\b' & 0x1fU);
    } while (lVar17 != 4);
    lVar17 = 0;
    uVar19 = 0;
    *(float *)(this + 0x300) = (float)uVar18;
    do {
      lVar14 = lVar17 + 0x10;
      cVar7 = (char)lVar17;
      uVar16 = 0;
      lVar17 = lVar17 + 1;
      uVar19 = uVar19 | (uint)*(byte *)((long)puVar23 + lVar14) << (cVar7 * '\b' & 0x1fU);
    } while (lVar17 != 4);
    puVar23 = puVar23 + 10;
    local_78 = (Object *)0x0;
    this[0x310] = (PortableCompressedTexture2D)(1 < uVar22);
    uVar18 = (uint)lVar9 - 0x14;
    *(float *)(this + 0x304) = (float)uVar19;
    if (uVar4 == 2) {
      if (Image::basis_universal_unpacker_ptr == (code *)0x0) {
        _err_print_error("_set_data","scene/resources/portable_compressed_texture.cpp",0x60,
                         "Parameter \"Image::basis_universal_unpacker_ptr\" is null.",0,0);
        goto LAB_00102bf5;
      }
      (*Image::basis_universal_unpacker_ptr)((Ref<Image> *)&local_58,puVar23,uVar18);
      pOVar10 = local_78;
      if (local_58 != local_78) {
        local_78 = local_58;
        if ((local_58 != (Object *)0x0) && (cVar7 = RefCounted::reference(), cVar7 == '\0')) {
          local_78 = (Object *)0x0;
        }
        if ((pOVar10 != (Object *)0x0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) {
          memdelete<Image>((Image *)pOVar10);
        }
      }
      Ref<Image>::unref((Ref<Image> *)&local_58);
LAB_00102d1f:
      if (local_78 != (Object *)0x0) {
        if (*(long *)(this + 0x318) == 0) {
          plVar11 = (long *)RenderingServer::get_singleton();
          uVar12 = (**(code **)(*plVar11 + 0x158))(plVar11,&local_78);
          *(undefined8 *)(this + 0x318) = uVar12;
        }
        else {
          plVar11 = (long *)RenderingServer::get_singleton();
          uVar12 = (**(code **)(*plVar11 + 0x158))(plVar11,&local_78);
          plVar11 = (long *)RenderingServer::get_singleton();
          (**(code **)(*plVar11 + 0x1d8))(plVar11,*(undefined8 *)(this + 0x318),uVar12);
        }
        this[0x328] = (PortableCompressedTexture2D)0x1;
        *(undefined8 *)(this + 0x308) = *(undefined8 *)(this + 0x300);
        plVar11 = (long *)RenderingServer::get_singleton();
        (**(code **)(*plVar11 + 0x1e0))
                  (plVar11,*(undefined8 *)(this + 0x318),(int)*(float *)(this + 0x308),
                   CONCAT44(uVar16,(int)*(float *)(this + 0x30c)));
        if ((*(long *)(this + 800) != 0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) {
          pOVar10 = *(Object **)(this + 800);
          cVar7 = predelete_handler(pOVar10);
          if (cVar7 != '\0') {
            (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
            Memory::free_static(pOVar10,false);
          }
        }
        bVar24 = keep_all_compressed_buffers == '\0';
        *(undefined8 *)(this + 800) = 0;
        if ((bVar24) && (this[0x2ec] == (PortableCompressedTexture2D)0x0)) {
          CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(this + 0x2f8),0);
        }
        else if (*(long *)(this + 0x2f8) != *(long *)(param_1 + 8)) {
          CowData<unsigned_char>::_ref
                    ((CowData<unsigned_char> *)(this + 0x2f8),(CowData *)(param_1 + 8));
        }
        if ((local_78 != (Object *)0x0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) {
          memdelete<Image>((Image *)local_78);
        }
        goto LAB_00102c00;
      }
LAB_00102bd0:
      _err_print_error("_set_data","scene/resources/portable_compressed_texture.cpp",0x6a,
                       "Condition \"image.is_null()\" is true.",0,0);
    }
    else {
      if (2 < uVar4) {
        if ((ushort)(uVar4 - 3) < 3) {
          local_50[0] = 0;
          if (lVar9 < -0x14) {
LAB_00102c3b:
            _err_print_error("slice","./core/templates/vector.h",0xb8,
                             "Condition \"begin > end\" is true. Returning: result",0,0);
          }
          else {
            lVar17 = 0x14;
            lVar14 = 0x14;
            if (lVar9 < 0x15) {
              lVar14 = lVar9;
            }
            lVar21 = lVar9;
            if (lVar9 < 0) {
              lVar17 = lVar9 + lVar14;
              lVar21 = lVar9 * 2;
              if (lVar17 != lVar21 && SBORROW8(lVar17,lVar21) == lVar17 + lVar9 * -2 < 0)
              goto LAB_00102c3b;
            }
            lVar21 = lVar21 - lVar17;
            CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)local_50,lVar21);
            lVar9 = *(long *)(param_1 + 8);
            CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)local_50);
            lVar14 = 0;
            if (lVar21 != 0) {
              do {
                *(undefined1 *)(local_50[0] + lVar14) = *(undefined1 *)(lVar9 + lVar17 + lVar14);
                lVar14 = lVar14 + 1;
              } while (lVar21 != lVar14);
            }
          }
          local_88 = (CowData<unsigned_char> *)local_50;
          fVar2 = *(float *)(this + 0x304);
          fVar6 = *(float *)(this + 0x300);
          uVar20 = 0;
          uVar16 = *(undefined4 *)(this + 0x314);
          PVar3 = this[0x310];
          pOVar10 = (Object *)operator_new(0x268,"");
          uVar15 = (ulong)(byte)PVar3;
          Image::Image((Image *)pOVar10,CONCAT44(uVar20,(int)fVar6),(int)fVar2,uVar15,uVar16,
                       &local_58);
          uVar16 = (undefined4)(uVar15 >> 0x20);
          postinitialize_handler(pOVar10);
          cVar7 = RefCounted::init_ref();
          pIVar13 = (Image *)local_78;
          if (cVar7 == '\0') {
            if (local_78 != (Object *)0x0) {
              local_78 = (Object *)0x0;
              cVar7 = RefCounted::unreference();
              goto joined_r0x00103032;
            }
          }
          else {
            if (local_78 != pOVar10) {
              local_78 = pOVar10;
              cVar7 = RefCounted::reference();
              if (cVar7 == '\0') {
                local_78 = (Object *)0x0;
              }
              if ((pIVar13 != (Image *)0x0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) {
                memdelete<Image>(pIVar13);
              }
            }
            cVar7 = RefCounted::unreference();
            pIVar13 = (Image *)pOVar10;
joined_r0x00103032:
            if (cVar7 != '\0') {
              memdelete<Image>(pIVar13);
            }
          }
          CowData<unsigned_char>::_unref(local_88);
          goto LAB_00102d1f;
        }
        goto LAB_00102bd0;
      }
      if (uVar5 == 0) {
        local_90 = (code *)0x0;
      }
      else if (uVar5 == 2) {
        local_90 = Image::_png_mem_unpacker_func;
      }
      else {
        if (uVar5 != 3) {
          _err_print_error("_set_data","scene/resources/portable_compressed_texture.cpp",0x45,
                           "Method/function failed.",0,0);
          goto LAB_00102bf5;
        }
        local_90 = Image::_webp_mem_loader_func;
      }
      local_60 = 0;
      if (3 < uVar18) {
        local_9c = 0;
        if (uVar22 == 0) {
          local_50[0] = 0;
        }
        else {
          do {
            lVar9 = 0;
            uVar15 = 0;
            do {
              pbVar1 = (byte *)((long)puVar23 + lVar9);
              cVar7 = (char)lVar9;
              lVar9 = lVar9 + 1;
              uVar19 = (uint)uVar15 | (uint)*pbVar1 << (cVar7 * '\b' & 0x1fU);
              uVar15 = (ulong)uVar19;
            } while (lVar9 != 4);
            uVar18 = uVar18 - 4;
            puVar23 = puVar23 + 2;
            if (uVar18 < uVar19) {
              _err_print_error("_set_data","scene/resources/portable_compressed_texture.cpp",0x4e,
                               "Condition \"mipsize > data_size\" is true.",0,0);
              goto LAB_00103135;
            }
            if (local_90 == (code *)0x0) {
              pIVar13 = (Image *)operator_new(0x268,"");
              Image::Image(pIVar13,(uchar *)puVar23,uVar18);
              postinitialize_handler((Object *)pIVar13);
              local_70 = pIVar13;
              cVar7 = RefCounted::init_ref();
              if (cVar7 == '\0') {
                local_70 = (Image *)0x0;
              }
            }
            else {
              (*local_90)(&local_70,puVar23,uVar18);
            }
            cVar7 = Image::is_empty();
            if (cVar7 != '\0') {
              _err_print_error("_set_data","scene/resources/portable_compressed_texture.cpp",0x52,
                               "Condition \"img->is_empty()\" is true.",0,0);
              if ((local_70 != (Image *)0x0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0'))
              {
                memdelete<Image>(local_70);
              }
              goto LAB_00103135;
            }
            iVar8 = Image::get_format();
            if (iVar8 != *(int *)(this + 0x314)) {
              Image::convert(local_70);
            }
            uVar18 = uVar18 - uVar19;
            Image::get_data();
            Vector<unsigned_char>::append_array(local_68,&local_58);
            CowData<unsigned_char>::_unref((CowData<unsigned_char> *)local_50);
            puVar23 = (ushort *)((long)puVar23 + uVar15);
            if ((local_70 != (Image *)0x0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) {
              memdelete<Image>(local_70);
            }
            local_88 = (CowData<unsigned_char> *)local_50;
            local_9c = local_9c + 1;
          } while (local_9c != uVar22);
          local_50[0] = 0;
          if (local_60 != 0) {
            CowData<unsigned_char>::_ref(local_88,(CowData *)&local_60);
          }
        }
        local_88 = (CowData<unsigned_char> *)local_50;
        local_98 = &local_58;
        Ref<Image>::instantiate<float,float,bool,Image::Format,Vector<unsigned_char>>
                  ((Ref<Image> *)&local_78,this[0x310],*(undefined4 *)(this + 0x314),local_98);
        uVar16 = (undefined4)((ulong)local_98 >> 0x20);
        CowData<unsigned_char>::_unref(local_88);
        CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_60);
        goto LAB_00102d1f;
      }
      _err_print_error("_set_data","scene/resources/portable_compressed_texture.cpp",0x49,
                       "Condition \"data_size < 4\" is true.",0,0);
LAB_00103135:
      CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_60);
    }
LAB_00102bf5:
    Ref<Image>::unref((Ref<Image> *)&local_78);
  }
LAB_00102c00:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103243:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PortableCompressedTexture2D::create_from_image(Ref<Image> const&,
   PortableCompressedTexture2D::CompressionMode, bool, float) */

void __thiscall
PortableCompressedTexture2D::create_from_image
          (undefined4 param_1_00,PortableCompressedTexture2D *this,long *param_1,uint param_4,
          uint param_5)

{
  undefined1 *puVar1;
  bool bVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  undefined2 *puVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  ulong uVar12;
  Image *pIVar13;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  undefined2 *puVar18;
  long in_FS_OFFSET;
  undefined2 local_d0;
  Image *local_90;
  Vector<unsigned_char> local_88 [8];
  undefined2 *local_80;
  Object *local_78;
  long local_70;
  long local_68;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*param_1 == 0) || (cVar7 = Image::is_empty(), cVar7 != '\0')) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("create_from_image","scene/resources/portable_compressed_texture.cpp",0x87,
                       "Condition \"p_image.is_null() || p_image->is_empty()\" is true.",0,0);
      return;
    }
    goto LAB_00103b7f;
  }
  local_80 = (undefined2 *)0x0;
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_80,0x14);
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_80);
  local_d0 = (undefined2)param_4;
  *local_80 = local_d0;
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_80);
  local_80[1] = 0;
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_80);
  puVar6 = local_80;
  uVar12 = Image::get_format();
  puVar18 = puVar6 + 2;
  do {
    *(char *)puVar18 = (char)uVar12;
    puVar18 = (undefined2 *)((long)puVar18 + 1);
    uVar12 = uVar12 >> 8 & 0xffffff;
  } while (puVar18 != puVar6 + 4);
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_80);
  puVar6 = local_80;
  iVar9 = Image::get_mipmap_count();
  puVar18 = puVar6 + 4;
  uVar10 = iVar9 + 1;
  do {
    *(char *)puVar18 = (char)uVar10;
    puVar18 = (undefined2 *)((long)puVar18 + 1);
    uVar10 = uVar10 >> 8;
  } while (puVar18 != puVar6 + 6);
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_80);
  puVar6 = local_80;
  uVar12 = Image::get_width();
  puVar18 = puVar6 + 6;
  do {
    *(char *)puVar18 = (char)uVar12;
    puVar18 = (undefined2 *)((long)puVar18 + 1);
    uVar12 = uVar12 >> 8 & 0xffffff;
  } while (puVar18 != puVar6 + 8);
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_80);
  puVar6 = local_80;
  uVar12 = Image::get_height();
  puVar18 = puVar6 + 8;
  do {
    *(char *)puVar18 = (char)uVar12;
    puVar18 = (undefined2 *)((long)puVar18 + 1);
    uVar12 = uVar12 >> 8 & 0xffffff;
  } while (puVar18 != puVar6 + 10);
  if (param_4 == 2) {
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_80);
    local_80[1] = 4;
    uVar11 = Image::detect_used_channels(*param_1,(param_5 & 0xff) * 2);
    (*Image::basis_universal_packer)(&local_78,param_1,uVar11);
    local_60 = 0;
    if (local_70 != 0) {
      CowData<unsigned_char>::_ref((CowData<unsigned_char> *)&local_60,(CowData *)&local_70);
    }
    Vector<unsigned_char>::append_array(local_88,&local_68);
    CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_60);
    CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_70);
  }
  else if (param_4 < 3) {
    ProjectSettings::get_singleton();
    StringName::StringName
              ((StringName *)&local_68,"rendering/textures/lossless_compression/force_png",false);
    ProjectSettings::get_setting_with_override((StringName *)local_58);
    bVar8 = Variant::operator_cast_to_bool((Variant *)local_58);
    bVar2 = false;
    if ((bVar8) || (Image::_webp_mem_loader_func == 0)) {
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
    }
    else {
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      iVar9 = Image::get_width();
      if (iVar9 < 0x4000) {
        iVar9 = Image::get_height();
        bVar2 = iVar9 < 0x4000;
      }
    }
    iVar17 = 0;
    iVar9 = Image::get_mipmap_count();
    if (-1 < iVar9) {
      do {
        pcVar5 = Image::webp_lossy_packer;
        pcVar4 = Image::png_packer;
        pcVar3 = Image::webp_lossless_packer;
        pIVar13 = (Image *)*param_1;
        local_70 = 0;
        if (param_4 == 1) {
          if (iVar17 == 0) {
            if (pIVar13 == (Image *)0x0) {
              local_90 = (Image *)0x0;
            }
            else {
              local_90 = pIVar13;
              cVar7 = RefCounted::reference();
              if (cVar7 == '\0') {
                local_90 = (Image *)0x0;
              }
            }
          }
          else {
            Image::get_image_from_mipmap((int)&local_90);
          }
          (*pcVar5)(param_1_00,(StringName *)&local_68,(Ref<Image> *)&local_90);
          lVar16 = local_60;
          if (local_60 != 0) {
            CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_70);
            lVar16 = local_60;
            local_60 = 0;
            local_70 = lVar16;
          }
          CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_60);
          Ref<Image>::unref((Ref<Image> *)&local_90);
LAB_00103676:
          CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_80);
          local_80[1] = (undefined2)_LC72;
          if (lVar16 != 0) goto LAB_00103697;
LAB_001038f4:
          uVar10 = 0;
LAB_001036a5:
          lVar15 = *(long *)(local_80 + -4) + 4;
        }
        else {
          if (bVar2) {
            if (iVar17 == 0) {
              if (pIVar13 == (Image *)0x0) {
                local_90 = (Image *)0x0;
              }
              else {
                local_90 = pIVar13;
                cVar7 = RefCounted::reference();
                if (cVar7 == '\0') {
                  local_90 = (Image *)0x0;
                }
              }
            }
            else {
              Image::get_image_from_mipmap((int)&local_90);
            }
            (*pcVar3)((StringName *)&local_68,&local_90);
            lVar16 = local_60;
            if (local_60 != 0) {
              CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_70);
              lVar16 = local_60;
              local_60 = 0;
              local_70 = lVar16;
            }
            CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_60);
            if ((local_90 != (Image *)0x0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) {
              memdelete<Image>(local_90);
            }
            goto LAB_00103676;
          }
          if (iVar17 == 0) {
            if (pIVar13 == (Image *)0x0) {
              local_90 = (Image *)0x0;
            }
            else {
              local_90 = pIVar13;
              cVar7 = RefCounted::reference();
              if (cVar7 == '\0') {
                local_90 = (Image *)0x0;
              }
            }
          }
          else {
            Image::get_image_from_mipmap((int)&local_90);
          }
          (*pcVar4)((StringName *)&local_68,&local_90);
          lVar16 = local_60;
          if (local_60 != 0) {
            CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_70);
            lVar16 = local_60;
            local_60 = 0;
            local_70 = lVar16;
          }
          CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_60);
          if ((local_90 != (Image *)0x0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) {
            memdelete<Image>(local_90);
          }
          CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_80);
          local_80[1] = (undefined2)_LC73;
          if (lVar16 == 0) goto LAB_001038f4;
LAB_00103697:
          uVar10 = *(uint *)(lVar16 + -8);
          if (local_80 != (undefined2 *)0x0) goto LAB_001036a5;
          lVar15 = 4;
        }
        CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_80,lVar15);
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_80);
        uVar12 = (ulong)uVar10;
        if (local_80 == (undefined2 *)0x0) {
          lVar15 = -4;
        }
        else {
          lVar15 = *(long *)(local_80 + -4) + -4;
        }
        puVar14 = (undefined1 *)((long)local_80 + lVar15);
        puVar1 = puVar14 + 4;
        do {
          *puVar14 = (char)uVar12;
          puVar14 = puVar14 + 1;
          uVar12 = uVar12 >> 8;
        } while (puVar14 != puVar1);
        local_60 = 0;
        if (lVar16 != 0) {
          CowData<unsigned_char>::_ref((CowData<unsigned_char> *)&local_60,(CowData *)&local_70);
        }
        iVar17 = iVar17 + 1;
        Vector<unsigned_char>::append_array(local_88,(StringName *)&local_68);
        CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_60);
        CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_70);
        iVar9 = Image::get_mipmap_count();
      } while (iVar17 <= iVar9);
    }
  }
  else if (param_4 - 3 < 3) {
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_80);
    local_80[1] = 1;
    pIVar13 = (Image *)0x0;
    (**(code **)(*(long *)*param_1 + 0x198))(&local_78,(long *)*param_1,0);
    local_90 = (Image *)0x0;
    if (local_78 != (Object *)0x0) {
      pIVar13 = (Image *)__dynamic_cast(local_78,&Object::typeinfo,&Image::typeinfo,0);
      if (pIVar13 != (Image *)0x0) {
        local_68 = 0;
        local_90 = pIVar13;
        cVar7 = RefCounted::reference();
        if (cVar7 == '\0') {
          local_90 = (Image *)0x0;
          pIVar13 = (Image *)0x0;
        }
        Ref<Image>::unref((Ref<Image> *)&local_68);
        if (local_78 == (Object *)0x0) goto LAB_0010347e;
      }
      cVar7 = RefCounted::unreference();
      if ((cVar7 != '\0') && (cVar7 = predelete_handler(local_78), cVar7 != '\0')) {
        (**(code **)(*(long *)local_78 + 0x140))(local_78);
        Memory::free_static(local_78,false);
      }
    }
LAB_0010347e:
    if (param_4 == 4) {
      Image::compress(pIVar13,2,0,0);
    }
    else if (param_4 == 5) {
      Image::compress(pIVar13,3,0,0);
    }
    else {
      Image::compress(pIVar13,0,0,0);
    }
    Image::get_data();
    Vector<unsigned_char>::append_array(local_88,&local_68);
    CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_60);
    Ref<Image>::unref((Ref<Image> *)&local_90);
  }
  _set_data(this,(Vector *)local_88);
  CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_80);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103b7f:
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



/* Texture::is_class_ptr(void*) const */

uint __thiscall Texture::is_class_ptr(Texture *this,void *param_1)

{
  return (uint)CONCAT71(0x10e9,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10e9,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10e9,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10e9,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* Texture::_getv(StringName const&, Variant&) const */

undefined8 Texture::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Texture::_setv(StringName const&, Variant const&) */

undefined8 Texture::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Texture::_validate_propertyv(PropertyInfo&) const */

void Texture::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* Texture::_property_can_revertv(StringName const&) const */

undefined8 Texture::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* Texture::_property_get_revertv(StringName const&, Variant&) const */

undefined8 Texture::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Texture::_notificationv(int, bool) */

void Texture::_notificationv(int param_1,bool param_2)

{
  return;
}



/* PortableCompressedTexture2D::is_class_ptr(void*) const */

uint PortableCompressedTexture2D::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x10e9,in_RSI == &Texture2D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10e9,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10e9,in_RSI == &Texture::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10e9,in_RSI == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10e9,in_RSI == &RefCounted::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* PortableCompressedTexture2D::_getv(StringName const&, Variant&) const */

undefined8 PortableCompressedTexture2D::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PortableCompressedTexture2D::_setv(StringName const&, Variant const&) */

undefined8 PortableCompressedTexture2D::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PortableCompressedTexture2D::_validate_propertyv(PropertyInfo&) const */

void PortableCompressedTexture2D::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* PortableCompressedTexture2D::_property_can_revertv(StringName const&) const */

undefined8 PortableCompressedTexture2D::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* PortableCompressedTexture2D::_property_get_revertv(StringName const&, Variant&) const */

undefined8 PortableCompressedTexture2D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PortableCompressedTexture2D::_notificationv(int, bool) */

void PortableCompressedTexture2D::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MethodBindTRS<bool>::_gen_argument_type(int) const */

undefined8 MethodBindTRS<bool>::_gen_argument_type(int param_1)

{
  return 1;
}



/* MethodBindTRS<bool>::get_argument_meta(int) const */

undefined8 MethodBindTRS<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRS<bool>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRS<bool>::validated_call
          (MethodBindTRS<bool> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant VVar1;
  
  VVar1 = (Variant)(**(code **)(this + 0x58))();
  param_3[8] = VVar1;
  return;
}



/* MethodBindTRS<bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRS<bool>::ptrcall(MethodBindTRS<bool> *this,Object *param_1,void **param_2,void *param_3)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(this + 0x58))();
  *(undefined1 *)param_3 = uVar1;
  return;
}



/* MethodBindTS<bool>::_gen_argument_type(int) const */

bool __thiscall MethodBindTS<bool>::_gen_argument_type(MethodBindTS<bool> *this,int param_1)

{
  return param_1 == 0;
}



/* MethodBindTS<bool>::get_argument_meta(int) const */

undefined8 MethodBindTS<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTS<bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindTS<bool>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00103e1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x58))(*(undefined1 *)(*(long *)param_3 + 8));
  return;
}



/* MethodBindTS<bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindTS<bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x00103e43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x58))(**param_3 != '\0');
  return;
}



/* MethodBindTRC<Vector<unsigned char>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Vector<unsigned_char>>::_gen_argument_type(int param_1)

{
  return 0x1d;
}



/* MethodBindTRC<Vector<unsigned char>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Vector<unsigned_char>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Vector<unsigned char> const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Vector<unsigned_char>const&>::_gen_argument_type
          (MethodBindT<Vector<unsigned_char>const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x1d;
}



/* MethodBindT<Vector<unsigned char> const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Vector<unsigned_char>const&>::get_argument_meta(int param_1)

{
  return 0;
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



/* MethodBindTRC<Vector2>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Vector2>::_gen_argument_type(int param_1)

{
  return 5;
}



/* MethodBindTRC<Vector2>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Vector2>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Vector2 const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Vector2_const&>::_gen_argument_type(MethodBindT<Vector2_const&> *this,int param_1)

{
  return -(param_1 == 0) & 5;
}



/* MethodBindT<Vector2 const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Vector2_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<PortableCompressedTexture2D::CompressionMode>::_gen_argument_type(int) const */

undefined8
MethodBindTRC<PortableCompressedTexture2D::CompressionMode>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<PortableCompressedTexture2D::CompressionMode>::get_argument_meta(int) const */

undefined8
MethodBindTRC<PortableCompressedTexture2D::CompressionMode>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Image::Format>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Image::Format>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<Image::Format>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Image::Format>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Ref<Image> const&, PortableCompressedTexture2D::CompressionMode, bool,
   float>::get_argument_meta(int) const */

char __thiscall
MethodBindT<Ref<Image>const&,PortableCompressedTexture2D::CompressionMode,bool,float>::
get_argument_meta(MethodBindT<Ref<Image>const&,PortableCompressedTexture2D::CompressionMode,bool,float>
                  *this,int param_1)

{
  return (param_1 == 3) * '\t';
}



/* Texture::~Texture() */

void __thiscall Texture::~Texture(Texture *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010e0f0;
  Resource::~Resource((Resource *)this);
  return;
}



/* Texture::~Texture() */

void __thiscall Texture::~Texture(Texture *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010e0f0;
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x240);
  return;
}



/* MethodBindT<Ref<Image> const&, PortableCompressedTexture2D::CompressionMode, bool,
   float>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Image>const&,PortableCompressedTexture2D::CompressionMode,bool,float>::~MethodBindT
          (MethodBindT<Ref<Image>const&,PortableCompressedTexture2D::CompressionMode,bool,float>
           *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e4f8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<Image> const&, PortableCompressedTexture2D::CompressionMode, bool,
   float>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Image>const&,PortableCompressedTexture2D::CompressionMode,bool,float>::~MethodBindT
          (MethodBindT<Ref<Image>const&,PortableCompressedTexture2D::CompressionMode,bool,float>
           *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e4f8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Image::Format>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Image::Format>::~MethodBindTRC(MethodBindTRC<Image::Format> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e558;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Image::Format>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Image::Format>::~MethodBindTRC(MethodBindTRC<Image::Format> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e558;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<PortableCompressedTexture2D::CompressionMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<PortableCompressedTexture2D::CompressionMode>::~MethodBindTRC
          (MethodBindTRC<PortableCompressedTexture2D::CompressionMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e5b8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<PortableCompressedTexture2D::CompressionMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<PortableCompressedTexture2D::CompressionMode>::~MethodBindTRC
          (MethodBindTRC<PortableCompressedTexture2D::CompressionMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e5b8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Vector2 const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector2_const&>::~MethodBindT(MethodBindT<Vector2_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e618;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Vector2 const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector2_const&>::~MethodBindT(MethodBindT<Vector2_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e618;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Vector2>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector2>::~MethodBindTRC(MethodBindTRC<Vector2> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e678;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Vector2>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector2>::~MethodBindTRC(MethodBindTRC<Vector2> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e678;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e6d8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e6d8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e738;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e738;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Vector<unsigned char> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Vector<unsigned_char>const&>::~MethodBindT
          (MethodBindT<Vector<unsigned_char>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e798;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Vector<unsigned char> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Vector<unsigned_char>const&>::~MethodBindT
          (MethodBindT<Vector<unsigned_char>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e798;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Vector<unsigned char>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Vector<unsigned_char>>::~MethodBindTRC(MethodBindTRC<Vector<unsigned_char>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e7f8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Vector<unsigned char>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Vector<unsigned_char>>::~MethodBindTRC(MethodBindTRC<Vector<unsigned_char>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e7f8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTS<bool>::~MethodBindTS() */

void __thiscall MethodBindTS<bool>::~MethodBindTS(MethodBindTS<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e858;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTS<bool>::~MethodBindTS() */

void __thiscall MethodBindTS<bool>::~MethodBindTS(MethodBindTS<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e858;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x60);
  return;
}



/* MethodBindTRS<bool>::~MethodBindTRS() */

void __thiscall MethodBindTRS<bool>::~MethodBindTRS(MethodBindTRS<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e8b8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRS<bool>::~MethodBindTRS() */

void __thiscall MethodBindTRS<bool>::~MethodBindTRS(MethodBindTRS<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e8b8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x60);
  return;
}



/* MethodBindT<Ref<Image> const&, PortableCompressedTexture2D::CompressionMode, bool,
   float>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<Ref<Image>const&,PortableCompressedTexture2D::CompressionMode,bool,float>::
_gen_argument_type(MethodBindT<Ref<Image>const&,PortableCompressedTexture2D::CompressionMode,bool,float>
                   *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((((uint)param_1 < 4) && (cVar1 = '\x18', param_1 != 0)) && (cVar1 = '\x02', param_1 != 1)) {
    cVar1 = (param_1 != 2) * '\x02' + '\x01';
  }
  return cVar1;
}



/* MethodBindTS<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTS<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  long lVar8;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar9;
  
  pVVar1 = param_2[0xb];
  if (in_R8D < 2) {
    pVVar9 = param_2[5];
    if (pVVar9 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_001044b0;
LAB_00104430:
      pVVar9 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar9 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001044b0:
        uVar7 = 4;
        goto LAB_0010443d;
      }
      if (in_R8D == 1) goto LAB_00104430;
      lVar8 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar9 = pVVar9 + lVar8 * 0x18;
    }
    *in_R9 = 0;
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar9,1);
    uVar4 = _LC6;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    bVar6 = Variant::operator_cast_to_bool(pVVar9);
    (*(code *)pVVar1)(bVar6);
  }
  else {
    uVar7 = 3;
LAB_0010443d:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  return param_1;
}



/* MethodBindTRS<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRS<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  bool bVar2;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined8 uStack_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  pVVar1 = param_2[0xb];
  *(undefined4 *)param_1 = 0;
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      bVar2 = (bool)(*(code *)pVVar1)();
      Variant::Variant((Variant *)local_28,bVar2);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_28[0];
      *(undefined8 *)(param_1 + 8) = local_20;
      *(undefined8 *)(param_1 + 0x10) = uStack_18;
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
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* Texture2D::get_save_class() const */

Texture2D * __thiscall Texture2D::get_save_class(Texture2D *this)

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



/* Texture::_get_class_namev() const */

undefined8 * Texture::_get_class_namev(void)

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
LAB_001046b3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001046b3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Texture");
      goto LAB_0010471e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Texture");
LAB_0010471e:
  return &_get_class_namev()::_class_name_static;
}



/* PortableCompressedTexture2D::_get_class_namev() const */

undefined8 * PortableCompressedTexture2D::_get_class_namev(void)

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
LAB_001047a3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001047a3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"PortableCompressedTexture2D"
                );
      goto LAB_0010480e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"PortableCompressedTexture2D");
LAB_0010480e:
  return &_get_class_namev()::_class_name_static;
}



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = operator_new;
  if (*(long *)(this + 0x250) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x250) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x250);
      *(undefined8 *)(this + 0x250) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      Resource::~Resource((Resource *)this);
      return;
    }
  }
  Resource::~Resource((Resource *)this);
  return;
}



/* Texture::get_class() const */

void Texture::get_class(void)

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



/* PortableCompressedTexture2D::get_class() const */

void PortableCompressedTexture2D::get_class(void)

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



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = operator_new;
  if (*(long *)(this + 0x250) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x250) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x250);
      *(undefined8 *)(this + 0x250) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x268);
  return;
}



/* Texture2D::~Texture2D() */

void __thiscall Texture2D::~Texture2D(Texture2D *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = String::split;
  if (bVar1) {
    if (*(long *)(this + 0x2d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104d37;
    }
    if (*(long *)(this + 0x2b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104d37;
    }
    if (*(long *)(this + 0x2a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104d37;
    }
    if (*(long *)(this + 0x288) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104d37;
    }
    if (*(long *)(this + 0x270) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104d37;
    }
    if (*(long *)(this + 600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104d37;
    }
    if (*(long *)(this + 0x240) != 0) {
      StringName::unref();
    }
  }
LAB_00104d37:
  *(undefined ***)this = &PTR__initialize_classv_0010e0f0;
  Resource::~Resource((Resource *)this);
  return;
}



/* Texture2D::~Texture2D() */

void __thiscall Texture2D::~Texture2D(Texture2D *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = String::split;
  if (bVar1) {
    if (*(long *)(this + 0x2d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104e47;
    }
    if (*(long *)(this + 0x2b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104e47;
    }
    if (*(long *)(this + 0x2a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104e47;
    }
    if (*(long *)(this + 0x288) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104e47;
    }
    if (*(long *)(this + 0x270) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104e47;
    }
    if (*(long *)(this + 600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104e47;
    }
    if (*(long *)(this + 0x240) != 0) {
      StringName::unref();
    }
  }
LAB_00104e47:
  *(undefined ***)this = &PTR__initialize_classv_0010e0f0;
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x2e8);
  return;
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



/* MethodBindTRC<Vector2>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Vector2>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC4;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar1 = 5;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_58);
    puVar1[10] = 6;
    if (puVar1[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar1 + 8),false);
      if (*(undefined **)(puVar1 + 4) == local_48) {
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar1 + 4) = local_48;
      }
      goto LAB_00105005;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
LAB_00105005:
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



/* MethodBindTRC<Vector<unsigned char>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Vector<unsigned_char>>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC4;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar1 = 0x1d;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_58);
    puVar1[10] = 6;
    if (puVar1[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar1 + 8),false);
      if (*(undefined **)(puVar1 + 4) == local_48) {
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar1 + 4) = local_48;
      }
      goto LAB_00105165;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
LAB_00105165:
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



/* godot::details::enum_qualified_name_to_class_info_name(String const&) */

details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined8 local_60;
  char local_58 [8];
  long *local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::split(local_58,SUB81(param_1,0),0x1051cd);
  if ((local_50 != (long *)0x0) && (2 < local_50[-1])) {
    local_60 = 0;
    local_48 = &_LC13;
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
        goto LAB_0010527a;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar7,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  local_60 = 0;
  local_48 = &_LC13;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_0010527a:
  plVar4 = local_50;
  if (local_50 != (long *)0x0) {
    LOCK();
    plVar5 = local_50 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_50 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar7 = local_50[-1];
      local_50 = (long *)0x0;
      if (lVar7 != 0) {
        lVar6 = 0;
        plVar5 = plVar4;
        do {
          if (*plVar5 != 0) {
            LOCK();
            plVar1 = (long *)(*plVar5 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar2 = *plVar5;
              *plVar5 = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
            }
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar7 != lVar6);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<PortableCompressedTexture2D::CompressionMode, void>::get_class_info() */

GetTypeInfo<PortableCompressedTexture2D::CompressionMode,void> * __thiscall
GetTypeInfo<PortableCompressedTexture2D::CompressionMode,void>::get_class_info
          (GetTypeInfo<PortableCompressedTexture2D::CompressionMode,void> *this)

{
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  details local_50 [8];
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "PortableCompressedTexture2D::CompressionMode";
  local_40 = 0x2c;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name(local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)local_50,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  local_60 = 0;
  local_68 = 0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Image::Format>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Image::Format>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  details local_50 [8];
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "Image::Format";
  local_40 = 0xd;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name(local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)local_50,false);
  *puVar1 = 2;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  puVar1[10] = 0x10006;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  local_60 = 0;
  local_68 = 0;
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::is_class(String const&) const */

undefined8 __thiscall Resource::is_class(Resource *this,String *param_1)

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
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar3 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar3 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_001056ef;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar4 == lVar8;
            if (bVar9) {
              *plVar1 = lVar4 + 1;
              lVar8 = lVar4;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_001056ef:
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
    if (cVar6 != '\0') goto LAB_001057a3;
  }
  cVar6 = String::operator==(param_1,"Resource");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
          if (*(long *)(lVar5 + 0x10) != 0) {
            do {
              lVar4 = *plVar1;
              if (lVar4 == 0) goto LAB_0010586f;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar4 == lVar8;
              if (bVar9) {
                *plVar1 = lVar4 + 1;
                lVar8 = lVar4;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
              local_60 = *(long *)(lVar5 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_0010586f:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_001057a3;
    }
    cVar6 = String::operator==(param_1,"RefCounted");
    if (cVar6 == '\0') {
      for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
        lVar5 = *(long *)(lVar2 + 0x20);
        if (lVar5 == 0) {
          local_58 = (char *)0x0;
        }
        else {
          local_58 = (char *)0x0;
          if (*(char **)(lVar5 + 8) == (char *)0x0) {
            if (*(long *)(lVar5 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(lVar5 + 0x10));
            }
          }
          else {
            String::parse_latin1((String *)&local_58,*(char **)(lVar5 + 8));
          }
        }
        cVar6 = String::operator==(param_1,(String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        if (cVar6 != '\0') goto LAB_001057a3;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
      goto LAB_0010595d;
    }
  }
LAB_001057a3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010595d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Texture::is_class(String const&) const */

undefined8 __thiscall Texture::is_class(Texture *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_001059df;
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
LAB_001059df:
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
    if (cVar5 != '\0') goto LAB_00105a93;
  }
  cVar5 = String::operator==(param_1,"Texture");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Resource::is_class((Resource *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00105a93:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PortableCompressedTexture2D::is_class(String const&) const */

undefined8 __thiscall
PortableCompressedTexture2D::is_class(PortableCompressedTexture2D *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_00105b5f;
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
LAB_00105b5f:
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
    if (cVar6 != '\0') goto LAB_00105c13;
  }
  cVar6 = String::operator==(param_1,"PortableCompressedTexture2D");
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
              if (lVar5 == 0) goto LAB_00105cf7;
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
LAB_00105cf7:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_00105c13;
    }
    cVar6 = String::operator==(param_1,"Texture2D");
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
                if (lVar5 == 0) goto LAB_00105dab;
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
LAB_00105dab:
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
        if (cVar6 != '\0') goto LAB_00105c13;
      }
      cVar6 = String::operator==(param_1,"Texture");
      if (cVar6 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar7 = Resource::is_class((Resource *)this,param_1);
          return uVar7;
        }
        goto LAB_00105e54;
      }
    }
  }
LAB_00105c13:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00105e54:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Texture::_initialize_classv() */

void Texture::_initialize_classv(void)

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
    if (Resource::initialize_class()::initialized == '\0') {
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
        if ((code *)PTR__bind_methods_00112008 != RefCounted::_bind_methods) {
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
      if ((code *)_GLOBAL_OFFSET_TABLE_ != RefCounted::_bind_methods) {
        Resource::_bind_methods();
      }
      Resource::initialize_class()::initialized = '\x01';
    }
    local_58 = "Resource";
    local_68 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "Texture";
    local_70 = 0;
    local_50 = 7;
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
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTRS<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRS<bool>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC4;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar1 = 1;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_58);
    puVar1[10] = 6;
    if (puVar1[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar1 + 8),false);
      if (*(undefined **)(puVar1 + 4) == local_48) {
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar1 + 4) = local_48;
      }
      goto LAB_00106285;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
LAB_00106285:
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



/* MethodBindTRC<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC4;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar1 = 1;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_58);
    puVar1[10] = 6;
    if (puVar1[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar1 + 8),false);
      if (*(undefined **)(puVar1 + 4) == local_48) {
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar1 + 4) = local_48;
      }
      goto LAB_001063e5;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
LAB_001063e5:
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



/* MethodBindTRC<PortableCompressedTexture2D::CompressionMode>::_gen_argument_type_info(int) const
    */

undefined4 *
MethodBindTRC<PortableCompressedTexture2D::CompressionMode>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  long local_68;
  details local_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = "PortableCompressedTexture2D::CompressionMode";
  local_58 = 0;
  local_40 = 0x2c;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name(local_60,(String *)&local_58);
  StringName::StringName((StringName *)&local_68,(String *)local_60,false);
  *puVar1 = 2;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  puVar1[10] = 0x10006;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  local_50 = 0;
  local_48 = (char *)0x0;
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  undefined7 in_register_00000031;
  List *pLVar5;
  long in_FS_OFFSET;
  StringName *local_a8;
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
  
  pLVar5 = (List *)CONCAT71(in_register_00000031,param_2);
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
  if (local_90 == 0) {
LAB_001066fd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001066fd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x0010671f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x0010671f:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar5 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)pLVar5;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
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
  ClassDB::get_property_list((StringName *)&local_78,pLVar5,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
      goto LAB_00106a51;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00106a51:
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



/* Texture::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Texture::_get_property_listv(Texture *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  StringName *local_a8;
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
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Texture";
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Texture";
  local_98 = 0;
  local_70 = 7;
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
LAB_00106d2d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00106d2d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00106d4f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00106d4f:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
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
  StringName::StringName((StringName *)&local_78,"Texture",false);
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



/* Texture2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Texture2D::_get_property_listv(Texture2D *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  StringName *local_a8;
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
    Texture::_get_property_listv((Texture *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Texture2D";
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Texture2D";
  local_98 = 0;
  local_70 = 9;
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
LAB_0010710d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010710d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010712f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010712f:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
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
  StringName::StringName((StringName *)&local_78,"Texture2D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Texture::_get_property_listv((Texture *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PortableCompressedTexture2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
PortableCompressedTexture2D::_get_property_listv
          (PortableCompressedTexture2D *this,List *param_1,bool param_2)

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
    Texture2D::_get_property_listv((Texture2D *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "PortableCompressedTexture2D";
  local_70 = 0x1b;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "PortableCompressedTexture2D";
  local_98 = 0;
  local_70 = 0x1b;
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
      goto LAB_001074c1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001074c1:
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
  StringName::StringName((StringName *)&local_78,"PortableCompressedTexture2D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Texture2D::_get_property_listv((Texture2D *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector2 const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Vector2_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
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
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00107649;
  local_78 = 0;
  local_68 = &_LC4;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,5);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00107745:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00107745;
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
  *puVar5 = local_68._0_4_;
  if (*(long *)(puVar5 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_50;
  if (*(long *)(puVar5 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00107649:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<Vector<unsigned char> const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Vector<unsigned_char>const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
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
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_001078b9;
  local_78 = 0;
  local_68 = &_LC4;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x1d);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_001079b5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_001079b5;
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
  *puVar5 = local_68._0_4_;
  if (*(long *)(puVar5 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_50;
  if (*(long *)(puVar5 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_001078b9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindTS<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTS<bool>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
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
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00107b29;
  local_78 = 0;
  local_68 = &_LC4;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00107c25:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00107c25;
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
  *puVar5 = local_68._0_4_;
  if (*(long *)(puVar5 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_50;
  if (*(long *)(puVar5 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00107b29:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<bool>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
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
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00107d99;
  local_78 = 0;
  local_68 = &_LC4;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00107e95:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00107e95;
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
  *puVar5 = local_68._0_4_;
  if (*(long *)(puVar5 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_50;
  if (*(long *)(puVar5 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00107d99:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBind* create_method_bind<PortableCompressedTexture2D, Ref<Image> const&,
   PortableCompressedTexture2D::CompressionMode, bool, float>(void
   (PortableCompressedTexture2D::*)(Ref<Image> const&, PortableCompressedTexture2D::CompressionMode,
   bool, float)) */

MethodBind *
create_method_bind<PortableCompressedTexture2D,Ref<Image>const&,PortableCompressedTexture2D::CompressionMode,bool,float>
          (_func_void_Ref_ptr_CompressionMode_bool_float *param_1)

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
  *(_func_void_Ref_ptr_CompressionMode_bool_float **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010e4f8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 4;
  local_40 = 0;
  local_38 = "PortableCompressedTexture2D";
  local_30 = 0x1b;
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



/* MethodBind* create_method_bind<PortableCompressedTexture2D, Image::Format>(Image::Format
   (PortableCompressedTexture2D::*)() const) */

MethodBind * create_method_bind<PortableCompressedTexture2D,Image::Format>(_func_Format *param_1)

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
  *(_func_Format **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010e558;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "PortableCompressedTexture2D";
  local_30 = 0x1b;
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



/* MethodBind* create_method_bind<PortableCompressedTexture2D,
   PortableCompressedTexture2D::CompressionMode>(PortableCompressedTexture2D::CompressionMode
   (PortableCompressedTexture2D::*)() const) */

MethodBind *
create_method_bind<PortableCompressedTexture2D,PortableCompressedTexture2D::CompressionMode>
          (_func_CompressionMode *param_1)

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
  *(_func_CompressionMode **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010e5b8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "PortableCompressedTexture2D";
  local_30 = 0x1b;
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



/* MethodBind* create_method_bind<PortableCompressedTexture2D, Vector2 const&>(void
   (PortableCompressedTexture2D::*)(Vector2 const&)) */

MethodBind *
create_method_bind<PortableCompressedTexture2D,Vector2_const&>(_func_void_Vector2_ptr *param_1)

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
  *(_func_void_Vector2_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010e618;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "PortableCompressedTexture2D";
  local_30 = 0x1b;
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



/* MethodBind* create_method_bind<PortableCompressedTexture2D, Vector2>(Vector2
   (PortableCompressedTexture2D::*)() const) */

MethodBind * create_method_bind<PortableCompressedTexture2D,Vector2>(_func_Vector2 *param_1)

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
  *(_func_Vector2 **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010e678;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "PortableCompressedTexture2D";
  local_30 = 0x1b;
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



/* MethodBind* create_method_bind<PortableCompressedTexture2D, bool>(void
   (PortableCompressedTexture2D::*)(bool)) */

MethodBind * create_method_bind<PortableCompressedTexture2D,bool>(_func_void_bool *param_1)

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
  *(_func_void_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010e6d8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "PortableCompressedTexture2D";
  local_30 = 0x1b;
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



/* MethodBind* create_method_bind<PortableCompressedTexture2D, bool>(bool
   (PortableCompressedTexture2D::*)() const) */

MethodBind * create_method_bind<PortableCompressedTexture2D,bool>(_func_bool *param_1)

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
  *(_func_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010e738;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "PortableCompressedTexture2D";
  local_30 = 0x1b;
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



/* MethodBind* create_method_bind<PortableCompressedTexture2D, Vector<unsigned char> const&>(void
   (PortableCompressedTexture2D::*)(Vector<unsigned char> const&)) */

MethodBind *
create_method_bind<PortableCompressedTexture2D,Vector<unsigned_char>const&>
          (_func_void_Vector_ptr *param_1)

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
  *(_func_void_Vector_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010e798;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "PortableCompressedTexture2D";
  local_30 = 0x1b;
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



/* MethodBind* create_method_bind<PortableCompressedTexture2D, Vector<unsigned
   char>>(Vector<unsigned char> (PortableCompressedTexture2D::*)() const) */

MethodBind *
create_method_bind<PortableCompressedTexture2D,Vector<unsigned_char>>(_func_Vector *param_1)

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
  *(_func_Vector **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010e7f8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "PortableCompressedTexture2D";
  local_30 = 0x1b;
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



/* PortableCompressedTexture2D::_bind_methods() [clone .cold] */

void PortableCompressedTexture2D::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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

void FUN_00108e7e(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* PortableCompressedTexture2D::_initialize_classv() */

void PortableCompressedTexture2D::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Texture2D::initialize_class()::initialized == '\0') {
      if (Texture::initialize_class()::initialized == '\0') {
        if (Resource::initialize_class()::initialized == '\0') {
          if (RefCounted::initialize_class()::initialized == '\0') {
            Object::initialize_class();
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"Object");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            local_70 = 0;
            String::parse_latin1((String *)&local_70,"RefCounted");
            StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
            ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
            if ((StringName::configured != '\0') && (local_68 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
            if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            if ((code *)PTR__bind_methods_00112008 != RefCounted::_bind_methods) {
              RefCounted::_bind_methods();
            }
            RefCounted::initialize_class()::initialized = '\x01';
          }
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"RefCounted");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          local_70 = 0;
          String::parse_latin1((String *)&local_70,"Resource");
          StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
          ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
          if ((StringName::configured != '\0') && (local_68 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          Resource::_bind_methods();
          Resource::initialize_class()::initialized = '\x01';
        }
        local_58 = "Resource";
        local_68 = 0;
        local_50 = 8;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Texture";
        local_70 = 0;
        local_50 = 7;
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
        Texture::initialize_class()::initialized = '\x01';
      }
      local_58 = "Texture";
      local_68 = 0;
      local_50 = 7;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "Texture2D";
      local_70 = 0;
      local_50 = 9;
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
      if ((code *)PTR__bind_methods_00112010 != Resource::_bind_methods) {
        Texture2D::_bind_methods();
      }
      Texture2D::initialize_class()::initialized = '\x01';
    }
    local_58 = "Texture2D";
    local_68 = 0;
    local_50 = 9;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "PortableCompressedTexture2D";
    local_70 = 0;
    local_50 = 0x1b;
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



/* void memdelete<Image>(Image*) */

void memdelete<Image>(Image *param_1)

{
  char cVar1;
  
  cVar1 = predelete_handler((Object *)param_1);
  if (cVar1 == '\0') {
    return;
  }
  if (*(code **)(*(long *)param_1 + 0x140) == Image::~Image) {
    *(code **)param_1 = operator_new;
    CowData<unsigned_char>::_unref((CowData<unsigned_char> *)(param_1 + 0x250));
    Resource::~Resource((Resource *)param_1);
    Memory::free_static(param_1,false);
    return;
  }
  (**(code **)(*(long *)param_1 + 0x140))(param_1);
  Memory::free_static(param_1,false);
  return;
}



/* Ref<Image>::unref() */

void __thiscall Ref<Image>::unref(Ref<Image> *this)

{
  char cVar1;
  
  if (*(long *)this != 0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      memdelete<Image>(*(Image **)this);
      *(undefined8 *)this = 0;
      return;
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* void Ref<Image>::instantiate<float, float, bool, Image::Format, Vector<unsigned char> >(float,
   float, bool, Image::Format, Vector<unsigned char>) */

void __thiscall
Ref<Image>::instantiate<float,float,bool,Image::Format,Vector<unsigned_char>>
          (float param_1,float param_2,Ref<Image> *this,undefined1 param_3,undefined4 param_5,
          undefined8 param_6)

{
  Image *pIVar1;
  char cVar2;
  Object *pOVar3;
  Image *pIVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  pOVar3 = (Object *)operator_new(0x268,"");
  Image::Image((Image *)pOVar3,CONCAT44(uVar5,(int)param_1),(int)param_2,param_3,param_5,param_6);
  postinitialize_handler(pOVar3);
  cVar2 = RefCounted::init_ref();
  if (cVar2 == '\0') {
    pIVar4 = *(Image **)this;
    if (pIVar4 == (Image *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar2 = RefCounted::unreference();
    if (cVar2 == '\0') {
      return;
    }
    goto LAB_0010956f;
  }
  pIVar1 = *(Image **)this;
  pIVar4 = pIVar1;
  if (pOVar3 != (Object *)pIVar1) {
    *(Object **)this = pOVar3;
    cVar2 = RefCounted::reference();
    pIVar4 = (Image *)pOVar3;
    if (cVar2 == '\0') {
      *(undefined8 *)this = 0;
      if (pIVar1 != (Image *)0x0) {
        cVar2 = RefCounted::unreference();
joined_r0x0010958f:
        if (cVar2 != '\0') {
          memdelete<Image>(pIVar1);
        }
      }
    }
    else if (pIVar1 != (Image *)0x0) {
      cVar2 = RefCounted::unreference();
      goto joined_r0x0010958f;
    }
  }
  cVar2 = RefCounted::unreference();
  if (cVar2 == '\0') {
    return;
  }
LAB_0010956f:
  memdelete<Image>(pIVar4);
  return;
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



/* Vector<unsigned char>::append_array(Vector<unsigned char>) */

void __thiscall Vector<unsigned_char>::append_array(Vector<unsigned_char> *this,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)(param_2 + 8) == 0) {
    return;
  }
  lVar2 = *(long *)(*(long *)(param_2 + 8) + -8);
  if (lVar2 != 0) {
    if (*(long *)(this + 8) == 0) {
      lVar7 = 0;
      lVar5 = lVar2;
    }
    else {
      lVar7 = *(long *)(*(long *)(this + 8) + -8);
      lVar5 = lVar2 + lVar7;
    }
    CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(this + 8),lVar5);
    if (0 < lVar2) {
      lVar5 = 0;
      do {
        lVar3 = *(long *)(param_2 + 8);
        if (lVar3 == 0) {
          lVar6 = 0;
LAB_001096d9:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar5,lVar6,"p_index","size()","",false
                     ,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        lVar6 = *(long *)(lVar3 + -8);
        if (lVar6 <= lVar5) goto LAB_001096d9;
        uVar1 = *(undefined1 *)(lVar3 + lVar5);
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(this + 8));
        *(undefined1 *)(*(long *)(this + 8) + lVar7 + lVar5) = uVar1;
        lVar5 = lVar5 + 1;
      } while (lVar5 != lVar2);
    }
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x001098e8) */
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



/* MethodBindTRC<Vector<unsigned char>>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<Vector<unsigned_char>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC85,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00109c40;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar2 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar2 & 1) != 0) {
        pVVar2 = *(Variant **)(pVVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar2)((Vector *)&local_58);
      Variant::Variant((Variant *)local_48,(Vector *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_50);
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
LAB_00109c40:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<unsigned char>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Vector<unsigned_char>>::validated_call
          (MethodBindTRC<Vector<unsigned_char>> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Variant **local_48;
  long local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x109a88;
      local_40[0] = 0x35;
      local_50 = 0;
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
      goto LAB_00109f17;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(long *)(*(long *)(param_3 + 8) + 0x18) != local_40[0]) {
    CowData<unsigned_char>::_ref
              ((CowData<unsigned_char> *)(*(long *)(param_3 + 8) + 0x18),(CowData *)local_40);
  }
  CowData<unsigned_char>::_unref((CowData<unsigned_char> *)local_40);
LAB_00109f17:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<unsigned char>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Vector<unsigned_char>>::ptrcall
          (MethodBindTRC<Vector<unsigned_char>> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  void **local_48;
  long local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (void **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x109a88;
      local_40[0] = 0x35;
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
      goto LAB_0010a0f3;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(long *)((long)param_3 + 8) != local_40[0]) {
    CowData<unsigned_char>::_ref((CowData<unsigned_char> *)((long)param_3 + 8),(CowData *)local_40);
  }
  CowData<unsigned_char>::_unref((CowData<unsigned_char> *)local_40);
LAB_0010a0f3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<unsigned char> const&>::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<Vector<unsigned_char>const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
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
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010a429;
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
                    /* WARNING: Could not recover jumptable at 0x0010a2b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(long *)(*(long *)param_3 + 8) + 0x10);
    return;
  }
LAB_0010a429:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<unsigned char> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Vector<unsigned_char>const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
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
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010a601;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010a489. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0010a601:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  bool bVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC85,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010a6d0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      bVar2 = (bool)(*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,bVar2);
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
LAB_0010a6d0:
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
  Variant VVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
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
      local_40 = 0x35;
      local_50 = 0;
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
      goto LAB_0010a8e2;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar1 = (Variant)(*pcVar2)(param_1 + *(long *)(this + 0x60));
  param_3[8] = VVar1;
LAB_0010a8e2:
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
  undefined1 uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
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
      goto LAB_0010aa91;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(undefined1 *)param_3 = uVar1;
LAB_0010aa91:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<bool>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
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
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010add1;
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
                    /* WARNING: Could not recover jumptable at 0x0010ac5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0010add1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
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
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010afb9;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010ae42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3 != '\0');
    return;
  }
LAB_0010afb9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Vector2>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_68 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC85,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010b090;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar2 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar2 & 1) != 0) {
        pVVar2 = *(Variant **)(pVVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      local_50 = (*(code *)pVVar2)();
      Variant::Variant((Variant *)local_48,(Vector2 *)&local_50);
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
LAB_0010b090:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Vector2>::validated_call
          (MethodBindTRC<Vector2> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 uVar3;
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
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010b2a4;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar1)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)(param_3 + 8) = uVar3;
LAB_0010b2a4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Vector2>::ptrcall
          (MethodBindTRC<Vector2> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 uVar3;
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
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010b453;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar1)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)param_3 = uVar3;
LAB_0010b453:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector2 const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Vector2_const&>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
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
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010b791;
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
                    /* WARNING: Could not recover jumptable at 0x0010b61d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_0010b791:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector2 const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Vector2_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
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
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010b971;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010b7f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0010b971:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<PortableCompressedTexture2D::CompressionMode>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<PortableCompressedTexture2D::CompressionMode>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  int iVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC85,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010ba40;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      iVar2 = (*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,iVar2);
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
LAB_0010ba40:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<PortableCompressedTexture2D::CompressionMode>::validated_call(Object*, Variant
   const**, Variant*) const */

void __thiscall
MethodBindTRC<PortableCompressedTexture2D::CompressionMode>::validated_call
          (MethodBindTRC<PortableCompressedTexture2D::CompressionMode> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
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
      local_40 = 0x35;
      local_50 = 0;
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
      goto LAB_0010bc54;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_0010bc54:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<PortableCompressedTexture2D::CompressionMode>::ptrcall(Object*, void const**,
   void*) const */

void __thiscall
MethodBindTRC<PortableCompressedTexture2D::CompressionMode>::ptrcall
          (MethodBindTRC<PortableCompressedTexture2D::CompressionMode> *this,Object *param_1,
          void **param_2,void *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
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
      goto LAB_0010be03;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar1;
LAB_0010be03:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Image::Format>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Image::Format>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  int iVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC85,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c030;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      iVar2 = (*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,iVar2);
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
LAB_0010c030:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Image::Format>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Image::Format>::validated_call
          (MethodBindTRC<Image::Format> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  int iVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
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
      local_40 = 0x35;
      local_50 = 0;
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
      goto LAB_0010c244;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(long *)(param_3 + 8) = (long)iVar1;
LAB_0010c244:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Image::Format>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Image::Format>::ptrcall
          (MethodBindTRC<Image::Format> *this,Object *param_1,void **param_2,void *param_3)

{
  int iVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
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
      goto LAB_0010c3f3;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(long *)param_3 = (long)iVar1;
LAB_0010c3f3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Image> const&, PortableCompressedTexture2D::CompressionMode, bool,
   float>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Ref<Image>const&,PortableCompressedTexture2D::CompressionMode,bool,float>::
     validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  double dVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  long lVar4;
  Image *pIVar5;
  char cVar6;
  Image *pIVar7;
  Variant *pVVar8;
  code *pcVar9;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  Image *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar8 = param_2[0x23];
      if (pVVar8 == (Variant *)0x0) {
        pVVar8 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar8 = param_2[1] + 0x20;
    }
    if (local_68 == (Image *)*(long *)pVVar8) {
      if ((StringName::configured != '\0') && (local_68 != (Image *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Image *)0x109a88;
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c690;
    }
    if ((StringName::configured != '\0') && (local_68 != (Image *)0x0)) {
      StringName::unref();
    }
  }
  pcVar9 = *(code **)(param_1 + 0x58);
  lVar4 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar9 & 1) != 0) {
    pcVar9 = *(code **)(pcVar9 + *(long *)((long)param_2 + lVar4) + -1);
  }
  dVar1 = *(double *)(*(long *)(param_3 + 0x18) + 8);
  uVar2 = *(undefined1 *)(*(long *)(param_3 + 0x10) + 8);
  uVar3 = *(undefined4 *)(*(long *)(param_3 + 8) + 8);
  Variant::Variant((Variant *)local_58,*(Object **)(*(long *)param_3 + 0x10));
  local_68 = (Image *)0x0;
  pIVar7 = (Image *)Variant::get_validated_object();
  pIVar5 = local_68;
  if (pIVar7 != local_68) {
    if (pIVar7 == (Image *)0x0) {
      if (local_68 != (Image *)0x0) {
        local_68 = (Image *)0x0;
LAB_0010c642:
        cVar6 = RefCounted::unreference();
        if (cVar6 != '\0') {
          memdelete<Image>(pIVar5);
        }
      }
    }
    else {
      pIVar7 = (Image *)__dynamic_cast(pIVar7,&Object::typeinfo,&Image::typeinfo,0);
      if (pIVar5 != pIVar7) {
        local_68 = pIVar7;
        if (pIVar7 != (Image *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_68 = (Image *)0x0;
          }
        }
        if (pIVar5 != (Image *)0x0) goto LAB_0010c642;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar9)((float)dVar1,(long *)((long)param_2 + lVar4),(StringName *)&local_68,uVar3,uVar2);
  if (local_68 != (Image *)0x0) {
    cVar6 = RefCounted::unreference();
    if (cVar6 != '\0') {
      memdelete<Image>(local_68);
    }
  }
LAB_0010c690:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Image> const&, PortableCompressedTexture2D::CompressionMode, bool,
   float>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<Image>const&,PortableCompressedTexture2D::CompressionMode,bool,float>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  undefined4 uVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Image *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar5 = (long *)param_2[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar5 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_58 == (Image *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (Image *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Image *)0x109a88;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c955;
    }
    if ((StringName::configured != '\0') && (local_58 != (Image *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
  lVar2 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar2) + -1);
  }
  cVar4 = **(char **)((long)param_3 + 0x10);
  uVar1 = **(undefined4 **)((long)param_3 + 8);
                    /* WARNING: Load size is inaccurate */
  if ((*param_3 == (long *)0x0) || (local_58 = (Image *)**param_3, local_58 == (Image *)0x0)) {
LAB_0010c92a:
    local_58 = (Image *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_0010c92a;
  }
  (*pcVar6)((long *)((long)param_2 + lVar2),(StringName *)&local_58,uVar1,cVar4 != '\0');
  if (local_58 != (Image *)0x0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      memdelete<Image>(local_58);
    }
  }
LAB_0010c955:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<unsigned char> const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<Vector<unsigned_char>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined4 in_register_00000014;
  long *plVar9;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar10;
  Variant *pVVar11;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40 [2];
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_48 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40[0] = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC85,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010cca0;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010ccf0;
LAB_0010cce0:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010ccf0:
        uVar6 = 4;
        goto LAB_0010cc95;
      }
      if (in_R8D == 1) goto LAB_0010cce0;
      lVar8 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar10 = pVVar10 + lVar8 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar11 & 1) != 0) {
      pVVar11 = *(Variant **)(pVVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x1d);
    uVar4 = _LC90;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Vector((Variant *)&local_48);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),(Variant *)&local_48);
    CowData<unsigned_char>::_unref((CowData<unsigned_char> *)local_40);
  }
  else {
    uVar6 = 3;
LAB_0010cc95:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_0010cca0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector2 const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Vector2_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined4 in_register_00000014;
  long *plVar9;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar10;
  Variant *pVVar11;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_48 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC85,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010cfc0;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010d010;
LAB_0010d000:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010d010:
        uVar6 = 4;
        goto LAB_0010cfb5;
      }
      if (in_R8D == 1) goto LAB_0010d000;
      lVar8 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar10 = pVVar10 + lVar8 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar11 & 1) != 0) {
      pVVar11 = *(Variant **)(pVVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,5);
    uVar4 = _LC91;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    local_38 = Variant::operator_cast_to_Vector2(pVVar10);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),&local_38);
  }
  else {
    uVar6 = 3;
LAB_0010cfb5:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_0010cfc0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Image> const&, PortableCompressedTexture2D::CompressionMode, bool,
   float>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Ref<Image>const&,PortableCompressedTexture2D::CompressionMode,bool,float>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  Image *pIVar3;
  code *pcVar4;
  undefined8 uVar5;
  char cVar6;
  bool bVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  Image *pIVar11;
  long *plVar12;
  int iVar13;
  uint uVar14;
  undefined4 in_register_00000014;
  long *plVar15;
  Variant *pVVar16;
  long lVar17;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar18;
  long in_FS_OFFSET;
  long local_88;
  Image *local_80;
  Image *local_78;
  undefined8 local_70;
  Variant *local_68 [5];
  long local_40;
  
  plVar15 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar15 != (long *)0x0) && (plVar15[1] != 0)) && (*(char *)(plVar15[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_78,(StringName *)(param_2 + 3));
    if (plVar15[1] == 0) {
      plVar12 = (long *)plVar15[0x23];
      if (plVar12 == (long *)0x0) {
        plVar12 = (long *)(**(code **)(*plVar15 + 0x40))(plVar15);
      }
    }
    else {
      plVar12 = (long *)(plVar15[1] + 0x20);
    }
    if (local_78 == (Image *)*plVar12) {
      if ((StringName::configured != '\0') && (local_78 != (Image *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_78 = (Image *)0x109a88;
      local_80 = (Image *)0x0;
      local_70 = 0x35;
      String::parse_latin1((StrRange *)&local_80);
      vformat<StringName>((StringName *)&local_78,(StrRange *)&local_80,&local_88);
      _err_print_error(&_LC85,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d430;
    }
    if ((StringName::configured != '\0') && (local_78 != (Image *)0x0)) {
      StringName::unref();
    }
  }
  pVVar18 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 5) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar13 = 0;
      lVar17 = 0;
    }
    else {
      lVar17 = *(long *)(pVVar2 + -8);
      iVar13 = (int)lVar17;
    }
    if ((int)(4 - in_R8D) <= iVar13) {
      lVar9 = 0;
      do {
        if ((int)lVar9 < (int)in_R8D) {
          pVVar16 = *(Variant **)(param_4 + lVar9 * 8);
        }
        else {
          uVar14 = iVar13 + -4 + (int)lVar9;
          if (lVar17 <= (int)uVar14) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar14,lVar17,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          pVVar16 = pVVar2 + (ulong)uVar14 * 0x18;
        }
        local_68[lVar9] = pVVar16;
        lVar9 = lVar9 + 1;
      } while (lVar9 != 4);
      *in_R9 = 0;
      if (((ulong)pVVar18 & 1) != 0) {
        pVVar18 = *(Variant **)(pVVar18 + *(long *)((long)plVar15 + (long)pVVar1) + -1);
      }
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_68[3],3);
      uVar5 = _LC72;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar5;
      }
      Variant::operator_cast_to_float(local_68[3]);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_68[2],1);
      uVar5 = _LC73;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar5;
      }
      bVar7 = Variant::operator_cast_to_bool(local_68[2]);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_68[1],2);
      uVar5 = _LC94;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar5;
      }
      uVar10 = Variant::operator_cast_to_long(local_68[1]);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_68[0],0x18);
      uVar5 = _LC95;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar5;
      }
      local_80 = (Image *)0x0;
      pIVar11 = (Image *)Variant::get_validated_object();
      pIVar3 = local_80;
      if (pIVar11 != local_80) {
        if (pIVar11 == (Image *)0x0) {
          if (local_80 != (Image *)0x0) {
            local_80 = (Image *)0x0;
            local_78 = pIVar3;
            goto LAB_0010d3b9;
          }
        }
        else {
          pIVar11 = (Image *)__dynamic_cast(pIVar11,&Object::typeinfo,&Image::typeinfo,0);
          if (pIVar3 != pIVar11) {
            local_78 = pIVar3;
            local_80 = pIVar11;
            if (pIVar11 != (Image *)0x0) {
              cVar6 = RefCounted::reference();
              if (cVar6 == '\0') {
                local_80 = (Image *)0x0;
              }
            }
LAB_0010d3b9:
            Ref<Image>::unref((Ref<Image> *)&local_78);
          }
        }
      }
      (*(code *)pVVar18)((Variant *)((long)plVar15 + (long)pVVar1),&local_80,uVar10 & 0xffffffff,
                         bVar7);
      if (local_80 != (Image *)0x0) {
        cVar6 = RefCounted::unreference();
        if (cVar6 != '\0') {
          memdelete<Image>(local_80);
        }
      }
      goto LAB_0010d430;
    }
    uVar8 = 4;
  }
  else {
    uVar8 = 3;
  }
  *in_R9 = uVar8;
  in_R9[2] = 4;
LAB_0010d430:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
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
    goto LAB_0010d75d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0010d7c0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0010d7c0:
      uVar6 = 4;
LAB_0010d75d:
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
      goto LAB_0010d6db;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0010d6db:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
  uVar4 = _LC6;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_bool(this);
                    /* WARNING: Could not recover jumptable at 0x0010d737. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(SUB81(param_1 + (long)param_3,0));
  return;
}



/* MethodBindT<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC85,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0010d826;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,bool>
            (p_Var2,(_func_void_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0010d826:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info<Ref<Image> const&, PortableCompressedTexture2D::CompressionMode,
   bool, float>(int, PropertyInfo&) */

void call_get_argument_type_info<Ref<Image>const&,PortableCompressedTexture2D::CompressionMode,bool,float>
               (int param_1,PropertyInfo *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
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
  if (param_1 == 0) {
    local_70 = 0;
    local_78 = 0;
    String::parse_latin1((String *)&local_78,"Image");
    uVar4 = 0x11;
    uVar5 = 0x18;
LAB_0010da9d:
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,uVar5,&local_80,uVar4,(CowData<char32_t> *)&local_78,6,
               &local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
  }
  else if (param_1 == 1) {
    GetTypeInfo<PortableCompressedTexture2D::CompressionMode,void>::get_class_info
              ((GetTypeInfo<PortableCompressedTexture2D::CompressionMode,void> *)&local_68);
  }
  else {
    if (param_1 != 2) {
      if (param_1 != 3) goto LAB_0010db5e;
      local_70 = 0;
      local_78 = 0;
      String::parse_latin1((String *)&local_78,"");
      uVar4 = 0;
      uVar5 = 3;
      goto LAB_0010da9d;
    }
    local_78 = 0;
    local_80 = 0;
    local_68 = &_LC4;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    String::parse_latin1((StrRange *)&local_80);
    local_88 = 0;
    local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
    local_50 = 0;
    local_48 = 0;
    local_60 = (undefined1  [16])0x0;
    if (local_80 == 0) {
LAB_0010dcd8:
      local_40 = 6;
      StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010dcd8;
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
  }
  *(undefined4 *)param_2 = local_68._0_4_;
  if (*(long *)(param_2 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
    uVar4 = local_60._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *(undefined8 *)(param_2 + 8) = uVar4;
  }
  if (*(long *)(param_2 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar4 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_2 + 0x10) = uVar4;
  }
  *(int *)(param_2 + 0x18) = local_50;
  if (*(long *)(param_2 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
    lVar3 = local_48;
    local_48 = 0;
    *(long *)(param_2 + 0x20) = lVar3;
  }
  *(undefined4 *)(param_2 + 0x28) = local_40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_0010db5e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<Ref<Image> const&, PortableCompressedTexture2D::CompressionMode, bool,
   float>::_gen_argument_type_info(int) const */

PropertyInfo *
MethodBindT<Ref<Image>const&,PortableCompressedTexture2D::CompressionMode,bool,float>::
_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  call_get_argument_type_info<Ref<Image>const&,PortableCompressedTexture2D::CompressionMode,bool,float>
            (in_EDX,pPVar1);
  return pPVar1;
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Texture2D::~Texture2D() */

void __thiscall Texture2D::~Texture2D(Texture2D *this)

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
/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRS<bool>::~MethodBindTRS() */

void __thiscall MethodBindTRS<bool>::~MethodBindTRS(MethodBindTRS<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTS<bool>::~MethodBindTS() */

void __thiscall MethodBindTS<bool>::~MethodBindTS(MethodBindTS<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Vector<unsigned char>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Vector<unsigned_char>>::~MethodBindTRC(MethodBindTRC<Vector<unsigned_char>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Vector<unsigned char> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Vector<unsigned_char>const&>::~MethodBindT
          (MethodBindT<Vector<unsigned_char>const&> *this)

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
/* MethodBindTRC<Vector2>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector2>::~MethodBindTRC(MethodBindTRC<Vector2> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Vector2 const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector2_const&>::~MethodBindT(MethodBindT<Vector2_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<PortableCompressedTexture2D::CompressionMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<PortableCompressedTexture2D::CompressionMode>::~MethodBindTRC
          (MethodBindTRC<PortableCompressedTexture2D::CompressionMode> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Image::Format>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Image::Format>::~MethodBindTRC(MethodBindTRC<Image::Format> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<Image> const&, PortableCompressedTexture2D::CompressionMode, bool,
   float>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Image>const&,PortableCompressedTexture2D::CompressionMode,bool,float>::~MethodBindT
          (MethodBindT<Ref<Image>const&,PortableCompressedTexture2D::CompressionMode,bool,float>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Texture::~Texture() */

void __thiscall Texture::~Texture(Texture *this)

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


