
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



/* RenderSceneData::_bind_methods() */

void RenderSceneData::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  MethodBind *pMVar4;
  long *plVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_88 [2];
  long *local_78;
  undefined *local_68;
  undefined8 local_60;
  undefined **local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHODP((char *)local_88,(char ***)"get_cam_transform",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar4 = create_method_bind<RenderSceneData,Transform3D>((_func_Transform3D *)0x151);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_78;
  if (local_78 != (long *)0x0) {
    LOCK();
    plVar5 = local_78 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_78 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_78[-1];
      local_78 = (long *)0x0;
      if (lVar1 != 0) {
        lVar6 = 0;
        plVar5 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_88[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_88,(char ***)"get_cam_projection",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar4 = create_method_bind<RenderSceneData,Projection>((_func_Projection *)0x159);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_78;
  if (local_78 != (long *)0x0) {
    LOCK();
    plVar5 = local_78 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_78 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_78[-1];
      local_78 = (long *)0x0;
      if (lVar1 != 0) {
        lVar6 = 0;
        plVar5 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_88[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_88,(char ***)"get_view_count",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar4 = create_method_bind<RenderSceneData,unsigned_int>((_func_uint *)0x161);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_78;
  if (local_78 != (long *)0x0) {
    LOCK();
    plVar5 = local_78 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_78 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_78[-1];
      local_78 = (long *)0x0;
      if (lVar1 != 0) {
        lVar6 = 0;
        plVar5 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_88[0] != 0)) {
    StringName::unref();
  }
  local_60 = 0;
  local_68 = &_LC16;
  local_58 = &local_68;
  D_METHODP((char *)local_88,(char ***)"get_view_eye_offset",(uint)&local_58);
  local_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar4 = create_method_bind<RenderSceneData,Vector3,unsigned_int>((_func_Vector3_uint *)0x169);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_78;
  if (local_78 != (long *)0x0) {
    LOCK();
    plVar5 = local_78 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_78 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_78[-1];
      local_78 = (long *)0x0;
      if (lVar1 != 0) {
        lVar6 = 0;
        plVar5 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_88[0] != 0)) {
    StringName::unref();
  }
  local_68 = &_LC16;
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)local_88,(char ***)"get_view_projection",(uint)&local_58);
  local_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar4 = create_method_bind<RenderSceneData,Projection,unsigned_int>
                     ((_func_Projection_uint *)0x171);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_78;
  if (local_78 != (long *)0x0) {
    LOCK();
    plVar5 = local_78 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_78 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_78[-1];
      local_78 = (long *)0x0;
      if (lVar1 != 0) {
        lVar6 = 0;
        plVar5 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_88[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_88,(char ***)"get_uniform_buffer",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar4 = create_method_bind<RenderSceneData,RID>((_func_RID *)0x179);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_78;
  if (local_78 != (long *)0x0) {
    LOCK();
    plVar5 = local_78 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_78 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_78[-1];
      local_78 = (long *)0x0;
      if (lVar1 != 0) {
        lVar6 = 0;
        plVar5 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_88[0] != 0)) {
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



/* RenderSceneDataExtension::get_cam_transform() const */

void RenderSceneDataExtension::get_cam_transform(void)

{
  char cVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  long lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  code *pcVar9;
  long in_RSI;
  undefined1 (*in_RDI) [16];
  long in_FS_OFFSET;
  uint uVar10;
  undefined8 local_148;
  long local_140;
  char *local_138;
  long local_130;
  long local_128;
  undefined4 local_120;
  long local_118;
  undefined4 local_110;
  int local_108 [4];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  ulong local_b0;
  undefined8 local_a0;
  int local_98 [8];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long local_40;
  
  uVar10 = _LC32;
  plVar8 = *(long **)(in_RSI + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)in_RDI[2] = 0x3f800000;
  *(undefined8 *)(in_RDI[2] + 4) = 0;
  *(undefined4 *)(in_RDI[2] + 0xc) = 0;
  *in_RDI = ZEXT416(uVar10);
  in_RDI[1] = ZEXT416(uVar10);
  if (plVar8 != (long *)0x0) {
    local_108[0] = 0;
    local_108[1] = 0;
    local_108[2] = 0;
    (**(code **)(*plVar8 + 0x60))(local_98,plVar8,in_RSI + 0x178,0,0,local_108);
    if (local_108[0] == 0) {
      Variant::operator_cast_to_Transform3D((Variant *)local_78);
      cVar1 = Variant::needs_deinit[local_98[0]];
      *(undefined8 *)*in_RDI = local_78._0_8_;
      *(undefined8 *)(*in_RDI + 8) = local_78._8_8_;
      *(undefined8 *)in_RDI[1] = local_68._0_8_;
      *(undefined8 *)(in_RDI[1] + 8) = local_68._8_8_;
      *(ulong *)in_RDI[2] = CONCAT44(uStack_54,local_58);
      *(ulong *)(in_RDI[2] + 8) = CONCAT44(uStack_4c,uStack_50);
      if (cVar1 != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00100af6;
    }
    uVar10 = _LC32;
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
      uVar10 = _LC32;
    }
  }
  if ((*(long *)(in_RSI + 8) != 0) && (*(char *)(in_RSI + 0x180) == '\0')) {
    local_108[0] = 0;
    local_108[1] = 0;
    local_f8 = (undefined1  [16])0x0;
    local_138 = "_get_cam_transform";
    local_108[2] = 0;
    local_108[3] = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_d8 = 6;
    local_d0 = 1;
    local_c8 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a0 = 0;
    local_130 = 0x12;
    String::parse_latin1((StrRange *)local_108);
    local_d0 = CONCAT44(local_d0._4_4_,0xc);
    GetTypeInfo<Transform3D,void>::get_class_info((GetTypeInfo<Transform3D,void> *)&local_138);
    local_108[2] = local_138._0_4_;
    uVar6 = local_f8._0_8_;
    if (local_f8._0_8_ != local_130) {
      if (local_f8._0_8_ != 0) {
        LOCK();
        plVar8 = (long *)(local_f8._0_8_ + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          auVar3._8_8_ = 0;
          auVar3._0_8_ = local_f8._8_8_;
          local_f8 = auVar3 << 0x40;
          Memory::free_static((void *)(uVar6 + -0x10),false);
        }
      }
      local_f8._0_8_ = local_130;
      local_130 = 0;
    }
    if (local_f8._8_8_ != local_128) {
      StringName::unref();
      lVar7 = local_128;
      local_128 = 0;
      local_f8._8_8_ = lVar7;
    }
    lVar4 = local_e0;
    lVar7 = local_118;
    local_e8 = CONCAT44(local_e8._4_4_,local_120);
    if (local_e0 == local_118) {
      local_d8 = CONCAT44(local_d8._4_4_,local_110);
      if (local_e0 != 0) {
        LOCK();
        plVar8 = (long *)(local_e0 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_118 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
    }
    else {
      if (local_e0 != 0) {
        LOCK();
        plVar8 = (long *)(local_e0 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_e0 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      local_e0 = local_118;
      local_d8 = CONCAT44(local_d8._4_4_,local_110);
    }
    if ((StringName::configured != '\0') && (local_128 != 0)) {
      StringName::unref();
    }
    lVar7 = local_130;
    if (local_130 != 0) {
      LOCK();
      plVar8 = (long *)(local_130 + -0x10);
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        local_130 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    local_b0 = local_b0 & 0xffffffff00000000;
    uVar5 = MethodInfo::get_compatibility_hash();
    lVar7 = *(long *)(in_RSI + 8);
    *(undefined8 *)(in_RSI + 0x188) = 0;
    pcVar9 = *(code **)(lVar7 + 0xd8);
    if (((pcVar9 == (code *)0x0) || (*(long *)(lVar7 + 0xe0) == 0)) &&
       (pcVar9 = *(code **)(lVar7 + 0xd0), pcVar9 == (code *)0x0)) {
      local_148 = 0;
      String::parse_latin1((String *)&local_148,"RenderSceneDataExtension");
      StringName::StringName((StringName *)&local_140,(String *)&local_148,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_138,(StringName *)&local_140);
      if (local_130 == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_130);
        if ((StringName::configured != '\0') && (lVar7 = 0, local_140 != 0)) goto LAB_00100f1f;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
LAB_00100f34:
        lVar7 = *(long *)(in_RSI + 8);
        pcVar9 = *(code **)(lVar7 + 200);
        if (((pcVar9 == (code *)0x0) || (*(long *)(lVar7 + 0xe0) == 0)) &&
           (pcVar9 = *(code **)(lVar7 + 0xc0), pcVar9 == (code *)0x0)) goto LAB_00100e5a;
        uVar6 = (*pcVar9)(*(undefined8 *)(lVar7 + 0xa0),in_RSI + 0x178);
        *(undefined8 *)(in_RSI + 0x188) = uVar6;
      }
      else {
        lVar7 = *(long *)(local_130 + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_130);
        if ((StringName::configured != '\0') && (local_140 != 0)) {
LAB_00100f1f:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
        if (lVar7 == 0) goto LAB_00100f34;
      }
      lVar7 = *(long *)(in_RSI + 8);
    }
    else {
      uVar6 = (*pcVar9)(*(undefined8 *)(lVar7 + 0xa0),in_RSI + 0x178,uVar5);
      *(undefined8 *)(in_RSI + 0x188) = uVar6;
      lVar7 = *(long *)(in_RSI + 8);
    }
LAB_00100e5a:
    if (*(char *)(lVar7 + 0x29) != '\0') {
      plVar8 = (long *)operator_new(0x18,"");
      *plVar8 = in_RSI + 0x188;
      plVar8[1] = in_RSI + 0x180;
      plVar8[2] = *(long *)(in_RSI + 0x168);
      *(long **)(in_RSI + 0x168) = plVar8;
    }
    *(undefined1 *)(in_RSI + 0x180) = 1;
    MethodInfo::~MethodInfo((MethodInfo *)local_108);
    uVar10 = _LC32;
  }
  pcVar9 = *(code **)(in_RSI + 0x188);
  if (pcVar9 != (code *)0x0) {
    local_58 = 0x3f800000;
    uStack_54 = 0;
    uStack_50 = 0;
    pcVar2 = *(code **)(*(long *)(in_RSI + 8) + 0xe0);
    local_78 = ZEXT416(uVar10);
    uStack_4c = 0;
    local_68 = ZEXT416(uVar10);
    if (pcVar2 == (code *)0x0) {
      (*pcVar9)(*(undefined8 *)(in_RSI + 0x10),0,local_78);
    }
    else {
      (*pcVar2)(*(undefined8 *)(in_RSI + 0x10),in_RSI + 0x178,pcVar9,0,local_78);
    }
    *(undefined8 *)*in_RDI = local_78._0_8_;
    *(undefined8 *)(*in_RDI + 8) = local_78._8_8_;
    *(undefined8 *)in_RDI[1] = local_68._0_8_;
    *(undefined8 *)(in_RDI[1] + 8) = local_68._8_8_;
    *(ulong *)in_RDI[2] = CONCAT44(uStack_54,local_58);
    *(ulong *)(in_RDI[2] + 8) = CONCAT44(uStack_4c,uStack_50);
  }
LAB_00100af6:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RenderSceneDataExtension::get_cam_projection() const */

void RenderSceneDataExtension::get_cam_projection(void)

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  long in_RSI;
  Projection *in_RDI;
  long in_FS_OFFSET;
  undefined8 local_178;
  long local_170;
  char *local_168;
  long local_160;
  long local_158;
  undefined4 local_150;
  long local_148;
  undefined4 local_140;
  int local_138 [4];
  undefined1 local_128 [16];
  undefined8 local_118;
  long local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_e8;
  ulong local_e0;
  undefined8 local_d0;
  int local_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Projection::Projection(in_RDI);
  plVar6 = *(long **)(in_RSI + 0x98);
  if (plVar6 != (long *)0x0) {
    local_138[0] = 0;
    local_138[1] = 0;
    local_138[2] = 0;
    (**(code **)(*plVar6 + 0x60))(&local_c8,plVar6,in_RSI + 400,0,0,local_138);
    if (local_138[0] == 0) {
      Variant::operator_cast_to_Projection((Variant *)&local_88);
      *(undefined8 *)in_RDI = local_88;
      *(undefined8 *)(in_RDI + 8) = uStack_80;
      *(undefined8 *)(in_RDI + 0x10) = local_78;
      *(undefined8 *)(in_RDI + 0x18) = uStack_70;
      *(undefined8 *)(in_RDI + 0x20) = local_68;
      *(undefined8 *)(in_RDI + 0x28) = uStack_60;
      *(undefined8 *)(in_RDI + 0x30) = local_58;
      *(undefined8 *)(in_RDI + 0x38) = uStack_50;
      Projection::~Projection((Projection *)&local_88);
      if (Variant::needs_deinit[local_c8] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_001010ec;
    }
    if (Variant::needs_deinit[local_c8] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(in_RSI + 8) != 0) && (*(char *)(in_RSI + 0x198) == '\0')) {
    local_138[0] = 0;
    local_138[1] = 0;
    local_128 = (undefined1  [16])0x0;
    local_168 = "_get_cam_projection";
    local_138[2] = 0;
    local_138[3] = 0;
    local_118 = 0;
    local_110 = 0;
    local_108 = 6;
    local_100 = 1;
    local_f8 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_d0 = 0;
    local_160 = 0x13;
    String::parse_latin1((StrRange *)local_138);
    local_100 = CONCAT44(local_100._4_4_,0xc);
    GetTypeInfo<Projection,void>::get_class_info((GetTypeInfo<Projection,void> *)&local_168);
    local_138[2] = local_168._0_4_;
    uVar4 = local_128._0_8_;
    if (local_128._0_8_ != local_160) {
      if (local_128._0_8_ != 0) {
        LOCK();
        plVar6 = (long *)(local_128._0_8_ + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          auVar1._8_8_ = 0;
          auVar1._0_8_ = local_128._8_8_;
          local_128 = auVar1 << 0x40;
          Memory::free_static((void *)(uVar4 + -0x10),false);
        }
      }
      local_128._0_8_ = local_160;
      local_160 = 0;
    }
    if (local_128._8_8_ != local_158) {
      StringName::unref();
      lVar5 = local_158;
      local_158 = 0;
      local_128._8_8_ = lVar5;
    }
    lVar2 = local_110;
    lVar5 = local_148;
    local_118 = CONCAT44(local_118._4_4_,local_150);
    if (local_110 == local_148) {
      local_108 = CONCAT44(local_108._4_4_,local_140);
      if (local_110 != 0) {
        LOCK();
        plVar6 = (long *)(local_110 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_148 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
    }
    else {
      if (local_110 != 0) {
        LOCK();
        plVar6 = (long *)(local_110 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_110 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      local_110 = local_148;
      local_108 = CONCAT44(local_108._4_4_,local_140);
    }
    if ((StringName::configured != '\0') && (local_158 != 0)) {
      StringName::unref();
    }
    lVar5 = local_160;
    if (local_160 != 0) {
      LOCK();
      plVar6 = (long *)(local_160 + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        local_160 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    local_e0 = local_e0 & 0xffffffff00000000;
    uVar3 = MethodInfo::get_compatibility_hash();
    lVar5 = *(long *)(in_RSI + 8);
    *(undefined8 *)(in_RSI + 0x1a0) = 0;
    pcVar7 = *(code **)(lVar5 + 0xd8);
    if (((pcVar7 == (code *)0x0) || (*(long *)(lVar5 + 0xe0) == 0)) &&
       (pcVar7 = *(code **)(lVar5 + 0xd0), pcVar7 == (code *)0x0)) {
      local_178 = 0;
      String::parse_latin1((String *)&local_178,"RenderSceneDataExtension");
      StringName::StringName((StringName *)&local_170,(String *)&local_178,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_168,(StringName *)&local_170);
      if (local_160 == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_160);
        if ((StringName::configured != '\0') && (lVar5 = 0, local_170 != 0)) goto LAB_0010153f;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
LAB_00101554:
        lVar5 = *(long *)(in_RSI + 8);
        pcVar7 = *(code **)(lVar5 + 200);
        if (((pcVar7 == (code *)0x0) || (*(long *)(lVar5 + 0xe0) == 0)) &&
           (pcVar7 = *(code **)(lVar5 + 0xc0), pcVar7 == (code *)0x0)) goto LAB_0010148a;
        uVar4 = (*pcVar7)(*(undefined8 *)(lVar5 + 0xa0),in_RSI + 400);
        *(undefined8 *)(in_RSI + 0x1a0) = uVar4;
      }
      else {
        lVar5 = *(long *)(local_160 + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_160);
        if ((StringName::configured != '\0') && (local_170 != 0)) {
LAB_0010153f:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
        if (lVar5 == 0) goto LAB_00101554;
      }
      lVar5 = *(long *)(in_RSI + 8);
    }
    else {
      uVar4 = (*pcVar7)(*(undefined8 *)(lVar5 + 0xa0),in_RSI + 400,uVar3);
      *(undefined8 *)(in_RSI + 0x1a0) = uVar4;
      lVar5 = *(long *)(in_RSI + 8);
    }
LAB_0010148a:
    if (*(char *)(lVar5 + 0x29) != '\0') {
      plVar6 = (long *)operator_new(0x18,"");
      *plVar6 = in_RSI + 0x1a0;
      plVar6[1] = in_RSI + 0x198;
      plVar6[2] = *(long *)(in_RSI + 0x168);
      *(long **)(in_RSI + 0x168) = plVar6;
    }
    *(undefined1 *)(in_RSI + 0x198) = 1;
    MethodInfo::~MethodInfo((MethodInfo *)local_138);
  }
  if (*(long *)(in_RSI + 0x1a0) != 0) {
    Projection::Projection((Projection *)&local_c8);
    pcVar7 = *(code **)(*(long *)(in_RSI + 8) + 0xe0);
    if (pcVar7 == (code *)0x0) {
      (**(code **)(in_RSI + 0x1a0))(*(undefined8 *)(in_RSI + 0x10),0,(Projection *)&local_c8);
    }
    else {
      (*pcVar7)(*(undefined8 *)(in_RSI + 0x10),in_RSI + 400,*(undefined8 *)(in_RSI + 0x1a0),0,
                (Projection *)&local_c8);
    }
    *(ulong *)in_RDI = CONCAT44(uStack_c4,local_c8);
    *(undefined8 *)(in_RDI + 8) = uStack_c0;
    *(undefined8 *)(in_RDI + 0x10) = local_b8;
    *(undefined8 *)(in_RDI + 0x18) = uStack_b0;
    *(undefined8 *)(in_RDI + 0x20) = local_a8;
    *(undefined8 *)(in_RDI + 0x28) = uStack_a0;
    *(undefined8 *)(in_RDI + 0x30) = local_98;
    *(undefined8 *)(in_RDI + 0x38) = uStack_90;
    uStack_80 = uStack_c0;
    local_78 = local_b8;
    uStack_70 = uStack_b0;
    local_68 = local_a8;
    uStack_60 = uStack_a0;
    local_58 = local_98;
    uStack_50 = uStack_90;
    Projection::~Projection((Projection *)&local_88);
    Projection::~Projection((Projection *)&local_c8);
  }
LAB_001010ec:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RenderSceneDataExtension::get_view_count() const */

uint __thiscall RenderSceneDataExtension::get_view_count(RenderSceneDataExtension *this)

{
  undefined1 auVar1 [16];
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  undefined8 local_108;
  long local_100;
  char *local_f8;
  long local_f0;
  long local_e8;
  undefined4 local_e0;
  long local_d8;
  undefined4 local_d0;
  uint local_c8 [4];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar7 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar7 != (long *)0x0) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_c8[2] = 0;
    (**(code **)(*plVar7 + 0x60))((Variant *)local_58,plVar7,this + 0x1a8,0,0,local_c8);
    if (local_c8[0] == 0) {
      uVar3 = Variant::operator_cast_to_unsigned_int((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00101733;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x1b0] == (RenderSceneDataExtension)0x0)) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_b8 = (undefined1  [16])0x0;
    local_f8 = "_get_view_count";
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
    local_f0 = 0xf;
    String::parse_latin1((StrRange *)local_c8);
    local_90 = CONCAT44(local_90._4_4_,0xc);
    GetTypeInfo<unsigned_int,void>::get_class_info((GetTypeInfo<unsigned_int,void> *)&local_f8);
    local_c8[2] = local_f8._0_4_;
    uVar5 = local_b8._0_8_;
    if (local_b8._0_8_ != local_f0) {
      if (local_b8._0_8_ != 0) {
        LOCK();
        plVar7 = (long *)(local_b8._0_8_ + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          auVar1._8_8_ = 0;
          auVar1._0_8_ = local_b8._8_8_;
          local_b8 = auVar1 << 0x40;
          Memory::free_static((void *)(uVar5 + -0x10),false);
        }
      }
      local_b8._0_8_ = local_f0;
      local_f0 = 0;
    }
    if (local_b8._8_8_ != local_e8) {
      StringName::unref();
      lVar6 = local_e8;
      local_e8 = 0;
      local_b8._8_8_ = lVar6;
    }
    lVar2 = local_a0;
    lVar6 = local_d8;
    local_a8 = CONCAT44(local_a8._4_4_,local_e0);
    if (local_a0 == local_d8) {
      local_98 = CONCAT44(local_98._4_4_,local_d0);
      if (local_a0 != 0) {
        LOCK();
        plVar7 = (long *)(local_a0 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_d8 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
    }
    else {
      if (local_a0 != 0) {
        LOCK();
        plVar7 = (long *)(local_a0 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      local_a0 = local_d8;
      local_98 = CONCAT44(local_98._4_4_,local_d0);
    }
    if ((StringName::configured != '\0') && (local_e8 != 0)) {
      StringName::unref();
    }
    lVar6 = local_f0;
    if (local_f0 != 0) {
      LOCK();
      plVar7 = (long *)(local_f0 + -0x10);
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
        local_f0 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    local_70 = CONCAT44(local_70._4_4_,7);
    uVar4 = MethodInfo::get_compatibility_hash();
    lVar6 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x1b8) = 0;
    pcVar8 = *(code **)(lVar6 + 0xd8);
    if (((pcVar8 == (code *)0x0) || (*(long *)(lVar6 + 0xe0) == 0)) &&
       (pcVar8 = *(code **)(lVar6 + 0xd0), pcVar8 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"RenderSceneDataExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0 == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_f0);
        if ((StringName::configured != '\0') && (lVar6 = 0, local_100 != 0)) goto LAB_00101a78;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_00101a8d:
        lVar6 = *(long *)(this + 8);
        pcVar8 = *(code **)(lVar6 + 200);
        if (((pcVar8 == (code *)0x0) || (*(long *)(lVar6 + 0xe0) == 0)) &&
           (pcVar8 = *(code **)(lVar6 + 0xc0), pcVar8 == (code *)0x0)) goto LAB_001019c9;
        uVar5 = (*pcVar8)(*(undefined8 *)(lVar6 + 0xa0),this + 0x1a8);
        *(undefined8 *)(this + 0x1b8) = uVar5;
      }
      else {
        lVar6 = *(long *)(local_f0 + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00101a78:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar6 == 0) goto LAB_00101a8d;
      }
      lVar6 = *(long *)(this + 8);
    }
    else {
      uVar5 = (*pcVar8)(*(undefined8 *)(lVar6 + 0xa0),this + 0x1a8,uVar4);
      *(undefined8 *)(this + 0x1b8) = uVar5;
      lVar6 = *(long *)(this + 8);
    }
LAB_001019c9:
    if (*(char *)(lVar6 + 0x29) != '\0') {
      plVar7 = (long *)operator_new(0x18,"");
      *plVar7 = (long)(this + 0x1b8);
      plVar7[1] = (long)(this + 0x1b0);
      plVar7[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar7;
    }
    this[0x1b0] = (RenderSceneDataExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_c8);
  }
  pcVar8 = *(code **)(this + 0x1b8);
  uVar3 = 0;
  if (pcVar8 != (code *)0x0) {
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar8)(*(undefined8 *)(this + 0x10),0,local_c8);
      uVar3 = local_c8[0];
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x1a8,pcVar8,0,local_c8);
      uVar3 = local_c8[0];
    }
  }
LAB_00101733:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



/* RenderSceneDataExtension::get_uniform_buffer() const */

undefined8 __thiscall RenderSceneDataExtension::get_uniform_buffer(RenderSceneDataExtension *this)

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  undefined8 local_108;
  long local_100;
  char *local_f8;
  long local_f0;
  long local_e8;
  undefined4 local_e0;
  long local_d8;
  undefined4 local_d0;
  int local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar6 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar6 != (long *)0x0) {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar6 + 0x60))((Variant *)local_58,plVar6,this + 0x1f0,0,0,&local_c8);
    if (local_c8 == 0) {
      uVar4 = Variant::operator_cast_to_RID((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00101c71;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x1f8] == (RenderSceneDataExtension)0x0)) {
    local_c8 = 0;
    uStack_c4 = 0;
    local_b8 = (undefined1  [16])0x0;
    local_f8 = "_get_uniform_buffer";
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
    local_f0 = 0x13;
    String::parse_latin1((StrRange *)&local_c8);
    local_90 = CONCAT44(local_90._4_4_,0xc);
    GetTypeInfo<RID,void>::get_class_info((GetTypeInfo<RID,void> *)&local_f8);
    uStack_c0 = local_f8._0_4_;
    uVar4 = local_b8._0_8_;
    if (local_b8._0_8_ != local_f0) {
      if (local_b8._0_8_ != 0) {
        LOCK();
        plVar6 = (long *)(local_b8._0_8_ + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          auVar1._8_8_ = 0;
          auVar1._0_8_ = local_b8._8_8_;
          local_b8 = auVar1 << 0x40;
          Memory::free_static((void *)(uVar4 + -0x10),false);
        }
      }
      local_b8._0_8_ = local_f0;
      local_f0 = 0;
    }
    if (local_b8._8_8_ != local_e8) {
      StringName::unref();
      lVar5 = local_e8;
      local_e8 = 0;
      local_b8._8_8_ = lVar5;
    }
    lVar2 = local_a0;
    lVar5 = local_d8;
    local_a8 = CONCAT44(local_a8._4_4_,local_e0);
    if (local_a0 == local_d8) {
      local_98 = CONCAT44(local_98._4_4_,local_d0);
      if (local_a0 != 0) {
        LOCK();
        plVar6 = (long *)(local_a0 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_d8 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
    }
    else {
      if (local_a0 != 0) {
        LOCK();
        plVar6 = (long *)(local_a0 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      local_a0 = local_d8;
      local_98 = CONCAT44(local_98._4_4_,local_d0);
    }
    if ((StringName::configured != '\0') && (local_e8 != 0)) {
      StringName::unref();
    }
    lVar5 = local_f0;
    if (local_f0 != 0) {
      LOCK();
      plVar6 = (long *)(local_f0 + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        local_f0 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    local_70 = local_70 & 0xffffffff00000000;
    uVar3 = MethodInfo::get_compatibility_hash();
    lVar5 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x200) = 0;
    pcVar7 = *(code **)(lVar5 + 0xd8);
    if (((pcVar7 == (code *)0x0) || (*(long *)(lVar5 + 0xe0) == 0)) &&
       (pcVar7 = *(code **)(lVar5 + 0xd0), pcVar7 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"RenderSceneDataExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0 == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_f0);
        if ((StringName::configured != '\0') && (lVar5 = 0, local_100 != 0)) goto LAB_00101fc8;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_00101fdd:
        lVar5 = *(long *)(this + 8);
        pcVar7 = *(code **)(lVar5 + 200);
        if (((pcVar7 == (code *)0x0) || (*(long *)(lVar5 + 0xe0) == 0)) &&
           (pcVar7 = *(code **)(lVar5 + 0xc0), pcVar7 == (code *)0x0)) goto LAB_00101f19;
        uVar4 = (*pcVar7)(*(undefined8 *)(lVar5 + 0xa0),this + 0x1f0);
        *(undefined8 *)(this + 0x200) = uVar4;
      }
      else {
        lVar5 = *(long *)(local_f0 + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00101fc8:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar5 == 0) goto LAB_00101fdd;
      }
      lVar5 = *(long *)(this + 8);
    }
    else {
      uVar4 = (*pcVar7)(*(undefined8 *)(lVar5 + 0xa0),this + 0x1f0,uVar3);
      *(undefined8 *)(this + 0x200) = uVar4;
      lVar5 = *(long *)(this + 8);
    }
LAB_00101f19:
    if (*(char *)(lVar5 + 0x29) != '\0') {
      plVar6 = (long *)operator_new(0x18,"");
      *plVar6 = (long)(this + 0x200);
      plVar6[1] = (long)(this + 0x1f8);
      plVar6[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar6;
    }
    this[0x1f8] = (RenderSceneDataExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  }
  pcVar7 = *(code **)(this + 0x200);
  uVar4 = 0;
  if (pcVar7 != (code *)0x0) {
    local_c8 = 0;
    uStack_c4 = 0;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar7)(*(undefined8 *)(this + 0x10),0,&local_c8);
      uVar4 = CONCAT44(uStack_c4,local_c8);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x1f0,pcVar7,0,&local_c8);
      uVar4 = CONCAT44(uStack_c4,local_c8);
    }
  }
LAB_00101c71:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
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



/* RenderSceneDataExtension::_bind_methods() */

void RenderSceneDataExtension::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  char *pcVar7;
  undefined8 uVar8;
  undefined *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  int *piVar12;
  StringName *this;
  long lVar13;
  long in_FS_OFFSET;
  bool bVar14;
  long local_110;
  long local_108;
  long local_100;
  Vector local_f8 [8];
  undefined8 local_f0;
  char *local_e8;
  undefined1 local_e0 [16];
  int local_d0;
  long local_c8;
  undefined4 local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  long local_a8;
  long lStack_a0;
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 (*local_78 [2]) [16];
  int *local_68;
  ulong local_60;
  Vector<int> local_58 [8];
  long local_50;
  long local_40;
  
  local_e0._8_8_ = local_e0._0_8_;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = 0;
  lStack_a0 = 0;
  local_e8 = "_get_cam_transform";
  local_f0 = 0;
  local_b8 = (undefined *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = (undefined1 (*) [16])0x0;
  local_68 = (int *)0x0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x12;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0xc);
  local_e8 = "";
  local_110 = 0;
  local_108 = 0;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_e0._8_8_;
  local_e0 = auVar4 << 0x40;
  String::parse_latin1((StrRange *)&local_108);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,0x12);
  local_d0 = 0;
  local_c8 = 0;
  local_e0._0_8_ = 0;
  local_e0._8_8_ = 0;
  if (local_108 == 0) {
LAB_0010439b:
    local_c0 = 6;
    StringName::operator=((StringName *)(local_e0 + 8),(StringName *)&local_110);
    lVar2 = local_108;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_108);
    local_c0 = 6;
    if (local_d0 != 0x11) goto LAB_0010439b;
    StringName::StringName((StringName *)&local_100,(String *)&local_c8,false);
    if (local_e0._8_8_ == local_100) {
      lVar2 = local_108;
      if ((StringName::configured != '\0') && (local_100 != 0)) {
        StringName::unref();
        lVar2 = local_108;
      }
    }
    else {
      StringName::unref();
      lVar2 = local_108;
      local_e0._8_8_ = local_100;
    }
  }
  local_108 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_108 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_110 != 0)) {
    StringName::unref();
  }
  lVar2 = local_a8;
  local_b0 = CONCAT44(local_b0._4_4_,local_e8._0_4_);
  if (local_a8 != local_e0._0_8_) {
    if (local_a8 != 0) {
      LOCK();
      plVar1 = (long *)(local_a8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    local_a8 = local_e0._0_8_;
    local_e0._0_8_ = 0;
  }
  if (lStack_a0 != local_e0._8_8_) {
    StringName::unref();
    lStack_a0 = local_e0._8_8_;
    local_e0._8_8_ = 0;
  }
  lVar13 = local_90;
  lVar2 = local_c8;
  local_98 = CONCAT44(local_98._4_4_,local_d0);
  if (local_90 == local_c8) {
    local_88 = CONCAT44(local_88._4_4_,local_c0);
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  else {
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    local_90 = local_c8;
    local_88 = CONCAT44(local_88._4_4_,local_c0);
  }
  if ((StringName::configured != '\0') && (local_e0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar8 = local_e0._0_8_;
  if (local_e0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_e0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e0._0_8_ = 0;
      Memory::free_static((void *)(uVar8 + -0x10),false);
    }
  }
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e8 = "RenderSceneDataExtension";
  local_e0._0_8_ = 0x18;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
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
  piVar10 = local_68;
  if (local_68 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_68 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_68 + -2);
      lVar13 = 0;
      local_68 = (int *)0x0;
      piVar12 = piVar10;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar12] != '\0') {
            Variant::_clear_internal();
          }
          lVar13 = lVar13 + 1;
          piVar12 = piVar12 + 6;
        } while (lVar2 != lVar13);
      }
      Memory::free_static(piVar10 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
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
  if ((StringName::configured != '\0') && (lStack_a0 != 0)) {
    StringName::unref();
  }
  lVar2 = local_a8;
  if (local_a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  puVar9 = local_b8;
  if (local_b8 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = (undefined *)0x0;
      Memory::free_static((void *)((long)puVar9 + -0x10),false);
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = 0;
  lStack_a0 = 0;
  local_e8 = "_get_cam_projection";
  local_f0 = 0;
  local_b8 = (undefined *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = (undefined1 (*) [16])0x0;
  local_68 = (int *)0x0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x13;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0xc);
  GetTypeInfo<Projection,void>::get_class_info((GetTypeInfo<Projection,void> *)&local_e8);
  lVar2 = local_a8;
  local_b0 = CONCAT44(local_b0._4_4_,local_e8._0_4_);
  if (local_a8 != local_e0._0_8_) {
    if (local_a8 != 0) {
      LOCK();
      plVar1 = (long *)(local_a8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    local_a8 = local_e0._0_8_;
    local_e0._0_8_ = 0;
  }
  if (lStack_a0 != local_e0._8_8_) {
    StringName::unref();
    lStack_a0 = local_e0._8_8_;
    local_e0._8_8_ = 0;
  }
  lVar13 = local_90;
  lVar2 = local_c8;
  local_98 = CONCAT44(local_98._4_4_,local_d0);
  if (local_90 == local_c8) {
    local_88 = CONCAT44(local_88._4_4_,local_c0);
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  else {
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    local_90 = local_c8;
    local_88 = CONCAT44(local_88._4_4_,local_c0);
  }
  if ((StringName::configured != '\0') && (local_e0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar8 = local_e0._0_8_;
  if (local_e0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_e0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e0._0_8_ = 0;
      Memory::free_static((void *)(uVar8 + -0x10),false);
    }
  }
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e8 = "RenderSceneDataExtension";
  local_e0._0_8_ = 0x18;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
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
  piVar10 = local_68;
  if (local_68 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_68 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_68 + -2);
      lVar13 = 0;
      local_68 = (int *)0x0;
      piVar12 = piVar10;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar12] != '\0') {
            Variant::_clear_internal();
          }
          lVar13 = lVar13 + 1;
          piVar12 = piVar12 + 6;
        } while (lVar2 != lVar13);
      }
      Memory::free_static(piVar10 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
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
  if ((StringName::configured != '\0') && (lStack_a0 != 0)) {
    StringName::unref();
  }
  lVar2 = local_a8;
  if (local_a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  puVar9 = local_b8;
  if (local_b8 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = (undefined *)0x0;
      Memory::free_static((void *)((long)puVar9 + -0x10),false);
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = 0;
  lStack_a0 = 0;
  local_e8 = "_get_view_count";
  local_f0 = 0;
  local_b8 = (undefined *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = (undefined1 (*) [16])0x0;
  local_68 = (int *)0x0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0xc);
  GetTypeInfo<unsigned_int,void>::get_class_info((GetTypeInfo<unsigned_int,void> *)&local_e8);
  lVar2 = local_a8;
  local_b0 = CONCAT44(local_b0._4_4_,local_e8._0_4_);
  if (local_a8 != local_e0._0_8_) {
    if (local_a8 != 0) {
      LOCK();
      plVar1 = (long *)(local_a8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    local_a8 = local_e0._0_8_;
    local_e0._0_8_ = 0;
  }
  if (lStack_a0 != local_e0._8_8_) {
    StringName::unref();
    lStack_a0 = local_e0._8_8_;
    local_e0._8_8_ = 0;
  }
  lVar13 = local_90;
  lVar2 = local_c8;
  local_98 = CONCAT44(local_98._4_4_,local_d0);
  if (local_90 == local_c8) {
    local_88 = CONCAT44(local_88._4_4_,local_c0);
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  else {
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    local_90 = local_c8;
    local_88 = CONCAT44(local_88._4_4_,local_c0);
  }
  if ((StringName::configured != '\0') && (local_e0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar8 = local_e0._0_8_;
  if (local_e0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_e0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e0._0_8_ = 0;
      Memory::free_static((void *)(uVar8 + -0x10),false);
    }
  }
  local_60 = CONCAT44(local_60._4_4_,7);
  local_100 = 0;
  local_e8 = "RenderSceneDataExtension";
  local_e0._0_8_ = 0x18;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
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
  piVar10 = local_68;
  if (local_68 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_68 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_68 + -2);
      lVar13 = 0;
      local_68 = (int *)0x0;
      piVar12 = piVar10;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar12] != '\0') {
            Variant::_clear_internal();
          }
          lVar13 = lVar13 + 1;
          piVar12 = piVar12 + 6;
        } while (lVar2 != lVar13);
      }
      Memory::free_static(piVar10 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
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
  if ((StringName::configured != '\0') && (lStack_a0 != 0)) {
    StringName::unref();
  }
  lVar2 = local_a8;
  if (local_a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  puVar9 = local_b8;
  if (local_b8 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = (undefined *)0x0;
      Memory::free_static((void *)((long)puVar9 + -0x10),false);
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_b8 = &_LC16;
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b0 = 4;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (undefined *)0x0;
  plVar1 = (long *)((long)local_e8 + -0x10);
  if (local_e8 == (char *)0x0) {
    Vector<String>::push_back((Vector<String> *)local_f8);
  }
  else {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) goto LAB_00102f86;
      LOCK();
      lVar13 = *plVar1;
      bVar14 = lVar2 == lVar13;
      if (bVar14) {
        *plVar1 = lVar2 + 1;
        lVar13 = lVar2;
      }
      UNLOCK();
    } while (!bVar14);
    if (lVar13 != -1) {
      local_b8 = local_e8;
    }
LAB_00102f86:
    puVar9 = local_b8;
    Vector<String>::push_back((Vector<String> *)local_f8);
    if (puVar9 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)((long)puVar9 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)((long)local_b8 + -0x10),false);
      }
    }
  }
  pcVar7 = local_e8;
  if (local_e8 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_e8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e8 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar7 + -0x10),false);
    }
  }
  local_a8 = 0;
  lStack_a0 = 0;
  local_e8 = "_get_view_eye_offset";
  local_b8 = (undefined *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = (undefined1 (*) [16])0x0;
  local_68 = (int *)0x0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x14;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0xc);
  local_110 = 0;
  local_108 = 0;
  local_e8 = "";
  auVar5._8_8_ = 0;
  auVar5._0_8_ = local_e0._8_8_;
  local_e0 = auVar5 << 0x40;
  String::parse_latin1((StrRange *)&local_108);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,9);
  local_d0 = 0;
  local_c8 = 0;
  local_e0._0_8_ = 0;
  local_e0._8_8_ = 0;
  if (local_108 == 0) {
LAB_001046fb:
    local_c0 = 6;
    StringName::operator=((StringName *)(local_e0 + 8),(StringName *)&local_110);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_108);
    local_c0 = 6;
    if (local_d0 != 0x11) goto LAB_001046fb;
    StringName::StringName((StringName *)&local_100,(String *)&local_c8,false);
    if (local_e0._8_8_ == local_100) {
      if ((StringName::configured != '\0') && (local_100 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_e0._8_8_ = local_100;
    }
  }
  lVar2 = local_108;
  this = (StringName *)(local_e0 + 8);
  if (local_108 != 0) {
    LOCK();
    plVar1 = (long *)(local_108 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_108 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_110 != 0)) {
    StringName::unref();
  }
  lVar2 = local_a8;
  local_b0 = CONCAT44(local_b0._4_4_,local_e8._0_4_);
  if (local_a8 != local_e0._0_8_) {
    if (local_a8 != 0) {
      LOCK();
      plVar1 = (long *)(local_a8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    local_a8 = local_e0._0_8_;
    local_e0._0_8_ = 0;
  }
  if (lStack_a0 != local_e0._8_8_) {
    StringName::unref();
    lStack_a0 = local_e0._8_8_;
    local_e0._8_8_ = 0;
  }
  lVar13 = local_90;
  lVar2 = local_c8;
  local_98 = CONCAT44(local_98._4_4_,local_d0);
  if (local_90 == local_c8) {
    local_88 = CONCAT44(local_88._4_4_,local_c0);
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  else {
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    local_90 = local_c8;
    local_88 = CONCAT44(local_88._4_4_,local_c0);
  }
  if ((StringName::configured != '\0') && (local_e0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar8 = local_e0._0_8_;
  if (local_e0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_e0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e0._0_8_ = 0;
      Memory::free_static((void *)(uVar8 + -0x10),false);
    }
  }
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<unsigned_int,void>::get_class_info((GetTypeInfo<unsigned_int,void> *)&local_e8);
  if (local_78[0] == (undefined1 (*) [16])0x0) {
    local_78[0] = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined4 *)local_78[0][1] = 0;
    *local_78[0] = (undefined1  [16])0x0;
  }
  puVar11 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar11 + 8) = 0;
  *(undefined1 (*) [16])(puVar11 + 2) = (undefined1  [16])0x0;
  *puVar11 = 0;
  puVar11[6] = 0;
  puVar11[10] = 6;
  *(undefined8 *)(puVar11 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar11 + 0xc) = (undefined1  [16])0x0;
  *puVar11 = local_e8._0_4_;
  if (local_e0._0_8_ != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar11 + 2),(CowData *)local_e0);
  }
  StringName::operator=((StringName *)(puVar11 + 4),this);
  puVar11[6] = local_d0;
  if (*(long *)(puVar11 + 8) != local_c8) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar11 + 8),(CowData *)&local_c8);
  }
  lVar13 = local_c8;
  puVar11[10] = local_c0;
  lVar2 = *(long *)(*local_78[0] + 8);
  *(undefined8 *)(puVar11 + 0xc) = 0;
  *(undefined1 (**) [16])(puVar11 + 0x10) = local_78[0];
  *(long *)(puVar11 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar11;
  }
  lVar2 = *(long *)*local_78[0];
  *(undefined4 **)(*local_78[0] + 8) = puVar11;
  if (lVar2 == 0) {
    *(undefined4 **)*local_78[0] = puVar11;
  }
  *(int *)local_78[0][1] = *(int *)local_78[0][1] + 1;
  if (local_c8 != 0) {
    LOCK();
    plVar1 = (long *)(local_c8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar13 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_e0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar8 = local_e0._0_8_;
  if (local_e0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_e0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e0._0_8_ = 0;
      Memory::free_static((void *)(uVar8 + -0x10),false);
    }
  }
  Vector<int>::push_back(local_58,7);
  local_100 = 0;
  local_e8 = "RenderSceneDataExtension";
  local_e0._0_8_ = 0x18;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
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
  piVar10 = local_68;
  if (local_68 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_68 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_68 + -2);
      lVar13 = 0;
      local_68 = (int *)0x0;
      piVar12 = piVar10;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar12] != '\0') {
            Variant::_clear_internal();
          }
          lVar13 = lVar13 + 1;
          piVar12 = piVar12 + 6;
        } while (lVar2 != lVar13);
      }
      Memory::free_static(piVar10 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
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
  if ((StringName::configured != '\0') && (lStack_a0 != 0)) {
    StringName::unref();
  }
  lVar2 = local_a8;
  if (local_a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  puVar9 = local_b8;
  if (local_b8 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = (undefined *)0x0;
      Memory::free_static((void *)((long)puVar9 + -0x10),false);
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_b8 = &_LC16;
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b0 = 4;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (undefined *)0x0;
  plVar1 = (long *)((long)local_e8 + -0x10);
  if (local_e8 == (char *)0x0) {
    Vector<String>::push_back((Vector<String> *)local_f8);
  }
  else {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) goto LAB_001037a3;
      LOCK();
      lVar13 = *plVar1;
      bVar14 = lVar2 == lVar13;
      if (bVar14) {
        *plVar1 = lVar2 + 1;
        lVar13 = lVar2;
      }
      UNLOCK();
    } while (!bVar14);
    if (lVar13 != -1) {
      local_b8 = local_e8;
    }
LAB_001037a3:
    puVar9 = local_b8;
    Vector<String>::push_back((Vector<String> *)local_f8);
    if (puVar9 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)((long)puVar9 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)((long)local_b8 + -0x10),false);
      }
    }
  }
  pcVar7 = local_e8;
  if (local_e8 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_e8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e8 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar7 + -0x10),false);
    }
  }
  local_e8 = "_get_view_projection";
  local_a8 = 0;
  lStack_a0 = 0;
  local_b8 = (undefined *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = (undefined1 (*) [16])0x0;
  local_68 = (int *)0x0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x14;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0xc);
  GetTypeInfo<Projection,void>::get_class_info((GetTypeInfo<Projection,void> *)&local_e8);
  lVar2 = local_a8;
  local_b0 = CONCAT44(local_b0._4_4_,local_e8._0_4_);
  if (local_a8 != local_e0._0_8_) {
    if (local_a8 != 0) {
      LOCK();
      plVar1 = (long *)(local_a8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    local_a8 = local_e0._0_8_;
    local_e0._0_8_ = 0;
  }
  if (lStack_a0 != local_e0._8_8_) {
    StringName::unref();
    lStack_a0 = local_e0._8_8_;
    local_e0._8_8_ = 0;
  }
  lVar13 = local_90;
  lVar2 = local_c8;
  local_98 = CONCAT44(local_98._4_4_,local_d0);
  if (local_90 == local_c8) {
    local_88 = CONCAT44(local_88._4_4_,local_c0);
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  else {
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    local_90 = local_c8;
    local_88 = CONCAT44(local_88._4_4_,local_c0);
  }
  if ((StringName::configured != '\0') && (local_e0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar8 = local_e0._0_8_;
  if (local_e0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_e0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e0._0_8_ = 0;
      Memory::free_static((void *)(uVar8 + -0x10),false);
    }
  }
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<unsigned_int,void>::get_class_info((GetTypeInfo<unsigned_int,void> *)&local_e8);
  if (local_78[0] == (undefined1 (*) [16])0x0) {
    local_78[0] = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined4 *)local_78[0][1] = 0;
    *local_78[0] = (undefined1  [16])0x0;
  }
  puVar11 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar11 + 8) = 0;
  *(undefined1 (*) [16])(puVar11 + 2) = (undefined1  [16])0x0;
  *puVar11 = 0;
  puVar11[6] = 0;
  puVar11[10] = 6;
  *(undefined8 *)(puVar11 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar11 + 0xc) = (undefined1  [16])0x0;
  *puVar11 = local_e8._0_4_;
  if (local_e0._0_8_ != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar11 + 2),(CowData *)local_e0);
  }
  StringName::operator=((StringName *)(puVar11 + 4),this);
  puVar11[6] = local_d0;
  if (*(long *)(puVar11 + 8) != local_c8) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar11 + 8),(CowData *)&local_c8);
  }
  lVar13 = local_c8;
  puVar11[10] = local_c0;
  lVar2 = *(long *)(*local_78[0] + 8);
  *(undefined8 *)(puVar11 + 0xc) = 0;
  *(undefined1 (**) [16])(puVar11 + 0x10) = local_78[0];
  *(long *)(puVar11 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar11;
  }
  lVar2 = *(long *)*local_78[0];
  *(undefined4 **)(*local_78[0] + 8) = puVar11;
  if (lVar2 == 0) {
    *(undefined4 **)*local_78[0] = puVar11;
  }
  *(int *)local_78[0][1] = *(int *)local_78[0][1] + 1;
  if (local_c8 != 0) {
    LOCK();
    plVar1 = (long *)(local_c8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar13 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_e0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar8 = local_e0._0_8_;
  if (local_e0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_e0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e0._0_8_ = 0;
      Memory::free_static((void *)(uVar8 + -0x10),false);
    }
  }
  Vector<int>::push_back(local_58,7);
  local_100 = 0;
  local_e8 = "RenderSceneDataExtension";
  local_e0._0_8_ = 0x18;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
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
  piVar10 = local_68;
  if (local_68 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_68 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_68 + -2);
      lVar13 = 0;
      local_68 = (int *)0x0;
      piVar12 = piVar10;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar12] != '\0') {
            Variant::_clear_internal();
          }
          lVar13 = lVar13 + 1;
          piVar12 = piVar12 + 6;
        } while (lVar2 != lVar13);
      }
      Memory::free_static(piVar10 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
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
  if ((StringName::configured != '\0') && (lStack_a0 != 0)) {
    StringName::unref();
  }
  lVar2 = local_a8;
  if (local_a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  puVar9 = local_b8;
  if (local_b8 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = (undefined *)0x0;
      Memory::free_static((void *)((long)puVar9 + -0x10),false);
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = 0;
  lStack_a0 = 0;
  local_e8 = "_get_uniform_buffer";
  local_f0 = 0;
  local_b8 = (undefined *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = (undefined1 (*) [16])0x0;
  local_68 = (int *)0x0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x13;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0xc);
  local_110 = 0;
  local_108 = 0;
  local_e8 = "";
  auVar6._8_8_ = 0;
  auVar6._0_8_ = local_e0._8_8_;
  local_e0 = auVar6 << 0x40;
  String::parse_latin1((StrRange *)&local_108);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,0x17);
  local_d0 = 0;
  local_c8 = 0;
  local_e0._0_8_ = 0;
  local_e0._8_8_ = 0;
  if (local_108 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_108);
    local_c0 = 6;
    if (local_d0 == 0x11) {
      StringName::StringName((StringName *)&local_100,(String *)&local_c8,false);
      if (local_e0._8_8_ == local_100) {
        if ((StringName::configured != '\0') && (local_100 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_e0._8_8_ = local_100;
      }
      goto LAB_00103fa3;
    }
  }
  local_c0 = 6;
  StringName::operator=(this,(StringName *)&local_110);
LAB_00103fa3:
  lVar2 = local_108;
  if (local_108 != 0) {
    LOCK();
    plVar1 = (long *)(local_108 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_108 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_110 != 0)) {
    StringName::unref();
  }
  lVar2 = local_a8;
  local_b0 = CONCAT44(local_b0._4_4_,local_e8._0_4_);
  if (local_a8 != local_e0._0_8_) {
    if (local_a8 != 0) {
      LOCK();
      plVar1 = (long *)(local_a8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    local_a8 = local_e0._0_8_;
    local_e0._0_8_ = 0;
  }
  if (lStack_a0 != local_e0._8_8_) {
    StringName::unref();
    lStack_a0 = local_e0._8_8_;
    local_e0._8_8_ = 0;
  }
  lVar13 = local_90;
  lVar2 = local_c8;
  local_98 = CONCAT44(local_98._4_4_,local_d0);
  if (local_90 == local_c8) {
    local_88 = CONCAT44(local_88._4_4_,local_c0);
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  else {
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    local_90 = local_c8;
    local_88 = CONCAT44(local_88._4_4_,local_c0);
  }
  if ((StringName::configured != '\0') && (local_e0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar8 = local_e0._0_8_;
  if (local_e0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_e0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e0._0_8_ = 0;
      Memory::free_static((void *)(uVar8 + -0x10),false);
    }
  }
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e8 = "RenderSceneDataExtension";
  local_e0._0_8_ = 0x18;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
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
  piVar10 = local_68;
  if (local_68 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_68 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_68 + -2);
      lVar13 = 0;
      local_68 = (int *)0x0;
      piVar12 = piVar10;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar12] != '\0') {
            Variant::_clear_internal();
          }
          lVar13 = lVar13 + 1;
          piVar12 = piVar12 + 6;
        } while (lVar2 != lVar13);
      }
      Memory::free_static(piVar10 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
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
  if ((StringName::configured != '\0') && (lStack_a0 != 0)) {
    StringName::unref();
  }
  lVar2 = local_a8;
  if (local_a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  puVar9 = local_b8;
  if (local_b8 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = (undefined *)0x0;
      Memory::free_static((void *)((long)puVar9 + -0x10),false);
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_f0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RenderSceneDataExtension::get_view_projection(unsigned int) const */

Projection * RenderSceneDataExtension::get_view_projection(uint param_1)

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  uint in_EDX;
  long in_RSI;
  undefined4 in_register_0000003c;
  Projection *this;
  long in_FS_OFFSET;
  undefined8 local_1a8;
  long local_1a0;
  char *local_198;
  long local_190;
  long local_188;
  undefined4 local_180;
  long local_178;
  undefined4 local_170;
  uint local_168 [4];
  undefined1 local_158 [16];
  undefined8 local_148;
  long local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 (*local_128) [16];
  undefined8 local_118;
  ulong local_110;
  Vector<int> local_108 [8];
  undefined8 local_100;
  Variant *local_f0;
  uint *local_e8 [4];
  int local_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  this = (Projection *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Projection::Projection(this);
  plVar7 = *(long **)(in_RSI + 0x98);
  if (plVar7 != (long *)0x0) {
    local_168[0] = 0;
    local_168[1] = 0;
    local_168[2] = 0;
    Variant::Variant((Variant *)local_e8,in_EDX);
    local_f0 = (Variant *)local_e8;
    (**(code **)(*plVar7 + 0x60))(&local_c8,plVar7,in_RSI + 0x1d8,&local_f0,1,local_168);
    if (local_168[0] == 0) {
      Variant::operator_cast_to_Projection((Variant *)&local_88);
      *(undefined8 *)this = local_88;
      *(undefined8 *)(this + 8) = uStack_80;
      *(undefined8 *)(this + 0x10) = local_78;
      *(undefined8 *)(this + 0x18) = uStack_70;
      *(undefined8 *)(this + 0x20) = local_68;
      *(undefined8 *)(this + 0x28) = uStack_60;
      *(undefined8 *)(this + 0x30) = local_58;
      *(undefined8 *)(this + 0x38) = uStack_50;
      Projection::~Projection((Projection *)&local_88);
      if (Variant::needs_deinit[local_c8] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_e8[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00104b6d;
    }
    if (Variant::needs_deinit[local_c8] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_e8[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(in_RSI + 8) != 0) && (*(char *)(in_RSI + 0x1e0) == '\0')) {
    local_168[0] = 0;
    local_168[1] = 0;
    local_158 = (undefined1  [16])0x0;
    local_198 = "_get_view_projection";
    local_168[2] = 0;
    local_168[3] = 0;
    local_148 = 0;
    local_140 = 0;
    local_138 = 6;
    local_130 = 1;
    local_128 = (undefined1 (*) [16])0x0;
    local_118 = 0;
    local_110 = 0;
    local_100 = 0;
    local_190 = 0x14;
    String::parse_latin1((StrRange *)local_168);
    local_130 = CONCAT44(local_130._4_4_,0xc);
    GetTypeInfo<Projection,void>::get_class_info((GetTypeInfo<Projection,void> *)&local_198);
    local_168[2] = local_198._0_4_;
    uVar5 = local_158._0_8_;
    if (local_158._0_8_ != local_190) {
      if (local_158._0_8_ != 0) {
        LOCK();
        plVar7 = (long *)(local_158._0_8_ + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          auVar1._8_8_ = 0;
          auVar1._0_8_ = local_158._8_8_;
          local_158 = auVar1 << 0x40;
          Memory::free_static((void *)(uVar5 + -0x10),false);
        }
      }
      local_158._0_8_ = local_190;
      local_190 = 0;
    }
    if (local_158._8_8_ != local_188) {
      StringName::unref();
      lVar6 = local_188;
      local_188 = 0;
      local_158._8_8_ = lVar6;
    }
    lVar2 = local_140;
    lVar6 = local_178;
    local_148 = CONCAT44(local_148._4_4_,local_180);
    if (local_140 == local_178) {
      local_138 = CONCAT44(local_138._4_4_,local_170);
      if (local_140 != 0) {
        LOCK();
        plVar7 = (long *)(local_140 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_178 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
    }
    else {
      if (local_140 != 0) {
        LOCK();
        plVar7 = (long *)(local_140 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_140 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      local_140 = local_178;
      local_138 = CONCAT44(local_138._4_4_,local_170);
    }
    if ((StringName::configured != '\0') && (local_188 != 0)) {
      StringName::unref();
    }
    lVar6 = local_190;
    if (local_190 != 0) {
      LOCK();
      plVar7 = (long *)(local_190 + -0x10);
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
        local_190 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    local_110 = local_110 & 0xffffffff00000000;
    GetTypeInfo<unsigned_int,void>::get_class_info((GetTypeInfo<unsigned_int,void> *)&local_198);
    if (local_128 == (undefined1 (*) [16])0x0) {
      local_128 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)local_128[1] = 0;
      *local_128 = (undefined1  [16])0x0;
    }
    puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
    *(undefined8 *)(puVar4 + 8) = 0;
    *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
    *puVar4 = 0;
    puVar4[6] = 0;
    puVar4[10] = 6;
    *(undefined8 *)(puVar4 + 0x10) = 0;
    *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
    *puVar4 = local_198._0_4_;
    if (local_190 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_190);
    }
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_188);
    puVar4[6] = local_180;
    if (*(long *)(puVar4 + 8) != local_178) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_178);
    }
    lVar2 = local_178;
    puVar4[10] = local_170;
    lVar6 = *(long *)(*local_128 + 8);
    *(undefined8 *)(puVar4 + 0xc) = 0;
    *(undefined1 (**) [16])(puVar4 + 0x10) = local_128;
    *(long *)(puVar4 + 0xe) = lVar6;
    if (lVar6 != 0) {
      *(undefined4 **)(lVar6 + 0x30) = puVar4;
    }
    lVar6 = *(long *)*local_128;
    *(undefined4 **)(*local_128 + 8) = puVar4;
    if (lVar6 == 0) {
      *(undefined4 **)*local_128 = puVar4;
    }
    *(int *)local_128[1] = *(int *)local_128[1] + 1;
    if (local_178 != 0) {
      LOCK();
      plVar7 = (long *)(local_178 + -0x10);
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
        local_178 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_188 != 0)) {
      StringName::unref();
    }
    lVar6 = local_190;
    if (local_190 != 0) {
      LOCK();
      plVar7 = (long *)(local_190 + -0x10);
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
        local_190 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    Vector<int>::push_back(local_108,7);
    uVar3 = MethodInfo::get_compatibility_hash();
    lVar6 = *(long *)(in_RSI + 8);
    *(undefined8 *)(in_RSI + 0x1e8) = 0;
    pcVar8 = *(code **)(lVar6 + 0xd8);
    if (((pcVar8 == (code *)0x0) || (*(long *)(lVar6 + 0xe0) == 0)) &&
       (pcVar8 = *(code **)(lVar6 + 0xd0), pcVar8 == (code *)0x0)) {
      local_1a8 = 0;
      String::parse_latin1((String *)&local_1a8,"RenderSceneDataExtension");
      StringName::StringName((StringName *)&local_1a0,(String *)&local_1a8,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_198,(StringName *)&local_1a0);
      if (local_190 == 0) {
        lVar6 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_190);
        if (StringName::configured != '\0') goto LAB_0010517c;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
LAB_0010519b:
        lVar6 = *(long *)(in_RSI + 8);
        pcVar8 = *(code **)(lVar6 + 200);
        if (((pcVar8 == (code *)0x0) || (*(long *)(lVar6 + 0xe0) == 0)) &&
           (pcVar8 = *(code **)(lVar6 + 0xc0), pcVar8 == (code *)0x0)) goto LAB_001050a8;
        uVar5 = (*pcVar8)(*(undefined8 *)(lVar6 + 0xa0),in_RSI + 0x1d8);
        *(undefined8 *)(in_RSI + 0x1e8) = uVar5;
      }
      else {
        lVar6 = *(long *)(local_190 + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_190);
        if (StringName::configured != '\0') {
LAB_0010517c:
          if (local_1a0 != 0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
        if (lVar6 == 0) goto LAB_0010519b;
      }
      lVar6 = *(long *)(in_RSI + 8);
    }
    else {
      uVar5 = (*pcVar8)(*(undefined8 *)(lVar6 + 0xa0),in_RSI + 0x1d8,uVar3);
      *(undefined8 *)(in_RSI + 0x1e8) = uVar5;
      lVar6 = *(long *)(in_RSI + 8);
    }
LAB_001050a8:
    if (*(char *)(lVar6 + 0x29) != '\0') {
      plVar7 = (long *)operator_new(0x18,"");
      *plVar7 = in_RSI + 0x1e8;
      plVar7[1] = in_RSI + 0x1e0;
      plVar7[2] = *(long *)(in_RSI + 0x168);
      *(long **)(in_RSI + 0x168) = plVar7;
    }
    *(undefined1 *)(in_RSI + 0x1e0) = 1;
    MethodInfo::~MethodInfo((MethodInfo *)local_168);
  }
  if (*(long *)(in_RSI + 0x1e8) != 0) {
    local_168[1] = 0;
    local_e8[0] = local_168;
    local_168[0] = in_EDX;
    Projection::Projection((Projection *)&local_c8);
    pcVar8 = *(code **)(*(long *)(in_RSI + 8) + 0xe0);
    if (pcVar8 == (code *)0x0) {
      (**(code **)(in_RSI + 0x1e8))(*(undefined8 *)(in_RSI + 0x10),local_e8,(Projection *)&local_c8)
      ;
    }
    else {
      (*pcVar8)(*(undefined8 *)(in_RSI + 0x10),in_RSI + 0x1d8,*(undefined8 *)(in_RSI + 0x1e8),
                local_e8,(Projection *)&local_c8);
    }
    *(ulong *)this = CONCAT44(uStack_c4,local_c8);
    *(undefined8 *)(this + 8) = uStack_c0;
    *(undefined8 *)(this + 0x10) = local_b8;
    *(undefined8 *)(this + 0x18) = uStack_b0;
    *(undefined8 *)(this + 0x20) = local_a8;
    *(undefined8 *)(this + 0x28) = uStack_a0;
    *(undefined8 *)(this + 0x30) = local_98;
    *(undefined8 *)(this + 0x38) = uStack_90;
    uStack_80 = uStack_c0;
    local_78 = local_b8;
    uStack_70 = uStack_b0;
    local_68 = local_a8;
    uStack_60 = uStack_a0;
    local_58 = local_98;
    uStack_50 = uStack_90;
    Projection::~Projection((Projection *)&local_88);
    Projection::~Projection((Projection *)&local_c8);
  }
LAB_00104b6d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* RenderSceneDataExtension::get_view_eye_offset(unsigned int) const */

void __thiscall
RenderSceneDataExtension::get_view_eye_offset(RenderSceneDataExtension *this,uint param_1)

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  undefined8 local_158;
  long local_150;
  char *local_148;
  long local_140;
  long local_138;
  undefined4 local_130;
  long local_128;
  undefined4 local_120;
  uint local_118 [4];
  undefined1 local_108 [16];
  undefined8 local_f8;
  long local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 (*local_d8) [16];
  undefined8 local_c8;
  ulong local_c0;
  Vector<int> local_b8 [8];
  undefined8 local_b0;
  Variant *local_a8;
  undefined1 local_9c [12];
  uint *local_78 [4];
  undefined1 local_58 [2] [12];
  long local_40;
  
  plVar7 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_9c._0_8_ = 0;
  local_9c._8_4_ = 0;
  if (plVar7 != (long *)0x0) {
    local_118[0] = 0;
    local_118[1] = 0;
    local_118[2] = 0;
    Variant::Variant((Variant *)local_78,param_1);
    local_a8 = (Variant *)local_78;
    (**(code **)(*plVar7 + 0x60))((Variant *)local_58,plVar7,this + 0x1c0,&local_a8,1,local_118);
    if (local_118[0] == 0) {
      local_9c = Variant::operator_cast_to_Vector3((Variant *)local_58);
      if (Variant::needs_deinit[(int)local_58[0]._0_4_] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010544c;
    }
    if (Variant::needs_deinit[(int)local_58[0]._0_4_] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x1c8] == (RenderSceneDataExtension)0x0)) {
    local_118[0] = 0;
    local_118[1] = 0;
    local_108 = (undefined1  [16])0x0;
    local_148 = "_get_view_eye_offset";
    local_118[2] = 0;
    local_118[3] = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_e8 = 6;
    local_e0 = 1;
    local_d8 = (undefined1 (*) [16])0x0;
    local_c8 = 0;
    local_c0 = 0;
    local_b0 = 0;
    local_140 = 0x14;
    String::parse_latin1((StrRange *)local_118);
    local_e0 = CONCAT44(local_e0._4_4_,0xc);
    GetTypeInfo<Vector3,void>::get_class_info((GetTypeInfo<Vector3,void> *)&local_148);
    local_118[2] = local_148._0_4_;
    uVar5 = local_108._0_8_;
    if (local_108._0_8_ != local_140) {
      if (local_108._0_8_ != 0) {
        LOCK();
        plVar7 = (long *)(local_108._0_8_ + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          auVar1._8_8_ = 0;
          auVar1._0_8_ = local_108._8_8_;
          local_108 = auVar1 << 0x40;
          Memory::free_static((void *)(uVar5 + -0x10),false);
        }
      }
      local_108._0_8_ = local_140;
      local_140 = 0;
    }
    if (local_108._8_8_ != local_138) {
      StringName::unref();
      lVar6 = local_138;
      local_138 = 0;
      local_108._8_8_ = lVar6;
    }
    lVar2 = local_f0;
    lVar6 = local_128;
    local_f8 = CONCAT44(local_f8._4_4_,local_130);
    if (local_f0 == local_128) {
      local_e8 = CONCAT44(local_e8._4_4_,local_120);
      if (local_f0 != 0) {
        LOCK();
        plVar7 = (long *)(local_f0 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_128 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
    }
    else {
      if (local_f0 != 0) {
        LOCK();
        plVar7 = (long *)(local_f0 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_f0 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      local_f0 = local_128;
      local_e8 = CONCAT44(local_e8._4_4_,local_120);
    }
    if ((StringName::configured != '\0') && (local_138 != 0)) {
      StringName::unref();
    }
    lVar6 = local_140;
    if (local_140 != 0) {
      LOCK();
      plVar7 = (long *)(local_140 + -0x10);
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
        local_140 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    local_c0 = local_c0 & 0xffffffff00000000;
    GetTypeInfo<unsigned_int,void>::get_class_info((GetTypeInfo<unsigned_int,void> *)&local_148);
    if (local_d8 == (undefined1 (*) [16])0x0) {
      local_d8 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)local_d8[1] = 0;
      *local_d8 = (undefined1  [16])0x0;
    }
    puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
    *(undefined8 *)(puVar4 + 8) = 0;
    *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
    *puVar4 = 0;
    puVar4[6] = 0;
    puVar4[10] = 6;
    *(undefined8 *)(puVar4 + 0x10) = 0;
    *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
    *puVar4 = local_148._0_4_;
    if (local_140 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_140);
    }
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_138);
    puVar4[6] = local_130;
    if (*(long *)(puVar4 + 8) != local_128) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_128);
    }
    lVar2 = local_128;
    puVar4[10] = local_120;
    lVar6 = *(long *)(*local_d8 + 8);
    *(undefined8 *)(puVar4 + 0xc) = 0;
    *(undefined1 (**) [16])(puVar4 + 0x10) = local_d8;
    *(long *)(puVar4 + 0xe) = lVar6;
    if (lVar6 != 0) {
      *(undefined4 **)(lVar6 + 0x30) = puVar4;
    }
    lVar6 = *(long *)*local_d8;
    *(undefined4 **)(*local_d8 + 8) = puVar4;
    if (lVar6 == 0) {
      *(undefined4 **)*local_d8 = puVar4;
    }
    *(int *)local_d8[1] = *(int *)local_d8[1] + 1;
    if (local_128 != 0) {
      LOCK();
      plVar7 = (long *)(local_128 + -0x10);
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
        local_128 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_138 != 0)) {
      StringName::unref();
    }
    lVar6 = local_140;
    if (local_140 != 0) {
      LOCK();
      plVar7 = (long *)(local_140 + -0x10);
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
        local_140 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    Vector<int>::push_back(local_b8,7);
    uVar3 = MethodInfo::get_compatibility_hash();
    lVar6 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x1d0) = 0;
    pcVar8 = *(code **)(lVar6 + 0xd8);
    if (((pcVar8 == (code *)0x0) || (*(long *)(lVar6 + 0xe0) == 0)) &&
       (pcVar8 = *(code **)(lVar6 + 0xd0), pcVar8 == (code *)0x0)) {
      local_158 = 0;
      String::parse_latin1((String *)&local_158,"RenderSceneDataExtension");
      StringName::StringName((StringName *)&local_150,(String *)&local_158,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_148,(StringName *)&local_150);
      if (local_140 == 0) {
        lVar6 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_140);
        if (StringName::configured != '\0') goto LAB_0010597f;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
LAB_0010599e:
        lVar6 = *(long *)(this + 8);
        pcVar8 = *(code **)(lVar6 + 200);
        if (((pcVar8 == (code *)0x0) || (*(long *)(lVar6 + 0xe0) == 0)) &&
           (pcVar8 = *(code **)(lVar6 + 0xc0), pcVar8 == (code *)0x0)) goto LAB_001058b7;
        uVar5 = (*pcVar8)(*(undefined8 *)(lVar6 + 0xa0),this + 0x1c0);
        *(undefined8 *)(this + 0x1d0) = uVar5;
      }
      else {
        lVar6 = *(long *)(local_140 + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_140);
        if (StringName::configured != '\0') {
LAB_0010597f:
          if (local_150 != 0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
        if (lVar6 == 0) goto LAB_0010599e;
      }
      lVar6 = *(long *)(this + 8);
    }
    else {
      uVar5 = (*pcVar8)(*(undefined8 *)(lVar6 + 0xa0),this + 0x1c0,uVar3);
      *(undefined8 *)(this + 0x1d0) = uVar5;
      lVar6 = *(long *)(this + 8);
    }
LAB_001058b7:
    if (*(char *)(lVar6 + 0x29) != '\0') {
      plVar7 = (long *)operator_new(0x18,"");
      *plVar7 = (long)(this + 0x1d0);
      plVar7[1] = (long)(this + 0x1c8);
      plVar7[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar7;
    }
    this[0x1c8] = (RenderSceneDataExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_118);
  }
  pcVar8 = *(code **)(this + 0x1d0);
  if (pcVar8 != (code *)0x0) {
    local_78[0] = local_118;
    local_58[0]._0_8_ = 0;
    local_118[1] = 0;
    local_58[0]._8_4_ = 0;
    local_118[0] = param_1;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar8)(*(undefined8 *)(this + 0x10),local_78,local_58);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x1c0,pcVar8,local_78,local_58);
    }
    local_9c._8_4_ = local_58[0]._8_4_;
    local_9c._0_8_ = local_58[0]._0_8_;
  }
LAB_0010544c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
    local_58[0] = local_9c;
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



/* RenderSceneData::is_class_ptr(void*) const */

uint __thiscall RenderSceneData::is_class_ptr(RenderSceneData *this,void *param_1)

{
  return (uint)CONCAT71(0x10d9,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10d9,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* RenderSceneData::_getv(StringName const&, Variant&) const */

undefined8 RenderSceneData::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RenderSceneData::_setv(StringName const&, Variant const&) */

undefined8 RenderSceneData::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RenderSceneData::_validate_propertyv(PropertyInfo&) const */

void RenderSceneData::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* RenderSceneData::_property_can_revertv(StringName const&) const */

undefined8 RenderSceneData::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* RenderSceneData::_property_get_revertv(StringName const&, Variant&) const */

undefined8 RenderSceneData::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RenderSceneData::_notificationv(int, bool) */

void RenderSceneData::_notificationv(int param_1,bool param_2)

{
  return;
}



/* RenderSceneDataExtension::is_class_ptr(void*) const */

uint __thiscall RenderSceneDataExtension::is_class_ptr(RenderSceneDataExtension *this,void *param_1)

{
  return (uint)CONCAT71(0x10d9,(undefined4 *)param_1 ==
                               &RenderSceneData::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10d9,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10d9,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* RenderSceneDataExtension::_getv(StringName const&, Variant&) const */

undefined8 RenderSceneDataExtension::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RenderSceneDataExtension::_setv(StringName const&, Variant const&) */

undefined8 RenderSceneDataExtension::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RenderSceneDataExtension::_validate_propertyv(PropertyInfo&) const */

void RenderSceneDataExtension::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* RenderSceneDataExtension::_property_can_revertv(StringName const&) const */

undefined8 RenderSceneDataExtension::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* RenderSceneDataExtension::_property_get_revertv(StringName const&, Variant&) const */

undefined8 RenderSceneDataExtension::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RenderSceneDataExtension::_notificationv(int, bool) */

void RenderSceneDataExtension::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MethodBindTRC<RID>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<RID>::_gen_argument_type(int param_1)

{
  return 0x17;
}



/* MethodBindTRC<RID>::get_argument_meta(int) const */

undefined8 MethodBindTRC<RID>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Projection, unsigned int>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<Projection,unsigned_int>::_gen_argument_type
          (MethodBindTRC<Projection,unsigned_int> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffef) + 0x13;
}



/* MethodBindTRC<Projection, unsigned int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<Projection,unsigned_int>::get_argument_meta
          (MethodBindTRC<Projection,unsigned_int> *this,int param_1)

{
  return -(param_1 == 0) & 7;
}



/* MethodBindTRC<Vector3, unsigned int>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<Vector3,unsigned_int>::_gen_argument_type
          (MethodBindTRC<Vector3,unsigned_int> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xfffffff9) + 9;
}



/* MethodBindTRC<Vector3, unsigned int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<Vector3,unsigned_int>::get_argument_meta
          (MethodBindTRC<Vector3,unsigned_int> *this,int param_1)

{
  return -(param_1 == 0) & 7;
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



/* MethodBindTRC<Projection>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Projection>::_gen_argument_type(int param_1)

{
  return 0x13;
}



/* MethodBindTRC<Projection>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Projection>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Transform3D>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Transform3D>::_gen_argument_type(int param_1)

{
  return 0x12;
}



/* MethodBindTRC<Transform3D>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Transform3D>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Transform3D>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Transform3D>::~MethodBindTRC(MethodBindTRC<Transform3D> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010d780;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Transform3D>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Transform3D>::~MethodBindTRC(MethodBindTRC<Transform3D> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010d780;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Projection>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Projection>::~MethodBindTRC(MethodBindTRC<Projection> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010d7e0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Projection>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Projection>::~MethodBindTRC(MethodBindTRC<Projection> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010d7e0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<unsigned int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<unsigned_int>::~MethodBindTRC(MethodBindTRC<unsigned_int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010d840;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<unsigned int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<unsigned_int>::~MethodBindTRC(MethodBindTRC<unsigned_int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010d840;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Vector3, unsigned int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Vector3,unsigned_int>::~MethodBindTRC(MethodBindTRC<Vector3,unsigned_int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010d8a0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Vector3, unsigned int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Vector3,unsigned_int>::~MethodBindTRC(MethodBindTRC<Vector3,unsigned_int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010d8a0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Projection, unsigned int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Projection,unsigned_int>::~MethodBindTRC(MethodBindTRC<Projection,unsigned_int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010d900;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Projection, unsigned int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Projection,unsigned_int>::~MethodBindTRC(MethodBindTRC<Projection,unsigned_int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010d900;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<RID>::~MethodBindTRC() */

void __thiscall MethodBindTRC<RID>::~MethodBindTRC(MethodBindTRC<RID> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010d960;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<RID>::~MethodBindTRC() */

void __thiscall MethodBindTRC<RID>::~MethodBindTRC(MethodBindTRC<RID> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010d960;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* RenderSceneDataExtension::~RenderSceneDataExtension() */

void __thiscall RenderSceneDataExtension::~RenderSceneDataExtension(RenderSceneDataExtension *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_0010d5f0;
  if (bVar1) {
    if (*(long *)(this + 0x1f0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106004;
    }
    if (*(long *)(this + 0x1d8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106004;
    }
    if (*(long *)(this + 0x1c0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106004;
    }
    if (*(long *)(this + 0x1a8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106004;
    }
    if (*(long *)(this + 400) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106004;
    }
    if (*(long *)(this + 0x178) != 0) {
      StringName::unref();
    }
  }
LAB_00106004:
  *(undefined ***)this = &PTR__initialize_classv_0010d460;
  Object::~Object((Object *)this);
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



/* RenderSceneData::_bind_methods() [clone .cold] */

void RenderSceneData::_bind_methods(void)

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



/* RenderSceneDataExtension::_bind_methods() [clone .cold] */

void RenderSceneDataExtension::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RenderSceneDataExtension::_get_class_namev() const */

undefined8 * RenderSceneDataExtension::_get_class_namev(void)

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
LAB_00106263:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00106263;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RenderSceneDataExtension");
      goto LAB_001062ce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RenderSceneDataExtension");
LAB_001062ce:
  return &_get_class_namev()::_class_name_static;
}



/* RenderSceneData::_get_class_namev() const */

undefined8 * RenderSceneData::_get_class_namev(void)

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
LAB_00106353:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00106353;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RenderSceneData");
      goto LAB_001063be;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RenderSceneData");
LAB_001063be:
  return &_get_class_namev()::_class_name_static;
}



/* RenderSceneDataExtension::~RenderSceneDataExtension() */

void __thiscall RenderSceneDataExtension::~RenderSceneDataExtension(RenderSceneDataExtension *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_0010d5f0;
  if (bVar1) {
    if (*(long *)(this + 0x1f0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001064d4;
    }
    if (*(long *)(this + 0x1d8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001064d4;
    }
    if (*(long *)(this + 0x1c0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001064d4;
    }
    if (*(long *)(this + 0x1a8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001064d4;
    }
    if (*(long *)(this + 400) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001064d4;
    }
    if (*(long *)(this + 0x178) != 0) {
      StringName::unref();
    }
  }
LAB_001064d4:
  *(undefined ***)this = &PTR__initialize_classv_0010d460;
  Object::~Object((Object *)this);
  operator_delete(this,0x208);
  return;
}



/* RenderSceneDataExtension::get_class() const */

void RenderSceneDataExtension::get_class(void)

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



/* RenderSceneData::get_class() const */

void RenderSceneData::get_class(void)

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



/* RenderSceneData::is_class(String const&) const */

undefined8 __thiscall RenderSceneData::is_class(RenderSceneData *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010671f;
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
LAB_0010671f:
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
    if (cVar6 != '\0') goto LAB_001067d3;
  }
  cVar6 = String::operator==((String *)param_1,"RenderSceneData");
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
              if (lVar5 == 0) goto LAB_00106883;
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
LAB_00106883:
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
      if (cVar6 != '\0') goto LAB_001067d3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==((String *)param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_001067d3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RenderSceneDataExtension::is_class(String const&) const */

undefined8 __thiscall
RenderSceneDataExtension::is_class(RenderSceneDataExtension *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_001069af;
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
LAB_001069af:
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
    if (cVar5 != '\0') goto LAB_00106a63;
  }
  cVar5 = String::operator==((String *)param_1,"RenderSceneDataExtension");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RenderSceneData::is_class((RenderSceneData *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00106a63:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Transform3D>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Transform3D>::_gen_argument_type_info(int param_1)

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
  *puVar3 = 0x12;
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
      goto joined_r0x00106bfc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00106bfc:
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



/* MethodBindTRC<Projection>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Projection>::_gen_argument_type_info(int param_1)

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
  *puVar3 = 0x13;
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
      goto joined_r0x00106d7c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00106d7c:
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
      goto joined_r0x00106efc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00106efc:
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



/* MethodBindTRC<RID>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<RID>::_gen_argument_type_info(int param_1)

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
  *puVar3 = 0x17;
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



/* RenderSceneData::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RenderSceneData::_get_property_listv(List *param_1,bool param_2)

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
  local_78 = "RenderSceneData";
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RenderSceneData";
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
LAB_00107228:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00107228;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00107246;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00107246:
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
  StringName::StringName((StringName *)&local_78,"RenderSceneData",false);
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



/* RenderSceneDataExtension::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
RenderSceneDataExtension::_get_property_listv
          (RenderSceneDataExtension *this,List *param_1,bool param_2)

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
    RenderSceneData::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "RenderSceneDataExtension";
  local_70 = 0x18;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RenderSceneDataExtension";
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
LAB_00107628:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00107628;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00107645;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00107645:
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
  StringName::StringName((StringName *)&local_78,"RenderSceneDataExtension",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      RenderSceneData::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
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



/* GetTypeInfo<unsigned int, void>::get_class_info() */

GetTypeInfo<unsigned_int,void> * __thiscall
GetTypeInfo<unsigned_int,void>::get_class_info(GetTypeInfo<unsigned_int,void> *this)

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
      StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
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
      goto joined_r0x00107a9c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00107a9c:
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



/* MethodBindTRC<Projection, unsigned int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Projection,unsigned_int>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar6;
  long in_FS_OFFSET;
  long local_a0;
  long local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  undefined *local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar6 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = 0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_78 = 0;
    local_70 = 6;
    local_90 = (undefined1  [16])0x0;
    GetTypeInfo<unsigned_int,void>::get_class_info((GetTypeInfo<unsigned_int,void> *)&local_68);
    local_98 = CONCAT44(local_98._4_4_,local_68._0_4_);
    uVar4 = local_90._0_8_;
    if (local_90._0_8_ != local_60) {
      if (local_90._0_8_ != 0) {
        LOCK();
        plVar1 = (long *)(local_90._0_8_ + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          auVar2._8_8_ = 0;
          auVar2._0_8_ = local_90._8_8_;
          local_90 = auVar2 << 0x40;
          Memory::free_static((void *)(uVar4 + -0x10),false);
        }
      }
      local_90._0_8_ = local_60;
      local_60 = 0;
    }
    if (local_90._8_8_ != local_58) {
      StringName::unref();
      lVar3 = local_58;
      local_58 = 0;
      local_90._8_8_ = lVar3;
    }
    lVar5 = local_48;
    lVar3 = local_78;
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
          Memory::free_static((void *)(lVar5 + -0x10),false);
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
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      local_78 = local_48;
      local_70 = local_40;
    }
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
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
    *puVar6 = (undefined4)local_98;
    *(undefined8 *)(puVar6 + 2) = local_90._0_8_;
    *(undefined8 *)(puVar6 + 4) = local_90._8_8_;
    puVar6[6] = (undefined4)local_80;
    *(long *)(puVar6 + 8) = local_78;
    puVar6[10] = local_70;
    goto LAB_00107d3b;
  }
  local_a0 = 0;
  local_60 = 0;
  local_68 = &_LC7;
  String::parse_latin1((StrRange *)&local_a0);
  *puVar6 = 0x13;
  puVar6[6] = 0;
  *(undefined8 *)(puVar6 + 8) = 0;
  *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
  if (local_a0 == 0) {
    puVar6[10] = 6;
LAB_00107d67:
    StringName::operator=((StringName *)(puVar6 + 4),(StringName *)&local_98);
    lVar3 = local_a0;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar6 + 8),(CowData *)&local_a0);
    puVar6[10] = 6;
    if (puVar6[6] != 0x11) goto LAB_00107d67;
    StringName::StringName((StringName *)&local_68,(String *)(puVar6 + 8),false);
    if (*(undefined **)(puVar6 + 4) == local_68) {
      lVar3 = local_a0;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        lVar3 = local_a0;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar6 + 4) = local_68;
      lVar3 = local_a0;
    }
  }
  local_a0 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
LAB_00107d3b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector3, unsigned int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Vector3,unsigned_int>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar6;
  long in_FS_OFFSET;
  long local_a0;
  long local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  undefined *local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar6 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = 0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_78 = 0;
    local_70 = 6;
    local_90 = (undefined1  [16])0x0;
    GetTypeInfo<unsigned_int,void>::get_class_info((GetTypeInfo<unsigned_int,void> *)&local_68);
    local_98 = CONCAT44(local_98._4_4_,local_68._0_4_);
    uVar4 = local_90._0_8_;
    if (local_90._0_8_ != local_60) {
      if (local_90._0_8_ != 0) {
        LOCK();
        plVar1 = (long *)(local_90._0_8_ + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          auVar2._8_8_ = 0;
          auVar2._0_8_ = local_90._8_8_;
          local_90 = auVar2 << 0x40;
          Memory::free_static((void *)(uVar4 + -0x10),false);
        }
      }
      local_90._0_8_ = local_60;
      local_60 = 0;
    }
    if (local_90._8_8_ != local_58) {
      StringName::unref();
      lVar3 = local_58;
      local_58 = 0;
      local_90._8_8_ = lVar3;
    }
    lVar5 = local_48;
    lVar3 = local_78;
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
          Memory::free_static((void *)(lVar5 + -0x10),false);
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
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      local_78 = local_48;
      local_70 = local_40;
    }
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
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
    *puVar6 = (undefined4)local_98;
    *(undefined8 *)(puVar6 + 2) = local_90._0_8_;
    *(undefined8 *)(puVar6 + 4) = local_90._8_8_;
    puVar6[6] = (undefined4)local_80;
    *(long *)(puVar6 + 8) = local_78;
    puVar6[10] = local_70;
    goto LAB_0010807b;
  }
  local_a0 = 0;
  local_60 = 0;
  local_68 = &_LC7;
  String::parse_latin1((StrRange *)&local_a0);
  *puVar6 = 9;
  puVar6[6] = 0;
  *(undefined8 *)(puVar6 + 8) = 0;
  *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
  if (local_a0 == 0) {
    puVar6[10] = 6;
LAB_001080a7:
    StringName::operator=((StringName *)(puVar6 + 4),(StringName *)&local_98);
    lVar3 = local_a0;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar6 + 8),(CowData *)&local_a0);
    puVar6[10] = 6;
    if (puVar6[6] != 0x11) goto LAB_001080a7;
    StringName::StringName((StringName *)&local_68,(String *)(puVar6 + 8),false);
    if (*(undefined **)(puVar6 + 4) == local_68) {
      lVar3 = local_a0;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        lVar3 = local_a0;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar6 + 4) = local_68;
      lVar3 = local_a0;
    }
  }
  local_a0 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
LAB_0010807b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<Vector3, void>::get_class_info() */

GetTypeInfo<Vector3,void> * __thiscall
GetTypeInfo<Vector3,void>::get_class_info(GetTypeInfo<Vector3,void> *this)

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
  *(undefined4 *)this = 9;
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
      StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
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
      goto joined_r0x0010829c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010829c:
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



/* GetTypeInfo<Transform3D, void>::get_class_info() */

GetTypeInfo<Transform3D,void> * __thiscall
GetTypeInfo<Transform3D,void>::get_class_info(GetTypeInfo<Transform3D,void> *this)

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
  *(undefined4 *)this = 0x12;
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
      StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
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
      goto joined_r0x0010841c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010841c:
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



/* GetTypeInfo<Projection, void>::get_class_info() */

GetTypeInfo<Projection,void> * __thiscall
GetTypeInfo<Projection,void>::get_class_info(GetTypeInfo<Projection,void> *this)

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
  *(undefined4 *)this = 0x13;
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
      StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
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
      goto joined_r0x0010859c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010859c:
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



/* GetTypeInfo<RID, void>::get_class_info() */

GetTypeInfo<RID,void> * __thiscall
GetTypeInfo<RID,void>::get_class_info(GetTypeInfo<RID,void> *this)

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
  *(undefined4 *)this = 0x17;
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
      StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
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
      goto joined_r0x0010871c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010871c:
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



/* MethodBind* create_method_bind<RenderSceneData, Transform3D>(Transform3D (RenderSceneData::*)()
   const) */

MethodBind * create_method_bind<RenderSceneData,Transform3D>(_func_Transform3D *param_1)

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
  *(_func_Transform3D **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010d780;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "RenderSceneData";
  local_30 = 0xf;
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



/* MethodBind* create_method_bind<RenderSceneData, Projection>(Projection (RenderSceneData::*)()
   const) */

MethodBind * create_method_bind<RenderSceneData,Projection>(_func_Projection *param_1)

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
  *(_func_Projection **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010d7e0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "RenderSceneData";
  local_30 = 0xf;
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



/* MethodBind* create_method_bind<RenderSceneData, unsigned int>(unsigned int (RenderSceneData::*)()
   const) */

MethodBind * create_method_bind<RenderSceneData,unsigned_int>(_func_uint *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0010d840;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "RenderSceneData";
  local_30 = 0xf;
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



/* MethodBind* create_method_bind<RenderSceneData, Vector3, unsigned int>(Vector3
   (RenderSceneData::*)(unsigned int) const) */

MethodBind * create_method_bind<RenderSceneData,Vector3,unsigned_int>(_func_Vector3_uint *param_1)

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
  *(_func_Vector3_uint **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010d8a0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "RenderSceneData";
  local_30 = 0xf;
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



/* MethodBind* create_method_bind<RenderSceneData, Projection, unsigned int>(Projection
   (RenderSceneData::*)(unsigned int) const) */

MethodBind *
create_method_bind<RenderSceneData,Projection,unsigned_int>(_func_Projection_uint *param_1)

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
  *(_func_Projection_uint **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010d900;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "RenderSceneData";
  local_30 = 0xf;
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



/* MethodBind* create_method_bind<RenderSceneData, RID>(RID (RenderSceneData::*)() const) */

MethodBind * create_method_bind<RenderSceneData,RID>(_func_RID *param_1)

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
  *(_func_RID **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010d960;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "RenderSceneData";
  local_30 = 0xf;
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



/* RenderSceneData::_initialize_classv() */

void RenderSceneData::_initialize_classv(void)

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
    local_38 = "RenderSceneData";
    local_50 = 0;
    local_30 = 0xf;
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
        goto LAB_001092b5;
      }
    }
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
LAB_001092b5:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
LAB_00109880:
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
  if (lVar10 == 0) goto LAB_00109880;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_00109759:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_00109759;
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
    goto LAB_001098d6;
  }
  if (lVar10 == lVar7) {
LAB_001097ff:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_001098d6:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_001097ea;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_001097ff;
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
LAB_001097ea:
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
LAB_00109bd0:
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
  if (lVar8 == 0) goto LAB_00109bd0;
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
        goto LAB_00109ae1;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00109ae1:
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



/* RenderSceneDataExtension::_initialize_classv() */

void RenderSceneDataExtension::_initialize_classv(void)

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
  if (initialize_class()::initialized != '\0') goto LAB_00109d89;
  if (RenderSceneData::initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_58 = 0;
    local_40 = 6;
    local_48 = "Object";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "RenderSceneData";
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
        RenderSceneData::_bind_methods();
        RenderSceneData::initialize_class()::initialized = '\x01';
        goto LAB_00109c85;
      }
    }
    RenderSceneData::_bind_methods();
    RenderSceneData::initialize_class()::initialized = '\x01';
  }
LAB_00109c85:
  local_48 = "RenderSceneData";
  local_58 = 0;
  local_40 = 0xf;
  String::parse_latin1((StrRange *)&local_58);
  StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
  local_48 = "RenderSceneDataExtension";
  local_60 = 0;
  local_40 = 0x18;
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
  _bind_methods();
  initialize_class()::initialized = '\x01';
LAB_00109d89:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010a098) */
/* WARNING: Removing unreachable block (ram,0x0010a1c8) */
/* WARNING: Removing unreachable block (ram,0x0010a390) */
/* WARNING: Removing unreachable block (ram,0x0010a1d4) */
/* WARNING: Removing unreachable block (ram,0x0010a1de) */
/* WARNING: Removing unreachable block (ram,0x0010a370) */
/* WARNING: Removing unreachable block (ram,0x0010a1ea) */
/* WARNING: Removing unreachable block (ram,0x0010a1f4) */
/* WARNING: Removing unreachable block (ram,0x0010a350) */
/* WARNING: Removing unreachable block (ram,0x0010a200) */
/* WARNING: Removing unreachable block (ram,0x0010a20a) */
/* WARNING: Removing unreachable block (ram,0x0010a330) */
/* WARNING: Removing unreachable block (ram,0x0010a216) */
/* WARNING: Removing unreachable block (ram,0x0010a220) */
/* WARNING: Removing unreachable block (ram,0x0010a310) */
/* WARNING: Removing unreachable block (ram,0x0010a22c) */
/* WARNING: Removing unreachable block (ram,0x0010a236) */
/* WARNING: Removing unreachable block (ram,0x0010a2f0) */
/* WARNING: Removing unreachable block (ram,0x0010a242) */
/* WARNING: Removing unreachable block (ram,0x0010a24c) */
/* WARNING: Removing unreachable block (ram,0x0010a2d0) */
/* WARNING: Removing unreachable block (ram,0x0010a254) */
/* WARNING: Removing unreachable block (ram,0x0010a26a) */
/* WARNING: Removing unreachable block (ram,0x0010a276) */
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



/* MethodBindTRC<RID>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<RID>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC51,"./core/object/method_bind.h",0x267,
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
      goto LAB_0010a570;
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
      local_58 = (char *)(*(code *)pVVar4)();
      Variant::Variant((Variant *)local_48,(RID *)&local_58);
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
LAB_0010a570:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<RID>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<RID>::validated_call
          (MethodBindTRC<RID> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
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
      goto LAB_0010a862;
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
  *(undefined8 *)(param_3 + 8) = uVar3;
LAB_0010a862:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<RID>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<RID>::ptrcall(MethodBindTRC<RID> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
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
      goto LAB_0010aa61;
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
  *(undefined8 *)param_3 = uVar3;
LAB_0010aa61:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Projection, unsigned int>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTRC<Projection,unsigned_int>::validated_call
          (MethodBindTRC<Projection,unsigned_int> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  char *pcVar3;
  code *pcVar4;
  long *plVar5;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  char *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_88,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_88 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_88 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_90 = 0;
      local_80 = 0x35;
      String::parse_latin1((StrRange *)&local_90);
      vformat<StringName>((StringName *)&local_88,(StrRange *)&local_90,&local_98);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_88,0);
      pcVar3 = local_88;
      if (local_88 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_88 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_88 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_90;
      if (local_90 != 0) {
        LOCK();
        plVar5 = (long *)(local_90 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_90 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_98 != 0)) {
        StringName::unref();
      }
      goto LAB_0010ac96;
    }
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar4)((Projection *)&local_78,param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  puVar1 = *(undefined8 **)(param_3 + 8);
  *puVar1 = local_78;
  puVar1[1] = uStack_70;
  puVar1[2] = local_68;
  puVar1[3] = uStack_60;
  puVar1[4] = local_58;
  puVar1[5] = uStack_50;
  puVar1[6] = local_48;
  puVar1[7] = uStack_40;
  Projection::~Projection((Projection *)&local_78);
LAB_0010ac96:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Projection, unsigned int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Projection,unsigned_int>::ptrcall
          (MethodBindTRC<Projection,unsigned_int> *this,Object *param_1,void **param_2,void *param_3
          )

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  char *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_88,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_88 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_88 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_90 = 0;
      local_80 = 0x35;
      String::parse_latin1((StrRange *)&local_90);
      vformat<StringName>((StringName *)&local_88,(StrRange *)&local_90,&local_98);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_88,0);
      pcVar2 = local_88;
      if (local_88 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_88 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_88 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_90;
      if (local_90 != 0) {
        LOCK();
        plVar4 = (long *)(local_90 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_90 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_98 != 0)) {
        StringName::unref();
      }
      goto LAB_0010af03;
    }
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar3)((Projection *)&local_78,param_1 + *(long *)(this + 0x60),**param_2);
  *(undefined8 *)param_3 = local_78;
  *(undefined8 *)((long)param_3 + 8) = uStack_70;
  *(undefined8 *)((long)param_3 + 0x10) = local_68;
  *(undefined8 *)((long)param_3 + 0x18) = uStack_60;
  *(undefined8 *)((long)param_3 + 0x20) = local_58;
  *(undefined8 *)((long)param_3 + 0x28) = uStack_50;
  *(undefined8 *)((long)param_3 + 0x30) = local_48;
  *(undefined8 *)((long)param_3 + 0x38) = uStack_40;
  Projection::~Projection((Projection *)&local_78);
LAB_0010af03:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector3, unsigned int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Vector3,unsigned_int>::validated_call
          (MethodBindTRC<Vector3,unsigned_int> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  undefined1 auVar5 [12];
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
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
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0);
      pcVar2 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_58 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar4 = (long *)(local_60 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010b131;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  auVar5 = (*pcVar3)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  *(undefined1 (*) [12])(param_3 + 8) = auVar5;
LAB_0010b131:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector3, unsigned int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Vector3,unsigned_int>::ptrcall
          (MethodBindTRC<Vector3,unsigned_int> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  undefined1 auVar5 [12];
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0);
      pcVar2 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_58 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar4 = (long *)(local_60 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010b34f;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  auVar5 = (*pcVar3)(param_1 + *(long *)(this + 0x60),**param_2);
  *(undefined1 (*) [12])param_3 = auVar5;
LAB_0010b34f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
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
      _err_print_error(&_LC51,"./core/object/method_bind.h",0x267,
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
      goto LAB_0010b5e0;
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
LAB_0010b5e0:
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
      goto LAB_0010b844;
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
LAB_0010b844:
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
      goto LAB_0010ba43;
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
LAB_0010ba43:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Projection>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Projection>::call
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
  long local_b8;
  long local_b0;
  char *local_a8;
  undefined8 local_a0;
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined8 uStack_88;
  Projection local_78 [72];
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_a8,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_a8 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_a8 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_b0 = 0;
      local_a0 = 0x35;
      String::parse_latin1((StrRange *)&local_b0);
      vformat<StringName>((StringName *)&local_a8,(StrRange *)&local_b0,&local_b8);
      _err_print_error(&_LC51,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_a8,0,0);
      pcVar3 = local_a8;
      if (local_a8 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_a8 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_a8 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_b0;
      if (local_b0 != 0) {
        LOCK();
        plVar6 = (long *)(local_b0 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_b0 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_b8 != 0)) {
        StringName::unref();
      }
      goto LAB_0010bce0;
    }
    if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
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
      (*(code *)pVVar4)(local_78);
      Variant::Variant((Variant *)local_98,local_78);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_98[0];
      *(undefined8 *)(param_1 + 8) = local_90;
      *(undefined8 *)(param_1 + 0x10) = uStack_88;
      Projection::~Projection(local_78);
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
LAB_0010bce0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Projection>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Projection>::validated_call
          (MethodBindTRC<Projection> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant **ppVVar1;
  undefined8 *puVar2;
  long lVar3;
  Variant **ppVVar4;
  code *pcVar5;
  long *plVar6;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  Variant **local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_88,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar6 = *(long **)(param_1 + 0x118);
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar6 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_88 == (Variant **)*plVar6) {
      if ((StringName::configured != '\0') && (local_88 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_88 = (Variant **)0x10a3b8;
      local_80 = 0x35;
      local_90 = 0;
      String::parse_latin1((StrRange *)&local_90);
      vformat<StringName>((StringName *)&local_88,(StrRange *)&local_90,&local_98);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_88,0,0);
      ppVVar4 = local_88;
      if (local_88 != (Variant **)0x0) {
        LOCK();
        ppVVar1 = local_88 + -2;
        *ppVVar1 = *ppVVar1 + -1;
        UNLOCK();
        if (*ppVVar1 == (Variant *)0x0) {
          local_88 = (Variant **)0x0;
          Memory::free_static(ppVVar4 + -2,false);
        }
      }
      lVar3 = local_90;
      if (local_90 != 0) {
        LOCK();
        plVar6 = (long *)(local_90 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_90 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_98 != 0)) {
        StringName::unref();
      }
      goto LAB_0010bf7d;
    }
    param_2 = local_88;
    if ((StringName::configured != '\0') && (local_88 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar5 = *(code **)(this + 0x58);
  if (((ulong)pcVar5 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar5 = *(code **)(pcVar5 + (long)param_2 + -1);
  }
  (*pcVar5)((Projection *)&local_78,param_1 + *(long *)(this + 0x60),param_2);
  puVar2 = *(undefined8 **)(param_3 + 8);
  *puVar2 = local_78;
  puVar2[1] = uStack_70;
  puVar2[2] = local_68;
  puVar2[3] = uStack_60;
  puVar2[4] = local_58;
  puVar2[5] = uStack_50;
  puVar2[6] = local_48;
  puVar2[7] = uStack_40;
  Projection::~Projection((Projection *)&local_78);
LAB_0010bf7d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Projection>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Projection>::ptrcall
          (MethodBindTRC<Projection> *this,Object *param_1,void **param_2,void *param_3)

{
  void **ppvVar1;
  long lVar2;
  void **ppvVar3;
  code *pcVar4;
  long *plVar5;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  void **local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_88,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_88 == (void **)*plVar5) {
      if ((StringName::configured != '\0') && (local_88 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_88 = (void **)0x10a3b8;
      local_80 = 0x35;
      local_90 = 0;
      String::parse_latin1((StrRange *)&local_90);
      vformat<StringName>((StringName *)&local_88,(StrRange *)&local_90,&local_98);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_88,0,0);
      ppvVar3 = local_88;
      if (local_88 != (void **)0x0) {
        LOCK();
        ppvVar1 = local_88 + -2;
        *ppvVar1 = (void *)((long)*ppvVar1 + -1);
        UNLOCK();
        if (*ppvVar1 == (void *)0x0) {
          local_88 = (void **)0x0;
          Memory::free_static(ppvVar3 + -2,false);
        }
      }
      lVar2 = local_90;
      if (local_90 != 0) {
        LOCK();
        plVar5 = (long *)(local_90 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_90 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_98 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c1bb;
    }
    param_2 = local_88;
    if ((StringName::configured != '\0') && (local_88 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar4 = *(code **)(pcVar4 + (long)param_2 + -1);
  }
  (*pcVar4)((Projection *)&local_78,param_1 + *(long *)(this + 0x60),param_2);
  *(undefined8 *)param_3 = local_78;
  *(undefined8 *)((long)param_3 + 8) = uStack_70;
  *(undefined8 *)((long)param_3 + 0x10) = local_68;
  *(undefined8 *)((long)param_3 + 0x18) = uStack_60;
  *(undefined8 *)((long)param_3 + 0x20) = local_58;
  *(undefined8 *)((long)param_3 + 0x28) = uStack_50;
  *(undefined8 *)((long)param_3 + 0x30) = local_48;
  *(undefined8 *)((long)param_3 + 0x38) = uStack_40;
  Projection::~Projection((Projection *)&local_78);
LAB_0010c1bb:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Transform3D>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Transform3D>::call
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
  long local_a8;
  long local_a0;
  char *local_98;
  undefined8 local_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  Transform3D local_68 [56];
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_98,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_98 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_98 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_a0 = 0;
      local_90 = 0x35;
      String::parse_latin1((StrRange *)&local_a0);
      vformat<StringName>((StringName *)&local_98,(StrRange *)&local_a0,&local_a8);
      _err_print_error(&_LC51,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_98,0,0);
      pcVar3 = local_98;
      if (local_98 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_98 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_98 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_a0;
      if (local_a0 != 0) {
        LOCK();
        plVar6 = (long *)(local_a0 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_a8 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c450;
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
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
      (*(code *)pVVar4)(local_68);
      Variant::Variant((Variant *)local_88,local_68);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_88[0];
      *(undefined8 *)(param_1 + 8) = local_80;
      *(undefined8 *)(param_1 + 0x10) = uStack_78;
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
LAB_0010c450:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Transform3D>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Transform3D>::validated_call
          (MethodBindTRC<Transform3D> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant **ppVVar1;
  undefined8 *puVar2;
  long lVar3;
  Variant **ppVVar4;
  code *pcVar5;
  long *plVar6;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_88;
  long local_80;
  Variant **local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_78,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar6 = *(long **)(param_1 + 0x118);
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar6 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_78 == (Variant **)*plVar6) {
      if ((StringName::configured != '\0') && (local_78 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_78 = (Variant **)0x10a3b8;
      local_70 = 0x35;
      local_80 = 0;
      String::parse_latin1((StrRange *)&local_80);
      vformat<StringName>((StringName *)&local_78,(StrRange *)&local_80,&local_88);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_78,0,0);
      ppVVar4 = local_78;
      if (local_78 != (Variant **)0x0) {
        LOCK();
        ppVVar1 = local_78 + -2;
        *ppVVar1 = *ppVVar1 + -1;
        UNLOCK();
        if (*ppVVar1 == (Variant *)0x0) {
          local_78 = (Variant **)0x0;
          Memory::free_static(ppVVar4 + -2,false);
        }
      }
      lVar3 = local_80;
      if (local_80 != 0) {
        LOCK();
        plVar6 = (long *)(local_80 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_80 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c6d4;
    }
    param_2 = local_78;
    if ((StringName::configured != '\0') && (local_78 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar5 = *(code **)(this + 0x58);
  if (((ulong)pcVar5 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar5 = *(code **)(pcVar5 + (long)param_2 + -1);
  }
  (*pcVar5)(&local_68,param_1 + *(long *)(this + 0x60),param_2);
  puVar2 = *(undefined8 **)(param_3 + 8);
  *puVar2 = local_68;
  puVar2[1] = uStack_60;
  puVar2[2] = local_58;
  puVar2[3] = uStack_50;
  puVar2[4] = local_48;
  puVar2[5] = uStack_40;
LAB_0010c6d4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Transform3D>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Transform3D>::ptrcall
          (MethodBindTRC<Transform3D> *this,Object *param_1,void **param_2,void *param_3)

{
  void **ppvVar1;
  long lVar2;
  void **ppvVar3;
  code *pcVar4;
  long *plVar5;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_88;
  long local_80;
  void **local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_78,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_78 == (void **)*plVar5) {
      if ((StringName::configured != '\0') && (local_78 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_78 = (void **)0x10a3b8;
      local_70 = 0x35;
      local_80 = 0;
      String::parse_latin1((StrRange *)&local_80);
      vformat<StringName>((StringName *)&local_78,(StrRange *)&local_80,&local_88);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_78,0,0);
      ppvVar3 = local_78;
      if (local_78 != (void **)0x0) {
        LOCK();
        ppvVar1 = local_78 + -2;
        *ppvVar1 = (void *)((long)*ppvVar1 + -1);
        UNLOCK();
        if (*ppvVar1 == (void *)0x0) {
          local_78 = (void **)0x0;
          Memory::free_static(ppvVar3 + -2,false);
        }
      }
      lVar2 = local_80;
      if (local_80 != 0) {
        LOCK();
        plVar5 = (long *)(local_80 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_80 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c8f2;
    }
    param_2 = local_78;
    if ((StringName::configured != '\0') && (local_78 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar4 = *(code **)(pcVar4 + (long)param_2 + -1);
  }
  (*pcVar4)(&local_68,param_1 + *(long *)(this + 0x60),param_2);
  *(undefined8 *)param_3 = local_68;
  *(undefined8 *)((long)param_3 + 8) = uStack_60;
  *(undefined8 *)((long)param_3 + 0x10) = local_58;
  *(undefined8 *)((long)param_3 + 0x18) = uStack_50;
  *(undefined8 *)((long)param_3 + 0x20) = local_48;
  *(undefined8 *)((long)param_3 + 0x28) = uStack_40;
LAB_0010c8f2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector3, unsigned int>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<Vector3,unsigned_int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auVar4 [12];
  undefined8 uVar5;
  char *pcVar6;
  char cVar7;
  uint uVar8;
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
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined1 local_54 [12];
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar12 != (long *)0x0) && (plVar12[1] != 0)) && (*(char *)(plVar12[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar12[1] == 0) {
      plVar10 = (long *)plVar12[0x23];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
      }
    }
    else {
      plVar10 = (long *)(plVar12[1] + 0x20);
    }
    if (local_68 == (char *)*plVar10) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC51,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0);
      pcVar6 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar12 = (long *)(local_68 + -0x10);
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar6 + -0x10,false);
        }
      }
      lVar2 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar12 = (long *)(local_70 + -0x10);
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      auVar4._8_4_ = local_54._8_4_;
      auVar4._0_8_ = local_54._0_8_;
      if ((StringName::configured != '\0') && (local_54 = auVar4, local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010cbe8;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar14 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar13 = param_2[5];
    if (pVVar13 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010cc30;
LAB_0010cc20:
      pVVar13 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar13 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010cc30:
        uVar9 = 4;
        goto LAB_0010cbdd;
      }
      if (in_R8D == 1) goto LAB_0010cc20;
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
    cVar7 = Variant::can_convert_strict(*(undefined4 *)pVVar13,2);
    uVar5 = _LC56;
    if (cVar7 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar5;
    }
    uVar8 = Variant::operator_cast_to_unsigned_int(pVVar13);
    local_54 = (*(code *)pVVar14)((Variant *)((long)plVar12 + (long)pVVar1),uVar8);
    Variant::Variant((Variant *)local_48,local_54);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar9 = 3;
LAB_0010cbdd:
    *in_R9 = uVar9;
    in_R9[2] = 1;
  }
LAB_0010cbe8:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<Projection, unsigned int>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<Projection,unsigned_int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  uint uVar7;
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
  long local_b8;
  long local_b0;
  char *local_a8;
  undefined8 local_a0;
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined8 uStack_88;
  Projection local_78 [72];
  long local_30;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_a8,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_a8 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_a8 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_b0 = 0;
      local_a0 = 0x35;
      String::parse_latin1((StrRange *)&local_b0);
      vformat<StringName>((StringName *)&local_a8,(StrRange *)&local_b0,&local_b8);
      _err_print_error(&_LC51,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_a8,0);
      pcVar5 = local_a8;
      if (local_a8 != (char *)0x0) {
        LOCK();
        plVar11 = (long *)(local_a8 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_a8 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar2 = local_b0;
      if (local_b0 != 0) {
        LOCK();
        plVar11 = (long *)(local_b0 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_b0 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_b8 != 0)) {
        StringName::unref();
      }
      goto LAB_0010cfc0;
    }
    if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar12 = param_2[5];
    if (pVVar12 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010d010;
LAB_0010d000:
      pVVar12 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010d010:
        uVar8 = 4;
        goto LAB_0010cfb5;
      }
      if (in_R8D == 1) goto LAB_0010d000;
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
    uVar4 = _LC56;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    uVar7 = Variant::operator_cast_to_unsigned_int(pVVar12);
    (*(code *)pVVar13)(local_78,(Variant *)((long)plVar11 + (long)pVVar1),uVar7);
    Variant::Variant((Variant *)local_98,local_78);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_98[0];
    *(undefined8 *)(param_1 + 8) = local_90;
    *(undefined8 *)(param_1 + 0x10) = uStack_88;
    Projection::~Projection(local_78);
  }
  else {
    uVar8 = 3;
LAB_0010cfb5:
    *in_R9 = uVar8;
    in_R9[2] = 1;
  }
LAB_0010cfc0:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
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
/* RenderSceneDataExtension::~RenderSceneDataExtension() */

void __thiscall RenderSceneDataExtension::~RenderSceneDataExtension(RenderSceneDataExtension *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<RID>::~MethodBindTRC() */

void __thiscall MethodBindTRC<RID>::~MethodBindTRC(MethodBindTRC<RID> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Projection, unsigned int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Projection,unsigned_int>::~MethodBindTRC(MethodBindTRC<Projection,unsigned_int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Vector3, unsigned int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Vector3,unsigned_int>::~MethodBindTRC(MethodBindTRC<Vector3,unsigned_int> *this)

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
/* MethodBindTRC<Projection>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Projection>::~MethodBindTRC(MethodBindTRC<Projection> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Transform3D>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Transform3D>::~MethodBindTRC(MethodBindTRC<Transform3D> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


